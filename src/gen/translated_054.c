#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_006d9e20 */
byte F_006d9e20(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) != 0) {
    uVar1 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x18)));
  }
  if (*(int *)((int)this + 0x238) != 0) {
    return *(byte *)((int)this + 0x248);
  }
  return 0;
}

/* ref: FUN_006d9e70 */
ulonglong F_006d9e70(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar1 = 0xe0000000;
  if (*(int *)((int)this + 0x224) != 0) {
    uVar2 = *(uint *)((int)this + 0x220);
    iVar4 = 0;
    if (*(int * PTR32 *)((int)this + 0x214) != (int *)0x0) {
      iVar4 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4)));
    uVar1 = *(undefined4 *)(iVar4 + 0x10);
    uVar3 = *(undefined4 *)(iVar4 + 0x14);
  }
  if (*(int *)((int)this + 0x238) != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x240);
    uVar3 = *(undefined4 *)((int)this + 0x244);
  }
  return CONCAT44(uVar3,uVar1);
}

/* ref: FUN_006d9ec0 */
uint F_006d9ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x20))) >> 1 & 1;
}

/* ref: FUN_006d9f00 */
uint F_006d9f00(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    if (*(int *)((int)this + 0x238) == 0) goto LAB_006d9f43;
    iVar2 = (int)this + 0x230;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
  }
  in_EAX = 0;
  if (iVar2 != 0) {
    return *(byte *)(iVar2 + 0x20) & 1;
  }
LAB_006d9f43: ;
  return in_EAX & 0xffffff00;
}

/* ref: FUN_006d9f90 */
uint F_006d9f90(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x24)));
}

/* ref: FUN_006d9fd0 */
uint F_006d9fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x28)));
}

/* ref: FUN_006da050 */
uint F_006da050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x88);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x8c)) {
      return 0;
    }
    if (**(int * PTR32 *)(*puVar1 + 0x1d4) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006da0a0 */
unsigned int F_006da0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6e4)));
  if (piVar2 != *(int * PTR32 *)((int)this + 0x6e4)) {
    do {
      if (((*(byte *)(piVar2 + 0x1f) & 1) == 0) &&
         (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2[0x1d]), (char)uVar1 != '\0')) {
        *(byte *)(piVar2 + 0x1f) = *(byte *)(piVar2 + 0x1f) | 2;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x6e4));
  }
  return 0;
}

/* ref: FUN_006da0f0 */
unsigned int F_006da0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6f0)));
  if (piVar2 != *(int * PTR32 *)((int)this + 0x6f0)) {
    do {
      if (((char)piVar2[6] == '\0') &&
         (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2[4]), (char)uVar1 != '\0')) {
        *(undefined1 *)((int)piVar2 + 0x19) = 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x6f0));
  }
  return 0;
}

/* ref: FUN_006da140 */
byte F_006da140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x700)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0x700)) {
      return 0;
    }
    if (puVar2[4] == param_1) break;
    if (*(char *)((int)puVar2 + 0x19) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x19) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x19);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x19);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x19);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x19);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_006da1b0 */
byte F_006da1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6da1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if ((*(int *)((int)this + 0x210) != 0) &&
     (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x210) + 8))))(*(int * PTR32 *)((int)this + 0x210)),
     (char)uVar1 == '\0')) {
    return 0;
  }
  if (REFG(int, 0x1379694) != 0) {
    if (*(int *)(REFG(int, 0x1379694) + 0xe4) == 0) {
      return 1;
    }
    piVar2 = (int *)F_006da050(this,*(int *)(REFG(int, 0x1379694) + 0xe4));
    if ((piVar2 != (int *)0x0) && (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), (char)uVar1 != '\0'))
    {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006da210 */
byte F_006da210(unsigned int gen_a0)
{
  GEN_ENTER(0x6da210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if ((*(short *)((int)this + 0x20c) == 0) || (REFG(int, 0x1379694) == 0)) {
    return 0;
  }
  piVar2 = (int *)0x0;
  if (*(int *)(REFG(int, 0x1379694) + 0xe4) != 0) {
    piVar2 = (int *)F_006da050(this,*(int *)(REFG(int, 0x1379694) + 0xe4));
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      if ((char)uVar1 != '\0') goto LAB_006da255;
    }
    return 0;
  }
LAB_006da255: ;
  if ((*(int *)((int)this + 0x210) == 0) &&
     ((piVar2 == (int *)0x0 || (((uint)piVar2[0xe] >> 0xf & 1) == 0)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006da290 */
byte F_006da290(unsigned int gen_a0)
{
  GEN_ENTER(0x6da290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_006d9a40(this,1);
  return bVar1;
}

/* ref: FUN_006da2a0 */
byte F_006da2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6da2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x8c)) {
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        if ((char)uVar2 == '\0') {
          return 0;
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)((int)this + 0x8c));
  }
  return *(int *)((int)this + 0xb8) == 0;
}

/* ref: FUN_006da2e0 */
uint F_006da2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6da2e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  char cVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)));
  piVar8 = (int *)*piVar5;
  if (piVar8 != piVar5) {
    do {
      piVar5 = ((int *)GEN_TOP(((int)piVar3 + (-(uint)((*(uint *)&gen_args[1]) < (uint)piVar8[8]) - piVar8[9]))));
      if ((piVar5 < (int *)piVar8[0xb]) ||
         ((piVar5 <= (int *)piVar8[0xb] && ((*(uint *)&gen_args[1]) - piVar8[8] < (uint)piVar8[10])))) {
        if (*(char *)((int)piVar8 + 0x31) == '\0') {
          piVar7 = (int *)piVar8[2];
          if (*(char *)((int)piVar7 + 0x31) == '\0') {
            cVar2 = *(char *)(*piVar7 + 0x31);
            piVar5 = (int *)*piVar7;
            while (piVar8 = piVar7, cVar2 == '\0') {
              cVar2 = *(char *)(*piVar5 + 0x31);
              piVar7 = piVar5;
              piVar5 = (int *)*piVar5;
            }
          }
          else {
            cVar2 = *(char *)(piVar8[1] + 0x31);
            piVar4 = (int *)piVar8[1];
            piVar7 = piVar8;
            while ((piVar5 = piVar4, piVar8 = piVar5, cVar2 == '\0' && (piVar7 == (int *)piVar5[2]))
                  ) {
              cVar2 = *(char *)(piVar5[1] + 0x31);
              piVar4 = (int *)piVar5[1];
              piVar7 = piVar5;
            }
          }
        }
      }
      else {
        uVar6 = ((code *)*(gen_code32 *)(*(int *)piVar8[4] + 0x94))((int *)piVar8[4],piVar8[6]);
        if ((char)uVar6 == '\0') {
          piVar7 = piVar8;
          if (*(char *)((int)piVar8 + 0x31) == '\0') {
            piVar7 = (int *)piVar8[2];
            if (*(char *)((int)piVar7 + 0x31) == '\0') {
              cVar2 = *(char *)(*piVar7 + 0x31);
              piVar5 = (int *)*piVar7;
              while (cVar2 == '\0') {
                cVar2 = *(char *)(*piVar5 + 0x31);
                piVar7 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar2 = *(char *)(piVar8[1] + 0x31);
              piVar4 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar7 = piVar4, cVar2 == '\0' && (piVar5 == (int *)piVar7[2]))) {
                cVar2 = *(char *)(piVar7[1] + 0x31);
                piVar4 = (int *)piVar7[1];
                piVar5 = piVar7;
              }
            }
          }
          piVar5 = (int *)F_00743b10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))),&(*(int * PTR32 *)&gen_args[2]),piVar8);
          piVar8 = piVar7;
        }
        else {
          puVar1 = (uint *)(piVar8 + 8);
          uVar6 = *puVar1;
          *puVar1 = *puVar1 + piVar8[10];
          piVar8[9] = piVar8[9] + piVar8[0xb] + (uint)CARRY4(uVar6,piVar8[10]);
          piVar5 = (int *)(piVar8[0xb] + piVar8[9] + (uint)CARRY4(piVar8[10],piVar8[8]));
          if ((piVar5 <= piVar3) &&
             ((piVar3 != piVar5 || ((uint)(piVar8[10] + piVar8[8]) < (*(uint *)&gen_args[1]))))) {
            piVar8[8] = (*(uint *)&gen_args[1]);
            piVar8[9] = (int)piVar3;
          }
          if (*(char *)((int)piVar8 + 0x31) == '\0') {
            piVar7 = (int *)piVar8[2];
            if (*(char *)((int)piVar7 + 0x31) == '\0') {
              cVar2 = *(char *)(*piVar7 + 0x31);
              piVar5 = (int *)*piVar7;
              while (piVar8 = piVar7, cVar2 == '\0') {
                cVar2 = *(char *)(*piVar5 + 0x31);
                piVar7 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar2 = *(char *)(piVar8[1] + 0x31);
              piVar4 = (int *)piVar8[1];
              piVar7 = piVar8;
              while ((piVar5 = piVar4, piVar8 = piVar5, cVar2 == '\0' &&
                     (piVar7 == (int *)piVar5[2]))) {
                cVar2 = *(char *)(piVar5[1] + 0x31);
                piVar4 = (int *)piVar5[1];
                piVar7 = piVar5;
              }
            }
          }
        }
      }
    } while (piVar8 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4))));
  }
  return (uint)piVar5;
}

/* ref: FUN_006da470 */
uint F_006da470(unsigned int gen_a0)
{
  GEN_ENTER(0x6da470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = *(int *)((int)this + 0x738);
  while (iVar4 != 0) {
    uVar3 = *(uint *)((int)this + 0x734);
    if (*(int * PTR32 *)((int)this + 0x728) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int * PTR32 *)((int)this + 0x728);
    }
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4)));
    in_EAX = F_00536d10(&REFG(undefined4, 0x1375bc0),*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x10),
                          *(undefined4 *)(iVar4 + 0x14),(uint)*(byte *)(iVar4 + 0x18),
                          *(undefined4 *)(iVar4 + 0x1c),(uint)*(byte *)(iVar4 + 0x20));
    if (*(int *)((int)this + 0x738) == 0) break;
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x72c) + *(int *)((int)this + 0x734) * 4)));
    ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    *(int *)((int)this + 0x734) = *(int *)((int)this + 0x734) + 1;
    in_EAX = *(uint *)((int)this + 0x734);
    if (*(uint *)((int)this + 0x730) <= in_EAX) {
      *(undefined4 *)((int)this + 0x734) = 0;
    }
    piVar1 = (int *)((int)this + 0x738);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0x734) = 0;
    }
    iVar4 = *(int *)((int)this + 0x738);
  }
  if ((*(int *)((int)this + 0x740) != -0x20000000) || (*(int *)((int)this + 0x744) != 0)) {
    uVar5 = F_00538780(&REFG(undefined4, 0x1375bc0));
    in_EAX = (uint)uVar5;
    if ((in_EAX == *(uint *)((int)this + 0x740)) &&
       ((int)(uVar5 >> 0x20) == *(int *)((int)this + 0x744))) {
      in_EAX = F_00547460(&REFG(undefined4, 0x1375bc0),1);
    }
  }
  *(undefined4 *)((int)this + 0x740) = 0xe0000000;
  *(undefined4 *)((int)this + 0x744) = 0;
  return in_EAX;
}

/* ref: FUN_006da580 */
uint F_006da580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  *param_2 = 0;
  uVar1 = F_00ab21d0(param_1);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(uVar1 + 4 + uVar2) != '\0') {
        if (0x1c < uVar2) {
                    
          F_00c457e7("invalid bitset<N> position");
        }
        param_2[uVar2 >> 5] = param_2[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x1d);
  }
  return uVar1;
}

/* ref: FUN_006da5e0 */
uint F_006da5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6da5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  undefined4 uVar3;
  int * piVar4;
  int * piVar5;
  undefined * this_00;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x4c);
  uVar3 = *(undefined4 *)((int)this + 0x50);
  piVar5 = (int *)F_00a411a0(&REFG(undefined, 0x14a4230),this,(uint)*(byte *)((int)this + 0x48),
                               (uint)*(byte *)((int)this + 0x49));
  piVar7 = piVar5;
  if (piVar2 != piVar5) {
    if (*(char *)((int)this + 6) == '\0') {
      uVar6 = *(uint *)((int)this + 8);
      if ((*(byte *)((int)this + 0x14) & 1) != 0) {
        uVar6 = uVar6 + 1000000;
      }
    }
    else {
      this_00 = (undefined *)F_00a3a860(this);
      uVar6 = F_0046e5e0(this_00);
    }
    uVar6 = F_00ab24a0(uVar6);
    piVar7 = (int *)0x0;
    if (uVar6 != 0) {
      *(uint *)((int)this + 0x54) = (uint)*(ushort *)(uVar6 + 0x7c);
      uVar6 = *(uint *)(uVar6 + 0x28);
      *(int * PTR32 *)((int)this + 0x4c) = piVar5;
      *(bool *)((int)this + 0x58) = 1 < uVar6;
      if ((*(byte *)((int)this + 0x14) & 1) == 0) {
        piVar5 = *(int * PTR32 *)((int)this + 0x44);
      }
      *(int * PTR32 *)((int)this + 0x50) = piVar5;
      piVar7 = *(int * PTR32 *)((int)this + 0x60);
      piVar5 = (int *)*piVar7;
      if (piVar5 != piVar7) {
        do {
          piVar8 = piVar5;
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            piVar8 = (int *)piVar5[2];
            if (*(char *)((int)piVar8 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar8 + 0x15);
              piVar7 = (int *)*piVar8;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar7 + 0x15);
                piVar8 = piVar7;
                piVar7 = (int *)*piVar7;
              }
            }
            else {
              cVar1 = *(char *)(piVar5[1] + 0x15);
              piVar4 = (int *)piVar5[1];
              piVar7 = piVar5;
              while ((piVar8 = piVar4, cVar1 == '\0' && (piVar7 == (int *)piVar8[2]))) {
                cVar1 = *(char *)(piVar8[1] + 0x15);
                piVar4 = (int *)piVar8[1];
                piVar7 = piVar8;
              }
            }
          }
          piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar5[3] + 4))
                                    ((int *)piVar5[3],this,piVar2,uVar3,piVar5[4])));
          piVar5 = piVar8;
        } while (piVar8 != *(int * PTR32 *)((int)this + 0x60));
      }
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_006da6f0 */
unsigned int F_006da6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x6da6f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  F_006d7550(&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) != *(int *)((*(int *)&gen_args[0]) + 0x30)) {
    *(undefined4 *)((*(int *)&gen_args[1]) + 0x58) = *(*(undefined4 * PTR32 *)&gen_args[2]);
    *(undefined4 *)((*(int *)&gen_args[1]) + 0x5c) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    *(undefined4 *)((*(int *)&gen_args[1]) + 0x60) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
    *(float *)((*(int *)&gen_args[1]) + 100) = (*(float *)&gen_args[3]);
  }
  return 0;
}

/* ref: FUN_006da730 */
uint F_006da730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6da730u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x4c);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x50)) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x10))
                      ((int *)*puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
    return uVar2;
  }
  return (uint)puVar1;
}

/* ref: FUN_006da750 */
uint F_006da750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6da750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1);
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)this + 0x30)) {
    if ((char)param_3 != '\0') {
      uVar3 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
      *(undefined8 *)((int)pvVar1 + 0x70) = uVar3;
      *(uint *)((int)pvVar1 + 0x78) = (uint)*(ushort *)(param_2 + 0x22);
    }
    *(char *)((int)pvVar1 + 0x7c) = (char)param_3;
    uVar5 = 0;
    uVar4 = 0xffffffff;
    uVar3 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
    uVar2 = F_00aa7a30(param_1,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uVar4,uVar5);
  }
  return uVar2;
}

/* ref: FUN_006da7c0 */
uint F_006da7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da7c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  F_00aa3410((*(undefined * PTR32 *)&gen_args[1]),0xffffffff);
  F_006d7550(&(*(undefined * PTR32 *)&gen_args[1]),pvVar1);
  if ((*(undefined * PTR32 *)&gen_args[1]) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x7c))) = 0;
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006da800 */
uint F_006da800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6da800u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  uint in_EAX = 0;
  
  uVar1 = (*(uint *)&gen_args[2]);
  if ((*(uint *)&gen_args[2]) < 7) {
    F_006d7550(&(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[1]));
    in_EAX = (*(uint *)&gen_args[2]);
    if ((*(uint *)&gen_args[2]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      *(undefined1 *)((*(uint *)&gen_args[2]) + 0x7e + uVar1) = (undefined1)(*(undefined4 *)&gen_args[3]);
    }
  }
  return in_EAX;
}

/* ref: FUN_006da840 */
byte F_006da840(unsigned int gen_a0)
{
  GEN_ENTER(0x6da840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(int *)(gen_frame + 0x8)) = in_ecx;
  piVar1 = (int *)F_006d7550(&(*(int *)(gen_frame + 0x8)),REFG(undefined4, 0x1379694));
  if (*piVar1 == *(int *)(in_ecx + 0x30)) {
    return 0;
  }
  return *(char *)(*piVar1 + 0x7e) == '\0';
}

/* ref: FUN_006da870 */
uint F_006da870(unsigned int gen_a0)
{
  GEN_ENTER(0x6da870u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  code * pcVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined * this;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  
  this = REFG(void * PTR32, 0x1488344);
  piVar6 = (int *)param_1[5];
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar6;
  if ((piVar6 == (int *)0x2) || (piVar6 == (int *)0x8)) {
    piVar6 = (int *)*param_1;
    if (piVar6 != (int *)0xe0000000) {
      piVar5 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),piVar6,param_1[1]);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        (*(int *)(gen_frame + 0x0)) = param_1[0x16];
        (*(undefined4 *)(gen_frame + 0x4)) = param_1[0x17];
        (*(undefined4 *)(gen_frame + 0x8)) = param_1[0x18];
        F_00a9fa00(piVar5);
        ((code *)*(gen_code32 *)(*piVar5 + 0x3c))(piVar5,&(*(int *)(gen_frame + 0x0)));
        F_00aa0560(piVar5,param_1[0x1a]);
        ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,1,0);
        ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,2,0);
        F_00aa3410(piVar5,0xffffffff);
        F_00aa2cc0(piVar5,0);
        (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)))));
        F_00aa0980(piVar5,(float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)),0);
        piVar5[0xbb2] = GEN_FLT_TO(piVar5[0xbb2], REFG(float, 0x10b9490));
        *(undefined1 *)((int)piVar5 + 0x2ea7) = 1;
        F_00aa0600(piVar5,0);
        F_00aa6f20(piVar5,(uint)*(byte *)((int)param_1 + 0x7d),0);
        if ((*(int * PTR32 *)(gen_frame + 0x24)) == (int *)0x8) {
          F_00aa4310(piVar5);
          ((code *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5,0);
          *(byte *)((int)piVar5 + 0x2dd3) = *(byte *)((int)piVar5 + 0x2dd3) & 0xfb;
        }
        (*(int * PTR32 *)(gen_frame + 0x24)) = param_1 + 6;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        (*(int * PTR32 *)(gen_frame + 0x28)) = piVar5 + 0x5ac;
        do {
          iVar2 = *(*(int * PTR32 *)(gen_frame + 0x24));
          iVar3 = (*(int * PTR32 *)(gen_frame + 0x24))[1];
          (*(int *)(gen_frame + 0x1c)) = iVar3;
          (*(int *)(gen_frame + 0x18)) = iVar2;
          if ((*(*(int * PTR32 *)(gen_frame + 0x28)) != iVar2) || (piVar6 = (*(int * PTR32 *)(gen_frame + 0x20)), (*(int * PTR32 *)(gen_frame + 0x28))[1] != iVar3)) {
            F_00aa80c0(piVar5,(*(int * PTR32 *)(gen_frame + 0x20)),iVar2,iVar3);
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
          (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 0x1e8;
          (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 2;
          (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)((int)piVar6 + 1U);
        } while ((int)piVar6 + 1U < 3);
        (*(int * PTR32 *)(gen_frame + 0x24)) = param_1 + 0xc;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        piVar8 = piVar5 + 0xb64;
        do {
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x20));
          if (*piVar8 != *(*(int * PTR32 *)(gen_frame + 0x24))) {
            F_00aa2260(piVar5,(*(int * PTR32 *)(gen_frame + 0x20)),*(*(int * PTR32 *)(gen_frame + 0x24)));
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
          (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
          piVar6 = (int *)((int)piVar6 + 1);
          piVar8 = piVar8 + 1;
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar6;
        } while (piVar6 < &REFG(undefined, 0xa));
      }
    }
  }
  else if (piVar6 == (int *)0x3) {
    piVar6 = (int *)*param_1;
    if (piVar6 != (int *)0xe0000000) {
      piVar5 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),piVar6,param_1[1]);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        pcVar1 = *(gen_code32 *)(*piVar5 + 0x3c);
        (*(int *)(gen_frame + 0x10)) = param_1[0x16];
        (*(undefined4 *)(gen_frame + 0x14)) = param_1[0x17];
        (*(int *)(gen_frame + 0x18)) = param_1[0x18];
        (*pcVar1)(piVar5,&(*(int *)(gen_frame + 0x10)));
        ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5,param_1[0x19]);
        ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,1,0);
        piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,2,0)));
        if ((*(char *)((int)param_1 + 0x83) != '\0') &&
           (piVar6 = (int *)(uint)*(ushort *)((int)piVar5 + 0x18a), (int *)param_1[0x1b] != piVar6))
        {
          uVar7 = F_00ae2030(piVar5,(uint)*(ushort *)(param_1 + 0x1b));
          return uVar7;
        }
      }
    }
  }
  else if (piVar6 == (int *)0x1) {
    (*(char *)(gen_frame + 0x2f)) = REFG(char, 0x14a737d);
    (*(char *)(gen_frame + 0x2e)) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x7a8)));
    uVar7 = F_006d9fd0(REFG(void * PTR32, 0x1488344));
    (*(bool *)(gen_frame + 0x2d)) = uVar7 == 0x3d;
    uVar7 = F_006d9f90(this);
    piVar6 = REFG(int * PTR32, 0x1379694);
    (*(bool *)(gen_frame + 0x2c)) = uVar7 == 0xf;
    if (((*(char *)((int)param_1 + 0x7e) != '\0') && (F_00a9fa00(REFG(int * PTR32, 0x1379694)), (*(char *)(gen_frame + 0x2f)) == '\0'))
       && ((*(char *)(gen_frame + 0x2e)) == '\0')) {
      F_00a9f980(piVar6,GEN_TOF(gen_bits2f(param_1[0x16])),GEN_TOF(gen_bits2f(param_1[0x17])),GEN_TOF(gen_bits2f(param_1[0x18])),GEN_TOF(gen_bits2f(piVar6[0x2c])),0);
    }
    if (((*(char *)((int)param_1 + 0x7f) != '\0') && ((*(char *)(gen_frame + 0x2f)) == '\0')) && ((*(char *)(gen_frame + 0x2e)) == '\0')) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6,param_1[0x19]);
    }
    if (*(char *)(param_1 + 0x20) != '\0') {
      F_00aa0560(piVar6,param_1[0x1a]);
    }
    if (((*(char *)((int)param_1 + 0x82) != '\0') && ((*(bool *)(gen_frame + 0x2d)) == false)) && ((*(bool *)(gen_frame + 0x2c)) == false)) {
      F_00aa2cc0(piVar6,0);
    }
    if (((*(char *)((int)param_1 + 0x81) != '\0') && ((*(bool *)(gen_frame + 0x2d)) == false)) && ((*(bool *)(gen_frame + 0x2c)) == false)) {
      F_00aa3410(piVar6,0xffffffff);
    }
    if (*(char *)(param_1 + 0x21) != '\0') {
      (*(int * PTR32 *)(gen_frame + 0x20)) = param_1 + 6;
      (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6 + 0x5ac;
      do {
        iVar2 = *(*(int * PTR32 *)(gen_frame + 0x20));
        iVar3 = (*(int * PTR32 *)(gen_frame + 0x20))[1];
        (*(int *)(gen_frame + 0x1c)) = iVar3;
        (*(int *)(gen_frame + 0x18)) = iVar2;
        if ((*(*(int * PTR32 *)(gen_frame + 0x28)) != iVar2) || (piVar5 = (*(int * PTR32 *)(gen_frame + 0x24)), (*(int * PTR32 *)(gen_frame + 0x28))[1] != iVar3)) {
          F_00aa80c0(piVar6,(*(int * PTR32 *)(gen_frame + 0x24)),iVar2,iVar3);
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
        }
        (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 0x1e8;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (*(int * PTR32 *)(gen_frame + 0x20)) + 2;
        (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)((int)piVar5 + 1U);
      } while ((int)piVar5 + 1U < 3);
      (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x24)) = param_1 + 0xc;
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6 + 0xb64;
      do {
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x20));
        if (*(*(int * PTR32 *)(gen_frame + 0x28)) != *(*(int * PTR32 *)(gen_frame + 0x24))) {
          F_00aa2260(piVar6,(*(int * PTR32 *)(gen_frame + 0x20)),*(*(int * PTR32 *)(gen_frame + 0x24)));
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x20));
        }
        (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)((int)piVar5 + 1U);
      } while ((int)piVar5 + 1U < 10);
    }
    F_00a7ef20(&REFG(undefined1, 0x14ab058),(uint)*(byte *)((int)param_1 + 0x7d),0,0);
    fVar4 = (float10)*(double *)&REFG(undefined, 0x108bec8);
    *(undefined1 *)(piVar6 + 0xbaf) = 0;
    (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - fVar4))));
    F_00aa0980(piVar6,(float)((float10)1 - fVar4),0);
    pcVar1 = *(gen_code32 *)(*piVar6 + 0x24);
    piVar6[0xbb2] = GEN_FLT_TO(piVar6[0xbb2], REFG(float, 0x10b9490));
    *(undefined1 *)((int)piVar6 + 0x2ea7) = 1;
    (*pcVar1)(piVar6,1,0);
    ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6,2,0);
    ((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6,0);
    uVar7 = F_00aa0600(piVar6,0);
    return uVar7;
  }
  return (uint)piVar6;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf124 */
uint F_006dad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dad20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(*piVar4 + 4);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  bVar2 = F_00a01e10(((byte *)(gen_frame + 0x4)),3);
  iVar1 = *(int *)(this + 4);
  if (uVar3 < 7) {
    F_006d7550(&(*(int *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
    if ((*(int *)(gen_frame + 0x24)) != *(int *)(iVar1 + 0x30)) {
      *(byte *)((*(int *)(gen_frame + 0x24)) + 0x7e + uVar3) = bVar2;
    }
  }
  if (uVar3 == 0) {
    iVar1 = *(int *)(this + 4);
    F_006d7550(&(*(int *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
    if ((*(int *)(gen_frame + 0x24)) != *(int *)(iVar1 + 0x30)) {
      *(byte *)((*(int *)(gen_frame + 0x24)) + 0x7f) = bVar2;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf119 */
uint F_006dadd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dadd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  
  F_00a02210(((undefined1 *)(gen_frame + 0x8)),param_2);
  uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x8)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x10)),1,uVar4);
  uVar1 = *(undefined4 *)(*piVar5 + 0x60);
  uVar4 = F_00a019d0(((undefined1 *)(gen_frame + 0x8)));
  if (uVar4 == 1) {
LAB_006daeff: ;
    fVar7 = (float10)0;
    fVar8 = fVar7;
  }
  else {
    bVar3 = F_00a01f20(((undefined1 *)(gen_frame + 0x8)),2);
    if (bVar3 != 0) goto LAB_006daeff;
    bVar3 = F_00a01f40(((undefined1 *)(gen_frame + 0x8)),2);
    if (bVar3 == 0) {
      uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x8)),2);
      piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x10)),2,uVar4);
      iVar2 = *piVar5;
      uVar4 = param_2 >> 8;
      param_2 = param_2 & 0xffffff00;
      uVar6 = F_00a019d0(((undefined1 *)(gen_frame + 0x8)));
      if (2 < (int)uVar6) {
        bVar3 = F_00a01f40(((undefined1 *)(gen_frame + 0x8)),3);
        if (bVar3 != 0) {
          uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x10)),3);
          param_2 = CONCAT31((int3)uVar4,uVar6 != 0);
        }
      }
      if (iVar2 != 0) {
        F_006da750(*(undefined * PTR32 *)(param_1 + 4),uVar1,*(undefined4 *)(iVar2 + 4),param_2);
        F_00a02240(((undefined1 *)(gen_frame + 0x8)));
        return 0;
      }
      goto LAB_006daf1a;
    }
    fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x8)),2);
    (*(float *)(gen_frame + 0x28)) = (float)fVar7;
    fVar8 = F_00a01dd0(((undefined1 *)(gen_frame + 0x8)),3);
    fVar7 = (float10)((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x1080228) * (float10)(*(float *)(gen_frame + 0x28))) /
                            (float10)*(double *)&REFG(undefined, 0x1080220))));
    fVar8 = ((float10)(float)fVar8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
            (float10)*(double *)&REFG(undefined, 0x1080220);
  }
  F_00aa5250(uVar1,(float)fVar7,(float)fVar8,(float)(float10)0,0xffffffff,0);
LAB_006daf1a: ;
  F_00a02240(((undefined1 *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006daf30 */
uint F_006daf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6daf30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * this_00;
  uint uVar1;
  int * piVar2;
  uint in_ecx;
  
  uVar1 = (*(uint *)&gen_args[1]);
  this_00 = REFG(int * PTR32, 0x1379694);
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x400) == 0) {
    F_006d7550(&(*(uint *)&gen_args[1]),REFG(int * PTR32, 0x1379694));
    in_ecx = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(uVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x84) = 0;
    }
  }
  else {
    F_00a4a760(&REFG(undefined, 0x14a7360),0x13,1);
    ((code *)*(gen_code32 *)(*this_00 + 0x54))(this_00,1);
    uVar1 = (*(uint *)&gen_args[1]);
    F_006d7550(&(*(uint *)&gen_args[1]),this_00);
    if ((*(uint *)&gen_args[1]) != *(uint *)(uVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x84) = 1;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    in_ecx = 0;
    if (piVar2 != (int *)0x0) {
      in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
      F_0043d840(in_ecx);
    }
  }
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) & 2) != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0x1e,1);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))) = 1;
  }
  if (this_00 != (int *)0x0) {
    in_ecx = F_00aa0f60(this_00,1);
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 1;
  return in_ecx;
}

/* ref: FUN_006db050 */
uint F_006db050(unsigned int gen_a0)
{
  GEN_ENTER(0x6db050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    if (*(int *)(REFG(int, 0x1488344) + 0x238) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(REFG(int, 0x1488344) + 0x248);
    }
  }
  else {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar3 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar3 + 8);
    }
    bVar2 = *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar1 * 4))) + 0x18)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)bVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: Client::Game::Event::LuaActorModule::vf2 */
uint F_006db0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6db0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x30)));
  if (piVar6 != *(int * PTR32 *)(this + 0x30)) {
    do {
      puVar2 = (undefined4 *)piVar6[6];
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        piVar6[6] = 0;
      }
      if (*(char *)((int)piVar6 + 0x21) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x21);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x21);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x21);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x21);
            piVar4 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)(this + 0x30));
  }
  uVar5 = F_00743730(this + 0x2c);
  this[0x24] = (undefined1)0x0;
  return uVar5;
}

/* ref: FUN_006db170 */
uint F_006db170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db170u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * PTR32 * ppvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pvVar2 = (undefined *)F_007325b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(uint *)&gen_args[1]));
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 != pvVar1) {
    if ((*(uint *)((int)pvVar2 + 0x14) <= (*(undefined * PTR32 *)&gen_args[2])) &&
       (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)*(uint *)((int)pvVar2 + 0x14) ||
        (*(uint *)((int)pvVar2 + 0x10) <= (*(uint *)&gen_args[1]))))) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_006db1ab;
    }
  }
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar1;
  ppvVar3 = &(*(undefined * PTR32 *)&gen_args[2]);
LAB_006db1ab: ;
  if (*ppvVar3 != pvVar1) {
    return *(uint *)((int)*ppvVar3 + 0x18);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf6 */
byte F_006db1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x1;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf8 */
byte F_006db230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x2;
  *(uint *)(this + 0x48) = (uint)(byte)param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf10 */
byte F_006db290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x3;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf12 */
byte F_006db2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x4;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf14 */
byte F_006db350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0xa;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x50) = REFG(undefined4, 0x1379694);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf16 */
byte F_006db3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0xb;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x50) = REFG(undefined4, 0x1379694);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf18 */
byte F_006db430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0xf;
  *(uint *)(this + 0x48) = (uint)(ushort)param_1;
  *(undefined4 *)(this + 0x50) = REFG(undefined4, 0x1379694);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf20 */
byte F_006db490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x12;
  *(undefined4 *)(this + 0x48) = param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf21 */
byte F_006db4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x13;
  *(undefined4 *)(this + 0x48) = param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf22 */
byte F_006db550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x7;
  *(uint *)(this + 0x48) = (uint)(byte)param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf23 */
byte F_006db5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x8;
  *(undefined4 *)(this + 0x48) = param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf140 */
uint F_006db620(unsigned int gen_a0)
{
  GEN_ENTER(0x6db620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  this[0x5c] = (undefined1)((byte)this[0x5c] & 0xfb);
  *(undefined4 *)(this + 0x60) = 0;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x2c))) = 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))
                    (this,*(undefined4 *)(this + 0x58),(uint)*(ushort *)(this + 0x54),&REFG(undefined4, 0x1488348),
                     (uint)REFG(undefined1, 0x1488342));
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf49 */
uint F_006db690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6db690u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  ushort uVar5;
  
  this_00 = *(undefined * PTR32 *)((*(uint *)&gen_args[1]) + 0xf0);
  uVar4 = (*(uint *)&gen_args[2]) ^ (*(uint *)&gen_args[3]);
  (*(uint *)&gen_args[2]) = uVar4 & (*(uint *)&gen_args[3]) & 0xffff;
  (*(uint *)&gen_args[3]) = ~(*(uint *)&gen_args[3]) & uVar4 & 0xffff;
  uVar4 = 0;
  do {
    uVar5 = 1 << ((byte)uVar4 & 0x1f);
    bVar2 = F_005dbc90(this_00,uVar4);
    if (bVar2 != 0) {
      if ((uVar5 & (ushort)(*(uint *)&gen_args[2])) == 0) {
        if ((uVar5 & (ushort)(*(uint *)&gen_args[3])) != 0) {
          uVar3 = F_005e35d0(this_00,uVar4);
          if ((char)uVar3 != '\0') {
            F_005e3530(this_00,uVar4);
          }
        }
      }
      else {
        uVar3 = F_005e35d0(this_00,uVar4);
        if ((char)uVar3 == '\0') {
          F_005eb180(this_00,uVar4,0);
        }
      }
    }
    uVar3 = (*(uint *)&gen_args[1]);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  bVar2 = F_00ae20f0((*(uint *)&gen_args[1]));
  uVar4 = CONCAT31(extraout_var,bVar2);
  if (((*(undefined * PTR32 *)&gen_args[0])[0x44] != (undefined1)0x0) && ((bVar2 == 1 || (bVar2 == 2)))) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(uint *)&gen_args[1]),uVar3);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x83) = 0;
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf6 */
uint F_006db760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_006db1d0((undefined *)this,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_006db770 */
uint F_006db770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  int * piVar2;
  bool bVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * this_00;
  int iVar6;
  int * piVar7;
  
  uVar5 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
  *(uint *)((int)this + 0x56c) = uVar5;
  if (((*(char *)((int)this + 0x265) == '\0') && (*(char *)((int)this + 0x266) == '\0')) &&
     (*(char *)((int)this + 0x267) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar6 = *(int *)((int)this + 0x550);
  if (bVar3) {
    iVar6 = iVar6 + 3;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,iVar6,(param_1 & 0xff) << 8 | param_2 & 0xff);
    this_00[5] = iVar6;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x72dc20));
  }
  *(undefined4 * PTR32 *)((int)this + 0x570) = this_00;
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x54c)));
  iVar6 = 0;
  if (piVar7 != *(int * PTR32 *)((int)this + 0x54c)) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570),iVar6,piVar7[0x79]);
      iVar6 = iVar6 + 1;
      if (*(char *)((int)piVar7 + 0x2cd) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0x2cd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2cd);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x2cd);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x2cd);
          piVar4 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x2cd);
            piVar4 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int * PTR32 *)((int)this + 0x54c));
  }
  if (((*(char *)((int)this + 0x265) != '\0') || (*(char *)((int)this + 0x266) != '\0')) ||
     (*(char *)((int)this + 0x267) != '\0')) {
    F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570),iVar6,0x14);
    F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570),iVar6 + 1,0x15);
    F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570),iVar6 + 2,0x16);
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x56c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x56c),*(undefined4 *)((int)this + 0x570));
  return uVar5;
}

/* ref: FUN_006db910 */
uint F_006db910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db910u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  undefined * puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar4 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(int * PTR32 *)&gen_args[1]) == '\0') {
    (*(uint *)(gen_frame + 0x8)) = uVar4;
    uVar4 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    puVar3 = REFG(undefined * PTR32, 0x1323718);
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar4;
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar5 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar5 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar6 = (*(uint *)(gen_frame + 0x8)) + 2;
      F_00a01c40(this_00,iVar6,"className",(*(int * PTR32 *)&gen_args[1]));
      F_00a01c80(this_00,iVar6,"referenceCount",0);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x8)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar7 = *(undefined4 *)((*(uint *)(gen_frame + 0x8)) + 0xc);
          uVar4 = F_0042a990((*(uint *)(gen_frame + 0x8)) + 0x10);
          F_00a01c80(this_00,iVar6,uVar4,uVar7);
          F_00732c70(&(*(uint *)(gen_frame + 0x8)));
        } while ((*(uint *)(gen_frame + 0x8)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[1]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar6);
      if (puVar3 != (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar3);
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar6,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar6);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar6);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        uVar4 = F_00a01ad0(this_00,puVar3);
        return uVar4;
      }
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      uVar4 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      return uVar4;
    }
  }
  else {
    uVar5 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar5);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar5 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar5 == 0) {
      uVar4 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      return uVar4;
    }
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar7 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
        uVar5 = F_0042a990((int)(*(int * PTR32 *)&gen_args[1]) + 0x10);
        F_00a01c80(this_00,uVar4 + 1,uVar5,uVar7);
        F_00732c70(&(*(int * PTR32 *)&gen_args[1]));
      } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  uVar4 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  return uVar4;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf6 */
uint F_006dbb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dbb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
  iVar2 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    iVar1 = *(int *)(this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(int, 0x1379694));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x7e] = (undefined1)0x0;
    }
    iVar1 = *(int *)(this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x7f] = (undefined1)0x0;
    }
    iVar1 = *(int *)(this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x80] = (undefined1)0x0;
    }
    iVar1 = *(int *)(this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x81] = (undefined1)0x0;
    }
    iVar1 = *(int *)(this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x82] = (undefined1)0x0;
    }
  }
  F_00a6e080(&REFG(undefined, 0x14a9e40),0x18,0,0);
  bVar3 = F_006db1d0((undefined *)this,param_1);
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_006dbc50 */
uint F_006dbc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dbc50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_EAX = 0;
  
  iVar2 = (*(uint *)&gen_args[1]);
  iVar3 = REFG(int, 0x1379694);
  if (((*(uint *)&gen_args[1]) != 0) && (REFG(int, 0x1379694) != 0)) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))));
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x210))))((*(undefined * PTR32 *)&gen_args[0]),REFG(int, 0x1379694),iVar2,(*(uint *)&gen_args[1]),uVar1);
    if (in_EAX == 0xf) {
      iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      F_006d7550(&(*(uint *)&gen_args[1]),iVar3);
      if ((*(uint *)&gen_args[1]) != *(uint *)(iVar2 + 0x30)) {
        *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e) = 0;
      }
      iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      F_006d7550(&(*(uint *)&gen_args[1]),iVar3);
      in_EAX = (*(uint *)&gen_args[1]);
      if ((*(uint *)&gen_args[1]) != *(uint *)(iVar2 + 0x30)) {
        *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7f) = 0;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_006dbcd0 */
uint F_006dbcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6dbcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1379694) != 0) {
    iVar1 = *(int *)((int)this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(int, 0x1379694));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x7e) = 0;
    }
    iVar1 = *(int *)((int)this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x7f) = 0;
    }
    iVar1 = *(int *)((int)this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80) = 0;
    }
    iVar1 = *(int *)((int)this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x81) = 0;
    }
    iVar1 = *(int *)((int)this + 4);
    F_006d7550(&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x82) = 0;
    }
  }
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) & 0xe1 | 1;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x186) = 0;
  *(undefined4 *)((int)this + 0x18a) = 0;
  *(undefined4 *)((int)this + 0x18e) = 0;
  *(undefined1 *)((int)this + 0x192) = 0;
  *(undefined2 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x196) = 0;
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf125 */
unsigned int F_006dbdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6dbdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  short sVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  sVar2 = *(short *)(this + 0x1d4);
  uVar7 = F_00a4ffd0();
  iVar8 = uVar7 + 0x13b4;
  iVar9 = 0;
  do {
    if (*(short *)(iVar8 + 4) == sVar2) {
      if (-1 < iVar9) {
        uVar6 = *(undefined1 *)(iVar8 + 6);
        goto LAB_006dbe01;
      }
      break;
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0x10;
  } while (iVar9 < 0x1e);
  uVar6 = 0;
LAB_006dbe01: ;
  (*(undefined1 *)(gen_frame + 0xb)) = uVar6;
  uVar7 = 0;
  F_00744460(this + 0x328,&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int *)(gen_frame + 0x4)) == *(int *)(this + 0x32c)) {
    *(undefined4 *)(this + 0x38) = 0;
    return 0;
  }
  puVar3 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x14)));
  while (puVar3 != *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x14)) {
    uVar7 = uVar7 | 1 << (*(byte *)((int)puVar3 + 0x11) & 0x1f);
    if (*(char *)((int)puVar3 + 0x25) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x25) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x25);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x25);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x25);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x25);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  *(uint *)(this + 0x38) = uVar7;
  return 0;
}

/* ref: FUN_006dbea0 */
unsigned int F_006dbea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dbea0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  bool bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    (*(char *)(gen_frame + 0xb)) = '\0';
    (*(char *)(gen_frame + 0xa)) = '\0';
    piVar3 = (int *)F_00744460(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
    if (*piVar3 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
      piVar3 = *(int * PTR32 *)(*piVar3 + 0x14);
      piVar1 = (int *)*piVar3;
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
      if (piVar1 != piVar3) {
        uVar5 = piVar1[3];
        bVar2 = false;
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff;
        do {
          if (((*(int * PTR32 *)(gen_frame + 0x4)) == piVar3) || (uVar4 = (*(int * PTR32 *)(gen_frame + 0x4))[3], uVar5 != uVar4)) {
            if (bVar2) {
              (*(char *)(gen_frame + 0xb)) = '\x01';
            }
            else if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) != '\0') {
              (*(char *)(gen_frame + 0xa)) = '\x01';
            }
            if (((*(int * PTR32 *)(gen_frame + 0x4)) == piVar3) || (((*(char *)(gen_frame + 0xb)) != '\0' && ((*(char *)(gen_frame + 0xa)) != '\0')))) {
              if ((*(char *)(gen_frame + 0xb)) != '\0') {
                F_00a6e080(&REFG(undefined, 0x14a9e40),5,0,0);
              }
              if ((*(char *)(gen_frame + 0xa)) == '\0') {
                return 0;
              }
              F_00a6e080(&REFG(undefined, 0x14a9e40),6,0,0);
              return 0;
            }
            uVar4 = (*(int * PTR32 *)(gen_frame + 0x4))[3];
            bVar2 = false;
            (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff;
            uVar5 = uVar4;
          }
          if (*(byte *)((*(int * PTR32 *)(gen_frame + 0x4)) + 4) < 0x18) {
            if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x4)) + 0x11) == '\b') {
              bVar2 = true;
            }
            if (((1999999 < uVar4) && (uVar4 < 0x1e8f21)) &&
               (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x4)) + 0x11) == '\x01')) {
              (*(uint *)&gen_args[1]) = CONCAT13(1,(undefined3)(*(uint *)&gen_args[1]));
            }
          }
          F_00731b70(&(*(int * PTR32 *)(gen_frame + 0x4)));
        } while( true );
      }
    }
  }
  return 0;
}

/* ref: FUN_006dbfa0 */
byte F_006dbfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6dbfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  int * piVar6;
  undefined4 * puVar7;
  int * piVar8;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 0;
  F_007444d0((undefined *)((int)this + 0x328),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) == *(int * PTR32 *)((int)this + 0x32c)) {
    return 0;
  }
  piVar2 = (int *)(*(int * PTR32 *)(gen_frame + 0x4))[5];
  piVar8 = (int *)*piVar2;
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
  if (piVar8 != piVar2) {
    do {
      puVar5 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10)));
      while (puVar5 != *(undefined4 * PTR32 *)((int)this + 0x10)) {
        if (*(int *)(puVar5[3] + 0x80) == piVar8[3]) {
          return 1;
        }
        if (*(char *)((int)puVar5 + 0x11) == '\0') {
          puVar3 = (undefined4 *)puVar5[2];
          if (*(char *)((int)puVar3 + 0x11) == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x11);
            puVar5 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar3 + 0x11);
              puVar5 = puVar3;
              puVar3 = (undefined4 *)*puVar3;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar5[1] + 0x11);
            puVar7 = (undefined4 *)puVar5[1];
            puVar3 = puVar5;
            while ((puVar5 = puVar7, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar5[2]))) {
              cVar1 = *(char *)((int)puVar5[1] + 0x11);
              puVar7 = (undefined4 *)puVar5[1];
              puVar3 = puVar5;
            }
          }
        }
      }
      if (*(char *)((int)piVar8 + 0x25) == '\0') {
        piVar4 = (int *)piVar8[2];
        if (*(char *)((int)piVar4 + 0x25) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x25);
          piVar8 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x25);
            piVar8 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0x25);
          piVar6 = (int *)piVar8[1];
          piVar4 = piVar8;
          while ((piVar8 = piVar6, cVar1 == '\0' && (piVar4 == (int *)piVar8[2]))) {
            cVar1 = *(char *)(piVar8[1] + 0x25);
            piVar6 = (int *)piVar8[1];
            piVar4 = piVar8;
          }
        }
      }
    } while (piVar8 != piVar2);
  }
  return 0;
}

/* ref: FUN_006dc0c0 */
byte F_006dc0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dc0c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar2 = *(int *)((*(uint *)&gen_args[1]) + 0x80);
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff;
  F_007444d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),(int)&(*(uint *)&gen_args[1]) + 3);
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
    puVar3 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14)));
    while (puVar3 != *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14)) {
      if (puVar3[3] == iVar2) {
        return 1;
      }
      if (*(char *)((int)puVar3 + 0x25) == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar4 + 0x25) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x25);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x25);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x25);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x25);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006dc160 */
byte F_006dc160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6dc160u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined * this_00;
  int * piVar5;
  int * piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int * piVar12;
  bool bVar13;
  
  iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x318)));
  sVar3 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4)));
  uVar8 = F_00a4ffd0();
  iVar11 = 0;
  iVar9 = uVar8 + 0x13b4;
  do {
    if (*(short *)(iVar9 + 4) == sVar3) {
      if (-1 < iVar11) {
        (*(byte *)(gen_frame + 0xb)) = *(byte *)(iVar9 + 6);
        goto LAB_006dc199;
      }
      break;
    }
    iVar11 = iVar11 + 1;
    iVar9 = iVar9 + 0x10;
  } while (iVar11 < 0x1e);
  (*(byte *)(gen_frame + 0xb)) = 0;
LAB_006dc199: ;
  (*(bool *)(gen_frame + 0x9)) = **((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0';
  (*(byte *)(gen_frame + 0xa)) = (*(byte *)(gen_frame + 0xb));
  if (((char)(*(uint *)&gen_args[6]) == '\n') || ((char)(*(uint *)&gen_args[6]) == '\v')) {
    (*(int *)&gen_args[3]) = 5000000;
  }
  else if ((char)(*(uint *)&gen_args[6]) == '\x0f') {
    (*(int *)&gen_args[3]) = 0x4c9960;
  }
  else if (((byte)(*(undefined4 *)&gen_args[2]) == 1) && ((*(int *)&gen_args[3]) == 0)) {
    (*(int *)&gen_args[3]) = 0x4c7250;
  }
  F_007444d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(byte *)(gen_frame + 0xa)));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
    return 0;
  }
  F_0073c6c0((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int *)&gen_args[3]));
  piVar12 = (*(int * PTR32 *)(gen_frame + 0x0));
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != (*(int * PTR32 *)(gen_frame + 0x4))) {
    do {
      if (*(char *)((int)piVar12 + 0x11) != (char)(*(uint *)&gen_args[6])) goto LAB_006dc344;
      cVar2 = (char)piVar12[5];
      iVar9 = piVar12[6];
      cVar1 = (char)piVar12[7];
      if (cVar2 == '\0') {
LAB_006dc2a8: ;
        if ((*(int * PTR32 *)&gen_args[7]) != (int *)0x0) {
          *(*(int * PTR32 *)&gen_args[7]) = (int)(piVar12 + 4);
        }
        if ((*(byte *)(gen_frame + 0xb)) == 0) {
          uVar8 = F_006d8b60((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]));
          if (iVar4 != (*(int *)&gen_args[3])) {
            return uVar8 == 0;
          }
          if ((uVar8 != 0) &&
             ((((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 800))) & 2) == 0 || ((uVar8 & 0x500) != 0)) ||
              ((uVar8 & 0x70) != 0)))) {
            return 0;
          }
          return 1;
        }
        if ((*(byte *)(piVar12 + 8) & 1) == 0) {
          return 1;
        }
        iVar9 = (*(int * PTR32 *)&gen_args[1])[0x5d];
        if (((iVar9 != 0) && (uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1])), uVar8 == 1)) &&
           ((*(bool *)(gen_frame + 0x9)) != false)) {
          uVar8 = F_0042a990(iVar9 + 8);
          uVar10 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
          uVar8 = F_00a029f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"IsAcceptEvent",uVar10,uVar8,
                               (uint)(byte)(*(undefined4 *)&gen_args[2]),(*(int *)&gen_args[3]),(*(int *)&gen_args[4]),(*(int *)&gen_args[5]),(*(uint *)&gen_args[6]) & 0xff,1);
          if (uVar8 == 0) {
            this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
            (*(byte *)(gen_frame + 0xa)) = 0;
            bVar7 = F_00a01d80(this_00,&(*(byte *)(gen_frame + 0xa)));
            if (bVar7 != 0) {
              return (*(byte *)(gen_frame + 0xa));
            }
          }
        }
      }
      else {
        if (cVar2 != '\x01') {
          if (cVar2 == '\x02') {
            iVar11 = *(int *)&REFG(undefined2, 0x1379c78);
            if (cVar1 == '\x03') {
joined_r0x006dc278: ;
              if (iVar9 != iVar11) goto LAB_006dc344;
            }
            else if (cVar1 == '\x04') {
              bVar13 = iVar9 == *(int *)&REFG(undefined2, 0x1379c78);
              goto LAB_006dc2a2;
            }
          }
          else if (cVar2 == '\x03') {
            iVar11 = (*(int *)&gen_args[4]);
            if (cVar1 == '\x03') goto joined_r0x006dc278;
            if (cVar1 == '\x04') {
              bVar13 = iVar9 == (*(int *)&gen_args[4]);
              goto LAB_006dc2a2;
            }
          }
          goto LAB_006dc2a8;
        }
        if (cVar1 != '\x03') {
          if (cVar1 == '\x04') {
            bVar13 = iVar9 == (*(int *)&gen_args[5]);
LAB_006dc2a2: ;
            if (bVar13) goto LAB_006dc344;
          }
          goto LAB_006dc2a8;
        }
        if (iVar9 == (*(int *)&gen_args[5])) goto LAB_006dc2a8;
      }
LAB_006dc344: ;
      if (*(char *)((int)piVar12 + 0x25) == '\0') {
        piVar5 = (int *)piVar12[2];
        if (*(char *)((int)piVar5 + 0x25) == '\0') {
          cVar2 = *(char *)(*piVar5 + 0x25);
          piVar12 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar5 + 0x25);
            piVar12 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar2 = *(char *)(piVar12[1] + 0x25);
          piVar6 = (int *)piVar12[1];
          piVar5 = piVar12;
          while ((piVar12 = piVar6, cVar2 == '\0' && (piVar5 == (int *)piVar12[2]))) {
            cVar2 = *(char *)(piVar12[1] + 0x25);
            piVar6 = (int *)piVar12[1];
            piVar5 = piVar12;
          }
        }
      }
    } while (piVar12 != (*(int * PTR32 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_006dc410 */
byte F_006dc410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dc410u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]));
  iVar1 = *(*(int * PTR32 *)&gen_args[2]);
  iVar8 = (*(int * PTR32 *)&gen_args[2])[0x20];
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3),(char)uVar5)));
  iVar2 = piVar3[0x1e];
  uVar6 = ((code *)*(gen_code32 *)(iVar1 + 0xa8))(piVar3);
  cVar7 = (char)(*(undefined4 *)&gen_args[3]);
  if ((cVar7 == '\n') || (cVar7 == '\v')) {
    iVar8 = 5000000;
  }
  else if (cVar7 == '\x0f') {
    iVar8 = 0x4c9960;
  }
  else if (((char)uVar5 == '\x01') && (iVar8 == 0)) {
    iVar8 = 0x4c7250;
  }
  bVar4 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar8,iVar2,uVar6,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  return bVar4;
}

/* ref: FUN_006dc4a0 */
byte F_006dc4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6dc4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  char cVar1;
  short sVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int * piVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (((char)(*(undefined4 *)&gen_args[2]) == '\x01') && ((*(int *)&gen_args[3]) == 0)) {
    (*(int *)&gen_args[3]) = 0x4c7250;
  }
  sVar2 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4)));
  uVar9 = F_00a4ffd0();
  iVar11 = 0;
  iVar10 = uVar9 + 0x13b4;
  do {
    if (*(short *)(iVar10 + 4) == sVar2) {
      if (-1 < iVar11) {
        uVar7 = *(undefined1 *)(iVar10 + 6);
        goto LAB_006dc4eb;
      }
      break;
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 0x10;
  } while (iVar11 < 0x1e);
  uVar7 = 0;
LAB_006dc4eb: ;
  (*(undefined1 *)(gen_frame + 0x1b)) = uVar7;
  F_007444d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))),&(*(int *)(gen_frame + 0x10)),&(*(undefined1 *)(gen_frame + 0x1b)));
  if ((*(int *)(gen_frame + 0x10)) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
    this_00 = (undefined *)((*(int *)(gen_frame + 0x10)) + 0x10);
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    F_0073c6c0(this_00,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)&gen_args[3]));
    uVar5 = (*(undefined4 *)&gen_args[5]);
    uVar4 = (*(undefined4 *)&gen_args[4]);
    piVar12 = (*(int * PTR32 *)(gen_frame + 0x4));
    if ((*(int * PTR32 *)(gen_frame + 0x4)) != (*(int * PTR32 *)(gen_frame + 0x8))) {
      do {
        bVar8 = F_006dc160((*(undefined * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int *)&gen_args[3]),uVar4,uVar5,
                             (uint)*(byte *)((int)piVar12 + 0x11),&(*(int *)(gen_frame + 0x10)));
        if (bVar8 != 0) {
          if ((*(int *)(gen_frame + 0x14)) == 0) {
            (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x10));
          }
          if (*(byte *)(piVar12 + 4) < 0x18) goto LAB_006dc5e1;
        }
        if (*(char *)((int)piVar12 + 0x25) == '\0') {
          piVar3 = (int *)piVar12[2];
          if (*(char *)((int)piVar3 + 0x25) == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x25);
            piVar12 = piVar3;
            piVar3 = (int *)*piVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x25);
              piVar12 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar12[1] + 0x25);
            piVar6 = (int *)piVar12[1];
            piVar3 = piVar12;
            while ((piVar12 = piVar6, cVar1 == '\0' && (piVar3 == (int *)piVar12[2]))) {
              cVar1 = *(char *)(piVar12[1] + 0x25);
              piVar6 = (int *)piVar12[1];
              piVar3 = piVar12;
            }
          }
        }
      } while (piVar12 != (*(int * PTR32 *)(gen_frame + 0x8)));
      if ((*(int *)(gen_frame + 0x14)) != 0) {
LAB_006dc5e1: ;
        if ((*(int * PTR32 *)&gen_args[6]) != (int *)0x0) {
          *(*(int * PTR32 *)&gen_args[6]) = (*(int *)(gen_frame + 0x10));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_006dc600 */
byte F_006dc600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dc600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(param_2 + 0xc);
  if (*(char *)(param_2 + 4) != '\x04') {
    return 1;
  }
  bVar2 = F_006da140(REFG(void * PTR32, 0x1488344),*(undefined4 *)(param_2 + 8));
  if (cVar1 == '\x03') {
    if (bVar2 != 0) {
      return 1;
    }
  }
  else {
    if (cVar1 != '\x04') {
      return 1;
    }
    if (bVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006dc640 */
byte F_006dc640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dc640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  iVar5 = param_2[0x20];
  iVar1 = param_2[0x1e];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar3);
  uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0xa8))(param_2);
  if (((char)uVar3 == '\x01') && (iVar5 == 0)) {
    iVar5 = 0x4c7250;
  }
  bVar2 = F_006dc4a0(this,param_1,(*(undefined4 *)(gen_frame + 0x8)),iVar5,iVar1,uVar4,param_3);
  return bVar2;
}

/* ref: FUN_006dc6b0 */
byte F_006dc6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6dc6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_006d8b60(this,param_1);
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1;
  }
  return uVar1 == 0;
}

/* ref: FUN_006dc6d0 */
byte F_006dc6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6dc6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  char * param_6 = (char *)(uintptr_t)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = param_6[1];
  if ((cVar1 == '\n') || (cVar1 == '\v')) {
    iVar3 = 5000000;
  }
  else if (cVar1 == '\x0f') {
    iVar3 = 0x4c9960;
  }
  else {
    iVar3 = param_3;
    if (((char)param_2 == '\x01') && (param_3 == 0)) {
      iVar3 = 0x4c7250;
    }
  }
  uVar2 = F_006d8e70(this,param_1,param_2,iVar3,param_4,param_5,param_6);
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar2;
  }
  if ((((uVar2 != 0) && ((char)param_2 != '\a')) && (iVar3 != *(int *)((int)this + 0x31c))) &&
     (*param_6 == -1)) {
    return 1;
  }
  return uVar2 == 0;
}

/* ref: FUN_006dc760 */
byte F_006dc760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dc760u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar4 = (*(int * PTR32 *)&gen_args[2]);
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]));
  iVar2 = *(*(int * PTR32 *)&gen_args[2]);
  iVar8 = (*(int * PTR32 *)&gen_args[2])[0x20];
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3),(char)uVar6)));
  iVar3 = piVar4[0x1e];
  uVar7 = ((code *)*(gen_code32 *)(iVar2 + 0xa8))(piVar4);
  cVar1 = *(char *)((*(int *)&gen_args[3]) + 1);
  if ((cVar1 == '\n') || (cVar1 == '\v')) {
    iVar8 = 5000000;
  }
  else if (cVar1 == '\x0f') {
    iVar8 = 0x4c9960;
  }
  else if (((char)uVar6 == '\x01') && (iVar8 == 0)) {
    iVar8 = 0x4c7250;
  }
  bVar5 = F_006dc6d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar8,iVar3,uVar7,(*(int *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  return bVar5;
}

/* ref: FUN_006dc7f0 */
byte F_006dc7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dc7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]));
  iVar1 = *(*(int * PTR32 *)&gen_args[2]);
  iVar9 = (*(int * PTR32 *)&gen_args[2])[0x20];
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3),(char)uVar7)));
  iVar2 = piVar3[0x1e];
  uVar8 = ((code *)*(gen_code32 *)(iVar1 + 0xa8))(piVar3);
  uVar4 = (*(undefined4 *)&gen_args[3]);
  cVar5 = (char)(*(undefined4 *)&gen_args[3]);
  if ((cVar5 == '\n') || (cVar5 == '\v')) {
    iVar9 = 5000000;
  }
  else if (cVar5 == '\x0f') {
    iVar9 = 0x4c9960;
  }
  else if (((char)uVar7 == '\x01') && (iVar9 == 0)) {
    iVar9 = 0x4c7250;
  }
  (*(undefined4 *)&gen_args[3]) = 0;
  bVar6 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar9,iVar2,uVar8,uVar4,&(*(undefined4 *)&gen_args[3]));
  if (bVar6 != 0) {
    bVar6 = F_006dc6d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar9,iVar2,uVar8,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    if (bVar6 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006dc8b0 */
uint F_006dc8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dc8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x324);
  if ((*(int *)(iVar1 + 4) != 0) && (*(char *)(iVar1 + 0xc) != '\0')) {
    uVar2 = F_006d9070(this,param_1);
    if (uVar2 != 0) {
      if (1 < *(byte *)(iVar1 + 0xc)) {
        return *(int *)(iVar1 + 4) + uVar2;
      }
      if ((uVar2 == 1) || (uVar2 == 2)) {
        return *(uint *)(iVar1 + 4);
      }
    }
  }
  return 0;
}

/* ref: FUN_006dc900 */
byte F_006dc900(unsigned int gen_a0)
{
  GEN_ENTER(0x6dc900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 0xff;
  piVar1 = (int *)F_007444d0((undefined *)((int)this + 0x328),((undefined1 *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  return *piVar1 == *(int *)((int)this + 0x32c);
}

/* ref: FUN_006dc940 */
byte F_006dc940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6dc940u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_007444d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[2]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
    return 0;
  }
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14)) {
      return 0;
    }
    if (*(char *)((int)puVar2 + 0x11) == (char)(*(undefined4 *)&gen_args[1])) break;
    if (*(char *)((int)puVar2 + 0x25) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x25) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x25);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x25);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x25);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x25);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_006dc9e0 */
uint F_006dc9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6dc9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  undefined4 * puVar5;
  int iVar6;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x324)));
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 1) != 0) {
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8)));
    if (puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)))) {
      do {
        uVar3 = ((code *)*(gen_code32 *)(*(int *)*puVar5 + 8))((int *)*puVar5);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))));
    }
    if (((**((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0') && (*puVar1 != 0)) && ((char)puVar1[3] != '\0')) {
      cVar4 = (char)(*(undefined4 *)&gen_args[2]);
      iVar6 = (*(int *)&gen_args[3]);
      if (cVar4 == '\x01') {
        if ((*(int *)&gen_args[3]) == 0) {
          iVar6 = 0x4c7250;
        }
      }
      else {
        if (cVar4 == '\0') {
          return 0;
        }
        if (cVar4 == '\a') {
          return 0;
        }
      }
      (*(int *)&gen_args[3]) = 0;
      bVar2 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar6,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),&(*(int *)&gen_args[3]));
      if (((bVar2 != 0) && ((*(int *)&gen_args[3]) != 0)) &&
         (uVar3 = F_006d90d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar6,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(int *)&gen_args[3])), uVar3 != 0)) {
        if (1 < (byte)puVar1[3]) {
          return *puVar1 + uVar3;
        }
        if ((uVar3 == 1) || (uVar3 == 2)) {
          return *puVar1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006dcaf0 */
uint F_006dcaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6dcaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x324)));
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 1) != 0) {
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8)));
    if (puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)))) {
      do {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)*puVar5 + 8))((int *)*puVar5);
        if ((char)uVar4 == '\0') {
          return 0;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))));
    }
    uVar2 = (*(undefined4 *)&gen_args[5]);
    if (((**((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0') && (*(int *)(iVar1 + 4) != 0)) &&
       (*(char *)(iVar1 + 0xc) != '\0')) {
      iVar6 = (*(int *)&gen_args[3]);
      if (((char)(*(undefined4 *)&gen_args[2]) == '\x01') && ((*(int *)&gen_args[3]) == 0)) {
        iVar6 = 0x4c7250;
      }
      (*(int *)&gen_args[3]) = 0;
      bVar3 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar6,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),&(*(int *)&gen_args[3]));
      if (((*(int *)&gen_args[3]) != 0) && ((*(int * PTR32 *)&gen_args[6]) != (int *)0x0)) {
        *(*(int * PTR32 *)&gen_args[6]) = (*(int *)&gen_args[3]);
      }
      if (((bVar3 != 0) && ((*(int *)&gen_args[3]) != 0)) &&
         (uVar4 = F_006d90d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar6,(*(undefined4 *)&gen_args[4]),uVar2,(*(int *)&gen_args[3])), uVar4 != 0)) {
        if (1 < *(byte *)(iVar1 + 0xc)) {
          return *(int *)(iVar1 + 4) + uVar4;
        }
        if ((uVar4 == 1) || (uVar4 == 2)) {
          return *(uint *)(iVar1 + 4);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006dcc00 */
byte F_006dcc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dcc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_006d9290(this,param_1,param_3);
  if (bVar1 != 0) {
    bVar1 = F_006d9430(this,param_2);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006dcc40 */
uint F_006dcc40(unsigned int gen_a0)
{
  GEN_ENTER(0x6dcc40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  undefined4 uVar7;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar5 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  this = (undefined *)*puVar5;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar4);
  iVar1 = *piVar6;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),3);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3,uVar4);
  iVar2 = *piVar6;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (3 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x8)),4);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar3;
  }
  uVar7 = *(undefined4 *)(iVar2 + 4);
  bVar3 = F_006d9290(this,*(undefined4 *)(iVar1 + 0x60),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  if (bVar3 != 0) {
    bVar3 = F_006d9430(this,uVar7);
    if (bVar3 != 0) {
      uVar7 = 1;
      goto LAB_006dccef;
    }
  }
  uVar7 = 0;
LAB_006dccef: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),uVar7);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf137 */
uint F_006dcd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dcd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(uint *)(this + 0x38) >> 0x12 & 1) == 0) {
    return (*(uint *)(this + 0x38) >> 0x1a) << 8;
  }
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  iVar1 = param_2[0x1e];
  iVar5 = param_2[0x20];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar3);
  uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0xa8))(param_2);
  if (((char)uVar3 == '\x01') && (iVar5 == 0)) {
    iVar5 = 0x4c7250;
  }
  bVar2 = F_006dc160(this,param_1,(*(undefined4 *)(gen_frame + 0x8)),iVar5,iVar1,uVar4,0x12,0);
  if (bVar2 != 0) {
    bVar2 = F_006bfe00(this,param_1,param_2,param_3);
    if (bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf136 */
byte F_006dcdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dcdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  sVar1 = *(short *)(this + 0x1d4);
  uVar4 = F_00a4ffd0();
  iVar6 = 0;
  iVar5 = uVar4 + 0x13b4;
  do {
    if (*(short *)(iVar5 + 4) == sVar1) {
      if (-1 < iVar6) {
        cVar2 = *(char *)(iVar5 + 6);
        goto LAB_006dcde1;
      }
      break;
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x10;
  } while (iVar6 < 0x1e);
  cVar2 = '\0';
LAB_006dcde1: ;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (((cVar2 != '\0') && (bVar3 = F_006dc7f0(this,param_1,param_2,param_3,&(*(undefined * PTR32 *)(gen_frame + 0x8))), bVar3 == 0))
     && (((uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xd800) == 0)) {
    *(undefined2 *)(this + 0x36c) = 0x8001;
    return 0;
  }
  return 0;
}

/* ref: FUN_006dce40 */
uint F_006dce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dce40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]));
  iVar7 = *(*(int * PTR32 *)&gen_args[2]);
  iVar6 = (*(int * PTR32 *)&gen_args[2])[0x20];
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3),(char)uVar3)));
  (*(int *)(gen_frame + 0x8)) = piVar1[0x1e];
  uVar3 = ((code *)*(gen_code32 *)(iVar7 + 0xa8))(piVar1);
  bVar2 = (byte)(*(uint *)&gen_args[3]);
  if (9 < bVar2) {
    if (bVar2 < 0xc) {
      iVar6 = 5000000;
      (*(int *)(gen_frame + 0x8)) = (*(uint *)&gen_args[4]);
    }
    else {
      if (bVar2 != 0xf) goto LAB_006dce9a;
      iVar6 = 0x4c9960;
    }
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3) << 8)));
  }
LAB_006dce9a: ;
  (*(int *)(gen_frame + 0x4)) = 0;
  bVar2 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar6,(*(int *)(gen_frame + 0x8)),uVar3,(*(uint *)&gen_args[3]),&(*(int *)(gen_frame + 0x4)));
  if ((bVar2 != 0) && ((*(byte *)((*(int *)(gen_frame + 0x4)) + 0x10) & 0x40) != 0)) {
    iVar7 = (*(int * PTR32 *)&gen_args[1])[0x5d];
    if ((iVar7 == 0) || (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1])), uVar3 != 1)) {
      iVar7 = 0;
    }
    if ((iVar7 != 0) && (piVar1[0x5d] != 0)) {
      uVar3 = F_0042a990(piVar1[0x5d] + 8);
      uVar4 = F_0042a990(iVar7 + 8);
      uVar5 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
      (*(uint *)&gen_args[4]) = F_00a030f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"GetConditionId",uVar5,uVar4,uVar3,
                             (*(uint *)&gen_args[3]) & 0xff,(*(uint *)&gen_args[4]),1);
      if (((*(uint *)&gen_args[4]) == 0) &&
         (bVar2 = F_00727410(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),&(*(uint *)&gen_args[4])), bVar2 != 0)) {
        return (*(uint *)&gen_args[4]);
      }
    }
  }
  return 0x10;
}

/* ref: Client::Game::Event::QuestEventHandler::vf132 */
uint F_006dcf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dcf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006dce40(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf131 */
byte F_006dcf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dcf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006dce40(this,param_1,param_2,param_3,param_4);
  return uVar1 == 0x11;
}

/* ref: Client::Game::Event::ShopEventHandler::vf6 */
uint F_006dcfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dcfb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar3 = F_006db1d0((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
  iVar2 = REFG(int, 0x1379694);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (REFG(int, 0x1379694) != 0) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(uint *)&gen_args[1]),REFG(int, 0x1379694));
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e) = 0;
    }
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(uint *)&gen_args[1]),iVar2);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7f) = 0;
    }
  }
  return uVar4;
}

/* ref: FUN_006dd010 */
uint F_006dd010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dd010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1dc);
  *(undefined4 *)((int)this + 0x23c) = *(undefined4 *)(*param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1dc) = 0;
  }
  uVar2 = F_006d95c0(this);
  return uVar2;
}

/* ref: FUN_006dd050 */
uint F_006dd050(unsigned int gen_a0)
{
  GEN_ENTER(0x6dd050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  if (*(int *)((int)this + 0x1d8) == 0) {
    uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3c);
    *(uint *)((int)this + 0x1d8) = uVar1;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b923c));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6dd010));
  }
  *(undefined4 * PTR32 *)((int)this + 0x1dc) = this_00;
  F_00cb4540(this_00,0,(uint)*(ushort *)((int)this + 0x1d4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x1d8),*(undefined4 *)((int)this + 0x1dc));
  return uVar1;
}

/* ref: FUN_006dd0e0 */
byte F_006dd0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd0e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00744670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x348)));
}

/* ref: FUN_006dd110 */
uint F_006dd110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00744670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  return (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10;
}

/* ref: FUN_006dd140 */
byte F_006dd140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd140u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  byte bVar1;
  uint uVar2;
  undefined4 * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  F_0072dd60(((undefined1 *)(gen_frame + 0x10)));
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)&gen_args[1]) & 0xffff;
  F_00744670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344))),&(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8)));
  uVar2 = *(uint *)((*(int *)(gen_frame + 0xc)) + 0x18);
  if (uVar2 != 0) {
    ((uint *)(gen_frame + 0x14))[0] = uVar2;
    ((uint *)(gen_frame + 0x14))[1] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x28);
    ((undefined1 *)(gen_frame + 0x74))[0] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x31);
  }
  uVar2 = (uint)(uVar2 != 0);
  if (*(uint *)((*(int *)(gen_frame + 0xc)) + 0x1c) != 0) {
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d)] = *(uint *)((*(int *)(gen_frame + 0xc)) + 0x1c);
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d + 1)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2a);
    ((undefined1 *)(gen_frame + 0x74))[(int)(uVar2 * 0x74)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x32);
    uVar2 = uVar2 + 1;
  }
  if (*(uint *)((*(int *)(gen_frame + 0xc)) + 0x20) != 0) {
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d)] = *(uint *)((*(int *)(gen_frame + 0xc)) + 0x20);
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d + 1)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2c);
    ((undefined1 *)(gen_frame + 0x74))[(int)(uVar2 * 0x74)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x33);
    uVar2 = uVar2 + 1;
  }
  if (*(uint *)((*(int *)(gen_frame + 0xc)) + 0x24) != 0) {
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d)] = *(uint *)((*(int *)(gen_frame + 0xc)) + 0x24);
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d + 1)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2e);
    ((undefined1 *)(gen_frame + 0x74))[(int)(uVar2 * 0x74)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x34);
    uVar2 = uVar2 + 1;
  }
  ((undefined1 *)(gen_frame + 0x10))[0] = (char)uVar2;
  bVar1 = F_00ba01b0(((undefined1 *)(gen_frame + 0x10)));
  iVar3 = 4;
  this_00 = &(*(uint *)&gen_args[1]);
  do {
    this_00 = this_00 + -0x1d;
    F_0042c880(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
  return bVar1;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf126 */
unsigned int F_006dd280(unsigned int gen_a0)
{
  GEN_ENTER(0x6dd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  if (REFG(int, 0x1379694) != 0) {
    F_006d82c0((undefined *)this);
    uVar7 = F_00a4ffd0();
    piVar2 = *(int * PTR32 *)(this + 0x348);
    piVar3 = (int *)*piVar2;
    (*(int *)(gen_frame + 0x8)) = (int)piVar3;
    if (piVar3 != piVar2) {
      do {
        iVar5 = (*(int *)(gen_frame + 0x8));
        uVar1 = *(ushort *)((*(int *)(gen_frame + 0x8)) + 0xc);
        uVar8 = F_00ab37e0(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x38));
        iVar4 = *(int *)(iVar5 + 0x94);
        F_00a84160(&REFG(undefined, 0x14b1258),iVar4);
        F_00a6a890(&REFG(undefined, 0x14b1258),*(undefined4 *)(iVar5 + 0x94),(uint)uVar1,iVar5 + 0x40);
        if (*(byte *)(uVar7 + iVar4 * 0x10 + 0x168a) < 10) {
          bVar6 = F_006dd140(this,(uint)uVar1);
          uVar9 = 0xecef;
          if (bVar6 != 0) goto LAB_006dd320;
        }
        else {
LAB_006dd320: ;
          uVar9 = 0xece5;
        }
        F_00a83fa0(&REFG(undefined, 0x14b1258),*(undefined4 *)(iVar5 + 0x94),*(undefined4 *)(iVar5 + 0x38),uVar9
                     ,uVar8,1);
        F_00731c40(&(*(int *)(gen_frame + 0x8)));
      } while ((*(int *)(gen_frame + 0x8)) != *(int *)(this + 0x348));
    }
  }
  return 0;
}

/* ref: FUN_006dd370 */
uint F_006dd370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    if ((((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 8))) == 0x150001) &&
         (*(char *)(param_1 + 0x188) != '\x02')) && (iVar2 = *(int *)((int)this + 0xfc), iVar2 != 2)
        ) && ((iVar2 != 3 && (iVar2 != 6)))) {
      return 0;
    }
  }
  return 0x468;
}

/* ref: FUN_006dd3f0 */
uint F_006dd3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    if (((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 8))) == 0x150001) &&
        (*(char *)(param_1 + 0x188) != '\x02')) &&
       ((*(int *)((int)this + 0xfc) == 1 || (*(int *)((int)this + 0xfc) == 5)))) {
      return 0;
    }
  }
  return 0x468;
}

/* ref: FUN_006dd460 */
uint F_006dd460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    if (((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 8))) == 0x150001) &&
        (*(char *)(param_1 + 0x188) != '\x02')) && (*(int *)((int)this + 0xfc) == 4)) {
      return (*(char *)((int)this + 0x109) != '\0') - 1 & 0x468;
    }
  }
  return 0x468;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf34 */
uint F_006dd4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dd4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  undefined1 GVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  int * local_8;
  
  piVar7 = *(int * PTR32 *)(this + 0x100);
  piVar9 = (int *)*piVar7;
  uVar10 = 0;
  local_8 = piVar9;
  if (piVar9 != piVar7) {
    do {
      iVar11 = piVar9[4];
      if (iVar11 != piVar9[5]) {
        do {
          if (uVar10 < param_2) {
            puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 4)));
            puVar12 = puVar3;
            puVar13 = (undefined4 *)(iVar11 + 0x70);
            for (iVar8 = 0x34; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar13 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
            }
            uVar10 = uVar10 + 1;
            uVar6 = F_00ab6240(*(undefined4 *)(iVar11 + 4),0,puVar3);
            piVar7 = (int *)F_0042e430((undefined *)(iVar11 + 0x1c),uVar6);
            piVar9 = local_8;
          }
          iVar11 = iVar11 + 0x140;
        } while (iVar11 != piVar9[5]);
      }
      if (*(char *)((int)piVar9 + 0x21) == '\0') {
        piVar7 = (int *)piVar9[2];
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar7 + 0x21);
          piVar9 = piVar7;
          piVar7 = (int *)*piVar7;
          while (local_8 = piVar9, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar7 + 0x21);
            piVar9 = piVar7;
            piVar7 = (int *)*piVar7;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x21);
          piVar5 = (int *)piVar9[1];
          piVar4 = piVar9;
          while ((piVar7 = piVar5, piVar9 = piVar7, local_8 = piVar7, cVar1 == '\0' &&
                 (piVar4 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x21);
            piVar5 = (int *)piVar7[1];
            piVar4 = piVar7;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)(this + 0x100));
  }
  this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
  GVar2 = this[0x1c];
  uVar10 = CONCAT31((int3)((uint)((int)(uintptr_t)piVar7) >> 8),GVar2);
  if (((byte)GVar2 & 1) == 0) {
    this[0x1c] = (undefined1)((byte)GVar2 | 1);
    uVar10 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
  }
  puVar3 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar3 != (undefined4 *)0x0) {
    uVar10 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  return uVar10;
}

/* ref: FUN_006dd600 */
uint F_006dd600(unsigned int gen_a0)
{
  GEN_ENTER(0x6dd600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  uint * puVar6;
  undefined * this_00;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined * PTR32 * ppuVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint * local_c;
  byte local_5;
  
  *(undefined * PTR32 *)&REFG(undefined, 0x13241e0) = this;
  piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar8 = (uint)(byte)(*(char *)((int)this + 0x104) + 4);
  puVar6 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar8 * 8) | uVar8 * 8 + 4,0,0);
  if (puVar6 == (uint *)0x0) {
    local_c = (uint *)0x0;
  }
  else {
    local_c = puVar6 + 1;
    *puVar6 = uVar8;
    puVar6 = local_c;
    uVar3 = uVar8;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      *puVar6 = 0;
      puVar6 = puVar6 + 2;
    }
  }
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x100)));
  local_5 = 0;
  if (piVar9 != *(int * PTR32 *)((int)this + 0x100)) {
    do {
      puVar6 = (uint *)F_00ab3f70((uint)*(byte *)(piVar9 + 3));
      uVar7 = (uint)local_5;
      uVar3 = *puVar6;
      F_005a2710(local_c + uVar7 * 2 + 8,6);
      local_5 = local_5 + 1;
      (local_c + uVar7 * 2 + 8)[1] = (uVar3 & 0xffffff) + (int)puVar6;
      if (*(char *)((int)piVar9 + 0x21) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x21);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x21);
          piVar4 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x21);
            piVar4 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)((int)this + 0x100));
  }
  uVar15 = 4;
  uVar14 = 0;
  uVar13 = 0;
  ppuVar12 = &REFG(undefined * PTR32, 0x13241dc);
  uVar11 = 0xc;
  puVar6 = local_c;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5)));
  uVar8 = F_008668b0(this_00,uVar11,uVar8,puVar6,ppuVar12,uVar13,uVar14,uVar15);
  REFG(undefined4, 0x13241e4) = uVar8;
  if (local_c != (uint *)0x0) {
    uVar8 = local_c[-1];
    puVar6 = local_c + uVar8 * 2;
    while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
      puVar6 = puVar6 + -2;
      F_005a2670(puVar6);
    }
    uVar10 = F_00406b30(local_c + -1);
    uVar8 = (uint)uVar10;
  }
  return uVar8;
}

/* ref: FUN_006dd780 */
unsigned int F_006dd780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd780u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = (*(int *)&gen_args[1]);
  iVar3 = REFG(int, 0x1379694);
  if (((*(int *)&gen_args[1]) != 0) && (REFG(int, 0x1379694) != 0)) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))));
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x210))))((*(undefined * PTR32 *)&gen_args[0]),REFG(int, 0x1379694),iVar2,(*(int *)&gen_args[1]),uVar1);
    if (uVar4 == 0xf) {
      iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      F_006d7550(&(*(int *)&gen_args[1]),iVar3);
      if ((*(int *)&gen_args[1]) != *(int *)(iVar2 + 0x30)) {
        *(undefined1 *)((*(int *)&gen_args[1]) + 0x7e) = 0;
      }
      iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      F_006d7550(&(*(int *)&gen_args[1]),iVar3);
      if ((*(int *)&gen_args[1]) != *(int *)(iVar2 + 0x30)) {
        *(undefined1 *)((*(int *)&gen_args[1]) + 0x7f) = 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_006dd800 */
ushort F_006dd800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short * psVar8;
  short * psVar9;
  uint uVar10;
  ushort * puVar11;
  int local_14;
  int local_c;
  
  uVar4 = F_00a4ffd0();
  local_14 = *(int *)((int)this + 0x248);
  if (local_14 != *(int *)((int)this + 0x244)) {
    psVar8 = (short *)(local_14 + -0x6a);
    do {
      uVar1 = psVar8[-5];
      if ((char)psVar8[9] == '\0') {
        uVar10 = 0;
        local_c = 0;
        if ((char)psVar8[-4] == '\x01') {
          puVar11 = (ushort *)(psVar8 + -3);
          do {
            uVar2 = *puVar11;
            if (uVar2 != 0) {
              if ((199 < uVar2 >> 3) ||
                 ((*((byte *)GEN_TOP(((uVar2 >> 3) + 0x12ea + uVar4))) & (byte)(0x80 >> ((byte)uVar2 & 7))) ==
                  0)) goto LAB_006dd988;
              local_c = local_c + 1;
            }
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar10 < 3);
          if (local_c != 0) goto LAB_006dd8e5;
        }
        else if ((char)psVar8[-4] == '\x02') {
          puVar11 = (ushort *)(psVar8 + -3);
          do {
            uVar2 = *puVar11;
            if (((uVar2 != 0) && (uVar2 >> 3 < 200)) &&
               ((*((byte *)GEN_TOP(((uVar2 >> 3) + 0x12ea + uVar4))) & (byte)(0x80 >> ((byte)uVar2 & 7))) != 0)
               ) goto LAB_006dd8e5;
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar10 < 3);
        }
      }
      else {
LAB_006dd8e5: ;
        if (*(char *)((int)psVar8 + 0x13) != '\0') {
          return uVar1;
        }
        uVar10 = 0;
        local_c = 0;
        psVar9 = psVar8;
        if ((char)psVar8[3] == '\x01') {
          do {
            sVar3 = *psVar9;
            if (sVar3 != 0) {
              uVar5 = F_00a4ffd0();
              iVar7 = 0;
              iVar6 = uVar5 + 0x13b4;
              while (*(short *)(iVar6 + 4) != sVar3) {
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 0x10;
                if (0x1d < iVar7) goto LAB_006dd988;
              }
              if (((iVar7 < 0) || (*(byte *)(iVar6 + 6) == 0)) ||
                 (*(byte *)(iVar6 + 6) < *(byte *)((int)psVar8 + uVar10 + 7))) goto LAB_006dd988;
              local_c = local_c + 1;
            }
            uVar10 = uVar10 + 1;
            psVar9 = psVar9 + 1;
          } while (uVar10 < 3);
          if (local_c != 0) {
            return uVar1;
          }
        }
        else if ((char)psVar8[3] == '\x02') {
          do {
            sVar3 = *psVar9;
            if (sVar3 != 0) {
              uVar5 = F_00a4ffd0();
              iVar7 = 0;
              iVar6 = uVar5 + 0x13b4;
              do {
                if (*(short *)(iVar6 + 4) == sVar3) {
                  if (((-1 < iVar7) && (*(byte *)(iVar6 + 6) != 0)) &&
                     (*(byte *)((int)psVar8 + uVar10 + 7) <= *(byte *)(iVar6 + 6))) {
                    return uVar1;
                  }
                  break;
                }
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 0x10;
              } while (iVar7 < 0x1e);
            }
            uVar10 = uVar10 + 1;
            psVar9 = psVar9 + 1;
          } while (uVar10 < 3);
        }
      }
LAB_006dd988: ;
      local_14 = local_14 + -0x74;
      psVar8 = psVar8 + -0x3a;
    } while (local_14 != *(int *)((int)this + 0x244));
  }
  return 0;
}

/* ref: FUN_006dd9f0 */
uint F_006dd9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6dd9f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  ushort uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  this = (undefined *)*puVar3;
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),2);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2,uVar2);
  uVar1 = F_006dd800(this,*(undefined4 *)(*piVar4 + 0x60));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006dda70 */
uint F_006dda70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dda70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(uint *)&gen_args[1]) < 0x140002) {
    if ((*(uint *)&gen_args[1]) == 0x140001) {
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58)));
    }
    if ((*(uint *)&gen_args[1]) == 0xa0001) {
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    }
    if ((*(uint *)&gen_args[1]) == 0xe0000) {
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)));
    }
  }
  else if ((*(uint *)&gen_args[1]) == 0x150001) {
    return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)));
  }
  F_00743680(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    return *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandlerModule::vf2 */
uint F_006ddaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ddaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  *(undefined4 *)&REFG(undefined, 0x1324140) = 0;
  REFG(undefined4, 0x1324144) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324148) = 0;
  REFG(undefined4, 0x132412c) = 0;
  REFG(undefined4, 0x1324130) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324134) = 0;
  REFG(undefined4, 0x13241d0) = 0;
  REFG(undefined4, 0x13241d4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241d8) = 0;
  REFG(undefined4, 0x132410c) = 0;
  REFG(undefined4, 0x1324110) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324114) = 0;
  REFG(undefined4, 0x132411c) = 0;
  REFG(undefined4, 0x1324120) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324124) = 0;
  REFG(undefined4, 0x1324160) = 0;
  REFG(undefined4, 0x1324164) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324168) = 0;
  REFG(undefined4, 0x1324170) = 0;
  REFG(undefined4, 0x1324174) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324178) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324180) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324184) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324188) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324190) = 0;
  REFG(undefined4, 0x1324194) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324198) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241a0) = 0;
  REFG(undefined4, 0x13241a4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241a8) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241b0) = 0;
  REFG(undefined4, 0x13241b4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241b8) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241c0) = 0;
  REFG(undefined4, 0x13241c4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241c8) = 0;
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x30)));
  if (piVar6 != *(int * PTR32 *)(this + 0x30)) {
    do {
      puVar2 = (undefined4 *)piVar6[4];
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        piVar6[4] = 0;
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar4 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)(this + 0x30));
  }
  uVar5 = F_00743620(this + 0x2c);
  this[0x24] = (undefined1)0x0;
  return uVar5;
}

/* ref: FUN_006ddc40 */
uint F_006ddc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ddc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006dda70(this,param_1);
  return uVar1;
}

/* ref: FUN_006ddc50 */
unsigned int F_006ddc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ddc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar2 = *(short *)(piVar5[4] + 10);
      uVar6 = 0;
      if (param_2 != 0) {
        do {
          if (sVar2 == *(short *)(param_1 + uVar6 * 2)) {
            ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x22c))((int *)piVar5[4]);
            ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1c8))((int *)piVar5[4]);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_2);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddd00 */
unsigned int F_006ddd00(unsigned int gen_a0)
{
  GEN_ENTER(0x6ddd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4]);
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1c8))((int *)piVar4[4]);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddd80 */
unsigned int F_006ddd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ddd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar2 = *(short *)(piVar5[4] + 10);
      uVar6 = 0;
      if (param_2 != 0) {
        do {
          if (sVar2 == *(short *)(param_1 + uVar6 * 2)) {
            ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x22c))((int *)piVar5[4]);
            ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e0))((int *)piVar5[4]);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_2);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006dde30 */
unsigned int F_006dde30(unsigned int gen_a0)
{
  GEN_ENTER(0x6dde30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4]);
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e0))((int *)piVar4[4]);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddeb0 */
unsigned int F_006ddeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ddeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4]);
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f0))((int *)piVar4[4]);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddf30 */
unsigned int F_006ddf30(unsigned int gen_a0)
{
  GEN_ENTER(0x6ddf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4]);
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f8))((int *)piVar4[4]);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddfb0 */
unsigned int F_006ddfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ddfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar2 = *(short *)(piVar5[4] + 10);
      uVar6 = 0;
      if (param_2 != 0) {
        do {
          if (sVar2 == *(short *)(param_1 + uVar6 * 2)) {
            ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x22c))((int *)piVar5[4]);
            ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e4))((int *)piVar5[4]);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_2);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006de060 */
unsigned int F_006de060(unsigned int gen_a0)
{
  GEN_ENTER(0x6de060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4]);
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e4))((int *)piVar4[4]);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006de0e0 */
uint F_006de0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6de0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x30);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    do {
      ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4]);
      if ((param_1 & 1) != 0) {
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1c8))((int *)piVar4[4]);
      }
      if ((param_1 & 2) != 0) {
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e0))((int *)piVar4[4]);
      }
      if ((param_1 & 4) != 0) {
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f0))((int *)piVar4[4]);
      }
      if ((param_1 & 8) != 0) {
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f8))((int *)piVar4[4]);
      }
      if ((param_1 & 0x10) != 0) {
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 500))((int *)piVar4[4]);
      }
      if ((param_1 & 0x20) != 0) {
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e4))((int *)piVar4[4]);
      }
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar3 = (int *)piVar4[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar4 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar4 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar2 = (int *)piVar4[1];
          piVar3 = piVar4;
          while ((piVar4 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar2 = (int *)piVar4[1];
            piVar3 = piVar4;
          }
        }
      }
      piVar3 = this;
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return (uint)piVar3;
}

/* ref: FUN_006de200 */
unsigned int F_006de200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6de200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar2 = *(short *)(piVar5[4] + 10);
      uVar6 = 0;
      if (param_3 != 0) {
        do {
          if (sVar2 == *(short *)(param_2 + uVar6 * 2)) {
            ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x22c))((int *)piVar5[4]);
            if (((byte)param_1 & 1) != 0) {
              ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1c8))((int *)piVar5[4]);
            }
            if (((byte)param_1 & 2) != 0) {
              ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e0))((int *)piVar5[4]);
            }
            if (((byte)param_1 & 4) != 0) {
              ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1f0))((int *)piVar5[4]);
            }
            if (((byte)param_1 & 8) != 0) {
              ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1f8))((int *)piVar5[4]);
            }
            if (((byte)param_1 & 0x10) != 0) {
              ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 500))((int *)piVar5[4]);
            }
            if (((byte)param_1 & 0x20) != 0) {
              ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e4))((int *)piVar5[4]);
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_3);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006de320 */
uint F_006de320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x30);
  piVar6 = (int *)*piVar5;
  if (piVar6 != piVar5) {
    do {
      piVar5 = (int *)piVar6[4];
      sVar2 = *(short *)((int)piVar5 + 10);
      uVar7 = 0;
      if (param_2 != 0) {
        do {
          if (sVar2 == *(short *)(param_1 + uVar7 * 2)) {
            piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar6[4] + 4))((int *)piVar6[4])));
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_2);
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = (int *)*piVar3;
          while (piVar6 = piVar3, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar3 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar5 = piVar4, piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar5[2])))
          {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x30));
  }
  return (uint)piVar5;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf49 */
uint F_006de3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6de3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((this[0x510] != (undefined1)0x0) ||
     ((this[0x511] != (undefined1)0x0 && ((short)param_3 != 0)))) {
    *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xfd;
  }
  uVar1 = F_006db690((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006de3f0 */
byte F_006de3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6de3f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  
  if ((REFG(int, 0x1379694) != 0) && (*(uint *)(REFG(int, 0x1379694) + 0xe4) >> 0x10 == 0x8002)) {
    this = (undefined *)F_006da050(REFG(void * PTR32, 0x1488344),*(uint *)(REFG(int, 0x1379694) + 0xe4));
    if (this != (undefined *)0x0) {
      bVar1 = F_006d39e0(this,param_1);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_006de430 */
unsigned int F_006de430(unsigned int gen_a0)
{
  GEN_ENTER(0x6de430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  
  if ((*(char *)((int)this + 100) != '\0') &&
     (piVar4 = *(int * PTR32 *)((int)this + 0x2c), *(int * PTR32 *)((int)this + 0x30) != piVar4)) {
    piVar3 = piVar4 + 1;
    do {
      piVar1 = (int *)*piVar4;
      if ((piVar1 == (int *)0x0) || (piVar1[0x10] != 0)) {
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
      }
      else {
        ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
        puVar2 = (undefined4 *)*piVar4;
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
          *piVar4 = 0;
        }
        F_00c46e20(piVar4,piVar3,(*(int *)((int)this + 0x30) - (int)((int)(uintptr_t)piVar3) >> 2) * 4);
        *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -4;
      }
    } while (*(int * PTR32 *)((int)this + 0x30) != piVar4);
  }
  return 0;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf14 */
uint F_006de4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6de4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_006db350((undefined *)this,param_1);
  uVar1 = F_00ab1c90((uint)*(ushort *)(param_1 + 0x86));
  if (uVar1 != 0) {
    this[0x1d4] = *(undefined *)(uVar1 + 0x2e);
  }
  return uVar1;
}

/* ref: FUN_006de4e0 */
uint F_006de4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6de4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 != 0) {
    in_EAX = F_006de0e0(this,0xffff);
  }
  return in_EAX;
}

/* ref: FUN_006de500 */
unsigned int F_006de500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar2 = (int *)piVar4[4];
      if (*(short *)((int)piVar2 + 10) == 0x1d) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x22c))(piVar2);
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1c8))((int *)piVar4[4]);
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e0))((int *)piVar4[4]);
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f0))((int *)piVar4[4]);
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f8))((int *)piVar4[4]);
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 500))((int *)piVar4[4]);
        ((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e4))((int *)piVar4[4]);
      }
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006de5d0 */
uint F_006de5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x30);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    do {
      piVar2 = (int *)piVar5[4];
      if (*(short *)((int)piVar2 + 10) == 1) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x22c))(piVar2);
        ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1c8))((int *)piVar5[4]);
        ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e0))((int *)piVar5[4]);
        ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1f0))((int *)piVar5[4]);
        ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1f8))((int *)piVar5[4]);
        ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 500))((int *)piVar5[4]);
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e4))((int *)piVar5[4])));
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = (int *)*piVar2;
          while (piVar5 = piVar2, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar2 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar4 = piVar3, piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar4[2])))
          {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return (uint)piVar4;
}

/* ref: FUN_006de6a0 */
uint F_006de6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006de0e0(this,0xffff);
  return uVar1;
}

/* ref: FUN_006de6b0 */
uint F_006de6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6de6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006de0e0(this,0xffff);
  return uVar1;
}

/* ref: FUN_006de6c0 */
uint F_006de6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6de6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00a9f620(param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_006de0e0(this,0xffff);
  }
  return uVar2;
}

/* ref: FUN_006de6f0 */
uint F_006de6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6de6f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(uint *)&gen_args[1]) = F_005f3270(0x31,(*(uint *)&gen_args[1]),0);
  uVar1 = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    F_0073d9b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
    uVar1 = F_00745550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))),&(*(uint *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  return uVar1;
}

/* ref: FUN_006de750 */
uint F_006de750(unsigned int gen_a0)
{
  GEN_ENTER(0x6de750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = -0x20000000;
  if (*(int *)((int)this + 0x224) != 0) {
    uVar3 = *(uint *)((int)this + 0x220);
    iVar2 = 0;
    if (*(int * PTR32 *)((int)this + 0x214) != (int *)0x0) {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar2 + 8);
    }
    iVar1 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar3 * 4)));
    iVar2 = *(int *)(iVar1 + 0x10);
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
  }
  if (*(int *)((int)this + 0x238) != 0) {
    iVar2 = *(int *)((int)this + 0x240);
    uVar4 = *(undefined4 *)((int)this + 0x244);
  }
  if (iVar2 != -0x20000000) {
    uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar2,uVar4);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_006de7c0 */
uint F_006de7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6de7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(uint *)((int)this + 0x224) < 2) {
    return 0;
  }
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)((int)this + 0x214) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x214))), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = *(int *)((int)this + 0x220) + 1;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int * PTR32 *)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (*(uint *)(iVar4 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar4 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + 0x24)));
}

/* ref: FUN_006de820 */
uint F_006de820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  (*(int *)(gen_frame + 0x8)) = param_1;
  F_00749220((undefined *)((int)this + 0x6d0),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x4));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != *(int * PTR32 *)((int)this + 0x6d4)) {
    do {
      if (piVar5[4] != param_1) {
        return uVar4;
      }
      if ((param_2 == 0) || (piVar5[6] == param_2)) {
        uVar6 = F_00427d90();
        uVar4 = uVar4 + 1;
        *(ulonglong *)(piVar5 + 8) = uVar6;
        if (param_2 != 0) {
          return uVar4;
        }
      }
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
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x6d4));
  }
  return uVar4;
}

/* ref: FUN_006de8d0 */
uint F_006de8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de8d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  char cVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[1]);
  F_00749220(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))),&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0x4)));
  iVar4 = (*(int *)&gen_args[2]);
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x0));
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)))) {
    do {
      if (piVar6[4] != (*(int *)&gen_args[1])) {
        return (*(uint *)(gen_frame + 0x8));
      }
      piVar7 = piVar6;
      if ((iVar4 == 0) || (piVar6[6] == iVar4)) {
        if (*(char *)((int)piVar6 + 0x31) == '\0') {
          piVar7 = (int *)piVar6[2];
          if (*(char *)((int)piVar7 + 0x31) == '\0') {
            cVar2 = *(char *)(*piVar7 + 0x31);
            piVar3 = (int *)*piVar7;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar3 + 0x31);
              piVar7 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar2 = *(char *)(piVar6[1] + 0x31);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
            while ((piVar7 = piVar5, cVar2 == '\0' && (piVar3 == (int *)piVar7[2]))) {
              cVar2 = *(char *)(piVar7[1] + 0x31);
              piVar5 = (int *)piVar7[1];
              piVar3 = piVar7;
            }
          }
        }
        F_00743b10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))),&(*(int *)&gen_args[2]),piVar6);
        uVar1 = (*(uint *)(gen_frame + 0x8)) + 1;
        (*(uint *)(gen_frame + 0x8)) = uVar1;
        if (iVar4 != 0) {
          return uVar1;
        }
      }
      else if (*(char *)((int)piVar6 + 0x31) == '\0') {
        piVar7 = (int *)piVar6[2];
        if (*(char *)((int)piVar7 + 0x31) == '\0') {
          cVar2 = *(char *)(*piVar7 + 0x31);
          piVar6 = (int *)*piVar7;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar6 + 0x31);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar2 = *(char *)(piVar6[1] + 0x31);
          piVar3 = (int *)piVar6[1];
          while ((piVar7 = piVar3, cVar2 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar2 = *(char *)(piVar7[1] + 0x31);
            piVar3 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
      piVar6 = piVar7;
    } while (piVar7 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4))));
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_006de9f0 */
uint F_006de9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6de9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 & 0x80000000) == 0x80000000) {
    uVar1 = F_00748af0((undefined *)((int)this + 0x5c),param_1);
    return uVar1;
  }
  uVar1 = F_006dda70(this,param_1);
  return uVar1;
}

/* ref: FUN_006dea30 */
uint F_006dea30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dea30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  F_00aa4270(param_1,param_2,0,0);
  (*(undefined4 *)(gen_frame + 0x14)) = param_4;
  (*(undefined4 *)(gen_frame + 0x10)) = param_3;
  uVar1 = *(undefined4 *)((int)this + 0x6f0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  uVar2 = F_00746770((undefined4 *)((int)this + 0x6f0),uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006dea80 */
uint F_006dea80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6dea80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  F_00aa0000(param_1,param_2,param_3,0,0,0);
  uVar1 = *(undefined4 *)((int)this + 0x6f0);
  (*(undefined4 *)(gen_frame + 0x10)) = param_4;
  (*(undefined4 *)(gen_frame + 0x14)) = param_5;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  uVar2 = F_00746770((undefined *)((int)this + 0x6f0),uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006deae0 */
byte F_006deae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6deae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(int * PTR32 *)&gen_args[1]) = (int *)F_005f3270(0x31,(*(int * PTR32 *)&gen_args[1]),0);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0;
  }
  F_00745670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70c))),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != (*(int * PTR32 *)(gen_frame + 0x8))) {
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x4));
    do {
      if ((piVar4[4] == (*(int *)&gen_args[2])) && ((char)piVar4[5] == (char)(*(undefined4 *)&gen_args[3]))) {
        F_0073d9b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
        F_00745550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))),&(*(undefined4 *)&gen_args[3]),(*(int * PTR32 *)(gen_frame + 0x4)),(*(int * PTR32 *)(gen_frame + 0x8)));
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x90))))((*(int * PTR32 *)&gen_args[1]),0);
        F_00744150(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70c))),&(*(undefined4 *)&gen_args[3]),piVar4);
        return 1;
      }
      if (*(char *)((int)piVar4 + 0x1d) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x1d);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x1d);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x1d);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x1d);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != (*(int * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_006debf0 */
uint F_006debf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6debf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  (*(char *)(gen_frame + 0x1b)) = *(char *)((int)this + 0x71c);
  piVar3 = *(int * PTR32 *)((int)this + 0x710);
  piVar5 = (int *)*piVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if (piVar5 != piVar3) {
    do {
      if (piVar5[4] == param_1) {
        F_0073d9b0((undefined *)((int)this + 0x6fc),&(*(undefined4 *)(gen_frame + 0x4)),piVar5 + 3);
        F_00745550((undefined *)((int)this + 0x6fc),((undefined1 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
        if ((*(char *)(gen_frame + 0x1b)) == '\0') {
          piVar3 = (int *)piVar5[3];
          ((code *)*(gen_code32 *)(*piVar3 + 0x90))(piVar3,0);
        }
        piVar4 = piVar5;
        if (*(char *)((int)piVar5 + 0x1d) == '\0') {
          piVar4 = (int *)piVar5[2];
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x1d);
            piVar3 = (int *)*piVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x1d);
              piVar4 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar5[1] + 0x1d);
            piVar2 = (int *)piVar5[1];
            piVar3 = piVar5;
            while ((piVar4 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar4[2]))) {
              cVar1 = *(char *)(piVar4[1] + 0x1d);
              piVar2 = (int *)piVar4[1];
              piVar3 = piVar4;
            }
          }
        }
        piVar3 = (int *)F_00744150((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x70c),((undefined1 *)(gen_frame + 0xc)),piVar5);
        this = (*(undefined * PTR32 *)(gen_frame + 0x14));
        piVar5 = piVar4;
      }
      else if (*(char *)((int)piVar5 + 0x1d) == '\0') {
        piVar4 = (int *)piVar5[2];
        if (*(char *)((int)piVar4 + 0x1d) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x1d);
          piVar3 = (int *)*piVar4;
          while (piVar5 = piVar4, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x1d);
            piVar4 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x1d);
          piVar2 = (int *)piVar5[1];
          piVar4 = piVar5;
          while ((piVar3 = piVar2, piVar5 = piVar3, cVar1 == '\0' && (piVar4 == (int *)piVar3[2])))
          {
            cVar1 = *(char *)(piVar3[1] + 0x1d);
            piVar2 = (int *)piVar3[1];
            piVar4 = piVar3;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x710));
  }
  return (uint)piVar3;
}

/* ref: FUN_006ded20 */
uint F_006ded20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ded20u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int *)&gen_args[2]) != 0) {
    F_007491b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x264))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[2]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x268)))) {
      *(*(undefined2 * PTR32 *)&gen_args[1]) = *(undefined2 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
      return (uint)(*(undefined2 * PTR32 *)&gen_args[1]);
    }
  }
  *(*(undefined2 * PTR32 *)&gen_args[1]) = 1;
  return (uint)(*(undefined2 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006ded70 */
uint F_006ded70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6ded70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,param_2,param_3,param_4);
    }
  }
  return uVar2;
}

/* ref: FUN_006dedc0 */
uint F_006dedc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6dedc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x6f0);
  piVar3 = (int *)*piVar2;
  if (piVar3 != piVar2) {
    do {
      if (((((char)piVar3[6] == '\0') && (*(char *)((int)piVar3 + 0x19) == '\0')) &&
          (piVar2 = (int *)F_00aa0790(piVar3[2]), (char)piVar2 == '\0')) &&
         (piVar2 = (int *)F_00aa02d0((undefined *)piVar3[2],piVar3[3],0), (char)piVar2 == '\0')) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar3[4] + 4))
                                  ((int *)piVar3[4],piVar3[2],piVar3[3],piVar3[5])));
        *(undefined1 *)(piVar3 + 6) = 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x6f0));
  }
  iVar1 = *(int *)((int)this + 0x6f4);
  while ((iVar1 != 0 &&
         ((piVar2 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x6f0))), (char)piVar2[6] != '\0' ||
          (*(char *)((int)piVar2 + 0x19) != '\0'))))) {
    piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6f0)));
    if (piVar2 != *(int * PTR32 *)((int)this + 0x6f0)) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      uVar4 = F_00429760(piVar2,0x1c,800);
      piVar2 = (int *)uVar4;
      *(int *)((int)this + 0x6f4) = *(int *)((int)this + 0x6f4) + -1;
    }
    iVar1 = *(int *)((int)this + 0x6f4);
  }
  return (uint)piVar2;
}

/* ref: FUN_006dee90 */
unsigned int F_006dee90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6dee90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  iVar1 = (int)(*(int * PTR32 *)&gen_args[2]);
  if (((int)(*(int * PTR32 *)&gen_args[2]) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a4))) != (uint)((*(uint *)&gen_args[1]) < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a0)))))
     || (999 < (*(uint *)&gen_args[1]) - *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a0))))) {
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790)))));
    if ((*(int * PTR32 *)&gen_args[2]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790)))) {
      do {
        F_006da5e0(((undefined *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x18))));
        F_00724e40(&(*(int * PTR32 *)&gen_args[2]));
      } while ((*(int * PTR32 *)&gen_args[2]) != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790))));
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a0))) = (*(uint *)&gen_args[1]);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a4))) = iVar1;
  }
  return 0;
}

/* ref: FUN_006def00 */
uint F_006def00(unsigned int gen_a0)
{
  GEN_ENTER(0x6def00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x50);
}

/* ref: FUN_006def40 */
byte F_006def40(unsigned int gen_a0)
{
  GEN_ENTER(0x6def40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  int * piVar7;
  
  uVar6 = 0;
  piVar7 = (int *)((int)this + 0x74c);
  do {
    if (*piVar7 != 0) {
      return 0;
    }
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (uVar6 < 0x10);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x348)));
  puVar3 = (undefined4 *)*puVar2;
  while( true ) {
    if (puVar3 == puVar2) {
      return 1;
    }
    if (*(char *)(puVar3 + 0x26) == '\0') break;
    if (*(char *)((int)puVar3 + 0x9d) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x9d) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x9d);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x9d);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x9d);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x9d);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006defd0 */
unsigned int F_006defd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6defd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  F_006de200(this,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
  return 0;
}

/* ref: FUN_006deff0 */
uint F_006deff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6deff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006de0e0(this,0xffff);
  return uVar1;
}

/* ref: FUN_006df000 */
uint F_006df000(unsigned int gen_a0)
{
  GEN_ENTER(0x6df000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006de0e0(this,0xffff);
  return uVar1;
}

/* ref: FUN_006df010 */
uint F_006df010(unsigned int gen_a0)
{
  GEN_ENTER(0x6df010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006de0e0(this,0xffff);
  return uVar1;
}

/* ref: FUN_006df020 */
uint F_006df020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6df020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006de0e0(this,0xffff);
  return uVar1;
}

/* ref: FUN_006df030 */
uint F_006df030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6df030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  float * pfVar3;
  undefined * pvVar4;
  float10 fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  fVar7 = *(float *)((int)param_1 + 0xb0);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x5c)) = fVar7;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  fVar5 = ((float10)GEN_TOD(fsin((float10)fVar7)));
  fVar1 = (float)fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar5 = ((float10)GEN_TOD(fcos((float10)fVar7)));
  fVar7 = (float)fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar7;
  ((float *)(gen_frame + 0x60))[0] = fVar7;
  ((float *)(gen_frame + 0x60))[2] = ((float)GEN_TOF(-(float10)fVar1));
  ((float *)(gen_frame + 0x60))[1] = 0.0;
  (*(float *)(gen_frame + 0x80)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x88)) = fVar7;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  pfVar3 = (float *)F_004ee670(((float *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x10)),(uint)((float *)(gen_frame + 0x60)));
  (*(float *)(gen_frame + 0x20)) = *pfVar3;
  (*(float *)(gen_frame + 0x24)) = pfVar3[1];
  (*(float *)(gen_frame + 0x28)) = pfVar3[2];
  pfVar3 = (float *)F_00a5feb0(param_2);
  fVar7 = *pfVar3;
  fVar1 = pfVar3[2];
  pfVar3 = (float *)F_00a5feb0(param_1);
  fVar2 = *pfVar3;
  ((float *)(gen_frame + 0x0))[0] = fVar2;
  (*(float *)(gen_frame + 0x8)) = pfVar3[2];
  fVar7 = (float)((float10)fVar7 - (float10)fVar2);
  (*(float *)(gen_frame + 0x30)) = fVar7;
  fVar2 = (float)((float10)0 - (float10)0);
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar1 = (float)((float10)fVar1 - (float10)pfVar3[2]);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  (*(float *)(gen_frame + 0x40)) = fVar7;
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(float *)(gen_frame + 0x48)) = fVar1;
  F_0046f390(&(*(float *)(gen_frame + 0x40)));
  fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x48)) * (float10)(*(float *)(gen_frame + 0x28)) +
                 ((float10)(*(float *)(gen_frame + 0x40)) * (float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x44)) * (float10)(*(float *)(gen_frame + 0x24))))));
  (*(float *)(gen_frame + 0x54)) = fVar7;
  if (((float10)REFG(float, 0x1088068) < (float10)fVar7) && ((char)param_3 != '\0')) {
    pvVar4 = (undefined *)F_006d7550(&(*(float *)(gen_frame + 0x5c)),param_1);
    if ((*(float *)(gen_frame + 0x5c)) == *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x30)) goto LAB_006df29f;
    uVar6 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
    *(undefined8 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x70) = uVar6;
    *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x78) = (uint)*(ushort *)(param_2 + 0x22);
    *(undefined1 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x7c) = 1;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar6 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2,0xffffffff,0);
  }
  else {
    fVar7 = F_00aae7a0(&(*(float *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x54)) = fVar7;
    F_00aa0000(param_1,0x30f,&(*(float *)(gen_frame + 0x54)),0,0,0);
    F_006d7550(&(*(float *)(gen_frame + 0x5c)),param_1);
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x50));
    if ((*(float *)(gen_frame + 0x5c)) == *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x30)) goto LAB_006df29f;
    uVar6 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
    *(undefined8 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x70) = uVar6;
    *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x78) = (uint)*(ushort *)(param_2 + 0x22);
    *(undefined1 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x7c) = 1;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar6 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
  }
  pvVar4 = (undefined *)F_00aa7a30(param_1,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar8,uVar9);
LAB_006df29f: ;
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (uint)pvVar4;
}

/* ref: FUN_006df2c0 */
uint F_006df2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6df2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)((int)this + 0x30);
  uVar2 = *(uint *)((int)this + 0x6c) & 0x400;
  bVar4 = uVar2 == 0x400;
  for (iVar3 = *(int *)((int)this + 0x2c); iVar3 != iVar1; iVar3 = iVar3 + 0x88) {
    uVar2 = *(uint *)(iVar3 + 0x14);
    if (((uVar2 == 4) || (uVar2 == 5)) || (uVar2 == 6)) {
      uVar2 = F_00ae0cd0(&REFG(undefined, 0x14c0920),*(undefined4 *)(iVar3 + 0xc));
    }
    else if (bVar4) {
      uVar2 = F_006da870(iVar3);
    }
  }
  return uVar2;
}

/* ref: FUN_006df330 */
unsigned int F_006df330(unsigned int gen_a0)
{
  GEN_ENTER(0x6df330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x30);
  for (iVar2 = *(int *)((int)this + 0x2c); iVar2 != iVar1; iVar2 = iVar2 + 0x88) {
    F_006da870(iVar2);
  }
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf116 */
uint F_006df360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6df360u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  float10 fVar6;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]));
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  iVar1 = *piVar5;
  (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1);
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (2 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x8)),3);
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar3);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x60);
  bVar3 = F_00a01f40(((byte *)(gen_frame + 0x8)),2);
  if (bVar3 != 0) {
    fVar6 = F_00a01dd0(((byte *)(gen_frame + 0x8)),2);
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    F_006b96b0(uVar2,((float)GEN_TOF((((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                              (float10)*(double *)&REFG(undefined, 0x1080220)))),(*(uint *)&gen_args[1]));
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return 0;
  }
  bVar3 = F_00a01f20(((byte *)(gen_frame + 0x8)),2);
  if (bVar3 == 0) {
    uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
    piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar4);
    F_006df030(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 4),uVar2,*(undefined4 *)(*piVar5 + 0x60),(*(uint *)&gen_args[1]));
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006df450 */
unsigned int F_006df450(unsigned int gen_a0)
{
  GEN_ENTER(0x6df450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  for (piVar4 = *(int * PTR32 *)this; piVar4 != piVar1; piVar4 = piVar4 + 1) {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  iVar3 = *(int *)this;
  if (iVar3 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar3,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar3;
  }
  return 0;
}

/* ref: FUN_006df4a0 */
unsigned int F_006df4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6df4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  for (piVar4 = *(int * PTR32 *)((int)this + 0x10); piVar4 != piVar1; piVar4 = piVar4 + 1) {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  iVar3 = *(int *)((int)this + 0x10);
  if (iVar3 != *(int *)((int)this + 0x14)) {
    F_00c46e20(iVar3,*(int *)((int)this + 0x14),0);
    *(int *)((int)this + 0x14) = iVar3;
  }
  return 0;
}

/* ref: FUN_006df500 */
unsigned int F_006df500(unsigned int gen_a0)
{
  GEN_ENTER(0x6df500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006df450(this);
  F_006df4a0(this);
  return 0;
}

/* ref: Client::Game::Event::InitializeSceneTask::vf1 */
uint F_006df510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6df510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  undefined * this;
  int * piVar2;
  uint uVar3;
  float10 fVar4;
  int local_c;
  
  if (*(char *)((int)param_1 + 0x10) == '\0') {
    F_006daf30(param_1,param_2,param_3);
  }
  if (*(char *)((int)param_1 + 0x11) != '\0') {
    piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xa0))(piVar2);
    if ((uVar3 & 8) != 0) {
      return 0;
    }
    *(undefined1 *)((int)param_1 + 0x11) = 0;
  }
  this = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  if (((param_3 != 0) && (*(char *)(param_3 + 0x44) == '\x02')) &&
     (uVar3 = F_00aa0fa0(REFG(void * PTR32, 0x1379694)), (char)uVar3 != '\0')) {
    return 0;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x400) != 0) {
    local_c = (int)(longlong)TRUNC((float10)*(float *)((int)param_1 + 8));
    if ((local_c == 1) && (*(char *)((int)this + 0x188) != '\x02')) {
      F_00aa2c50(this,0,0,0);
    }
    fVar1 = *(float *)((int)param_1 + 8);
    if (((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) &&
       (fVar1 = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))),
       fVar4 = (float10)fVar1, *(float *)((int)param_1 + 8) = fVar1,
       (!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)0)) && !(fVar4 <= (float10)0))) {
      return 0;
    }
  }
  uVar3 = F_006bb830(param_2,param_3);
  if (((uVar3 != 0) && (*(float *)&REFG(undefined, 0x1088114) <= *(float *)((int)param_1 + 0xc))) &&
     (fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xc) -
                     (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))),
     *(float *)((int)param_1 + 0xc) = fVar1, (float10)0 <= (float10)fVar1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006df660 */
uint F_006df660(unsigned int gen_a0)
{
  GEN_ENTER(0x6df660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ulonglong uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9644));
  F_006bcd10(this);
  iVar1 = *(int *)((int)this + 0xe8);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xf0) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  iVar1 = *(int *)((int)this + 0xd0);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xd8) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  F_0042c880((undefined *)((int)this + 0x7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[3])REFP(0x10b8184))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  F_00744a50((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar2 = F_00429760(*(undefined4 *)((int)this + 0x10),0x14,800);
  return (uint)uVar2;
}

/* ref: FUN_006df740 */
uint F_006df740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6df740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1488344);
  F_00aa4270(param_1,param_2,0,0);
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  uVar2 = F_00746770((undefined4 *)(iVar1 + 0x6f0),*(undefined4 *)(iVar1 + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006df7a0 */
uint F_006df7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6df7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = REFG(int, 0x1488344);
  F_00aa0000(param_1,param_2,param_3,0,0,0);
  uVar1 = *(undefined4 *)(iVar2 + 0x6f0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_4;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  uVar3 = F_00746770((undefined *)(iVar2 + 0x6f0),uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: FUN_006df810 */
uint F_006df810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6df810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006de820(REFG(void * PTR32, 0x1488344),this,param_1);
  return uVar1;
}

/* ref: FUN_006df830 */
uint F_006df830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6df830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006de8d0(REFG(void * PTR32, 0x1488344),this,param_1);
  return uVar1;
}

/* ref: FUN_006df850 */
uint F_006df850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6df850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (byte)param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1);
    return uVar2;
  case 1: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,param_1,param_3);
    return uVar2;
  case 2: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1);
    return uVar2;
  case 3: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,param_1);
    return uVar2;
  case 5: ;
    if (*(int *)((int)this + 8) == 0xa0001) {
      *(byte *)((int)this + 0x44) = (byte)param_2;
      *(undefined4 *)((int)this + 0x48) = param_3;
      *(undefined4 *)((int)this + 0x50) = param_1;
      uVar2 = F_006dbcd0(this);
    }
  default: ;
    *(byte *)((int)this + 0x44) = (byte)param_2;
    *(undefined4 *)((int)this + 0x48) = param_3;
    *(undefined4 *)((int)this + 0x50) = param_1;
    if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
      uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
      if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
      }
      if (*(uint *)(iVar3 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(iVar3 + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4)));
      uVar1 = *(undefined1 *)(iVar3 + 0x20);
      *(undefined1 *)((int)this + 0x4c) = uVar1;
      return CONCAT31((int3)((uint)iVar3 >> 8),uVar1);
    }
    *(undefined1 *)((int)this + 0x4c) = 0;
    return uVar2 & 0xffffff00;
  case 6: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_3);
    return uVar2;
  case 7: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,param_1,param_3);
    return uVar2;
  case 9: ;
    break;
  case 10: ;
    uVar2 = F_005f3270(0x31,param_3,0);
    if ((uVar2 == 0) && (uVar2 = F_005f3270(0x29,param_3,0), uVar2 == 0)) {
      return 0;
    }
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,uVar2);
    return uVar2;
  case 0xe: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_3);
    return uVar2;
  case 0x11: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,param_1,param_3);
    return uVar2;
  case 0x12: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,param_1,param_3);
    return uVar2;
  }
  uVar2 = F_005f3270(0x31,param_3,0);
  if ((uVar2 == 0) && (uVar2 = F_005f3270(0x29,param_3,0), uVar2 == 0)) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,uVar2);
  return uVar2;
}

/* ref: Client::Game::Event::EventHandler::vf115 */
ushort F_006dfa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfa70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[1]) = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))((*(uint *)&gen_args[1]));
  iVar1 = REFG(int, 0x1488344);
  if ((*(uint *)&gen_args[1]) != 0) {
    F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x268)) {
      return *(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) << 8 | *(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) >> 8;
    }
  }
  return 0x100;
}

/* ref: FUN_006dfaf0 */
uint F_006dfaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,800);
  *puVar1 = *(undefined4 *)((int)this + 0x10);
  puVar1[1] = *(undefined4 *)((int)this + 0x10);
  puVar1[2] = *(undefined4 *)((int)this + 0x10);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
  }
  uVar2 = F_00746c00((undefined *)((int)this + 0xc),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: FUN_006dfb50 */
uint F_006dfb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfb50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_0073ce10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
  uVar2 = F_00744a50(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  if (iVar1 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))))((*(undefined * PTR32 *)&gen_args[0]),iVar1);
  }
  return uVar2;
}

/* ref: FUN_006dfba0 */
uint F_006dfba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfba0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00748d80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
    uVar1 = F_0042a990((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 100);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006dfbe0 */
uint F_006dfbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6dfbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b988c));
  if (*(int *)((int)this + 0x13c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x138);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x13c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x13c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x13c) = 0;
    }
  }
  uVar3 = F_006df660(this);
  return uVar3;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf112 */
uint F_006dfc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pAVar4;
  
  uVar2 = (*(ushort *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x14)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x14)) = uVar2 & 0xff00;
  pAVar4 = this + 0xf8;
  (*(int *)(gen_frame + 0x10)) = 0x10;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x1c0))))(*(int * PTR32 *)pAVar4,param_1);
      iVar1 = REFG(int, 0x1488344);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
LAB_006dfc9d: ;
        (*(ushort *)(gen_frame + 0x18)) = 1;
      }
      else {
        F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x4)) == *(int *)(iVar1 + 0x268)) goto LAB_006dfc9d;
        (*(ushort *)(gen_frame + 0x18)) = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10);
      }
      if ((uVar3 != 0) && ((byte)(*(ushort *)(gen_frame + 0x14)) < (byte)(*(ushort *)(gen_frame + 0x18)))) {
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        (*(ushort *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x18));
      }
    }
    pAVar4 = pAVar4 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) + -1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    if (iVar1 == 0) {
      return (*(uint *)(gen_frame + 0xc));
    }
  } while( true );
}

/* ref: Client::Game::Event::ArrayEventHandler::vf128 */
uint F_006dfcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dfcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pAVar4;
  
  uVar2 = (*(ushort *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x14)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x14)) = uVar2 & 0xff00;
  pAVar4 = this + 0xf8;
  (*(int *)(gen_frame + 0x10)) = 0x10;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x200))))
                        (*(int * PTR32 *)pAVar4,param_1,param_2,param_3,param_4);
      iVar1 = REFG(int, 0x1488344);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
LAB_006dfd49: ;
        (*(ushort *)(gen_frame + 0x18)) = 1;
      }
      else {
        F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x4)) == *(int *)(iVar1 + 0x268)) goto LAB_006dfd49;
        (*(ushort *)(gen_frame + 0x18)) = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10);
      }
      if ((uVar3 != 0) && ((byte)(*(ushort *)(gen_frame + 0x14)) < (byte)(*(ushort *)(gen_frame + 0x18)))) {
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        (*(ushort *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x18));
      }
    }
    pAVar4 = pAVar4 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) + -1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    if (iVar1 == 0) {
      return (*(uint *)(gen_frame + 0xc));
    }
  } while( true );
}

/* ref: Client::Game::Event::ArrayEventHandler::vf127 */
uint F_006dfd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pAVar4;
  
  uVar2 = (*(ushort *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x14)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x14)) = uVar2 & 0xff00;
  pAVar4 = this + 0xf8;
  (*(int *)(gen_frame + 0x10)) = 0x10;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x1fc))))(*(int * PTR32 *)pAVar4,param_1);
      iVar1 = REFG(int, 0x1488344);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
LAB_006dfded: ;
        (*(ushort *)(gen_frame + 0x18)) = 1;
      }
      else {
        F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x4)) == *(int *)(iVar1 + 0x268)) goto LAB_006dfded;
        (*(ushort *)(gen_frame + 0x18)) = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10);
      }
      if ((uVar3 != 0) && ((byte)(*(ushort *)(gen_frame + 0x14)) < (byte)(*(ushort *)(gen_frame + 0x18)))) {
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        (*(ushort *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x18));
      }
    }
    pAVar4 = pAVar4 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) + -1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    if (iVar1 == 0) {
      return (*(uint *)(gen_frame + 0xc));
    }
  } while( true );
}

/* ref: FUN_006dfe20 */
uint F_006dfe20(unsigned int gen_a0)
{
  GEN_ENTER(0x6dfe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  undefined4 * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  (*(uint *)(gen_frame + 0x8)) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x574) + *(int *)((int)this + 0x5a4) * 4)));
  F_007494c0((undefined *)((int)this + 0x584),&(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8)));
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  iVar4 = 0x54;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  REFG(void * PTR32, 0x132411c) = this;
  F_006c4440((*(int *)(gen_frame + 0xc)) + 0x10,((undefined4 *)(gen_frame + 0x10)));
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x1324118);
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  uVar6 = 0x55;
  uVar5 = 0x15;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  REFG(undefined4, 0x1324120) = F_008668b0(this_00,uVar5,uVar6,puVar1,ppuVar7,uVar8,uVar9,uVar10);
  this_01 = &(*(uint *)(gen_frame + 0x2b8));
  iVar4 = 0x54;
  do {
    this_01 = this_01 + -2;
    uVar3 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return uVar3;
}

/* ref: FUN_006dff00 */
uint F_006dff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dff00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00749410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) {
    return (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10;
  }
  return 0;
}

/* ref: FUN_006dff40 */
uint F_006dff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dff40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x570);
  *(undefined4 *)((int)this + 0x56c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  uVar2 = F_006dfe20(this);
  return uVar2;
}

/* ref: FUN_006dff80 */
uint F_006dff80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dff80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  ushort uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x1c)) = (uint)param_3 & 0xff;
  puVar9 = (undefined4 *)((uint)((int)(uintptr_t)param_3) >> 8 & 0xff);
  uVar5 = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar9;
  if (param_2 != 0) {
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x570) + 0xc)));
    do {
      ((int *)(gen_frame + 0xc))[(int)(uVar5)] = *((int *)GEN_TOP((*((int *)GEN_TOP(((param_1 - (int)((int *)(gen_frame + 0xc))) + (int)(((int *)(gen_frame + 0xc)) + uVar5)))) + 4)));
      ((undefined4 *)(gen_frame + 0x28))[(int)(uVar5)] = *puVar8;
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 4;
      puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
    } while (uVar5 < param_2);
  }
  puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
  uVar2 = **(ushort * PTR32 *)((int)this + 0x270);
  puVar8 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x54c))[1]));
  cVar1 = *(char *)((int)puVar8 + 0x2cd);
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x54c);
  while (cVar1 == '\0') {
    if (*(ushort *)(puVar8 + 3) < uVar2) {
      puVar6 = (undefined4 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar6 = (undefined4 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x2cd);
  }
  puVar8 = *(undefined4 * PTR32 *)((int)this + 0x54c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar3;
  if ((puVar3 == puVar8) || (uVar2 < *(ushort *)(puVar3 + 3))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar8;
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x20));
  }
  else {
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  }
  if (*ppuVar7 == *(undefined4 * PTR32 *)((int)this + 0x54c)) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *ppuVar7 + 4;
  }
  F_006d42d0((undefined *)((int)this + 0x278),*(undefined4 *)((int)this + 0x270),puVar8[0x6e],((int *)(gen_frame + 0xc)),
               ((undefined4 *)(gen_frame + 0x28)),param_2);
  *(undefined4 *)((int)this + 0x56c) = 0;
  if (*(undefined4 * PTR32 *)((int)this + 0x570) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x570))))(1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  uVar5 = F_0070e7f0(this,puVar9,(*(uint *)(gen_frame + 0x1c)),(uint)**(ushort * PTR32 *)((int)this + 0x270),
                       (uint)((int)(uintptr_t)puVar4) >> 0x10 & 0xff);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar5;
}

/* ref: FUN_006e0028 */
uint F_006e0028(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6e0028u, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort in_cx = (ushort)gen_a0;
  int in_edx = (int)gen_a1;
  uint in_ebx = (uint)gen_a2;
  undefined * in_esi = (undefined *)(uintptr_t)gen_a3;
  undefined4 in_edi = (undefined4)gen_a4;
  uint in_ebp = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)in_esi + 0x54c);
  *(int *)(in_ebp - 0x18) = in_edx;
  if ((in_edx == iVar3) || (in_cx < *(ushort *)(in_edx + 0xc))) {
    *(int *)(in_ebp - 0x1c) = iVar3;
    piVar2 = (int *)(in_ebp - 0x1c);
  }
  else {
    piVar2 = (int *)(in_ebp - 0x18);
  }
  if (*piVar2 == *(int *)((int)in_esi + 0x54c)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2 + 0x10;
  }
  F_006d42d0((undefined *)((int)in_esi + 0x278),*(undefined4 *)((int)in_esi + 0x270),
               *(undefined4 *)(iVar3 + 0x1b8),in_ebp - 0x30,in_ebp - 0x14,
               *(undefined4 *)(in_ebp + 0xc));
  puVar1 = *(undefined4 * PTR32 *)((int)in_esi + 0x570);
  *(undefined4 *)((int)in_esi + 0x56c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)in_esi + 0x570) = 0;
  }
  uVar4 = F_0070e7f0(in_esi,in_edi,*(undefined4 *)(in_ebp - 0x20),
                       (uint)**(ushort * PTR32 *)((int)in_esi + 0x270),in_ebx >> 0x10 & 0xff);
  F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
  return uVar4;
}

/* ref: FUN_006e00e0 */
uint F_006e00e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e00e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffff;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) = uVar1;
  uVar2 = 0;
  F_007494c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x584))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588)))) {
    uVar2 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x18);
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = (*(undefined * PTR32 *)&gen_args[0]);
    this_00[7] = ((code *)REFP(0x6dff40));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = this_00;
  F_00cb4540(this_00,0,uVar2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
  return uVar1;
}

/* ref: FUN_006e01a0 */
uint F_006e01a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e01a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c)));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570)));
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = 0;
    }
  }
  uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb2);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) = uVar3;
  puVar4 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar4,1,(((*(uint *)&gen_args[4]) & 0xff) << 8 | (*(uint *)&gen_args[1]) & 0xff) << 8 | (*(uint *)&gen_args[2]) & 0xff);
    puVar4[5] = 1;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    puVar4[6] = (*(undefined * PTR32 *)&gen_args[0]);
    puVar4[7] = ((code *)REFP(0x6bdc70));
  }
  uVar2 = (undefined2)(*(uint *)&gen_args[3]);
  (*(uint *)&gen_args[3]) = (*(uint *)&gen_args[3]) & 0xffff;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = puVar4;
  F_00749410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(uint *)&gen_args[4]),&(*(uint *)&gen_args[3]));
  if ((*(uint *)&gen_args[4]) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = (*(uint *)&gen_args[4]) + 0x10;
  }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x52c))) = uVar2;
  F_00cb4540(puVar4,0,*(undefined4 *)(iVar5 + 0x1c4));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
  return uVar3;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf115 */
uint F_006e02c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e02c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  sVar1 = *(short *)(REFG(int, 0x1379694) + 0xe6);
  if (((sVar1 == -0x7fff) || (sVar1 == -0x7ffe)) || (sVar1 == -0x7ff9)) {
    uVar3 = F_006d6fd0(REFG(void * PTR32, 0x1488344));
    if ((uVar3 != 0) && (*(byte *)(uVar3 + 0x1dc) < 0xfe)) {
      return 0xffff;
    }
  }
  (*(uint *)&gen_args[1]) = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
  pvVar2 = REFG(void * PTR32, 0x1488344);
  if ((*(uint *)&gen_args[1]) != 0) {
    F_007491b0(((undefined *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x264))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar2 + 0x268)) {
      return (uint)(ushort)(*(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) << 8 | *(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) >> 8);
    }
  }
  return 0x100;
}

/* ref: FUN_006e03a0 */
uint F_006e03a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e03a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9adc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10b9ad0));
  F_006be8d0(this);
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x120);
  if (pvVar4 != (undefined *)0x0) {
    F_0042c880(pvVar4);
    F_00406ad0(pvVar4);
    *(undefined4 *)((int)this + 0x120) = 0;
  }
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x124);
  if (pvVar4 != (undefined *)0x0) {
    F_0042c880(pvVar4);
    F_00406ad0(pvVar4);
    *(undefined4 *)((int)this + 0x124) = 0;
  }
  iVar1 = *(int *)((int)this + 0x10c);
  if (iVar1 != 0) {
    iVar3 = 7;
    pvVar4 = (undefined *)(iVar1 + 0x3b0);
    do {
      pvVar4 = (undefined *)((int)pvVar4 + -0x74);
      F_0042c880(pvVar4);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0x10c) = 0;
  }
  F_00cb4870((undefined *)((int)this + 0xf8));
  uVar2 = F_006df660(this);
  return uVar2;
}

/* ref: FUN_006e0460 */
uint F_006e0460(unsigned int gen_a0)
{
  GEN_ENTER(0x6e0460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9d24));
  if (*(int *)((int)this + 0xfc) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x100);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0xfc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xfc);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0xfc) = 0;
    }
  }
  uVar3 = F_006df660(this);
  return uVar3;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf132 */
uint F_006e04b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e04b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((char)param_3 != '\a') {
    return 0xf;
  }
  uVar1 = F_006de7c0(REFG(void * PTR32, 0x1488344));
  return uVar1;
}

/* ref: FUN_006e04e0 */
uint F_006e04e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e04e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9f6c));
  piVar5 = (int *)((int)this + 0xf8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x4;
  do {
    if (*piVar5 != 0) {
      piVar2 = (int *)piVar5[4];
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*piVar5);
      }
      puVar3 = (undefined4 *)*piVar5;
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        *piVar5 = 0;
      }
    }
    piVar5 = piVar5 + 1;
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9644));
  F_006bcd10(this);
  iVar4 = *(int *)((int)this + 0xe8);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0xf0) - iVar4 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  iVar4 = *(int *)((int)this + 0xd0);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0xd8) - iVar4 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  F_0042c880((undefined *)((int)this + 0x7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[3])REFP(0x10b8184))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  F_00744a50((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar6 = F_00429760(*(undefined4 *)((int)this + 0x10),0x14,800);
  return (uint)uVar6;
}

/* ref: Client::Game::Event::QuestEventHandler::vf5 */
byte F_006e0600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    iVar1 = param_1[0x1e];
    iVar6 = param_1[0x20];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar4);
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
    if (((char)uVar4 == '\x01') && (iVar6 == 0)) {
      iVar6 = 0x4c7250;
    }
    bVar3 = F_006dc160(this,iVar2,(*(undefined4 *)(gen_frame + 0x8)),iVar6,iVar1,uVar5,1,0);
    if (bVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf7 */
byte F_006e0690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e0690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = REFG(int, 0x1379694);
  (*(int *)(gen_frame + 0x8)) = 0;
  if ((REFG(int, 0x1379694) != 0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    iVar1 = param_1[0x1e];
    iVar6 = param_1[0x20];
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(char)uVar4);
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
    if (((char)uVar4 == '\x01') && (iVar6 == 0)) {
      iVar6 = 0x4c7250;
    }
    bVar3 = F_006dc160(this,iVar2,(*(undefined4 *)(gen_frame + 0x4)),iVar6,iVar1,uVar5,2,&(*(int *)(gen_frame + 0x8)));
    if ((bVar3 != 0) && ((*(int *)(gen_frame + 0x8)) != 0)) {
      bVar3 = F_006dc600(iVar2,(*(int *)(gen_frame + 0x8)));
      if (bVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf13 */
byte F_006e0740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (((REFG(int, 0x1379694) != 0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) && (REFG(char, 0x14a7381) == '\0')) {
    bVar1 = F_006dc160(this,REFG(int, 0x1379694),0,5000000,*(undefined4 *)(param_1 + 0x14),0,10,0);
    return bVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf15 */
byte F_006e0790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 QVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (((REFG(int, 0x1379694) == 0) || (**(char * PTR32 *)(this + 0x16c) == '\0')) || (REFG(char, 0x14a7381) != '\0')) {
    return 0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  bVar4 = F_006dc160(this,REFG(int, 0x1379694),0,5000000,uVar2,0,0xb,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if (bVar4 != 0) {
    QVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8))[1];
    iVar6 = 5000000;
    if (((QVar1 != (undefined1)0xa) && (QVar1 != (undefined1)0xb)) &&
       (QVar1 == (undefined1)0xf)) {
      iVar6 = 0x4c9960;
    }
    uVar5 = F_006d8e70(this,iVar3,0,iVar6,*(undefined4 *)(param_1 + 0x14),0,(*(undefined * PTR32 *)(gen_frame + 0x8)));
    if ((((uVar5 != 0) && (iVar6 != *(int *)(this + 0x31c))) &&
        (*(*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined1)0xff)) ||
       ((uVar5 == 0 ||
        (bVar4 = F_006dc160(this,iVar3,0,5000000,*(undefined4 *)(param_1 + 0x14),0,10,0),
        bVar4 == 0)))) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf17 */
byte F_006e0880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 local_8;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  if ((REFG(int * PTR32, 0x1379694) != (int *)0x0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694));
    iVar1 = piVar2[0x1e];
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),(char)uVar4);
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2);
    bVar3 = F_006dc160(this,piVar2,local_8,0x4c9960,iVar1,uVar4,0xf,0);
    if (bVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf19 */
byte F_006e08f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e08f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  iVar2 = REFG(int, 0x1379694);
  if (**((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0') {
    switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[3]) & 0xff)) {
    case 3: ;
    case 4: ;
    case 5: ;
    case 6: ;
    case 10: ;
      if (REFG(int, 0x1379694) != 0) {
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
        iVar1 = piVar3[0x1e];
        iVar8 = piVar3[0x20];
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar5);
        uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0xa8))(piVar3);
        if (((char)uVar5 == '\x01') && (iVar8 == 0)) {
          iVar8 = 0x4c7250;
        }
        bVar4 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]),iVar2,(*(undefined4 *)(gen_frame + 0x8)),iVar8,iVar1,uVar6,0x12,0);
        if (bVar4 != 0) {
          uVar5 = F_006bcb60(iVar2);
          iVar2 = piVar3[0x5d];
          if ((uVar5 != 0) && (iVar2 != 0)) {
            (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff)));
            uVar6 = F_0042a990(iVar2 + 8);
            uVar5 = F_0042a990(uVar5 + 8);
            uVar7 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
            uVar5 = F_00a030f0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"OnPreActionResult",uVar7,uVar5,uVar6,
                                 (*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[3]) & 0xff,1);
            if (uVar5 == 0) {
              F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),(int)&(*(int * PTR32 *)&gen_args[1]) + 3);
            }
            return (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf112 */
uint F_006e0a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((((char)uVar3 != '\x02') && (bVar2 = F_006d9290(this,iVar1,0), bVar2 != 0)) &&
     (bVar2 = F_006d9430(this,param_1), bVar2 != 0)) {
    return 0;
  }
  bVar2 = F_006c0470(iVar1,param_1);
  if (bVar2 != 0) {
    return 0;
  }
  if (((char)uVar3 == '\x02') && (uVar3 = F_00a5f290(param_1), *(char *)(uVar3 + 0x188) == '\x02')
     ) {
    return 0;
  }
  iVar6 = param_1[0x1e];
  iVar5 = param_1[0x20];
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar3 = F_006dc9e0(this,iVar1,uVar4,iVar5,iVar6,uVar3);
  return uVar3;
}

/* ref: Client::Game::Event::QuestEventHandler::vf128 */
uint F_006e0af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e0af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 QVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  sVar2 = *(short *)(this + 0x1d4);
  uVar5 = F_00a4ffd0();
  iVar7 = 0;
  iVar6 = uVar5 + 0x13b4;
  do {
    if (*(short *)(iVar6 + 4) == sVar2) {
      if (-1 < iVar7) {
        if ((*(char *)(iVar6 + 6) != -1) && (bVar4 = F_00a67a10(1,iVar7), bVar4 == 0)) {
          return 0;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
        uVar5 = F_006dcaf0(this,iVar3,param_1,param_2,param_3,param_4,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
        if (((uVar5 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0)) &&
           (QVar1 = *(*(undefined * PTR32 *)(gen_frame + 0x8)), (byte)QVar1 < 0x18)) {
          if ((((uint)(byte)QVar1 < (uint)((*(int *)(this + 0x35c) - *(int *)(this + 0x358)) / 0x28)
               ) && ((char)param_1 != '\x02')) &&
             (*((char *)GEN_TOP((*(int *)(this + 0x358) + 0x24 + (uint)(byte)QVar1 * 0x28))) != '\0')) {
            return 0;
          }
        }
        return uVar5;
      }
      break;
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar7 < 0x1e);
  uVar5 = F_006dcaf0(this,iVar3,param_1,param_2,param_3,param_4,0);
  return uVar5;
}

/* ref: Client::Game::Event::QuestEventHandler::vf129 */
uint F_006e0c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e0c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar1 = F_006dcaf0(this,REFG(int, 0x1379694),param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf115 */
uint F_006e0c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0c30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x4)) = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
  iVar2 = *piVar3;
  iVar8 = piVar3[0x20];
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),(char)uVar5)));
  (*(int *)(gen_frame + 0x8)) = piVar3[0x1e];
  uVar5 = ((code *)*(gen_code32 *)(iVar2 + 0xa8))(piVar3);
  if (((char)(*(int * PTR32 *)&gen_args[1]) == '\x01') && (iVar8 == 0)) {
    iVar8 = 0x4c7250;
  }
  bVar4 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)(gen_frame + 0x4)),(*(int * PTR32 *)&gen_args[1]),iVar8,(*(int *)(gen_frame + 0x8)),uVar5,0);
  if (bVar4 == 0) {
    return 0;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))((*(undefined * PTR32 *)&gen_args[0]),piVar3);
  sVar1 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4)));
  uVar6 = F_00a4ffd0();
  iVar2 = REFG(int, 0x1488344);
  iVar7 = 0;
  iVar8 = uVar6 + 0x13b4;
  do {
    if (*(short *)(iVar8 + 4) == sVar1) {
      if (((-1 < iVar7) && (*(char *)(iVar8 + 6) != '\0')) && (uVar5 == 0)) {
        return 0x2ff;
      }
      break;
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 0x10;
  } while (iVar7 < 0x1e);
  if (uVar5 != 0) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar5;
    F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(int *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
    if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar2 + 0x268)) {
      return (uint)(ushort)(*(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10) << 8 | *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10) >> 8);
    }
  }
  return 0x100;
}

/* ref: FUN_006e0d70 */
byte F_006e0d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6e0d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  byte * param_4 = (byte *)(uintptr_t)gen_a4;
  byte * param_5 = (byte *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(byte * PTR32 *)(gen_frame + 0x10)) = param_4;
  if (**(char * PTR32 *)((int)this + 0x16c) != '\0') {
    (*(int *)(gen_frame + 0x8)) = (param_2 & 0xff) + 0x18;
    F_00748d80((undefined *)((int)this + 0x1c0),&(*(int *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x8)));
    if ((*(int *)(gen_frame + 0xc)) != *(int *)((int)this + 0x1c4)) {
      F_0042aca0(param_3);
      F_0042ccf0(param_3,(*(int *)(gen_frame + 0xc)) + 100);
      F_006d0d30(this,param_1,param_2,(*(byte * PTR32 *)(gen_frame + 0x10)),param_5);
      bVar1 = *param_5;
      if (bVar1 != 0) {
        bVar3 = *(*(byte * PTR32 *)(gen_frame + 0x10));
        if (bVar1 < *(*(byte * PTR32 *)(gen_frame + 0x10))) {
          bVar3 = bVar1;
        }
        uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x14))," %u/%u",(uint)bVar3,(uint)bVar1);
        F_0042e360(param_3,uVar2);
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      }
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf116 */
byte F_006e0e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0e60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = REFG(int, 0x1379694);
  if ((~*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x1c))) & 1) != 0) {
    return 1;
  }
  if ((REFG(int, 0x1379694) != 0) && (bVar3 = F_006dc640((*(undefined * PTR32 *)&gen_args[0]),REFG(int, 0x1379694),(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[1])), bVar3 != 0))
  {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if ((uVar4 == 7) &&
       ((uVar4 = F_006bfcb0(piVar2), (char)uVar4 == '\0' &&
        (bVar3 = F_006dcc00((*(undefined * PTR32 *)&gen_args[0]),iVar1,piVar2,0), bVar3 != 0)))) {
      return 0;
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf118 */
uint F_006e0ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0ee0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  byte bVar5;
  uint uVar6;
  undefined2 extraout_var_00 = 0;
  undefined2 uVar9;
  uint uVar7;
  uint uVar8;
  uint3 extraout_var = 0;
  int iVar10;
  int iVar11;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  piVar3 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) == (int *)0x0) {
    return 0;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4)));
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar6 = (*pcVar1)((*(int * PTR32 *)&gen_args[1]));
  iVar11 = *piVar4;
  iVar10 = piVar4[0x20];
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),(char)uVar6)));
  iVar2 = piVar4[0x1e];
  uVar6 = ((code *)*(gen_code32 *)(iVar11 + 0xa8))(piVar4);
  if (((char)(*(int * PTR32 *)&gen_args[1]) == '\x01') && (iVar10 == 0)) {
    iVar10 = 0x4c7250;
  }
  bVar5 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]),piVar3,(*(int * PTR32 *)&gen_args[1]),iVar10,iVar2,uVar6,&(*(int *)(gen_frame + 0x8)));
  if (bVar5 != 0) {
    uVar9 = extraout_var_00;
    if ((*(byte *)((*(int *)(gen_frame + 0x8)) + 0x10) & 0x20) != 0) {
      (*(int * PTR32 *)&gen_args[1]) = (int *)piVar3[0x5d];
      uVar6 = 0;
      if (((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) ||
         (uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3), iVar11 = (int)(*(int * PTR32 *)&gen_args[1]), uVar6 != 1)) {
        iVar11 = 0;
      }
      uVar9 = (undefined2)(uVar6 >> 0x10);
      iVar10 = piVar4[0x5d];
      if ((iVar11 != 0) && (iVar10 != 0)) {
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
        uVar6 = F_0042a990(iVar10 + 8);
        uVar7 = F_0042a990(iVar11 + 8);
        uVar8 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
        uVar6 = F_00a02e70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"GetBehavior",uVar8,uVar7,uVar6,
                             (uint)*(ushort *)((*(int *)(gen_frame + 0x8)) + 0xe),1);
        if (uVar6 == 0) {
          F_00727460(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),&(*(int * PTR32 *)&gen_args[1]));
          uVar6 = (uint)extraout_var << 8;
        }
        return CONCAT22((short)(uVar6 >> 0x10),(*((undefined2 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 0)))));
      }
    }
    return CONCAT22(uVar9,*(undefined2 *)((*(int *)(gen_frame + 0x8)) + 0xe));
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf123 */
byte F_006e1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e1020u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (**((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) == '\0') {
    return 0;
  }
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    iVar8 = piVar2[0x1e];
    iVar7 = piVar2[0x20];
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(char)uVar4);
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2);
    if (((char)uVar4 == '\x01') && (iVar7 == 0)) {
      iVar7 = 0x4c7250;
    }
    bVar3 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]),piVar1,(*(undefined4 *)(gen_frame + 0x4)),iVar7,iVar8,uVar5,8,0);
    if (bVar3 != 0) {
      iVar8 = piVar1[0x5d];
      if ((iVar8 == 0) || (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1), uVar4 != 1)) {
        iVar8 = 0;
      }
      iVar7 = piVar2[0x5d];
      if ((iVar8 != 0) && (iVar7 != 0)) {
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff)));
        uVar4 = F_0042a990(iVar7 + 8);
        uVar5 = F_0042a990(iVar8 + 8);
        uVar6 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
        uVar4 = F_00a02e70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"IsEventItemUsable",uVar6,uVar5,uVar4,(*(undefined4 *)&gen_args[2]),1
                            );
        if (uVar4 == 0) {
          F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),(int)&(*(int * PTR32 *)&gen_args[1]) + 3);
        }
        return (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
      }
      return 0;
    }
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf126 */
uint F_006e1140(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  char cVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  char * pcVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char * pcVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = REFG(int, 0x1379694);
  pcVar5 = (char *)0x0;
  if ((REFG(int, 0x1379694) != 0) && (pcVar5 = *(char * PTR32 *)(this + 0x16c), *pcVar5 != '\0')) {
    F_006d82c0((undefined *)this);
    (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)(this + 0x1d4);
    pcVar5 = (char *)F_00a4ffd0();
    uVar10 = 0;
    pcVar11 = pcVar5 + 0x13b4;
    while (*(short *)(pcVar11 + 4) != (short)(*(uint *)(gen_frame + 0x2c))) {
      uVar10 = uVar10 + 1;
      pcVar11 = pcVar11 + 0x10;
      if (0x1d < (int)uVar10) {
        F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
        return (uint)pcVar5;
      }
    }
    (*(uint *)(gen_frame + 0x1c)) = uVar10;
    if (-1 < (int)uVar10) {
      F_00a83f80(&REFG(undefined, 0x14b1258),uVar10);
      F_00a6a810(&REFG(undefined, 0x14b1258),uVar10,(uint)*(ushort *)(this + 0x1d4),this + 0x1d8);
      (*(char *)(gen_frame + 0x33)) = pcVar11[6];
      F_0042b630(((undefined1 *)(gen_frame + 0x34)));
      piVar6 = (int *)F_00744460(this + 0x328,((byte *)(gen_frame + 0x0)),&(*(char *)(gen_frame + 0x33)));
      iVar9 = *piVar6;
      ((byte *)(gen_frame + 0x0))[0xc] = (char)iVar9;
      ((byte *)(gen_frame + 0x0))[0xd] = (char)((uint)iVar9 >> 8);
      ((byte *)(gen_frame + 0x0))[0xe] = (char)((uint)iVar9 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0xf] = (char)((uint)iVar9 >> 0x18);
      if (iVar9 != *(int *)(this + 0x32c)) {
        ((char *)(gen_frame + 0x88))[0] = '\0';
        F_00c48350(((char *)(gen_frame + 0x88)) + 1,0,0xbf);
        piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)(iVar9 + 0x14)));
        if (piVar6 != *(int * PTR32 *)(iVar9 + 0x14)) {
          do {
            bVar4 = *(byte *)(piVar6 + 4);
            uVar10 = (uint)bVar4;
            ((byte *)(gen_frame + 0x0))[8] = bVar4;
            (*(uint *)(gen_frame + 0x2c)) = uVar10;
            if (uVar10 < (uint)((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x35c) - *(int *)(this + 0x358)) / 0x28)) {
              ((byte *)(gen_frame + 0x0))[4] = *(byte *)((int)piVar6 + 0x11);
              (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = piVar6[3];
              (*(uint *)(gen_frame + 0x24)) = 0;
              (*(uint * PTR32 *)(gen_frame + 0x20)) = ((uint *)GEN_TOP((*(int *)(this + 0x358) + 4 + uVar10 * 0x28)));
              do {
                uVar10 = *(*(uint * PTR32 *)(gen_frame + 0x20));
                if (uVar10 == 0) break;
                uVar7 = F_00ab37e0(uVar10);
                if ((uVar7 != 0) && (((char *)(gen_frame + 0x88))[(int)((*(uint *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x2c)) * 8)] == '\0')) {
                  bVar4 = F_00a5f470(*(undefined4 *)(uVar7 + 0x24));
                  ((byte *)(gen_frame + 0x0))[0x18] = bVar4;
                  uVar8 = 0;
                  iVar9 = 0;
                  if (piVar6[5] == 1) {
                    iVar9 = piVar6[6];
                  }
                  else if (piVar6[5] == 3) {
                    uVar8 = piVar6[6];
                  }
                  if ((*(int *)(uVar7 + 0x24) == 9) || (*(int *)(uVar7 + 0x24) == 0x33)) {
                    bVar4 = F_006dc160((*(undefined * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),
                                         uVar8,iVar9,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),0);
                    if (bVar4 != 0) {
                      uVar8 = 0xebf9;
LAB_006e13a9: ;
                      F_00a83e20(&REFG(undefined, 0x14b1258),(*(uint *)(gen_frame + 0x1c)),uVar10,uVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),uVar7,
                                   (uint)((*(char *)(gen_frame + 0x33)) == -1));
                    }
                  }
                  else {
                    if ((*(int *)(uVar7 + 0x14) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))) ||
                       ((uVar8 != 0 && (uVar8 != uVar10)))) goto LAB_006e1369;
                    uVar8 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x204))
                                      ((*(undefined * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)),*(undefined4 *)(uVar7 + 0x14),uVar10
                                       ,*(undefined4 *)(uVar7 + 0x14));
                    if (uVar8 != 0) goto LAB_006e13a9;
                  }
                  ((char *)(gen_frame + 0x88))[(int)((*(uint *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x2c)) * 8)] = '\x01';
                  break;
                }
LAB_006e1369: ;
                (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x20)) + 1;
                uVar10 = (*(uint *)(gen_frame + 0x24)) + 1;
                (*(uint *)(gen_frame + 0x24)) = uVar10;
              } while (uVar10 < 8);
            }
            if (*(char *)((int)piVar6 + 0x25) == '\0') {
              piVar2 = (int *)piVar6[2];
              if (*(char *)((int)piVar2 + 0x25) == '\0') {
                cVar1 = *(char *)(*piVar2 + 0x25);
                piVar6 = piVar2;
                piVar2 = (int *)*piVar2;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar2 + 0x25);
                  piVar6 = piVar2;
                  piVar2 = (int *)*piVar2;
                }
              }
              else {
                cVar1 = *(char *)(piVar6[1] + 0x25);
                piVar3 = (int *)piVar6[1];
                piVar2 = piVar6;
                while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
                  cVar1 = *(char *)(piVar6[1] + 0x25);
                  piVar3 = (int *)piVar6[1];
                  piVar2 = piVar6;
                }
              }
            }
            this = (*(undefined * PTR32 *)(gen_frame + 0x28));
          } while (piVar6 != *((int * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) + 0x14))));
        }
        REFG(undefined4, 0x14b0ee0) = 1;
        uVar10 = F_00a679e0(&REFG(undefined, 0x14ac288));
        if (uVar10 == 1) {
          *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
        }
      }
      uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x34)));
      pcVar5 = (char *)uVar12;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return (uint)pcVar5;
}

/* ref: Client::Game::Event::QuestEventHandler::vf135 */
byte F_006e14b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e14b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = REFG(int, 0x1379694);
  if (((this[0x44] == (undefined1)0x1) &&
      (piVar1 = *(int * PTR32 *)(this + 0x50), piVar1 != (int *)0x0)) && (REFG(int, 0x1379694) != 0)) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    iVar7 = piVar1[0x20];
    iVar2 = piVar1[0x1e];
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(char)uVar5);
    uVar6 = ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1);
    if (((char)uVar5 == '\x01') && (iVar7 == 0)) {
      iVar7 = 0x4c7250;
    }
    bVar4 = F_006dc160(this,iVar3,(*(undefined4 *)(gen_frame + 0xc)),iVar7,iVar2,uVar6,2,0);
    if (bVar4 == 0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      iVar7 = piVar1[0x1e];
      iVar8 = piVar1[0x20];
      (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31((int3)((uint)iVar2 >> 8),(char)uVar5);
      uVar6 = ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1);
      if (((char)uVar5 == '\x01') && (iVar8 == 0)) {
        iVar8 = 0x4c7250;
      }
      bVar4 = F_006dc160(this,iVar3,(*(undefined4 *)(gen_frame + 0x10)),iVar8,iVar7,uVar6,8,0);
      if (bVar4 == 0) goto LAB_006e1591;
    }
    return 0;
  }
LAB_006e1591: ;
  return this[0x44] != (undefined1)0x7;
}

/* ref: FUN_006e15b0 */
uint F_006e15b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e15b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined * this_01;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar2 == 7) {
    bVar1 = F_00ae20f0(param_1);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 == 3) && (this_00 = (undefined *)param_1[0x3c], this_00 != (undefined *)0x0)) {
      bVar1 = F_005d5fe0(this_00);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) {
        (*(int *)(gen_frame + 0x8)) = REFG(int, 0x1379694);
        uVar2 = 0;
        if (REFG(int, 0x1379694) != 0) {
          (*(uint *)(gen_frame + 0x4)) = 0;
          if (param_1[0x47] == 0) {
            bVar1 = F_00a5f060(param_1);
            if ((bVar1 == 0) || (bVar1 = F_006dcc00(this,(*(int *)(gen_frame + 0x8)),param_1,0), bVar1 != 0)) {
              bVar1 = F_005dbc90(this_00,1);
              if (bVar1 != 0) {
                (*(uint *)(gen_frame + 0x4)) = 2;
              }
            }
            else {
              bVar1 = F_005dbc90(this_00,0);
              if (bVar1 != 0) {
                (*(uint *)(gen_frame + 0x4)) = 1;
              }
            }
            uVar2 = F_006bfcb0(param_1);
            if (((char)uVar2 != '\0') && (**(char * PTR32 *)((int)this + 0x16c) != '\0')) {
              uVar2 = F_006bcb60((*(int *)(gen_frame + 0x8)));
              if ((uVar2 != 0) && (param_1[0x5d] != 0)) {
                uVar3 = F_0042a990(param_1[0x5d] + 8);
                uVar2 = F_0042a990(uVar2 + 8);
                uVar4 = F_0042a990((int)this + 0x16c);
                uVar2 = F_00a02c60(*(undefined * PTR32 *)((int)this + 0xf8),"GetGimmickState",uVar4,uVar2,
                                     uVar3,2);
                if (uVar2 == 0) {
                  puVar5 = (undefined1 *)((int)&(*(int *)(gen_frame + 0x8)) + 1);
                  iVar6 = 2;
                  do {
                    this_01 = *(undefined * PTR32 *)((int)this + 0xf8);
                    *puVar5 = 0;
                    F_00a01d80(this_01,puVar5);
                    puVar5 = puVar5 + -1;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                  uVar2 = 3;
                  iVar6 = 0;
                  do {
                    uVar3 = uVar2 - 1;
                    if (*(char *)((int)&(*(int *)(gen_frame + 0x8)) + iVar6) == '\0') {
                      uVar3 = uVar2;
                    }
                    bVar1 = F_005dbc90(this_00,uVar3);
                    if (bVar1 != 0) {
                      (*(uint *)(gen_frame + 0x4)) = (uint)(ushort)((ushort)(*(uint *)(gen_frame + 0x4)) | 1 << ((byte)uVar3 & 0x1f));
                    }
                    uVar2 = uVar2 + 2;
                    iVar6 = iVar6 + 1;
                  } while (uVar2 < 7);
                }
              }
            }
          }
          else {
            bVar1 = F_005dbc90(this_00,1);
            if (bVar1 != 0) {
              (*(uint *)(gen_frame + 0x4)) = 2;
            }
            bVar1 = F_005dbc90(this_00,3);
            if (bVar1 != 0) {
              (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 8;
            }
            bVar1 = F_005dbc90(this_00,5);
            if (bVar1 != 0) {
              uVar2 = F_00ae2030(param_1,(*(uint *)(gen_frame + 0x4)) | 0x20);
              return uVar2;
            }
          }
          uVar2 = F_00ae2030(param_1,(*(uint *)(gen_frame + 0x4)));
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_006e17b0 */
uint F_006e17b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e17b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006d8b60(this,param_1);
  if ((uVar1 != 0) &&
     ((((*(byte *)((int)this + 800) & 2) == 0 || ((uVar1 & 0x500) != 0)) || ((uVar1 & 0x70) != 0))))
  {
    return 0;
  }
  return 1;
}

/* ref: FUN_006e17f0 */
byte F_006e17f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e17f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  int iVar2;
  undefined * this_00;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]));
  ((code *)*(gen_code32 *)(*piVar3 + 0xa8))(piVar3);
  if ((char)uVar5 != '\a') {
    return (byte)(*(undefined4 *)&gen_args[3]);
  }
  cVar1 = **((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c)));
  (*(undefined4 *)&gen_args[3]) = CONCAT13(cVar1 != '\0',(undefined3)(*(undefined4 *)&gen_args[3]));
  bVar4 = F_006d9290((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),1);
  if ((bVar4 != 0) && (bVar4 = F_006d9430((*(undefined * PTR32 *)&gen_args[0]),piVar3), bVar4 != 0)) {
    return 0;
  }
  (*(int * PTR32 *)&gen_args[2]) = (int *)0x0;
  bVar4 = F_006dc640((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),piVar3,&(*(int * PTR32 *)&gen_args[2]));
  if (bVar4 != 0) {
    if ((*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x10))) & 8) == 0) {
      return *(byte *)((int)piVar3 + 0x8e) & 1;
    }
    iVar2 = piVar3[0x5d];
    uVar5 = F_006bcb60((*(undefined4 *)&gen_args[1]));
    if ((((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3)) != '\0') && (uVar5 != 0)) && (iVar2 != 0)) {
      uVar6 = F_0042a990(iVar2 + 8);
      uVar5 = F_0042a990(uVar5 + 8);
      uVar7 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
      uVar5 = F_00a02c60(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"IsTargetingPossible",uVar7,uVar5,uVar6,1);
      if (uVar5 == 0) {
        this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
        (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3)) = 0;
        bVar4 = F_00a01d80(this_00,(int)&(*(undefined4 *)&gen_args[3]) + 3);
        if (bVar4 != 0) {
          return (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3));
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006e1910 */
uint F_006e1910(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba1bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10ba1b0));
  if (REFG(void * PTR32, 0x1488760) == this) {
    REFG(void * PTR32, 0x1488760) = (undefined *)0x0;
  }
  if (*(int *)((int)this + 0x1c00) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x1c08);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x1c00));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c00);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1c00) = 0;
    }
  }
  if (*(int *)((int)this + 0x1c04) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x1c0c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x1c04));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c04);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1c04) = 0;
    }
  }
  iVar4 = 9;
  pvVar5 = (undefined *)((int)this + 0x1bdc);
  do {
    pvVar5 = (undefined *)((int)pvVar5 + -0xa8);
    F_0042c880(pvVar5);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0042c880((undefined *)((int)this + 0x14dc));
  iVar4 = 0x27;
  pvVar5 = (undefined *)((int)this + 0x14e4);
  do {
    pvVar5 = (undefined *)((int)pvVar5 + -0x7c);
    F_0042c880(pvVar5);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0042c880((undefined *)((int)this + 0x10c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  uVar3 = F_006df660(this);
  return uVar3;
}

/* ref: Client::Game::Event::ShopEventHandler::vf115 */
ushort F_006e1a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e1a10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  code * pcVar3;
  int * piVar4;
  short sVar5;
  uint uVar6;
  byte bVar7;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[1])[0x20];
  iVar2 = (*(int * PTR32 *)&gen_args[1])[0x1e];
  pcVar3 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xa8)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[1]) = (int *)iVar1;
  uVar6 = (*pcVar3)(piVar4);
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,(*(int * PTR32 *)&gen_args[1]),iVar2,uVar6);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*(gen_code32 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x200))((*(undefined * PTR32 *)&gen_args[0]),uVar6)));
  iVar1 = REFG(int, 0x1488344);
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int * PTR32 *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x268)) {
      sVar5 = *(short *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
      (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 1)))) = (byte)((ushort)sVar5 >> 8);
      bVar7 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 1))));
      goto LAB_006e1a92;
    }
  }
  sVar5 = 1;
  bVar7 = 0;
LAB_006e1a92: ;
  return sVar5 << 8 | (ushort)bVar7;
}

/* ref: FUN_006e1ab0 */
byte F_006e1ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x10b3a6a),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),&REFG(undefined, 0x10b3a6b),REFG(undefined4, 0x108cc50));
  F_00ab0230(0x18f48,((undefined1 *)(gen_frame + 0x64)));
  F_00ab0230(0x18f49,((undefined1 *)(gen_frame + 0x10)));
  (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)((int)this + 0x1d4);
  F_00744670((undefined *)((int)this + 0x344),&(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8)));
  iVar1 = *(int *)((*(int *)(gen_frame + 0xc)) + 0x18);
  if (iVar1 != 0) {
    ((int *)(gen_frame + 0xb8))[0] = iVar1;
    ((uint *)(gen_frame + 0xcc))[0] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x28);
    ((undefined1 *)(gen_frame + 0xe0))[0] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x31);
  }
  uVar4 = (uint)(iVar1 != 0);
  if (*(int *)((*(int *)(gen_frame + 0xc)) + 0x1c) != 0) {
    ((int *)(gen_frame + 0xb8))[(int)(uVar4)] = *(int *)((*(int *)(gen_frame + 0xc)) + 0x1c);
    ((uint *)(gen_frame + 0xcc))[(int)(uVar4)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2a);
    ((undefined1 *)(gen_frame + 0xe0))[(int)(uVar4)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x32);
    uVar4 = uVar4 + 1;
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + 0x20) != 0) {
    ((int *)(gen_frame + 0xb8))[(int)(uVar4)] = *(int *)((*(int *)(gen_frame + 0xc)) + 0x20);
    ((uint *)(gen_frame + 0xcc))[(int)(uVar4)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2c);
    ((undefined1 *)(gen_frame + 0xe0))[(int)(uVar4)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x33);
    uVar4 = uVar4 + 1;
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + 0x24) != 0) {
    ((int *)(gen_frame + 0xb8))[(int)(uVar4)] = *(int *)((*(int *)(gen_frame + 0xc)) + 0x24);
    ((uint *)(gen_frame + 0xcc))[(int)(uVar4)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2e);
    ((undefined1 *)(gen_frame + 0xe0))[(int)(uVar4)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x34);
    uVar4 = uVar4 + 1;
  }
  F_00ba07c0(&REFG(undefined, 0x14b0f2c),((int *)(gen_frame + 0xb8)),((uint *)(gen_frame + 0xcc)),((undefined1 *)(gen_frame + 0xe0)),uVar4,this);
  bVar2 = F_00ba05d0(&REFG(undefined, 0x14b0f2c));
  if (bVar2 != 0) {
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x44,0,0);
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar5 = 0x1d;
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    piVar3 = (int *)F_00763050(uVar4,uVar5);
    ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,4,((undefined1 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
    return 1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return 0;
}

/* ref: FUN_006e1c70 */
uint F_006e1c70(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1c70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_006e1ab0((undefined *)*puVar3);
    if (bVar1 != 0) {
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),1);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006e1cf0 */
uint F_006e1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    F_006dd050((undefined *)*puVar2);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006e1d50 */
uint F_006e1d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e1d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(ushort *)((int)this + 0x1d4);
  uVar6 = F_00a4ffd0();
  uVar6 = uVar6 + 0x1684;
  iVar7 = 0;
  do {
    if (*(ushort *)(uVar6 + 4) == uVar1) {
      if (-1 < iVar7) {
        uVar6 = *(byte *)(uVar6 + 8) & 7;
        (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
        F_00744670((undefined *)((int)this + 0x344),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        uVar1 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x2c);
        uVar2 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x2e);
        uVar3 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x2a);
        uVar4 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x28);
        *param_1 = uVar6;
        bVar5 = F_006c2400(uVar6,(uint)uVar2 + (uint)uVar1 + (uint)uVar3 + (uint)uVar4);
        *param_2 = (uint)bVar5;
        uVar6 = F_006c23a0((*(int *)(gen_frame + 0x4)) + 0x10);
        *param_3 = uVar6;
      }
      return uVar6;
    }
    iVar7 = iVar7 + 1;
    uVar6 = uVar6 + 0x10;
  } while (iVar7 < 0x10);
  return uVar6;
}

/* ref: FUN_006e1e00 */
uint F_006e1e00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1e00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0x0)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x0)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  if (this != (undefined *)0x0) {
    F_006e1d50(this,&(*(undefined4 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x20)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)(gen_frame + 0x28)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)(gen_frame + 0x24)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)(gen_frame + 0x20)));
  F_00a02240(((byte *)(gen_frame + 0x0)));
  return 3;
}

/* ref: FUN_006e1e90 */
byte F_006e1e90(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)((int)this + 0x1d4);
  bVar6 = 0;
  uVar2 = F_00a4ffd0();
  iVar5 = 0;
  iVar3 = uVar2 + 0x1684;
  do {
    if (*(ushort *)(iVar3 + 4) == uVar1) {
      if (-1 < iVar5) {
        bVar6 = *(byte *)(iVar3 + 8) >> 5;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar5 < 0x10);
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
  F_00744670((undefined *)((int)this + 0x344),&(*(uint *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
  uVar2 = ((uint)*(byte *)((*(uint *)(gen_frame + 0x4)) + 0x30) - (uint)bVar6) + 1;
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  (*(uint *)(gen_frame + 0x8)) = 0;
  puVar4 = &(*(uint *)(gen_frame + 0x4));
  if ((int)uVar2 < 1) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  return (byte)*puVar4;
}

/* ref: FUN_006e1f10 */
uint F_006e1f10(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1f10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = 0;
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_006e1e90((undefined *)*puVar3);
    uVar2 = (uint)bVar1;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006e1f70 */
uint F_006e1f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e1f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  char cVar2;
  ushort uVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * PTR32 * ppuVar10;
  int iVar11;
  undefined4 * puVar12;
  int iVar13;
  undefined4 * puVar14;
  ushort uVar15;
  float10 fVar16;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this;
  uVar6 = F_00a4ffd0();
  uVar7 = F_00ab3330(param_1 & 0xffff);
  uVar8 = 0;
  if (uVar7 != 0) {
    iVar11 = 0;
    iVar13 = uVar6 + 0x1684;
    while (uVar15 = (ushort)param_1, *(ushort *)(iVar13 + 4) != uVar15) {
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 0x10;
      if (0xf < iVar11) {
        return uVar7;
      }
    }
    (*(uint *)(gen_frame + 0x14)) = 0;
    uVar8 = F_00ab21d0((uint)*(byte *)(uVar7 + 0x55));
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        if (*(char *)(uVar8 + 4 + uVar6) != '\0') {
          (*(uint *)(gen_frame + 0x14)) = uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x1d);
    }
    uVar8 = F_00a68280(&REFG(undefined1, 0x14ab070),(*(uint *)(gen_frame + 0x14)),0);
    bVar1 = *(byte *)(iVar13 + 8);
    uVar3 = *(ushort *)(iVar13 + 10);
    (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),REFG(undefined1, 0x14b4ec1)) & 0xffffff01;
    puVar14 = ((undefined4 *)GEN_TOP(((undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xd2])[1]));
    cVar2 = *(char *)((int)puVar14 + 0x9d);
    puVar12 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xd2];
    while (cVar2 == '\0') {
      if (*(ushort *)(puVar14 + 3) < uVar15) {
        puVar9 = (undefined4 *)puVar14[2];
        puVar14 = puVar12;
      }
      else {
        puVar9 = (undefined4 *)*puVar14;
      }
      puVar12 = puVar14;
      puVar14 = puVar9;
      cVar2 = *(char *)((int)puVar9 + 0x9d);
    }
    puVar14 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xd2];
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar12;
    if ((puVar12 == puVar14) || (uVar15 < *(ushort *)(puVar12 + 3))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar14;
      ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    }
    else {
      ppuVar10 = (undefined4 * PTR32 *)&(*(undefined4 * PTR32 *)(gen_frame + 0x18));
    }
    puVar14 = *ppuVar10;
    puVar14 = ((undefined4 *)GEN_TOP(((uint)*(ushort *)((int)puVar14 + 0x2e) + (uint)*(ushort *)(puVar14 + 0xb) +
               (uint)*(ushort *)((int)puVar14 + 0x2a) + (uint)*(ushort *)(puVar14 + 10))));
    uVar6 = F_00ab3300(0x25);
    if (uVar6 == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = *(byte *)(uVar6 + 4);
    }
    puVar12 = ((undefined4 *)GEN_TOP(((uint)bVar5 * (uint)(bVar1 & 7))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar12;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar14;
    dVar4 = (double)(int)((int)(uintptr_t)puVar12) / (double)(int)puVar14;
    fVar16 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                          (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
    (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 2)) = ((undefined2)0x27f);
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = ((undefined4 *)GEN_TOP(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0)))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(((undefined2)0x27f) | 0xc00);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(int)TRUNC(fVar16);
    uVar8 = F_006d6580(param_1,(uint)uVar3,uVar8 & 0xffff,(*(uint *)(gen_frame + 0xc)),(uint)REFG(undefined1, 0x14ab29a),param_2,0,0,
                         0,0,(*(uint *)(gen_frame + 0x14)),0,(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  }
  return uVar8;
}

/* ref: FUN_006e2150 */
byte F_006e2150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2150u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((char)(*(int *)&gen_args[4]) != '\x02') {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x7e) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x7f) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x80) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x81) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)(iVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x82) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x2dd8))) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
  uVar2 = *(*(undefined4 * PTR32 *)&gen_args[3]);
  (*(int *)&gen_args[4]) = REFG(int, 0x1488344);
  F_00aa4270((*(undefined * PTR32 *)&gen_args[1]),uVar2,0,0);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)&gen_args[2]) & 0xffff;
  uVar3 = *(undefined4 *)((*(int *)&gen_args[4]) + 0x6f0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  (*(int *)(gen_frame + 0x10)) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00746770((undefined *)((*(int *)&gen_args[4]) + 0x6f0),uVar3,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf6 */
uint F_006e2260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2260u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar4 = (*(uint *)&gen_args[1]);
  F_006df030(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),(*(uint *)&gen_args[1]),REFG(int, 0x1379694),1);
  bVar3 = F_006db1d0((undefined *)(*(undefined * PTR32 *)&gen_args[0]),uVar4);
  iVar2 = REFG(int, 0x1379694);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (REFG(int, 0x1379694) != 0) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(uint *)&gen_args[1]),REFG(int, 0x1379694));
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e) = 0;
    }
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(&(*(uint *)&gen_args[1]),iVar2);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7f) = 0;
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::WarpEventHandler::vf6 */
unsigned int F_006e22d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e22d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  F_006db1d0((undefined *)this,param_1);
  F_006dd780(this_00,param_1);
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf18 */
unsigned int F_006e22f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e22f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  F_006db430((undefined *)this,param_1);
  F_006dd780(this_00,REFG(undefined4, 0x1379694));
  return 0;
}

/* ref: Client::Game::Event::StoryEventHandler::vf116 */
byte F_006e2310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2310u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  ushort uVar5;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar5 = F_006dd800((*(undefined * PTR32 *)&gen_args[0]),REFG(int, 0x1379694));
  (*(int *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[1]) + 0x80);
  F_00745bd0((*(undefined * PTR32 *)&gen_args[0]) + 0x254,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x4));
  while( true ) {
    if (piVar3 == (*(int * PTR32 *)(gen_frame + 0x8))) {
      return 0;
    }
    if ((*(ushort *)(piVar3 + 4) <= uVar5) && (uVar5 < *(ushort *)((int)piVar3 + 0x12))) break;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x15);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  return 1;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf6 */
uint F_006e23d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e23d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_006db1d0((undefined *)this,param_1);
  iVar1 = REFG(int, 0x1379694);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (REFG(int, 0x1379694) != 0) {
    (*(int *)(gen_frame + 0x58)) = *(int *)(this + 4);
    F_006d7550(&(*(int *)(gen_frame + 0x5c)),REFG(int, 0x1379694));
    if ((*(int *)(gen_frame + 0x5c)) != *(int *)((*(int *)(gen_frame + 0x58)) + 0x30)) {
      *(undefined1 *)((*(int *)(gen_frame + 0x5c)) + 0x7e) = 0;
    }
    (*(int *)(gen_frame + 0x5c)) = *(int *)(this + 4);
    F_006d7550(&(*(int *)(gen_frame + 0x58)),iVar1);
    if ((*(int *)(gen_frame + 0x58)) != *(int *)((*(int *)(gen_frame + 0x5c)) + 0x30)) {
      *(undefined1 *)((*(int *)(gen_frame + 0x58)) + 0x7f) = 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
    if ((char)uVar3 != '\0') {
      (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      F_00aa0000(param_1,0x2ff,0,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
      uVar3 = F_006df030(*(undefined * PTR32 *)(this + 4),param_1,REFG(int, 0x1379694),1);
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::EventHandlerModule::vf6 */
byte F_006e24f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e24f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  if ((short)param_2 == 7) {
    F_006de0e0(this,0xffff);
  }
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x30)));
  if (piVar5 != *(int * PTR32 *)(this + 0x30)) {
    do {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar5[4] + 200))
                        ((int *)piVar5[4],param_1,param_2,param_3,param_4);
      if ((char)uVar4 != '\0') {
        return 1;
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(this + 0x30));
  }
  return 0;
}

/* ref: FUN_006e25a0 */
uint F_006e25a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e25a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1c8))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e25f0 */
unsigned int F_006e25f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e25f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_006ddc50((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1);
  return 0;
}

/* ref: FUN_006e2610 */
uint F_006e2610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2610u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e0))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e2660 */
unsigned int F_006e2660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2660u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_006ddd80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1);
  return 0;
}

/* ref: FUN_006e2680 */
uint F_006e2680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2680u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f0))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e26d0 */
uint F_006e26d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e26d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f8))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e2720 */
uint F_006e2720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2720u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e4))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
  }
  return uVar2;
}

/* ref: FUN_006e2770 */
unsigned int F_006e2770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2770u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_006ddfb0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1);
  return 0;
}

/* ref: FUN_006e2790 */
uint F_006e2790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2790u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[2]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    if (((*(uint *)&gen_args[1]) & 1) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1c8))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 2) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e0))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 4) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f0))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 8) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f8))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 0x10) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 500))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
    if (((*(uint *)&gen_args[1]) & 0x20) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e4))))(*(int * PTR32 *)((int)pvVar1 + 0x10));
    }
  }
  return uVar2;
}

/* ref: FUN_006e2840 */
uint F_006e2840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2840u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_006de320((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1);
  return uVar1;
}

/* ref: Client::Game::Event::LeveDirector::vf154 */
uint F_006e2860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  int * piVar9;
  undefined4 uVar10;
  
  uVar8 = param_1 & 0xff;
  uVar5 = (uint)(byte)param_2;
  uVar10 = 0;
  uVar6 = F_0042a990(this + 0x16c);
  piVar7 = (int *)F_00a02640(*(undefined * PTR32 *)(this + 0xf8),"OnSequence",uVar6,uVar8,uVar5,uVar10);
  if ((byte)param_2 == 0xfe) {
    F_00a6ddf0(&REFG(undefined, 0x14ab380));
    iVar3 = REFG(int, 0x1488344);
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1488344) + 0x30);
    piVar9 = (int *)*piVar7;
    if (piVar9 != piVar7) {
      do {
        piVar2 = (int *)piVar9[4];
        if (*(short *)((int)piVar2 + 10) == 1) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x22c))(piVar2);
          ((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0x1c8))((int *)piVar9[4]);
          ((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0x1f8))((int *)piVar9[4]);
          piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0x1e4))((int *)piVar9[4])));
        }
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          piVar2 = (int *)piVar9[2];
          if (*(char *)((int)piVar2 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar7 = (int *)*piVar2;
            while (piVar9 = piVar2, cVar1 == '\0') {
              cVar1 = *(char *)(*piVar7 + 0x15);
              piVar2 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar4 = (int *)piVar9[1];
            piVar2 = piVar9;
            while ((piVar7 = piVar4, piVar9 = piVar7, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))
                  ) {
              cVar1 = *(char *)(piVar7[1] + 0x15);
              piVar4 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      } while (piVar9 != *(int * PTR32 *)(iVar3 + 0x30));
    }
  }
  else if ((byte)param_2 == 0xff) {
    F_00a69720(&REFG(undefined, 0x14ab380));
    return (uint)piVar7;
  }
  return (uint)piVar7;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf154 */
uint F_006e2960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006e2860((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::DirectorModule::vf2 */
uint F_006e2970(unsigned int gen_a0)
{
  GEN_ENTER(0x6e2970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)(this + 0x2c);
  if (piVar4 != *(int * PTR32 *)(this + 0x30)) {
    do {
      puVar1 = (undefined4 *)*piVar4;
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int * PTR32 *)(this + 0x30));
  }
  iVar2 = *(int *)(this + 0x2c);
  if (iVar2 != *(int *)(this + 0x30)) {
    F_00c46e20(iVar2,*(int *)(this + 0x30),0);
    *(int *)(this + 0x30) = iVar2;
  }
  uVar3 = F_00745180(this + 0x4c);
  this[0x24] = (undefined1)0x0;
  return uVar3;
}

/* ref: FUN_006e29e0 */
byte F_006e29e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e29e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006deae0(REFG(void * PTR32, 0x1488344),param_2,this,param_1);
  return bVar1;
}

/* ref: FUN_006e2a00 */
uint F_006e2a00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e2a00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  uVar1 = *puVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar3;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  iVar6 = 3;
  if (2 < (int)uVar3) {
    do {
      bVar2 = F_00a01f20(((byte *)(gen_frame + 0x8)),iVar6);
      if (bVar2 != 0) break;
      uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar6);
      F_006deae0(REFG(void * PTR32, 0x1488344),uVar5,uVar1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar3);
  }
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006e2aa0 */
uint F_006e2aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e2aa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  F_00748d80((undefined *)(iVar1 + 0x1c0),&(*(int *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x28)));
  if ((*(int *)(gen_frame + 0x24)) != *(int *)(iVar1 + 0x1c4)) {
    uVar2 = F_0042a990((*(int *)(gen_frame + 0x24)) + 100);
    if (uVar2 != 0) {
      F_0042e430((undefined *)(iVar1 + 0x23c),uVar2);
    }
  }
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006e2b30 */
unsigned int F_006e2b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (((((char)param_4 == '\x06') && (REFG(int, 0x1379694) != 0)) &&
      (*(char *)(REFG(int, 0x1379694) + 0x1688) == '\x12')) && (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0)
     ) {
    uVar1 = F_006dd370(*(undefined * PTR32 *)((int)this + 0x54),REFG(int, 0x1379694));
    if (uVar1 == 0) {
      F_006d9810(((undefined *)(uint)(*(undefined * PTR32 *)((int)this + 0x54))),this,299);
    }
  }
  return 0;
}

/* ref: FUN_006e2b70 */
uint F_006e2b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e2b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x54) == (undefined *)0x0) {
    return (uint)this & 0xffffff00;
  }
  uVar1 = F_006d9810(*(undefined * PTR32 *)((int)this + 0x54),this,param_1);
  return uVar1;
}

/* ref: FUN_006e2b90 */
uint F_006e2b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    if ((piVar1 != (int *)0x0) && ((short)piVar1[0x15] == (short)param_2)) {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,param_2,param_3,param_4)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_006e2be0 */
uint F_006e2be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6e2be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    if (((piVar1 != (int *)0x0) && ((short)piVar1[0x15] == (short)param_2)) &&
       ((*(byte *)(piVar1 + 0x17) & 1) != 0)) {
      *(byte *)(piVar1 + 0x17) = *(byte *)(piVar1 + 0x17) & 0xfe;
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x6c))(piVar1,param_2,param_3,param_4,param_5)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_006e2c50 */
uint F_006e2c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    if (((piVar1 != (int *)0x0) && ((short)piVar1[0x15] == (short)param_2)) &&
       ((*(byte *)(piVar1 + 0x17) & 1) != 0)) {
      *(byte *)(piVar1 + 0x17) = *(byte *)(piVar1 + 0x17) & 0xfe;
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,param_2,param_3,param_4)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_006e2cb0 */
uint F_006e2cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1,param_2,param_3,param_4);
    }
  }
  return uVar2;
}

/* ref: FUN_006e2d00 */
uint F_006e2d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x6e2d00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar2 = (int *)F_006dda70(this,param_1);
    }
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x4)));
      if ((1 < (byte)param_4) && (((byte)param_4 < 4 || ((byte)param_4 == 7)))) {
        uVar3 = F_00463610(0,param_5,(uint)(byte)param_4);
        F_0042e430(((undefined1 *)(gen_frame + 0x4)),uVar3);
      }
      iVar1 = *piVar2;
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
      ((code *)*(gen_code32 *)(iVar1 + 0x78))(piVar2,uVar3,param_6,param_7,param_8,param_9);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar3 = (uint)uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_006e2dc0 */
uint F_006e2dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this,param_1);
    }
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1,param_2);
      return uVar2;
    }
  }
  puVar3 = (undefined4 *)F_00ab3d50(param_2);
  uVar2 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))
                      (piVar1,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1))
    ;
  }
  return uVar2;
}

/* ref: FUN_006e2e40 */
uint F_006e2e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e2e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (*(uint *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar4 = (*(uint *)&gen_args[2]) & 0xffff | 0x10000;
  if ((*(int *)&gen_args[1]) == 0) {
    (*(uint *)&gen_args[3]) = uVar4;
    F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[3]));
    uVar4 = (*(uint *)&gen_args[2]);
    if ((*(uint *)&gen_args[2]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[2]) + 0x10) + 0x22c))))(*(int * PTR32 *)((*(uint *)&gen_args[2]) + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1c8))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1e0))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1f0))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1f8))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 500))))(*(int * PTR32 *)(uVar4 + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1e4))))(*(int * PTR32 *)(uVar4 + 0x10));
    }
    (*(uint *)&gen_args[3]) = 0x1a;
    F_006ddd80((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[3]),1);
    if (REFG(int, 0x14b4eb4) < 1) {
      REFG(int, 0x14b4eb4) = 1;
    }
  }
  else if ((*(int *)&gen_args[1]) == 1) {
    F_006de0e0((*(undefined * PTR32 *)&gen_args[0]),0x3b);
    (*(uint *)&gen_args[2]) = uVar4;
    F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[2]));
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x10) + 0x1f0))))(*(int * PTR32 *)((int)pvVar2 + 0x10));
    }
    if ((ushort)(*(uint *)&gen_args[3]) < 0x1e) {
      F_00a83f80(&REFG(undefined, 0x14b1258),(*(uint *)&gen_args[3]) & 0xffff);
    }
  }
  else if ((*(int *)&gen_args[1]) == 2) {
    F_006de0e0((*(undefined * PTR32 *)&gen_args[0]),0xffff);
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = (uint)((*(int *)&gen_args[1]) == 1);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  uVar3 = F_008229a0(pvVar2,uVar3,uVar4);
  return uVar3;
}

/* ref: FUN_006e2fa0 */
uint F_006e2fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6e2fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if ((((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) == (*(uint *)&gen_args[1])) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) == (*(int *)&gen_args[2]))) &&
      (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244))) == (*(int *)&gen_args[3]))) &&
     ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248))) == (char)(*(undefined4 *)&gen_args[4]) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) == (*(int *)&gen_args[5])))))
  {
    if ((char)(*(undefined4 *)&gen_args[4]) == '\n') {
      (*(uint *)&gen_args[1]) = F_005f3270(0x31,(*(int *)&gen_args[5]),0);
      if ((*(uint *)&gen_args[1]) != 0) {
        F_0073d9b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
        F_00745550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))),&(*(uint *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
      }
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) != 0) {
      F_00a4a760(&REFG(undefined, 0x14a7360),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))),0);
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) = 0xe0000000;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = 0;
  }
  if ((*(int *)&gen_args[2]) == -0x20000000) {
    uVar3 = 0xe0000000;
    uVar4 = 0;
  }
  else {
    uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]));
    uVar4 = uVar3;
  }
  if (uVar1 != 0) {
    if ((uVar1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),uVar1);
    }
    else {
      piVar2 = (int *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    }
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xb8))(piVar2,uVar4,(*(undefined4 *)&gen_args[4]),(*(int *)&gen_args[5]),(*(undefined4 *)&gen_args[6]));
    }
  }
  return uVar3;
}

/* ref: FUN_006e3100 */
byte F_006e3100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (REFG(int, 0x13238f8) != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(undefined4, 0x1323904),0);
  }
  if (((char)param_2 == '\0') && (uVar2 = F_006d9f00(this), (char)uVar2 != '\0')) {
    return 0;
  }
  if (*(int *)((int)this + 0x224) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x214);
    uVar2 = *(uint *)((int)this + 0x220);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    uVar3 = uVar2;
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar3 = uVar2 - *(uint *)(iVar4 + 8);
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 0x2c))) != '\0') {
      return 0;
    }
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + 8)));
    if (uVar2 != 0) {
      if ((uVar2 & 0x80000000) == 0x80000000) {
        piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c),uVar2);
      }
      else {
        piVar1 = (int *)F_006dda70(this,uVar2);
      }
      if ((piVar1 != (int *)0x0) && ((short)piVar1[0x15] != -1)) {
        uVar2 = F_00743a80((undefined *)((int)this + 0x214));
        if (*(char *)(uVar2 + 0x2c) == '\0') {
          *(undefined1 *)(uVar2 + 0x2c) = 1;
        }
        ((code *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1,param_1);
        return 1;
      }
    }
  }
  if ((*(int *)((int)this + 0x238) != 0) && (*(char *)((int)this + 0x25c) == '\0')) {
    *(undefined1 *)((int)this + 0x25c) = 1;
  }
  return 0;
}

/* ref: FUN_006e3240 */
uint F_006e3240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 & 0x80000000) == 0x80000000) {
    uVar1 = F_00748af0((undefined *)((int)this + 0x5c),param_1);
    return uVar1;
  }
  uVar1 = F_006dda70(this,param_1);
  return uVar1;
}

/* ref: FUN_006e3280 */
byte F_006e3280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e3280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = F_00a4ffd0();
  uVar1 = *((ushort *)GEN_TOP((uVar2 + (param_1 & 0xffff) * 0x10 + 0x13b8)));
  *param_4 = 0;
  *param_3 = 0;
  if (((uVar1 != 0) && (uVar2 = uVar1 | 0x10000, uVar2 != 0)) &&
     (piVar3 = (int *)F_006dda70(this,uVar2), piVar3 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    if (((char)uVar4 == '\0') || (*(char *)piVar3[0x5b] == '\0')) {
      return 0;
    }
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x1e8))(piVar3,param_2,3);
    *param_4 = *param_4 + uVar4;
    *param_3 = uVar2;
  }
  return 1;
}

/* ref: FUN_006e3330 */
byte F_006e3330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  
  this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
  uVar1 = F_00a3a8f0(this_00,param_2,0);
  if ((uVar1 != 0) && (uVar1 = *(uint *)(uVar1 + 0x3c), uVar1 != 0)) {
    if ((uVar1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0((undefined *)((int)this + 0x5c),uVar1);
    }
    else {
      piVar2 = (int *)F_006dda70(this,uVar1);
    }
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x1ec))(piVar2,param_1,param_2);
      return (byte)uVar1;
    }
  }
  return 0;
}

/* ref: FUN_006e33b0 */
uint F_006e33b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e33b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x224) != 0) {
    in_EAX = *(uint *)((int)this + 0x220);
    piVar1 = *(int * PTR32 *)((int)this + 0x214);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    uVar3 = in_EAX;
    if (*(uint *)(iVar4 + 8) <= in_EAX) {
      uVar3 = in_EAX - *(uint *)(iVar4 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 8))) != 0) {
      if (REFG(int, 0x13238f8) == 0) {
        if (piVar1 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar1;
        }
        if (*(uint *)(iVar4 + 8) <= in_EAX) {
          in_EAX = in_EAX - *(uint *)(iVar4 + 8);
        }
        uVar3 = *((uint *)GEN_TOP((*(int *)(iVar4 + 4) + in_EAX * 4)));
        if ((*(byte *)(uVar3 + 0x20) >> 1 & 1) == 0) {
          return uVar3;
        }
      }
      bVar2 = F_006e3100(this,0x37,1);
      in_EAX = CONCAT31(extraout_var,bVar2);
    }
  }
  return in_EAX;
}

/* ref: FUN_006e3430 */
uint F_006e3430(unsigned int gen_a0)
{
  GEN_ENTER(0x6e3430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  bVar2 = F_005d4e70();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 != 0) || (iVar1 != 0)) {
    bVar2 = F_00a505f0();
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    if (bVar2 != 0) {
      bVar2 = F_00a50610();
      uVar3 = CONCAT31(extraout_var_01,bVar2);
      if (bVar2 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
        uVar3 = F_006de320(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006e3480 */
uint F_006e3480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * in_EAX = 0;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 == 0) &&
     ((((REFG(int, 0x13238f8) != 0 || (*(int *)((int)this + 0x238) != 0)) ||
       (*(int *)((int)this + 0x224) != 0)) || (*(int *)((int)this + 0x738) != 0)))) {
    uVar2 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
    uVar3 = F_006d9e70(this);
    in_EAX = (int *)uVar3;
    if ((uVar2 == uVar3) && (in_EAX = (int *)F_006d9ec0(((undefined *)(uint)(this))), (char)in_EAX != '\0')) {
      in_EAX = (int *)F_006e33b0(this);
    }
  }
  if (param_1[0x39] != 0) {
    in_EAX = *(int * PTR32 *)((int)this + 0x88);
    if (in_EAX != *(int * PTR32 *)((int)this + 0x8c)) {
      while (**(int * PTR32 *)(*in_EAX + 0x1d4) != param_1[0x39]) {
        in_EAX = in_EAX + 1;
        if (in_EAX == *(int * PTR32 *)((int)this + 0x8c)) {
          return (uint)in_EAX;
        }
      }
      piVar1 = (int *)*in_EAX;
      in_EAX = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        in_EAX = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x270))(piVar1,param_1,param_2)));
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_006e35d0 */
uint F_006e35d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e35d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_007496b0((undefined *)((int)this + 0x5c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x60),
               *(undefined4 * PTR32 *)((int)this + 0x60));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x60),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_006e3610 */
uint F_006e3610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar1 = *(undefined4 *)((int)this + 0x60);
  puVar1[1] = *(undefined4 *)((int)this + 0x60);
  puVar1[2] = *(undefined4 *)((int)this + 0x60);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
    puVar1[4] = param_2;
  }
  uVar2 = F_00746b20((undefined *)((int)this + 0x5c),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: FUN_006e3670 */
uint F_006e3670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3670u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_0073cae0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  uVar1 = F_007496b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_006e36b0 */
unsigned int F_006e36b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e36b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * local_8;
  
  uVar8 = 0;
  do {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar8]));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,1,0);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x158);
  if ((REFG(int, 0x1379694) != 0) && (piVar1 = *(int * PTR32 *)(REFG(int, 0x1379694) + 0x2e04), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,1,0);
  }
  puVar7 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  local_8 = puVar7;
  if (puVar7 != *(undefined4 * PTR32 *)((int)this + 0x30)) {
    do {
      if (puVar7[5] == 7) {
        puVar2 = *(undefined4 * PTR32 *)((int)this + 0x30);
        puVar3 = puVar7;
        puVar4 = puVar7;
        while (puVar4 = puVar4 + 0x22, puVar4 != puVar2) {
          puVar6 = puVar3 + 0x22;
          puVar9 = puVar4;
          puVar10 = puVar3;
          for (iVar5 = 0x22; puVar3 = puVar6, puVar7 = local_8, iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -0x88;
      }
      else {
        puVar7 = puVar7 + 0x22;
        local_8 = puVar7;
      }
    } while (puVar7 != *(undefined4 * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006e3770 */
uint F_006e3770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e3770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * puVar3;
  
  bVar1 = F_00a01f60(param_1,param_3);
  if (bVar1 != 0) {
    uVar2 = F_00a01e40(param_1,param_3);
    F_0042e430(param_4,uVar2);
    return 0;
  }
  bVar1 = F_00a01f40(param_1,param_3);
  if (bVar1 != 0) {
    uVar2 = F_00b9c9b0(*(undefined4 *)((int)param_1 + 8),param_3);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    F_00748d80((undefined *)(param_2 + 0x1c0),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
    if (((*(int *)(gen_frame + 0x4)) == *(int *)(param_2 + 0x1c4)) ||
       (puVar3 = (undefined *)F_0042a990((*(int *)(gen_frame + 0x4)) + 100), puVar3 == (undefined *)0x0)) {
      puVar3 = &REFG(undefined, 0x10b3a1f);
    }
    F_0042e430(param_4,puVar3);
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf56 */
uint F_006e3800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  this_00 = (undefined *)*puVar3;
  if (this_00 == (undefined *)0x0) {
    F_00a02240(((byte *)(gen_frame + 0xc)));
    F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x80)),&REFG(undefined, 0x10b3a26),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x2c)),&REFG(undefined, 0x10b3a27),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),&REFG(undefined, 0x10b3a2a),REFG(undefined4, 0x108cc50));
  bVar1 = F_00a01f60(((byte *)(gen_frame + 0xc)),2);
  if (bVar1 == 0) {
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0xc)),2);
    if (bVar1 != 0) {
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
      puVar4 = (undefined *)F_006dfba0(this_00,uVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = &REFG(undefined, 0x10b3a2b);
      }
      goto LAB_006e38de;
    }
  }
  else {
    puVar4 = (undefined *)F_00a01e40(((byte *)(gen_frame + 0xc)),2);
LAB_006e38de: ;
    F_0042e430(((undefined1 *)(gen_frame + 0x80)),puVar4);
  }
  bVar1 = F_00a01f60(((byte *)(gen_frame + 0xc)),3);
  if (bVar1 == 0) {
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0xc)),3);
    if (bVar1 != 0) {
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
      puVar4 = (undefined *)F_006dfba0(this_00,uVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = &REFG(undefined, 0x10b3a2e);
      }
      goto LAB_006e3935;
    }
  }
  else {
    puVar4 = (undefined *)F_00a01e40(((byte *)(gen_frame + 0xc)),3);
LAB_006e3935: ;
    F_0042e430(((undefined1 *)(gen_frame + 0x2c)),puVar4);
  }
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),4);
  uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),5);
  uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),6);
  bVar1 = F_00a01f60(((byte *)(gen_frame + 0xc)),7);
  if (bVar1 == 0) {
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0xc)),7);
    if (bVar1 == 0) goto LAB_006e39ce;
    uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),7);
    puVar4 = (undefined *)F_006dfba0(this_00,uVar7);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = &REFG(undefined, 0x10b3a2f);
    }
  }
  else {
    puVar4 = (undefined *)F_00a01e40(((byte *)(gen_frame + 0xc)),7);
  }
  F_0042e430(((undefined1 *)(gen_frame + 0xd4)),puVar4);
LAB_006e39ce: ;
  *(undefined * PTR32 *)&REFG(undefined, 0x13240fc) = this_00;
  uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0xd4)));
  uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)));
  uVar9 = F_0042a990(((undefined1 *)(gen_frame + 0x80)));
  F_006c6380(uVar9,uVar8,uVar2,uVar5,uVar6,uVar7);
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x80)));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf15 */
uint F_006e3a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  (*(int *)(gen_frame + 0x28)) = iVar1;
  if (iVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_0042cc20(((undefined1 *)(gen_frame + 0x30)),&REFG(undefined, 0x10b3a32),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x84)),&REFG(undefined, 0x10b3a33),REFG(undefined4, 0x108cc50));
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),2);
    iVar7 = 5;
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
      if (uVar3 != 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 5;
      }
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x8)),3);
    if (bVar2 == 0) {
      bVar2 = F_00a01f20(((byte *)(gen_frame + 0x8)),3);
      if (bVar2 == 0) {
        bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),3);
        if (bVar2 != 0) {
          F_006e3770(((byte *)(gen_frame + 0x8)),iVar1,3,((undefined1 *)(gen_frame + 0x30)));
        }
      }
      else {
        F_00ab0230(0x18f48,((undefined1 *)(gen_frame + 0x30)));
      }
    }
    else {
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0x8)),3);
      F_0042e430(((undefined1 *)(gen_frame + 0x30)),uVar3);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x8)),4);
    if (bVar2 == 0) {
      bVar2 = F_00a01f20(((byte *)(gen_frame + 0x8)),4);
      if (bVar2 == 0) {
        bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),4);
        if (bVar2 != 0) {
          F_006e3770(((byte *)(gen_frame + 0x8)),iVar1,4,((undefined1 *)(gen_frame + 0x84)));
        }
      }
      else {
        F_00ab0230(0x18f49,((undefined1 *)(gen_frame + 0x84)));
      }
    }
    else {
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0x8)),4);
      F_0042e430(((undefined1 *)(gen_frame + 0x84)),uVar3);
    }
    uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
    if (uVar3 == 5) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),5);
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x28)) + 0)) = (char)uVar3;
      (*(int *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x28)), 1, 3),(char)uVar3);
      F_00b9f940(&REFG(undefined, 0x14b0f2c),(*(int *)(gen_frame + 0x28)),iVar1);
    }
    else if (5 < (int)uVar3) {
      (*(byte *)(gen_frame + 0x2f)) = (char)uVar3 - 4;
      do {
        uVar5 = iVar7 - 5;
        uVar6 = uVar5 / 3;
        if (uVar5 == uVar6 * 3) {
          bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),iVar7);
          if (bVar2 != 0) {
            uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar7);
            ((uint *)(gen_frame + 0xd8))[(int)(uVar6)] = uVar5;
          }
        }
        else if (uVar5 % 3 == 1) {
          bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),iVar7);
          if (bVar2 != 0) {
            uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar7);
            ((uint *)(gen_frame + 0xec))[(int)(uVar6)] = uVar5;
          }
        }
        else {
          bVar2 = F_00a01f80(((byte *)(gen_frame + 0x8)),iVar7);
          if (bVar2 != 0) {
            bVar2 = F_00a01e10(((byte *)(gen_frame + 0x8)),iVar7);
            ((byte *)(gen_frame + 0x100))[(int)(uVar6)] = bVar2;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 <= (int)uVar3);
      F_00ba07c0(&REFG(undefined, 0x14b0f2c),((uint *)(gen_frame + 0xd8)),((uint *)(gen_frame + 0xec)),((byte *)(gen_frame + 0x100)),(*(byte *)(gen_frame + 0x2f)) / 3,(*(int *)(gen_frame + 0x28)));
    }
    bVar2 = F_00ba05d0(&REFG(undefined, 0x14b0f2c));
    if (bVar2 != 0) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar8 = 0x1d;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
      piVar4 = (int *)F_00763050(uVar3,uVar8);
      ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x84)),1);
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x84)));
      F_0042c880(((undefined1 *)(gen_frame + 0x30)));
      F_00a02240(((byte *)(gen_frame + 0x8)));
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return uVar3;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x84)));
    F_0042c880(((undefined1 *)(gen_frame + 0x30)));
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: FUN_006e3e00 */
uint F_006e3e00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e3e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_006df450(this);
  F_006df4a0(this);
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x18) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_006e3e70 */
uint F_006e3e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3e70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined * this;
  uint uVar2;
  int * piVar3;
  undefined4 in_ecx;
  
  this = (*(undefined * PTR32 *)&gen_args[0]);
  F_006df2c0((*(undefined * PTR32 *)&gen_args[0]));
  if (REFG(int, 0x1375bbc) == 1) {
    F_00b72010(REFG(undefined * PTR32, 0x01375b94),0);
  }
  F_00b6b970(&REFG(undefined, 0x1375b9c),(float)(float10)0,0);
  if (*(char *)((int)this + 0xd0) == '\0') {
    F_00ab6ca0();
  }
  else {
    uVar2 = F_00ab4c70();
    F_00ab6c00(uVar2,0,0,0,0,1);
  }
  if (REFG(int, 0x1375bbc) != 0) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),0);
    piVar3 = (int *)F_006d7550(&(*(undefined * PTR32 *)&gen_args[0]),REFG(undefined4, 0x1379694));
    if ((*piVar3 != *(int *)((int)this + 0x30)) && (*(char *)(*piVar3 + 0x7e) == '\0')) {
      if (REFG(int, 0x1375bbc) == -1) {
        in_ecx = 0;
      }
      else {
        in_ecx = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
      }
      F_00b6ffe0(in_ecx);
    }
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if ((*(uint *)((int)this + 0x6c) & 0x400) != 0) {
    F_004d1660(REFG(undefined4, 0x1370c18));
    F_009d53f0(REFG(void * PTR32, 0x1487c90),0);
    F_00984b30(0);
    F_00a06560(1);
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3);
      F_004347c0(uVar2);
    }
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  F_006e36b0(this);
  iVar1 = REFG(int, 0x1371290);
  if ((*(char *)(REFG(int, 0x1371290) + 0x30f) == '@') && (REFG(int, 0x1371290) + 0x274 != 0)) {
    F_004a4530(REFG(int, 0x1371290) + 0x274);
  }
  F_004adca0((undefined *)(iVar1 + 0x25c),7,0,0x40);
  F_00ab0600(1000);
  F_00b7c0f0(&REFG(undefined, 0x133e5c0),1);
  uVar2 = REFG(undefined4, 0x137104c);
  *(undefined4 *)(REFG(undefined4, 0x137104c) + 0x1248) = 0;
  *(undefined4 *)(uVar2 + 0x124c) = 0;
  if (*(char *)(uVar2 + 0x1230) != '\0') {
    *(undefined1 *)(uVar2 + 0x1230) = 0;
  }
  *(undefined1 *)((int)this + 0xd3) = 0;
  return uVar2;
}

/* ref: Client::Game::Event::CancelEventSceneTask::vf1 */
uint F_006e4000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e4000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006e3100(REFG(void * PTR32, 0x1488344),0x32,1);
  return 1;
}

/* ref: FUN_006e4020 */
uint F_006e4020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = param_1 & 0xffff | 0x10000;
  if ((uVar1 != 0) && (this_00 = (undefined *)F_006dda70(REFG(void * PTR32, 0x1488344),uVar1), this_00 != (undefined *)0x0))
  {
    uVar1 = F_006d8b60(this_00,*(undefined4 *)((int)this + 0x60));
    return (uint)(uVar1 == 0);
  }
  return 0;
}

/* ref: FUN_006e4080 */
uint F_006e4080(unsigned int gen_a0)
{
  GEN_ENTER(0x6e4080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  undefined * this;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar3 = uVar3 & 0xffff | 0x10000;
  if ((uVar3 == 0) || (this = (undefined *)F_006dda70(REFG(void * PTR32, 0x1488344),uVar3), this == (undefined *)0x0)) {
    uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar2 & 0xffffff00;
  }
  else {
    uVar3 = F_006d8b60(this,*(undefined4 *)(iVar1 + 0x60));
    ((byte *)(gen_frame + 0x8))[0x20] = uVar3 == 0;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006e4130 */
byte F_006e4130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e4130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = param_3 & 0xffff | 0x10000;
  if ((uVar2 != 0) && (this_00 = (undefined *)F_006dda70(REFG(void * PTR32, 0x1488344),uVar2), this_00 != (undefined *)0x0))
  {
    bVar1 = F_006dc7f0(this_00,*(undefined4 *)((int)this + 0x60),param_1,param_2,0);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_006e4190 */
uint F_006e4190(unsigned int gen_a0)
{
  GEN_ENTER(0x6e4190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  puVar5 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar4);
  this = (undefined *)*puVar5;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x4)),2);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2,uVar4);
  iVar1 = *piVar6;
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
  bVar3 = (byte)uVar4;
  ((byte *)(gen_frame + 0x4))[0x20] = bVar3;
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),4);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36));
  ((byte *)(gen_frame + 0x4))[0x24] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)) = uVar2 & 0xffffff00;
  if (((iVar1 != 0) && (bVar3 != 0)) && ((short)uVar4 != 0)) {
    bVar3 = F_006e4130(this,*(undefined4 *)(iVar1 + 4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),uVar4 & 0xffff);
    ((byte *)(gen_frame + 0x4))[0x24] = bVar3;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_006e4240 */
uint F_006e4240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e4240u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  undefined * pvVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined8 *)(gen_frame + 0x4)) = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]));
  (*(undefined8 *)(gen_frame + 0x14)) = (*(undefined8 *)(gen_frame + 0x4));
  uVar2 = F_007325b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined8 *)(gen_frame + 0x14)));
  uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  (*(int * PTR32 *)&gen_args[2]) = (int *)uVar2;
  if (((uVar2 == uVar4) || ((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4)) + 4)) < *(uint *)(uVar2 + 0x14))) ||
     (((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4)) + 4)) == *(uint *)(uVar2 + 0x14) && ((uint)(*(undefined8 *)(gen_frame + 0x4)) < *(uint *)(uVar2 + 0x10))))) {
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x14)) + 4)) = uVar4;
    puVar3 = (uint *)((int)&(*(undefined8 *)(gen_frame + 0x14)) + 4);
  }
  else {
    puVar3 = (uint *)&(*(int * PTR32 *)&gen_args[2]);
  }
  if ((*puVar3 != uVar4) && (uVar4 = *(uint *)(*puVar3 + 0x18), uVar4 != 0)) {
    return uVar4;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1);
  if ((char)uVar4 == '\0') {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    default: ;
      return 0;
    case 5: ;
      pvVar5 = (undefined *)F_00406b90(100,0,0);
      if (pvVar5 == (undefined *)0x0) {
        return 0;
      }
      uVar4 = F_006d53d0(pvVar5,piVar1,(*(undefined4 *)&gen_args[1]));
      break;
    case 7: ;
      pvVar5 = (undefined *)F_00406b90(100,0,0);
      if (pvVar5 == (undefined *)0x0) {
        return 0;
      }
      uVar4 = F_006d5330(pvVar5,piVar1,(*(undefined4 *)&gen_args[1]));
    }
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (uVar4 == 1) {
      pvVar5 = (undefined *)F_00406b90(100,0,0);
      if (pvVar5 == (undefined *)0x0) {
        return 0;
      }
      uVar4 = F_006d5470(pvVar5,piVar1,(*(undefined4 *)&gen_args[1]));
    }
    else {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if (uVar4 == 2) {
        pvVar5 = (undefined *)F_00406b90(100,0,0);
        if (pvVar5 == (undefined *)0x0) {
          return 0;
        }
        uVar4 = F_006d5190(pvVar5,piVar1,(*(undefined4 *)&gen_args[1]));
      }
      else if (uVar4 == 3) {
        pvVar5 = (undefined *)F_00406b90(100,0,0);
        if (pvVar5 == (undefined *)0x0) {
          return 0;
        }
        uVar4 = F_006d50c0(pvVar5,piVar1,(*(undefined4 *)&gen_args[1]));
      }
      else {
        if (uVar4 != 10) {
          return 0;
        }
        pvVar5 = (undefined *)F_00406b90(0x68,0,0);
        if (pvVar5 == (undefined *)0x0) {
          return 0;
        }
        uVar4 = F_006d5260(pvVar5,piVar1,(*(undefined4 *)&gen_args[1]));
      }
    }
  }
  if (uVar4 != 0) {
    (*(undefined8 *)(gen_frame + 0xc)) = (*(undefined8 *)(gen_frame + 0x4));
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x14)) + 0)) = uVar4;
    F_0074fb20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined8 *)(gen_frame + 0x4)),&(*(undefined8 *)(gen_frame + 0xc)));
  }
  return uVar4;
}

/* ref: FUN_006e4420 */
uint F_006e4420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4420u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  
  (*(undefined8 *)(gen_frame + 0xc)) = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))((*(undefined4 * PTR32 *)&gen_args[1]));
  uVar5 = (uint)((ulonglong)(*(undefined8 *)(gen_frame + 0xc)) >> 0x20);
  uVar3 = F_00732600(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined8 *)(gen_frame + 0xc)));
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)uVar3;
  if (uVar3 != uVar1) {
    if ((*(uint *)(uVar3 + 0x14) <= uVar5) &&
       ((uVar5 != *(uint *)(uVar3 + 0x14) || (*(uint *)(uVar3 + 0x10) <= (uint)(*(undefined8 *)(gen_frame + 0xc)))))) {
      puVar4 = (uint *)&(*(undefined4 * PTR32 *)&gen_args[1]);
      goto LAB_006e446c;
    }
  }
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  puVar4 = &(*(uint *)(gen_frame + 0x18));
LAB_006e446c: ;
  uVar3 = *puVar4;
  if (uVar3 != uVar1) {
    puVar2 = *(undefined4 * PTR32 *)(uVar3 + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(uVar3 + 0x18) = 0;
    }
    F_0073d600(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined8 *)(gen_frame + 0xc)));
    puVar4 = (uint *)F_00744fa0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x18)));
  }
  return (uint)puVar4;
}

/* ref: FUN_006e44c0 */
uint F_006e44c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e44c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9644));
  *(int *)((int)this + 4) = REFG(int, 0x1488344) + 0x100;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004296a0(0x14,0,800);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(int *)((int)this + 0x10);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x11))) = 1;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9078));
  *(undefined * PTR32 *)((int)this + 0x24) = this;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9088));
  *(undefined * PTR32 *)((int)this + 0x2c) = this;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9098));
  *(undefined * PTR32 *)((int)this + 0x34) = this;
  *(undefined4 *)((int)this + 0x38) = 2;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 0x54) = 0xffff;
  *(undefined2 *)((int)this + 0x5d) = 0;
  *(undefined1 *)((int)this + 0x5f) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  F_0042b630((int)this + 0x7c);
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined1 *)((int)this + 0x1d) = 0;
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandler::vf141 */
uint F_006e45c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e45c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)F_004296a0(0x14,0,800);
    *puVar2 = *(undefined4 *)(this + 0x10);
    puVar2[1] = *(undefined4 *)(this + 0x10);
    puVar2[2] = *(undefined4 *)(this + 0x10);
    *(undefined2 *)(puVar2 + 4) = 0;
    if (puVar2 + 3 != (int *)0x0) {
      puVar2[3] = param_1;
    }
    F_00746c00(this + 0xc,((undefined1 *)(gen_frame + 0x4)),puVar2,0);
  }
  iVar1 = *(int *)(this + 0x40);
  *(uint *)(this + 0x40) = iVar1 + 1U;
  return iVar1 + 1U;
}

/* ref: Client::Game::Event::EventHandler::vf142 */
uint F_006e4630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4630u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    F_0073ce10((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
    F_00744a50((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
    if (iVar1 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))))((*(undefined * PTR32 *)&gen_args[0]),iVar1);
    }
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0) {
    uVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) - 1;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = uVar2;
    return uVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf33 */
uint F_006e46a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e46a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0xffff;
  if (*(short *)(this + 0x54) != -1) {
    bVar1 = F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_006e46c0 */
uint F_006e46c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e46c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b988c));
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  F_00c48350((undefined *)((int)this + 0xf8),0,0x40);
  return (uint)this;
}

/* ref: FUN_006e4700 */
uint F_006e4700(unsigned int gen_a0)
{
  GEN_ENTER(0x6e4700u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort * puVar1;
  ushort uVar2;
  undefined * this;
  uint uVar3;
  undefined4 * puVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  this = (undefined *)*puVar4;
  if (((*(uint *)((int)this + 0x5a4) <
        (uint)(*(int *)((int)this + 0x578) - *(int *)((int)this + 0x574) >> 2)) &&
      (puVar1 = ((ushort *)GEN_TOP((*(int *)((int)this + 0x574) + *(uint *)((int)this + 0x5a4) * 4))),
      puVar1 != (ushort *)0x0)) && (uVar2 = *puVar1, uVar2 != 0)) {
    F_006e00e0(this,(uint)uVar2);
    uVar3 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar3;
  }
  F_00a01ea0(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006e47a0 */
uint F_006e47a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e47a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
  piVar7 = (int *)0x0;
  piVar6 = (int *)0x0;
  *(uint *)((int)this + 0x56c) = uVar2;
  piVar4 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  (*(uint *)(gen_frame + 0x10)) = 8;
  do {
    iVar5 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) + *(int *)((int)this + 0x270))));
    (*(int *)(gen_frame + 0x14)) = iVar5;
    piVar1 = piVar7;
    if (iVar5 != 0) {
      for (; piVar1 != piVar6; piVar1 = piVar1 + 1) {
        if (*piVar1 == iVar5) goto LAB_006e48d6;
      }
      if ((&(*(int *)(gen_frame + 0x14)) < piVar6) && (piVar7 <= &(*(int *)(gen_frame + 0x14)))) {
        iVar5 = (int)&(*(int *)(gen_frame + 0x14)) - (int)piVar7;
        if (piVar6 == piVar4) {
          uVar2 = (int)piVar6 - (int)((int)(uintptr_t)piVar7) >> 2;
          if (0x3ffffffe < uVar2) {
LAB_006e494f: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar2 = uVar2 + 1;
          uVar3 = (int)piVar4 - (int)((int)(uintptr_t)piVar7) >> 2;
          if (uVar3 < uVar2) {
            if (0x3fffffff - (uVar3 >> 1) < uVar3) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar3 + (uVar3 >> 1);
            }
            if (uVar3 < uVar2) {
              uVar3 = uVar2;
            }
            F_00746120(&(*(int * PTR32 *)(gen_frame + 0x0)),uVar3);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x8));
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (piVar6 != (int *)0x0) {
          *piVar6 = piVar7[iVar5 >> 2];
        }
      }
      else {
        if (piVar6 == piVar4) {
          uVar2 = (int)piVar6 - (int)((int)(uintptr_t)piVar7) >> 2;
          if (0x3ffffffe < uVar2) goto LAB_006e494f;
          uVar2 = uVar2 + 1;
          uVar3 = (int)piVar4 - (int)((int)(uintptr_t)piVar7) >> 2;
          if (uVar3 < uVar2) {
            if (0x3fffffff - (uVar3 >> 1) < uVar3) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar3 + (uVar3 >> 1);
            }
            if (uVar3 < uVar2) {
              uVar3 = uVar2;
            }
            F_00746120(&(*(int * PTR32 *)(gen_frame + 0x0)),uVar3);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x8));
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x0));
          }
        }
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar5;
        }
      }
      piVar6 = piVar6 + 1;
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar6;
    }
LAB_006e48d6: ;
    uVar2 = (*(uint *)(gen_frame + 0x10)) + 4;
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    this = (*(undefined * PTR32 *)(gen_frame + 0x18));
    if (0x17 < uVar2) {
      this_00 = (undefined4 *)F_00406b90(0x20,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        uVar2 = (int)piVar6 - (int)((int)(uintptr_t)piVar7) >> 2;
        (*(uint *)(gen_frame + 0x10)) = uVar2;
        F_00cb4700(this_00,uVar2,((param_3 & 0xff) << 8 | param_1 & 0xff) << 8 | param_2 & 0xff);
        this_00[5] = (*(uint *)(gen_frame + 0x10));
        *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
        this_00[6] = (*(undefined * PTR32 *)(gen_frame + 0x18));
        this_00[7] = ((code *)REFP(0x6dff80));
      }
      *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x570) = this_00;
      param_3 = 0;
      iVar5 = param_3;
      for (piVar4 = piVar7; piVar4 != piVar6; piVar4 = piVar4 + 1) {
        F_00cb4540(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x570),iVar5,*piVar4);
        iVar5 = iVar5 + 1;
      }
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x56c) + 0x48))))
                        (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x56c),*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x570));
      if (piVar7 != (int *)0x0) {
        uVar2 = F_00406ad0(piVar7);
      }
      return uVar2;
    }
  } while( true );
}

/* ref: FUN_006e49c0 */
byte F_006e49c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e49c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int iVar2;
  short * psVar3;
  uint uVar4;
  ushort * puVar5;
  int iVar6;
  ushort * puVar7;
  
  for (psVar3 = *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7ac); psVar3 != *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7b0);
      psVar3 = psVar3 + 8) {
    if ((*psVar3 != 0) && ((char)psVar3[6] == '\0')) {
      return 0;
    }
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)(REFG(int, 0x1488344) + 0x50);
  uVar4 = F_00a4ffd0();
  iVar6 = 0;
  puVar7 = (ushort *)(uVar4 + 0x1688);
  do {
    uVar1 = *puVar7;
    if (uVar1 != 0) {
      (*(uint *)(gen_frame + 0x4)) = (uint)uVar1;
      F_00744670((undefined *)((*(int *)(gen_frame + 0x8)) + 0x344),&(*(int *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x4)));
      if ((*(int *)(gen_frame + 0x0)) == *(int *)((*(int *)(gen_frame + 0x8)) + 0x348)) {
        for (puVar5 = *(ushort * PTR32 *)(REFG(int, 0x1488344) + 0x7ac);
            puVar5 != *(ushort * PTR32 *)(REFG(int, 0x1488344) + 0x7b0); puVar5 = puVar5 + 8) {
          if (*puVar5 == uVar1) {
            iVar2 = *(int *)(puVar5 + 2);
            if (((*(char *)((int)this + 0x265) == '\0') && (*(char *)((int)this + 0x266) == '\0'))
               && (*(char *)((int)this + 0x267) == '\0')) {
              if ((iVar2 != 1) && (iVar2 != 2)) break;
            }
            else if (iVar2 != 3) break;
            if ((char)puVar7[1] == -1) {
              return 1;
            }
            break;
          }
        }
      }
    }
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 8;
    if (0xf < iVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_006e4ad0 */
uint F_006e4ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e4ad0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 10) {
    (&REFG(undefined4, 0x1489d20))[param_1] = param_2;
    (&REFG(undefined1, 0x1489d98))[param_1] = (undefined1)param_3;
    uVar1 = param_2 & 0xffff | 0x30000;
    uVar2 = 0;
    if ((uVar1 != 0) && (uVar2 = F_006dda70(REFG(void * PTR32, 0x1488344),uVar1), uVar2 != 0)) {
      *(undefined1 *)(uVar2 + 0x148) = (undefined1)param_3;
    }
  }
  return uVar2;
}

/* ref: FUN_006e4b30 */
uint F_006e4b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  F_00cb4700((undefined *)((int)this + 0xf8),8,0);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9adc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10b9ad0));
  *(byte *)((int)this + 0x14c) = *(byte *)((int)this + 0x14c) & 0xfc;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  return (uint)this;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf144 */
unsigned int F_006e4be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e4be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_00735e00(this,this);
    if (bVar1 == 0) {
      if (*(short *)(this + 0x54) != -1) {
        F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
      }
    }
    else {
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      if (((byte)this[0x1c] & 1) == 0) {
        this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
        ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_006e4c40 */
uint F_006e4c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined1 *)((int)this + 0x108) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9d24));
  return (uint)this;
}

/* ref: FUN_006e4c80 */
uint F_006e4c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) & 0xf0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9f6c));
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined2 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x18a) = 0;
  *(undefined1 *)((int)this + 0x192) = 0;
  *(undefined2 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x196) = 0;
  *(undefined4 *)((int)this + 0x186) = 0;
  *(undefined4 *)((int)this + 0x18e) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  F_00c48350((undefined *)((int)this + 0x128),0,0x50);
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  return (uint)this;
}

/* ref: Client::Game::Event::QuestEventHandler::vf117 */
byte F_006e4d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e4d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  bVar1 = F_006e17f0(this,REFG(int, 0x1379694),param_1,param_2);
  return bVar1;
}

/* ref: FUN_006e4d80 */
byte F_006e4d80(void)
{
  GEN_ENTER(0x6e4d80u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  int * piVar2;
  ushort * puVar3;
  int iVar4;
  
  uVar1 = F_00a4ffd0();
  this = REFG(void * PTR32, 0x1488344);
  iVar4 = 0;
  puVar3 = (ushort *)(uVar1 + 0x13b8);
  while ((*puVar3 == 0 ||
         ((((uVar1 = *puVar3 | 0x10000, uVar1 != 0 &&
            (piVar2 = (int *)F_006dda70(this,uVar1), piVar2 != (int *)0x0)) &&
           (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), (char)uVar1 != '\0')) &&
          (*(char *)piVar2[0x5b] != '\0'))))) {
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 8;
    if (0x1d < iVar4) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf48 */
uint F_006e4e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006e15b0(this,param_1);
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf141 */
uint F_006e4e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  bVar3 = F_006dbfa0(this);
  (*(byte *)(gen_frame + 0xb)) = bVar3;
  if (param_1 != (int *)0x0) {
    puVar4 = (undefined4 *)F_004296a0(0x14,0,800);
    *puVar4 = *(undefined4 *)(this + 0x10);
    puVar4[1] = *(undefined4 *)(this + 0x10);
    puVar4[2] = *(undefined4 *)(this + 0x10);
    *(undefined2 *)(puVar4 + 4) = 0;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[3] = param_1;
    }
    F_00746c00(this + 0xc,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
  }
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  iVar2 = REFG(int, 0x1379694);
  uVar1 = *(uint *)(this + 0x40);
  if ((param_1 != (int *)0x0) && (REFG(int, 0x1379694) != 0)) {
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if ((uVar5 == 2) &&
       ((param_1[0x21] != -0x20000000 && (bVar3 = F_006d9290(this,iVar2,0), bVar3 != 0)))) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1c8))(this);
      ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
      ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this);
    }
    if (((((byte)this[0x36e] & 2) != 0) && ((*(byte *)(gen_frame + 0xb)) == 0)) &&
       (bVar3 = F_006dc0c0(this,param_1), bVar3 != 0)) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x22c))(this);
    }
  }
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf142 */
uint F_006e4f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e4f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  if ((param_1 != (int *)0x0) && (REFG(int, 0x1379694) != 0)) {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if ((uVar3 == 2) && (param_1[0x21] != -0x20000000)) {
      bVar2 = F_006d9290(this,iVar1,0);
      if (bVar2 != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x1c8))(this);
        ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
        ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this);
        ((code *)*(gen_code32 *)(*(int *)this + 0x1e4))(this);
      }
    }
    uVar3 = F_006e4630((undefined *)this,param_1);
    if (((byte)this[0x36e] & 2) != 0) {
      bVar2 = F_006dbfa0(this);
      if (bVar2 == 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x22c))(this);
      }
    }
    return uVar3;
  }
  uVar3 = F_006e4630((undefined *)this,param_1);
  return uVar3;
}

/* ref: FUN_006e5000 */
uint F_006e5000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba1bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10ba1b0));
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  F_0042cc20((undefined *)((int)this + 0x10c),&REFG(undefined, 0x10b3a62),REFG(undefined4, 0x108cc50));
  puVar1 = (undefined4 *)((int)this + 0x160);
  param_1 = 0x27;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0xfffffff;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    F_0042b630(puVar1 + 9);
    *(undefined1 *)(puVar1 + 0x1e) = 0;
    puVar1 = puVar1 + 0x1f;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x14c0) = 0;
  *(undefined4 *)((int)this + 0x14c4) = 0xfffffff;
  *(undefined4 *)((int)this + 0x14c8) = 0;
  *(undefined1 *)((int)this + 0x14cc) = 0;
  *(undefined4 *)((int)this + 0x14d0) = 0;
  *(undefined4 *)((int)this + 0x14d4) = 0;
  *(undefined1 *)((int)this + 0x14d8) = 0;
  F_0042b630((int)this + 0x14dc);
  *(undefined4 *)((int)this + 0x1530) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1538);
  param_1 = 9;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    F_0042b630(puVar1 + 5);
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined4 *)((int)puVar1 + 0x9a) = 0;
    *(undefined1 *)((int)puVar1 + 0x9e) = 0;
    puVar1[0x28] = 0;
    puVar1 = puVar1 + 0x2a;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined1 *)((int)this + 0x1bc8) = 0;
  *(undefined4 *)((int)this + 0x1bcc) = 0;
  *(undefined4 *)((int)this + 0x1bd0) = 0;
  *(undefined4 *)((int)this + 0x1bd4) = 0;
  *(undefined4 *)((int)this + 0x1bdc) = 0;
  *(undefined4 *)((int)this + 0x1be0) = 0;
  *(undefined4 *)((int)this + 0x1be4) = 0;
  *(undefined4 *)((int)this + 0x1be8) = 0;
  *(undefined4 *)((int)this + 0x1bec) = 0;
  *(undefined1 *)((int)this + 0x1bf0) = 0;
  *(undefined2 *)((int)this + 0x1bf2) = 0;
  *(undefined4 *)((int)this + 0x1bf4) = 0;
  *(undefined4 *)((int)this + 0x1bf8) = 0;
  *(undefined4 *)((int)this + 0x1c00) = 0;
  *(undefined4 *)((int)this + 0x1c04) = 0;
  *(undefined4 *)((int)this + 0x1c08) = 0;
  *(undefined4 *)((int)this + 0x1c0c) = 0;
  *(undefined4 *)((int)this + 0x1bd8) = 0xffffffff;
  *(undefined2 *)((int)this + 0x1bfc) = 0x100;
  return (uint)this;
}

/* ref: FUN_006e51b0 */
uint F_006e51b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e51b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  undefined4 * puVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  uint * this_01;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x398)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  REFG(void * PTR32, 0x13241d0) = this;
  F_0071db50(((undefined1 *)(gen_frame + 0x0)));
  F_006e1f70(this,(uint)*(ushort *)((int)this + 0x1d4),((undefined1 *)(gen_frame + 0x0)));
  puVar1 = ((undefined4 *)(gen_frame + 0xf0));
  iVar3 = 0x54;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_006c4440(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0xf0)));
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x13241cc);
  puVar1 = ((undefined4 *)(gen_frame + 0xf0));
  uVar6 = 0x55;
  uVar5 = 0x15;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  REFG(undefined4, 0x13241d4) = F_008668b0(this_00,uVar5,uVar6,puVar1,ppuVar7,uVar8,uVar9,uVar10);
  this_01 = &(*(uint *)(gen_frame + 0x398));
  iVar3 = 0x54;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x9c)));
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x38)));
  F_00c47745((*(uint *)(gen_frame + 0x398)) ^ (uint)(uint)(gen_frame + 0x39c));
  return (uint)uVar4;
}

/* ref: FUN_006e52a0 */
uint F_006e52a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e52a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006e44c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined1 *)((int)this + 0x109) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba404));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10ba648));
  *(undefined4 *)((int)this + 0x104) = 0;
  return (uint)this;
}

/* ref: FUN_006e52f0 */
uint F_006e52f0(void)
{
  GEN_ENTER(0x6e52f0u, 0u, 0u, 0u, 0u);
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x10c,0,0);
  if (this != (undefined4 *)0x0) {
    F_006e44c0(this,0x150001);
    this[0x3e] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
    *this = (*(undefined * PTR32 (*)[144])REFP(0x10ba404));
    this[0x3e] = (*(undefined * PTR32 (*)[2])REFP(0x10ba648));
    this[0x3f] = 0;
    this[0x41] = 0;
    *(undefined1 *)((int)this + 0x109) = 0;
    return (uint)this;
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf144 */
unsigned int F_006e5360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_00736010(this,this);
    if (bVar1 == 0) {
      if (*(short *)(this + 0x54) != -1) {
        F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
      }
    }
    else {
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      if (((byte)this[0x1c] & 1) == 0) {
        this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
        ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf145 */
unsigned int F_006e53c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e53c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((this[0x24c] == (undefined1)0x0) && (*(short *)(this + 0x54) != -1)) {
    F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
  }
  return 0;
}

/* ref: Client::Game::Event::StoryEventHandler::vf144 */
unsigned int F_006e53f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e53f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_007360c0(this,this);
    if (bVar1 == 0) {
      if (*(short *)(this + 0x54) != -1) {
        F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
      }
    }
    else {
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      if (((byte)this[0x1c] & 1) == 0) {
        this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
        ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_006e5450 */
uint F_006e5450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5450u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar4 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if (((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) &&
     (piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10), piVar1 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x238))(piVar1,(*(undefined4 *)&gen_args[2]));
    if (uVar4 == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x10) + 0x10))))(*(int * PTR32 *)((int)pvVar3 + 0x10));
      puVar2 = *(undefined4 * PTR32 *)((int)pvVar3 + 0x10);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *(undefined4 *)((int)pvVar3 + 0x10) = 0;
      }
      uVar4 = F_0074ccc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(undefined4 *)&gen_args[1]));
    }
  }
  return uVar4;
}

/* ref: FUN_006e54c0 */
byte F_006e54c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e54c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(int *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(int *)(gen_frame + 0x8)) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    puVar1 = (undefined4 *)F_004296a0(0x18,0,800);
    *puVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = (*(undefined4 *)&gen_args[1]);
      puVar1[4] = (*(undefined4 *)&gen_args[2]);
    }
    F_00746d20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf144 */
uint F_006e5540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 BVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  if ((char)param_1 == '\0') {
    bVar2 = F_006d8320((undefined *)this);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_00a51200(0x4c,5,0,0,0);
      return uVar3;
    }
  }
  else {
    bVar2 = F_007361b0(this,this);
    if (bVar2 == 0) {
      uVar3 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        bVar2 = F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
        uVar3 = CONCAT31(extraout_var_01,bVar2);
      }
    }
    else {
      bVar2 = F_006d8320((undefined *)this);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) {
        F_006c3b30(this);
        uVar3 = F_00a51200(0x4c,0,0,0,0);
      }
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      BVar1 = this[0x1c];
      uVar3 = CONCAT31((int3)(uVar3 >> 8),BVar1);
      if (((byte)BVar1 & 1) == 0) {
        this[0x1c] = (undefined1)((byte)BVar1 | 1);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf144 */
uint F_006e55e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e55e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 GVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  if ((char)param_1 == '\0') {
    bVar2 = F_006d8320((undefined *)this);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_00a51200(0x4c,5,0,0,0);
      return uVar3;
    }
  }
  else {
    bVar2 = F_00736260(this,this);
    if (bVar2 == 0) {
      uVar3 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        bVar2 = F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
        uVar3 = CONCAT31(extraout_var_01,bVar2);
      }
    }
    else {
      bVar2 = F_006d8320((undefined *)this);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) {
        uVar3 = F_00a51200(0x4c,0,0,0,0);
      }
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      GVar1 = this[0x1c];
      uVar3 = CONCAT31((int3)(uVar3 >> 8),GVar1);
      if (((byte)GVar1 & 1) == 0) {
        this[0x1c] = (undefined1)((byte)GVar1 | 1);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf144 */
uint F_006e5680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 CVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  if ((char)param_1 == '\0') {
    bVar2 = F_006d8320((undefined *)this);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_00a51200(0x4c,5,0,0,0);
      return uVar3;
    }
  }
  else {
    bVar2 = F_00736310(this,this);
    if (bVar2 == 0) {
      uVar3 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        bVar2 = F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
        uVar3 = CONCAT31(extraout_var_01,bVar2);
      }
    }
    else {
      bVar2 = F_006d8320((undefined *)this);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) {
        uVar3 = F_00a51200(0x4c,0,0,0,0);
      }
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      CVar1 = this[0x1c];
      uVar3 = CONCAT31((int3)(uVar3 >> 8),CVar1);
      if (((byte)CVar1 & 1) == 0) {
        this[0x1c] = (undefined1)((byte)CVar1 | 1);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006e5720 */
byte F_006e5720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x2c);
  do {
    if (piVar4 == *(int * PTR32 *)((int)this + 0x30)) {
LAB_006e574f: ;
      uVar3 = *(uint *)((int)this + 0x58);
      piVar4 = *(int * PTR32 *)((int)this + 0x4c);
      iVar7 = *(int *)((int)this + 0x5c);
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)this + 0x4c);
      ((int * PTR32 *)(gen_frame + 0xc))[0] = piVar4;
      uVar5 = iVar7 + uVar3;
      piVar6 = piVar4;
      while( true ) {
        if (uVar3 == uVar5) {
          return 0;
        }
        if (piVar6 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar6;
        }
        uVar2 = uVar3 >> 1;
        if (*(uint *)(iVar7 + 8) <= uVar2) {
          uVar2 = uVar2 - *(uint *)(iVar7 + 8);
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar2 * 4))) + (uVar3 & 1) * 8))) == param_1) break;
        uVar3 = uVar3 + 1;
        piVar6 = ((int * PTR32 *)(gen_frame + 0xc))[0];
      }
      piVar6 = (int *)0x0;
      if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
        piVar6 = *(int * PTR32 *)*piVar4;
      }
      piVar4 = (int *)0x0;
      if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
        piVar4 = *(int * PTR32 *)*piVar6;
      }
      uVar9 = 0;
      if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
        uVar9 = *(undefined4 *)*piVar4;
      }
      uVar8 = 0;
      if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
        uVar8 = *(undefined4 *)*piVar6;
      }
      F_00749770((undefined *)((int)this + 0x4c),((int * PTR32 *)(gen_frame + 0xc)),uVar8,0,uVar3,uVar9,0,uVar3 + 1);
      return 1;
    }
    if ((*piVar4 != 0) && (**(int * PTR32 *)(*piVar4 + 0x1d4) == param_1)) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x238))((int *)*piVar4,0);
      if (uVar3 == 0) {
        if (*(char *)((int)this + 100) != '\0') {
          ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x10))((int *)*piVar4);
          puVar1 = (undefined4 *)*piVar4;
          if (puVar1 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
            *piVar4 = 0;
          }
          F_00c46e20(piVar4,piVar4 + 1,(*(int *)((int)this + 0x30) - (int)(piVar4 + 1) >> 2) * 4);
          *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -4;
        }
        return 1;
      }
      goto LAB_006e574f;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}

/* ref: FUN_006e5880 */
byte F_006e5880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x2c);
  do {
    if (piVar3 == *(int * PTR32 *)((int)this + 0x30)) {
LAB_006e58b6: ;
      uVar6 = *(uint *)((int)this + 0x58);
      piVar3 = *(int * PTR32 *)((int)this + 0x4c);
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)this + 0x4c);
      uVar7 = *(int *)((int)this + 0x5c) + uVar6;
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
      (*(uint *)(gen_frame + 0x8)) = uVar7;
      piVar5 = piVar3;
      do {
        if (uVar6 == uVar7) {
          return 0;
        }
        if (piVar5 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *piVar5;
        }
        uVar4 = uVar6 >> 1;
        uVar7 = uVar4;
        if (*(uint *)(iVar2 + 8) <= uVar4) {
          uVar7 = uVar4 - *(uint *)(iVar2 + 8);
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar7 * 4))) + (uVar6 & 1) * 8))) == param_1) {
          if (piVar3 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *piVar3;
          }
          if (*(uint *)(iVar2 + 8) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(iVar2 + 8);
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar4 * 4))) + 4 + (uVar6 & 1) * 8))) == param_2)
          {
            piVar5 = (int *)0x0;
            if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
              piVar5 = *(int * PTR32 *)*piVar3;
            }
            piVar3 = (int *)0x0;
            if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
              piVar3 = *(int * PTR32 *)*piVar5;
            }
            uVar9 = 0;
            if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
              uVar9 = *(undefined4 *)*piVar3;
            }
            uVar8 = 0;
            if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
              uVar8 = *(undefined4 *)*piVar5;
            }
            F_00749770((undefined *)((int)this + 0x4c),((undefined1 *)(gen_frame + 0x0)),uVar8,0,uVar6,uVar9,0,uVar6 + 1);
            return 1;
          }
        }
        uVar6 = uVar6 + 1;
        piVar5 = (*(int * PTR32 *)(gen_frame + 0xc));
        uVar7 = (*(uint *)(gen_frame + 0x8));
      } while( true );
    }
    piVar5 = (int *)*piVar3;
    if ((*(int *)piVar5[0x75] == param_1) && (piVar5[0x76] == param_2)) {
      uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x238))(piVar5,0);
      if (uVar6 == 0) {
        if (*(char *)((int)this + 100) != '\0') {
          ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x10))((int *)*piVar3);
          puVar1 = (undefined4 *)*piVar3;
          if (puVar1 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
            *piVar3 = 0;
          }
          F_00c46e20(piVar3,piVar3 + 1,(*(int *)((int)this + 0x30) - (int)(piVar3 + 1) >> 2) * 4);
          *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -4;
        }
        return 1;
      }
      goto LAB_006e58b6;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

/* ref: Client::Game::Event::TestDirector::vf144 */
uint F_006e5a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 TVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  if ((char)param_1 == '\0') {
    bVar2 = F_006d8320((undefined *)this);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_00a51200(0x4c,5,0,0,0);
      return uVar3;
    }
  }
  else {
    bVar2 = F_007363c0(this,this);
    if (bVar2 == 0) {
      uVar3 = 0xffff;
      if (*(short *)(this + 0x54) != -1) {
        bVar2 = F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
        uVar3 = CONCAT31(extraout_var_01,bVar2);
      }
    }
    else {
      bVar2 = F_006d8320((undefined *)this);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 == 0) {
        uVar3 = F_00a51200(0x4c,0,0,0,0);
      }
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      TVar1 = this[0x1c];
      uVar3 = CONCAT31((int3)(uVar3 >> 8),TVar1);
      if (((byte)TVar1 & 1) == 0) {
        this[0x1c] = (undefined1)((byte)TVar1 | 1);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf144 */
unsigned int F_006e5ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_00736470(this,this);
    if (bVar1 == 0) {
      if (*(short *)(this + 0x54) != -1) {
        F_006e3100(REFG(void * PTR32, 0x1488344),0x34,1);
      }
    }
    else {
      this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
      if (((byte)this[0x1c] & 1) == 0) {
        this[0x1c] = (undefined1)((byte)this[0x1c] | 1);
        ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_006e5b10 */
uint F_006e5b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  char cVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined4 * puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar4 != 1) {
    if ((((REFG(int, 0x13238f8) != 0) || (*(int *)((int)this + 0x238) != 0)) ||
        (*(int *)((int)this + 0x224) != 0)) || (*(int *)((int)this + 0x738) != 0)) {
      uVar10 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
      uVar11 = F_006d9e70(this);
      if ((uVar10 == uVar11) && (uVar4 = F_006d9ec0(((undefined *)(uint)(this))), (char)uVar4 != '\0')) {
        F_006e33b0(this);
      }
    }
    uVar4 = F_00a5f3d0(param_1,((undefined4 *)(gen_frame + 0x8)));
    uVar9 = 0;
    if (uVar4 != 0) {
      do {
        uVar5 = ((code *)*(gen_code32 *)(*(int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar9)] + 8))((int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar9)]);
        if ((char)uVar5 != '\0') {
          ((code *)*(gen_code32 *)(*(int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar9)] + 0xb4))((int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar9)],param_1);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
    }
  }
  F_006e4420((undefined *)((int)this + 0xc4),param_1);
  (*(int *)(gen_frame + 0x8c)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x90)),0,0x7c);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,&(*(int *)(gen_frame + 0x8c)));
  (*(uint *)(gen_frame + 0x124)) = uVar4;
  (*(uint *)(gen_frame + 0x128)) = 0;
  ppuVar7 = (undefined4 * PTR32 *)0x0;
  if (uVar4 != 0) {
    do {
      ppuVar7 = (undefined4 * PTR32 *)0x0;
      if (*(int *)(((undefined1 *)(gen_frame + 0x90)) + (*(uint *)(gen_frame + 0x128)) * 4 + -4) != 0) {
        uVar4 = *((uint *)GEN_TOP((*(int *)(((undefined1 *)(gen_frame + 0x90)) + (*(uint *)(gen_frame + 0x128)) * 4 + -4) + 8)));
        puVar2 = *(undefined4 * PTR32 *)((int)this + 0x30);
        puVar8 = (undefined4 *)puVar2[1];
        cVar1 = *(char *)((int)puVar8 + 0x15);
        (*(uint *)(gen_frame + 0x120)) = uVar4;
        while (cVar1 == '\0') {
          if ((uint)puVar8[3] < uVar4) {
            puVar6 = (undefined4 *)puVar8[2];
            puVar8 = puVar2;
          }
          else {
            puVar6 = (undefined4 *)*puVar8;
          }
          puVar2 = puVar8;
          puVar8 = puVar6;
          cVar1 = *(char *)((int)puVar6 + 0x15);
        }
        puVar8 = *(undefined4 * PTR32 *)((int)this + 0x30);
        (*(undefined4 * PTR32 *)(gen_frame + 0x11c)) = puVar2;
        if ((puVar2 == puVar8) || (uVar4 < (uint)puVar2[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x118)) = puVar8;
          ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x118));
        }
        else {
          ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x11c));
        }
        puVar2 = *ppuVar7;
        if (((puVar2 != *(undefined4 * PTR32 *)((int)this + 0x30)) &&
            (piVar3 = (int *)puVar2[4], piVar3 != (int *)0x0)) &&
           (ppuVar7 = ((undefined4 * PTR32 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x238))(piVar3,param_1))),
           ppuVar7 == (undefined4 * PTR32 *)0x0)) {
          ((code *)*(gen_code32 *)(*(int *)puVar2[4] + 0x10))((int *)puVar2[4]);
          puVar8 = (undefined4 *)puVar2[4];
          if (puVar8 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
            puVar2[4] = 0;
          }
          F_0073d240((undefined *)((int)this + 0x2c),&(*(undefined4 *)(gen_frame + 0x110)),&(*(uint *)(gen_frame + 0x120)));
          ppuVar7 = (undefined4 * PTR32 *)
                    F_00744dc0((undefined *)((int)this + 0x2c),((undefined1 *)(gen_frame + 0x10c)),(*(undefined4 *)(gen_frame + 0x110)),(*(undefined4 *)(gen_frame + 0x114)));
        }
      }
      uVar4 = (*(uint *)(gen_frame + 0x128)) + 1;
      (*(uint *)(gen_frame + 0x128)) = uVar4;
    } while (uVar4 < (*(uint *)(gen_frame + 0x124)));
  }
  return (uint)ppuVar7;
}

/* ref: FUN_006e5cf0 */
uint F_006e5cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((char)uVar1 == '\x01') {
    piVar2 = REFG(int * PTR32, 0x1379694);
    if ((REFG(int * PTR32, 0x1379694) != (int *)0x0) && (REFG(int * PTR32, 0x1379694) == param_1)) {
      uVar1 = F_006e3430(this);
      return uVar1;
    }
  }
  else {
    if (((char)uVar1 == '\x02') &&
       (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1), (char)uVar1 != '\0')) {
      this_00 = (undefined *)F_00a5f290(param_1);
      uVar1 = F_0071cee0(this_00);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
    }
    uVar1 = F_00a5f3d0(param_1,((undefined4 *)(gen_frame + 0x8)));
    uVar3 = 0;
    piVar2 = (int *)0x0;
    if (uVar1 != 0) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar3)] + 0xac))
                                  ((int *)((undefined4 *)(gen_frame + 0x8))[(int)(uVar3)],param_1)));
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_006e5e00 */
uint F_006e5e00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e5e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  bVar2 = F_005d4e70();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 != 0) || (iVar1 != 0)) {
    bVar2 = F_00a505f0();
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    if (bVar2 != 0) {
      bVar2 = F_00a50610();
      uVar3 = CONCAT31(extraout_var_01,bVar2);
      if (bVar2 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
        uVar3 = F_006de320(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006e5e50 */
uint F_006e5e50(unsigned int gen_a0)
{
  GEN_ENTER(0x6e5e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  bVar2 = F_005d4e70();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 != 0) || (iVar1 != 0)) {
    bVar2 = F_00a505f0();
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    if (bVar2 != 0) {
      bVar2 = F_00a50610();
      uVar3 = CONCAT31(extraout_var_01,bVar2);
      if (bVar2 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
        uVar3 = F_006de320(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_006e5ea0 */
uint F_006e5ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e5ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint in_EAX = 0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = (*(uint *)&gen_args[1]);
  if ((char)(*(uint *)&gen_args[3]) != '\0') {
    uVar2 = (*(uint *)&gen_args[1]) & 0xffff;
    F_006de0e0((*(undefined * PTR32 *)&gen_args[0]),0x3b);
    (*(uint *)&gen_args[3]) = uVar2 | 0x10000;
    F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[3]));
    uVar2 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[1]) + 0x10) + 0x22c))))(*(int * PTR32 *)((*(uint *)&gen_args[1]) + 0x10));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x10) + 0x1f0))))(*(int * PTR32 *)(uVar2 + 0x10));
    }
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 1;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    in_EAX = F_008229a0(this_00,uVar3,uVar4);
  }
  return in_EAX;
}

/* ref: FUN_006e5f20 */
uint F_006e5f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e5f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_006e5720((undefined *)((int)this + 0x5c),param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    if ((REFG(int, 0x1379694) != 0) && (*(int *)(REFG(int, 0x1379694) + 0xe4) == param_1)) {
      F_00a5f530(REFG(int, 0x1379694),0);
      F_00a35580(param_1);
    }
    REFG(undefined4, 0x14a458f) = 1;
    uVar2 = F_006de0e0(this,0xffff);
  }
  return uVar2;
}

/* ref: FUN_006e5f80 */
uint F_006e5f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e5f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6e0)));
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6e0))) = 1;
  }
  (*(ulonglong *)(gen_frame + 0x1c)) = F_00427d90();
  (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6e0)));
  (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 *)&gen_args[3]);
  ((undefined4 *)(gen_frame + 0xc))[0] = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)&gen_args[2]);
  F_007506b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))),&(*(undefined4 *)&gen_args[2]),((undefined4 *)(gen_frame + 0xc)));
  return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6e0)));
}

/* ref: FUN_006e5ff0 */
uint F_006e5ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e5ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006e5450(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006e6000 */
uint F_006e6000(unsigned int gen_a0)
{
  GEN_ENTER(0x6e6000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  int * piVar9;
  undefined4 * puVar10;
  uint uVar11;
  int * piVar12;
  int iVar13;
  ulonglong uVar14;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  F_0074d270(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x714));
  puVar10 = *(undefined4 * PTR32 *)((int)this + 0x710);
  puVar2 = (undefined4 *)*puVar10;
  while (puVar2 != puVar10) {
    F_00751840(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),puVar2 + 4);
    if (*(char *)((int)puVar2 + 0x1d) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x1d) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x1d);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x1d);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x1d);
        puVar5 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar5, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x1d);
          puVar5 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  this_00 = (undefined *)((int)this + 0x70c);
  F_007443b0(this_00);
  puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != (*(undefined4 * PTR32 *)(gen_frame + 0x10))) {
    do {
      piVar6 = (int *)F_005f3270(0x31,puVar10[2],0);
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 0x90))(piVar6,1);
        uVar4 = puVar10[2];
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)*puVar10;
        (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)puVar10[1];
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar6;
        (*(undefined4 *)(gen_frame + 0x28)) = uVar4;
        F_00750720(this_00,((undefined1 *)(gen_frame + 0x40)),&(*(int * PTR32 *)(gen_frame + 0x1c)));
      }
      puVar10 = puVar10 + 3;
      this = (*(undefined * PTR32 *)(gen_frame + 0x48));
    } while (puVar10 != (*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  }
  uVar4 = *(undefined4 *)((int)this + 0x704);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
  F_0074d370(&(*(int * PTR32 *)(gen_frame + 0x1c)),uVar4);
  piVar6 = *(int * PTR32 *)((int)this + 0x700);
  piVar12 = (int *)*piVar6;
  (*(int * PTR32 *)(gen_frame + 0x44)) = piVar6;
  if (piVar12 != piVar6) {
    do {
      piVar6 = piVar12 + 4;
      piVar9 = (*(int * PTR32 *)(gen_frame + 0x20));
      if ((piVar6 < (*(int * PTR32 *)(gen_frame + 0x20))) && ((*(int * PTR32 *)(gen_frame + 0x1c)) <= piVar6)) {
        iVar13 = (int)piVar6 - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
        if ((*(int * PTR32 *)(gen_frame + 0x20)) == (*(int * PTR32 *)(gen_frame + 0x24))) {
          iVar7 = (int)(*(int * PTR32 *)(gen_frame + 0x20)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
          if (iVar7 == -1) {
LAB_006e6237: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar8 = iVar7 + 1;
          uVar11 = (int)(*(int * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
          if (uVar11 < uVar8) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar8) {
              uVar11 = uVar8;
            }
            F_0074d370(&(*(int * PTR32 *)(gen_frame + 0x1c)),uVar11);
            piVar9 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
        }
        if (piVar9 != (int *)0x0) {
          *piVar9 = (*(int * PTR32 *)(gen_frame + 0x1c))[iVar13 * 2];
          iVar13 = (*(int * PTR32 *)(gen_frame + 0x1c))[iVar13 * 2 + 1];
LAB_006e61dd: ;
          piVar9[1] = iVar13;
        }
      }
      else {
        if ((*(int * PTR32 *)(gen_frame + 0x20)) == (*(int * PTR32 *)(gen_frame + 0x24))) {
          iVar13 = (int)(*(int * PTR32 *)(gen_frame + 0x20)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
          if (iVar13 == -1) goto LAB_006e6237;
          uVar8 = iVar13 + 1;
          uVar11 = (int)(*(int * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) >> 3;
          if (uVar11 < uVar8) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar8) {
              uVar11 = uVar8;
            }
            F_0074d370(&(*(int * PTR32 *)(gen_frame + 0x1c)),uVar11);
            piVar9 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
        }
        if (piVar9 != (int *)0x0) {
          *piVar9 = *piVar6;
          iVar13 = piVar12[5];
          goto LAB_006e61dd;
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x20)) = piVar9 + 2;
      if (*(char *)((int)piVar12 + 0x19) == '\0') {
        piVar6 = (int *)piVar12[2];
        if (*(char *)((int)piVar6 + 0x19) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x19);
          piVar12 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x19);
            piVar12 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar12[1] + 0x19);
          piVar9 = (int *)piVar12[1];
          piVar6 = piVar12;
          while ((piVar12 = piVar9, cVar1 == '\0' && (piVar6 == (int *)piVar12[2]))) {
            cVar1 = *(char *)(piVar12[1] + 0x19);
            piVar9 = (int *)piVar12[1];
            piVar6 = piVar12;
          }
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0x48));
    } while (piVar12 != (*(int * PTR32 *)(gen_frame + 0x44)));
  }
  piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x700) + 4)));
  cVar1 = *(char *)((int)piVar6 + 0x19);
  piVar12 = (*(int * PTR32 *)(gen_frame + 0x1c));
  while ((*(int * PTR32 *)(gen_frame + 0x1c)) = piVar12, cVar1 == '\0') {
    F_0073c030((undefined *)((int)this + 0x6fc),piVar6[2]);
    piVar12 = (int *)*piVar6;
    F_00429760(piVar6,0x1c,800);
    cVar1 = *(char *)((int)piVar12 + 0x19);
    piVar6 = piVar12;
    piVar12 = (*(int * PTR32 *)(gen_frame + 0x1c));
  }
  *((int *)GEN_TOP((*(int *)((int)this + 0x700) + 4))) = *(int *)((int)this + 0x700);
  *(undefined4 *)*(undefined4 *)((int)this + 0x700) = *(undefined4 *)((int)this + 0x700);
  uVar11 = *(uint *)((int)this + 0x700);
  *(uint *)(uVar11 + 8) = uVar11;
  *(undefined4 *)((int)this + 0x704) = 0;
  piVar6 = piVar12;
  if (piVar12 != (*(int * PTR32 *)(gen_frame + 0x20))) {
    do {
      piVar9 = (int *)F_005f3270(0x31,*piVar6,0);
      (*(int * PTR32 *)(gen_frame + 0x44)) = piVar9;
      uVar11 = 0;
      if (piVar9 != (int *)0x0) {
        iVar13 = *piVar6;
        (*(int *)(gen_frame + 0x34)) = piVar6[1];
        puVar10 = (undefined4 *)F_004296a0(0x1c,0,800);
        *puVar10 = *(undefined4 *)((int)this + 0x700);
        puVar10[1] = *(undefined4 *)((int)this + 0x700);
        puVar10[2] = *(undefined4 *)((int)this + 0x700);
        *(undefined2 *)(puVar10 + 6) = 0;
        if (puVar10 + 3 != (int *)0x0) {
          puVar10[3] = (*(int * PTR32 *)(gen_frame + 0x44));
          puVar10[4] = iVar13;
          puVar10[5] = (*(int *)(gen_frame + 0x34));
        }
        uVar11 = F_007470e0((undefined *)((int)this + 0x6fc),((undefined1 *)(gen_frame + 0x38)),puVar10,0);
        piVar12 = (*(int * PTR32 *)(gen_frame + 0x1c));
      }
      piVar6 = piVar6 + 2;
    } while (piVar6 != (*(int * PTR32 *)(gen_frame + 0x20)));
  }
  *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x71c) = 0;
  if (piVar12 != (int *)0x0) {
    uVar14 = F_00429760(piVar12,((int)(*(int * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)piVar12) >> 3) * 8,800);
    uVar11 = (uint)uVar14;
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != (undefined4 *)0x0) {
    uVar14 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),(((*(int *)(gen_frame + 0x14)) - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xc))) / 0xc) * 0xc,800);
    uVar11 = (uint)uVar14;
  }
  return uVar11;
}

/* ref: FUN_006e6390 */
byte F_006e6390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e6390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = (int *)F_005f3270(0x31,param_1,0);
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar5;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  F_00745670((undefined *)((int)this + 0x70c),&(*(int * PTR32 *)(gen_frame + 0x20)),&(*(int * PTR32 *)(gen_frame + 0x28)));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x20));
  while( true ) {
    if (piVar3 == (*(int * PTR32 *)(gen_frame + 0x24))) {
      ((code *)*(gen_code32 *)(*piVar5 + 0x90))(piVar5,1);
      (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x20)) + 0)) = (char)param_3;
      (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x20)), 1, 3),(char)param_3)));
      (*(int *)(gen_frame + 0x10)) = param_2;
      (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x20));
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar5;
      (*(undefined4 *)(gen_frame + 0x18)) = param_1;
      F_00750720((undefined *)((int)this + 0x70c),&(*(int * PTR32 *)(gen_frame + 0x20)),&(*(int * PTR32 *)(gen_frame + 0xc)));
      return 1;
    }
    if ((piVar3[4] == param_2) && ((char)piVar3[5] == (char)param_3)) break;
    if (*(char *)((int)piVar3 + 0x1d) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x1d) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x1d);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x1d);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x1d);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x1d);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_006e6520 */
uint F_006e6520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x6e6520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  *(undefined4 *)this = 9999;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x75300000;
  *(undefined1 *)((int)this + 0x2f) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  F_00a35f30(this);
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0x49) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar2 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 0x60) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x60) + 4))) = *(int *)((int)this + 0x60);
  *((int *)GEN_TOP((*(int *)((int)this + 0x60) + 8))) = *(int *)((int)this + 0x60);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x15))) = 1;
  uVar2 = param_1;
  if (((char)param_2 != '\0') && (param_1 < 1000000)) {
    uVar2 = param_1 + 1000000;
  }
  F_00a35ee0(this,uVar2,1);
  *(undefined1 *)((int)this + 0x40) = (undefined1)param_7;
  *(bool *)((int)this + 0x41) = (char)param_2 == '\0';
  uVar2 = 0;
  do {
    uVar4 = uVar2 & 0xff;
    *(undefined2 *)((int)this + uVar4 * 2 + 0x20) = *(undefined2 *)(param_5 + uVar2 * 2);
    puVar1 = (undefined1 *)(uVar2 + param_6);
    uVar2 = uVar2 + 1;
    *(undefined1 *)(uVar4 + 0x2a + (int)this) = *puVar1;
  } while (uVar2 < 5);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *(undefined4 *)((int)this + 0x60);
  puVar3[1] = *(undefined4 *)((int)this + 0x60);
  puVar3[2] = *(undefined4 *)((int)this + 0x60);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    puVar3[3] = param_8;
    puVar3[4] = param_9;
  }
  F_00746b20((undefined *)((int)this + 0x5c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  uVar2 = F_00a411a0(&REFG(undefined, 0x14a4230),this,(uint)*(byte *)((int)this + 0x48),
                       (uint)*(byte *)((int)this + 0x49));
  *(uint *)((int)this + 0x4c) = uVar2;
  return (uint)this;
}

/* ref: FUN_006e6680 */
uint F_006e6680(unsigned int gen_a0)
{
  GEN_ENTER(0x6e6680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  F_006e3e00((undefined *)((int)this + 0x4c));
  iVar1 = *(int *)((int)this + 0x3c);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x44) - iVar1) / 0x14) * 0x14,800);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  iVar1 = *(int *)((int)this + 0x2c);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x34) - iVar1) / 0x88) * 0x88,800);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  F_0073bdc0((undefined *)((int)this + 0x14));
  uVar2 = F_00429760(*(undefined4 *)((int)this + 0x14),8,800);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  return (uint)uVar2;
}

/* ref: FUN_006e6740 */
unsigned int F_006e6740(unsigned int gen_a0)
{
  GEN_ENTER(0x6e6740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 uVar5;
  
  if (*(int *)((int)this + 0x24) != 0) {
    piVar2 = (int *)F_007512b0((undefined *)((int)this + 0x14));
    piVar2 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x148))(piVar2);
    }
  }
  if ((*(int *)((int)this + 0x24) != 0) &&
     (iVar3 = *(int *)((int)this + 0x24) + -1, *(int *)((int)this + 0x24) = iVar3, iVar3 == 0)) {
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if (*(int *)((int)this + 0x24) == 0) {
    F_00a6ef50(&REFG(undefined, 0x14ab428));
    iVar1 = *(int *)((int)this + 0x30);
    for (iVar3 = *(int *)((int)this + 0x2c); iVar3 != iVar1; iVar3 = iVar3 + 0x88) {
      F_006da870(iVar3);
    }
    if (*(int *)((int)this + 0x2c) != *(int *)((int)this + 0x30)) {
      *(int *)((int)this + 0x30) = *(int *)((int)this + 0x2c);
    }
    iVar3 = *(int *)((int)this + 0x40);
    if (*(int *)((int)this + 0x3c) != iVar3) {
      uVar4 = F_0073f510(iVar3,iVar3,*(int *)((int)this + 0x3c));
      *(uint *)((int)this + 0x40) = uVar4;
    }
    if (REFG(int, 0x1375bbc) == 0) {
      *(undefined1 *)(REFG(int, 0x1375b90) + 0x198) = 0;
    }
    F_006c5860(this);
    F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)1);
    piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar2 != (int *)0x0) {
      uVar5 = 0x11;
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
      this_00 = (undefined *)F_00763050(uVar4,uVar5);
      if (this_00 != (undefined *)0x0) {
        F_00776f30(this_00,0);
      }
    }
    F_009d53f0(REFG(void * PTR32, 0x1487c90),0);
    F_006df450((undefined *)((int)this + 0x4c));
    F_006df4a0((undefined *)((int)this + 0x4c));
  }
  return 0;
}

/* ref: FUN_006e6890 */
unsigned int F_006e6890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e6890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_0071edf0(((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x14)) = 7;
  (*(undefined4 *)(gen_frame + 0x10)) = param_1;
  F_007511f0((undefined *)((int)this + 0x2c),((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_006e68e0 */
unsigned int F_006e68e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e68e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  REFG(undefined4, 0x132390c) = 0;
  REFG(undefined4, 0x1323910) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323914) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323920) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323924) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323948) = 0;
  *(undefined4 *)&REFG(undefined, 0x132392c) = 0x3d;
  *(undefined4 *)&REFG(undefined, 0x1323930) = 0x276;
  *(undefined4 *)&REFG(undefined, 0x1323934) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323938) = 0;
  *(undefined4 *)&REFG(undefined, 0x132393c) = 0x10000;
  REFG(undefined4, 0x1323950) = 0;
  REFG(undefined4, 0x1323954) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323958) = 0;
  REFG(undefined4, 0x1323980) = 0;
  REFG(undefined4, 0x1323984) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323988) = 0;
  F_00487650(&REFG(undefined4, 0x1323994),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x1323994),REFG(undefined4, 0x1323998));
  *(undefined4 *)&REFG(undefined, 0x13239a4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239a8) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239ac) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239b0) = 0;
  REFG(undefined4, 0x13239b8) = 0;
  REFG(undefined4, 0x13239bc) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239c0) = 0;
  F_00487650(&REFG(undefined4, 0x13239cc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x13239cc),REFG(undefined4, 0x13239d0));
  *(undefined4 *)&REFG(undefined, 0x13239dc) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239e0) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239e4) = 0;
  *(undefined2 *)&REFG(undefined, 0x13239e8) = 0x100;
  REFG(undefined4, 0x13239ea) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239ec) = 0;
  REFG(undefined4, 0x13239f4) = 0;
  REFG(undefined4, 0x13239f8) = 0;
  *(undefined4 *)&REFG(undefined, 0x13239fc) = 0;
  F_00487650(&REFG(undefined4, 0x1323a08),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x1323a08),REFG(undefined4, 0x1323a0c));
  *(undefined4 *)&REFG(undefined, 0x1323a18) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323a1c) = 0;
  REFG(undefined4, 0x1323a20) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323a24) = 0;
  REFG(undefined4, 0x1323a2c) = 0;
  REFG(undefined4, 0x1323a30) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323a34) = 0;
  F_00487650(&REFG(undefined4, 0x1323a40),&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x1323a40),REFG(undefined4, 0x1323a44));
  *(undefined4 *)&REFG(undefined, 0x1323a50) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323a54) = 0;
  REFG(undefined4, 0x1323aac) = 0;
  REFG(undefined4, 0x1323ab0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ab4) = 0;
  puVar1 = &REFG(undefined4, 0x1488788);
  iVar2 = 0x20;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined2 *)(puVar1 + 6) = 0x101;
    *(undefined1 *)((int)puVar1 + 0x1a) = 0;
    puVar1 = puVar1 + 9;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &REFG(undefined4, 0x1488c08);
  iVar2 = 0x20;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    puVar1 = puVar1 + 0x1d;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  REFG(undefined4, 0x1323ad8) = 0;
  REFG(undefined4, 0x1323adc) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ae0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ae8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323aec) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323af0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323af8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323afc) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b00) = 0;
  REFG(undefined4, 0x1323b08) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b0c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b10) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b58) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b5c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b60) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b68) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b6c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b70) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b78) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b7c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b80) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b88) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b8c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b90) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b98) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323b9c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ba0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bc8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bcc) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bd0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323ba8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bac) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bb0) = 0;
  REFG(undefined4, 0x1323bb8) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bbc) = 0;
  *(undefined4 *)&REFG(undefined, 0x1323bc0) = 0;
  F_006c5c10(this);
  return 0;
}

/* ref: FUN_006e6ba0 */
byte F_006e6ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e6ba0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_c;
  byte local_5;
  
  local_5 = 0;
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  iVar1 = (*(int *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x224))) == 0) {
    local_c = 0;
  }
  else {
    uVar4 = *((uint *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x220)));
    if (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x214))) == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x214)));
    }
    if (*(uint *)(iVar5 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar5 + 8);
    }
    local_c = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar4 * 4))) + 0x28)));
  }
  if (REFG(int, 0x132390c) == (*(int *)&gen_args[1])) {
    F_006da0a0(REFG(void * PTR32, 0x1488344),&REFG(undefined * PTR32, 0x1323918));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x132390c) = 0;
    }
    if (REFG(int, 0x1323910) == 0) {
      REFG(int, 0x132390c) = 0;
      REFG(int, 0x1323910) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323914) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323920) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323924) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323948) = 0;
      *(undefined4 *)&REFG(undefined, 0x132392c) = 0x3d;
      *(undefined4 *)&REFG(undefined, 0x1323930) = 0x276;
      *(undefined4 *)&REFG(undefined, 0x1323934) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323938) = 0;
      *(undefined4 *)&REFG(undefined, 0x132393c) = 0x10000;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323910),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323950) == iVar1) {
    F_006da0a0(REFG(void * PTR32, 0x1488344),&REFG(undefined * PTR32, 0x132395c));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323950) = 0;
    }
    if (REFG(int, 0x1323954) == 0) {
      REFG(int, 0x1323950) = 0;
      REFG(int, 0x1323954) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323958) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323954),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323980) == iVar1) {
    F_006da0a0(REFG(void * PTR32, 0x1488344),&REFG(undefined * PTR32, 0x132398c));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323980) = 0;
    }
    if (REFG(int, 0x1323984) == 0) {
      REFG(int, 0x1323980) = 0;
      REFG(int, 0x1323984) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323988) = 0;
      F_00487650(&REFG(undefined4, 0x1323994),&(*(int *)&gen_args[1]),REFG(undefined4, 0x1323994),REFG(undefined4, 0x1323998));
      *(undefined4 *)&REFG(undefined, 0x13239a4) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239a8) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239ac) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239b0) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323984),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x13239b8) == iVar1) {
    F_006da0a0(REFG(void * PTR32, 0x1488344),&REFG(undefined * PTR32, 0x13239c4));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x13239b8) = 0;
    }
    if (REFG(int, 0x13239bc) == 0) {
      REFG(int, 0x13239b8) = 0;
      REFG(int, 0x13239bc) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239c0) = 0;
      F_00487650(&REFG(undefined4, 0x13239cc),&(*(int *)&gen_args[1]),REFG(undefined4, 0x13239cc),REFG(undefined4, 0x13239d0));
      *(undefined4 *)&REFG(undefined, 0x13239dc) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239e0) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239e4) = 0;
      *(undefined2 *)&REFG(undefined, 0x13239e8) = 0x100;
      REFG(undefined4, 0x13239ea) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239ec) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13239bc),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x13239f4) == iVar1) {
    F_006da0a0(REFG(void * PTR32, 0x1488344),&REFG(undefined * PTR32, 0x1323a00));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x13239f4) = 0;
    }
    if (REFG(int, 0x13239f8) == 0) {
      REFG(int, 0x13239f4) = 0;
      REFG(int, 0x13239f8) = 0;
      *(undefined4 *)&REFG(undefined, 0x13239fc) = 0;
      F_00487650(&REFG(undefined4, 0x1323a08),&(*(int *)&gen_args[1]),REFG(undefined4, 0x1323a08),REFG(undefined4, 0x1323a0c));
      *(undefined4 *)&REFG(undefined, 0x1323a18) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323a1c) = 0;
      REFG(undefined4, 0x1323a20) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323a24) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x13239f8),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323aac) == iVar1) {
    F_006da0a0(REFG(void * PTR32, 0x1488344),&REFG(undefined * PTR32, 0x1323ab8));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323aac) = 0;
    }
    if (REFG(int, 0x1323ab0) == 0) {
      REFG(int, 0x1323aac) = 0;
      REFG(int, 0x1323ab0) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323ab4) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323ab0),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323a2c) == iVar1) {
    F_006da0a0(REFG(void * PTR32, 0x1488344),&REFG(undefined * PTR32, 0x1323a38));
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323a2c) = 0;
    }
    if (REFG(int, 0x1323a30) == 0) {
      REFG(int, 0x1323a2c) = 0;
      REFG(int, 0x1323a30) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323a34) = 0;
      F_00487650(&REFG(undefined4, 0x1323a40),&(*(int *)&gen_args[1]),REFG(undefined4, 0x1323a40),REFG(undefined4, 0x1323a44));
      *(undefined4 *)&REFG(undefined, 0x1323a50) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323a54) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323a30),0);
      local_5 = 1;
    }
  }
  if (REFG(int, 0x1323ad8) == iVar1) {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(int, 0x1323ad8) = 0;
    }
    if (REFG(int, 0x1323adc) == 0) {
      REFG(int, 0x1323ad8) = 0;
      REFG(int, 0x1323adc) = 0;
      *(undefined4 *)&REFG(undefined, 0x1323ae0) = 0;
    }
    else {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(int, 0x1323adc),0);
      local_5 = 1;
    }
  }
  uVar6 = 0x1d;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x14b117c) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x21;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323af8) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x3a;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(undefined4, 0x1323b08) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    F_00a6cdf0(1);
    local_5 = 1;
  }
  uVar6 = 0x22;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323b58) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x4c;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323b88) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x4b;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323b98) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x37;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323ba8) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x3c;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      REFG(undefined4, 0x1323bb8) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  uVar6 = 0x32;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  piVar3 = (int *)F_00763050(uVar4,uVar6);
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  if ((char)uVar4 != '\0') {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1323ae8) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    local_5 = 1;
  }
  if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd2))) != '\0') && (local_c != 0)) && (local_c != 1)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x110))(piVar2);
  }
  return local_5;
}

/* ref: FUN_006e7290 */
uint F_006e7290(unsigned int gen_a0)
{
  GEN_ENTER(0x6e7290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint in_ecx;
  undefined * this_00;
  uint * puVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x32;
  in_ecx = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this_00 = (undefined *)F_00763050(in_ecx,uVar3);
  *(uint *)&REFG(undefined, 0x1323aec) = F_0077bb10(this_00,&REFG(undefined * PTR32, 0x1323ae4));
  if (*(int *)((int)this + 0x24) == 0) {
    *(uint *)&REFG(undefined, 0x1323ae8) = 0;
    return 0;
  }
  puVar2 = (uint *)F_007512b0((undefined *)((int)this + 0x14));
  *(uint *)&REFG(undefined, 0x1323ae8) = *puVar2;
  return *puVar2;
}

/* ref: FUN_006e72f0 */
uint F_006e72f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x6e72f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_10 = (undefined4)gen_a10;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  undefined * PTR32 * ppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x1323ad8) = 0;
  }
  else {
    puVar2 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x1323ad8) = *puVar2;
  }
  uVar12 = 4;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  ppuVar4 = &REFG(undefined * PTR32, 0x1323ad4);
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  uVar3 = F_00866d10(this_00,param_1,param_2,param_3,param_5,param_8,param_9,param_10,param_4,
                       param_6,param_7,ppuVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
  REFG(undefined4, 0x1323adc) = uVar3;
  return uVar3;
}

/* ref: FUN_006e7380 */
uint F_006e7380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0x6e7380u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_11 = (undefined4)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  ushort uVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  undefined * PTR32 * ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(undefined4, 0x1323ad8) = 0;
  }
  else {
    puVar3 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    REFG(undefined4, 0x1323ad8) = *puVar3;
  }
  uVar1 = REFG(undefined2, 0x10be324);
  if (param_1 / 10 != 0) {
    uVar1 = REFG(undefined2, 0x10be31c);
  }
  uVar11 = 4;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  ppuVar6 = &REFG(undefined * PTR32, 0x1323ad4);
  uVar4 = (uint)uVar1;
  uVar5 = param_1 % 10;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  uVar4 = F_00866d10(this_00,param_9,uVar5,uVar4,param_2,param_3,param_4,param_5,param_8,param_6,
                       param_7,ppuVar6,uVar7,param_12,param_10,param_11,uVar8,uVar9,uVar10,uVar11);
  REFG(undefined4, 0x1323adc) = uVar4;
  return uVar4;
}

/* ref: FUN_006e7480 */
uint F_006e7480(unsigned int gen_a0)
{
  GEN_ENTER(0x6e7480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x3a;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this_00 = (undefined *)F_00763050(uVar2,uVar5);
  if (*(int *)((int)this + 0x24) == 0) {
    iVar3 = 0;
  }
  else {
    piVar1 = (int *)F_007512b0((undefined *)((int)this + 0x14));
    iVar3 = *piVar1;
  }
  if (REFG(int, 0x1323b08) == iVar3) {
    uVar2 = F_0089e970(this_00);
    return uVar2;
  }
  F_00a6cdf0(0);
  if (*(int *)((int)this + 0x24) == 0) {
    REFG(int, 0x1323b08) = 0;
    uVar2 = F_00877d70(this_00,&REFG(undefined * PTR32, 0x1323b04));
    return uVar2;
  }
  puVar4 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
  REFG(int, 0x1323b08) = *puVar4;
  uVar2 = F_00877d70(this_00,&REFG(undefined * PTR32, 0x1323b04));
  return uVar2;
}

/* ref: FUN_006e754a */
unsigned int F_006e754a(void)
{
  GEN_ENTER(0x6e754au, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_006e7567 */
unsigned int F_006e7567(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e7567u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this;
  undefined4 uVar2;
  undefined * PTR32 * ppuVar3;
  
  *(undefined4 *)&REFG(undefined, 0x1323b28) = in_eax;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = *(undefined4 *)(in_ebp + 8);
  ppuVar3 = &REFG(undefined * PTR32, 0x1323b24);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  F_008973a0(this,uVar2,ppuVar3);
  return 0;
}

/* ref: FUN_006e7620 */
uint F_006e7620(unsigned int gen_a0)
{
  GEN_ENTER(0x6e7620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323b58) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323b58) = *puVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x22;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  *(undefined4 *)((int)this_00 + 0xc) = 2;
  uVar3 = F_008e9c10(this_00);
  *(undefined * PTR32 * PTR32 *)((int)this_00 + 0x18) = &REFG(undefined * PTR32, 0x1323b54);
  return uVar3;
}

/* ref: FUN_006e7670 */
uint F_006e7670(unsigned int gen_a0)
{
  GEN_ENTER(0x6e7670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323b68) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323b68) = *puVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x22;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  *(undefined4 *)((int)this_00 + 0xc) = 4;
  uVar3 = F_008e9c10(this_00);
  *(undefined * PTR32 * PTR32 *)((int)this_00 + 0x18) = &REFG(undefined * PTR32, 0x1323b64);
  return uVar3;
}

/* ref: FUN_006e76c0 */
uint F_006e76c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e76c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323b78) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323b78) = *puVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x22;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  *(undefined4 *)((int)this_00 + 0xc) = 7;
  uVar3 = F_008e9c10(this_00);
  *(undefined * PTR32 * PTR32 *)((int)this_00 + 0x18) = &REFG(undefined * PTR32, 0x1323b74);
  return uVar3;
}

/* ref: FUN_006e7710 */
uint F_006e7710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e7710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323ba8) = 0;
  }
  else {
    puVar1 = (undefined4 *)F_007512b0((undefined *)((int)this + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323ba8) = *puVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0x37;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this_00 = (undefined *)F_00763050(uVar3,uVar4);
  uVar3 = F_00775920(this_00,&REFG(undefined * PTR32, 0x1323ba4),param_1);
  return uVar3;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf14 */
uint F_006e77b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e77b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 * puVar4;
  undefined4 uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *(int *)(this + 4);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x32;
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
  this_00 = (undefined *)F_00763050(uVar2,uVar5);
  *(uint *)&REFG(undefined, 0x1323aec) = F_0077bb10(this_00,&REFG(undefined * PTR32, 0x1323ae4));
  if (*(int *)(iVar1 + 0x24) == 0) {
    *(undefined4 *)&REFG(undefined, 0x1323ae8) = 0;
  }
  else {
    puVar4 = (undefined4 *)F_007512b0((undefined *)(iVar1 + 0x14));
    *(undefined4 *)&REFG(undefined, 0x1323ae8) = *puVar4;
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf27 */
uint F_006e7850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e7850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x230];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  (*(uint *)(gen_frame + 0x228)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x22c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = this;
  F_00a02210(((byte *)(gen_frame + 0x0)) + 0xc,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x0)) + 0xc,1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),1,uVar2);
  uVar1 = *puVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),2);
  ((byte *)(gen_frame + 0x0))[0] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[1] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[2] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[3] = (char)(uVar2 >> 0x18);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),3);
  ((byte *)(gen_frame + 0x0))[8] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[9] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[10] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0xb] = (char)(uVar2 >> 0x18);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),4);
  ((byte *)(gen_frame + 0x0))[0x2c] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[0x2d] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[0x2e] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x2f] = (char)(uVar2 >> 0x18);
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x0)) + 0xc);
  uVar9 = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x12c)));
  F_0042b630(((undefined1 *)(gen_frame + 0x30)));
  F_0042b630(((undefined1 *)(gen_frame + 0xd8)));
  F_0042b630(((undefined1 *)(gen_frame + 0x180)));
  F_0042b630(((undefined1 *)(gen_frame + 0x84)));
  F_0042b630(((undefined1 *)(gen_frame + 0x1d4)));
  if (4 < (int)uVar2) {
    uVar9 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),5);
  }
  if (5 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,6,((undefined1 *)(gen_frame + 0x12c)));
  }
  if (6 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,7,((undefined1 *)(gen_frame + 0x30)));
  }
  if (7 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,8,((undefined1 *)(gen_frame + 0xd8)));
  }
  if (8 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,9,((undefined1 *)(gen_frame + 0x180)));
  }
  if (9 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,10,((undefined1 *)(gen_frame + 0x84)));
  }
  if (10 < (int)uVar2) {
    F_006e3770(((byte *)(gen_frame + 0x0)) + 0xc,uVar1,0xb,((undefined1 *)(gen_frame + 0x1d4)));
  }
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x1d4)));
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x84)));
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x180)));
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0xd8)));
  uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x30)));
  uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x12c)));
  F_006e72f0(*((undefined * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 4))),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)),uVar9,uVar8,
               uVar7,uVar6,uVar5,uVar4,uVar2);
  uVar2 = F_00a02290(((byte *)(gen_frame + 0x0)) + 0xc,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x1d4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x84)));
  F_0042c880(((undefined1 *)(gen_frame + 0x180)));
  F_0042c880(((undefined1 *)(gen_frame + 0xd8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x12c)));
  F_00a02240(((byte *)(gen_frame + 0x0)) + 0xc);
  F_00c47745((*(uint *)(gen_frame + 0x228)) ^ (uint)(uint)(gen_frame + 0x22c));
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf28 */
uint F_006e7ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e7ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x330];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  (*(uint *)(gen_frame + 0x328)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x32c);
  F_00a02210(((byte *)(gen_frame + 0x14)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x14)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = 0;
  if (iVar1 != 0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0xdc)),&REFG(undefined, 0x10b3a37),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x184)),&REFG(undefined, 0x10b3a3a),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x130)),&REFG(undefined, 0x10b3a3b),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x34)),&REFG(undefined, 0x10b3a3e),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x88)),&REFG(undefined, 0x10b3a3f),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x280)),&REFG(undefined, 0x10b3a42),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x2d4)),&REFG(undefined, 0x10b3a43),REFG(undefined4, 0x108cc50));
    (*(uint *)(gen_frame + 0x10)) = 0x14;
    uVar13 = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0x1d8)),&REFG(undefined, 0x10b3a46),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x22c)),&REFG(undefined, 0x10b3a47),REFG(undefined4, 0x108cc50));
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),2);
    if (bVar2 != 0) {
      (*(uint *)(gen_frame + 0xc)) = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),2);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),3);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),3);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,3,((undefined1 *)(gen_frame + 0xdc)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),3);
      F_0042e430(((undefined1 *)(gen_frame + 0xdc)),uVar5);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),4);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),4);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,4,((undefined1 *)(gen_frame + 0x184)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),4);
      F_0042e430(((undefined1 *)(gen_frame + 0x184)),uVar5);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),5);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),5);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,5,((undefined1 *)(gen_frame + 0x130)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),5);
      F_0042e430(((undefined1 *)(gen_frame + 0x130)),uVar5);
    }
    F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,6,((undefined1 *)(gen_frame + 0x34)));
    F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,7,((undefined1 *)(gen_frame + 0x88)));
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),8);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),8);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,8,((undefined1 *)(gen_frame + 0x280)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),8);
      F_0042e430(((undefined1 *)(gen_frame + 0x280)),uVar5);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),9);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),9);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,9,((undefined1 *)(gen_frame + 0x2d4)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),9);
      F_0042e430(((undefined1 *)(gen_frame + 0x2d4)),uVar5);
    }
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),10);
    if (bVar2 != 0) {
      (*(uint *)(gen_frame + 0x10)) = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),10);
    }
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),0xb);
    if (bVar2 != 0) {
      uVar13 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),0xb);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),0xc);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),0xc);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,0xc,((undefined1 *)(gen_frame + 0x1d8)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),0xc);
      F_0042e430(((undefined1 *)(gen_frame + 0x1d8)),uVar5);
    }
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x14)),0xd);
    if (bVar2 == 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),0xd);
      if (bVar2 != 0) {
        F_006e3770(((byte *)(gen_frame + 0x14)),iVar1,0xd,((undefined1 *)(gen_frame + 0x22c)));
      }
    }
    else {
      uVar5 = F_00a01e40(((byte *)(gen_frame + 0x14)),0xd);
      F_0042e430(((undefined1 *)(gen_frame + 0x22c)),uVar5);
    }
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x14)),0xe);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)),0xe);
    }
    uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x22c)));
    uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x1d8)));
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x2d4)));
    uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x280)));
    uVar9 = F_0042a990(((undefined1 *)(gen_frame + 0x88)));
    uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
    uVar11 = F_0042a990(((undefined1 *)(gen_frame + 0x130)));
    uVar12 = F_0042a990(((undefined1 *)(gen_frame + 0x184)));
    F_006e7380(*(undefined * PTR32 *)(this + 4),(*(uint *)(gen_frame + 0xc)),uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,(*(uint *)(gen_frame + 0x10)),
                 uVar13,uVar6,uVar5,uVar3);
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x14)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x22c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x1d8)));
    F_0042c880(((undefined1 *)(gen_frame + 0x2d4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x280)));
    F_0042c880(((undefined1 *)(gen_frame + 0x88)));
    F_0042c880(((undefined1 *)(gen_frame + 0x34)));
    F_0042c880(((undefined1 *)(gen_frame + 0x130)));
    F_0042c880(((undefined1 *)(gen_frame + 0x184)));
    F_0042c880(((undefined1 *)(gen_frame + 0xdc)));
    F_00a02240(((byte *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x328)) ^ (uint)(uint)(gen_frame + 0x32c));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x328)) ^ (uint)(uint)(gen_frame + 0x32c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf29 */
uint F_006e8010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323af8) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323af8) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x21;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(uVar1,uVar4);
    F_007756d0(this_00,0,&REFG(undefined * PTR32, 0x1323af4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf30 */
uint F_006e80c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e80c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_006e7480(*(undefined * PTR32 *)(this + 4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf31 */
uint F_006e8130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined * PTR32 * ppuVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323b18) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323b18) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar4 = &REFG(undefined * PTR32, 0x1323b14);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_008b6eb0(this_00,ppuVar4);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf32 */
uint F_006e81d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e81d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined * PTR32 * ppuVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323b28) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323b28) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar4 = &REFG(undefined * PTR32, 0x1323b24);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_008973a0(this_00,uVar1,ppuVar4);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf33 */
uint F_006e8280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined * PTR32 * ppuVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323b38) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323b38) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar4 = &REFG(undefined * PTR32, 0x1323b34);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_008aa930(this_00,ppuVar4);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf34 */
uint F_006e8320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined * PTR32 * ppuVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323b48) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323b48) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ppuVar4 = &REFG(undefined * PTR32, 0x1323b44);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_008973b0(this_00,ppuVar4);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf35 */
uint F_006e83c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e83c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_006e7620(*(undefined * PTR32 *)(this + 4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf36 */
uint F_006e8430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_006e7670(*(undefined * PTR32 *)(this + 4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf37 */
uint F_006e84a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e84a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_006e76c0(*(undefined * PTR32 *)(this + 4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf40 */
uint F_006e8510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323ba8) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323ba8) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x37;
    in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(in_ecx,uVar4);
    F_00775920(this_00,&REFG(undefined * PTR32, 0x1323ba4),uVar1);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf41 */
uint F_006e85d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e85d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      REFG(undefined4, 0x1323bb8) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      REFG(undefined4, 0x1323bb8) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x3c;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(uVar1,uVar4);
    F_0077ad50(this_00,&REFG(undefined * PTR32, 0x1323bb4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf51 */
uint F_006e8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      *(undefined4 *)&REFG(undefined, 0x1323bd8) = 0;
    }
    else {
      puVar3 = (undefined4 *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      *(undefined4 *)&REFG(undefined, 0x1323bd8) = *puVar3;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x4d;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(uVar1,uVar4);
    F_00876770(this_00,&REFG(undefined * PTR32, 0x1323bd4));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf95 */
uint F_006e8730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e8730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_00a02210(((byte *)(gen_frame + 0x0)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
  F_0071edf0(((undefined1 *)(gen_frame + 0x20)));
  (*(undefined4 *)(gen_frame + 0x34)) = 7;
  (*(uint *)(gen_frame + 0x30)) = uVar1;
  F_007511f0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x2c))),((undefined1 *)(gen_frame + 0x20)));
  F_00a02240(((byte *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: FUN_006e87e0 */
unsigned int F_006e87e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e87e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar5 = *(undefined4 * PTR32 *)this;
  this_00 = (undefined *)(REFG(int, 0x1488344) + 0x100);
  if (puVar5 != *(undefined4 * PTR32 *)((int)this + 4)) {
    do {
      uVar3 = F_00753350(this_00);
      piVar1 = (int *)*puVar5;
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this_00,uVar3);
      if (uVar4 == 0) break;
      F_00c46e20(puVar5,puVar5 + 1,(*(int *)((int)this + 4) - (int)(puVar5 + 1) >> 2) * 4);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,this_00,uVar3);
      ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
      puVar5 = *(undefined4 * PTR32 *)this;
    } while (puVar5 != *(undefined4 * PTR32 *)((int)this + 4));
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x14);
  while (puVar2 != puVar5) {
    uVar3 = F_00753350(this_00);
    piVar1 = (int *)*puVar2;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this_00,uVar3);
    if (uVar3 != 0) {
      F_00c46e20(puVar2,puVar2 + 1,(*(int *)((int)this + 0x14) - (int)(puVar2 + 1) >> 2) * 4);
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -4;
      ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 0x14);
  }
  return 0;
}

/* ref: FUN_006e88c0 */
uint F_006e88c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e88c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  iVar6 = REFG(int, 0x1488344) + 0x100;
  if (*(int *)(REFG(int, 0x1488344) + 0x124) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar3 = (undefined4 *)F_007512b0((undefined *)(REFG(int, 0x1488344) + 0x114));
    piVar4 = (int *)*puVar3;
  }
  puVar3 = *(undefined4 * PTR32 *)this;
  if (puVar3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    if (piVar4 != (int *)0x0) {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x14c))(piVar4,piVar4[0x18])));
    }
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar3 + 0xc))((int *)*puVar3,iVar6,piVar4)));
    if (((char)puVar3 != '\0') && (piVar4 = *(int * PTR32 *)this, piVar4 != *(int * PTR32 *)((int)this + 4))) {
      piVar5 = piVar4 + 1;
      do {
        piVar1 = (int *)*piVar4;
        if ((piVar1 == (int *)0x0) ||
           (puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1))), (char)puVar3 != '\0')) {
          puVar3 = (undefined4 *)*piVar4;
          if (puVar3 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
          }
          puVar3 = (undefined4 *)
                   F_00c46e20(piVar4,piVar5,(*(int *)((int)this + 4) - (int)((int)(uintptr_t)piVar5) >> 2) * 4);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
        }
        else {
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
      } while (piVar4 != *(int * PTR32 *)((int)this + 4));
    }
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x14);
  for (piVar4 = *(int * PTR32 *)((int)this + 0x10); piVar4 != piVar5; piVar4 = piVar4 + 1) {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
    }
  }
  iVar6 = *(int *)((int)this + 0x10);
  if (iVar6 != *(int *)((int)this + 0x14)) {
    puVar3 = (undefined4 *)F_00c46e20(iVar6,*(int *)((int)this + 0x14),0);
    *(int *)((int)this + 0x14) = iVar6;
  }
  return (uint)puVar3;
}

/* ref: Client::Game::Event::CreateAppearanceTask::vf2 */
uint F_006e89c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e89c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  F_007511f0((undefined *)(param_1 + 0x2c),this + 8);
  uVar2 = *(uint *)(this + 0x9c);
  if (uVar2 == 3) {
    piVar1 = *(int * PTR32 *)(this + 0x90);
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,1,0);
    if (param_2 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x154))(param_2,piVar1);
      return uVar2;
    }
  }
  else if (uVar2 == 7) {
    piVar1 = *(int * PTR32 *)(this + 0x90);
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,1,0);
    if (param_2 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x158))(param_2,piVar1);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Event::BindCharacterByEntityIdTask::vf2 */
uint F_006e8a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar2;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    F_0071edf0(((undefined1 *)(gen_frame + 0x0)));
    F_006b9490(((undefined1 *)(gen_frame + 0x0)),8,iVar1);
    F_007511f0((undefined *)(param_1 + 0x2c),((undefined1 *)(gen_frame + 0x0)));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x54))))(*(int * PTR32 *)(this + 4),1);
  }
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x15c))(param_2,*(undefined4 *)(this + 4));
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: Client::Game::Event::BindCharacterByLayoutIdTask::vf2 */
uint F_006e8ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar2;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    F_0071edf0(((undefined1 *)(gen_frame + 0x0)));
    F_006b9490(((undefined1 *)(gen_frame + 0x0)),8,iVar1);
    F_007511f0((undefined *)(param_1 + 0x2c),((undefined1 *)(gen_frame + 0x0)));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x54))))(*(int * PTR32 *)(this + 4),1);
  }
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x15c))(param_2,*(undefined4 *)(this + 4));
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: Client::Game::Event::LoadMovePositionTask::vf1 */
uint F_006e8b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined * pLVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x2c);
  if (uVar4 < *(uint *)(this + 0x28)) {
    pLVar3 = this + uVar4 * 4 + 8;
    do {
      puVar2 = (undefined4 *)F_00ab37e0(*(undefined4 *)pLVar3);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar2;
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[1];
      uVar1 = puVar2[2];
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)pLVar3;
      (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar2[3];
      F_00751300(*(undefined * PTR32 *)(this + 4),&(*(undefined4 *)(gen_frame + 0x8)));
      *(uint *)(this + 0x2c) = uVar4;
      uVar4 = uVar4 + 1;
      pLVar3 = pLVar3 + 4;
    } while (uVar4 < *(uint *)(this + 0x28));
  }
  return 1;
}

/* ref: Client::Game::Event::PrepareCutSceneTask::vf2 */
uint F_006e8bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  F_005d5430(&REFG(undefined, 0x1379c6c),1);
  *(undefined1 *)(REFG(int, 0x1488344) + 0x71c) = 1;
  if ((*(int *)(this + 4) == 1) && (*(int *)(REFG(int, 0x137104c) + 0x25f8) != 0)) {
    F_004e7f70(*(int *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)0);
  }
  F_006e6ba0(param_1,param_2,1);
  piVar1 = (int *)F_00424750(REFG(int, 0x137104c));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1,0);
    if ((char)uVar2 != '\0') {
      F_006c5600(param_1,0x3f);
    }
  }
  uVar2 = F_00a6ddf0(&REFG(undefined, 0x14ab380));
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x180))(param_2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::PostCutSceneTask::vf2 */
uint F_006e8c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  F_006e6000(REFG(void * PTR32, 0x1488344));
  F_00a69720(&REFG(undefined, 0x14ab380));
  uVar1 = F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)1);
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x184))(param_2);
  }
  return uVar1;
}

/* ref: Client::Game::Event::FinalizeSceneTask::vf1 */
uint F_006e8ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if (this[0x408] == (undefined1)0x0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xa0))(piVar2);
    if (uVar3 == 10) {
      this[0x409] = (undefined1)0x1;
    }
    this[0x408] = (undefined1)0x1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xa0))(piVar2);
  if (this[0x409] != (undefined1)0x0) {
    if ((uVar3 & 8) != 0) {
      return 0;
    }
    this[0x409] = (undefined1)0x0;
  }
  F_006e3e70(param_1,param_2);
  if ((*(char *)(param_1 + 0xd5) == '\0') && (REFG(char, 0x14a737d) == '\0')) {
    if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
      uVar3 = *(uint *)(REFG(int, 0x1488344) + 0x220);
      if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
      }
      if (*(uint *)(iVar4 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(iVar4 + 8);
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 0x28))) == 0x12) {
        return 1;
      }
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
    bVar1 = F_0075ee20(uVar3);
    if (bVar1 != 0) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0,0x3c,1);
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,1,0x3c,1);
    }
  }
  return 1;
}

/* ref: Client::Game::Event::MakeRetainerTask::vf2 */
uint F_006e8e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_006e6000(REFG(void * PTR32, 0x1488344));
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x1ac))(param_2,*(undefined4 *)(this + 8));
  }
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventObject::vf1 */
unsigned int F_006e8e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8e40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = REFG(int, 0x1488344);
  if ((((*(int *)(REFG(int, 0x1488344) + 0x124) != 0) &&
       (piVar3 = (int *)F_007512b0((undefined *)(REFG(int, 0x1488344) + 0x114)), uVar2 = (*(uint *)&gen_args[1]), *piVar3 != 0)
       ) && ((*(uint *)&gen_args[1]) < 7)) &&
     (F_006d7550(&(*(uint *)&gen_args[1]),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60)))), (*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x130))) {
    *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e + uVar2) = (undefined1)(*(undefined4 *)&gen_args[2]);
  }
  return 0;
}

/* ref: Client::Game::Event::LuaPc::vf1 */
unsigned int F_006e8ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8ea0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = REFG(int, 0x1488344);
  if ((((*(int *)(REFG(int, 0x1488344) + 0x124) != 0) &&
       (piVar3 = (int *)F_007512b0((undefined *)(REFG(int, 0x1488344) + 0x114)), uVar2 = (*(uint *)&gen_args[1]), *piVar3 != 0)
       ) && ((*(uint *)&gen_args[1]) < 7)) &&
     (F_006d7550(&(*(uint *)&gen_args[1]),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60)))), (*(uint *)&gen_args[1]) != *(uint *)(iVar1 + 0x130))) {
    *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e + uVar2) = (undefined1)(*(undefined4 *)&gen_args[2]);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf39 */
uint F_006e8f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e8f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_006e8f60 */
unsigned int F_006e8f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e8f60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  uint * this_01;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) == 0) {
    this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    uVar4 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c);
    piVar5 = (int *)F_0052fba0(this_00,uVar4);
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = piVar5;
    if (piVar5 == (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))))((*(undefined * PTR32 *)&gen_args[0]),0,0,0);
      return 0;
    }
    iVar6 = (*(int *)&gen_args[2]);
    if ((*(int *)&gen_args[2]) == -1) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x44))(piVar5);
      iVar6 = uVar4 - (*(uint *)&gen_args[1]);
    }
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)));
    this_01 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)));
    if (iVar1 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)))) {
      (*(int *)&gen_args[2]) = 0;
      F_00c46e20(iVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))),0);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = (*(int *)&gen_args[2]) + iVar1;
    }
    F_0074cbd0(this_01,iVar6);
    uVar7 = iVar6 + (*(uint *)&gen_args[1]);
    for (uVar4 = (*(uint *)&gen_args[1]); (*(uint *)&gen_args[1]) = uVar4, uVar4 < uVar7; uVar4 = uVar4 + 1) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)));
      if ((&(*(uint *)&gen_args[1]) < puVar2) && (puVar3 = (undefined4 *)*this_01, puVar3 <= &(*(uint *)&gen_args[1]))) {
        if (puVar2 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8)))) {
          F_0074d4f0(this_01,1);
        }
        uVar4 = (*(uint *)&gen_args[1]);
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) != (undefined4 *)0x0) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) =
               *((undefined4 *)GEN_TOP((*this_01 + ((int)&(*(uint *)&gen_args[1]) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
        }
      }
      else {
        if (puVar2 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8)))) {
          F_0074d4f0(this_01,1);
        }
        if (*((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) != (uint *)0x0) {
          **((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = uVar4;
        }
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) + 4;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4))) = 0;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) = uVar4;
    F_006cda10((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: FUN_006e90a0 */
uint F_006e90a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e90a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006e5f80(REFG(void * PTR32, 0x1488344),this,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf39 */
uint F_006e90c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e90c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_00a036e0(*(undefined * PTR32 *)(this + 0xf8));
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Game::Event::LuaEventHandler::vf33 */
unsigned int F_006e9120(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  if (**(char * PTR32 *)(this + 0x7c) != '\0') {
    if (*(int *)(this + 0x74) != 0) {
      piVar1 = *(int * PTR32 *)(this + 0x78);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)(this + 0x74));
      }
      puVar2 = *(undefined4 * PTR32 *)(this + 0x74);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *(undefined4 *)(this + 0x74) = 0;
      }
    }
    F_006da0a0(REFG(void * PTR32, 0x1488344),this + 0x20);
    F_0074d7c0(this + 0x1c0,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1c4) + 4))));
    *((int *)GEN_TOP((*(int *)(this + 0x1c4) + 4))) = *(int *)(this + 0x1c4);
    *(undefined4 *)*(undefined4 *)(this + 0x1c4) = *(undefined4 *)(this + 0x1c4);
    *((int *)GEN_TOP((*(int *)(this + 0x1c4) + 8))) = *(int *)(this + 0x1c4);
    *(undefined4 *)(this + 0x1c8) = 0;
    F_006e8f60(this,0,0xffffffff);
  }
  return 0;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf1 */
uint F_006e91c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e91c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132370c),REFG(undefined * PTR32, 0x1323708));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: FUN_006e9230 */
uint F_006e9230(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x140,0,0);
  if (this != (undefined4 *)0x0) {
    F_006e44c0(this,param_1 & 0xffff | 0xd0000);
    *this = (*(undefined * PTR32 (*)[144])REFP(0x10b988c));
    this[0x4e] = 0;
    this[0x4f] = 0;
    F_00c48350(this + 0x3e,0,0x40);
    return (uint)this;
  }
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf142 */
uint F_006e92a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e92a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x1c] & 1) != 0) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xe8)));
    if (puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xec)))) {
      do {
        uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar3 + 8))((int *)*puVar3);
        if ((char)uVar1 == '\0') goto LAB_006e9302;
        puVar3 = puVar3 + 1;
      } while (puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xec))));
    }
    pAVar4 = (*(undefined * PTR32 *)&gen_args[0]) + 0xf8;
    iVar2 = 0x10;
    do {
      if (*(int *)pAVar4 != 0) {
        F_006e5450(REFG(void * PTR32, 0x1488344),*(undefined4 *)(*(int *)pAVar4 + 8),(*(int *)&gen_args[1]));
      }
      pAVar4 = pAVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_006e9302: ;
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    F_0073ce10((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
    F_00744a50((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
    if (iVar2 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))))((*(undefined * PTR32 *)&gen_args[0]),iVar2);
    }
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0) {
    uVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) - 1;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = uVar1;
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf1 */
uint F_006e9370(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x1323714),REFG(undefined * PTR32, 0x1323710));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf128 */
uint F_006e93e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e93e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    uVar3 = F_00a4ffd0();
    bVar2 = F_006e49c0(this);
    if ((bVar2 != 0) && (bVar2 = F_006ce600(this), bVar2 == 0)) {
      if (*(int *)(this + 0x25c) == 0) {
        return 0xece5;
      }
      bVar2 = F_006d5600((uint)*(ushort *)(this + 0x25c),uVar3);
      if (bVar2 != 0) {
        return 0xece5;
      }
    }
    bVar2 = F_006d8490(this,iVar1);
    if (bVar2 != 0) {
      return 0xece1;
    }
  }
  return 0;
}

/* ref: FUN_006e9460 */
uint F_006e9460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e9460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x570);
  *(undefined4 *)((int)this + 0x270) = *(undefined4 *)(*param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  *(undefined4 *)((int)this + 0x56c) = 0;
  uVar2 = F_006e47a0(this,param_3 >> 8 & 0xff,param_3 & 0xff,param_3 >> 0x10 & 0xff);
  return uVar2;
}

/* ref: FUN_006e94d0 */
uint F_006e94d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e94d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c)));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570)));
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x68);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) = uVar2;
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3,1,(((*(uint *)&gen_args[4]) & 0xff) << 8 | (*(uint *)&gen_args[1]) & 0xff) << 8 | (*(uint *)&gen_args[2]) & 0xff);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    puVar3[6] = (*(undefined * PTR32 *)&gen_args[0]);
    puVar3[7] = ((code *)REFP(0x6e9460));
  }
  (*(uint *)&gen_args[3]) = (*(uint *)&gen_args[3]) & 0xffff;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = puVar3;
  F_00749410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))),&(*(uint *)&gen_args[4]),&(*(uint *)&gen_args[3]));
  if ((*(uint *)&gen_args[4]) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(uint *)&gen_args[4]) + 0x10;
  }
  F_00cb4540(puVar3,0,*(undefined4 *)(iVar4 + 0x1c4));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
  return uVar2;
}

/* ref: FUN_006e95f0 */
uint F_006e95f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e95f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x5a4) = 0;
  if (*(int *)((int)this + 0x574) != *(int *)((int)this + 0x578)) {
    *(int *)((int)this + 0x578) = *(int *)((int)this + 0x574);
  }
  F_0074e1b0((undefined *)((int)this + 0x584),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x588) + 4))) = *(int *)((int)this + 0x588);
  *(undefined4 *)*(undefined4 *)((int)this + 0x588) = *(undefined4 *)((int)this + 0x588);
  uVar1 = *(uint *)((int)this + 0x588);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 0x58c) = 0;
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf39 */
uint F_006e9660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e9660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(undefined4, 0x132410c) == this) {
    REFG(undefined4, 0x132410c) = (undefined *)0x0;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(undefined4, 0x1324110),0);
  }
  if (REFG(undefined4, 0x132411c) == this) {
    REFG(undefined4, 0x132411c) = (undefined *)0x0;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x1324120),0);
  }
  if (*(int *)(this + 0x570) != 0) {
    piVar2 = *(int * PTR32 *)(this + 0x56c);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*(int *)(this + 0x570));
    }
    puVar1 = *(undefined4 * PTR32 *)(this + 0x570);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x570) = 0;
    }
  }
  *(undefined4 *)(this + 0x56c) = 0;
  F_00a036e0(*(undefined * PTR32 *)(this + 0xf8));
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar4 = param_3 - 0xc;
    if (uVar4 == 0) {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::CompanyLeveOfficerEventHandler::vf1 */
uint F_006e9760(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132371c),REFG(undefined * PTR32, 0x1323718));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: FUN_006e97d0 */
uint F_006e97d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e97d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x154,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006e4b30(this,param_1 & 0xffff | 0x30000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf39 */
uint F_006e9800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e9800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * this_00;
  
  if (REFG(undefined4, 0x132412c) == this) {
    REFG(undefined4, 0x132412c) = (undefined *)0x0;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x1324130),0);
  }
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,0);
  iVar1 = *(int *)(this + 0x10c);
  if (iVar1 != 0) {
    iVar4 = 7;
    this_00 = (undefined *)(iVar1 + 0x3b0);
    do {
      this_00 = (undefined *)((int)this_00 + -0x74);
      F_0042c880(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00406ad0(iVar1);
    *(undefined4 *)(this + 0x10c) = 0;
  }
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar3 = param_3 - 0xc;
    if (uVar3 == 0) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf39 */
uint F_006e98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e98f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x3c;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar1 = (int *)F_00763050(uVar2,uVar3);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      REFG(undefined4, 0x1323bb8) = (undefined *)0x0;
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  if (REFG(undefined4, 0x1323bb8) == this) {
    REFG(undefined4, 0x1323bb8) = (undefined *)0x0;
  }
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar2 = param_3 - 0xc;
    if (uVar2 == 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_006e99a0 */
uint F_006e99a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6e99a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar3 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(int * PTR32 *)&gen_args[1]) == '\0') {
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = REFG(undefined * PTR32, 0x1323720);
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar3;
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar5 = (*(uint *)(gen_frame + 0x4)) + 2;
      F_00a01c40(this_00,iVar5,"className",(*(int * PTR32 *)&gen_args[1]));
      F_00a01c80(this_00,iVar5,"referenceCount",0);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0)));
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar6 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0x60);
          uVar3 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0xc);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732eb0(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0))));
      }
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar6 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0xc);
          uVar3 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0x10);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732c70(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[1]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x8)));
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      }
      goto LAB_006e9c0b;
    }
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  else {
    uVar4 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 != 0) {
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
          uVar4 = F_0042a990((int)(*(int * PTR32 *)&gen_args[1]) + 0x10);
          F_00a01c80(this_00,uVar3 + 1,uVar4,uVar6);
          F_00732c70(&(*(int * PTR32 *)&gen_args[1]));
        } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  F_00b9a760(uVar6,0xfffffffe);
LAB_006e9c0b: ;
  F_0074df70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2dc))),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0)));
  *(undefined4 *)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0)));
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e0)));
  *(uint *)(uVar3 + 8) = uVar3;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e4))) = 0;
  return uVar3;
}

/* ref: FUN_006e9c50 */
uint F_006e9c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e9c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x18)),&REFG(undefined, 0x10b6990),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_1,((undefined1 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  if (1 < (uint)(((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8))) / 0x54)) {
    uVar1 = F_0042a970((*(int *)(gen_frame + 0x8)) + 0x54);
    if (uVar1 == 5) {
      uVar1 = F_0042a990((*(int *)(gen_frame + 0x8)) + 0x54);
      uVar1 = F_00c4c74c(uVar1);
      if (uVar1 != 0) {
        (*(undefined4 *)(gen_frame + 0x6d)) = 0;
        (*(undefined4 *)(gen_frame + 0x71)) = 0;
        (*(undefined1 *)(gen_frame + 0x75)) = 0;
        (*(undefined1 *)(gen_frame + 0x6c)) = 0;
        F_00c472af(&(*(undefined1 *)(gen_frame + 0x6c)),10,"%03u/",(int)uVar1 / 100);
        F_0042e430(param_2,&(*(undefined1 *)(gen_frame + 0x6c)));
        goto LAB_006e9d34;
      }
    }
  }
  F_0042aca0(param_2);
LAB_006e9d34: ;
  F_0042e360(param_2,param_1);
  F_0042ccf0(param_3,(*(int *)(gen_frame + 0x8)));
  uVar1 = F_004876d0(&(*(int *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: FUN_006e9d70 */
uint F_006e9d70(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9d70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x10c,0,0);
  if (this != (undefined4 *)0x0) {
    F_006e44c0(this,param_1 & 0xffff | 0x90000);
    this[0x3e] = 0;
    this[0x3f] = 0;
    this[0x40] = 0;
    this[0x41] = 0;
    *(undefined1 *)(this + 0x42) = 0;
    *this = (*(undefined * PTR32 (*)[144])REFP(0x10b9d24));
    return (uint)this;
  }
  return 0;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf39 */
uint F_006e9dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e9dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined4 uVar2;
  
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar2 = 0x522;
  }
  else {
    if (param_3 != 0xc) goto LAB_006e9e14;
    uVar2 = 0x521;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,uVar2,0,0);
LAB_006e9e14: ;
  uVar1 = F_00a4a760(&REFG(undefined, 0x14a7360),0xf,0);
  return uVar1;
}

/* ref: FUN_006e9e30 */
uint F_006e9e30(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1ec,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006e4c80(this,param_1 & 0xffff | 0xa0000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf124 */
byte F_006e9e60(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  short sVar2;
  char * pcVar3;
  undefined * this_00;
  char * pcVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar9;
  char * pcVar10;
  char * pcVar11;
  char local_5;
  char * pcVar8;
  
  this_00 = REFG(void * PTR32, 0x1488344);
  pcVar8 = *(char * PTR32 *)(this + 0x16c);
  if (*pcVar8 != '\0') {
    sVar2 = *(short *)(this + 0x1d4);
    uVar6 = F_00a4ffd0();
    iVar9 = 0;
    iVar7 = uVar6 + 0x13b4;
    do {
      if (*(short *)(iVar7 + 4) == sVar2) {
        if (-1 < iVar9) {
          local_5 = *(char *)(iVar7 + 6);
          goto LAB_006e9ea8;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar9 < 0x1e);
    local_5 = '\0';
LAB_006e9ea8: ;
    pcVar8 = *(char * PTR32 *)(this + 0x32c);
    pcVar11 = *(char * PTR32 *)pcVar8;
    if (pcVar11 != pcVar8) {
      do {
        pcVar8 = *(char * PTR32 *)(pcVar11 + 0x14);
        pcVar10 = *(char * PTR32 *)pcVar8;
        if (pcVar10 != pcVar8) {
          do {
            if (((*(int *)(pcVar10 + 0xc) == 5000000) &&
                (pcVar8 = *(char * PTR32 *)(pcVar10 + 0x14), pcVar8 == (char *)0x3)) ||
               (pcVar8 = *(char * PTR32 *)(pcVar10 + 0x14), pcVar8 == &REFG(undefined, 0x4))) {
              if (pcVar11[0xc] == local_5) {
                if (pcVar8 == &REFG(undefined, 0x4)) {
                  bVar5 = F_006e6390(this_00,*(undefined4 *)(pcVar10 + 0x18),this,0);
                  pcVar8 = (char *)(uint)bVar5;
                }
                else {
                  bVar5 = F_006e6390(this_00,*(undefined4 *)(pcVar10 + 0x18),this,
                                       (uint)(byte)pcVar10[0x11]);
                  pcVar8 = (char *)(uint)bVar5;
                }
              }
              else {
                if (pcVar8 == &REFG(undefined, 0x4)) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (uint)(byte)pcVar10[0x11];
                }
                bVar5 = F_006deae0(this_00,*(undefined4 *)(pcVar10 + 0x18),this,uVar6);
                pcVar8 = (char *)(uint)bVar5;
              }
            }
            if (pcVar10[0x25] == '\0') {
              pcVar3 = *(char * PTR32 *)(pcVar10 + 8);
              if (pcVar3[0x25] == '\0') {
                cVar1 = (*(char * PTR32 *)pcVar3)[0x25];
                pcVar8 = *(char * PTR32 *)pcVar3;
                while (pcVar10 = pcVar3, cVar1 == '\0') {
                  cVar1 = (*(char * PTR32 *)pcVar8)[0x25];
                  pcVar3 = pcVar8;
                  pcVar8 = *(char * PTR32 *)pcVar8;
                }
              }
              else {
                cVar1 = (*(char * PTR32 *)(pcVar10 + 4))[0x25];
                pcVar4 = *(char * PTR32 *)(pcVar10 + 4);
                pcVar3 = pcVar10;
                while ((pcVar8 = pcVar4, pcVar10 = pcVar8, cVar1 == '\0' &&
                       (pcVar3 == *(char * PTR32 *)(pcVar8 + 8)))) {
                  cVar1 = (*(char * PTR32 *)(pcVar8 + 4))[0x25];
                  pcVar4 = *(char * PTR32 *)(pcVar8 + 4);
                  pcVar3 = pcVar8;
                }
              }
            }
          } while (pcVar10 != *(char * PTR32 *)(pcVar11 + 0x14));
        }
        if (pcVar11[0x21] == '\0') {
          pcVar8 = *(char * PTR32 *)(pcVar11 + 8);
          if (pcVar8[0x21] == '\0') {
            cVar1 = (*(char * PTR32 *)pcVar8)[0x21];
            pcVar11 = pcVar8;
            pcVar8 = *(char * PTR32 *)pcVar8;
            while (cVar1 == '\0') {
              cVar1 = (*(char * PTR32 *)pcVar8)[0x21];
              pcVar11 = pcVar8;
              pcVar8 = *(char * PTR32 *)pcVar8;
            }
          }
          else {
            cVar1 = (*(char * PTR32 *)(pcVar11 + 4))[0x21];
            pcVar3 = *(char * PTR32 *)(pcVar11 + 4);
            pcVar10 = pcVar11;
            while ((pcVar8 = pcVar3, pcVar11 = pcVar8, cVar1 == '\0' &&
                   (pcVar10 == *(char * PTR32 *)(pcVar8 + 8)))) {
              cVar1 = (*(char * PTR32 *)(pcVar8 + 4))[0x21];
              pcVar3 = *(char * PTR32 *)(pcVar8 + 4);
              pcVar10 = pcVar8;
            }
          }
        }
      } while (pcVar11 != *(char * PTR32 *)(this + 0x32c));
    }
  }
  return (byte)pcVar8;
}

/* ref: FUN_006e9ff0 */
uint F_006e9ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e9ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  if ((*(byte *)((int)this + 0x36e) & 1) == 0) {
    uVar3 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
    (*(uint *)(gen_frame + 0x0)) = uVar3;
    uVar3 = F_0042a990((int)this + 0x118);
    (*(uint *)(gen_frame + 0x8)) = uVar3;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = REFG(undefined * PTR32, 0x1323728);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar5 = (*(uint *)(gen_frame + 0x0)) + 2;
      F_00a01c40(this_00,iVar5,"className",(*(uint *)(gen_frame + 0x8)));
      F_00a01c80(this_00,iVar5,"referenceCount",0);
      piVar1 = *(int * PTR32 *)((int)this + 0x33c);
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x0)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar6 = *(undefined4 *)((*(uint *)(gen_frame + 0x0)) + 0x60);
          uVar3 = F_0042a990((*(uint *)(gen_frame + 0x0)) + 0xc);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732eb0(&(*(uint *)(gen_frame + 0x0)));
        } while ((*(uint *)(gen_frame + 0x0)) != *(uint *)((int)this + 0x33c));
      }
      piVar1 = *(int * PTR32 *)((int)this + 0x1c4);
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x0)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar6 = *(undefined4 *)((*(uint *)(gen_frame + 0x0)) + 0xc);
          uVar3 = F_0042a990((*(uint *)(gen_frame + 0x0)) + 0x10);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732c70(&(*(uint *)(gen_frame + 0x0)));
        } while ((*(uint *)(gen_frame + 0x0)) != *(uint *)((int)this + 0x1c4));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(uint *)(gen_frame + 0x8)));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      if ((*(undefined * PTR32 *)(gen_frame + 0x4)) == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) | 1;
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x4)));
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x4)));
        *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) | 1;
      }
    }
    else {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      *(byte *)((int)this + 0x36e) = *(byte *)((int)this + 0x36e) | 1;
    }
  }
  else {
    uVar3 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
    uVar4 = F_0042a990((int)this + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x1c4);
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x0)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar6 = *(undefined4 *)((*(uint *)(gen_frame + 0x0)) + 0xc);
          uVar4 = F_0042a990((*(uint *)(gen_frame + 0x0)) + 0x10);
          F_00a01c80(this_00,uVar3 + 1,uVar4,uVar6);
          F_00732c70(&(*(uint *)(gen_frame + 0x0)));
        } while ((*(uint *)(gen_frame + 0x0)) != *(uint *)((int)this + 0x1c4));
      }
    }
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  }
  F_0074df70((undefined *)((int)this + 0x338),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x33c) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x33c) + 4))) = *(int *)((int)this + 0x33c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x33c) = *(undefined4 *)((int)this + 0x33c);
  uVar3 = *(uint *)((int)this + 0x33c);
  *(uint *)(uVar3 + 8) = uVar3;
  *(undefined4 *)((int)this + 0x340) = 0;
  return uVar3;
}

/* ref: FUN_006ea2d0 */
uint F_006ea2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ea2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_3;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x18)),&REFG(undefined, 0x10b6dbc),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_1,((undefined1 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  if (1 < (uint)(((*(int *)(gen_frame + 0x8)) - (*(int *)(gen_frame + 0x4))) / 0x54)) {
    uVar1 = F_0042a970((*(int *)(gen_frame + 0x4)) + 0x54);
    if (uVar1 == 5) {
      uVar1 = F_0042a990((*(int *)(gen_frame + 0x4)) + 0x54);
      uVar1 = F_00c4c74c(uVar1);
      if (uVar1 != 0) {
        (*(undefined4 *)(gen_frame + 0x6d)) = 0;
        (*(undefined4 *)(gen_frame + 0x71)) = 0;
        (*(undefined1 *)(gen_frame + 0x75)) = 0;
        (*(undefined1 *)(gen_frame + 0x6c)) = 0;
        F_00c472af(&(*(undefined1 *)(gen_frame + 0x6c)),10,"%03u/",(int)uVar1 / 100);
        F_0042e430(param_2,&(*(undefined1 *)(gen_frame + 0x6c)));
        goto LAB_006ea3b4;
      }
    }
  }
  F_0042aca0(param_2);
LAB_006ea3b4: ;
  F_0042e360(param_2,param_1);
  if ((*(int *)(gen_frame + 0x4)) == (*(int *)(gen_frame + 0x8))) {
    F_0042aca0((*(undefined * PTR32 *)(gen_frame + 0x14)));
  }
  else {
    F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x4)));
  }
  uVar1 = F_004876d0(&(*(int *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: FUN_006ea3f0 */
uint F_006ea3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ea3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1c10,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_006e5000(this,param_1 & 0xffff | 0x40000);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::ShopEventHandler::vf39 */
uint F_006ea420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  this[0x1bf9] = (undefined1)0x0;
  F_006d1820(this,1);
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf1 */
uint F_006ea490(unsigned int gen_a0)
{
  GEN_ENTER(0x6ea490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x1323734),REFG(undefined * PTR32, 0x1323730));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf34 */
uint F_006ea500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  uVar2 = F_006e51b0(this);
  return uVar2;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf39 */
uint F_006ea530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = REFG(undefined4, 0x13241d4);
  if ((piVar3 != (int *)0x0) && (REFG(undefined4, 0x13241d0) == this)) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,uVar2,0);
    REFG(undefined4, 0x13241d0) = (undefined *)0x0;
  }
  if (*(int *)(this + 0x1dc) != 0) {
    piVar3 = *(int * PTR32 *)(this + 0x1d8);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*(int *)(this + 0x1dc));
    }
    puVar1 = *(undefined4 * PTR32 *)(this + 0x1dc);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x1dc) = 0;
    }
  }
  if (*(int *)(this + 0x1e4) != 0) {
    piVar3 = *(int * PTR32 *)(this + 0x1e0);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*(int *)(this + 0x1e4));
    }
    puVar1 = *(undefined4 * PTR32 *)(this + 0x1e4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x1e4) = 0;
    }
  }
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar4 = param_3 - 0xc;
    if (uVar4 == 0) {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::FishingEventHandler::vf39 */
uint F_006ea630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  *(undefined4 *)(this + 0xfc) = 0;
  this[0x109] = (undefined1)0x0;
  if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\x06')) {
    F_00aaa5b0(REFG(void * PTR32, 0x1379694),1);
  }
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,0);
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1b,0);
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf39 */
uint F_006ea6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_006d1bb0(1);
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_006ea730 */
uint F_006ea730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ea730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined2 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  puVar1 = *(undefined2 * PTR32 *)(*param_1 + 4);
  *(undefined2 *)((int)this + 0x360) = puVar1[8];
  *(undefined2 *)((int)this + 0x362) = puVar1[10];
  *(undefined1 *)((int)this + 0x364) = *(undefined1 *)(puVar1 + 0xb);
  *(undefined2 *)((int)this + 0x366) = *puVar1;
  *(undefined2 *)((int)this + 0x368) = puVar1[2];
  *(undefined2 *)((int)this + 0x36a) = puVar1[4];
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x238);
  *(undefined2 *)((int)this + 0x36c) = puVar1[6];
  *(uint *)((int)this + 0x370) = (uint)(ushort)puVar1[9];
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x238) = 0;
  }
  *(undefined4 *)((int)this + 0x234) = 0;
  if (*(char *)((int)this + 0x24c) != '\0') {
    uVar3 = F_0042a990((int)this + 0x118);
    F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132373c),uVar3);
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    F_0042e430((undefined *)((int)this + 0x7c),uVar3);
    F_006e8f60(this,0,0xffffffff);
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)uVar4;
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x240))(this,1,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_006ea850 */
uint F_006ea850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ea850u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar3 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(int * PTR32 *)&gen_args[1]) == '\0') {
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = REFG(undefined * PTR32, 0x1323738);
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar3;
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar5 = (*(uint *)(gen_frame + 0x4)) + 2;
      F_00a01c40(this_00,iVar5,"className",(*(int * PTR32 *)&gen_args[1]));
      F_00a01c80(this_00,iVar5,"referenceCount",0);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240)));
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar6 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0x60);
          uVar3 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0xc);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732eb0(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))));
      }
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar6 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0xc);
          uVar3 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0x10);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732c70(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[1]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x8)));
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      }
      goto LAB_006eaabb;
    }
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  else {
    uVar4 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 != 0) {
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
          uVar4 = F_0042a990((int)(*(int * PTR32 *)&gen_args[1]) + 0x10);
          F_00a01c80(this_00,uVar3 + 1,uVar4,uVar6);
          F_00732c70(&(*(int * PTR32 *)&gen_args[1]));
        } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  F_00b9a760(uVar6,0xfffffffe);
LAB_006eaabb: ;
  F_0074df70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240)));
  *(undefined4 *)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240)));
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240)));
  *(uint *)(uVar3 + 8) = uVar3;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244))) = 0;
  return uVar3;
}

/* ref: FUN_006eab00 */
uint F_006eab00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eab00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort * local_8;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(ushort * PTR32 *)&gen_args[1]) == '\0') {
    (*(ushort * PTR32 *)&gen_args[1]) = (ushort *)uVar2;
    uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    puVar1 = REFG(undefined * PTR32, 0x1323740);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar2);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar5 = (int)(*(ushort * PTR32 *)&gen_args[1]) + 2;
      F_00a01c40(this_00,iVar5,"className",uVar2);
      F_00a01c80(this_00,iVar5,"referenceCount",0);
      (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)))));
      if ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(ushort * PTR32 *)&gen_args[1]) + 0x60)));
          uVar3 = F_0042a990((int)(*(ushort * PTR32 *)&gen_args[1]) + 0xc);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732eb0(&(*(ushort * PTR32 *)&gen_args[1]));
        } while ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))));
      }
      local_8 = *((ushort * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244)));
      if (local_8 != *((ushort * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248)))) {
        (*(ushort * PTR32 *)&gen_args[1]) = local_8 + 0x10;
        do {
          uVar3 = F_0042a990((*(ushort * PTR32 *)&gen_args[1]));
          if (uVar3 != 0) {
            uVar4 = (uint)*local_8;
            uVar3 = F_0042a990((*(ushort * PTR32 *)&gen_args[1]));
            F_00a01c80(this_00,iVar5,uVar3,uVar4);
          }
          (*(ushort * PTR32 *)&gen_args[1]) = (*(ushort * PTR32 *)&gen_args[1]) + 0x3a;
          local_8 = local_8 + 0x3a;
        } while (local_8 != *((ushort * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248))));
      }
      (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(ushort * PTR32 *)&gen_args[1]) + 0xc)));
          uVar3 = F_0042a990((int)(*(ushort * PTR32 *)&gen_args[1]) + 0x10);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732c70(&(*(ushort * PTR32 *)&gen_args[1]));
        } while ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar2);
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      if (puVar1 == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,puVar1);
      }
      goto LAB_006eadc7;
    }
LAB_006ead7b: ;
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  else {
    uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar3 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar3 == 0) goto LAB_006ead7b;
    (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar6 = *((undefined4 *)GEN_TOP(((int)(*(ushort * PTR32 *)&gen_args[1]) + 0xc)));
        uVar3 = F_0042a990((int)(*(ushort * PTR32 *)&gen_args[1]) + 0x10);
        F_00a01c80(this_00,uVar2 + 1,uVar3,uVar6);
        F_00732c70(&(*(ushort * PTR32 *)&gen_args[1]));
      } while ((*(ushort * PTR32 *)&gen_args[1]) != (ushort *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  F_00b9a760(uVar6,0xfffffffe);
LAB_006eadc7: ;
  F_0074df70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x234))),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)));
  *(undefined4 *)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)));
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238)));
  *(uint *)(uVar2 + 8) = uVar2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))) = 0;
  return uVar2;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf39 */
uint F_006eae10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6eae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  this[0x1a0] = (undefined1)0x0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 99;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar1 = (int *)F_00763050(uVar2,uVar3);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1324210) = 0;
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  if (*(int *)(this + 8) == 0x1b000c) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this);
  }
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar2 = param_3 - 0xc;
    if (uVar2 == 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_006eaed0 */
uint F_006eaed0(unsigned int gen_a0)
{
  GEN_ENTER(0x6eaed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint * puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  *(undefined * PTR32 *)&REFG(undefined, 0x1324210) = this;
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar12 = 99;
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
  pvVar5 = (undefined *)F_00763050(uVar4,uVar12);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar5;
  uVar4 = F_0042a990((int)this + 0x144);
  F_0077a530(pvVar5,0,uVar4);
  uVar4 = *(uint *)((int)this + 0x198);
  if ((uVar4 == 0) || (uVar4 == 1)) {
    F_0082b230(pvVar5,(*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x1b0,0);
    iVar10 = *(int *)((int)this + 0xf8);
    iVar9 = 0;
    if (iVar10 != *(int *)((int)this + 0xfc)) {
      do {
        F_007de390((*(undefined * PTR32 *)(gen_frame + 0x18)),iVar9,*(undefined4 *)(iVar10 + 0xe4),(uint)*(ushort *)(iVar10 + 0xd8),
                     *(undefined4 *)(iVar10 + 0xdc),(uint)*(byte *)(iVar10 + 0xe8));
        iVar10 = iVar10 + 0x1b0;
        iVar9 = iVar9 + 1;
      } while (iVar10 != *(int *)((int)this + 0xfc));
    }
    puVar1 = *(uint * PTR32 *)((int)this + 0x11c);
    uVar8 = *(int *)((int)this + 0x120) - (int)((int)(uintptr_t)puVar1) >> 2;
    ((byte *)(gen_frame + 0x0))[0x10] = (byte)uVar8;
    uVar8 = uVar8 & 0xff;
    uVar4 = 0;
    puVar11 = puVar1;
    if (uVar8 != 0) {
      do {
        ((byte *)(gen_frame + 0x30))[(int)(uVar4)] = (byte)*puVar11;
        uVar4 = uVar4 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar4 < uVar8);
    }
    iVar10 = *(int *)((int)this + 0x198);
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = **(undefined4 * PTR32 *)((int)this + 300);
    if (iVar10 == 0) {
      ((byte *)(gen_frame + 0x30))[0] = 1;
      ((byte *)(gen_frame + 0x30))[1] = 2;
      ((byte *)(gen_frame + 0x30))[2] = 3;
      ((byte *)(gen_frame + 0x30))[3] = 4;
      uVar12 = 1;
      ((byte *)(gen_frame + 0x0))[0x10] = 4;
      uVar4 = 0;
      do {
        if ((uint)((byte *)(gen_frame + 0x30))[(int)(uVar4)] == *puVar1) {
          (*(uint *)(gen_frame + 0x1c)) = uVar4;
          break;
        }
        bVar2 = (char)uVar4 + 1;
        uVar4 = (uint)bVar2;
      } while (bVar2 < 4);
    }
    else {
      uVar8 = F_00a41080(&REFG(undefined, 0x14a4230),0x165c,0,1,1);
      uVar6 = F_00a41080(&REFG(undefined, 0x14a4230),0x165d,0,1,1);
      uVar4 = F_00a41080(&REFG(undefined, 0x14a4230),0x165e,0,1,1);
      (*(uint *)(gen_frame + 0x28)) = uVar4;
      uVar7 = F_00a41080(&REFG(undefined, 0x14a4230),0x165f,0,1,1);
      uVar4 = 0;
      if (uVar8 != 0) {
        (*(uint *)(gen_frame + 0x1c)) = 0;
        uVar4 = uVar8;
      }
      if (uVar4 < uVar6) {
        (*(uint *)(gen_frame + 0x1c)) = 1;
        uVar4 = uVar6;
      }
      if (uVar4 < (*(uint *)(gen_frame + 0x28))) {
        (*(uint *)(gen_frame + 0x1c)) = 2;
        uVar4 = (*(uint *)(gen_frame + 0x28));
      }
      if (uVar4 < uVar7) {
        (*(uint *)(gen_frame + 0x1c)) = 3;
      }
      uVar12 = 2;
      (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 300) + (*(uint *)(gen_frame + 0x1c)) * 4)));
    }
    uVar4 = F_00751aa0((undefined *)((int)this + 0x10c),&(*(undefined4 *)(gen_frame + 0x14)));
    uVar13 = *(undefined4 *)(uVar4 + 4);
    uVar4 = F_00751aa0((undefined *)((int)this + 0x10c),&(*(undefined4 *)(gen_frame + 0x14)));
    uVar4 = F_0042a990(uVar4 + 8);
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x18));
    F_0077a550((*(undefined * PTR32 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x14)),uVar4,uVar13);
    uVar4 = F_008779e0(pvVar5,&REFG(undefined * PTR32, 0x132420c),uVar12,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),((byte *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x1c)));
  }
  else if (uVar4 == 2) {
    F_0082b230(pvVar5,(*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x1b0,1);
    iVar10 = *(int *)((int)this + 0xf8);
    iVar9 = 0;
    if (iVar10 != *(int *)((int)this + 0xfc)) {
      do {
        F_007de390((*(undefined * PTR32 *)(gen_frame + 0x18)),iVar9,*(undefined4 *)(iVar10 + 0xe4),(uint)*(ushort *)(iVar10 + 0xd8),
                     1,0);
        F_0077a570((*(undefined * PTR32 *)(gen_frame + 0x18)),0,iVar9,*(undefined4 *)(iVar10 + 0xec),
                     (uint)*(ushort *)(iVar10 + 0xdc));
        if (*(int *)(iVar10 + 0xf0) != 0) {
          F_0077a570((*(undefined * PTR32 *)(gen_frame + 0x18)),1,iVar9,*(int *)(iVar10 + 0xf0),(uint)*(ushort *)(iVar10 + 0xe0));
        }
        iVar10 = iVar10 + 0x1b0;
        iVar9 = iVar9 + 1;
      } while (iVar10 != *(int *)((int)this + 0xfc));
    }
    uVar4 = F_00877b70((*(undefined * PTR32 *)(gen_frame + 0x18)),&REFG(undefined * PTR32, 0x132420c));
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_006eb210 */
uint F_006eb210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eb210u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 99;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this_00 = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) + (*(int *)&gen_args[1]) * 4)));
    uVar2 = F_00751aa0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(int *)&gen_args[1]));
    uVar3 = *(undefined4 *)(uVar2 + 4);
    uVar2 = F_00751aa0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(int *)&gen_args[1]));
    uVar2 = F_0042a990(uVar2 + 8);
    uVar2 = F_0077a550(this_00,(*(int *)&gen_args[1]),uVar2,uVar3);
  }
  return uVar2;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf51 */
unsigned int F_006eb290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6eb290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * pSVar1;
  int * piVar2;
  
  if (*(int *)(this + 8) == 0x1b000c) {
    if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x24))) == 0) {
      pSVar1 = (undefined *)0x0;
    }
    else {
      piVar2 = (int *)F_007512b0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x14))));
      pSVar1 = (undefined *)*piVar2;
    }
    if (pSVar1 != this) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this);
    }
  }
  return 0;
}

/* ref: FUN_006eb2d0 */
uint F_006eb2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6eb2d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = (*(uint *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((*(uint *)&gen_args[1]) >> 0x10);
  if ((*(int *)&gen_args[2]) != 0) {
    bVar1 = F_00ae2460((*(int *)&gen_args[2]));
    if (bVar1 != 0) {
      return 0;
    }
  }
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff;
  piVar2 = (int *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]),uVar3);
  if (piVar2 == (int *)0x0) {
    F_00748f10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),&(*(uint *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    if ((*(uint *)&gen_args[1]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)))) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)((*(uint *)&gen_args[1]) + 0x10))(uVar3)));
      if (piVar2 != (int *)0x0) {
        bVar1 = F_006e54c0((*(undefined * PTR32 *)&gen_args[0]),uVar3,piVar2);
        if (bVar1 == 0) {
          ((code *)*(gen_code32 *)((*(uint *)&gen_args[1]) + 0x14))(piVar2);
        }
        (*(uint *)&gen_args[1]) = CONCAT13(1,(undefined3)(*(uint *)&gen_args[1]));
        if (uVar3 < 0x140002) {
          if (uVar3 == 0x140001) {
            *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = piVar2;
          }
          else if (uVar3 == 0xa0001) {
            *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = piVar2;
          }
          else if (uVar3 == 0xe0000) {
            *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = piVar2;
          }
        }
        else if (uVar3 == 0x150001) {
          *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = piVar2;
        }
        goto LAB_006eb383;
      }
    }
    return 0;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  if ((char)uVar3 == '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    if ((char)uVar3 == '\0') {
      (*(uint *)&gen_args[1]) = CONCAT13(1,(undefined3)(*(uint *)&gen_args[1]));
    }
  }
LAB_006eb383: ;
  ((code *)*(gen_code32 *)(*piVar2 + 0x234))(piVar2,(*(int *)&gen_args[2]));
  if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  return (uint)piVar2;
}

/* ref: Client::Game::Event::LeveDirector::vf1 */
uint F_006eb3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6eb3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf1 */
uint F_006eb460(unsigned int gen_a0)
{
  GEN_ENTER(0x6eb460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_006d27e0(this,(uint)*(ushort *)(this + 0x310));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf158 */
unsigned int F_006eb510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6eb510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  if (((*(int *)(this + 0x50c) != 0) && (param_2 < 1)) && ((param_2 < 0 || (param_1 < 10)))) {
    uVar1 = F_00ab3300(0x28);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(uVar1 + 4);
    }
    uVar1 = F_006e5f80(REFG(void * PTR32, 0x1488344),this,uVar2,0);
    *(uint *)(this + 0x508) = uVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf1 */
uint F_006eb560(unsigned int gen_a0)
{
  GEN_ENTER(0x6eb560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_006d27e0(this,(uint)*(ushort *)(this + 0x310));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf1 */
uint F_006eb5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6eb5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132374c),REFG(undefined * PTR32, 0x1323748));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_006d27e0(this,(uint)*(ushort *)(this + 0x310));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_006eb660 */
uint F_006eb660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6eb660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  char * pcVar1;
  int iVar2;
  char cVar3;
  char * pcVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint * puVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  puVar7 = *(uint * PTR32 *)(*param_1 + 4);
  F_0042e430((undefined *)((int)this + 0x1dc),(int)puVar7 + (puVar7[0x50] & 0xffffff) + 0x140);
  F_0042ccf0((undefined *)((int)this + 0x118),(undefined *)((int)this + 0x1dc));
  *(short *)((int)this + 0x1d8) = (short)puVar7[0x51];
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
  (*(int *)(gen_frame + 0x28)) = 0x28;
  do {
    pcVar4 = ((char *)GEN_TOP(((*puVar7 & 0xffffff) + (int)puVar7)));
    (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar4;
    pcVar1 = pcVar4 + 1;
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    if (pcVar4 != pcVar1) {
      (*(uint *)(gen_frame + 0x18)) = puVar7[1];
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
      puVar5 = (undefined4 *)F_004296a0(0x68,0,800);
      *puVar5 = *(undefined4 *)((int)this + 0x23c);
      puVar5[1] = *(undefined4 *)((int)this + 0x23c);
      puVar5[2] = *(undefined4 *)((int)this + 0x23c);
      *(undefined2 *)(puVar5 + 0x19) = 0;
      F_0042cc20(((undefined1 *)(gen_frame + 0x80)),(*(char * PTR32 *)(gen_frame + 0x20)),REFG(undefined4, 0x108cc50));
      (*(uint *)(gen_frame + 0xd4)) = (*(uint *)(gen_frame + 0x18));
      if (puVar5 + 3 != (undefined4 *)0x0) {
        F_0042cbc0(puVar5 + 3,((undefined1 *)(gen_frame + 0x80)));
        puVar5[0x18] = (*(uint *)(gen_frame + 0xd4));
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x80)));
      F_007502b0((undefined *)((int)this + 0x238),((undefined1 *)(gen_frame + 0xc)),puVar5,0);
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x24));
    }
    puVar7 = puVar7 + 2;
    iVar2 = (*(int *)(gen_frame + 0x28)) + -1;
    (*(int *)(gen_frame + 0x28)) = iVar2;
    (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
  } while (iVar2 != 0);
  uVar6 = F_0042a990((int)this + 0x1dc);
  F_0042ce40(((undefined1 *)(gen_frame + 0x2c)),"%s/%s",REFG(undefined * PTR32, 0x1323774),uVar6);
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x2c)));
  F_0042e430((undefined *)((int)this + 0x7c),uVar6);
  F_006e8f60(this,0,0xffffffff);
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x234);
  if (puVar5 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    *(undefined4 *)((int)this + 0x234) = 0;
  }
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)uVar8;
}

/* ref: FUN_006eb820 */
uint F_006eb820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6eb820u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar3 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(int * PTR32 *)&gen_args[1]) == '\0') {
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = REFG(undefined * PTR32, 0x1323770);
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar3;
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar5 = (*(uint *)(gen_frame + 0x4)) + 2;
      F_00a01c40(this_00,iVar5,"className",(*(int * PTR32 *)&gen_args[1]));
      F_00a01c80(this_00,iVar5,"referenceCount",0);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)));
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar6 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0x60);
          uVar3 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0xc);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732eb0(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))));
      }
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x4)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar6 = *(undefined4 *)((*(uint *)(gen_frame + 0x4)) + 0xc);
          uVar3 = F_0042a990((*(uint *)(gen_frame + 0x4)) + 0x10);
          F_00a01c80(this_00,iVar5,uVar3,uVar6);
          F_00732c70(&(*(uint *)(gen_frame + 0x4)));
        } while ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[1]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      }
      else {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),(*(undefined * PTR32 *)(gen_frame + 0x8)));
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00a01ad0(this_00,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      }
      goto LAB_006eba8b;
    }
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  else {
    uVar4 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar4 != 0) {
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
      if ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
        do {
          uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
          uVar4 = F_0042a990((int)(*(int * PTR32 *)&gen_args[1]) + 0x10);
          F_00a01c80(this_00,uVar3 + 1,uVar4,uVar6);
          F_00732c70(&(*(int * PTR32 *)&gen_args[1]));
        } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
    }
    uVar6 = *(undefined4 *)((int)this_00 + 8);
  }
  F_00b9a760(uVar6,0xfffffffe);
LAB_006eba8b: ;
  F_0074df70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)));
  *(undefined4 *)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)));
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23c)));
  *(uint *)(uVar3 + 8) = uVar3;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) = 0;
  return uVar3;
}

/* ref: FUN_006ebad0 */
byte F_006ebad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ebad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006e6390(REFG(void * PTR32, 0x1488344),param_2,this,param_1);
  return bVar1;
}

/* ref: FUN_006ebaf0 */
uint F_006ebaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ebaf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  uVar1 = *puVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar3;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  iVar6 = 3;
  if (2 < (int)uVar3) {
    do {
      bVar2 = F_00a01f20(((byte *)(gen_frame + 0x8)),iVar6);
      if (bVar2 != 0) break;
      uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar6);
      F_006e6390(REFG(void * PTR32, 0x1488344),uVar5,uVar1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar3);
  }
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf1 */
uint F_006ebb90(unsigned int gen_a0)
{
  GEN_ENTER(0x6ebb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x132377c),REFG(undefined * PTR32, 0x1323778));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf39 */
uint F_006ebc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ebc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_00a036e0(*(undefined * PTR32 *)(this + 0xf8));
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
    uVar1 = F_00ab5b10(&REFG(undefined4, 0x14bcc80),2);
    return uVar1;
  }
  uVar1 = param_3 - 0xc;
  if (uVar1 == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
    uVar1 = F_00ab5b10(&REFG(undefined4, 0x14bcc80),2);
    return uVar1;
  }
  if ((9 < param_3) && (param_3 < 0x1d)) {
    uVar1 = F_00ab5b10(&REFG(undefined4, 0x14bcc80),2);
  }
  return uVar1;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf1 */
uint F_006ebca0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ebca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",REFG(undefined * PTR32, 0x1323784),REFG(undefined * PTR32, 0x1323780));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_0042e430(this + 0x7c,uVar1);
  F_006e8f60(this,0,0xffffffff);
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::Director::vf39 */
uint F_006ebd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ebd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if ((char)param_1 != '\f') {
    if ((char)param_1 == '\x0e') {
      F_00a69780(&REFG(undefined4, 0x14b119c));
      goto LAB_006ebd33;
    }
    if ((char)param_1 != '\x11') goto LAB_006ebd33;
  }
  F_00a69770(&REFG(undefined4, 0x14b119c));
LAB_006ebd33: ;
  F_00a036e0(*(undefined * PTR32 *)(this + 0xf8));
  F_006e6ba0(*(undefined * PTR32 *)(this + 4),this,1);
  this[0x44] = (undefined1)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (undefined1)0x0;
  if (param_3 == 0xb) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x522,0,0);
  }
  else {
    uVar1 = param_3 - 0xc;
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,0x521,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_006ebda0 */
uint F_006ebda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6ebda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  bool bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_006ea2d0(param_1,param_3,param_4);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10b7ff8),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_3,((undefined1 *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0xc)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
  F_0042aca0(param_3);
  bVar1 = 1 < (byte)param_2;
  if (bVar1) {
    F_00c472af(((undefined1 *)(gen_frame + 0x70)),8,&REFG(undefined, 0x10b7ffc),(uint)(byte)param_2);
  }
  if (((*(int *)(gen_frame + 0x10)) - (*(int *)(gen_frame + 0xc))) / 0x54 == 2) {
    F_0042e360(param_3,(*(int *)(gen_frame + 0xc)));
    F_0042e370(param_3,(*(undefined * PTR32 (*)[1])REFP(0x10b8000)));
    if (bVar1) {
      F_0042e370(param_3,((undefined1 *)(gen_frame + 0x70)));
    }
    F_0042e370(param_3,&REFG(undefined, 0x10b8004));
    F_0042e360(param_3,(*(int *)(gen_frame + 0xc)) + 0x54);
  }
  F_0042e370(param_4,(*(undefined * PTR32 (*)[1])REFP(0x10b8008)));
  if (bVar1) {
    F_0042e370(param_4,((undefined1 *)(gen_frame + 0x70)));
  }
  uVar2 = F_004876d0(&(*(int *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: FUN_006ebec0 */
uint F_006ebec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ebec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
  F_0042b630(((undefined1 *)(gen_frame + 0xc)));
  F_006ea2d0((int)this + 0x410,((undefined1 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
  F_0042ce40(((undefined1 *)(gen_frame + 0x60)),"%s/%s",REFG(undefined * PTR32, 0x132372c),uVar1);
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x60)));
  F_0042e430((undefined *)((int)this + 0x7c),uVar1);
  F_006e8f60(this,0,0xffffffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar2;
}

/* ref: FUN_006ebf80 */
uint F_006ebf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ebf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(ushort *)((int)this + 0x20c) = (ushort)param_1;
  F_007440c0((undefined *)((int)this + 0x6fc));
  F_007443b0((undefined *)((int)this + 0x70c));
  if (*(int *)((int)this + 0x210) != 0) {
    F_006e5450(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x210) + 8))),0);
    *(undefined4 *)((int)this + 0x210) = 0;
  }
  uVar1 = F_00ab1c90((uint)(ushort)param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 8) != 0)) {
    uVar1 = F_006eb2d0(this,*(int *)(uVar1 + 8),0);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x210) = uVar1;
    }
  }
  uVar1 = F_006e33b0(this);
  if (*(int *)((int)this + 0x238) != 0) {
    *(undefined4 *)((int)this + 0x238) = 0;
    *(undefined4 *)((int)this + 0x240) = 0xe0000000;
    *(undefined4 *)((int)this + 0x244) = 0;
    *(undefined1 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(undefined1 *)((int)this + 0x250) = 0;
    *(undefined4 *)((int)this + 0x254) = 0;
    *(undefined4 *)((int)this + 600) = 0;
    *(undefined1 *)((int)this + 0x25c) = 0;
  }
  return uVar1;
}

/* ref: FUN_006ec050 */
uint F_006ec050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ec050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006eb2d0(this,param_1,param_2);
  return uVar1;
}

