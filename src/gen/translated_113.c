#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a7e370 */
unsigned int F_00a7e370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (*(char *)((int)this + 0x3a65) != '\0') {
    return 0;
  }
  if ((char)param_1 == '\0') {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    uVar3 = 3;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
    this_00 = (undefined *)F_00763050(uVar2,uVar3);
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar2 = F_0076ecb0(this_00,4);
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  *(undefined1 *)((int)this + 0x3a65) = 1;
  if (*(int *)((int)this + 0x39fc) == 1) {
    *(undefined4 *)((int)this + 0x39b4) = 0;
    F_00a74270(this);
    return 0;
  }
  if (*(int *)((int)this + 0x39fc) != 2) {
    *(undefined1 *)((int)this + 0x3a65) = 0;
    F_00a67ca0(this,0xd);
    return 0;
  }
  F_00a7cbc0(this);
  return 0;
}

/* ref: FUN_00a7e410 */
unsigned int F_00a7e410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa7e410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(int *)((int)this + 0x3a9c) != 0) && (*(int *)((int)this + 0x39fc) == param_1)) &&
     (*(ushort *)((int)this + 0x39f8) == (ushort)param_2)) {
    F_00a7e0c0(this,*(int *)((int)this + 0x3a9c),param_1,(uint)(ushort)param_2);
  }
  return 0;
}

/* ref: FUN_00a7e450 */
uint F_00a7e450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  puVar3 = param_1;
  puVar4 = (undefined4 *)((int)this + 1);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_1,REFG(undefined4, 0x108cc50));
  F_00a9c0d0(0,uVar1);
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar5;
}

/* ref: FUN_00a7e4b0 */
uint F_00a7e4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e4b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x61))) = (byte)(*(uint *)&gen_args[1]);
  (*(uint *)&gen_args[1]) = (uint)(byte)(*(uint *)&gen_args[1]);
  uVar1 = F_00a9c160(3,&(*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00a7e4e0 */
uint F_00a7e4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e4e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = (byte)(*(uint *)&gen_args[1]);
  (*(uint *)&gen_args[1]) = (uint)(byte)(*(uint *)&gen_args[1]);
  uVar1 = F_00a9c160(0x43,&(*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00a7e510 */
unsigned int F_00a7e510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa7e510u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short * psVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int * piVar6;
  
  if ((*(int *)&gen_args[1]) < 0x1d) {
    uVar5 = F_00ab21a0((*(int *)&gen_args[1]));
    if (((uVar5 != 0) && (cVar2 = *(char *)(uVar5 + 0x43), -1 < cVar2)) && (cVar2 < '\x13')) {
      psVar1 = ((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + cVar2 * 2 + 0x66)));
      sVar4 = (short)(*(uint *)&gen_args[2]);
      sVar3 = *psVar1;
      *psVar1 = (short)(*(uint *)&gen_args[2]);
      (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffff;
      F_00a9c160(0x44,&(*(uint *)&gen_args[2]));
      if (sVar3 != sVar4) {
        piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        if (piVar6 != (int *)0x0) {
          (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[1]);
          (*(short *)(gen_frame + 0x8)) = sVar4;
          ((code *)*(gen_code32 *)(*piVar6 + 0x7c))(piVar6,3,0,&(*(int *)(gen_frame + 0x4)));
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00a7e5a0 */
uint F_00a7e5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e5a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  ushort uVar8;
  uint uVar9;
  
  uVar9 = (*(uint *)&gen_args[1]);
  uVar8 = (ushort)(*(uint *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x8)) = REFG(int, 0x1379694);
  if ((ushort)(*(uint *)&gen_args[1]) == 0) {
    if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) != 0) {
      uVar9 = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100)));
      if (((uVar9 < 0x1d) && (uVar5 = F_00ab21a0(uVar9), uVar5 != 0)) &&
         ((uVar9 = F_00ab21a0(uVar9), uVar9 != 0 &&
          ((cVar1 = *(char *)(uVar9 + 0x43), -1 < cVar1 && (cVar1 < '\x13')))))) {
        uVar4 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + cVar1 * 2 + 0x66)));
      }
      else {
        uVar4 = 0;
      }
      if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) < uVar4) {
        if ((*(uint *)(gen_frame + 0x8)) != 0) {
          F_00a7d290(0x26b,(*(uint *)(gen_frame + 0x8)),0,0,0,REFG(float, 0x10916ec));
        }
        F_0043f8b0(0x30);
      }
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xda))) = 0;
  }
  else if (((((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xda))) == '\0') &&
             (uVar5 = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))), uVar5 < 0x1d)) &&
            (uVar6 = F_00ab21a0(uVar5), uVar6 != 0)) &&
           ((uVar5 = F_00ab21a0(uVar5), uVar5 != 0 &&
            (cVar1 = *(char *)(uVar5 + 0x43), -1 < cVar1)))) &&
          ((cVar1 < '\x13' && (uVar8 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + cVar1 * 2 + 0x66))))))) {
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x5d,0,0);
    if ((*(uint *)(gen_frame + 0x8)) != 0) {
      F_00a7d290(0x26a,(*(uint *)(gen_frame + 0x8)),uVar9 & 0xffff,0,0,REFG(float, 0x10916ec));
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xda))) = 1;
  }
  uVar9 = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100)));
  (*(uint *)(gen_frame + 0x8)) = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8)));
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = uVar8;
  if ((uVar9 < 0x1d) && (uVar5 = F_00ab21a0(uVar9), uVar5 != 0)) {
    cVar1 = *(char *)(uVar5 + 0x3e);
    uVar9 = F_00ab21a0(uVar9);
    uVar8 = (ushort)(*(uint *)&gen_args[1]);
    if ((uVar9 != 0) && ((cVar2 = *(char *)(uVar9 + 0x43), -1 < cVar2 && (cVar2 < '\x13')))) {
      uVar4 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + cVar2 * 2 + 0x66)));
      if ((cVar1 == *(char *)(uVar9 + 0x3e)) &&
         ((uVar3 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))), uVar3 != 0 && (uVar3 < uVar4)))) {
        uVar4 = uVar3;
      }
      goto LAB_00a7e73e;
    }
  }
  uVar4 = 0;
LAB_00a7e73e: ;
  (*(uint *)&gen_args[1]) = (uint)uVar4;
  uVar9 = F_00a9c160(0x47,&(*(uint *)&gen_args[1]));
  if ((ushort)(*(uint *)(gen_frame + 0x8)) != uVar8) {
    piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar9 = 0;
    if (piVar7 != (int *)0x0) {
      (*(uint *)(gen_frame + 0x4)) = (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100)));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = uVar8;
      (*(uint *)(gen_frame + 0x8)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 2)),uVar8);
      uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0x7c))(piVar7,3,0,&(*(uint *)(gen_frame + 0x4)));
    }
  }
  return uVar9;
}

/* ref: FUN_00a7e790 */
uint F_00a7e790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa7e790u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(byte)(*(uint *)&gen_args[1]);
  uVar2 = uVar1 - 1;
  if (uVar2 < 3) {
    *((undefined1 *)GEN_TOP((uVar1 + 0x22a + (int)(*(undefined * PTR32 *)&gen_args[0])))) = (undefined1)(*(uint *)&gen_args[2]);
    if ((byte)(*(uint *)&gen_args[1]) == *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22a)))) {
      (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[2]) & 0xff;
    }
    else {
      (*(uint *)&gen_args[1]) = 0;
    }
    uVar2 = F_00a9c160(uVar1 + 0x32,&(*(uint *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: FUN_00a7e7e0 */
uint F_00a7e7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e7e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdf))) = (byte)(*(uint *)&gen_args[1]);
  (*(uint *)&gen_args[1]) = (uint)(byte)(*(uint *)&gen_args[1]);
  uVar1 = F_00a9c160(0x45,&(*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00a7e810 */
uint F_00a7e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e810u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x62))) = (byte)(*(uint *)&gen_args[1]);
  (*(uint *)&gen_args[1]) = (uint)(byte)(*(uint *)&gen_args[1]);
  uVar1 = F_00a9c160(0x46,&(*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00a7e840 */
unsigned int F_00a7e840(unsigned int gen_a0)
{
  GEN_ENTER(0xa7e840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (REFG(int, 0x1379694) != 0) {
    F_00a75360(this);
    piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
    if ((*(uint *)&REFG(undefined, 0x14b4fb4) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14b4fb4) = *(uint *)&REFG(undefined, 0x14b4fb4) | 1;
      F_0042b630(&REFG(undefined, 0x14b4f60));
      F_00c47de6(((code *)REFP(0x107c630)));
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x1a8);
    for (uVar8 = *(uint *)((int)this + 0x1b4);
        uVar8 != *(int *)((int)this + 0x1b8) + *(int *)((int)this + 0x1b4); uVar8 = uVar8 + 1) {
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      uVar3 = uVar8;
      if (*(uint *)(iVar6 + 8) <= uVar8) {
        uVar3 = uVar8 - *(uint *)(iVar6 + 8);
      }
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 0x70))) == '\0') {
        F_0042aca0(&REFG(undefined, 0x14b4f60));
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
        if (piVar1 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar1;
        }
        uVar3 = uVar8;
        if (*(uint *)(iVar6 + 8) <= uVar8) {
          uVar3 = uVar8 - *(uint *)(iVar6 + 8);
        }
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        uVar7 = uVar8;
        if (*(uint *)(iVar5 + 8) <= uVar8) {
          uVar7 = uVar8 - *(uint *)(iVar5 + 8);
        }
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))
                          (piVar4,*((undefined4 *)GEN_TOP((*(int *)(iVar5 + 4) + uVar7 * 4))),
                           *((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 0x54,&REFG(undefined, 0x14b4f60));
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            if (piVar1 == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
            uVar3 = uVar8;
            if (*(uint *)(iVar6 + 8) <= uVar8) {
              uVar3 = uVar8 - *(uint *)(iVar6 + 8);
            }
            F_00a6eb20(this,1,&REFG(undefined, 0x14b4f60),
                         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 0x6c))));
            if (piVar1 == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
          }
          else {
            F_0042e430(&REFG(undefined, 0x14b4f60),&REFG(undefined, 0x10e7143));
            if (piVar1 == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
          }
          uVar3 = uVar8;
          if (*(uint *)(iVar6 + 8) <= uVar8) {
            uVar3 = uVar8 - *(uint *)(iVar6 + 8);
          }
          *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 0x70))) = 1;
        }
      }
    }
    iVar6 = *(int *)((int)this + 0x1b8);
    while (iVar6 != 0) {
      uVar8 = *(uint *)((int)this + 0x1b4);
      if (*(int * PTR32 *)((int)this + 0x1a8) == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = **(int * PTR32 *)((int)this + 0x1a8);
      }
      if (*(uint *)(iVar6 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar6 + 8);
      }
      if ((*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar8 * 4))) + 0x70))) == '\0') ||
         (*(int *)((int)this + 0x1b8) == 0)) break;
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1ac) + *(int *)((int)this + 0x1b4) * 4)));
      F_00492c50((undefined *)((int)this_00 + 0x54));
      F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
      *(undefined4 *)((int)this_00 + 0x54) = 0;
      F_0042c880(this_00);
      *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1b4) + 1;
      if (*(uint *)((int)this + 0x1b0) <= *(uint *)((int)this + 0x1b4)) {
        *(undefined4 *)((int)this + 0x1b4) = 0;
      }
      piVar2 = (int *)((int)this + 0x1b8);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *(undefined4 *)((int)this + 0x1b4) = 0;
      }
      iVar6 = *(int *)((int)this + 0x1b8);
    }
    if (((*(char *)((int)this + 0x1d4) != '\0') && (*(char *)((int)this + 0x1d5) != '\0')) &&
       (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x25d8) + 0x10))),
       uVar8 = ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2), (char)uVar8 == '\0')) {
      *(undefined1 *)((int)this + 0x1d5) = 0;
      F_00a737b0(this);
    }
  }
  return 0;
}

/* ref: FUN_00a7eac0 */
unsigned int F_00a7eac0(unsigned int gen_a0)
{
  GEN_ENTER(0xa7eac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (REFG(int, 0x1379694) != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if ((*(uint *)&REFG(undefined, 0x14b500c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14b500c) = *(uint *)&REFG(undefined, 0x14b500c) | 1;
      F_0042b630(&REFG(undefined, 0x14b4fb8));
      F_00c47de6(((code *)REFP(0x107c640)));
    }
    piVar1 = *(int * PTR32 *)((int)this + 0xfb4);
    for (uVar8 = *(uint *)((int)this + 0xfc0);
        uVar8 != *(int *)((int)this + 0xfc4) + *(int *)((int)this + 0xfc0); uVar8 = uVar8 + 1) {
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      uVar3 = uVar8;
      if (*(uint *)(iVar6 + 8) <= uVar8) {
        uVar3 = uVar8 - *(uint *)(iVar6 + 8);
      }
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 0x70))) == '\0') {
        F_0042aca0(&REFG(undefined, 0x14b4fb8));
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
        if (piVar1 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar1;
        }
        uVar3 = uVar8;
        if (*(uint *)(iVar6 + 8) <= uVar8) {
          uVar3 = uVar8 - *(uint *)(iVar6 + 8);
        }
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        uVar7 = uVar8;
        if (*(uint *)(iVar5 + 8) <= uVar8) {
          uVar7 = uVar8 - *(uint *)(iVar5 + 8);
        }
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))
                          (piVar4,*((undefined4 *)GEN_TOP((*(int *)(iVar5 + 4) + uVar7 * 4))),
                           *((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 0x54,&REFG(undefined, 0x14b4fb8));
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            if (piVar1 == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
            uVar3 = uVar8;
            if (*(uint *)(iVar6 + 8) <= uVar8) {
              uVar3 = uVar8 - *(uint *)(iVar6 + 8);
            }
            uVar10 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 0x6c)));
            uVar9 = 1;
          }
          else {
            F_0042e430(&REFG(undefined, 0x14b4fb8),&REFG(undefined, 0x10e715e));
            if (piVar1 == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
            uVar3 = uVar8;
            if (*(uint *)(iVar6 + 8) <= uVar8) {
              uVar3 = uVar8 - *(uint *)(iVar6 + 8);
            }
            uVar10 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 0x6c)));
            uVar9 = 0;
          }
          F_00a74ba0(this,uVar9,&REFG(undefined, 0x14b4fb8),uVar10);
          if (piVar1 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar1;
          }
          uVar3 = uVar8;
          if (*(uint *)(iVar6 + 8) <= uVar8) {
            uVar3 = uVar8 - *(uint *)(iVar6 + 8);
          }
          *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 0x70))) = 1;
        }
      }
    }
    iVar6 = *(int *)((int)this + 0xfc4);
    while (iVar6 != 0) {
      uVar8 = *(uint *)((int)this + 0xfc0);
      if (*(int * PTR32 *)((int)this + 0xfb4) == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = **(int * PTR32 *)((int)this + 0xfb4);
      }
      if (*(uint *)(iVar6 + 8) <= uVar8) {
        uVar8 = uVar8 - *(uint *)(iVar6 + 8);
      }
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar8 * 4))) + 0x70))) == '\0') {
        return 0;
      }
      if (*(int *)((int)this + 0xfc4) == 0) {
        return 0;
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xfb8) + *(int *)((int)this + 0xfc0) * 4)));
      F_00492c50((undefined *)((int)this_00 + 0x54));
      F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
      *(undefined4 *)((int)this_00 + 0x54) = 0;
      F_0042c880(this_00);
      *(int *)((int)this + 0xfc0) = *(int *)((int)this + 0xfc0) + 1;
      if (*(uint *)((int)this + 0xfbc) <= *(uint *)((int)this + 0xfc0)) {
        *(undefined4 *)((int)this + 0xfc0) = 0;
      }
      piVar2 = (int *)((int)this + 0xfc4);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *(undefined4 *)((int)this + 0xfc0) = 0;
      }
      iVar6 = *(int *)((int)this + 0xfc4);
    }
  }
  return 0;
}

/* ref: FUN_00a7ed30 */
uint F_00a7ed30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa7ed30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  uint uVar2;
  
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe9c))) = (*(uint *)&gen_args[1]);
  F_00a94f60(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
  if ((*(uint *)&gen_args[2]) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe9c)));
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0x13);
      return uVar2;
    }
  }
  else {
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[2]) & 0xffff;
    uVar2 = F_00a7d1e0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: FUN_00a7ed80 */
uint F_00a7ed80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7ed80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00c49908((int)this + 0x17,0x15,param_1);
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_1,REFG(undefined4, 0x108cc50));
  F_00a9c0d0(0x36,uVar1);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: FUN_00a7ede0 */
byte F_00a7ede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa7ede0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (*(byte *)this == (byte)param_1) {
    return 0;
  }
  uVar1 = F_005339c0(&REFG(undefined4, 0x1375bc0));
  if ((byte)param_1 != 0) {
    uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),uVar1);
    if (uVar2 != 0) {
      uVar2 = F_00a62220(uVar2);
      if ((char)uVar2 != '\0') {
        if (REFG(char, 0x14ab058) == '\0') {
          F_00a7ef20(&REFG(char, 0x14ab058),1,0,param_3);
        }
        F_005372b0(&REFG(undefined4, 0x1375bc0));
        goto LAB_00a7ee70;
      }
    }
    F_00a7d290(0x233,0,0,0,0,REFG(float, 0x10916ec));
    return 0;
  }
LAB_00a7ee70: ;
  *(byte *)this = (byte)param_1;
  if ((char)param_2 != '\0') {
    F_00a51200(1,(uint)(byte)param_1,uVar1,param_3 & 0xff,0);
  }
  return 1;
}

/* ref: FUN_00a7eea0 */
uint F_00a7eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  float10 fVar3;
  
  if (!(*(float *)&REFG(undefined, 0x1088114) < REFG(float, 0x14ab05c))) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x38);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      if ((char)param_1 == '\x01') {
        uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x54);
        fVar3 = (float10)*(int *)(uVar2 + 0x14);
        if (*(int *)(uVar2 + 0x14) < 0) {
          fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        *(float *)&REFG(undefined, 0x14ab060) = (float)fVar3;
        REFG(undefined4, 0x14ab064) = 1;
      }
      bVar1 = F_00a7ede0(this,param_1,1,1);
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00a7ef20 */
byte F_00a7ef20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa7ef20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * this_00;
  char cVar1;
  
  this_00 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  cVar1 = (char)param_1;
  if (*(char *)this != cVar1) {
    *(char *)this = cVar1;
    F_00aa6f20(this_00,param_1,param_3);
    if ((char)param_2 != '\0') {
      F_00a51200(0,param_1 & 0xff,param_3 & 0xff,0,0);
    }
    *(undefined4 *)((int)this + 4) = REFG(float, 0x1087f04);
    if ((cVar1 == '\0') && (REFG(char, 0x14ab068) == '\x01')) {
      F_005339c0(&REFG(undefined4, 0x1375bc0));
      REFG(char, 0x14ab068) = '\0';
    }
  }
  return 1;
}

/* ref: FUN_00a7efa0 */
byte F_00a7efa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7efa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  byte bVar1;
  char cVar2;
  
  if ((!GEN_ISNAN(*(float *)((int)this + 4)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)((int)this + 4) <= *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  cVar2 = (char)param_1;
  if (cVar2 == '\0') {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x36);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x36);
      return 0;
    }
  }
  else {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x35);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x35);
      return 0;
    }
  }
  this_00 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != (undefined *)0x0) && (*(char *)this != cVar2)) {
    *(char *)this = cVar2;
    F_00aa6f20(this_00,param_1,1);
    F_00a51200(0,param_1 & 0xff,1,0,0);
    *(undefined4 *)((int)this + 4) = REFG(float, 0x1087f04);
    if ((cVar2 == '\0') && (REFG(char, 0x14ab068) == '\x01')) {
      F_005339c0(&REFG(undefined4, 0x1375bc0));
      REFG(char, 0x14ab068) = '\0';
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  return 1;
}

/* ref: FUN_00a7f070 */
uint F_00a7f070(unsigned int gen_a0)
{
  GEN_ENTER(0xa7f070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte * pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  int * piVar12;
  uint uVar13;
  int iVar14;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  uVar4 = F_00a4ffd0();
  (*(byte *)(gen_frame + 0xb)) = 0;
  do {
    if (*(short *)(uVar4 + 0x13b8 + (uint)(*(byte *)(gen_frame + 0xb)) * 0x10) != 0) {
      F_00a8a4c0(((undefined1 *)(gen_frame + 0xc)));
      (*(uint *)(gen_frame + 0x60)) = (uint)*(ushort *)(uVar4 + (uint)(*(byte *)(gen_frame + 0xb)) * 0x10 + 0x13b8);
      iVar5 = *(int *)((int)this + 0xd8);
      puVar11 = (uint *)((int)this + 0xd8);
      uVar13 = 0;
      (*(undefined4 *)(gen_frame + 0x120)) = 1;
      if (iVar5 != *(int *)((int)this + 0xdc)) {
        do {
          if ((*(uint *)(gen_frame + 0x60)) < *(uint *)(iVar5 + 0x54)) {
            uVar9 = *puVar11;
            if (*(int *)((int)this + 0xdc) == *(int *)((int)this + 0xe0)) {
              iVar10 = (int)(*(int *)((int)this + 0xdc) - uVar9) / 0x11c;
              if (iVar10 == -1) goto LAB_00a7f3d1;
              uVar6 = (int)(*(int *)((int)this + 0xe0) - *puVar11) / 0x11c;
              uVar8 = iVar10 + 1;
              if (uVar6 < uVar8) {
                if (-(uVar6 >> 1) - 1 < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar8) {
                  uVar6 = uVar8;
                }
                F_00a92850(puVar11,uVar6);
              }
            }
            if (*(undefined * PTR32 *)((int)this + 0xdc) != (undefined *)0x0) {
              F_00a88c70(*(undefined * PTR32 *)((int)this + 0xdc),((undefined1 *)(gen_frame + 0xc)));
            }
            *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 0x11c;
            iVar10 = *(int *)((int)this + 0xdc);
            iVar14 = ((int)(iVar5 - uVar9) / 0x11c) * 0x11c + *puVar11;
            iVar5 = iVar10 + -0x11c;
            if ((iVar14 != iVar5) && (iVar5 != iVar10)) {
              F_00a90b90(iVar14,iVar5,iVar10,0,0);
            }
            break;
          }
          iVar5 = iVar5 + 0x11c;
          uVar13 = uVar13 + 1;
        } while (iVar5 != *(int *)((int)this + 0xdc));
      }
      if ((uint)((int)(*(int *)((int)this + 0xdc) - *puVar11) / 0x11c) <= uVar13) {
        puVar1 = *(undefined1 * PTR32 *)((int)this + 0xdc);
        if ((((undefined1 *)(gen_frame + 0xc)) < puVar1) && (puVar2 = (undefined1 *)*puVar11, puVar2 <= ((undefined1 *)(gen_frame + 0xc)))) {
          if (puVar1 == *(undefined1 * PTR32 *)((int)this + 0xe0)) {
            iVar5 = (int)((int)puVar1 - *puVar11) / 0x11c;
            if (iVar5 == -1) {
LAB_00a7f3d1: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar13 = (int)((int)*(undefined1 * PTR32 *)((int)this + 0xe0) - *puVar11) / 0x11c;
            uVar9 = iVar5 + 1;
            if (uVar13 < uVar9) {
              if (-(uVar13 >> 1) - 1 < uVar13) {
                uVar13 = 0;
              }
              else {
                uVar13 = uVar13 + (uVar13 >> 1);
              }
              if (uVar13 < uVar9) {
                uVar13 = uVar9;
              }
              F_00a92850(puVar11,uVar13);
            }
          }
          if (*(undefined * PTR32 *)((int)this + 0xdc) != (undefined *)0x0) {
            F_00a88c70(*(undefined * PTR32 *)((int)this + 0xdc),
                         (((int)((undefined1 *)(gen_frame + 0xc)) - (int)puVar2) / 0x11c) * 0x11c + *puVar11);
          }
        }
        else {
          if (puVar1 == *(undefined1 * PTR32 *)((int)this + 0xe0)) {
            iVar5 = (int)((int)puVar1 - *puVar11) / 0x11c;
            if (iVar5 == -1) goto LAB_00a7f3d1;
            uVar13 = (int)((int)*(undefined1 * PTR32 *)((int)this + 0xe0) - *puVar11) / 0x11c;
            uVar9 = iVar5 + 1;
            if (uVar13 < uVar9) {
              if (-(uVar13 >> 1) - 1 < uVar13) {
                uVar13 = 0;
              }
              else {
                uVar13 = uVar13 + (uVar13 >> 1);
              }
              if (uVar13 < uVar9) {
                uVar13 = uVar9;
              }
              F_00a92850(puVar11,uVar13);
            }
          }
          if (*(undefined * PTR32 *)((int)this + 0xdc) != (undefined *)0x0) {
            F_00a88c70(*(undefined * PTR32 *)((int)this + 0xdc),((undefined1 *)(gen_frame + 0xc)));
          }
        }
        *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 0x11c;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0xc8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
      F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    }
    (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) + 1;
    if (0x1d < (*(byte *)(gen_frame + 0xb))) {
      pbVar7 = (byte *)(uVar4 + 0x1895);
      (*(int *)(gen_frame + 0x4)) = 5;
      do {
        if (pbVar7[-1] == 1) {
          iVar10 = *(int *)((int)this + 0xdc) - *(int *)((int)this + 0xd8);
          iVar5 = iVar10 >> 0x1f;
          iVar10 = iVar10 / 0x11c + iVar5;
          uVar13 = 0;
          if (iVar10 != iVar5) {
            puVar11 = ((uint *)GEN_TOP((*(int *)((int)this + 0xd8) + 0x54)));
            do {
              if (*puVar11 == (uint)*(ushort *)(uVar4 + 0x13b8 + (uint)*pbVar7 * 0x10)) {
                *((undefined1 *)GEN_TOP((uVar13 * 0x11c + 0x58 + *(int *)((int)this + 0xd8)))) = 1;
                break;
              }
              uVar13 = uVar13 + 1;
              puVar11 = puVar11 + 0x47;
            } while (uVar13 < (uint)(iVar10 - iVar5));
          }
        }
        pbVar7 = pbVar7 + 8;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        if ((*(int *)(gen_frame + 0x4)) == 0) {
          iVar5 = (*(int *)((int)this + 0xdc) - *(int *)((int)this + 0xd8)) / 0x11c;
          *(int *)((int)this + 0x78) = iVar5;
          if (iVar5 != 0) {
            *(undefined4 *)((int)this + 0x3a58) = 0;
            *(undefined4 *)((int)this + 0x3a5c) = 0;
            *(undefined4 *)((int)this + 0x39b4) = 2;
            uVar4 = F_00a7dfc0(this);
            F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
            return uVar4;
          }
          puVar3 = *(undefined4 * PTR32 *)((int)this + 0x39bc);
          uVar4 = 0;
          if (puVar3 != (undefined4 *)0x0) {
            uVar4 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
            *(undefined4 *)((int)this + 0x39bc) = 0;
          }
          *(undefined1 *)((int)this + 0x3a65) = 0;
          if (*(char *)((int)this + 0x3a67) == '\0') {
            if (*(char *)((int)this + 0x3aae) == '\0') {
              piVar12 = *(int * PTR32 *)((int)this + 0x3a9c);
            }
            else {
              piVar12 = *(int * PTR32 *)((int)this + 0x3aa0);
            }
            if (piVar12 != (int *)0x0) {
              uVar4 = ((code *)*(gen_code32 *)(*piVar12 + 4))(piVar12,10);
            }
          }
          else if (*(char *)((int)this + 0x3aae) == '\0') {
            piVar12 = *(int * PTR32 *)((int)this + 0x3a9c);
            if (piVar12 != (int *)0x0) {
              uVar4 = ((code *)*(gen_code32 *)(*piVar12 + 4))(piVar12,0xb);
              *(undefined1 *)((int)this + 0x3a67) = 0;
              F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
              return uVar4;
            }
          }
          else {
            piVar12 = *(int * PTR32 *)((int)this + 0x3aa0);
            if (piVar12 != (int *)0x0) {
              uVar4 = ((code *)*(gen_code32 *)(*piVar12 + 4))(piVar12,0xb);
              *(undefined1 *)((int)this + 0x3a67) = 0;
              F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
              return uVar4;
            }
          }
          *(undefined1 *)((int)this + 0x3a67) = 0;
          F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
          return uVar4;
        }
      } while( true );
    }
  } while( true );
}

/* ref: FUN_00a7f520 */
uint F_00a7f520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7f520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined2 * puVar10;
  int * piVar11;
  undefined * this_00;
  int iVar12;
  undefined2 * puVar13;
  undefined4 * puVar14;
  bool bVar15;
  undefined * puVar16;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined2 * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = param_1;
  F_005d4dc0();
  *(undefined1 *)this = 1;
  *(undefined4 *)((int)this + 0x58) = *param_1;
  *(undefined4 *)((int)this + 0x5c) = param_1[1];
  puVar9 = param_1 + 0xd;
  puVar14 = (undefined4 *)((int)this + 1);
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar14 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar14 = puVar14 + 1;
  }
  uVar8 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)),param_1 + 0xd,REFG(undefined4, 0x108cc50));
  F_00a9c0d0(0,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
  puVar7 = (*(undefined2 * PTR32 *)(gen_frame + 0xc));
  *(undefined4 *)((int)(*(undefined2 * PTR32 *)(gen_frame + 0xc)) + 0x41) = (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0x15];
  *(undefined4 *)((int)(*(undefined2 * PTR32 *)(gen_frame + 0xc)) + 0x45) = (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0x16];
  *(undefined4 *)((int)(*(undefined2 * PTR32 *)(gen_frame + 0xc)) + 0x49) = (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0x17];
  *(undefined4 *)((int)(*(undefined2 * PTR32 *)(gen_frame + 0xc)) + 0x4d) = (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0x18];
  *(undefined1 *)((int)(*(undefined2 * PTR32 *)(gen_frame + 0xc)) + 0x51) = *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x19);
  bVar4 = *(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3);
  *(byte *)((int)(*(undefined2 * PTR32 *)(gen_frame + 0xc)) + 0x62) = bVar4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(uint)bVar4;
  F_00a9c160(0x46,&(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  *(undefined1 *)((int)puVar7 + 99) = *(undefined1 *)((int)puVar14 + 0xd);
  bVar4 = *(byte *)((int)puVar14 + 0xe);
  *(byte *)((int)puVar7 + 0x61) = bVar4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(uint)bVar4;
  F_00a9c160(3,&(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(uint)*(byte *)((int)puVar14 + 0xf);
  *(byte *)((int)puVar7 + 100) = *(byte *)((int)puVar14 + 0xf);
  F_00a9c160(0x43,&(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  (*(undefined2 * PTR32 *)(gen_frame + 0xc)) = (undefined2 *)((int)puVar7 + 0x66);
  (*(uint *)(gen_frame + 0x8)) = (int)puVar14 - (int)puVar7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
  puVar9 = (undefined4 *)((int)puVar7 + 0x8c);
  do {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x10)) < (undefined4 *)0x13) {
      *(*(undefined2 * PTR32 *)(gen_frame + 0xc)) = *(undefined2 *)((*(uint *)(gen_frame + 0x8)) + (int)(*(undefined2 * PTR32 *)(gen_frame + 0xc)));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 1);
    (*(undefined2 * PTR32 *)(gen_frame + 0xc)) = (*(undefined2 * PTR32 *)(gen_frame + 0xc)) + 1;
    *puVar9 = *(undefined4 *)((*(uint *)(gen_frame + 0x8)) + (int)puVar9);
    puVar9 = puVar9 + 1;
  } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) < 0x13);
  *(undefined1 *)((int)puVar7 + 0xde) = *(undefined1 *)(puVar14 + 4);
  *(undefined1 *)((int)puVar7 + 0xdb) = *(undefined1 *)((int)puVar14 + 0x11);
  uVar5 = *(undefined1 *)((int)puVar14 + 0x12);
  *(undefined1 *)((int)puVar7 + 0xdd) = *(undefined1 *)((int)puVar14 + 0x13);
  *(undefined1 *)((int)puVar7 + 0xdc) = uVar5;
  *(undefined1 *)((int)puVar7 + 0x22a) = *(undefined1 *)(puVar14 + 5);
  bVar4 = *(byte *)(puVar14 + 5);
  bVar6 = *(byte *)((int)puVar14 + 0x15);
  uVar8 = (uint)bVar4;
  if (uVar8 - 1 < 3) {
    *(byte *)((int)puVar7 + uVar8 + 0x22a) = bVar6;
    if (bVar4 == *(byte *)((int)puVar7 + 0x22a)) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(uint)bVar6;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
    }
    F_00a9c160(uVar8 + 0x32,&(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  }
  bVar4 = *(byte *)((int)puVar14 + 0x16);
  *(byte *)((int)puVar7 + 0xdf) = bVar4;
  (*(uint *)(gen_frame + 0x8)) = (uint)bVar4;
  F_00a9c160(0x45,&(*(uint *)(gen_frame + 0x8)));
  *(undefined1 *)((int)puVar7 + 0xe0) = *(undefined1 *)((int)puVar14 + 0x19);
  *(undefined4 *)((int)puVar7 + 0x254) = puVar14[2];
  *(undefined1 *)((int)puVar7 + 0x22e) = *(undefined1 *)(puVar14 + 6);
  uVar2 = puVar14[0xc1];
  uVar3 = puVar14[0xc2];
  *(undefined4 *)((int)puVar7 + 0x240) = puVar14[0xc0];
  *(undefined4 *)((int)puVar7 + 0x244) = uVar2;
  *(undefined4 *)((int)puVar7 + 0x248) = uVar3;
  *(undefined1 *)((int)puVar7 + 0x250) = 0;
  *(undefined1 *)((int)puVar7 + 0x22f) = *(undefined1 *)(puVar14 + 0x3d);
  *(undefined1 *)((int)puVar7 + 0x230) = *(undefined1 *)((int)puVar14 + 0xf5);
  uVar8 = 0;
  *(undefined1 *)((int)puVar7 + 0x231) = *(undefined1 *)((int)puVar14 + 0xf6);
  bVar15 = true;
  do {
    if (bVar15) {
      (&REFG(undefined1, 0x14b4ec0))[uVar8] = *(undefined1 *)((int)puVar14 + uVar8 + 0xd8);
    }
    uVar8 = uVar8 + 1;
    bVar15 = uVar8 < 0x10;
  } while ((int)uVar8 < 0x10);
  uVar8 = 0;
  bVar15 = true;
  do {
    if (bVar15) {
      (&REFG(undefined1, 0x14b4ed0))[uVar8] = *(undefined1 *)((int)puVar14 + uVar8 + 0xe8);
    }
    uVar8 = uVar8 + 1;
    bVar15 = uVar8 < 0xc;
  } while ((int)uVar8 < 0xc);
  uVar8 = 0;
  bVar15 = true;
  do {
    if (bVar15) {
      (&REFG(undefined1, 0x14b4edc))[uVar8] = *(undefined1 *)((int)puVar14 + uVar8 + 0x287);
    }
    uVar8 = uVar8 + 1;
    bVar15 = uVar8 < 0x20;
  } while ((int)uVar8 < 0x20);
  uVar8 = 0;
  bVar15 = true;
  do {
    if (bVar15) {
      (&REFG(undefined1, 0x14b4efc))[uVar8] = *(undefined1 *)((int)puVar14 + uVar8 + 0x2a7);
    }
    uVar8 = uVar8 + 1;
    bVar15 = uVar8 < 0x10;
  } while ((int)uVar8 < 0x10);
  REFG(undefined4, 0x14b4f0c) = *(undefined1 *)((int)puVar14 + 0x2b7);
  REFG(undefined4, 0x14b4f0d) = *(undefined1 *)(puVar14 + 0xae);
  REFG(undefined4, 0x14b4f0e) = *(undefined1 *)((int)puVar14 + 0x2b9);
  REFG(undefined4, 0x14b4f0f) = *(undefined1 *)((int)puVar14 + 0x2ba);
  REFG(undefined4, 0x14b4f10) = *(undefined1 *)((int)puVar14 + 699);
  REFG(undefined4, 0x14b4f11) = *(undefined1 *)(puVar14 + 0xaf);
  REFG(undefined4, 0x14b4f12) = *(undefined1 *)((int)puVar14 + 0x2bd);
  REFG(undefined4, 0x14b4f13) = *(undefined1 *)((int)puVar14 + 0x2be);
  uVar8 = 0;
  bVar15 = true;
  do {
    if (bVar15) {
      (&REFG(undefined1, 0x14b4f14))[uVar8] = *(undefined1 *)((int)puVar14 + uVar8 + 0x2bf);
    }
    uVar8 = uVar8 + 1;
    bVar15 = uVar8 < 0x40;
  } while ((int)uVar8 < 0x40);
  F_00a6e6a0(&REFG(undefined, 0x14a9e40));
  F_00ab5410(&REFG(undefined, 0x14b5268),(int)puVar14 + 0xf7,(int)puVar14 + 0x237);
  *(undefined1 *)((int)puVar7 + 600) = *(undefined1 *)((int)puVar14 + 0x317);
  *(undefined1 *)((int)puVar7 + 0x259) = *(undefined1 *)(puVar14 + 0xc6);
  *(undefined1 *)((int)puVar7 + 0x25a) = *(undefined1 *)((int)puVar14 + 0x319);
  *(undefined1 *)((int)puVar7 + 0x25b) = *(undefined1 *)((int)puVar14 + 0x31a);
  *(undefined4 *)((int)puVar7 + 0x268) = puVar14[10];
  uVar8 = 0;
  do {
    (*(uint *)(gen_frame + 0x8)) = uVar8 >> 2;
    bVar4 = (byte)uVar8;
    iVar12 = uVar8 + 0x31b;
    uVar8 = uVar8 + 1;
    puVar1 = (uint *)((int)puVar7 + (*(uint *)(gen_frame + 0x8)) * 4 + 0x25c);
    *puVar1 = *puVar1 | (uint)*(byte *)((int)puVar14 + iVar12) <<
                        (('\x03' - (bVar4 & 3)) * '\b' & 0x1f);
  } while ((int)uVar8 < 0xb);
  *(undefined1 *)((int)puVar7 + 0x26d) = *(undefined1 *)((int)puVar14 + 0x33e);
  *(undefined1 *)((int)puVar7 + 0x26e) = *(undefined1 *)((int)puVar14 + 0x33f);
  *(undefined1 *)((int)puVar7 + 0x26f) = *(undefined1 *)(puVar14 + 0xd0);
  *(undefined1 *)((int)puVar7 + 0x270) = *(undefined1 *)((int)puVar14 + 0x341);
  puVar13 = (undefined2 *)((int)puVar7 + 0x296);
  puVar10 = (undefined2 *)((int)puVar14 + 0x3b2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x12;
  do {
    puVar13[-0x12] = puVar10[-0x12];
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0);
  iVar12 = 0;
  do {
    *(undefined1 *)((int)puVar7 + iVar12 + 0x2ba) = *(undefined1 *)((int)puVar14 + iVar12 + 0x374);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x19);
  iVar12 = 0;
  do {
    *(undefined1 *)((int)puVar7 + iVar12 + 0x2d3) = *(undefined1 *)((int)puVar14 + iVar12 + 0x342);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x32);
  *(undefined4 *)((int)puVar7 + 0x308) = puVar14[0xb];
  *(undefined4 *)((int)puVar7 + 0x30c) = puVar14[0xc];
  piVar11 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  puVar16 = &REFG(undefined, 0x14a9e40);
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar11 + 0x30))(piVar11)));
  uVar8 = F_0043b380(this_00,puVar16);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar8;
}

/* ref: FUN_00a7f9c0 */
uint F_00a7f9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa7f9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 0x30c);
  *(undefined1 *)((int)this + 0xd) = *(undefined1 *)(param_1 + 0x30d);
  *(undefined1 *)((int)this + 0xe) = *(undefined1 *)(param_1 + 0x30e);
  *(undefined1 *)((int)this + 0xf) = *(undefined1 *)(param_1 + 0x30f);
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 0x310);
  *(undefined1 *)((int)this + 0x11) = *(undefined1 *)(param_1 + 0x311);
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)(param_1 + 0x312);
  *(undefined1 *)((int)this + 0x13) = *(undefined1 *)(param_1 + 0x313);
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)(param_1 + 0x314);
  *(undefined1 *)((int)this + 0x15) = *(undefined1 *)(param_1 + 0x315);
  *(undefined1 *)((int)this + 0x16) = *(undefined1 *)(param_1 + 0x316);
  F_00c49908((int)this + 0x17,0x15,param_1 + 0x326);
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_1 + 0x326,REFG(undefined4, 0x108cc50));
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4)));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4)));
  if ((uint)piVar4[4] < 0x37) {
    F_00494140(piVar4,0x37);
  }
  piVar6 = (int *)0x0;
  if (((int *)*piVar4 != (int *)0x0) &&
     (puVar2 = *(undefined4 * PTR32 *)*piVar4, puVar2 != (undefined4 *)0x0)) {
    piVar6 = (int *)*puVar2;
  }
  uVar5 = piVar4[3] + 0x36;
  if (((piVar6 == (int *)0x0) || ((int *)*piVar6 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar6, piVar4 == (int *)0x0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar4;
  }
  if (*(uint *)(iVar7 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar7 + 8);
  }
  F_00490f90(*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar7 + 4) + uVar5 * 4))),uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined1 *)((int)this + 0x30) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)((int)this + 0x31) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined1 *)((int)this + 0x32) = *(undefined1 *)(param_1 + 0x33b);
  *(undefined1 *)((int)this + 0x33) = *(undefined1 *)(param_1 + 0x33c);
  *(undefined1 *)((int)this + 0x34) = *(undefined1 *)(param_1 + 0x33d);
  *(undefined1 *)((int)this + 0x35) = *(undefined1 *)(param_1 + 0x1d);
  bVar1 = *(byte *)(param_1 + 0x1a);
  uVar3 = (uint)bVar1;
  if (*(byte *)((int)this + 0x36) != bVar1) {
    *(byte *)((int)this + 0x36) = bVar1;
    uVar3 = F_00a6fbc0(&REFG(undefined, 0x14ab740),1,3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00a7fb60 */
unsigned int F_00a7fb60(unsigned int gen_a0)
{
  GEN_ENTER(0xa7fb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  piVar2 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    if (0.0 < *(float *)((int)this + 4)) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) -
                     (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
      *(float *)((int)this + 4) = fVar1;
      if ((float10)fVar1 < (float10)0) {
        *(undefined4 *)((int)this + 4) = 0;
      }
    }
    uVar4 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x53);
    if (((*(int *)(uVar4 + 0x14) != 0) && ((*(byte *)((int)piVar2 + 0x2dd2) & 2) == 0)) &&
       (REFG(char, 0x14ab068) == '\0')) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xd8))(piVar2);
      if (*(int *)(uVar4 + 0x40) == 0) {
        bVar3 = F_00ac2f20();
        if ((bVar3 == 0) && (*(char *)((int)this + 0xc) == '\x01')) {
          fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) -
                         (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
          *(float *)((int)this + 8) = fVar1;
          if ((float10)fVar1 <= (float10)0) {
            bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x36);
            if (bVar3 == 1) {
              bVar3 = F_00a7efa0(this,0);
              if (bVar3 != 0) {
                *(undefined4 *)((int)this + 8) = 0;
                *(undefined1 *)((int)this + 0xc) = 0;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00a7fc50 */
uint F_00a7fc50(unsigned int gen_a0)
{
  GEN_ENTER(0xa7fc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e796c));
  F_0042b630((int)this + 4);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7984));
  F_0042b630((int)this + 0x80);
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  F_00a962b0((undefined *)((int)this + 0x78));
  F_00a9b800((undefined *)((int)this + 0xf8));
  F_00a9b800((undefined *)((int)this + 0x120));
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  F_00a9b780((undefined *)((int)this + 0x168));
  F_00a96120((undefined *)((int)this + 0x17c));
  F_00a8a5d0((undefined *)((int)this + 0xc30));
  F_00a8a630((undefined *)((int)this + 0x3158));
  puVar1 = (undefined4 *)((int)this + 0x399c);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,800);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x39a0) = 0;
  *(undefined4 *)((int)this + 0x39a4) = 0;
  *(undefined4 *)((int)this + 0x39a8) = 0;
  *(undefined4 *)((int)this + 0x39ac) = 0;
  F_0042b630((int)this + 0x3a00);
  *(undefined1 *)((int)this + 0x3a67) = 0;
  *(undefined4 *)((int)this + 0x3a9c) = 0;
  F_00a66e30(this);
  F_00a85260((undefined *)((int)this + 0xc30));
  F_00a962b0((undefined *)((int)this + 0x78));
  *(undefined4 *)((int)this + 0x168) = 0;
  F_00a97b90((undefined *)((int)this + 0x16c),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x170) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x170) + 4))) = *(int *)((int)this + 0x170);
  *(undefined4 *)*(undefined4 *)((int)this + 0x170) = *(undefined4 *)((int)this + 0x170);
  *((int *)GEN_TOP((*(int *)((int)this + 0x170) + 8))) = *(int *)((int)this + 0x170);
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  F_00a93600((undefined4 *)((int)this + 0x100),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x100),
               *(undefined4 *)((int)this + 0x104));
  F_00a97d20((undefined *)((int)this + 0x110),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x114) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x114) + 4))) = *(int *)((int)this + 0x114);
  *(undefined4 *)*(undefined4 *)((int)this + 0x114) = *(undefined4 *)((int)this + 0x114);
  *((int *)GEN_TOP((*(int *)((int)this + 0x114) + 8))) = *(int *)((int)this + 0x114);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x3aa4) = 0;
  *(undefined4 *)((int)this + 0x3aa8) = 0;
  *(undefined2 *)((int)this + 0x3aac) = 0;
  F_00a94c50((undefined *)((int)this + 0x17c));
  *(undefined1 *)((int)this + 0x3a69) = 0;
  *(undefined1 *)((int)this + 0x3aae) = 0;
  *(undefined1 *)((int)this + 0x3a65) = 0;
  return (uint)this;
}

/* ref: FUN_00a7fe60 */
uint F_00a7fe60(unsigned int gen_a0)
{
  GEN_ENTER(0xa7fe60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7984));
  F_0042c880((undefined *)((int)this + 0x3a00));
  F_00a9c3c0((undefined *)((int)this + 0x399c));
  F_00429760(*(undefined4 *)((int)this + 0x399c),8,800);
  *(undefined4 *)((int)this + 0x399c) = 0;
  pvVar3 = (undefined *)((int)this + 0x399c);
  iVar2 = 0x17;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x58);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 0x17;
  pvVar3 = (undefined *)((int)this + 0x315c);
  do {
    F_0042c880((undefined *)((int)pvVar3 + -0x134));
    F_0042c880((undefined *)((int)pvVar3 + -0x18c));
    iVar2 = iVar2 + -1;
    pvVar3 = (undefined *)((int)pvVar3 + -0x18c);
  } while (-1 < iVar2);
  F_00a95220((undefined *)((int)this + 0x17c));
  F_00a997c0((undefined *)((int)this + 0x16c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x170),
               *(undefined4 * PTR32 *)((int)this + 0x170));
  F_00429760(*(undefined4 *)((int)this + 0x170),0xe4,800);
  iVar2 = *(int *)((int)this + 0x158);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x160) - iVar2 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  F_0074d8a0((undefined *)((int)this + 0x148));
  F_00a99890((undefined *)((int)this + 0x138),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x13c),
               *(undefined4 * PTR32 *)((int)this + 0x13c));
  F_00429760(*(undefined4 *)((int)this + 0x13c),0x74,800);
  F_00a93680((undefined *)((int)this + 0x128));
  F_00a99890((undefined *)((int)this + 0x110),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x114),
               *(undefined4 * PTR32 *)((int)this + 0x114));
  F_00429760(*(undefined4 *)((int)this + 0x114),0x74,800);
  F_00a93680((undefined *)((int)this + 0x100));
  F_00a920d0((undefined *)((int)this + 0xe8));
  F_00a920d0((undefined *)((int)this + 0xd8));
  F_0042c880((undefined *)((int)this + 0x80));
  uVar1 = F_00a71520(this);
  return uVar1;
}

/* ref: FUN_00a80010 */
uint F_00a80010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa80010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (*(char *)((int)this + 0x3a65) == '\0') {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    in_EAX = 0;
    if (piVar1 != (int *)0x0) {
      uVar3 = 3;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      this_00 = (undefined *)F_00763050(uVar2,uVar3);
      in_EAX = 0;
      if (this_00 != (undefined *)0x0) {
        in_EAX = F_0076ecb0(this_00,4);
        if ((char)in_EAX != '\0') {
          *(undefined1 *)((int)this + 0x3aae) = 0;
          if (param_1 != 0) {
            *(int *)((int)this + 0x3a9c) = param_1;
          }
          F_00a66e30(this);
          *(int *)((int)this + 0x39fc) = param_2;
          *(undefined1 *)((int)this + 0x3a65) = 1;
          if (param_2 == 1) {
            F_00a94ee0((undefined *)((int)this + 0x78));
            F_00a99470((undefined *)((int)this + 0x168));
            in_EAX = F_00a7f070(this);
          }
          else {
            in_EAX = param_2 - 2;
            if (in_EAX == 0) {
              F_00a94f20((undefined *)((int)this + 0x78));
              F_00a995a0((undefined *)((int)this + 0x168));
              uVar2 = F_00a7db00(this);
              return uVar2;
            }
          }
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a800d0 */
uint F_00a800d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa800d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x3a9c);
  if (uVar1 != 0) {
    if (*(char *)((int)this + 0x3a69) == '\0') {
      uVar1 = F_00a80010(this,uVar1,param_1);
    }
    else if (*(char *)((int)this + 0x3a65) == '\0') {
      *(undefined1 *)((int)this + 0x3aae) = 0;
      uVar1 = F_00a77420(this,uVar1);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00a80110 */
uint F_00a80110(unsigned int gen_a0)
{
  GEN_ENTER(0xa80110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e796c));
  F_0042b630((int)this + 4);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  F_00a950c0((undefined *)((int)this + 0x78));
  puVar1 = (undefined4 *)((int)this + 0x1a8);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,800);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x10e7894));
  *(undefined * PTR32 *)((int)this + 0x1c4) = this;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  F_00a73730(this);
  *(undefined1 *)((int)this + 0x1dd) = 0;
  return (uint)this;
}

/* ref: FUN_00a801f0 */
uint F_00a801f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa801f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  F_00a9c540((undefined *)((int)this + 0x1a8));
  F_00429760(*(undefined4 *)((int)this + 0x1a8),8,800);
  *(undefined4 *)((int)this + 0x1a8) = 0;
  F_00a93740((undefined *)((int)this + 0x198));
  uVar1 = F_00a71520(this);
  return uVar1;
}

/* ref: FUN_00a80250 */
uint F_00a80250(unsigned int gen_a0)
{
  GEN_ENTER(0xa80250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int in_ecx;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e796c));
  F_0042b630((int)this + 4);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e799c));
  F_00a96330((undefined *)((int)this + 0x78));
  F_00a8a6e0((undefined *)((int)this + 0x5ec));
  F_0042b630((int)this + 0xe44);
  in_ecx = (int)this + 0xeb0;
  local_8 = 2;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  puVar1 = (undefined4 *)((int)this + 0xfb4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,800);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0xfb8) = 0;
  *(undefined4 *)((int)this + 0xfbc) = 0;
  *(undefined4 *)((int)this + 0xfc0) = 0;
  *(undefined4 *)((int)this + 0xfc4) = 0;
  F_00a73a30(this);
  return (uint)this;
}

/* ref: FUN_00a80310 */
uint F_00a80310(unsigned int gen_a0)
{
  GEN_ENTER(0xa80310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e799c));
  F_00a9c480((undefined *)((int)this + 0xfb4));
  F_00429760(*(undefined4 *)((int)this + 0xfb4),8,800);
  *(undefined4 *)((int)this + 0xfb4) = 0;
  pvVar3 = (undefined *)((int)this + 0xfac);
  iVar2 = 2;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x54);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_0042c880((undefined *)((int)this + 0xe44));
  pvVar3 = (undefined *)((int)this + 0xe30);
  iVar2 = 0x17;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x58);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00a95380((undefined *)((int)this + 0x78));
  uVar1 = F_00a71520(this);
  return uVar1;
}

/* ref: FUN_00a803a0 */
unsigned int F_00a803a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa803a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  
  if (REFG(int, 0x1379694) != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if ((*(uint *)&REFG(undefined, 0x14b5064) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14b5064) = *(uint *)&REFG(undefined, 0x14b5064) | 1;
      F_0042b630(&REFG(undefined, 0x14b5010));
      F_00c47de6(((code *)REFP(0x107c620)));
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x399c);
    for (uVar12 = *(uint *)((int)this + 0x39a8);
        uVar12 != *(int *)((int)this + 0x39ac) + *(int *)((int)this + 0x39a8); uVar12 = uVar12 + 1)
    {
      if (piVar1 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar1;
      }
      uVar4 = uVar12;
      if (*(uint *)(iVar9 + 8) <= uVar12) {
        uVar4 = uVar12 - *(uint *)(iVar9 + 8);
      }
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar4 * 4))) + 0x70))) == '\0') {
        F_0042aca0(&REFG(undefined, 0x14b5010));
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
        if (piVar1 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar1;
        }
        uVar4 = uVar12;
        if (*(uint *)(iVar9 + 8) <= uVar12) {
          uVar4 = uVar12 - *(uint *)(iVar9 + 8);
        }
        if (piVar1 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar1;
        }
        uVar10 = uVar12;
        if (*(uint *)(iVar8 + 8) <= uVar12) {
          uVar10 = uVar12 - *(uint *)(iVar8 + 8);
        }
        uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))
                          (piVar5,*((undefined4 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar10 * 4))),
                           *((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar4 * 4))) + 0x54,&REFG(undefined, 0x14b5010));
        if (uVar4 == 1) {
          if (piVar1 == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *piVar1;
          }
          uVar4 = uVar12;
          if (*(uint *)(iVar9 + 8) <= uVar12) {
            uVar4 = uVar12 - *(uint *)(iVar9 + 8);
          }
          F_00a6c9b0(this,1,&REFG(undefined, 0x14b5010),
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar4 * 4))) + 0x6c))));
          if (piVar1 == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *piVar1;
          }
          uVar4 = uVar12;
          if (*(uint *)(iVar9 + 8) <= uVar12) {
            uVar4 = uVar12 - *(uint *)(iVar9 + 8);
          }
          *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar4 * 4))) + 0x70))) = 1;
        }
      }
    }
    iVar9 = *(int *)((int)this + 0x39ac);
    while (iVar9 != 0) {
      uVar12 = *(uint *)((int)this + 0x39a8);
      if (*(int * PTR32 *)((int)this + 0x399c) == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = **(int * PTR32 *)((int)this + 0x399c);
      }
      if (*(uint *)(iVar9 + 8) <= uVar12) {
        uVar12 = uVar12 - *(uint *)(iVar9 + 8);
      }
      if ((*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar12 * 4))) + 0x70))) == '\0') ||
         (*(int *)((int)this + 0x39ac) == 0)) break;
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x39a0) + *(int *)((int)this + 0x39a8) * 4)));
      F_00492c50((undefined *)((int)pvVar6 + 0x54));
      F_00429760(*(undefined4 *)((int)pvVar6 + 0x54),8,0x2c4);
      *(undefined4 *)((int)pvVar6 + 0x54) = 0;
      F_0042c880(pvVar6);
      *(int *)((int)this + 0x39a8) = *(int *)((int)this + 0x39a8) + 1;
      if (*(uint *)((int)this + 0x39a4) <= *(uint *)((int)this + 0x39a8)) {
        *(undefined4 *)((int)this + 0x39a8) = 0;
      }
      piVar3 = (int *)((int)this + 0x39ac);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        *(undefined4 *)((int)this + 0x39a8) = 0;
      }
      iVar9 = *(int *)((int)this + 0x39ac);
    }
    if ((((*(int *)((int)this + 0x3aa4) != 0) && (*(char *)((int)this + 0x3a65) == '\0')) &&
        (REFG(int, 0x1379694) != 0)) && (bVar2 = F_006e4d80(), bVar2 != 0)) {
      pvVar6 = (undefined *)F_006b8c00();
      bVar2 = F_006def40(pvVar6);
      if (bVar2 != 0) {
        F_00a800d0(this,*(undefined4 *)((int)this + 0x3aa4));
        *(undefined4 *)((int)this + 0x3aa4) = 0;
      }
    }
    if (((*(char *)((int)this + 0x3a68) != '\0') && (REFG(undefined4, 0x14b26a8) != (int *)0x0)) &&
       (uVar12 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14b26a8) + 8))))(REFG(undefined4, 0x14b26a8)), (char)uVar12 != '\0')) {
      *(undefined1 *)((int)this + 0x3a68) = 0;
      uVar12 = 0;
      puVar7 = REFG(undefined4, 0x14b2708);
      if (REFG(undefined4, 0x14b2708) != REFG(undefined4, 0x14b270c)) {
        do {
          *(undefined4 *)((int)this + uVar12 * 0x18 + 0xd00) = *puVar7;
          *(undefined4 *)((int)this + uVar12 * 0x18 + 0xd04) = puVar7[4];
          *((undefined4 *)GEN_TOP(((int)this + (uVar12 * 3 + 0x1a1) * 8))) = puVar7[5];
          *(undefined4 *)((int)this + uVar12 * 0x18 + 0xd0c) = puVar7[6];
          *(undefined4 *)((int)this + uVar12 * 0x18 + 0xd10) = puVar7[7];
          if ((*(byte *)((int)puVar7 + 0x32) & 1) == 0) {
            uVar11 = puVar7[2];
          }
          else {
            uVar11 = 0;
          }
          *(undefined4 *)((int)this + uVar12 * 0x18 + 0xd14) = uVar11;
          *(undefined4 *)((int)this + 0xcf4) = puVar7[9];
          puVar7 = puVar7 + 0xd;
          uVar12 = (uint)(byte)((char)uVar12 + 1);
        } while (puVar7 != REFG(undefined4, 0x14b270c));
      }
      *(int *)((int)this + 0xdc0) = ((int)REFG(undefined4, 0x14b270c) - (int)REFG(undefined4, 0x14b2708)) / 0x34;
      F_00a78d80(this);
    }
  }
  return 0;
}

/* ref: FUN_00a806e0 */
uint F_00a806e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa806e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = F_00533b90(&REFG(undefined4, 0x1375bc0));
  if (uVar4 != *(uint *)((int)this + 0x908)) {
    *(undefined4 *)((int)this + 0x904) = 0;
    F_00c48350((undefined *)((int)this + 4),0,0x900);
    *(undefined4 *)((int)this + 0x908) = 0;
  }
  *(uint *)((int)this + 0x908) = uVar4;
  if (0.0 < *(float *)((int)this + 0x1214)) {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1214) -
                   (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
    *(float *)((int)this + 0x1214) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      *(undefined4 *)((int)this + 0x1214) = 0;
      *(undefined4 *)((int)this + 0x1210) = 0;
    }
  }
  F_00a7fb60((undefined *)((int)this + 0x1218));
  F_00a6d9d0((undefined *)((int)this + 0x1540));
  if ((REFG(int, 0x1379694) != 0) && (*(char *)(REFG(int, 0x1379694) + 0x188) == '\x02')) {
    F_00a6efa0((undefined *)((int)this + 0x15e8));
  }
  F_00a6ee60((undefined *)((int)this + 0x1564));
  F_00a803a0((undefined *)((int)this + 0x2448));
  F_00a7eac0((undefined *)((int)this + 0x5ef8));
  F_00a7e840((undefined *)((int)this + 0x6ec4));
  F_00b9f970();
  if ((!GEN_ISNAN(*(float *)((int)this + 0x1748)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)((int)this + 0x1748) <= *(float *)&REFG(undefined, 0x1088114))) {
    bVar3 = F_00ac36a0();
    if (bVar3 == 1) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1748) -
                     (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
      *(float *)((int)this + 0x1748) = fVar1;
      if ((float10)fVar1 < (float10)0) {
        *(undefined4 *)((int)this + 0x1748) = 0;
      }
    }
  }
  F_00b9cde0();
  uVar4 = F_00a6feb0((undefined *)((int)this + 0xb074));
  if (*(undefined * PTR32 *)((int)this + 0x92e4) != (undefined *)0x0) {
    uVar4 = F_00bc6220(*(undefined * PTR32 *)((int)this + 0x92e4));
    if (((char)uVar4 != '\0') &&
       (puVar2 = *(undefined4 * PTR32 *)((int)this + 0x92e4), puVar2 != (undefined4 *)0x0)) {
      uVar4 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x92e4) = 0;
    }
  }
  if (0.0 < *(float *)((int)this + 0xb07c)) {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb07c) -
                   (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
    *(float *)((int)this + 0xb07c) = fVar1;
    if ((float10)fVar1 <= (float10)0) {
      *(undefined4 *)((int)this + 0xb07c) = 0;
    }
  }
  return uVar4;
}

/* ref: FUN_00a808c0 */
uint F_00a808c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa808c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int local_10;
  int local_c;
  
  *(undefined4 *)((int)this + 0x1450) = 0;
  if (*(int *)((int)this + 0x14f4) != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0x14f0);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4,*(int *)((int)this + 0x14f4));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14f4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x14f4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x14f0) = 0;
  if (*(int *)((int)this + 0x1520) != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0x151c);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4,*(int *)((int)this + 0x1520));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1520);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x1520) = 0;
    }
  }
  piVar4 = (int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x1520) = 0;
  local_10 = 0x1e;
  do {
    piVar4[-0x18] = 0;
    piVar4[-0x17] = 0;
    F_0042aca0(piVar4 + -0x16);
    if (piVar4[-1] != *piVar4) {
      *piVar4 = piVar4[-1];
    }
    *(undefined2 *)(piVar4 + 3) = 0;
    piVar4 = piVar4 + 0x1c;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  piVar4 = (int *)((int)this + 0xdb0);
  local_c = 0x10;
  do {
    piVar4[-0x18] = 0;
    piVar4[-0x17] = 0;
    F_0042aca0(piVar4 + -0x16);
    if (piVar4[-1] != *piVar4) {
      *piVar4 = piVar4[-1];
    }
    *(undefined2 *)(piVar4 + 3) = 0;
    piVar4 = piVar4 + 0x1c;
    local_c = local_c + -1;
  } while (local_c != 0);
  *(undefined4 *)((int)this + 0x1454) = 0;
  *(undefined4 *)((int)this + 0x1458) = 0;
  F_0042aca0((int)this + 0x145c);
  if (*(int *)((int)this + 0x14b0) != *(int *)((int)this + 0x14b4)) {
    *(int *)((int)this + 0x14b4) = *(int *)((int)this + 0x14b0);
  }
  *(undefined2 *)((int)this + 0x14c0) = 0;
  F_00a97b00((undefined *)((int)this + 0x14cc));
  F_00a8ff70((undefined *)((int)this + 0x14d8));
  F_00a97b00((undefined *)((int)this + 0x14f8));
  F_00a8ff70((undefined *)((int)this + 0x1504));
  F_00a97b00((undefined *)((int)this + 0x1524));
  F_00a9cb60(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = 1;
  do {
    iVar3 = iVar3 + -1;
    *(undefined4 *)((int)this + iVar3 * 8 + 0x28) = 0;
    *(undefined4 *)((int)this + iVar3 * 8 + 0x2c) = 0;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0x14c4) = 0;
  F_00a99750((undefined *)((int)this + 0x10),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(int *)((int)this + 0x14);
  *(undefined4 *)*(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x14);
  uVar2 = *(uint *)((int)this + 0x14);
  *(uint *)(uVar2 + 8) = uVar2;
  *(undefined4 *)((int)this + 0x18) = 0;
  return uVar2;
}

/* ref: FUN_00a80b10 */
uint F_00a80b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa80b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_1);
  F_004949f0(((undefined4 *)(gen_frame + 0x58)),param_2);
  (*(undefined4 *)(gen_frame + 0x70)) = param_3;
  (*(undefined1 *)(gen_frame + 0x74)) = 0;
  F_00a9d780((undefined *)((int)this + 0x399c),((undefined1 *)(gen_frame + 0x4)));
  F_00492c50(((undefined4 *)(gen_frame + 0x58)));
  F_00429760(((undefined4 *)(gen_frame + 0x58))[0],8,0x2c4);
  ((undefined4 *)(gen_frame + 0x58))[0] = 0;
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar1;
}

/* ref: FUN_00a80ba0 */
uint F_00a80ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xa80ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  int * piVar8;
  ulonglong uVar9;
  
  ((int *)(gen_frame + 0xd0))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)F_004296a0(8,0,0x2c4);
  if ((*(int * PTR32 *)(gen_frame + 0x14)) != (int *)0x0) {
    *(*(int * PTR32 *)(gen_frame + 0x14)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x14))[1] = 0;
  }
  *(*(int * PTR32 *)(gen_frame + 0x14)) = (int)&(*(int * PTR32 *)(gen_frame + 0x14));
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x0;
  pvVar7 = this;
  if (*(int *)((int)this + 0xc30) != 0) {
    piVar5 = (int *)((int)this + 0xcec);
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar5;
    do {
      (*(int * PTR32 *)(gen_frame + 0x34)) = piVar5;
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)));
      if ((char)piVar5[-0x2d] == '\0') {
        iVar2 = piVar5[-1];
      }
      else {
        iVar2 = *piVar5;
      }
      (*(int *)(gen_frame + 0xc4)) = 0;
      (*(int *)(gen_frame + 0xc4)) = iVar2;
      (*(int * PTR32 *)(gen_frame + 0xc8)) = &(*(int *)(gen_frame + 0xc4));
      (*(char *)(gen_frame + 0xcc)) = '\0';
      if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)),1);
      }
      uVar6 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) <= uVar6) {
        uVar6 = uVar6 - (*(uint *)(gen_frame + 0x1c));
      }
      if (*(int *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) == 0) {
        uVar3 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) = uVar3;
      }
      piVar5 = *(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4);
      if (piVar5 != (int *)0x0) {
        *piVar5 = 0;
        piVar5[1] = 0;
        *(undefined1 *)(piVar5 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xcc)) != -1) && (piVar5 != &(*(int *)(gen_frame + 0xc4)))) {
          (*(int * PTR32 *)(gen_frame + 0xc)) = piVar5;
          (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0xc8));
          if ((*(char *)(gen_frame + 0xcc)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0xc)));
          }
          else if ((*(char *)(gen_frame + 0xcc)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0xc)));
          }
        }
      }
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0xc8)) != (int *)0x0) {
        if (((*(char *)(gen_frame + 0xcc)) != '\0') && ((*(char *)(gen_frame + 0xcc)) == '\x01')) {
          pvVar7 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xc8));
          *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) + -1;
          if (*(int *)((int)pvVar7 + 0x54) < 1) {
            F_0042c880(pvVar7);
            F_00406ad0(pvVar7);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)0x0;
        (*(char *)(gen_frame + 0xcc)) = -1;
      }
      (*(int *)(gen_frame + 0xb8)) = 0;
      (*(int *)(gen_frame + 0xb8)) = *(*(int * PTR32 *)(gen_frame + 0x34));
      (*(int * PTR32 *)(gen_frame + 0xbc)) = &(*(int *)(gen_frame + 0xb8));
      (*(char *)(gen_frame + 0xc0)) = '\0';
      if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)),1);
      }
      uVar6 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) <= uVar6) {
        uVar6 = uVar6 - (*(uint *)(gen_frame + 0x1c));
      }
      if (*(int *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) == 0) {
        uVar3 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) = uVar3;
      }
      piVar5 = *(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4);
      if (piVar5 != (int *)0x0) {
        *piVar5 = 0;
        piVar5[1] = 0;
        *(undefined1 *)(piVar5 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xc0)) != -1) && (piVar5 != &(*(int *)(gen_frame + 0xb8)))) {
          (*(int * PTR32 *)(gen_frame + 0x4)) = piVar5;
          (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0xbc));
          if ((*(char *)(gen_frame + 0xc0)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x4)));
          }
          else if ((*(char *)(gen_frame + 0xc0)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x4)));
          }
        }
      }
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0xbc)) != (int *)0x0) {
        if (((*(char *)(gen_frame + 0xc0)) != '\0') && ((*(char *)(gen_frame + 0xc0)) == '\x01')) {
          pvVar7 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xbc));
          *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) + -1;
          if (*(int *)((int)pvVar7 + 0x54) < 1) {
            F_0042c880(pvVar7);
            F_00406ad0(pvVar7);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0xbc)) = (int *)0x0;
        (*(char *)(gen_frame + 0xc0)) = -1;
      }
      F_0042cbc0(((undefined1 *)(gen_frame + 0x38)),(*(int * PTR32 *)(gen_frame + 0x34)) + -0x2c);
      F_004949f0(((undefined4 *)(gen_frame + 0x8c)),&(*(int * PTR32 *)(gen_frame + 0x14)));
      (*(int * PTR32 *)(gen_frame + 0xa4)) = (*(int * PTR32 *)(gen_frame + 0x30));
      (*(undefined1 *)(gen_frame + 0xa8)) = 0;
      if (*(uint *)((int)this + 0x39a4) <= *(int *)((int)this + 0x39ac) + 1U) {
        F_00a92130((undefined *)((int)this + 0x399c),1);
      }
      uVar6 = *(int *)((int)this + 0x39a8) + *(int *)((int)this + 0x39ac);
      if (*(uint *)((int)this + 0x39a4) <= uVar6) {
        uVar6 = uVar6 - *(uint *)((int)this + 0x39a4);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x39a0) + uVar6 * 4))) == 0) {
        uVar3 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*(int *)((int)this + 0x39a0) + uVar6 * 4))) = uVar3;
      }
      pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x39a0) + uVar6 * 4)));
      if (pvVar7 != (undefined *)0x0) {
        F_0042cbc0(pvVar7,((undefined1 *)(gen_frame + 0x38)));
        F_004949f0((undefined *)((int)pvVar7 + 0x54),((undefined4 *)(gen_frame + 0x8c)));
        *(int * PTR32 *)((int)pvVar7 + 0x6c) = (*(int * PTR32 *)(gen_frame + 0xa4));
        *(undefined1 *)((int)pvVar7 + 0x70) = (*(undefined1 *)(gen_frame + 0xa8));
      }
      *(int *)((int)this + 0x39ac) = *(int *)((int)this + 0x39ac) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x8c)));
      F_00429760(((undefined4 *)(gen_frame + 0x8c))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x8c))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x38)));
      piVar5 = (*(int * PTR32 *)(gen_frame + 0x34)) + 99;
      (*(int * PTR32 *)(gen_frame + 0x34)) = piVar5;
      (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x30)) + 1);
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    } while ((*(int * PTR32 *)(gen_frame + 0x30)) < *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xc30));
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  if (*(short *)((int)pvVar7 + 0x3158) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x315c);
    do {
      (*(int * PTR32 *)(gen_frame + 0xac)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0xac)) = (int *)F_004296a0(8,0,0x2c4);
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
      if ((*(int * PTR32 *)(gen_frame + 0xac)) != (int *)0x0) {
        *(*(int * PTR32 *)(gen_frame + 0xac)) = 0;
        (*(int * PTR32 *)(gen_frame + 0xac))[1] = 0;
      }
      *(*(int * PTR32 *)(gen_frame + 0xac)) = (int)&(*(int * PTR32 *)(gen_frame + 0xac));
      uVar6 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x39f8) | 0x10000;
      (*(int *)(gen_frame + 0xb0)) = 0;
      (*(uint *)(gen_frame + 0xb4)) = 0;
      (*(int *)(gen_frame + 0xb8)) = 0;
      (*(int * PTR32 *)(gen_frame + 0xbc)) = (int *)0x0;
      ((int *)(gen_frame + 0xd0))[0] = 0;
      ((int *)(gen_frame + 0xd0))[1] = 0;
      ((int *)(gen_frame + 0xd0))[2] = 0;
      ((int *)(gen_frame + 0xd0))[3] = 0;
      ((int *)(gen_frame + 0xd0))[4] = 0;
      ((int *)(gen_frame + 0xd0))[5] = 0;
      ((int *)(gen_frame + 0xd0))[6] = 0;
      ((int *)(gen_frame + 0xd0))[7] = 0;
      ((int *)(gen_frame + 0xd0))[8] = 0;
      ((int *)(gen_frame + 0xd0))[9] = 0;
      (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x0;
      pvVar4 = (undefined *)F_006b8c00();
      pvVar4 = (undefined *)F_006e3240(pvVar4,uVar6);
      uVar6 = F_00a4ffd0();
      if ((pvVar4 != (undefined *)0x0) &&
         (bVar1 = F_006bfeb0(uVar6,(uint)*(ushort *)((int)pvVar7 + 0x39f8)), bVar1 == 0)) {
        (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)F_006d0830(pvVar4,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x34)) + 0x15),((int *)(gen_frame + 0xd0)),10);
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      if ((*(int * PTR32 *)(gen_frame + 0x30)) != (int *)0x0) {
        do {
          (*(int *)(gen_frame + 0xc4)) = 0;
          (*(int *)(gen_frame + 0xc4)) = ((int *)(gen_frame + 0xd0))[(int)(*(int * PTR32 *)(gen_frame + 0x8))];
          (*(int * PTR32 *)(gen_frame + 0xc8)) = &(*(int *)(gen_frame + 0xc4));
          (*(char *)(gen_frame + 0xcc)) = '\0';
          if ((*(uint *)(gen_frame + 0xb4)) <= (int)(*(int * PTR32 *)(gen_frame + 0xbc)) + 1U) {
            F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xac)),1);
          }
          uVar6 = (int)(*(int * PTR32 *)(gen_frame + 0xbc)) + (*(int *)(gen_frame + 0xb8));
          if ((*(uint *)(gen_frame + 0xb4)) <= uVar6) {
            uVar6 = uVar6 - (*(uint *)(gen_frame + 0xb4));
          }
          if (*(int *)((*(int *)(gen_frame + 0xb0)) + uVar6 * 4) == 0) {
            uVar3 = F_004296a0(0xc,0,0x2c4);
            *(uint *)((*(int *)(gen_frame + 0xb0)) + uVar6 * 4) = uVar3;
          }
          piVar5 = *(int * PTR32 *)((*(int *)(gen_frame + 0xb0)) + uVar6 * 4);
          if (piVar5 != (int *)0x0) {
            *piVar5 = 0;
            piVar5[1] = 0;
            *(undefined1 *)(piVar5 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0xcc)) != -1) && (piVar5 != &(*(int *)(gen_frame + 0xc4)))) {
              if ((*(char *)(gen_frame + 0xcc)) == '\0') {
                *piVar5 = *(*(int * PTR32 *)(gen_frame + 0xc8));
                *(undefined1 *)(piVar5 + 2) = 0;
              }
              else {
                if ((*(char *)(gen_frame + 0xcc)) != '\x01') goto LAB_00a81171;
                iVar2 = *(*(int * PTR32 *)(gen_frame + 0xc8));
                piVar8 = (int *)(iVar2 + 0x54);
                *piVar8 = *piVar8 + 1;
                *piVar5 = iVar2;
                *(undefined1 *)(piVar5 + 2) = 1;
              }
              piVar5[1] = (int)piVar5;
            }
          }
LAB_00a81171: ;
          (*(int * PTR32 *)(gen_frame + 0xbc)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xbc)) + 1);
          if ((*(int * PTR32 *)(gen_frame + 0xc8)) != (int *)0x0) {
            if (((*(char *)(gen_frame + 0xcc)) != '\0') && ((*(char *)(gen_frame + 0xcc)) == '\x01')) {
              pvVar7 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xc8));
              *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) + -1;
              if (*(int *)((int)pvVar7 + 0x54) < 1) {
                F_0042c880(pvVar7);
                F_00406ad0(pvVar7);
              }
            }
            (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)0x0;
            (*(char *)(gen_frame + 0xcc)) = -1;
          }
          (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 1);
        } while ((*(int * PTR32 *)(gen_frame + 0x8)) < (*(int * PTR32 *)(gen_frame + 0x30)));
      }
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
      piVar5 = (*(int * PTR32 *)(gen_frame + 0x10));
      piVar8 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xc30) + (int)(*(int * PTR32 *)(gen_frame + 0x10)))));
      F_0042cbc0(((undefined1 *)(gen_frame + 0x38)),(*(int * PTR32 *)(gen_frame + 0x34)));
      F_004949f0(((undefined4 *)(gen_frame + 0x8c)),&(*(int * PTR32 *)(gen_frame + 0xac)));
      (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar8;
      (*(undefined1 *)(gen_frame + 0xa8)) = 0;
      if (*(uint *)((int)pvVar7 + 0x39a4) <= *(int *)((int)pvVar7 + 0x39ac) + 1U) {
        F_00a92130((undefined *)((int)pvVar7 + 0x399c),1);
      }
      uVar6 = *(int *)((int)pvVar7 + 0x39a8) + *(int *)((int)pvVar7 + 0x39ac);
      if (*(uint *)((int)pvVar7 + 0x39a4) <= uVar6) {
        uVar6 = uVar6 - *(uint *)((int)pvVar7 + 0x39a4);
      }
      if (*((int *)GEN_TOP((*(int *)((int)pvVar7 + 0x39a0) + uVar6 * 4))) == 0) {
        uVar3 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*(int *)((int)pvVar7 + 0x39a0) + uVar6 * 4))) = uVar3;
      }
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar7 + 0x39a0) + uVar6 * 4)));
      if (pvVar4 != (undefined *)0x0) {
        F_0042cbc0(pvVar4,((undefined1 *)(gen_frame + 0x38)));
        F_004949f0((undefined *)((int)pvVar4 + 0x54),((undefined4 *)(gen_frame + 0x8c)));
        *(int * PTR32 *)((int)pvVar4 + 0x6c) = (*(int * PTR32 *)(gen_frame + 0xa4));
        *(undefined1 *)((int)pvVar4 + 0x70) = (*(undefined1 *)(gen_frame + 0xa8));
      }
      *(int *)((int)pvVar7 + 0x39ac) = *(int *)((int)pvVar7 + 0x39ac) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x8c)));
      F_00429760(((undefined4 *)(gen_frame + 0x8c))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x8c))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x38)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xac)));
      F_00429760((*(int * PTR32 *)(gen_frame + 0xac)),8,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x34)) = (*(int * PTR32 *)(gen_frame + 0x34)) + 0x16;
      (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)((int)piVar5 + 1U);
    } while ((int)piVar5 + 1U < (uint)*(ushort *)((int)pvVar7 + 0x3158));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)));
  uVar9 = F_00429760((*(int * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
  F_00c47745(((int *)(gen_frame + 0xd0))[10] ^ (uint)(uint)(gen_frame + 0xfc));
  return (uint)uVar9;
}

/* ref: FUN_00a81330 */
uint F_00a81330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa81330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_1);
  F_004949f0(((undefined4 *)(gen_frame + 0x58)),param_2);
  (*(undefined4 *)(gen_frame + 0x70)) = param_3;
  (*(undefined1 *)(gen_frame + 0x74)) = 0;
  F_00a9d880((undefined *)((int)this + 0x1a8),((undefined1 *)(gen_frame + 0x4)));
  F_00492c50(((undefined4 *)(gen_frame + 0x58)));
  F_00429760(((undefined4 *)(gen_frame + 0x58))[0],8,0x2c4);
  ((undefined4 *)(gen_frame + 0x58))[0] = 0;
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar1;
}

/* ref: FUN_00a813c0 */
uint F_00a813c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa813c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * pvVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar3 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1d0) * 4 + 0x7c))) * 0x2624 + 0xb0 +
                   *(int *)((int)this + 0x198))));
  (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar3;
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)F_004296a0(8,0,0x2c4);
  if ((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) {
    *(*(int * PTR32 *)(gen_frame + 0x20)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x20))[1] = 0;
  }
  *(*(int * PTR32 *)(gen_frame + 0x20)) = (int)&(*(int * PTR32 *)(gen_frame + 0x20));
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  if (*puVar3 != 0) {
    puVar3 = (*(uint * PTR32 *)(gen_frame + 0x18)) + 0x2e;
    (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar3;
    do {
      (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar3;
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x20)));
      if ((char)puVar3[-0x2d] == '\0') {
        uVar4 = puVar3[-1];
      }
      else {
        uVar4 = *puVar3;
      }
      (*(uint *)(gen_frame + 0xbc)) = 0;
      (*(uint *)(gen_frame + 0xbc)) = uVar4;
      (*(uint * PTR32 *)(gen_frame + 0xc0)) = &(*(uint *)(gen_frame + 0xbc));
      (*(char *)(gen_frame + 0xc4)) = '\0';
      if ((*(uint *)(gen_frame + 0x28)) <= (*(int *)(gen_frame + 0x30)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x20)),1);
      }
      uVar4 = (*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x2c));
      if ((*(uint *)(gen_frame + 0x28)) <= uVar4) {
        uVar4 = uVar4 - (*(uint *)(gen_frame + 0x28));
      }
      if (*(int *)((*(int *)(gen_frame + 0x24)) + uVar4 * 4) == 0) {
        uVar2 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x24)) + uVar4 * 4) = uVar2;
      }
      puVar3 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x24)) + uVar4 * 4);
      if (puVar3 != (uint *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xc4)) != -1) && (puVar3 != &(*(uint *)(gen_frame + 0xbc)))) {
          (*(uint * PTR32 *)(gen_frame + 0x8)) = puVar3;
          (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)(gen_frame + 0xc0));
          if ((*(char *)(gen_frame + 0xc4)) == '\0') {
            F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x8)));
          }
          else if ((*(char *)(gen_frame + 0xc4)) == '\x01') {
            F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x8)));
          }
        }
      }
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
      if ((*(uint * PTR32 *)(gen_frame + 0xc0)) != (uint *)0x0) {
        if (((*(char *)(gen_frame + 0xc4)) != '\0') && ((*(char *)(gen_frame + 0xc4)) == '\x01')) {
          pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xc0));
          *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
          if (*(int *)((int)pvVar1 + 0x54) < 1) {
            F_0042c880(pvVar1);
            F_00406ad0(pvVar1);
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0xc0)) = (uint *)0x0;
        (*(char *)(gen_frame + 0xc4)) = -1;
      }
      (*(uint *)(gen_frame + 0xb0)) = 0;
      (*(uint *)(gen_frame + 0xb0)) = *(*(uint * PTR32 *)(gen_frame + 0x38));
      (*(uint * PTR32 *)(gen_frame + 0xb4)) = &(*(uint *)(gen_frame + 0xb0));
      (*(char *)(gen_frame + 0xb8)) = '\0';
      if ((*(uint *)(gen_frame + 0x28)) <= (*(int *)(gen_frame + 0x30)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x20)),1);
      }
      uVar4 = (*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x2c));
      if ((*(uint *)(gen_frame + 0x28)) <= uVar4) {
        uVar4 = uVar4 - (*(uint *)(gen_frame + 0x28));
      }
      if (*(int *)((*(int *)(gen_frame + 0x24)) + uVar4 * 4) == 0) {
        uVar2 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x24)) + uVar4 * 4) = uVar2;
      }
      puVar3 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x24)) + uVar4 * 4);
      if (puVar3 != (uint *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xb8)) != -1) && (puVar3 != &(*(uint *)(gen_frame + 0xb0)))) {
          (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
          (*(uint * PTR32 *)(gen_frame + 0x14)) = (*(uint * PTR32 *)(gen_frame + 0xb4));
          if ((*(char *)(gen_frame + 0xb8)) == '\0') {
            F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x10)));
          }
          else if ((*(char *)(gen_frame + 0xb8)) == '\x01') {
            F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x10)));
          }
        }
      }
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
      if ((*(uint * PTR32 *)(gen_frame + 0xb4)) != (uint *)0x0) {
        if (((*(char *)(gen_frame + 0xb8)) != '\0') && ((*(char *)(gen_frame + 0xb8)) == '\x01')) {
          pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0xb4));
          *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
          if (*(int *)((int)pvVar1 + 0x54) < 1) {
            F_0042c880(pvVar1);
            F_00406ad0(pvVar1);
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0xb4)) = (uint *)0x0;
        (*(char *)(gen_frame + 0xb8)) = -1;
      }
      F_0042cbc0(((undefined1 *)(gen_frame + 0x3c)),(*(uint * PTR32 *)(gen_frame + 0x38)) + -0x2c);
      F_004949f0(((undefined4 *)(gen_frame + 0x90)),&(*(int * PTR32 *)(gen_frame + 0x20)));
      (*(uint *)(gen_frame + 0xa8)) = (*(uint *)(gen_frame + 0x1c));
      (*(undefined1 *)(gen_frame + 0xac)) = 0;
      if (*(uint *)((int)this + 0x1b0) <= *(int *)((int)this + 0x1b8) + 1U) {
        F_00a92410((undefined *)((int)this + 0x1a8),1);
      }
      uVar4 = *(int *)((int)this + 0x1b4) + *(int *)((int)this + 0x1b8);
      if (*(uint *)((int)this + 0x1b0) <= uVar4) {
        uVar4 = uVar4 - *(uint *)((int)this + 0x1b0);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + uVar4 * 4))) == 0) {
        uVar2 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*(int *)((int)this + 0x1ac) + uVar4 * 4))) = uVar2;
      }
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1ac) + uVar4 * 4)));
      if (pvVar1 != (undefined *)0x0) {
        F_0042cbc0(pvVar1,((undefined1 *)(gen_frame + 0x3c)));
        F_004949f0((undefined *)((int)pvVar1 + 0x54),((undefined4 *)(gen_frame + 0x90)));
        *(uint *)((int)pvVar1 + 0x6c) = (*(uint *)(gen_frame + 0xa8));
        *(undefined1 *)((int)pvVar1 + 0x70) = (*(undefined1 *)(gen_frame + 0xac));
      }
      *(int *)((int)this + 0x1b8) = *(int *)((int)this + 0x1b8) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x90)));
      F_00429760(((undefined4 *)(gen_frame + 0x90))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x90))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x3c)));
      puVar3 = (*(uint * PTR32 *)(gen_frame + 0x38)) + 99;
      (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar3;
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 1;
    } while ((*(uint *)(gen_frame + 0x1c)) < *(*(uint * PTR32 *)(gen_frame + 0x18)));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x20)));
  uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x20)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return (uint)uVar5;
}

/* ref: FUN_00a817c0 */
uint F_00a817c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa817c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_1);
  F_004949f0(((undefined4 *)(gen_frame + 0x58)),param_2);
  (*(undefined4 *)(gen_frame + 0x70)) = param_3;
  (*(undefined1 *)(gen_frame + 0x74)) = 0;
  F_00a9d800((undefined *)((int)this + 0xfb4),((undefined1 *)(gen_frame + 0x4)));
  F_00492c50(((undefined4 *)(gen_frame + 0x58)));
  F_00429760(((undefined4 *)(gen_frame + 0x58))[0],8,0x2c4);
  ((undefined4 *)(gen_frame + 0x58))[0] = 0;
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar1;
}

/* ref: FUN_00a81860 */
uint F_00a81860(unsigned int gen_a0)
{
  GEN_ENTER(0xa81860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a808c0(this);
  *(byte *)((int)this + 0x14c8) = *(byte *)((int)this + 0x14c8) & 0xfe;
  return uVar1;
}

/* ref: Client::Game::UI::Journal::vf1 */
byte F_00a81880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa81880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined * this_00;
  undefined * pJVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_2 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = this + *(int *)(this + 0x74) * 0x18c + 0xc3c;
    pJVar5 = this + *(int *)(this + 0x74) * 0x58 + 0x315c;
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + uVar6 * 4) + 4)));
      if (iVar4 == 0) break;
      if (*(int *)(this + 0x39b4) == 0) {
        iVar4 = (*(uint *)(iVar4 + 4) & 0xffffff) + iVar4 + 4;
        this_00 = pJVar5;
LAB_00a818f4: ;
        F_0042e430(this_00,iVar4);
      }
      else if (*(int *)(this + 0x39b4) == 1) {
        iVar4 = (*(uint *)(iVar4 + 4) & 0xffffff) + iVar4 + 4;
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        goto LAB_00a818f4;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x18c;
      uVar6 = uVar6 + 1;
      pJVar5 = pJVar5 + 0x58;
    } while (uVar6 < param_2);
  }
  if (*(int *)(this + 0x58) != 0) {
    *(uint *)(this + 0x74) = *(int *)(this + 0x74) + param_2;
    bVar3 = F_00a6dec0(this);
    if (bVar3 != 0) {
      return 1;
    }
    puVar1 = *(undefined4 * PTR32 *)(this + 0x5c);
    *(undefined4 *)(this + 0x74) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x5c) = 0;
    }
    pJVar5 = this + 0x60;
    *(undefined4 *)(this + 0x58) = 0;
    if (pJVar5 != ((undefined1 *)(gen_frame + 0x8))) {
      iVar4 = *(int *)pJVar5;
      *(int *)pJVar5 = 0;
      *(undefined4 *)(this + 100) = 0;
      iVar2 = *(int *)(this + 0x68);
      *(undefined4 *)(this + 0x68) = 0;
      if (iVar4 != 0) {
        F_00429760(iVar4,(iVar2 - iVar4 >> 2) * 4,800);
      }
    }
  }
  if (*(int *)(this + 0x39b4) != 0) {
    if (*(int *)(this + 0x39b4) == 1) {
      F_00a67140(this);
      *(undefined4 *)(this + 15000) = 0;
      F_00a80ba0(this);
    }
    return 1;
  }
  *(undefined4 *)(this + 0x39b4) = 1;
  F_00a74270(this);
  return 1;
}

/* ref: FUN_00a819c0 */
uint F_00a819c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa819c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = F_00ae0850(&REFG(undefined, 0x1336e40),iVar2);
    if (uVar1 != 0) {
      uVar1 = F_00ae0850(&REFG(undefined, 0x1336e40),iVar2);
      *(undefined1 *)(uVar1 + 0x1e0) = 0;
      uVar1 = F_00ae0850(&REFG(undefined, 0x1336e40),iVar2);
      *(undefined4 *)(uVar1 + 0x1f0) = 0;
      *(undefined4 *)(uVar1 + 500) = 0;
      *(undefined4 *)(uVar1 + 0x1f8) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  *(undefined4 *)((int)this + 0x904) = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x900);
  *(undefined4 *)((int)this + 0x908) = 0;
  *(undefined4 *)((int)this + 0x120c) = 0;
  F_00c48350((undefined *)((int)this + 0x90c),0,0x900);
  *(undefined4 *)((int)this + 0x1210) = 0;
  *(undefined4 *)((int)this + 0x1214) = 0;
  F_00a808c0((undefined *)((int)this + 0x7418));
  *(byte *)((int)this + 0x88e0) = *(byte *)((int)this + 0x88e0) & 0xfe;
  uVar1 = F_00a6fbc0((undefined *)((int)this + 0x1900),1,0);
  return uVar1;
}

/* ref: Client::Game::UI::QuestTodoList::vf1 */
byte F_00a81aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa81aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pQVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  
  F_00424750(REFG(undefined4, 0x137104c));
  uVar6 = 0;
  if (param_2 != 0) {
    iVar5 = *(int *)(this + 0x74) * 0x18c;
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + uVar6 * 4) + 4)));
      if (iVar2 == 0) break;
      F_0042e430(((undefined *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(this + 0x1d0) * 4 + 0x7c))) * 0x2624 +
                            *(int *)(this + 0x198) + 0xb8 + iVar5))),
                   (*(uint *)(iVar2 + 4) & 0xffffff) + iVar2 + 4);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x18c;
    } while (uVar6 < param_2);
  }
  if (*(int *)(this + 0x58) != 0) {
    *(uint *)(this + 0x74) = *(int *)(this + 0x74) + param_2;
    bVar4 = F_00a6dec0(this);
    if (bVar4 != 0) {
      return 1;
    }
    puVar3 = *(undefined4 * PTR32 *)(this + 0x5c);
    *(undefined4 *)(this + 0x74) = 0;
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)(this + 0x5c) = 0;
    }
    pQVar1 = this + 0x60;
    *(undefined4 *)(this + 0x58) = 0;
    if (pQVar1 != ((undefined1 *)(gen_frame + 0xc))) {
      iVar5 = *(int *)pQVar1;
      *(int *)pQVar1 = 0;
      *(undefined4 *)(this + 100) = 0;
      iVar2 = *(int *)(this + 0x68);
      *(undefined4 *)(this + 0x68) = 0;
      if (iVar5 != 0) {
        F_00429760(iVar5,(iVar2 - iVar5 >> 2) * 4,800);
      }
    }
  }
  puVar3 = *(undefined4 * PTR32 *)(this + 0x204);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)(this + 0x204) = 0;
  }
  F_00a6e9a0(this);
  *(undefined4 *)(this + 0x1d8) = 0;
  F_00a813c0(this);
  return 1;
}

/* ref: FUN_00a81bd0 */
uint F_00a81bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa81bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  uint * puVar7;
  uint uVar8;
  
  ((int *)(gen_frame + 0xb0))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  if (*(short *)((int)this + 0x5ec) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)((int)this + 0x5f0);
    do {
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)F_004296a0(8,0,0x2c4);
      if ((*(int * PTR32 *)(gen_frame + 0xc)) != (int *)0x0) {
        *(*(int * PTR32 *)(gen_frame + 0xc)) = 0;
        (*(int * PTR32 *)(gen_frame + 0xc))[1] = 0;
      }
      *(*(int * PTR32 *)(gen_frame + 0xc)) = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
      ((int *)(gen_frame + 0xb0))[1] = 0;
      ((int *)(gen_frame + 0xb0))[2] = 0;
      ((int *)(gen_frame + 0xb0))[3] = 0;
      ((int *)(gen_frame + 0xb0))[4] = 0;
      ((int *)(gen_frame + 0xb0))[5] = 0;
      ((int *)(gen_frame + 0xb0))[6] = 0;
      ((int *)(gen_frame + 0xb0))[7] = 0;
      ((int *)(gen_frame + 0xb0))[8] = 0;
      ((int *)(gen_frame + 0xb0))[9] = 0;
      uVar8 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xe40) | 0x10000;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      ((int *)(gen_frame + 0xb0))[0] = 0;
      (*(uint *)(gen_frame + 0x0)) = 0;
      pvVar5 = (undefined *)F_006b8c00();
      pvVar5 = (undefined *)F_006e3240(pvVar5,uVar8);
      if (pvVar5 != (undefined *)0x0) {
        (*(uint *)(gen_frame + 0x0)) = F_006d0830(pvVar5,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x2c)) + 0x15),((int *)(gen_frame + 0xb0)),10);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      if ((*(uint *)(gen_frame + 0x0)) != 0) {
        do {
          (*(int *)(gen_frame + 0xa4)) = 0;
          (*(int *)(gen_frame + 0xa4)) = ((int *)(gen_frame + 0xb0))[(int)(*(undefined * PTR32 *)(gen_frame + 0x8))];
          (*(int * PTR32 *)(gen_frame + 0xa8)) = &(*(int *)(gen_frame + 0xa4));
          (*(char *)(gen_frame + 0xac)) = '\0';
          if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
            F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
          }
          uVar8 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
          if ((*(uint *)(gen_frame + 0x14)) <= uVar8) {
            uVar8 = uVar8 - (*(uint *)(gen_frame + 0x14));
          }
          if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4) == 0) {
            uVar6 = F_004296a0(0xc,0,0x2c4);
            *(uint *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4) = uVar6;
          }
          piVar2 = *(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4);
          if (piVar2 != (int *)0x0) {
            *piVar2 = 0;
            piVar2[1] = 0;
            *(undefined1 *)(piVar2 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0xac)) != -1) && (piVar2 != &(*(int *)(gen_frame + 0xa4)))) {
              if ((*(char *)(gen_frame + 0xac)) == '\0') {
                (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
                *piVar2 = *(*(int * PTR32 *)(gen_frame + 0xa8));
                *(undefined1 *)(piVar2 + 2) = 0;
              }
              else {
                if ((*(char *)(gen_frame + 0xac)) != '\x01') goto LAB_00a81e24;
                (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
                iVar4 = *(*(int * PTR32 *)(gen_frame + 0xa8));
                piVar1 = (int *)(iVar4 + 0x54);
                *piVar1 = *piVar1 + 1;
                *piVar2 = iVar4;
                *(undefined1 *)(piVar2 + 2) = 1;
              }
              (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
              piVar2[1] = (int)piVar2;
            }
          }
LAB_00a81e24: ;
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
          if ((*(int * PTR32 *)(gen_frame + 0xa8)) != (int *)0x0) {
            if (((*(char *)(gen_frame + 0xac)) != '\0') && ((*(char *)(gen_frame + 0xac)) == '\x01')) {
              pvVar5 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xa8));
              *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
              if (*(int *)((int)pvVar5 + 0x54) < 1) {
                F_0042c880(pvVar5);
                F_00406ad0(pvVar5);
              }
            }
            (*(int * PTR32 *)(gen_frame + 0xa8)) = (int *)0x0;
            (*(char *)(gen_frame + 0xac)) = -1;
          }
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1);
        } while ((*(undefined * PTR32 *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x0)));
      }
      F_0042cbc0(((undefined1 *)(gen_frame + 0x30)),(*(int * PTR32 *)(gen_frame + 0x2c)));
      F_004949f0(((undefined4 *)(gen_frame + 0x84)),&(*(int * PTR32 *)(gen_frame + 0xc)));
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      (*(undefined4 *)(gen_frame + 0x9c)) = 0;
      (*(undefined1 *)(gen_frame + 0xa0)) = 0;
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfbc) <= *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfc4) + 1U) {
        F_00a922a0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfb4),1);
      }
      uVar8 = *(int *)((int)pvVar5 + 0xfc0) + *(int *)((int)pvVar5 + 0xfc4);
      if (*(uint *)((int)pvVar5 + 0xfbc) <= uVar8) {
        uVar8 = uVar8 - *(uint *)((int)pvVar5 + 0xfbc);
      }
      if (*((int *)GEN_TOP((*(int *)((int)pvVar5 + 0xfb8) + uVar8 * 4))) == 0) {
        uVar6 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*(int *)((int)pvVar5 + 0xfb8) + uVar8 * 4))) = uVar6;
      }
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar5 + 0xfb8) + uVar8 * 4)));
      if (pvVar3 != (undefined *)0x0) {
        F_0042cbc0(pvVar3,((undefined1 *)(gen_frame + 0x30)));
        F_004949f0((undefined *)((int)pvVar3 + 0x54),((undefined4 *)(gen_frame + 0x84)));
        *(undefined4 *)((int)pvVar3 + 0x6c) = (*(undefined4 *)(gen_frame + 0x9c));
        *(undefined1 *)((int)pvVar3 + 0x70) = (*(undefined1 *)(gen_frame + 0xa0));
      }
      *(int *)((int)pvVar5 + 0xfc4U) = *(int *)((int)pvVar5 + 0xfc4U) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x84)));
      F_00429760(((undefined4 *)(gen_frame + 0x84))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x84))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x30)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
      F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x2c)) = (*(int * PTR32 *)(gen_frame + 0x2c)) + 0x16;
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1);
    } while ((*(undefined * PTR32 *)(gen_frame + 0x4)) < (uint)*(ushort *)((int)pvVar5 + 0x5ec));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfac) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xeb0);
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xea4);
    do {
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)F_004296a0(8,0,0x2c4);
      if ((*(int * PTR32 *)(gen_frame + 0xc)) != (int *)0x0) {
        *(*(int * PTR32 *)(gen_frame + 0xc)) = 0;
        (*(int * PTR32 *)(gen_frame + 0xc))[1] = 0;
      }
      *(*(int * PTR32 *)(gen_frame + 0xc)) = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
      (*(int * PTR32 *)(gen_frame + 0xa8)) = &(*(int *)(gen_frame + 0xa4));
      (*(int *)(gen_frame + 0xa4)) = 0;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0xa4)) = *(*(int * PTR32 *)(gen_frame + 0x2c));
      (*(char *)(gen_frame + 0xac)) = '\0';
      F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
      uVar8 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
      if ((*(uint *)(gen_frame + 0x14)) <= uVar8) {
        uVar8 = uVar8 - (*(uint *)(gen_frame + 0x14));
      }
      if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4) == 0) {
        uVar6 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4) = uVar6;
      }
      piVar2 = *(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar8 * 4);
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
        piVar2[1] = 0;
        *(undefined1 *)(piVar2 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xac)) != -1) && (piVar2 != &(*(int *)(gen_frame + 0xa4)))) {
          if ((*(char *)(gen_frame + 0xac)) == '\0') {
            (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
            *piVar2 = *(*(int * PTR32 *)(gen_frame + 0xa8));
            *(undefined1 *)(piVar2 + 2) = 0;
          }
          else {
            if ((*(char *)(gen_frame + 0xac)) != '\x01') goto LAB_00a82156;
            (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
            iVar4 = *(*(int * PTR32 *)(gen_frame + 0xa8));
            piVar1 = (int *)(iVar4 + 0x54);
            *piVar1 = *piVar1 + 1;
            *piVar2 = iVar4;
            *(undefined1 *)(piVar2 + 2) = 1;
          }
          (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
          piVar2[1] = (int)piVar2;
        }
      }
LAB_00a82156: ;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0xa8)) != (int *)0x0) {
        if (((*(char *)(gen_frame + 0xac)) != '\0') && ((*(char *)(gen_frame + 0xac)) == '\x01')) {
          pvVar5 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xa8));
          *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
          if (*(int *)((int)pvVar5 + 0x54) < 1) {
            F_0042c880(pvVar5);
            F_00406ad0(pvVar5);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0xa8)) = (int *)0x0;
        (*(char *)(gen_frame + 0xac)) = -1;
      }
      puVar7 = (uint *)F_00ab31d0(0x18f75);
      F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x8)),(*puVar7 & 0xffffff) + (int)puVar7);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x30)),(*(undefined * PTR32 *)(gen_frame + 0x8)));
      F_004949f0(((undefined4 *)(gen_frame + 0x84)),&(*(int * PTR32 *)(gen_frame + 0xc)));
      pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      (*(undefined4 *)(gen_frame + 0x9c)) = 0;
      (*(undefined1 *)(gen_frame + 0xa0)) = 0;
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfbc) <= *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfc4) + 1U) {
        F_00a922a0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfb4),1);
      }
      uVar8 = *(int *)((int)pvVar3 + 0xfc0) + *(int *)((int)pvVar3 + 0xfc4);
      if (*(uint *)((int)pvVar3 + 0xfbc) <= uVar8) {
        uVar8 = uVar8 - *(uint *)((int)pvVar3 + 0xfbc);
      }
      if (*((int *)GEN_TOP((*(int *)((int)pvVar3 + 0xfb8) + uVar8 * 4))) == 0) {
        uVar6 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*(int *)((int)pvVar3 + 0xfb8) + uVar8 * 4))) = uVar6;
      }
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar3 + 0xfb8) + uVar8 * 4)));
      if (pvVar5 != (undefined *)0x0) {
        F_0042cbc0(pvVar5,((undefined1 *)(gen_frame + 0x30)));
        F_004949f0((undefined *)((int)pvVar5 + 0x54),((undefined4 *)(gen_frame + 0x84)));
        *(undefined4 *)((int)pvVar5 + 0x6c) = (*(undefined4 *)(gen_frame + 0x9c));
        *(undefined1 *)((int)pvVar5 + 0x70) = (*(undefined1 *)(gen_frame + 0xa0));
      }
      *(int *)((int)pvVar3 + 0xfc4U) = *(int *)((int)pvVar3 + 0xfc4U) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x84)));
      F_00429760(((undefined4 *)(gen_frame + 0x84))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x84))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x30)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
      F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x2c)) = (*(int * PTR32 *)(gen_frame + 0x2c)) + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x54);
      pvVar5 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1);
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar5;
    } while (pvVar5 < *(undefined * PTR32 *)((int)pvVar3 + 0xfac));
  }
  F_00c47745(((int *)(gen_frame + 0xb0))[10] ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)pvVar5;
}

/* ref: FUN_00a82300 */
uint F_00a82300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa82300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  short sVar1;
  int * piVar2;
  float fVar3;
  byte bVar4;
  uint in_EAX = 0;
  float * pfVar5;
  uint uVar6;
  undefined * pvVar7;
  float10 fVar8;
  uint * puVar9;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x1450);
  if ((piVar2 != (int *)0x0) && (in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), (char)in_EAX != '\0'))
  {
    pfVar5 = (float *)F_00ab37e0(param_1);
    in_EAX = 0;
    if (pfVar5 != (float *)0x0) {
      (*(uint *)(gen_frame + 0x48)) = (uint)*(ushort *)(pfVar5 + 8);
      uVar6 = F_00ab1c90((uint)*(ushort *)(pfVar5 + 8));
      in_EAX = 0;
      if (uVar6 != 0) {
        (*(uint *)(gen_frame + 0x54)) = (uint)*(ushort *)(uVar6 + 0x1e);
        (*(uint *)(gen_frame + 0x58)) = (uint)*(ushort *)(uVar6 + 0x20);
        (*(float *)(gen_frame + 0x50)) = F_00a6a920(pfVar5);
        fVar3 = pfVar5[9];
        if ((fVar3 == 5.60519e-44) || (fVar3 == 1.96182e-44)) {
          sVar1 = *((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1450) + 0x1d4))) + 2)));
          if ((sVar1 == -0x7fff) || ((sVar1 == -0x7ffe || (sVar1 == -0x7ff9)))) {
            fVar8 = F_007733a0(REFG(float, 0x1087ef8));
            (*(float *)(gen_frame + 0x50)) = (float)fVar8;
          }
          (*(uint *)(gen_frame + 0x4c)) = 0xebf9;
        }
        else {
          bVar4 = F_00a5f470((undefined4)gen_fl2bits(fVar3));
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = bVar4;
          (*(uint *)(gen_frame + 0x4c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4c)), 1, 3),bVar4);
          (*(uint *)(gen_frame + 0x4c)) = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1450) + 0x200))))
                               (*(int * PTR32 *)((int)this + 0x1450),(*(uint *)(gen_frame + 0x4c)),
                                (undefined4)gen_fl2bits(pfVar5[5]),param_1,
                                (undefined4)gen_fl2bits(pfVar5[5]));
        }
        uVar6 = F_00a6a710(((undefined1 *)(gen_frame + 0x8)),param_1,(int)this + 0x145c,(*(uint *)(gen_frame + 0x4c)),*pfVar5,pfVar5[1],
                             pfVar5[2],(*(float *)(gen_frame + 0x50)),(*(uint *)(gen_frame + 0x48)),(undefined4)gen_fl2bits(pfVar5[6]),(*(uint *)(gen_frame + 0x54)),
                             (*(uint *)(gen_frame + 0x58)),0xff);
        F_00a942b0((undefined *)((int)this + 0x14b0),uVar6);
        (*(int *)(gen_frame + 0x44)) = (int)this + 0x1454;
        puVar9 = &(*(uint *)(gen_frame + 0x58));
        (*(uint *)(gen_frame + 0x48)) = (*(int *)((int)this + 0x14b4) - *(int *)((int)this + 0x14b0)) / 0x34 + -1;
        pvVar7 = (undefined *)F_00a9de00(this,&(*(uint *)(gen_frame + 0x54)));
        pvVar7 = (undefined *)F_00a9b010(pvVar7,puVar9);
        F_00a92ca0(pvVar7,((undefined1 *)(gen_frame + 0x3c)),&(*(int *)(gen_frame + 0x44)));
        *(undefined1 *)((int)this + 0x14c0) = 1;
        if ((uint)gen_fl2bits(pfVar5[6]) < 0x6c) {
          F_00a8ac50((undefined *)((int)this + 0x20),(undefined4)gen_fl2bits(pfVar5[6]),1);
        }
        in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1450) + 600))))
                           (*(int * PTR32 *)((int)this + 0x1450),param_1,(*(uint *)(gen_frame + 0x4c)),
                            (undefined4)gen_fl2bits(*pfVar5),(undefined4)gen_fl2bits(pfVar5[1]),
                            (undefined4)gen_fl2bits(pfVar5[2]));
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a82500 */
uint F_00a82500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa82500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  int * piVar9;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x14b4);
  piVar7 = *(int * PTR32 *)((int)this + 0x14b0);
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (piVar7 != piVar3) {
    while (*piVar7 != param_1) {
      piVar7 = piVar7 + 0xd;
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
      if (piVar7 == piVar3) {
        return (uint)piVar3;
      }
    }
    (*(int *)(gen_frame + 0x10)) = piVar7[10];
    (*(int *)(gen_frame + 0x14)) = piVar7[0xb];
    piVar3 = &(*(int *)(gen_frame + 0x14));
    (*(int *)(gen_frame + 0xc)) = (int)this + 0x1454;
    pvVar2 = (undefined *)F_00a9de00(this,&(*(int *)(gen_frame + 0x10)));
    pvVar2 = (undefined *)F_00a9b010(pvVar2,piVar3);
    F_00a8fd90(pvVar2,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0xc)));
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != (*(int * PTR32 *)(gen_frame + 0x4))) {
      do {
        if ((*(int * PTR32 *)(gen_frame + 0x0))[4] == (*(uint *)(gen_frame + 0x18))) {
          piVar3 = (*(int * PTR32 *)(gen_frame + 0x0));
          if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x0)) + 0x15) == '\0') {
            piVar3 = (int *)(*(int * PTR32 *)(gen_frame + 0x0))[2];
            if (*(char *)((int)piVar3 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x15);
              piVar9 = (int *)*piVar3;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar9 + 0x15);
                piVar3 = piVar9;
                piVar9 = (int *)*piVar9;
              }
            }
            else {
              cVar1 = *(char *)((*(int * PTR32 *)(gen_frame + 0x0))[1] + 0x15);
              piVar6 = (int *)(*(int * PTR32 *)(gen_frame + 0x0))[1];
              piVar9 = (*(int * PTR32 *)(gen_frame + 0x0));
              while ((piVar3 = piVar6, cVar1 == '\0' && (piVar9 == (int *)piVar3[2]))) {
                cVar1 = *(char *)(piVar3[1] + 0x15);
                piVar6 = (int *)piVar3[1];
                piVar9 = piVar3;
              }
            }
          }
          piVar9 = &(*(int *)(gen_frame + 0xc));
          piVar6 = &(*(int *)(gen_frame + 0x14));
          pvVar2 = (undefined *)F_00a9de00(this,&(*(int *)(gen_frame + 0x10)));
          pvVar2 = (undefined *)F_00a9b010(pvVar2,piVar6);
          F_00953740(pvVar2,piVar9,(*(int * PTR32 *)(gen_frame + 0x0)));
          (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
        }
        else {
          if ((*(uint *)(gen_frame + 0x18)) < (uint)(*(int * PTR32 *)(gen_frame + 0x0))[4]) {
            (*(int * PTR32 *)(gen_frame + 0x0))[4] = (*(int * PTR32 *)(gen_frame + 0x0))[4] + -1;
          }
          if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x0)) + 0x15) == '\0') {
            piVar3 = (int *)(*(int * PTR32 *)(gen_frame + 0x0))[2];
            if (*(char *)((int)piVar3 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x15);
              (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
              piVar3 = (int *)*piVar3;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar3 + 0x15);
                (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
                piVar3 = (int *)*piVar3;
              }
            }
            else {
              cVar1 = *(char *)((*(int * PTR32 *)(gen_frame + 0x0))[1] + 0x15);
              piVar9 = (int *)(*(int * PTR32 *)(gen_frame + 0x0))[1];
              piVar3 = (*(int * PTR32 *)(gen_frame + 0x0));
              while (((*(int * PTR32 *)(gen_frame + 0x0)) = piVar9, cVar1 == '\0' && (piVar3 == (int *)(*(int * PTR32 *)(gen_frame + 0x0))[2]))) {
                cVar1 = *(char *)((*(int * PTR32 *)(gen_frame + 0x0))[1] + 0x15);
                piVar9 = (int *)(*(int * PTR32 *)(gen_frame + 0x0))[1];
                piVar3 = (*(int * PTR32 *)(gen_frame + 0x0));
              }
            }
          }
        }
      } while ((*(int * PTR32 *)(gen_frame + 0x0)) != (*(int * PTR32 *)(gen_frame + 0x4)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1450) + 0x25c))))(*(int * PTR32 *)((int)this + 0x1450),param_1);
    piVar3 = *(int * PTR32 *)((int)this + 0x14b4);
    piVar9 = piVar7;
    while (piVar7 = piVar7 + 0xd, piVar7 != piVar3) {
      piVar5 = piVar9 + 0xd;
      piVar6 = piVar7;
      piVar8 = piVar9;
      for (iVar4 = 0xd; piVar9 = piVar5, iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x8))[0x52d] = (*(int * PTR32 *)(gen_frame + 0x8))[0x52d] + -0x34;
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x8));
  }
  return (uint)piVar3;
}

/* ref: FUN_00a826a0 */
uint F_00a826a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa826a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int * piVar8;
  undefined * pvVar9;
  uint uVar10;
  int * piVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  undefined4 * puVar14;
  
  iVar7 = (*(int *)&gen_args[1]);
  puVar12 = ((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) * 0x34 + *(int *)((*(int *)&gen_args[1]) + 0x5c))));
  (*(undefined4 *)(gen_frame + 0x10)) = *puVar12;
  (*(int *)&gen_args[1]) = puVar12[0xb];
  (*(undefined4 *)(gen_frame + 0x18)) = puVar12[10];
  if ((char)(*(int *)&gen_args[3]) != '\0') {
    F_00a767f0((*(undefined * PTR32 *)&gen_args[0]),iVar7,(*(int * PTR32 *)&gen_args[2]));
  }
  puVar14 = &(*(int *)&gen_args[1]);
  (*(int *)(gen_frame + 0x14)) = iVar7;
  pvVar9 = (undefined *)F_00a9de00((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x18)));
  pvVar9 = (undefined *)F_00a9b010(pvVar9,puVar14);
  uVar10 = F_00a8fd90(pvVar9,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x14)));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != (*(int * PTR32 *)(gen_frame + 0x8))) {
    while ((int *)(*(int * PTR32 *)(gen_frame + 0x4))[4] != (*(int * PTR32 *)&gen_args[2])) {
      piVar11 = (*(int * PTR32 *)&gen_args[2]);
      if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x4)) + 0x15) == '\0') {
        piVar3 = (int *)(*(int * PTR32 *)(gen_frame + 0x4))[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar2 = *(char *)(*piVar3 + 0x15);
          piVar11 = (int *)*piVar3;
          while ((*(int * PTR32 *)(gen_frame + 0x4)) = piVar3, cVar2 == '\0') {
            cVar2 = *(char *)(*piVar11 + 0x15);
            piVar3 = piVar11;
            piVar11 = (int *)*piVar11;
          }
        }
        else {
          cVar2 = *(char *)((*(int * PTR32 *)(gen_frame + 0x4))[1] + 0x15);
          piVar8 = (int *)(*(int * PTR32 *)(gen_frame + 0x4))[1];
          piVar3 = (*(int * PTR32 *)(gen_frame + 0x4));
          while ((piVar11 = piVar8, (*(int * PTR32 *)(gen_frame + 0x4)) = piVar11, cVar2 == '\0' &&
                 (piVar3 == (int *)piVar11[2]))) {
            cVar2 = *(char *)(piVar11[1] + 0x15);
            piVar8 = (int *)piVar11[1];
            piVar3 = piVar11;
          }
        }
      }
      if ((*(int * PTR32 *)(gen_frame + 0x4)) == (*(int * PTR32 *)(gen_frame + 0x8))) {
        return (uint)piVar11;
      }
    }
    puVar14 = &(*(int * PTR32 *)&gen_args[2]);
    puVar13 = &(*(int *)&gen_args[1]);
    pvVar9 = (undefined *)F_00a9de00((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x18)));
    pvVar9 = (undefined *)F_00a9b010(pvVar9,puVar13);
    uVar10 = F_00953740(pvVar9,puVar14,(*(int * PTR32 *)(gen_frame + 0x4)));
    if (((char)(*(int *)&gen_args[3]) != '\0') &&
       (uVar10 = F_00a912a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(int *)&gen_args[3]),&(*(undefined4 *)(gen_frame + 0x10))),
       (*(int *)&gen_args[3]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))) {
      uVar10 = 0;
      if (*(int * PTR32 *)((*(int *)&gen_args[3]) + 0x20) != (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x4)) = *(int * PTR32 *)((*(int *)&gen_args[3]) + 0x20);
        puVar14 = &(*(int *)&gen_args[1]);
        (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)*(undefined4 *)((*(int *)&gen_args[3]) + 0x24);
        pvVar9 = (undefined *)F_00a9de00((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x18)));
        pvVar9 = (undefined *)F_00a9b010(pvVar9,puVar14);
        uVar10 = F_009670d0(pvVar9,((undefined1 *)(gen_frame + 0xc)),&(*(int * PTR32 *)(gen_frame + 0x4)));
      }
    }
    uVar4 = puVar12[9];
    if (uVar4 < 0x6c) {
      puVar1 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uVar4 >> 6) * 8 + 0x20)));
      uVar6 = (ulonglong)((byte)uVar4 & 0x3f);
      lVar5 = ((ulonglong)((uVar6 < 0x40) ? ((1L << uVar6)) : 0));
      uVar10 = (uint)lVar5;
      *puVar1 = *puVar1 | uVar10;
      puVar1[1] = puVar1[1] | (uint)((ulonglong)lVar5 >> 0x20);
    }
  }
  return uVar10;
}

/* ref: FUN_00a82810 */
uint F_00a82810(unsigned int gen_a0)
{
  GEN_ENTER(0xa82810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a71980(this);
  F_00a9d900((undefined *)((int)this + 4),*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *(undefined4 *)*(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 8);
  uVar4 = *(uint *)((int)this + 8);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    uVar4 = 0;
    if (uVar2 != 0) {
      piVar3 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*(undefined4 *)((int)this + 0x24));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  return uVar4;
}

/* ref: FUN_00a828a0 */
uint F_00a828a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa828a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  uint * puVar9;
  int iVar10;
  undefined4 * puVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(int *)(gen_frame + 0x2c)) = param_1;
  (*(int *)(gen_frame + 0x30)) = *(int *)((int)this + 0x2c);
  (*(int * PTR32 *)(gen_frame + 0x48)) = this;
  *(uint *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + param_2;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)F_004296a0(0x28,0,0x191);
  *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 9) = 1;
  *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0x25) = 1;
  (*(undefined2 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x68)) = 0;
  if (param_2 != 0) {
    do {
      iVar10 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x2c)) + (*(uint *)(gen_frame + 0x68)) * 4) + 4)));
      (*(uint *)(gen_frame + 0x6c)) = F_00ab1c90(*(undefined4 *)(iVar10 + 8));
      if ((*(uint *)(gen_frame + 0x6c)) != 0) {
        (*(undefined2 *)(gen_frame + 0x50)) = *(undefined2 *)((*(uint *)(gen_frame + 0x6c)) + 0x1c);
        (*(undefined4 *)(gen_frame + 0x5c)) = 0;
        (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)F_004296a0(0x28,0,0x191);
        *(*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
        (*(undefined4 * PTR32 *)(gen_frame + 0x58))[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
        (*(undefined4 * PTR32 *)(gen_frame + 0x58))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
        *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 9) = 1;
        *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 0x25) = 1;
        F_00a9ae70(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x38)));
        piVar6 = (int *)F_004296a0(0x24,0,0x191);
        *piVar6 = *(int *)((int)this + 8);
        piVar6[1] = *(int *)((int)this + 8);
        piVar6[2] = *(int *)((int)this + 8);
        *(undefined2 *)(piVar6 + 8) = 0;
        if (piVar6 + 3 != (int *)0x0) {
          *(undefined2 *)(piVar6 + 3) = (*(undefined2 *)(gen_frame + 0x50));
          piVar6[6] = 0;
          uVar7 = F_004296a0(0x28,0,0x191);
          piVar6[5] = uVar7;
          *(uint *)uVar7 = uVar7;
          *(int *)(piVar6[5] + 4) = piVar6[5];
          *(int *)(piVar6[5] + 8) = piVar6[5];
          *(undefined1 *)(piVar6[5] + 0x24) = 1;
          *(undefined1 *)(piVar6[5] + 0x25) = 1;
          F_00a9ae70(piVar6 + 4,((undefined1 *)(gen_frame + 0x54)));
          this = (*(int * PTR32 *)(gen_frame + 0x48));
        }
        F_00a9dc70((int *)((int)this + 4),((int *)(gen_frame + 0x8)),piVar6,0);
        F_00a9b1a0(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x34)),*(*(undefined4 * PTR32 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x58)));
        F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x58)),0x28,0x191);
        (*(undefined2 *)(gen_frame + 0x50)) = 0;
        (*(undefined2 *)(gen_frame + 0x4c)) = *(undefined2 *)((*(uint *)(gen_frame + 0x6c)) + 0x20);
        F_00a93db0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x14)));
        iVar5 = ((int *)(gen_frame + 0x8))[0];
        puVar8 = (undefined4 *)F_004296a0(0x28,0,0x191);
        *puVar8 = *(undefined4 *)(iVar5 + 0x14);
        puVar8[1] = *(undefined4 *)(iVar5 + 0x14);
        puVar8[2] = *(undefined4 *)(iVar5 + 0x14);
        *(undefined2 *)(puVar8 + 9) = 0;
        if (puVar8 + 3 != (undefined4 *)0x0) {
          *(undefined2 *)(puVar8 + 3) = (*(undefined2 *)(gen_frame + 0x4c));
          *(undefined2 *)(puVar8 + 4) = (*(undefined2 *)(gen_frame + 0x50));
          F_00a93db0(puVar8 + 5,((undefined1 *)(gen_frame + 0x54)));
        }
        F_00a9a0b0((undefined *)(iVar5 + 0x10),((int *)(gen_frame + 0x24)),puVar8,0);
        F_00a934c0(((undefined1 *)(gen_frame + 0x54)));
        iVar5 = ((int *)(gen_frame + 0x24))[0];
        *(undefined2 *)(((int *)(gen_frame + 0x24))[0] + 0x10) = *(undefined2 *)((*(uint *)(gen_frame + 0x6c)) + 0x22);
        puVar9 = (uint *)F_00ab2750((uint)*(ushort *)(iVar10 + 0x34));
        F_0042b630(((undefined1 *)(gen_frame + 0x70)));
        (*(undefined4 *)(gen_frame + 0xf2)) = 0;
        (*(undefined4 *)(gen_frame + 0xee)) = 0;
        (*(short *)(gen_frame + 0xec)) = (short)(*(int *)(gen_frame + 0x30)) + (short)(*(uint *)(gen_frame + 0x68));
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xf2)) + 0)) = *(undefined1 *)(iVar10 + 0x3a);
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xf2)) + 2)) = *(undefined1 *)(iVar10 + 0x3c);
        uVar7 = (*(int *)(gen_frame + 0x30)) + (*(uint *)(gen_frame + 0x68)) >> 3;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xf2)) + 3)) =
             ((&REFG(undefined, 0x14ab32a))[uVar7] &
             (byte)(1 << ((char)((*(int *)(gen_frame + 0x30)) + (*(uint *)(gen_frame + 0x68))) + (char)uVar7 * -8 & 0x1fU))) != 0;
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xee)) + 0)) = *(undefined2 *)(iVar10 + 0x36);
        uVar4 = *(undefined4 *)(iVar10 + 0x36);
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xee)) + 2)) = *(undefined2 *)(iVar10 + 0x38);
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xf2)) + 1)) = *(undefined1 *)(iVar10 + 0x3b);
        (*(undefined4 *)(gen_frame + 0xf2)) = CONCAT22(CONCAT11((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xf2)) + 3)),*(undefined1 *)(iVar10 + 0x3c)),
                           *(undefined2 *)(iVar10 + 0x3a));
        (*(undefined4 *)(gen_frame + 0xee)) = uVar4;
        if (puVar9 != (uint *)0x0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x70)),(*puVar9 & 0xffffff) + (int)puVar9);
        }
        ((undefined4 *)(gen_frame + 0xc4))[0] = *(undefined4 *)(iVar10 + 0xc);
        ((undefined4 *)(gen_frame + 0xc4))[1] = *(undefined4 *)(iVar10 + 0x10);
        ((undefined4 *)(gen_frame + 0xc4))[2] = *(undefined4 *)(iVar10 + 0x14);
        ((undefined4 *)(gen_frame + 0xc4))[3] = *(undefined4 *)(iVar10 + 0x18);
        (*(undefined4 *)(gen_frame + 0xd4)) = *(undefined4 *)(iVar10 + 0x1c);
        (*(undefined4 *)(gen_frame + 0xd8)) = *(undefined4 *)(iVar10 + 0x20);
        (*(undefined4 *)(gen_frame + 0xdc)) = *(undefined4 *)(iVar10 + 0x24);
        (*(undefined4 *)(gen_frame + 0xe0)) = *(undefined4 *)(iVar10 + 0x28);
        (*(undefined4 *)(gen_frame + 0xe4)) = *(undefined4 *)(iVar10 + 0x2c);
        (*(undefined4 *)(gen_frame + 0xe8)) = *(undefined4 *)(iVar10 + 0x30);
        puVar1 = *(undefined1 * PTR32 *)(iVar5 + 0x18);
        if ((((undefined1 *)(gen_frame + 0x70)) < puVar1) && (puVar2 = *(undefined1 * PTR32 *)(iVar5 + 0x14), puVar2 <= ((undefined1 *)(gen_frame + 0x70)))) {
          if (puVar1 == *(undefined1 * PTR32 *)(iVar5 + 0x1c)) {
            F_00a944e0((undefined *)(iVar5 + 0x14),1);
          }
          pvVar3 = *(undefined * PTR32 *)(iVar5 + 0x18);
          uVar7 = (((int)((undefined1 *)(gen_frame + 0x70)) - (int)puVar2) / 0x88) * 0x88 + *(int *)(iVar5 + 0x14);
          (*(undefined * PTR32 *)(gen_frame + 0x64)) = pvVar3;
          (*(uint *)(gen_frame + 0x6c)) = uVar7;
          if (pvVar3 != (undefined *)0x0) {
            F_0042cbc0(pvVar3,uVar7);
            puVar8 = (undefined4 *)(uVar7 + 0x54);
            puVar11 = (undefined4 *)((int)pvVar3 + 0x54);
            for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            *(undefined2 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x7c) = *(undefined2 *)((*(uint *)(gen_frame + 0x6c)) + 0x7c);
            *(undefined2 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x7e) = *(undefined2 *)((*(uint *)(gen_frame + 0x6c)) + 0x7e);
            *(undefined2 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x80) = *(undefined2 *)((*(uint *)(gen_frame + 0x6c)) + 0x80);
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x82) = *(undefined1 *)((*(uint *)(gen_frame + 0x6c)) + 0x82);
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x83) = *(undefined1 *)((*(uint *)(gen_frame + 0x6c)) + 0x83);
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x84) = *(undefined1 *)((*(uint *)(gen_frame + 0x6c)) + 0x84);
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x85) = *(undefined1 *)((*(uint *)(gen_frame + 0x6c)) + 0x85);
          }
        }
        else {
          if (puVar1 == *(undefined1 * PTR32 *)(iVar5 + 0x1c)) {
            F_00a944e0((undefined *)(iVar5 + 0x14),1);
          }
          pvVar3 = *(undefined * PTR32 *)(iVar5 + 0x18);
          (*(undefined * PTR32 *)(gen_frame + 0x64)) = pvVar3;
          if (pvVar3 != (undefined *)0x0) {
            F_0042cbc0(pvVar3,((undefined1 *)(gen_frame + 0x70)));
            puVar8 = ((undefined4 *)(gen_frame + 0xc4));
            puVar11 = (undefined4 *)((int)pvVar3 + 0x54);
            for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            *(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x7c) = (*(short *)(gen_frame + 0xec));
            *(undefined2 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x7e) = (undefined2)(*(undefined4 *)(gen_frame + 0xee));
            *(undefined2 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x80) = (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xee)) + 2));
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x82) = (undefined1)(*(undefined4 *)(gen_frame + 0xf2));
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x83) = (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xf2)) + 1));
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x84) = (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xf2)) + 2));
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x85) = (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xf2)) + 3));
          }
        }
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 0x88;
        F_0042c880(((undefined1 *)(gen_frame + 0x70)));
        this = (*(int * PTR32 *)(gen_frame + 0x48));
      }
      (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) + 1;
    } while ((*(uint *)(gen_frame + 0x68)) < param_2);
  }
  puVar8 = *(undefined4 * PTR32 *)((int)this + 0x24);
  if (puVar8 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    *(int *)((int)this + 0x24) = 0;
  }
  if (*(uint *)((int)this + 0x2c) < 0x68) {
    F_00a82e50(this);
  }
  else if (200 < *(uint *)((int)this + 0x30)) {
    *(int *)((int)this + 0x34) = 2;
    piVar6 = *(int * PTR32 *)this;
    if (piVar6 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6,5);
    }
  }
  F_00a9b1a0(((undefined1 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x34)),*(*(undefined4 * PTR32 *)(gen_frame + 0x3c)),(*(undefined4 * PTR32 *)(gen_frame + 0x3c)));
  uVar12 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x3c)),0x28,0x191);
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return (uint)uVar12;
}

/* ref: FUN_00a82e50 */
uint F_00a82e50(unsigned int gen_a0)
{
  GEN_ENTER(0xa82e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  
  piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  if (0x68 < *(int *)((int)this + 0x2c) + uVar2) {
    uVar2 = 0x68 - *(int *)((int)this + 0x2c);
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,uVar2,0);
    this_00[5] = uVar2;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e7904));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa828a0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x24) = this_00;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x24),uVar3,*(int *)((int)this + 0x2c) + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0x24));
  return uVar2;
}

/* ref: FUN_00a82f00 */
uint F_00a82f00(unsigned int gen_a0)
{
  GEN_ENTER(0xa82f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  F_00a72450((undefined *)((int)this + 0x1904));
  F_00a70fe0((undefined *)((int)this + 0x1950));
  F_00a73150((undefined *)((int)this + 0x237c));
  F_00a82810((undefined *)((int)this + 0x2344));
  F_00a6fb50((undefined *)((int)this + 0x23f4));
  F_00a66f30((undefined *)((int)this + 0x2448));
  F_00a73a30((undefined *)((int)this + 0x5ef8));
  F_00a69ca0((undefined *)((int)this + 0x6ec4));
  if (REFG(int, 0x1488344) != 0) {
    iVar4 = (int)this + 0x7084;
    this_00 = (undefined *)F_006b8c00();
    F_006ff0a0(this_00,iVar4);
  }
  *(undefined1 *)((int)this + 0x70a1) = 0;
  F_00b9ff40((undefined *)((int)this + 0x70ec));
  *(undefined4 *)((int)this + 0x735c) = 0;
  *(undefined1 *)((int)this + 0x73b5) = 0;
  *(undefined4 *)((int)this + 0x73b8) = 0;
  *(undefined1 *)((int)this + 0x7411) = 0;
  F_00a808c0((undefined *)((int)this + 0x7418));
  F_00a859d0((undefined *)((int)this + 0x8948));
  F_00bc6580();
  F_00b9d660((undefined *)((int)this + 0x92f4));
  uVar3 = *(uint *)((int)this + 0xb070);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xb06c);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xb070);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0xb070) = 0;
    }
  }
  *(undefined4 *)((int)this + 0xb06c) = 0;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x92e4);
  *(undefined4 *)((int)this + 0xb074) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x92e4) = 0;
  }
  return uVar3;
}

/* ref: Client::Game::UI::QuestUI::vf1 */
byte F_00a83030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa83030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  byte bVar4;
  undefined * pQVar5;
  uint uVar6;
  
  F_00424750(REFG(undefined4, 0x137104c));
  uVar6 = 0;
  if (param_2 != 0) {
    pQVar5 = this + *(int *)(this + 0x74) * 0x58 + 0x5f0;
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + uVar6 * 4) + 4)));
      if (iVar1 == 0) break;
      F_0042e430(pQVar5,(*(uint *)(iVar1 + 4) & 0xffffff) + iVar1 + 4);
      uVar6 = uVar6 + 1;
      pQVar5 = pQVar5 + 0x58;
    } while (uVar6 < param_2);
  }
  if (*(int *)(this + 0x58) != 0) {
    *(uint *)(this + 0x74) = *(int *)(this + 0x74) + param_2;
    bVar4 = F_00a6dec0(this);
    if (bVar4 != 0) {
      return 1;
    }
    puVar2 = *(undefined4 * PTR32 *)(this + 0x5c);
    *(undefined4 *)(this + 0x74) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x5c) = 0;
    }
    pQVar5 = this + 0x60;
    *(undefined4 *)(this + 0x58) = 0;
    if (pQVar5 != ((undefined1 *)(gen_frame + 0xc))) {
      iVar1 = *(int *)pQVar5;
      *(int *)pQVar5 = 0;
      *(undefined4 *)(this + 100) = 0;
      iVar3 = *(int *)(this + 0x68);
      *(undefined4 *)(this + 0x68) = 0;
      if (iVar1 != 0) {
        F_00429760(iVar1,(iVar3 - iVar1 >> 2) * 4,800);
      }
    }
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0xe34);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 0xe34) = 0;
  }
  *(undefined4 *)(this + 0xe30) = 0;
  *(undefined4 *)(this + 0xfb0) = 0;
  F_00a81bd0(this);
  return 1;
}

/* ref: FUN_00a83140 */
uint F_00a83140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa83140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined * pvVar8;
  undefined4 * puVar9;
  
  puVar9 = ((undefined4 *)GEN_TOP((param_2 * 0x34 + *(int *)(param_1 + 0x5c))));
  (*(undefined4 *)(gen_frame + 0x38)) = puVar9[10];
  (*(undefined4 *)(gen_frame + 0x3c)) = puVar9[0xb];
  (*(undefined4 *)(gen_frame + 0x54)) = *puVar9;
  (*(undefined2 *)(gen_frame + 0x58)) = *(undefined2 *)(puVar9 + 3);
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this;
  F_00a912a0((undefined *)((int)this + 0x10),&(*(int *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x54)));
  iVar7 = (*(int *)(gen_frame + 0x4c));
  if ((*(int *)(gen_frame + 0x4c)) == *(int *)((int)this + 0x14)) {
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (undefined4 *)F_004296a0(0x18,0,800);
    *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0x20))[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0x20))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 5) = 1;
    *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 0x15) = 1;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x54));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)F_004296a0(0x18,0,800);
    *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8))[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 5) = 1;
    *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x15) = 1;
    F_00a92ec0(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x2c));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x30));
    puVar6 = (undefined4 *)F_004296a0(0x2c,0,800);
    *puVar6 = *(undefined4 *)((int)this + 0x14);
    puVar6[1] = *(undefined4 *)((int)this + 0x14);
    puVar6[2] = *(undefined4 *)((int)this + 0x14);
    *(undefined2 *)(puVar6 + 10) = 0;
    F_00a992a0((int)this + 0x1d,puVar6 + 3,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00a9a1a0((undefined *)((int)this + 0x10),&(*(int *)(gen_frame + 0x50)),puVar6,0);
    F_0095c5e0(((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x4c)),*(*(undefined4 * PTR32 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x8)),0x18,800);
    F_0095c5e0(((undefined1 *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x4c)),*(*(undefined4 * PTR32 *)(gen_frame + 0x20)),(*(undefined4 * PTR32 *)(gen_frame + 0x20)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x20)),0x18,800);
    iVar7 = (*(int *)(gen_frame + 0x50));
    this = (*(undefined * PTR32 *)(gen_frame + 0x44));
  }
  (*(uint *)(gen_frame + 0x40)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)param_2;
  F_009670d0((undefined *)(iVar7 + 0x10),((undefined1 *)(gen_frame + 0x48)),&(*(uint *)(gen_frame + 0x40)));
  uVar3 = *(uint *)(iVar7 + 0x20);
  if (uVar3 != 0) {
    uVar2 = *((undefined2 *)GEN_TOP((*(int *)(uVar3 + 0x5c) + 0xc + *(int *)(iVar7 + 0x24) * 0x34)));
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x54)) + 0)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x54)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x54)) + 2)),uVar2);
    if ((byte)(*(undefined2 *)(gen_frame + 0x58)) <= (byte)uVar2) {
      if ((byte)uVar2 != (byte)(*(undefined2 *)(gen_frame + 0x58))) {
        return uVar3;
      }
      if ((byte)((ushort)(*(undefined2 *)(gen_frame + 0x58)) >> 8) <= (byte)((ushort)uVar2 >> 8)) {
        return uVar3;
      }
    }
    F_00a826a0(this,uVar3,*(undefined4 *)(iVar7 + 0x24),0);
  }
  puVar6 = &(*(undefined4 *)(gen_frame + 0x3c));
  (*(uint *)(gen_frame + 0x40)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)param_2;
  pvVar8 = (undefined *)F_00a9de00(this,&(*(undefined4 *)(gen_frame + 0x38)));
  pvVar8 = (undefined *)F_00a9b010(pvVar8,puVar6);
  F_009670d0(pvVar8,((undefined1 *)(gen_frame + 0x34)),&(*(uint *)(gen_frame + 0x40)));
  *(uint *)(iVar7 + 0x20) = param_1;
  *(int *)(iVar7 + 0x24) = param_2;
  uVar3 = puVar9[9];
  if (uVar3 < 0x6c) {
    puVar1 = ((uint *)GEN_TOP(((int)this + (uVar3 >> 6) * 8 + 0x20)));
    uVar5 = (ulonglong)((byte)uVar3 & 0x3f);
    lVar4 = ((ulonglong)((uVar5 < 0x40) ? ((1L << uVar5)) : 0));
    param_1 = (uint)lVar4;
    *puVar1 = *puVar1 | param_1;
    puVar1[1] = puVar1[1] | (uint)((ulonglong)lVar4 >> 0x20);
  }
  return param_1;
}

/* ref: FUN_00a83380 */
unsigned int F_00a83380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa83380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int local_8;
  
  iVar5 = *(int *)(param_1 + 0x5c);
  local_8 = 0;
  if (iVar5 != *(int *)(param_1 + 0x60)) {
    do {
      uVar2 = *(uint *)(iVar5 + 0x24);
      if (uVar2 < 0x6c) {
        puVar1 = ((uint *)GEN_TOP(((int)this + (uVar2 >> 6) * 8 + 0x20)));
        uVar4 = (ulonglong)((byte)uVar2 & 0x3f);
        lVar3 = ((ulonglong)((uVar4 < 0x40) ? ((1L << uVar4)) : 0));
        *puVar1 = *puVar1 | (uint)lVar3;
        puVar1[1] = puVar1[1] | (uint)((ulonglong)lVar3 >> 0x20);
      }
      F_00a826a0(this,param_1,local_8,1);
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x34;
    } while (iVar5 != *(int *)(param_1 + 0x60));
  }
  return 0;
}

/* ref: FUN_00a833f0 */
uint F_00a833f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa833f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  *(uint *)((int)this + 0x14c4) = param_1;
  if ((param_1 & 1) != 0) {
    if (*(int *)((int)this + 0x14f4) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x14f0);
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*(int *)((int)this + 0x14f4));
      }
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14f4);
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        *(undefined4 *)((int)this + 0x14f4) = 0;
      }
    }
    piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x14cc)));
    if (piVar2 != *(int * PTR32 *)((int)this + 0x14cc)) {
      do {
        F_00a83380(this,piVar2 + 2);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)((int)this + 0x14cc));
    }
    F_00a97b00((undefined *)((int)this + 0x14cc));
    F_00a8ff70((undefined *)((int)this + 0x14d8));
  }
  if ((param_1 & 2) != 0) {
    if (*(int *)((int)this + 0x1520) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x151c);
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*(int *)((int)this + 0x1520));
      }
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1520);
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        *(undefined4 *)((int)this + 0x1520) = 0;
      }
    }
    piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x14f8)));
    if (piVar2 != *(int * PTR32 *)((int)this + 0x14f8)) {
      do {
        F_00a83380(this,piVar2 + 2);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)((int)this + 0x14f8));
    }
    F_00a97b00((undefined *)((int)this + 0x14f8));
    F_00a8ff70((undefined *)((int)this + 0x1504));
  }
  if ((param_1 & 4) != 0) {
    piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1524)));
    if (piVar2 != *(int * PTR32 *)((int)this + 0x1524)) {
      do {
        F_00a83380(this,piVar2 + 2);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)((int)this + 0x1524));
    }
    param_1 = F_00a97b00((undefined *)((int)this + 0x1524));
  }
  return param_1;
}

/* ref: FUN_00a83530 */
uint F_00a83530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa83530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined * this_00;
  int iVar6;
  float10 fVar7;
  undefined1 * puVar8;
  undefined4 uVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = this;
  (*(uint *)(gen_frame + 0x60)) = 0;
  if (param_4 != 0) {
    iVar6 = param_1 - (int)param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = param_2;
    (*(int *)(gen_frame + 0x70)) = iVar6;
    (*(int *)(gen_frame + 0x50)) = param_3 - (int)param_2;
    do {
      uVar3 = *(uint *)((*(int *)(gen_frame + 0x50)) + (int)param_2);
      uVar4 = uVar3 >> 0x10;
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = param_2;
      if (uVar4 == 1) {
        (*(uint *)(gen_frame + 0x3c)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar6 + (int)param_2);
        (*(undefined4 *)(gen_frame + 0x38)) = *param_2;
        F_00a93380((undefined *)((int)this + 0x14d8),&(*(undefined4 *)(gen_frame + 0x34)));
      }
      else if (uVar4 == 6) {
        (*(uint *)(gen_frame + 0x48)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar6 + (int)param_2);
        (*(undefined4 *)(gen_frame + 0x44)) = *param_2;
        F_00a93380((undefined *)((int)this + 0x1504),&(*(undefined4 *)(gen_frame + 0x40)));
      }
      else if ((uVar4 == 0x17) &&
              (puVar5 = (undefined4 *)F_00ab37e0(*param_2), iVar6 = (*(int *)(gen_frame + 0x70)),
              puVar5 != (undefined4 *)0x0)) {
        (*(uint *)(gen_frame + 0x54)) = (uint)*(ushort *)(puVar5 + 8);
        (*(uint *)(gen_frame + 0x6c)) = F_00ab1c90((uint)*(ushort *)(puVar5 + 8));
        iVar6 = (*(int *)(gen_frame + 0x70));
        if ((*(uint *)(gen_frame + 0x6c)) != 0) {
          if ((*(uint *)&REFG(undefined, 0x14b50bc) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14b50bc) = *(uint *)&REFG(undefined, 0x14b50bc) | 1;
            F_0042b630(&REFG(undefined4, 0x14b5068));
            F_00c47de6(((code *)REFP(0x107c650)));
          }
          if (*REFG(int * PTR32, 0x14b5068) == '\0') {
            F_00ab0230(0xc5f,&REFG(undefined4, 0x14b5068));
          }
          uVar3 = F_0042a990(&REFG(undefined4, 0x14b5068));
          (*(undefined4 *)(gen_frame + 0x78)) = 0;
          (*(undefined4 *)(gen_frame + 0x7c)) = 0;
          F_0042cc20(((undefined1 *)(gen_frame + 0x80)),uVar3,REFG(undefined4, 0x108cc50));
          (*(undefined4 *)(gen_frame + 0xd4)) = 0;
          (*(undefined4 *)(gen_frame + 0xd8)) = 0;
          (*(undefined4 *)(gen_frame + 0xdc)) = 0;
          (*(undefined2 *)(gen_frame + 0xe4)) = 0;
          iVar6 = *(int *)((int)this + 0x1524);
          uVar3 = F_00a968a0(iVar6,*(undefined4 *)(iVar6 + 4),&(*(undefined4 *)(gen_frame + 0x78)));
          if (*(int *)((int)this + 0x1528) == -2) {
                    
            F_00c4579a("list<T> too long");
          }
          *(int *)((int)this + 0x1528) = *(int *)((int)this + 0x1528) + 1;
          *(uint *)(iVar6 + 4) = uVar3;
          **(uint * PTR32 *)(uVar3 + 4) = uVar3;
          F_00a93fd0(&(*(undefined4 *)(gen_frame + 0x78)));
          uVar1 = *(ushort *)((*(uint *)(gen_frame + 0x6c)) + 0x1e);
          iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x1524) + 4)));
          (*(uint *)(gen_frame + 0x6c)) = (uint)*(ushort *)((*(uint *)(gen_frame + 0x6c)) + 0x20);
          if ((puVar5[9] == 9) || (puVar5[9] == 0x33)) {
            fVar7 = F_007733a0(GEN_TOF(gen_bits2f(puVar5[4])));
            (*(float *)(gen_frame + 0x64)) = (float)fVar7;
          }
          else {
            (*(float *)(gen_frame + 0x64)) = gen_bits2f(puVar5[4]);
          }
          uVar9 = *(undefined4 *)((*(int *)(gen_frame + 0x70)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x74)));
          (*(undefined4 *)(gen_frame + 0x5c)) = *puVar5;
          (*(undefined4 *)(gen_frame + 0x4c)) = puVar5[1];
          uVar2 = puVar5[6];
          (*(undefined4 *)(gen_frame + 0x8)) = uVar9;
          puVar8 = ((undefined1 *)(gen_frame + 0xc));
          (*(undefined4 *)(gen_frame + 0x58)) = puVar5[2];
          (*(undefined4 *)(gen_frame + 0x0)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x74));
          (*(int *)(gen_frame + 0x4)) = iVar6 + 0x10;
          this_00 = (undefined *)F_006b8c00();
          F_006ded20(this_00,puVar8,uVar9);
          (*(byte *)(gen_frame + 0x32)) = (*(byte *)(gen_frame + 0x32)) & 0xfc;
          (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x5c));
          (*(undefined2 *)(gen_frame + 0x20)) = (undefined2)(*(uint *)(gen_frame + 0x54));
          (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x4c));
          (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x58));
          (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x64));
          (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
          (*(uint *)(gen_frame + 0x28)) = (uint)uVar1;
          (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x6c));
          (*(undefined2 *)(gen_frame + 0x30)) = 0;
          (*(undefined1 *)(gen_frame + 0x33)) = 0xff;
          F_00a942b0((undefined *)(iVar6 + 100),&(*(undefined4 *)(gen_frame + 0x0)));
          F_00a83140((*(undefined * PTR32 *)(gen_frame + 0x68)),iVar6 + 8,
                       (*(int *)(iVar6 + 0x68) - *(int *)(iVar6 + 100)) / 0x34 + -1);
          param_2 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
          this = (*(undefined * PTR32 *)(gen_frame + 0x68));
          iVar6 = (*(int *)(gen_frame + 0x70));
        }
      }
      uVar3 = (*(uint *)(gen_frame + 0x60)) + 1;
      param_2 = param_2 + 1;
      (*(uint *)(gen_frame + 0x60)) = uVar3;
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = param_2;
    } while (uVar3 < param_4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return uVar3;
}

/* ref: FUN_00a83890 */
uint F_00a83890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa83890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar1 = *(uint * PTR32 *)(*param_1 + 4);
  if ((puVar1 != (uint *)0x0) &&
     (*((char *)GEN_TOP(((puVar1[0x2d5] & 0xffffff) + 0xb54 + (int)puVar1))) != '\0')) {
    uVar3 = *(uint *)((int)this + 0x14e4);
    iVar6 = 0;
    if (*(int * PTR32 *)((int)this + 0x14d8) != (int *)0x0) {
      iVar6 = **(int * PTR32 *)((int)this + 0x14d8);
    }
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    (*(undefined4 *)(gen_frame + 0x50)) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 4)));
    pfVar4 = (float *)F_00ab37e0((*(undefined4 *)(gen_frame + 0x50)));
    if (pfVar4 != (float *)0x0) {
      (*(uint *)(gen_frame + 0x4c)) = (uint)*(ushort *)(pfVar4 + 8);
      (*(uint *)(gen_frame + 0x54)) = F_00ab1c90((uint)*(ushort *)(pfVar4 + 8));
      if ((*(uint *)(gen_frame + 0x54)) != 0) {
        uVar3 = F_00a93f90(((undefined1 *)(gen_frame + 0x58)),(*puVar1 & 0xffffff) + (int)puVar1);
        F_00a97ab0((undefined *)((int)this + 0x14cc),uVar3);
        F_00a93fd0(((undefined1 *)(gen_frame + 0x58)));
        iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x14cc) + 4)));
        (*(uint *)(gen_frame + 0x44)) = (uint)*(ushort *)((*(uint *)(gen_frame + 0x54)) + 0x1e);
        (*(uint *)(gen_frame + 0x54)) = (uint)*(ushort *)((*(uint *)(gen_frame + 0x54)) + 0x20);
        (*(float *)(gen_frame + 0x3c)) = F_00a6a920(pfVar4);
        (*(uint *)(gen_frame + 0x40)) = F_005d4e80(&REFG(undefined, 0x1379c6c),(*(undefined4 *)(gen_frame + 0x50)),(undefined4)gen_fl2bits(pfVar4[6]));
        puVar5 = (undefined4 *)F_00a91340((undefined *)((int)this + 0x14d8));
        (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)(iVar6 + 100);
        uVar3 = F_00a6a710(((undefined1 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x50)),iVar6 + 0x10,*puVar5,*pfVar4,pfVar4[1],pfVar4[2],
                             (*(float *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x54)),0xff);
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x48));
        F_00a942b0((*(int * PTR32 *)(gen_frame + 0x48)),uVar3);
        F_00a83140(this,iVar6 + 8,(piVar2[1] - *piVar2) / 0x34 + -1);
      }
    }
  }
  uVar3 = *(uint *)((int)this + 0x14e8);
  if (uVar3 != 0) {
    *(int *)((int)this + 0x14e4) = *(int *)((int)this + 0x14e4) + 1;
    if (*(uint *)((int)this + 0x14e0) <= *(uint *)((int)this + 0x14e4)) {
      *(undefined4 *)((int)this + 0x14e4) = 0;
    }
    uVar3 = uVar3 - 1;
    *(uint *)((int)this + 0x14e8) = uVar3;
    if (uVar3 == 0) {
      *(undefined4 *)((int)this + 0x14e4) = 0;
    }
  }
  if (*(int *)((int)this + 0x14e8) != 0) {
    uVar3 = *(uint *)((int)this + 0x14e4);
    if (*(int * PTR32 *)((int)this + 0x14d8) == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = **(int * PTR32 *)((int)this + 0x14d8);
    }
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    F_00cb4540(*(undefined * PTR32 *)((int)this + 0x14f4),0,
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 8))));
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14f0) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x14f0),*(undefined4 *)((int)this + 0x14f4));
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return uVar3;
  }
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x14f4);
  if (puVar5 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    *(undefined4 *)((int)this + 0x14f4) = 0;
  }
  if (REFG(int, 0x14b4eb4) < 1) {
    REFG(int, 0x14b4eb4) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar3;
}

/* ref: FUN_00a83b10 */
uint F_00a83b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa83b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  int * piVar1;
  uint uVar2;
  float * pfVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  iVar6 = *(int *)(*param_1 + 4);
  if (iVar6 != 0) {
    uVar2 = *(uint *)((int)this + 0x1510);
    iVar4 = 0;
    if (*(int * PTR32 *)((int)this + 0x1504) != (int *)0x0) {
      iVar4 = **(int * PTR32 *)((int)this + 0x1504);
    }
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4)));
    (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x50))[1];
    pfVar3 = (float *)F_00ab37e0((*(undefined4 *)(gen_frame + 0x4c)));
    if (pfVar3 != (float *)0x0) {
      (*(uint *)(gen_frame + 0x40)) = (uint)*(ushort *)(pfVar3 + 8);
      (*(uint *)(gen_frame + 0x54)) = F_00ab1c90((uint)*(ushort *)(pfVar3 + 8));
      if ((*(uint *)(gen_frame + 0x54)) != 0) {
        if (*(char *)(iVar6 + 0xc) == '\0') {
          if ((*(uint *)&REFG(undefined, 0x14b516c) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14b516c) = *(uint *)&REFG(undefined, 0x14b516c) | 1;
            F_0042b630(&REFG(undefined4, 0x14b5118));
            F_00c47de6(((code *)REFP(0x107c670)));
          }
          if (*REFG(int * PTR32, 0x14b5118) == '\0') {
            F_00ab0230(0x24d,&REFG(undefined4, 0x14b5118));
          }
          puVar5 = &REFG(undefined4, 0x14b5118);
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x14b516c) & 2) == 0) {
            *(uint *)&REFG(undefined, 0x14b516c) = *(uint *)&REFG(undefined, 0x14b516c) | 2;
            F_0042b630(&REFG(undefined4, 0x14b50c0));
            F_00c47de6(((code *)REFP(0x107c660)));
          }
          if (*REFG(int * PTR32, 0x14b50c0) == '\0') {
            F_00ab0230(0x243,&REFG(undefined4, 0x14b50c0));
          }
          puVar5 = &REFG(undefined4, 0x14b50c0);
        }
        uVar2 = F_0042a990(puVar5);
        uVar2 = F_00a93f90(((undefined1 *)(gen_frame + 0x58)),uVar2);
        F_00a97ab0((int *)((int)this + 0x14f8),uVar2);
        F_00a93fd0(((undefined1 *)(gen_frame + 0x58)));
        iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x14f8) + 4)));
        (*(uint *)(gen_frame + 0x44)) = (uint)*(ushort *)((*(uint *)(gen_frame + 0x54)) + 0x1e);
        (*(uint *)(gen_frame + 0x54)) = (uint)*(ushort *)((*(uint *)(gen_frame + 0x54)) + 0x20);
        (*(float *)(gen_frame + 0x3c)) = F_00a6a920(pfVar3);
        (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)(iVar6 + 100);
        uVar2 = F_00a6a710(((undefined1 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4c)),iVar6 + 0x10,*(*(undefined4 * PTR32 *)(gen_frame + 0x50)),*pfVar3,pfVar3[1],pfVar3[2],
                             (*(float *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x40)),(undefined4)gen_fl2bits(pfVar3[6]),(*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x54)),
                             0xff);
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x48));
        F_00a942b0((*(int * PTR32 *)(gen_frame + 0x48)),uVar2);
        F_00a83140(this,iVar6 + 8,(piVar1[1] - *piVar1) / 0x34 + -1);
      }
    }
  }
  uVar2 = *(uint *)((int)this + 0x1514);
  if (uVar2 != 0) {
    *(int *)((int)this + 0x1510) = *(int *)((int)this + 0x1510) + 1;
    if (*(uint *)((int)this + 0x150c) <= *(uint *)((int)this + 0x1510)) {
      *(undefined4 *)((int)this + 0x1510) = 0;
    }
    uVar2 = uVar2 - 1;
    *(uint *)((int)this + 0x1514) = uVar2;
    if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x1510) = 0;
    }
  }
  if (*(int *)((int)this + 0x1514) == 0) {
    puVar5 = *(undefined4 * PTR32 *)((int)this + 0x1520);
    if (puVar5 != (undefined4 *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
      *(undefined4 *)((int)this + 0x1520) = 0;
    }
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return uVar2;
  }
  uVar2 = *(uint *)((int)this + 0x1510);
  if (*(int * PTR32 *)((int)this + 0x1504) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int * PTR32 *)((int)this + 0x1504);
  }
  if (*(uint *)(iVar6 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar6 + 8);
  }
  F_00cb4540(*(undefined * PTR32 *)((int)this + 0x1520),0,
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + 8))));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x151c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x151c),*(undefined4 *)((int)this + 0x1520));
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: FUN_00a83de0 */
uint F_00a83de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa83de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = param_1;
  iVar1 = *(int *)((int)this + 0x34);
  uVar2 = 1;
  if (iVar1 != 1) {
    *(undefined4 *)((int)this + 0x34) = 1;
    if (iVar1 != 2) {
      F_00a82e50(this);
    }
    uVar2 = F_00a728c0(this);
  }
  return uVar2;
}

/* ref: FUN_00a83e20 */
uint F_00a83e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa83e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this;
  uint uVar5;
  float10 fVar6;
  undefined1 * puVar7;
  
  uVar3 = param_6;
  (*(uint *)(gen_frame + 0x44)) = (uint)*(ushort *)(param_6 + 0x20);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_1;
  uVar4 = F_00ab1c90((uint)*(ushort *)(param_6 + 0x20));
  uVar5 = 0;
  if (uVar4 != 0) {
    (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(uVar4 + 0x1e);
    (*(uint *)(gen_frame + 0x38)) = (uint)*(ushort *)(uVar4 + 0x20);
    if ((*(int *)(param_6 + 0x24) == 9) || (*(int *)(param_6 + 0x24) == 0x33)) {
      fVar6 = F_007733a0(*(float *)(param_6 + 0x10));
      param_6 = (uint)gen_fl2bits((float)fVar6);
    }
    else {
      param_6 = *(uint *)(param_6 + 0x10);
    }
    (*(uint *)(gen_frame + 0x40)) = F_005d4e80(&REFG(undefined, 0x1379c6c),param_3,*(undefined4 *)(uVar3 + 0x18));
    uVar1 = *(undefined4 *)uVar3;
    (*(int *)(gen_frame + 0x4)) = (int)param_1 + param_2 * 0x70 + 0x38;
    uVar2 = *(undefined4 *)(uVar3 + 4);
    puVar7 = ((undefined1 *)(gen_frame + 0xc));
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(uVar3 + 8);
    (*(uint *)(gen_frame + 0x0)) = param_3;
    (*(undefined4 *)(gen_frame + 0x8)) = param_4;
    this = (undefined *)F_006b8c00();
    F_006ded20(this,puVar7,param_4);
    (*(byte *)(gen_frame + 0x32)) = (*(byte *)(gen_frame + 0x32)) & 0xfc;
    (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
    (*(undefined2 *)(gen_frame + 0x20)) = (undefined2)(*(uint *)(gen_frame + 0x44));
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x3c));
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x38));
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x40));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x48));
    (*(undefined1 *)(gen_frame + 0x33)) = (undefined1)param_5;
    (*(uint *)(gen_frame + 0x1c)) = param_6;
    (*(undefined2 *)(gen_frame + 0x30)) = 0;
    uVar5 = F_00a942b0((undefined *)((int)param_1 + param_2 * 0x70 + 0x8c),&(*(uint *)(gen_frame + 0x0)));
    if (((char)param_7 != '\0') || (*(char *)((int)param_1 + param_2 * 0x70 + 0x9d) != '\0')) {
      uVar5 = F_00a83140((*(undefined * PTR32 *)(gen_frame + 0x34)),(int)param_1 + param_2 * 0x70 + 0x30,
                           (*(int *)((int)param_1 + param_2 * 0x70 + 0x90) -
                           *(int *)((int)param_1 + param_2 * 0x70 + 0x8c)) / 0x34 + -1);
      *(undefined1 *)((int)param_1 + param_2 * 0x70 + 0x9c) = 1;
    }
  }
  return uVar5;
}

/* ref: FUN_00a83f80 */
uint F_00a83f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa83f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)(param_1 * 0x70 + 0x30 + (int)this);
  F_00a83380(this,this_00);
  uVar1 = F_00a73d10(this_00);
  return uVar1;
}

/* ref: FUN_00a83fa0 */
uint F_00a83fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa83fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this;
  uint uVar5;
  float10 fVar6;
  undefined1 * puVar7;
  int iVar8;
  
  uVar3 = (*(uint *)&gen_args[4]);
  (*(uint *)(gen_frame + 0x48)) = (uint)*(ushort *)((*(uint *)&gen_args[4]) + 0x20);
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar4 = F_00ab1c90((uint)*(ushort *)((*(uint *)&gen_args[4]) + 0x20));
  uVar5 = 0;
  if (uVar4 != 0) {
    (*(uint *)(gen_frame + 0x44)) = (uint)*(ushort *)(uVar4 + 0x1e);
    (*(uint *)(gen_frame + 0x40)) = (uint)*(ushort *)(uVar4 + 0x20);
    if ((*(int *)(uVar3 + 0x24) == 9) || (*(int *)(uVar3 + 0x24) == 0x33)) {
      fVar6 = F_007733a0(*(float *)(uVar3 + 0x10));
      (*(uint *)&gen_args[4]) = (uint)gen_fl2bits((float)fVar6);
    }
    else {
      (*(uint *)&gen_args[4]) = *(uint *)(uVar3 + 0x10);
    }
    (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)uVar3;
    puVar7 = ((undefined1 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(uVar3 + 4);
    uVar2 = *(undefined4 *)(uVar3 + 0x18);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(uVar3 + 8);
    (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)&gen_args[2]);
    (*(int *)(gen_frame + 0x10)) = (int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x70 + 0xd58;
    (*(int *)(gen_frame + 0x14)) = (*(int *)&gen_args[3]);
    iVar8 = (*(int *)&gen_args[3]);
    this = (undefined *)F_006b8c00();
    F_006ded20(this,puVar7,iVar8);
    (*(byte *)(gen_frame + 0x3e)) = (*(byte *)(gen_frame + 0x3e)) & 0xfc;
    (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x54));
    (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x44));
    (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)(gen_frame + 0x50));
    (*(undefined2 *)(gen_frame + 0x2c)) = (undefined2)(*(uint *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0x4c));
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)&gen_args[4]);
    (*(undefined4 *)(gen_frame + 0x30)) = uVar2;
    (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x40));
    (*(undefined2 *)(gen_frame + 0x3c)) = 0;
    (*(undefined1 *)(gen_frame + 0x3f)) = 0xff;
    F_00a942b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x70 + 0xdac))),&(*(undefined4 *)(gen_frame + 0xc)));
    uVar5 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x1450);
    if ((uVar5 != 0) &&
       (((sVar1 = *((short *)GEN_TOP((*(int *)(uVar5 + 0x1d4) + 2))), sVar1 == -0x7fff || (sVar1 == -0x7ffe))
        || (sVar1 == -0x7ff9)))) {
      (*(uint *)&gen_args[4]) = 0;
      uVar5 = F_006c42f0((uint)*(ushort *)(uVar5 + 0x310),&(*(uint *)&gen_args[4]));
      if ((uVar5 == (*(uint *)&gen_args[1])) &&
         (uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x70 + 0xdb0))), (*(int *)&gen_args[3]) == 0xebf9)) {
        *(byte *)(uVar5 - 2) = *(byte *)(uVar5 - 2) | 1;
      }
    }
    if (((char)(*(undefined4 *)&gen_args[5]) != '\0') || (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x70 + 0xdbd))) != '\0')) {
      uVar5 = F_00a83140((*(undefined * PTR32 *)(gen_frame + 0x58)),(int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x70 + 0xd50,
                           (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x70 + 0xdb0))) -
                           *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x70 + 0xdac)))) / 0x34 + -1);
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x70 + 0xdbc))) = 1;
    }
  }
  return uVar5;
}

/* ref: FUN_00a84160 */
uint F_00a84160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)(param_1 * 0x70 + 0xd50 + (int)this);
  F_00a83380(this,this_00);
  uVar1 = F_00a73d10(this_00);
  return uVar1;
}

/* ref: FUN_00a841b0 */
uint F_00a841b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa841b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if (((*(byte *)((int)this + 0x14c4) & 1) != 0) && (*(int *)((int)this + 0x14e8) != 0)) {
    uVar2 = *(uint *)((int)this + 0x14e4);
    iVar4 = 0;
    if (*(int * PTR32 *)((int)this + 0x14d8) != (int *)0x0) {
      iVar4 = **(int * PTR32 *)((int)this + 0x14d8);
    }
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + 8)));
    if (*(int *)((int)this + 0x14f0) == 0) {
      uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
      *(uint *)((int)this + 0x14f0) = uVar2;
    }
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e78ec));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0xa83890));
    }
    *(undefined4 * PTR32 *)((int)this + 0x14f4) = puVar3;
    F_00cb4540(puVar3,0,uVar1);
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14f0) + 0x48))))
                       (*(int * PTR32 *)((int)this + 0x14f0),*(undefined4 *)((int)this + 0x14f4));
  }
  if (((*(byte *)((int)this + 0x14c4) & 2) != 0) && (*(int *)((int)this + 0x1514) != 0)) {
    uVar2 = *(uint *)((int)this + 0x1510);
    iVar4 = 0;
    if (*(int * PTR32 *)((int)this + 0x1504) != (int *)0x0) {
      iVar4 = **(int * PTR32 *)((int)this + 0x1504);
    }
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + 8)));
    if (*(int *)((int)this + 0x151c) == 0) {
      uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
      *(uint *)((int)this + 0x151c) = uVar2;
    }
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e78ec));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0xa83b10));
    }
    *(undefined4 * PTR32 *)((int)this + 0x1520) = puVar3;
    F_00cb4540(puVar3,0,uVar1);
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x151c) + 0x48))))
                       (*(int * PTR32 *)((int)this + 0x151c),*(undefined4 *)((int)this + 0x1520));
  }
  *(byte *)((int)this + 0x14c8) = *(byte *)((int)this + 0x14c8) | 1;
  *(undefined4 *)((int)this + 0x14c4) = 0;
  return in_EAX;
}

/* ref: FUN_00a84350 */
uint F_00a84350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  short sVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    F_00a83380(this,(undefined *)((int)this + 0x1454));
    F_00a73d10((undefined *)((int)this + 0x1454));
    uVar3 = *(uint *)((int)this + 0x1450);
    if ((uVar3 != 0) &&
       (((sVar2 = *((short *)GEN_TOP((*(int *)(uVar3 + 0x1d4) + 2))), sVar2 == -0x7fff || (sVar2 == -0x7ffe))
        || (sVar2 == -0x7ff9)))) {
      uVar3 = F_00a71480(this,(uint)*(ushort *)(uVar3 + 0x310),0);
    }
  }
  else {
    ((code *)*(gen_code32 *)(*param_1 + 0x1b8))(param_1,(int)this + 0x145c);
    *(undefined4 *)((int)this + 0x1454) = 3;
    *(undefined4 *)((int)this + 0x1458) = *(undefined4 *)param_1[0x75];
    *(undefined1 *)((int)this + 0x14c1) = 0;
    uVar1 = *(ushort *)(param_1[0x75] + 2);
    uVar3 = (uint)uVar1;
    if (((uVar1 == 0x8001) || (uVar1 == 0x8002)) || (uVar1 == 0x8007)) {
      uVar3 = F_00a71480(this,(uint)*(ushort *)(param_1 + 0xc4),1);
      *(int * PTR32 *)((int)this + 0x1450) = param_1;
      return uVar3;
    }
  }
  *(int * PTR32 *)((int)this + 0x1450) = param_1;
  return uVar3;
}

/* ref: FUN_00a84440 */
uint F_00a84440(unsigned int gen_a0)
{
  GEN_ENTER(0xa84440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    if (uVar2 != 0) {
      piVar3 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
      ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*(undefined4 *)((int)this + 0x24));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  if (*(int *)((int)this + 0x28) != 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    if (uVar2 != 0) {
      piVar3 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
      ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*(undefined4 *)((int)this + 0x28));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
  }
  F_00a90060((undefined *)((int)this + 0x14),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x18),
               *(undefined4 * PTR32 *)((int)this + 0x18));
  F_00429760(*(undefined4 *)((int)this + 0x18),0x18,0x191);
  F_00a9dfd0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar4 = F_00429760(*(undefined4 *)((int)this + 8),0x24,0x191);
  return (uint)uVar4;
}

/* ref: FUN_00a84550 */
uint F_00a84550(unsigned int gen_a0)
{
  GEN_ENTER(0xa84550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  uint uVar2;
  
  F_00a83380(this,(undefined *)((int)this + 0x1454));
  F_00a73d10((undefined *)((int)this + 0x1454));
  uVar2 = *(uint *)((int)this + 0x1450);
  if ((uVar2 != 0) &&
     (((sVar1 = *((short *)GEN_TOP((*(int *)(uVar2 + 0x1d4) + 2))), sVar1 == -0x7fff || (sVar1 == -0x7ffe)) ||
      (sVar1 == -0x7ff9)))) {
    uVar2 = F_00a71480(this,(uint)*(ushort *)(uVar2 + 0x310),0);
  }
  *(byte *)((int)this + 0x14c8) = *(byte *)((int)this + 0x14c8) & 0xfe;
  *(undefined4 *)((int)this + 0x1450) = 0;
  *(undefined4 *)((int)this + 0x14f0) = 0;
  *(undefined4 *)((int)this + 0x14f4) = 0;
  *(undefined4 *)((int)this + 0x151c) = 0;
  *(undefined4 *)((int)this + 0x1520) = 0;
  *(undefined4 *)((int)this + 0x14c4) = 0;
  return uVar2;
}

/* ref: FUN_00a845e0 */
uint F_00a845e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa845e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00a9e680((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: FUN_00a84610 */
uint F_00a84610(unsigned int gen_a0)
{
  GEN_ENTER(0xa84610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x904) = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x900);
  *(undefined4 *)((int)this + 0x908) = 0;
  *(undefined4 *)((int)this + 0x120c) = 0;
  F_00c48350((undefined *)((int)this + 0x90c),0,0x900);
  *(undefined4 *)((int)this + 0x1210) = 0;
  *(undefined4 *)((int)this + 0x1214) = 0;
  *(undefined1 *)((int)this + 0x1218) = 0;
  *(undefined4 *)((int)this + 0x121c) = 0;
  *(undefined4 *)((int)this + 0x1220) = 0;
  *(undefined1 *)((int)this + 0x1224) = 0;
  *(undefined1 *)((int)this + 0x1228) = 0;
  F_00a68080((undefined *)((int)this + 0x1230));
  *(undefined4 *)((int)this + 0x1544) = 0;
  *(undefined4 *)((int)this + 0x154c) = 0;
  *(undefined4 *)((int)this + 0x1550) = 0;
  *(undefined4 *)((int)this + 0x1554) = 0;
  *(undefined4 *)((int)this + 0x1558) = 0;
  *(undefined4 *)((int)this + 0x155c) = 0;
  *(undefined2 *)((int)this + 0x1560) = 0;
  *(undefined2 *)((int)this + 0x15ca) = 0;
  *(undefined1 *)((int)this + 0x1564) = 0;
  *(undefined4 *)((int)this + 0x1568) = 0;
  *(undefined4 *)((int)this + 0x156c) = 0;
  *(undefined1 *)((int)this + 0x1574) = 0;
  *(undefined1 *)((int)this + 0x15b4) = 0;
  *(undefined2 *)((int)this + 0x15c6) = 0;
  *(undefined1 *)((int)this + 0x15c8) = 0;
  *(undefined4 *)((int)this + 0x1570) = 0xe0000000;
  *(undefined4 *)((int)this + 0x1600) = 0;
  *(undefined4 *)((int)this + 0x1604) = 0;
  *(undefined4 *)((int)this + 0x1608) = 0;
  *(undefined4 *)((int)this + 0x160c) = 0;
  *(undefined4 *)((int)this + 0x1610) = 0;
  *(undefined4 *)((int)this + 0x1614) = 0;
  *(undefined4 *)((int)this + 0x1618) = 0;
  *(undefined4 *)((int)this + 0x161c) = 0;
  *(undefined4 *)((int)this + 0x1620) = 0;
  *(undefined4 *)((int)this + 0x1624) = 0;
  F_00c48350((undefined *)((int)this + 0x1628),0,0x100);
  *(undefined4 *)((int)this + 0x1728) = 0;
  *(undefined4 *)((int)this + 0x172c) = 0;
  *(undefined2 *)((int)this + 0x1730) = 0;
  *(undefined4 *)((int)this + 0x1734) = 0;
  *(undefined4 *)((int)this + 0x1738) = 0;
  *(undefined4 *)((int)this + 0x173c) = 0;
  *(undefined4 *)((int)this + 0x1740) = 0;
  *(undefined2 *)((int)this + 0x1744) = 0;
  *(undefined4 *)((int)this + 0x1748) = 0;
  *(undefined4 *)((int)this + 0x174c) = 0;
  *(undefined4 *)((int)this + 0x1750) = 0;
  *(undefined4 *)((int)this + 0x1754) = 0;
  *(undefined2 *)((int)this + 0x1758) = 0;
  *(undefined2 *)((int)this + 0x175a) = 0;
  *(undefined4 *)((int)this + 6000) = 0;
  *(undefined4 *)((int)this + 0x1774) = 0;
  *(undefined2 *)((int)this + 0x1778) = 0;
  *(undefined1 *)((int)this + 0x177a) = 0;
  *(undefined4 *)((int)this + 0x177c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x1780) = 0;
  *(undefined4 *)((int)this + 0x1784) = 0;
  F_00b7af70((undefined *)((int)this + 0x1788),0);
  *(undefined2 *)((int)this + 0x18fc) = 0;
  *(undefined4 *)((int)this + 0x1900) = 0;
  F_00a74d40((undefined *)((int)this + 0x1904));
  F_00a74da0((undefined *)((int)this + 0x1950));
  F_00a66e30((undefined *)((int)this + 0x2448));
  F_00a73a30((undefined *)((int)this + 0x5ef8));
  F_00a73730((undefined *)((int)this + 0x6ec4));
  F_00b9fee0((undefined *)((int)this + 0x70ec));
  *(undefined4 *)((int)this + 0x735c) = 0;
  *(undefined1 *)((int)this + 0x73b5) = 0;
  *(undefined4 *)((int)this + 0x73b8) = 0;
  *(undefined1 *)((int)this + 0x7411) = 0;
  F_00a84550((undefined *)((int)this + 0x7418));
  F_00a859d0((undefined *)((int)this + 0x8948));
  *(undefined1 *)((int)this + 0x8b74) = 0;
  *(undefined2 *)((int)this + 0x8b76) = 0;
  *(undefined1 *)((int)this + 0x8b78) = 0;
  *(undefined4 *)((int)this + 0x8b84) = 0;
  *(undefined4 *)((int)this + 0x8b88) = 0;
  *(undefined4 *)((int)this + 0x8b8c) = 0;
  *(undefined4 *)((int)this + 0x8b90) = 0;
  *(undefined4 *)((int)this + 0x8b94) = 0;
  *(undefined4 *)((int)this + 0x8b98) = 0;
  *(undefined4 *)((int)this + 0x8b9c) = 0;
  *(undefined4 *)((int)this + 0x8ba0) = 0;
  *(undefined2 *)((int)this + 0x8ba4) = 0;
  F_00415250(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10),(int)this + 0x92e8);
  F_00bc6530((undefined *)((int)this + 0x8ba8));
  F_00b9d7c0((undefined *)((int)this + 0x92f4));
  *(undefined4 *)((int)this + 0xb030) = 0;
  *(undefined4 *)((int)this + 0xb034) = 0;
  *(undefined4 *)((int)this + 0xb038) = 0;
  *(undefined4 *)((int)this + 0xb03c) = 0;
  *(undefined1 *)((int)this + 0xb042) = 0;
  *(undefined2 *)((int)this + 0xb040) = 0;
  *(undefined4 *)((int)this + 0xb044) = 0;
  *(undefined4 *)((int)this + 0xb048) = 0;
  *(undefined4 *)((int)this + 0xb04c) = 0;
  *(undefined4 *)((int)this + 0xb050) = 0;
  *(undefined1 *)((int)this + 0xb056) = 0;
  *(undefined2 *)((int)this + 0xb054) = 0;
  *(undefined4 *)((int)this + 0xb058) = 0;
  *(undefined4 *)((int)this + 0xb05c) = 0;
  *(undefined4 *)((int)this + 0xb060) = 0;
  *(undefined4 *)((int)this + 0xb064) = 0;
  *(undefined2 *)((int)this + 0xb068) = 0;
  *(undefined1 *)((int)this + 0xb06a) = 0;
  *(undefined4 *)((int)this + 0xb06c) = 0;
  *(undefined4 *)((int)this + 0xb070) = 0;
  *(undefined4 *)((int)this + 0xb074) = 0;
  *(undefined4 *)((int)this + 0x92e4) = 0;
  *(undefined4 *)((int)this + 0xb114) = 0;
  *(undefined4 *)((int)this + 0xb07c) = 0;
  *(undefined4 *)((int)this + 0xb080) = 0;
  *(undefined4 *)((int)this + 0xb084) = 0;
  *(undefined4 *)((int)this + 0xb088) = 0;
  *(undefined4 *)((int)this + 0xb08c) = 0;
  *(undefined4 *)((int)this + 0xb090) = 0;
  *(undefined4 *)((int)this + 0xb094) = 0;
  *(undefined4 *)((int)this + 0xb098) = 0;
  *(undefined4 *)((int)this + 0xb09c) = 0;
  *(undefined4 *)((int)this + 0xb0a0) = 0;
  *(undefined4 *)((int)this + 0xb0a4) = 0;
  *(undefined4 *)((int)this + 0xb0a8) = 0;
  *(undefined4 *)((int)this + 0xb0ac) = 0;
  *(undefined4 *)((int)this + 0xb0b0) = 0;
  *(undefined4 *)((int)this + 0xb0b4) = 0;
  *(undefined4 *)((int)this + 0xb0b8) = 0;
  *(undefined4 *)((int)this + 0xb0cc) = 0;
  *(undefined4 *)((int)this + 0xb0d0) = 0;
  pvVar1 = F_00c48350((undefined *)((int)this + 0xb0d4),0,0x40);
  return (uint)pvVar1;
}

/* ref: FUN_00a84a20 */
ushort F_00a84a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84a20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x168e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::ClearCallback::vf0 */
uint F_00a84a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7874));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a84a90 */
uint F_00a84a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa84a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 4) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00a84ad0 */
uint F_00a84ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa84ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x58) = param_1;
  *(undefined4 *)((int)this + 0x5c) = param_2;
  return param_1;
}

/* ref: FUN_00a84af0 */
byte F_00a84af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 99) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b00 */
byte F_00a84b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xde) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b10 */
byte F_00a84b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xdb) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b20 */
byte F_00a84b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b30 */
byte F_00a84b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa84b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 0xdc) = (byte)param_1;
  *(undefined1 *)((int)this + 0xdd) = (undefined1)param_2;
  return (byte)param_1;
}

/* ref: FUN_00a84b50 */
byte F_00a84b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x250) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b60 */
uint F_00a84b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa84b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 2) * 4 + 0x25c)));
  *puVar1 = *puVar1 | (uint)(byte)param_2 << (('\x03' - ((byte)param_1 & 3)) * '\b' & 0x1f);
  return param_1 >> 2;
}

/* ref: FUN_00a84b90 */
ushort F_00a84b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0x272 + param_2 * 2);
}

/* ref: FUN_00a84bb0 */
ushort F_00a84bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0x296 + param_2 * 2);
}

/* ref: FUN_00a84bd0 */
byte F_00a84bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x2ba + (int)this))) &
         (byte)(1 << ((char)param_1 + (char)(param_1 >> 3) * -8 & 0x1fU))) != 0;
}

/* ref: FUN_00a84c00 */
byte F_00a84c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x2d3 + (int)this))) &
         (byte)(1 << ((char)param_1 + (char)(param_1 >> 3) * -8 & 0x1fU))) != 0;
}

/* ref: FUN_00a84ca0 */
uint F_00a84ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xa84ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 10) = *(byte *)((int)this + 10) & 0xfc;
  *(undefined4 *)this = 9999;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  F_0042b630((int)this + 0x10);
  *(byte *)((int)this + 0x6e) = *(byte *)((int)this + 0x6e) & 0xfe;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_00a84d00 */
uint F_00a84d00(unsigned int gen_a0)
{
  GEN_ENTER(0xa84d00u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined2 *)(in_ecx + 0x5c) = 0;
  return in_ecx;
}

/* ref: FUN_00a84d40 */
uint F_00a84d40(unsigned int gen_a0)
{
  GEN_ENTER(0xa84d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 9999;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 9999;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 9999;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 9999;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 9999;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 9999;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 9999;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 9999;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x72) = 0;
  F_00c48350(this,0,0x60);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return (uint)this;
}

/* ref: FUN_00a84e00 */
uint F_00a84e00(unsigned int gen_a0)
{
  GEN_ENTER(0xa84e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 0x10));
  return (uint)uVar1;
}

/* ref: FUN_00a84e10 */
uint F_00a84e10(unsigned int gen_a0)
{
  GEN_ENTER(0xa84e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630(this);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: FUN_00a84e80 */
uint F_00a84e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)(param_1 * 0xa8 + 0x60 + (int)this);
  if (*(char *)(param_1 * 0xa8 + 0x66 + (int)this) != '\0') {
    pvVar1 = (undefined *)F_00a3a860(pvVar1);
    uVar2 = F_0046e5e0(pvVar1);
    return uVar2;
  }
  uVar2 = *(uint *)((int)pvVar1 + 8);
  if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
    uVar2 = uVar2 + 1000000;
  }
  return uVar2;
}

/* ref: FUN_00a84ec0 */
uint F_00a84ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xa84ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x68) = 0;
  return uVar1;
}

/* ref: FUN_00a84ef0 */
uint F_00a84ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa84ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0xf0) = 0;
  *(undefined1 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  F_0042e430((undefined *)((int)this + 0xf8),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x14c),&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430((undefined *)((int)this + 0x1a0),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return uVar1;
}

/* ref: FUN_00a84fd0 */
unsigned int F_00a84fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa84fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x58),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  return 0;
}

/* ref: FUN_00a850a0 */
unsigned int F_00a850a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa850a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)this = 0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x5c),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined2 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  return 0;
}

/* ref: FUN_00a85260 */
unsigned int F_00a85260(unsigned int gen_a0)
{
  GEN_ENTER(0xa85260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  this_00 = (undefined *)((int)this + 100);
  iVar1 = 0x18;
  do {
    *(undefined1 *)((int)this_00 + -0x5c) = 0;
    F_0042e430((undefined *)((int)this_00 + -0x58),&REFG(undefined1, 0x107fc63));
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + -4) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    *(undefined4 *)((int)this_00 + 0x68) = 0;
    *(undefined2 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x6c) = 0;
    *(undefined4 *)((int)this_00 + 0x70) = 0;
    *(undefined4 *)((int)this_00 + 0x74) = 0;
    *(undefined4 *)((int)this_00 + 0x78) = 0;
    *(undefined4 *)((int)this_00 + 0x7c) = 0;
    *(undefined4 *)((int)this_00 + 0x80) = 0;
    *(undefined4 *)((int)this_00 + 0x84) = 0;
    *(undefined4 *)((int)this_00 + 0x88) = 0;
    *(undefined4 *)((int)this_00 + 0x8c) = 0;
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0x94) = 0;
    *(undefined4 *)((int)this_00 + 0x98) = 0;
    *(undefined4 *)((int)this_00 + 0x9c) = 0;
    *(undefined4 *)((int)this_00 + 0xa0) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    *(undefined4 *)((int)this_00 + 0xa8) = 0;
    *(undefined4 *)((int)this_00 + 0xac) = 0;
    *(undefined4 *)((int)this_00 + 0xb0) = 0;
    *(undefined4 *)((int)this_00 + 0xb4) = 0;
    *(undefined4 *)((int)this_00 + 0xb8) = 0;
    *(undefined4 *)((int)this_00 + 0xbc) = 0;
    *(undefined4 *)((int)this_00 + 0xc0) = 0;
    *(undefined4 *)((int)this_00 + 0xc4) = 0;
    *(undefined4 *)((int)this_00 + 200) = 0;
    *(undefined4 *)((int)this_00 + 0xcc) = 0;
    *(undefined4 *)((int)this_00 + 0xd0) = 0;
    *(undefined4 *)((int)this_00 + 0xd4) = 0;
    *(undefined4 *)((int)this_00 + 0xd8) = 0;
    *(undefined4 *)((int)this_00 + 0xdc) = 0;
    *(undefined4 *)((int)this_00 + 0xe0) = 0;
    *(undefined4 *)((int)this_00 + 0xe4) = 0;
    *(undefined4 *)((int)this_00 + 0xe8) = 0;
    *(undefined4 *)((int)this_00 + 0xec) = 0;
    *(undefined4 *)((int)this_00 + 0xf0) = 0;
    *(undefined4 *)((int)this_00 + 0xf4) = 0;
    *(undefined4 *)((int)this_00 + 0xf8) = 0;
    *(undefined4 *)((int)this_00 + 0xfc) = 0;
    *(undefined4 *)((int)this_00 + 0x100) = 0;
    *(undefined4 *)((int)this_00 + 0x104) = 0;
    *(undefined4 *)((int)this_00 + 0x108) = 0;
    *(undefined4 *)((int)this_00 + 0x10c) = 0;
    *(undefined4 *)((int)this_00 + 0x110) = 0;
    *(undefined4 *)((int)this_00 + 0x114) = 0;
    *(undefined4 *)((int)this_00 + 0x118) = 0;
    *(undefined4 *)((int)this_00 + 0x11c) = 0;
    *(undefined4 *)((int)this_00 + 0x120) = 0;
    *(undefined4 *)((int)this_00 + 0x124) = 0;
    *(undefined4 *)((int)this_00 + 0x128) = 0;
    *(undefined4 *)((int)this_00 + 300) = 0;
    this_00 = (undefined *)((int)this_00 + 0x18c);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00a85430 */
uint F_00a85430(unsigned int gen_a0)
{
  GEN_ENTER(0xa85430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined2 *)this = 0;
  this_00 = (undefined *)((int)this + 4);
  iVar2 = 0x18;
  do {
    uVar1 = F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    this_00 = (undefined *)((int)this_00 + 0x58);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00a85470 */
uint F_00a85470(unsigned int gen_a0)
{
  GEN_ENTER(0xa85470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x1a0));
  F_0042c880((undefined *)((int)this + 0x14c));
  F_0042c880((undefined *)((int)this + 0xf8));
  F_0042c880((undefined *)((int)this + 0x9c));
  uVar1 = F_0042c880((undefined *)((int)this + 0x38));
  return (uint)uVar1;
}

/* ref: FUN_00a854b0 */
uint F_00a854b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa854b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_00a854e0 */
uint F_00a854e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa854e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return uVar1;
}

/* ref: FUN_00a85580 */
uint F_00a85580(unsigned int gen_a0)
{
  GEN_ENTER(0xa85580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)this = 0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430((undefined *)((int)this + 0x5c),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  return uVar1;
}

/* ref: FUN_00a85730 */
uint F_00a85730(unsigned int gen_a0)
{
  GEN_ENTER(0xa85730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined4 *)this = 0;
  this_00 = (undefined *)((int)this + 0x60);
  iVar2 = 0x18;
  do {
    *(undefined1 *)((int)this_00 + -0x5c) = 0;
    F_0042e430((undefined *)((int)this_00 + -0x58),&REFG(undefined1, 0x107fc63));
    uVar1 = F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + -4) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    *(undefined4 *)((int)this_00 + 0x68) = 0;
    *(undefined4 *)((int)this_00 + 0x6c) = 0;
    *(undefined4 *)((int)this_00 + 0x70) = 0;
    *(undefined4 *)((int)this_00 + 0x74) = 0;
    *(undefined4 *)((int)this_00 + 0x78) = 0;
    *(undefined4 *)((int)this_00 + 0x7c) = 0;
    *(undefined4 *)((int)this_00 + 0x80) = 0;
    *(undefined4 *)((int)this_00 + 0x84) = 0;
    *(undefined4 *)((int)this_00 + 0x88) = 0;
    *(undefined4 *)((int)this_00 + 0x8c) = 0;
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0x94) = 0;
    *(undefined4 *)((int)this_00 + 0x98) = 0;
    *(undefined4 *)((int)this_00 + 0x9c) = 0;
    *(undefined4 *)((int)this_00 + 0xa0) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    *(undefined4 *)((int)this_00 + 0xa8) = 0;
    *(undefined4 *)((int)this_00 + 0xac) = 0;
    *(undefined4 *)((int)this_00 + 0xb0) = 0;
    *(undefined4 *)((int)this_00 + 0xb4) = 0;
    *(undefined4 *)((int)this_00 + 0xb8) = 0;
    *(undefined4 *)((int)this_00 + 0xbc) = 0;
    *(undefined4 *)((int)this_00 + 0xc0) = 0;
    *(undefined4 *)((int)this_00 + 0xc4) = 0;
    *(undefined4 *)((int)this_00 + 200) = 0;
    *(undefined4 *)((int)this_00 + 0xcc) = 0;
    *(undefined4 *)((int)this_00 + 0xd0) = 0;
    *(undefined4 *)((int)this_00 + 0xd4) = 0;
    *(undefined4 *)((int)this_00 + 0xd8) = 0;
    *(undefined4 *)((int)this_00 + 0xdc) = 0;
    *(undefined4 *)((int)this_00 + 0xe0) = 0;
    *(undefined4 *)((int)this_00 + 0xe4) = 0;
    *(undefined4 *)((int)this_00 + 0xe8) = 0;
    *(undefined4 *)((int)this_00 + 0xec) = 0;
    *(undefined4 *)((int)this_00 + 0xf0) = 0;
    *(undefined4 *)((int)this_00 + 0xf4) = 0;
    *(undefined4 *)((int)this_00 + 0xf8) = 0;
    *(undefined4 *)((int)this_00 + 0xfc) = 0;
    *(undefined4 *)((int)this_00 + 0x100) = 0;
    *(undefined4 *)((int)this_00 + 0x104) = 0;
    *(undefined4 *)((int)this_00 + 0x108) = 0;
    *(undefined4 *)((int)this_00 + 0x10c) = 0;
    *(undefined4 *)((int)this_00 + 0x110) = 0;
    *(undefined4 *)((int)this_00 + 0x114) = 0;
    *(undefined4 *)((int)this_00 + 0x118) = 0;
    *(undefined4 *)((int)this_00 + 0x11c) = 0;
    *(undefined4 *)((int)this_00 + 0x120) = 0;
    *(undefined4 *)((int)this_00 + 0x124) = 0;
    *(undefined4 *)((int)this_00 + 0x128) = 0;
    *(undefined4 *)((int)this_00 + 300) = 0;
    this_00 = (undefined *)((int)this_00 + 0x18c);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00a858e0 */
uint F_00a858e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa858e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int local_8;
  
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x54),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0x25e4) = 0;
  *(undefined4 *)((int)this + 0x25e8) = 0;
  *(undefined2 *)((int)this + 0x25e0) = 0;
  *(undefined4 *)((int)this + 0x25d4) = 0;
  *(undefined4 *)((int)this + 0x25d8) = 0;
  *(undefined4 *)((int)this + 0x25dc) = 0;
  *(undefined4 *)((int)this + 0xac) = 1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  this_00 = (undefined *)((int)this + 0xb4);
  local_8 = 0x18;
  do {
    uVar1 = F_00a85580(this_00);
    this_00 = (undefined *)((int)this_00 + 0x18c);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)((int)this + 0x25ec) = 0;
  *(undefined4 *)((int)this + 0x25f0) = 0;
  *(undefined4 *)((int)this + 0x2618) = 0;
  return uVar1;
}

/* ref: FUN_00a85980 */
uint F_00a85980(unsigned int gen_a0)
{
  GEN_ENTER(0xa85980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_00a859d0 */
unsigned int F_00a859d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa859d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar2 = (undefined4 *)((int)this + 8);
  puVar3 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x78) = 0xe0000000;
  *(undefined4 *)((int)this + 0x7c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x80) = 0xe0000000;
  *(undefined4 *)((int)this + 0x84) = 0xe0000000;
  *(undefined4 *)((int)this + 0x88) = 0xe0000000;
  *(undefined4 *)((int)this + 0x8c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x90) = 0xe0000000;
  *(undefined4 *)((int)this + 0x94) = 0xe0000000;
  *(undefined4 *)((int)this + 0x98) = 0xe0000000;
  *(undefined4 *)((int)this + 0x9c) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa4) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xac) = 0xe0000000;
  *(undefined4 *)((int)this + 0xb0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xb4) = 0xe0000000;
  *(undefined4 *)((int)this + 0xb8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xbc) = 0xe0000000;
  *(undefined4 *)((int)this + 0xc0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xc4) = 0xe0000000;
  *(undefined4 *)((int)this + 200) = 0xe0000000;
  *(undefined4 *)((int)this + 0xcc) = 0xe0000000;
  *(undefined4 *)((int)this + 0xd0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xd4) = 0xe0000000;
  *(undefined4 *)((int)this + 0xd8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xdc) = 0xe0000000;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  puVar2 = (undefined4 *)((int)this + 0xe0);
  puVar3 = (undefined4 *)((int)this + 0xe8);
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  puVar2 = (undefined4 *)((int)this + 0x150);
  puVar3 = (undefined4 *)((int)this + 0x158);
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  return 0;
}

/* ref: FUN_00a85af0 */
uint F_00a85af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa85af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 8) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0xc) = param_3;
  return param_1;
}

/* ref: FUN_00a85b10 */
uint F_00a85b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x78) = param_2;
  return param_2;
}

/* ref: FUN_00a85b30 */
uint F_00a85b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0xe0);
}

/* ref: FUN_00a85b50 */
uint F_00a85b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa85b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0xe0) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0xe4) = param_3;
  return param_1;
}

/* ref: FUN_00a85b70 */
uint F_00a85b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0x150);
}

/* ref: FUN_00a85b90 */
uint F_00a85b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa85b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0x150) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0x154) = param_3;
  return param_1;
}

/* ref: FUN_00a85bc0 */
uint F_00a85bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x220) = param_1;
  *(undefined4 *)((int)this + 0x224) = param_2;
  return param_1;
}

/* ref: FUN_00a85c00 */
byte F_00a85c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85c10 */
ushort F_00a85c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 6) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a85c20 */
byte F_00a85c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85c80 */
byte F_00a85c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 4 + in_ecx);
}

/* ref: FUN_00a85c90 */
byte F_00a85c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 4 + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85cb0 */
byte F_00a85cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x24) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85cc0 */
byte F_00a85cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85d60 */
byte F_00a85d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x32) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x32) = *(byte *)(in_ecx + 0x32) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a85d90 */
uint F_00a85d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa85d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_00a85e70 */
uint F_00a85e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x1888) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a85e90 */
uint F_00a85e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 0x188a) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a85eb0 */
unsigned int F_00a85eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 4);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 6);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)((int)this + 10) = *(undefined2 *)(param_1 + 10);
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 0xc);
  return 0;
}

/* ref: FUN_00a85f80 */
unsigned int F_00a85f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x10) {
    *(undefined1 *)(param_1 + 0xb080 + (int)this) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00a85fa0 */
unsigned int F_00a85fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0xc) {
    *(undefined1 *)(param_1 + 0xb090 + (int)this) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00a85fc0 */
unsigned int F_00a85fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 8) {
    *(undefined1 *)(param_1 + 0xb0cc + (int)this) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00a85fe0 */
unsigned int F_00a85fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x40) {
    *(undefined1 *)(param_1 + 0xb0d4 + (int)this) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00a86000 */
byte F_00a86000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb0d4 + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00a86030 */
unsigned int F_00a86030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa86030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x20) {
    *(undefined1 *)(param_1 + 0xb09c + (int)this) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00a86050 */
unsigned int F_00a86050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa86050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x10) {
    *(undefined1 *)(param_1 + 0xb0bc + (int)this) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00a860f0 */
uint F_00a860f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa860f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xbc));
  F_0042c880((undefined *)((int)this + 0x60));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a86110 */
uint F_00a86110(unsigned int gen_a0)
{
  GEN_ENTER(0xa86110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_00a86130 */
uint F_00a86130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00a86160 */
uint F_00a86160(unsigned int gen_a0)
{
  GEN_ENTER(0xa86160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  F_0042c880((undefined *)((int)this + 900));
  iVar1 = 7;
  this_00 = (undefined *)((int)this + 0x390);
  do {
    this_00 = (undefined *)((int)this_00 + -0x70);
    uVar2 = F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_00a861a0 */
uint F_00a861a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa861a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042cbc0((undefined *)((int)this + 0x10),param_1 + 4);
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined1 *)((int)this + 0x6c) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)((int)this + 0x6d) = *(undefined1 *)((int)param_1 + 0x6d);
  *(byte *)((int)this + 0x6e) =
       *(byte *)((int)this + 0x6e) ^
       (*(byte *)((int)param_1 + 0x6e) ^ *(byte *)((int)this + 0x6e)) & 1;
  return (uint)this;
}

/* ref: FUN_00a86260 */
uint F_00a86260(unsigned int gen_a0)
{
  GEN_ENTER(0xa86260u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  return in_ecx;
}

/* ref: Client::Game::UI::Revive::vf0 */
uint F_00a86290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a863e0 */
uint F_00a863e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa863e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x11c + *in_ecx;
}

/* ref: FUN_00a86430 */
uint F_00a86430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x11c + *in_ecx;
}

/* ref: FUN_00a86470 */
uint F_00a86470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86470u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2624 + *in_ecx;
}

/* ref: FUN_00a864a0 */
uint F_00a864a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa864a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e7894));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: ListenItemCallback_VQuestTodoList_UI_Game_Client_Event::vf1 */
uint F_00a864d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa864d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(undefined1 *)(uVar1 + 0x1dc) = 1;
  return uVar1;
}

/* ref: ListenItemCallback_VQuestTodoList_UI_Game_Client_Event::vf2 */
byte F_00a864e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa864e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00a86510 */
uint F_00a86510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e78a4));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGatheringNotebook_UI_Game_Client_Game::vf1 */
uint F_00a86550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86570 */
uint F_00a86570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VJournal_UI_Game_Client_Game::vf1 */
uint F_00a865b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa865b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a865f0 */
uint F_00a865f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa865f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e78bc));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VRecipeNotebook_UI_Game_Client_Game::vf1 */
uint F_00a86630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86650 */
uint F_00a86650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78c8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00a86680 */
uint F_00a86680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4))
  ;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestTodoList_UI_Game_Client_Game::vf1 */
uint F_00a866c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa866c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a866e0 */
uint F_00a866e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa866e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78e0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestUI_UI_Game_Client_Game::vf1 */
uint F_00a86720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86760 */
byte F_00a86760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a86780 */
byte F_00a86780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a867a0 */
uint F_00a867a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa867a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78ec));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VMap_UI_Game_Client_Game::vf1 */
uint F_00a867e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa867e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86800 */
uint F_00a86800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e78f8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGuildOrderReward_UI_Game_Client_Game::vf1 */
uint F_00a86840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86860 */
uint F_00a86860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e7904));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFishingNotebook_UI_Game_Client_Game::vf1 */
uint F_00a868a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa868a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a868c0 */
uint F_00a868c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa868c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7910));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFishingGuide_UI_Game_Client_Game::vf1 */
uint F_00a86900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86920 */
uint F_00a86920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e791c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFishRecord_UI_Game_Client_Game::vf1 */
uint F_00a86960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: ListenItemCallback_VQuestTodoList_UI_Game_Client_Event::vf0 */
uint F_00a86980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SheetWaiter_VScenarioTextReader_UI_Game_Client_Game::vf0 */
uint F_00a869b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa869b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a86a90 */
uint F_00a86a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86a90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86ae0 */
uint F_00a86ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86ae0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86b40 */
uint F_00a86b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86b40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86bf0 */
uint F_00a86bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa86bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a86c30 */
uint F_00a86c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86c30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86c90 */
uint F_00a86c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86c90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a86cc0 */
uint F_00a86cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a86cf0 */
uint F_00a86cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86cf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86d40 */
uint F_00a86d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86d40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86d90 */
uint F_00a86d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x11c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a86dc0 */
uint F_00a86dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa86dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xe0;
}

/* ref: FUN_00a86dd0 */
uint F_00a86dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa86dd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0xe1)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0xe1);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00a86e20 */
uint F_00a86e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a86e50 */
uint F_00a86e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86e50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86ee0 */
uint F_00a86ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86ee0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a86f10 */
uint F_00a86f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86f10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86f80 */
uint F_00a86f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a86fa0 */
uint F_00a86fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86fa0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a87010 */
uint F_00a87010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87040 */
uint F_00a87040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87040u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a870e0 */
uint F_00a870e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa870e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a870f0 */
uint F_00a870f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa870f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a87120 */
uint F_00a87120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x78,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87170 */
uint F_00a87170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87170u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,800);
  return uVar1;
}

/* ref: FUN_00a871c0 */
uint F_00a871c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa871c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a87220 */
uint F_00a87220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87220u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_00a87250 */
uint F_00a87250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00a872f0 */
uint F_00a872f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa872f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a87380 */
uint F_00a87380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa87380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a873a0 */
uint F_00a873a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa873a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a873d0 */
byte F_00a873d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa873d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a87430 */
uint F_00a87430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 2,0);
  return (uint)uVar1;
}

/* ref: FUN_00a87480 */
uint F_00a87480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a874f0 */
uint F_00a874f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa874f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x88,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a87540 */
uint F_00a87540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a87590 */
uint F_00a87590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a875e0 */
uint F_00a875e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa875e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a87650 */
uint F_00a87650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87650u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x11c,param_2,800);
  return uVar1;
}

/* ref: FUN_00a876e0 */
uint F_00a876e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa876e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x11c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87730 */
uint F_00a87730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87770 */
uint F_00a87770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a877a0 */
uint F_00a877a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa877a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a877d0 */
uint F_00a877d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa877d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87850 */
uint F_00a87850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87890 */
uint F_00a87890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a878c0 */
uint F_00a878c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa878c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a878f0 */
uint F_00a878f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa878f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87980 */
uint F_00a87980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x2624,800);
  return (uint)uVar1;
}

/* ref: FUN_00a879d0 */
uint F_00a879d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa879d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87a00 */
uint F_00a87a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87a00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87a30 */
uint F_00a87a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87a30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87aa0 */
uint F_00a87aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x34,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87ae0 */
uint F_00a87ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87b10 */
uint F_00a87b10(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x29;
}

/* ref: FUN_00a87b20 */
uint F_00a87b20(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a87b30 */
uint F_00a87b30(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a87b40 */
uint F_00a87b40(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a87b50 */
uint F_00a87b50(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a87b80 */
uint F_00a87b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x2c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87ba0 */
uint F_00a87ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xa87ba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a87bd0 */
uint F_00a87bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87bd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x78,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87c20 */
uint F_00a87c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87c60 */
uint F_00a87c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87c60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87c90 */
uint F_00a87c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87c90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87ce0 */
uint F_00a87ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa87ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a87de0 */
uint F_00a87de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87de0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 2,param_2,0);
  return uVar1;
}

/* ref: FUN_00a87e10 */
uint F_00a87e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87e10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87e50 */
uint F_00a87e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87e50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x88,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87e90 */
uint F_00a87e90(unsigned int gen_a0)
{
  GEN_ENTER(0xa87e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x24;
}

/* ref: FUN_00a87ea0 */
uint F_00a87ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87ed0 */
uint F_00a87ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xa87ed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00a87ee0 */
uint F_00a87ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87ee0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x24,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87f10 */
uint F_00a87f10(unsigned int gen_a0)
{
  GEN_ENTER(0xa87f10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00a87f20 */
uint F_00a87f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87f20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87f50 */
byte F_00a87f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a87f80 */
uint F_00a87f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xe4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87fb0 */
uint F_00a87fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87fb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x11c,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87ff0 */
uint F_00a87ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xa87ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x70;
}

/* ref: FUN_00a88000 */
uint F_00a88000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a88030 */
uint F_00a88030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,800);
  return uVar1;
}

/* ref: FUN_00a88070 */
uint F_00a88070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88070u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x2624,param_2,800);
  return uVar1;
}

/* ref: FUN_00a880c0 */
uint F_00a880c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa880c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x34,param_2,800);
  return uVar1;
}

/* ref: FUN_00a880f0 */
uint F_00a880f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa880f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00a88100 */
uint F_00a88100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x24,param_2,800);
  return uVar1;
}

/* ref: FUN_00a88130 */
uint F_00a88130(unsigned int gen_a0)
{
  GEN_ENTER(0xa88130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x28;
}

/* ref: FUN_00a88140 */
uint F_00a88140(unsigned int gen_a0)
{
  GEN_ENTER(0xa88140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x29)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x29);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00a88160 */
uint F_00a88160(unsigned int gen_a0)
{
  GEN_ENTER(0xa88160u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x29);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x29);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00a88180 */
uint F_00a88180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88180u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x2c,param_2,800);
  return uVar1;
}

/* ref: FUN_00a881b0 */
uint F_00a881b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa881b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a881d0 */
uint F_00a881d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa881d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a881f0 */
uint F_00a881f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa881f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a88230 */
uint F_00a88230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a88260 */
uint F_00a88260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa88260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a88270 */
uint F_00a88270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa88270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a88280 */
uint F_00a88280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa88280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a88290 */
uint F_00a88290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa88290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a882a0 */
uint F_00a882a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa882a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a882c0 */
unsigned int F_00a882c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa882c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x25))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_00a88320 */
uint F_00a88320(unsigned int gen_a0)
{
  GEN_ENTER(0xa88320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x25)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x25);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00a88350 */
uint F_00a88350(unsigned int gen_a0)
{
  GEN_ENTER(0xa88350u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00a88380 */
uint F_00a88380(unsigned int gen_a0)
{
  GEN_ENTER(0xa88380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00a883a0 */
uint F_00a883a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa883a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00a883e0 */
uint F_00a883e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa883e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x71)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x71);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00a88410 */
uint F_00a88410(unsigned int gen_a0)
{
  GEN_ENTER(0xa88410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00a88430 */
uint F_00a88430(unsigned int gen_a0)
{
  GEN_ENTER(0xa88430u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00a88470 */
uint F_00a88470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88470u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x34;
  return (uint)in_ecx;
}

/* ref: FUN_00a884a0 */
uint F_00a884a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa884a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00a884b0 */
uint F_00a884b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa884b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x24,param_2,800);
  return uVar1;
}

/* ref: FUN_00a884e0 */
unsigned int F_00a884e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa884e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x29);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x29);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x29);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x29);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a88560 */
uint F_00a88560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88560u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a88580 */
unsigned int F_00a88580(unsigned int gen_a0)
{
  GEN_ENTER(0xa88580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a885d0 */
uint F_00a885d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa885d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a885e0 */
uint F_00a885e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa885e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a885f0 */
uint F_00a885f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa885f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88610 */
uint F_00a88610(unsigned int gen_a0)
{
  GEN_ENTER(0xa88610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_00a88630 */
uint F_00a88630(unsigned int gen_a0)
{
  GEN_ENTER(0xa88630u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00a88660 */
unsigned int F_00a88660(unsigned int gen_a0)
{
  GEN_ENTER(0xa88660u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a886b0 */
uint F_00a886b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa886b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a886c0 */
uint F_00a886c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa886c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a886d0 */
unsigned int F_00a886d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa886d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a88720 */
uint F_00a88720(unsigned int gen_a0)
{
  GEN_ENTER(0xa88720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88730 */
uint F_00a88730(unsigned int gen_a0)
{
  GEN_ENTER(0xa88730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88740 */
uint F_00a88740(unsigned int gen_a0)
{
  GEN_ENTER(0xa88740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88750 */
uint F_00a88750(unsigned int gen_a0)
{
  GEN_ENTER(0xa88750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88760 */
uint F_00a88760(unsigned int gen_a0)
{
  GEN_ENTER(0xa88760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88770 */
uint F_00a88770(unsigned int gen_a0)
{
  GEN_ENTER(0xa88770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88780 */
uint F_00a88780(unsigned int gen_a0)
{
  GEN_ENTER(0xa88780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88790 */
uint F_00a88790(unsigned int gen_a0)
{
  GEN_ENTER(0xa88790u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887a0 */
uint F_00a887a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887b0 */
uint F_00a887b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887c0 */
uint F_00a887c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887d0 */
uint F_00a887d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887e0 */
uint F_00a887e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887f0 */
uint F_00a887f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88800 */
uint F_00a88800(unsigned int gen_a0)
{
  GEN_ENTER(0xa88800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88810 */
uint F_00a88810(unsigned int gen_a0)
{
  GEN_ENTER(0xa88810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88820 */
uint F_00a88820(unsigned int gen_a0)
{
  GEN_ENTER(0xa88820u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88830 */
uint F_00a88830(unsigned int gen_a0)
{
  GEN_ENTER(0xa88830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88860 */
uint F_00a88860(unsigned int gen_a0)
{
  GEN_ENTER(0xa88860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a888b0 */
uint F_00a888b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa888b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a888c0 */
uint F_00a888c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa888c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a888d0 */
uint F_00a888d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa888d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88900 */
uint F_00a88900(unsigned int gen_a0)
{
  GEN_ENTER(0xa88900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88910 */
uint F_00a88910(unsigned int gen_a0)
{
  GEN_ENTER(0xa88910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88920 */
uint F_00a88920(unsigned int gen_a0)
{
  GEN_ENTER(0xa88920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88950 */
uint F_00a88950(unsigned int gen_a0)
{
  GEN_ENTER(0xa88950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a889a0 */
uint F_00a889a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa889a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a889f0 */
uint F_00a889f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa889f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a00 */
uint F_00a88a00(unsigned int gen_a0)
{
  GEN_ENTER(0xa88a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a10 */
uint F_00a88a10(unsigned int gen_a0)
{
  GEN_ENTER(0xa88a10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a20 */
uint F_00a88a20(unsigned int gen_a0)
{
  GEN_ENTER(0xa88a20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a40 */
uint F_00a88a40(unsigned int gen_a0)
{
  GEN_ENTER(0xa88a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a70 */
unsigned int F_00a88a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88a70u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00a88a90 */
unsigned int F_00a88a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00a88ac0 */
unsigned int F_00a88ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return 0;
}

/* ref: FUN_00a88b00 */
unsigned int F_00a88b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88b00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00a88b40 */
unsigned int F_00a88b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00a88b60 */
unsigned int F_00a88b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return 0;
}

/* ref: FUN_00a88bb0 */
unsigned int F_00a88bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return 0;
}

/* ref: FUN_00a88bf0 */
uint F_00a88bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cbc0(this,param_1);
  puVar2 = (undefined4 *)(param_1 + 0x54);
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)((int)this + 0x7c) = *(undefined2 *)(param_1 + 0x7c);
  *(undefined2 *)((int)this + 0x7e) = *(undefined2 *)(param_1 + 0x7e);
  *(undefined2 *)((int)this + 0x80) = *(undefined2 *)(param_1 + 0x80);
  *(undefined1 *)((int)this + 0x82) = *(undefined1 *)(param_1 + 0x82);
  *(undefined1 *)((int)this + 0x83) = *(undefined1 *)(param_1 + 0x83);
  *(undefined1 *)((int)this + 0x84) = *(undefined1 *)(param_1 + 0x84);
  *(undefined1 *)((int)this + 0x85) = *(undefined1 *)(param_1 + 0x85);
  return (uint)this;
}

/* ref: FUN_00a88c70 */
uint F_00a88c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  F_0042cbc0((undefined *)((int)this + 0x60),param_1 + 0x60);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  F_0042cbc0((undefined *)((int)this + 0xbc),param_1 + 0xbc);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined1 *)((int)this + 0x118) = *(undefined1 *)(param_1 + 0x118);
  *(undefined1 *)((int)this + 0x119) = *(undefined1 *)(param_1 + 0x119);
  return (uint)this;
}

/* ref: FUN_00a88d10 */
uint F_00a88d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 1);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x16);
  *(undefined4 *)((int)this + 0xac) = param_1[0x2b];
  *(undefined4 *)((int)this + 0xb0) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  puVar2 = param_1 + 0x2e;
  puVar3 = (undefined4 *)((int)this + 0xb8);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  return (uint)this;
}

/* ref: FUN_00a88d90 */
uint F_00a88d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined1 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 4);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042cbc0((undefined *)((int)this + 0x5c),param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  puVar2 = (undefined4 *)(param_1 + 200);
  puVar3 = (undefined4 *)((int)this + 200);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  return (uint)this;
}

/* ref: FUN_00a88e60 */
unsigned int F_00a88e60(unsigned int gen_a0)
{
  GEN_ENTER(0xa88e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0xe1) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0xe1) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0xe1) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0xe1) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0xe1);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0xe1);
    }
    if (*(char *)(*(int *)this + 0xe1) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00a88f00 */
unsigned int F_00a88f00(unsigned int gen_a0)
{
  GEN_ENTER(0xa88f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x71) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x71) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x71) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x71) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x71);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x71);
    }
    if (*(char *)(*(int *)this + 0x71) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00a88f70 */
unsigned int F_00a88f70(unsigned int gen_a0)
{
  GEN_ENTER(0xa88f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00a88fe0 */
unsigned int F_00a88fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xa88fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00a89070 */
unsigned int F_00a89070(unsigned int gen_a0)
{
  GEN_ENTER(0xa89070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00a89120 */
unsigned int F_00a89120(unsigned int gen_a0)
{
  GEN_ENTER(0xa89120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x29) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x29) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x29) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x29) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x29);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x29);
    }
    if (*(char *)(*(int *)this + 0x29) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00a89180 */
unsigned int F_00a89180(unsigned int gen_a0)
{
  GEN_ENTER(0xa89180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00a891e0 */
unsigned int F_00a891e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa891e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x25) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x25) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x25) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x25) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x25);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x25);
    }
    if (*(char *)(*(int *)this + 0x25) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_00a89240 */
uint F_00a89240(unsigned int gen_a0)
{
  GEN_ENTER(0xa89240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89250 */
uint F_00a89250(unsigned int gen_a0)
{
  GEN_ENTER(0xa89250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89260 */
uint F_00a89260(unsigned int gen_a0)
{
  GEN_ENTER(0xa89260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89270 */
uint F_00a89270(unsigned int gen_a0)
{
  GEN_ENTER(0xa89270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89280 */
uint F_00a89280(unsigned int gen_a0)
{
  GEN_ENTER(0xa89280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89290 */
uint F_00a89290(unsigned int gen_a0)
{
  GEN_ENTER(0xa89290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892a0 */
uint F_00a892a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892b0 */
uint F_00a892b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892c0 */
uint F_00a892c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892d0 */
uint F_00a892d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892e0 */
uint F_00a892e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892f0 */
uint F_00a892f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89300 */
uint F_00a89300(unsigned int gen_a0)
{
  GEN_ENTER(0xa89300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89310 */
uint F_00a89310(unsigned int gen_a0)
{
  GEN_ENTER(0xa89310u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89320 */
uint F_00a89320(unsigned int gen_a0)
{
  GEN_ENTER(0xa89320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89330 */
uint F_00a89330(unsigned int gen_a0)
{
  GEN_ENTER(0xa89330u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89340 */
uint F_00a89340(unsigned int gen_a0)
{
  GEN_ENTER(0xa89340u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89360 */
uint F_00a89360(unsigned int gen_a0)
{
  GEN_ENTER(0xa89360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89370 */
uint F_00a89370(unsigned int gen_a0)
{
  GEN_ENTER(0xa89370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89380 */
uint F_00a89380(unsigned int gen_a0)
{
  GEN_ENTER(0xa89380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89390 */
uint F_00a89390(unsigned int gen_a0)
{
  GEN_ENTER(0xa89390u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893a0 */
uint F_00a893a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893b0 */
uint F_00a893b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893c0 */
uint F_00a893c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893d0 */
uint F_00a893d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893e0 */
uint F_00a893e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893f0 */
uint F_00a893f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89400 */
uint F_00a89400(unsigned int gen_a0)
{
  GEN_ENTER(0xa89400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a894d0 */
uint F_00a894d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa894d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89570 */
uint F_00a89570(unsigned int gen_a0)
{
  GEN_ENTER(0xa89570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89580 */
uint F_00a89580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a895a0 */
uint F_00a895a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895b0 */
uint F_00a895b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895c0 */
uint F_00a895c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895d0 */
uint F_00a895d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895e0 */
uint F_00a895e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895f0 */
uint F_00a895f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89600 */
uint F_00a89600(unsigned int gen_a0)
{
  GEN_ENTER(0xa89600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89610 */
uint F_00a89610(unsigned int gen_a0)
{
  GEN_ENTER(0xa89610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89620 */
uint F_00a89620(unsigned int gen_a0)
{
  GEN_ENTER(0xa89620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89630 */
uint F_00a89630(unsigned int gen_a0)
{
  GEN_ENTER(0xa89630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89640 */
uint F_00a89640(unsigned int gen_a0)
{
  GEN_ENTER(0xa89640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89650 */
uint F_00a89650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  F_0042ccf0((undefined *)((int)this + 0x60),param_1 + 0x60);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  F_0042ccf0((undefined *)((int)this + 0xbc),param_1 + 0xbc);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined1 *)((int)this + 0x118) = *(undefined1 *)(param_1 + 0x118);
  *(undefined1 *)((int)this + 0x119) = *(undefined1 *)(param_1 + 0x119);
  return (uint)this;
}

/* ref: FUN_00a896f0 */
uint F_00a896f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa896f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)this = *param_1;
  F_0042ccf0((undefined *)((int)this + 4),param_1 + 1);
  F_0042ccf0((undefined *)((int)this + 0x58),param_1 + 0x16);
  *(undefined4 *)((int)this + 0xac) = param_1[0x2b];
  *(undefined4 *)((int)this + 0xb0) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  puVar1 = (undefined4 *)((int)this + 0xb8);
  iVar2 = 0x18;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP((((int)param_1 - (int)this) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  return (uint)this;
}

/* ref: FUN_00a89770 */
uint F_00a89770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  F_0042ccf0((undefined *)((int)this + 4),param_1 + 4);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042ccf0((undefined *)((int)this + 0x5c),param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)((int)this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)((int)this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)((int)this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)((int)this + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)((int)this + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)((int)this + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)((int)this + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)((int)this + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)((int)this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)((int)this + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)((int)this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)((int)this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)((int)this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)((int)this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  return (uint)this;
}

/* ref: FUN_00a89bd0 */
uint F_00a89bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89be0 */
uint F_00a89be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89be0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x11c;
  return (uint)in_ecx;
}

/* ref: FUN_00a89c00 */
uint F_00a89c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x11c;
  return (uint)in_ecx;
}

/* ref: FUN_00a89c30 */
uint F_00a89c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89c60 */
uint F_00a89c60(unsigned int gen_a0)
{
  GEN_ENTER(0xa89c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89c80 */
uint F_00a89c80(unsigned int gen_a0)
{
  GEN_ENTER(0xa89c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89c90 */
uint F_00a89c90(unsigned int gen_a0)
{
  GEN_ENTER(0xa89c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89ca0 */
uint F_00a89ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89cb0 */
uint F_00a89cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89cb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89cc0 */
uint F_00a89cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89cc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89d20 */
uint F_00a89d20(unsigned int gen_a0)
{
  GEN_ENTER(0xa89d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89d30 */
uint F_00a89d30(unsigned int gen_a0)
{
  GEN_ENTER(0xa89d30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89d40 */
uint F_00a89d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89d60 */
uint F_00a89d60(unsigned int gen_a0)
{
  GEN_ENTER(0xa89d60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89d70 */
uint F_00a89d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89d90 */
uint F_00a89d90(unsigned int gen_a0)
{
  GEN_ENTER(0xa89d90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89da0 */
uint F_00a89da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

