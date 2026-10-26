#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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

/* ref: FUN_007826f0 */
byte F_007826f0(void)
{
  GEN_ENTER(0x7826f0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int local_18;
  undefined4 * local_14;
  int local_10;
  undefined4 * local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = &REFG(undefined4, 0x13282e0);
  do {
    local_18 = 0;
    local_8 = local_10;
    local_c = local_14;
    do {
      iVar4 = 0;
      iVar3 = local_8;
      puVar5 = local_c;
      do {
        if (iVar3 < 0) {
          return 0;
        }
        piVar1 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),*puVar5);
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1);
        if ((char)uVar2 == '\0') {
          return 0;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar4 < 2);
      local_8 = local_8 + 2;
      local_c = local_c + 2;
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    local_10 = local_10 + 4;
    local_14 = local_14 + 4;
    if (0x132832f < (int)local_14) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_007827a0 */
uint F_007827a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7827a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  undefined4 uVar2;
  
  if (REFG(void * PTR32, 0x148a44c) == (undefined *)0x0) {
    return in_EAX;
  }
  uVar2 = 3;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
  case 2: ;
    uVar1 = F_00a4b780(8);
    uVar2 = *(undefined4 *)(&REFG(undefined, 0x1328338) + (uVar1 + 1) * 4 + param_1 * 0x24);
  default: ;
    if ((param_1 == 1) || (param_1 == 10)) {
LAB_00782838: ;
      F_00aa0560(REFG(void * PTR32, 0x148a44c),0x22);
      uVar1 = F_00aa0040(REFG(void * PTR32, 0x148a44c),0,uVar2,0x22,0,REFG(float, 0x1090708),0,0);
      return uVar1;
    }
    break;
  case 3: ;
    uVar2 = 0x2ca;
    break;
  case 4: ;
    uVar2 = 0x2e3;
    break;
  case 5: ;
    uVar2 = 0x2cc;
    break;
  case 6: ;
    uVar2 = 0x2c4;
    break;
  case 7: ;
    uVar2 = 0x2e1;
    break;
  case 8: ;
    uVar2 = 0x2c5;
    break;
  case 10: ;
    uVar2 = 1;
    goto LAB_00782838;
  case 0xb: ;
    uVar2 = 2;
  }
  F_00aa0560(REFG(void * PTR32, 0x148a44c),3);
  uVar1 = F_00aa4270(REFG(void * PTR32, 0x148a44c),uVar2,0,0);
  return uVar1;
}

/* ref: FUN_007828a0 */
unsigned int F_007828a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7828a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
    F_00aa0560(REFG(void * PTR32, 0x148a44c),3);
    F_00aa4270(REFG(void * PTR32, 0x148a44c),param_1,0,0);
  }
  return 0;
}

/* ref: FUN_00782910 */
byte F_00782910(unsigned int gen_a0)
{
  GEN_ENTER(0x782910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_c;
  byte local_5;
  
  uVar2 = 0;
  local_5 = 0;
  if (param_1 < 1) {
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
      F_00aa80c0(REFG(void * PTR32, 0x148a44c),0,0,0);
      F_00aa80c0(REFG(void * PTR32, 0x148a44c),1,0,0);
      return 0;
    }
  }
  else if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
    uVar3 = 0;
    iVar4 = 0;
    local_c = 0;
    uVar1 = F_00ab21a0(param_1);
    if ((uVar1 != 0) && (0 < *(int *)(uVar1 + 0x14))) {
      uVar1 = F_00ab24a0(*(int *)(uVar1 + 0x14));
      if ((uVar1 != 0) && (*(int *)(uVar1 + 0x18) != 0 || *(int *)(uVar1 + 0x1c) != 0)) {
        uVar3 = *(undefined4 *)(uVar1 + 0x18);
        uVar2 = *(undefined4 *)(uVar1 + 0x20);
        local_c = *(undefined4 *)(uVar1 + 0x24);
        local_5 = 1;
        iVar4 = *(int *)(uVar1 + 0x1c);
      }
    }
    F_00aa80c0(REFG(void * PTR32, 0x148a44c),0,uVar3,iVar4);
    F_00aa80c0(REFG(void * PTR32, 0x148a44c),1,uVar2,local_c);
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0xffffe940) {
      *((undefined2 *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x1732))) = 0;
    }
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0xffffe1a0) {
      *((undefined2 *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x1ed2))) = 0;
    }
  }
  return local_5;
}

/* ref: FUN_00782a00 */
byte F_00782a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x782a00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  undefined * this;
  int iVar2;
  int iVar3;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = F_00ab3660(param_1 & 0xff);
  if ((uVar1 == 0) || (*(int *)(uVar1 + 0x38) == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    uVar1 = F_00ab21a0(*(int *)(uVar1 + 0x38));
    if ((uVar1 != 0) && (0 < *(int *)(uVar1 + 0x14))) {
      uVar1 = F_00ab24a0(*(int *)(uVar1 + 0x14));
      if (uVar1 != 0) {
        iVar2 = *(int *)(uVar1 + 0x18);
        local_10 = *(int *)(uVar1 + 0x1c);
        if (iVar2 != 0 || local_10 != 0) {
          local_c = *(undefined4 *)(uVar1 + 0x20);
          local_8 = *(undefined4 *)(uVar1 + 0x24);
          goto LAB_00782a4e;
        }
      }
    }
  }
  else if (param_2 == 1) {
    local_10 = *(int *)(uVar1 + 0x2c);
    local_c = *(undefined4 *)(uVar1 + 0x30);
    iVar2 = *(int *)(uVar1 + 0x28);
    local_8 = *(undefined4 *)(uVar1 + 0x34);
LAB_00782a4e: ;
    iVar3 = 0;
    do {
      if (-1 < iVar3) {
        this = (undefined *)F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[iVar3]);
        if (this != (undefined *)0x0) {
          F_00aa80c0(this,0,iVar2,local_10);
          F_00aa80c0(this,1,local_c,local_8);
          if (this != (undefined *)0xffffe940) {
            *(undefined2 *)((int)this + 0x1732) = 0;
          }
          if (this != (undefined *)0xffffe1a0) {
            *(undefined2 *)((int)this + 0x1ed2) = 0;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    return 1;
  }
  return 0;
}

/* ref: FUN_00782b10 */
uint F_00782b10(void)
{
  GEN_ENTER(0x782b10u, 0u, 0u, 0u, 0u);
  undefined * in_EAX = 0;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (-1 < iVar1) {
      in_EAX = (undefined *)F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[iVar1]);
      if (in_EAX != (undefined *)0x0) {
        F_00aa80c0(in_EAX,0,0,0);
        in_EAX = (undefined *)F_00aa80c0(in_EAX,1,0,0);
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  return (uint)in_EAX;
}

/* ref: FUN_00782b60 */
uint F_00782b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x782b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = ((param_3 & 0xff) - 2) + (param_2 & 0xff) * 2;
  if (iVar1 < 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[iVar1]);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2);
    }
  }
  uVar3 = (&REFG(undefined4, 0x13282e0))[iVar1];
  if (-1 < (int)uVar3) {
    uVar3 = F_00ae0cd0(&REFG(undefined, 0x14c0920),uVar3);
    (&REFG(undefined4, 0x13282e0))[iVar1] = 0xffffffff;
  }
  if (REFG(int * PTR32, 0x148a44c) == piVar2) {
    REFG(int * PTR32, 0x148a44c) = (int *)0x0;
  }
  return uVar3;
}

/* ref: FUN_00782be0 */
unsigned int F_00782be0(void)
{
  GEN_ENTER(0x782be0u, 0u, 0u, 0u, 0u);
  if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x24))))(REFG(int * PTR32, 0x148a44c),6,0);
  }
  return 0;
}

/* ref: FUN_00782c20 */
unsigned int F_00782c20(float gen_a0)
{
  GEN_ENTER(0x782c20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x48))))((undefined4)gen_fl2bits(param_1));
  }
  return 0;
}

/* ref: FUN_00782c40 */
float F_00782c40(void)
{
  GEN_ENTER(0x782c40u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x148a44c) != 0) {
    return *(float *)(REFG(int, 0x148a44c) + 0xb0);
  }
  return (float)(float10)0;
}

/* ref: FUN_00782c60 */
uint F_00782c60(void)
{
  GEN_ENTER(0x782c60u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x148a44c);
}

/* ref: FUN_00782cc0 */
uint F_00782cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x782cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (-1 < (int)(&REFG(undefined4, 0x148a478))[param_1 * 4]) {
    uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x148a478))[param_1 * 4]);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00782cf0 */
uint F_00782cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x782cf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = &REFG(undefined4, 0x148a470);
  while ((*piVar2 != param_1 || (piVar2[1] != param_2))) {
    piVar2 = piVar2 + 4;
    uVar1 = uVar1 + 1;
    if (0x148a56f < (int)piVar2) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_00782d20 */
unsigned int F_00782d20(unsigned int gen_a0)
{
  GEN_ENTER(0x782d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  bool bVar2;
  
  if (-1 < param_1) {
    if ((int)(&REFG(undefined4, 0x148a478))[param_1 * 4] < 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x148a478))[param_1 * 4]);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1);
      }
    }
    if (-1 < (int)(&REFG(undefined4, 0x148a478))[param_1 * 4]) {
      F_00ae0cd0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x148a478))[param_1 * 4]);
    }
    bVar2 = REFG(int * PTR32, 0x148a44c) == piVar1;
    (&REFG(undefined4, 0x148a470))[param_1 * 4] = 0;
    (&REFG(undefined4, 0x148a474))[param_1 * 4] = 0;
    (&REFG(undefined4, 0x148a478))[param_1 * 4] = 0xffffffff;
    if (bVar2) {
      REFG(int * PTR32, 0x148a44c) = (int *)0x0;
    }
  }
  return 0;
}

/* ref: FUN_00782da0 */
unsigned int F_00782da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x782da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &REFG(undefined4, 0x148a470);
  do {
    if ((*piVar1 == param_1) && (piVar1[1] == param_2)) goto LAB_00782dc9;
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x148a570);
  iVar2 = -1;
LAB_00782dc9: ;
  F_00782d20(iVar2);
  return 0;
}

/* ref: FUN_00782de0 */
unsigned int F_00782de0(unsigned int gen_a0)
{
  GEN_ENTER(0x782de0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  int * piVar2;
  bool bVar3;
  
  if (param_1 < 3) {
    iVar1 = (&REFG(undefined4, 0x148a578))[param_1 * 4];
    if (-1 < iVar1) {
      piVar2 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),iVar1);
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2);
      }
      F_00ae0cd0(&REFG(undefined, 0x14c0920),iVar1);
      bVar3 = REFG(int * PTR32, 0x148a44c) == piVar2;
      (&REFG(undefined4, 0x148a578))[param_1 * 4] = 0xffffffff;
      (&REFG(undefined4, 0x148a570))[param_1 * 4] = 0;
      (&REFG(undefined4, 0x148a574))[param_1 * 4] = 0;
      if (bVar3) {
        REFG(int * PTR32, 0x148a44c) = (int *)0x0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00782e50 */
uint F_00782e50(void)
{
  GEN_ENTER(0x782e50u, 0u, 0u, 0u, 0u);
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint local_8;
  
  local_8 = 0;
  piVar3 = &REFG(undefined4, 0x148a578);
  do {
    iVar1 = *piVar3;
    if (-1 < iVar1) {
      piVar2 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),iVar1);
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2);
      }
      F_00ae0cd0(&REFG(undefined, 0x14c0920),iVar1);
      *piVar3 = -1;
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      if (REFG(int * PTR32, 0x148a44c) == piVar2) {
        REFG(int * PTR32, 0x148a44c) = (int *)0x0;
      }
    }
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 4;
  } while (local_8 < 2);
  return local_8;
}

/* ref: FUN_00782ed0 */
uint F_00782ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x782ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = param_4 + (param_3 + param_2 * 2) * 2;
  if (((-1 < (int)uVar2) && (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[uVar2]), uVar2 != 0)
      ) && (piVar1 = *(int * PTR32 *)(uVar2 + 0xec), piVar1 != (int *)0x0)) {
    iVar4 = 0;
    iVar3 = param_1;
    do {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1,iVar4,iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 10);
  }
  return uVar2;
}

/* ref: FUN_00782f30 */
uint F_00782f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x782f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar3 = param_4 + (param_3 + param_2 * 2) * 2;
  if ((-1 < (int)uVar3) &&
     (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x13282e0))[uVar3]), uVar3 = uVar2, uVar2 != 0)) {
    this = *(undefined * PTR32 *)(uVar2 + 0xec);
    if (this != (undefined *)0x0) {
      F_00b88e00(param_1,param_1);
      bVar1 = F_006a9a90(this,param_1,1);
      uVar3 = CONCAT31(extraout_var,bVar1);
    }
    *(ushort *)(uVar2 + 0x2ea4) = (ushort)(byte)param_5;
  }
  return uVar3;
}

/* ref: FUN_00782fa0 */
uint F_00782fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x782fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = REFG(void * PTR32, 0x148a44c);
  if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
    *((ushort *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x2ea4))) = (ushort)(byte)param_1;
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
      F_00aa0560(REFG(void * PTR32, 0x148a44c),3);
      pvVar1 = (undefined *)F_00aa4270(REFG(void * PTR32, 0x148a44c),param_2,0,0);
    }
  }
  return (uint)pvVar1;
}

/* ref: FUN_00782fe0 */
uint F_00782fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x782fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar2 = param_2;
  if (param_1 != (int *)0x0) {
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    (*(int *)(gen_frame + 0x0)) = param_2[7];
    (*(int *)(gen_frame + 0x8)) = param_2[9];
    (*(int *)(gen_frame + 0x4)) = param_2[8];
    (*(int *)(gen_frame + 0x10)) = param_2[0xb];
    (*(int *)(gen_frame + 0xc)) = param_2[10];
    (*(int *)(gen_frame + 0x18)) = param_2[0xd];
    (*(int *)(gen_frame + 0x14)) = param_2[0xc];
    (*(int *)(gen_frame + 0x20)) = param_2[0xf];
    (*(int *)(gen_frame + 0x1c)) = param_2[0xe];
    (*(int *)(gen_frame + 0x24)) = param_2[0x10];
    F_00aaa640(param_1,param_2,&(*(int *)(gen_frame + 0x0)));
    ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1);
    ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,8,0);
    ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,0xb,0);
    ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,6,0);
    F_00aa80c0(param_1,0,param_3,param_4);
    F_00aa80c0(param_1,1,param_5,param_6);
    F_00aa39d0(param_1,param_7);
    F_00aa9000(param_1,param_8);
    F_00aa1720(param_1,param_9);
    uVar1 = F_00a5f500(param_1);
    if (uVar1 != 0) {
      *(undefined2 *)(uVar1 + 0x72) = 0;
    }
    if (param_1 != (int *)0xffffe940) {
      *(undefined2 *)((int)param_1 + 0x1732) = 0;
    }
    piVar2 = param_1 + 0x798;
    if (piVar2 != (int *)0x0) {
      *(undefined2 *)((int)param_1 + 0x1ed2) = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)piVar2;
}

/* ref: FUN_00783120 */
uint F_00783120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = F_00e3be40(param_1);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar1 + 0xb4);
  }
  return (uint)this;
}

/* ref: FUN_00783160 */
unsigned int F_00783160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783160u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  *in_ecx = param_2;
  if (param_2 != 0) {
    uVar1 = F_00e3be40(param_2);
    in_ecx[4] = *(int *)(uVar1 + 0xb4);
  }
  return 0;
}

/* ref: FUN_007831a0 */
uint F_007831a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7831a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(int *)this = param_1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
    *(uint *)((int)this + 0xc) = uVar1;
    return uVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}

/* ref: FUN_007831d0 */
byte F_007831d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7831d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 8) == *(int *)((int)this + 8)) &&
     (*(int *)(iVar1 + 0xc) == *(int *)((int)this + 0xc))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00783200 */
ushort F_00783200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)this != 0) {
    uVar2 = F_00e3be40(*(int *)this);
    if (uVar2 != 0) {
      uVar3 = F_00ab21a0(param_1 & 0xff);
      if (((uVar3 == 0) || (*(char *)(uVar3 + 0x43) < '\0')) ||
         (uVar1 = *((ushort *)GEN_TOP((uVar2 + 0x24 + *(char *)(uVar3 + 0x43) * 2))), uVar1 == 0)) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00783250 */
ushort F_00783250(unsigned int gen_a0)
{
  GEN_ENTER(0x783250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = F_00e3be40(*(int *)this);
    if (uVar1 != 0) {
      uVar1 = F_00ab1c90((int)*(short *)(uVar1 + 0x54));
      if (uVar1 != 0) {
        return *(ushort *)(uVar1 + 0x20);
      }
    }
  }
  return 0;
}

/* ref: FUN_00783310 */
uint F_00783310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x783310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x108) = param_2;
  return param_1;
}

/* ref: FUN_00783330 */
uint F_00783330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00783350 */
byte F_00783350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x783350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xc) == 0) {
    uVar2 = F_00974770(*(undefined * PTR32 *)((int)this + 8),0);
    *(uint *)((int)this + 0xc) = uVar2;
  }
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  bVar1 = F_009747b0(*(undefined * PTR32 *)((int)this + 8),param_1,param_2,this,*(int *)((int)this + 0xc));
  *(uint *)((int)this + 0xfc) = (bVar1 == 0) + 2;
  return bVar1;
}

/* ref: FUN_007833a0 */
byte F_007833a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7833a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0xfc) == 4) {
    bVar1 = F_009747f0(*(undefined * PTR32 *)((int)this + 8),param_1,param_2,param_3,this,
                         *(int *)((int)this + 0xc),0);
    *(uint *)((int)this + 0xfc) = (bVar1 == 0) + 5;
    return bVar1;
  }
  return 4 < *(int *)((int)this + 0xfc);
}

/* ref: FUN_00783400 */
byte F_00783400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x783400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  bVar1 = F_00974a60(*(undefined * PTR32 *)((int)this + 8),param_1,param_2,param_3,this,
                       *(int *)((int)this + 0xc));
  *(uint *)((int)this + 0xfc) = (bVar1 == 0) + 0x12;
  return bVar1;
}

/* ref: FUN_00783440 */
byte F_00783440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  byte bVar2;
  undefined1 * puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 0xc) != 0) {
    if (*param_1 == 0) {
      puVar3 = &REFG(undefined1, 0x107fc63);
    }
    else {
      puVar3 = (undefined1 *)(*param_1 + 0x1a);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),puVar3,REFG(undefined4, 0x108cc50));
    iVar1 = *param_1;
    if (iVar1 == 0) {
      uVar5 = 0;
      uVar6 = 0;
      uVar4 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + 8);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      uVar4 = (uint)*(byte *)(iVar1 + 0x10);
    }
    bVar2 = F_00974bf0(*(undefined * PTR32 *)((int)this + 8),uVar4,uVar5,uVar6,((undefined1 *)(gen_frame + 0x4)),this,
                         *(undefined4 *)((int)this + 0xc));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    *(uint *)((int)this + 0xfc) = (bVar2 == 0) + 0x18;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar2;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00783500 */
byte F_00783500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x783500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  bVar1 = F_00974c70(*(undefined * PTR32 *)((int)this + 8),param_1,param_2,param_3,param_4,this,
                       *(int *)((int)this + 0xc));
  *(uint *)((int)this + 0xfc) = (bVar1 == 0) + 0x1b;
  return bVar1;
}

/* ref: FUN_007835d0 */
uint F_007835d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7835d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00414fd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10));
  return (uint)uVar1;
}

/* ref: FUN_007835e0 */
uint F_007835e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7835e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  *(uint *)(in_ecx + 0x128) = param_2;
  return param_2;
}

/* ref: FUN_00783600 */
uint F_00783600(unsigned int gen_a0)
{
  GEN_ENTER(0x783600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  uint * puVar7;
  int local_c;
  
  puVar7 = (uint *)((int)this + 0x14);
  local_c = 2;
  do {
    if (puVar7[0x3c] == 1) {
      if (puVar7[1] == 0) {
        cVar1 = *(char *)(*(int *)this + 0x5fc);
        cVar2 = *(char *)(*(int *)this + 0x5fd);
        uVar4 = *puVar7;
        if (uVar4 == 0) {
          uVar4 = F_00974770((undefined *)puVar7[-1],0);
          *puVar7 = uVar4;
          if (uVar4 == 0) goto LAB_0078367c;
        }
        bVar3 = F_009747b0((undefined *)puVar7[-1],(int)cVar2,(int)cVar1,puVar7 + -3,uVar4);
        puVar7[0x3c] = 3 - (bVar3 != 0);
      }
      else {
        puVar7[0x3c] = 7;
      }
    }
LAB_0078367c: ;
    puVar7 = puVar7 + 0x46;
    local_c = local_c + -1;
  } while (local_c != 0);
  bVar3 = 0;
  iVar5 = 0;
  piVar6 = (int *)((int)this + 0x18);
  do {
    if (*piVar6 != 0) {
      bVar3 = 1;
      break;
    }
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 0x46;
  } while (iVar5 < 2);
  uVar4 = (uint)bVar3 * 2 + 5;
  *(uint *)((int)this + 0x238) = uVar4;
  return uVar4;
}

/* ref: FUN_00783730 */
byte F_00783730(unsigned int gen_a0)
{
  GEN_ENTER(0x783730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0x104);
  do {
    if (*piVar1 != 1) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x46;
  } while (iVar2 < 2);
  return 1;
}

/* ref: FUN_00783760 */
unsigned int F_00783760(unsigned int gen_a0)
{
  GEN_ENTER(0x783760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x238))) {
  case 2: ;
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x104);
    break;
  default: ;
    return 0;
  case 5: ;
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x104);
    do {
      if (4 < *piVar2) {
        *(undefined4 *)((int)this + 0x238) = 6;
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x46;
    } while (iVar1 < 2);
    return 0;
  case 8: ;
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x104);
    do {
      if (7 < *piVar2) {
        *(undefined4 *)((int)this + 0x238) = 9;
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x46;
    } while (iVar1 < 2);
    return 0;
  case 0xc: ;
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x104);
    do {
      if (*piVar2 == 0xb) {
        *(undefined4 *)((int)this + 0x238) = 0xd;
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x46;
    } while (iVar1 < 2);
    return 0;
  }
  do {
    if (1 < *piVar2) {
      *(undefined4 *)((int)this + 0x238) = 3;
      return 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x46;
  } while (iVar1 < 2);
  return 0;
}

/* ref: FUN_00783840 */
uint F_00783840(unsigned int gen_a0)
{
  GEN_ENTER(0x783840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x18);
  while ((piVar2[-1] == 0 || (*piVar2 == 0))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x46;
    if (1 < iVar1) {
      return 0;
    }
  }
  return *(uint *)(iVar1 * 0x118 + 0x18 + (int)this);
}

/* ref: FUN_00783870 */
uint F_00783870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x118 + 0x20 + in_ecx;
}

/* ref: FUN_007838c0 */
byte F_007838c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7838c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*param_1 != 0) {
    uVar1 = F_00e3be40(*param_1);
    if (uVar1 != 0) {
      return *(int *)(uVar1 + 0xa8) != 0;
    }
  }
  return 0;
}

/* ref: FUN_00783900 */
byte F_00783900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (1 < param_2) {
    return 0;
  }
  iVar1 = param_2 * 0x118 + 8 + in_ecx;
  uVar2 = *(uint *)(iVar1 + 0x10c);
  if (uVar2 < 99) {
    return 1;
  }
  if (uVar2 < 0x294) {
    return 2;
  }
  if (uVar2 < 1000) {
    return 3;
  }
  return (*(int *)(iVar1 + 0xfc) < 10) - 1U & 3;
}

/* ref: FUN_00783960 */
byte F_00783960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < 2) {
    return 9 < *(int *)(param_1 * 0x118 + 0x104 + (int)this);
  }
  return 0;
}

/* ref: FUN_00783a00 */
uint F_00783a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783a00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1 * 0x28;
}

/* ref: FUN_00783a20 */
uint F_00783a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 3;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  REFG(undefined4 * PTR32, 0x148a454) = in_ecx;
  return (uint)in_ecx;
}

/* ref: FUN_00783a70 */
unsigned int F_00783a70(unsigned int gen_a0)
{
  GEN_ENTER(0x783a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00ba1d20(*(undefined * PTR32 *)((int)this + 4));
    F_00ba1f90(*(undefined * PTR32 *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00783ab0 */
unsigned int F_00783ab0(void)
{
  GEN_ENTER(0x783ab0u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x148a44a) = 0;
  return 0;
}

/* ref: FUN_00783ac0 */
byte F_00783ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x783ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0xc);
  if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) && (iVar1 != 4)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00783ae0 */
uint F_00783ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = *(int *)(REFG(undefined4, 0x137104c) + 0x25f8);
  uVar5 = REFG(undefined4, 0x137104c);
  if ((iVar1 != 0) && (param_1 != *(int *)((int)this + 0x14))) {
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    ((char * PTR32 *)(gen_frame + 0x8))[0] = "";
    ((char * PTR32 *)(gen_frame + 0x8))[1] = "music/ffxiv/BGM_System_Title.scd";
    ((char * PTR32 *)(gen_frame + 0x8))[2] = "music/ffxiv/BGM_System_Chara.scd";
    if (piVar2 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2,500);
    }
    if (param_1 < 3) {
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x14)) + 4)) = ((undefined2)0x27f) | 0xc00;
      (*(longlong *)(gen_frame + 0x14)) = (longlong)TRUNC(*(double *)&REFG(undefined, 0x10912a8) * 0.0);
      lVar4 = (*(longlong *)(gen_frame + 0x14));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x14)) + 0)) = (undefined4)(longlong)TRUNC(*(double *)&REFG(undefined, 0x10912a8) * 0.0);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0x14));
      (*(longlong *)(gen_frame + 0x14)) = lVar4;
      uVar5 = F_004e99a0(iVar1,((char * PTR32 *)(gen_frame + 0x8))[(int)(param_1)],(float)(float10)1,uVar3);
      *(uint *)((int)this + 0x10) = uVar5;
    }
    *(int *)((int)this + 0x14) = param_1;
  }
  return uVar5;
}

/* ref: FUN_00783b80 */
unsigned int F_00783b80(unsigned int gen_a0)
{
  GEN_ENTER(0x783b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return 0;
}

/* ref: Client::UI2::Agent::AgentSupportSubView::vf3 */
unsigned int F_00783bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x783bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  this[0x1c] = (undefined1)0x0;
  return 0;
}

/* ref: FUN_00783be0 */
uint F_00783be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  int * piVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(char * PTR32 *)(gen_frame + 0x24)) = "";
  uVar1 = F_0042a990(param_1);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = F_0042a990(param_1 + 0x54);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),7,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 6;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_00783d10 */
uint F_00783d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x783d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  int * piVar5;
  undefined4 * this_00;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  ((uint *)(gen_frame + 0x8))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  this_00 = (undefined4 *)0x0;
  uVar7 = 0;
  ((uint *)(gen_frame + 0x8))[0] = 0x11a8;
  ((uint *)(gen_frame + 0x8))[1] = 0x11aa;
  ((uint *)(gen_frame + 0x8))[2] = 0x11ac;
  ((uint *)(gen_frame + 0x8))[3] = 0x11ae;
  uVar2 = F_00404270();
  puVar3 = (undefined4 *)F_00406c00(0x4c,0,uVar2,uVar7);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 9;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    puVar3[0xd] = 0;
    puVar3[0xf] = 0;
    puVar3[0x11] = 0;
    this_00 = puVar3 + 1;
  }
  uVar7 = *(undefined4 *)((int)this + 0x10);
  F_005a2710(this_00,3);
  this_00[1] = uVar7;
  uVar2 = ((uint *)(gen_frame + 0x8))[(int)(*(int *)((int)this + 0x14))];
  uVar8 = 0;
  uVar7 = 0;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar2,uVar7,uVar8);
  F_005a2710(this_00 + 2,6);
  this_00[3] = uVar2;
  F_005a2710(this_00 + 4,6);
  this_00[5] = "";
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x11b6;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar7,uVar8,uVar9);
  F_005a2710(this_00 + 6,6);
  this_00[7] = uVar2;
  F_005a2710(this_00 + 8,6);
  this_00[9] = "";
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x11b7;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar7,uVar8,uVar9);
  F_005a2710(this_00 + 10,6);
  this_00[0xb] = uVar2;
  uVar2 = F_0042a990(param_1 + 8);
  F_005a2710(this_00 + 0xc,6);
  this_00[0xd] = uVar2;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x11c8;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar7,uVar8,uVar9);
  F_005a2710(this_00 + 0xe,6);
  this_00[0xf] = uVar2;
  F_005a2710(this_00 + 0x10,6);
  this_00[0x11] = "";
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,*(undefined4 *)((int)this + 8),9,this_00);
  iVar1 = this_00[-1];
  puVar3 = this_00 + iVar1 * 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar3 = puVar3 + -2;
    F_005a2670(puVar3);
  }
  uVar6 = F_00406b30(this_00 + -1);
  F_00c47745(((uint *)(gen_frame + 0x8))[4] ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)uVar6;
}

/* ref: FUN_00783ef0 */
unsigned int F_00783ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x783ef0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined * this_01;
  int iVar3;
  int local_c;
  int local_8;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  F_0042e430((*(undefined * PTR32 *)&gen_args[1]),&REFG(undefined, 0x10c08b0));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
  this_01 = (undefined *)F_00559470(uVar2);
  iVar3 = (*(int *)&gen_args[2]);
  local_8 = 0;
  uVar2 = F_005796b0(this_01,(*(int *)&gen_args[2]),&(*(undefined * PTR32 *)&gen_args[1]));
  if (0 < (int)uVar2) {
    local_c = iVar3;
    do {
      F_0042d160(this_00,0x3e);
      iVar3 = 0;
      if (0 < (int)uVar2) {
        do {
          F_0042d160(this_00,(uint)*(byte *)(local_c + iVar3));
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar2);
      }
      F_0042d160(this_00,0xd);
      local_8 = local_8 + ((uint)(*(undefined * PTR32 *)&gen_args[1]) & 0xffff) + uVar2;
      local_c = local_8 + (*(int *)&gen_args[2]);
      uVar2 = F_005796b0(this_01,local_c,&(*(undefined * PTR32 *)&gen_args[1]));
      iVar3 = (*(int *)&gen_args[2]);
    } while (0 < (int)uVar2);
  }
  F_0042d160(this_00,0x3e);
  bVar1 = *(byte *)(local_8 + iVar3);
  uVar2 = (uint)bVar1;
  iVar3 = local_8 + iVar3;
  while (bVar1 != 0) {
    uVar2 = F_0042d160(this_00,uVar2);
    bVar1 = *(byte *)(iVar3 + 1);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    iVar3 = iVar3 + 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditPlayer::vf3 */
unsigned int F_00783fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x783fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditPlayer::vf5 */
unsigned int F_00784030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x784030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00784040 */
uint F_00784040(unsigned int gen_a0)
{
  GEN_ENTER(0x784040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,*(undefined4 *)((int)this + 8),0,0);
  return (uint)(uVar2 != 0);
}

/* ref: Client::UI2::Agent::AgentCreditScroll::vf3 */
unsigned int F_00784070(unsigned int gen_a0)
{
  GEN_ENTER(0x784070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditScroll::vf5 */
unsigned int F_007840a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7840a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_007840b0 */
uint F_007840b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7840b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,*(undefined4 *)((int)this + 8),0,0);
  return uVar2 & 1;
}

/* ref: FUN_007840e0 */
uint F_007840e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7840e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,*(undefined4 *)((int)this + 8),0,0);
  return uVar2 >> 1 & 1;
}

/* ref: Client::UI2::Agent::AgentCreditCast::vf3 */
unsigned int F_00784110(unsigned int gen_a0)
{
  GEN_ENTER(0x784110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditCast::vf5 */
unsigned int F_00784140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x784140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00784150 */
uint F_00784150(unsigned int gen_a0)
{
  GEN_ENTER(0x784150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,*(undefined4 *)((int)this + 8),0,0);
  return (uint)(uVar2 != 0);
}

/* ref: Client::UI2::Agent::AgentCreditEnd::vf3 */
unsigned int F_00784180(unsigned int gen_a0)
{
  GEN_ENTER(0x784180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditEnd::vf5 */
unsigned int F_007841b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7841b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_007841c0 */
uint F_007841c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7841c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,*(undefined4 *)((int)this + 8),0,0);
  return (uint)(uVar2 != 0);
}

/* ref: FUN_007841f0 */
uint F_007841f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7841f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00784270 */
unsigned int F_00784270(unsigned int gen_a0)
{
  GEN_ENTER(0x784270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x34) != '\0') {
    F_0056a3d0(*(undefined * PTR32 *)((int)this + 4),3,0,this,0,0);
  }
  *(undefined1 *)((int)this + 0x34) = 0;
  return 0;
}

/* ref: FUN_00784290 */
uint F_00784290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x784290u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined * _Dst;
  int iVar3;
  int iVar4;
  byte * pbVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  uVar1 = (*(uint *)&gen_args[3]);
  if (*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x18) != (undefined *)0x0) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x32) = 0;
    F_0059ead0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x18),(*(uint *)&gen_args[3]),0,1);
    if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
      F_00406b30(*(int *)((*(int *)&gen_args[0]) + 8));
      *(undefined4 *)((*(int *)&gen_args[0]) + 8) = 0;
    }
    uVar8 = 0;
    uVar2 = F_00404270();
    uVar2 = F_00406c00(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 4),0,uVar2,uVar8);
    *(uint *)((*(int *)&gen_args[0]) + 8) = uVar2;
    if (*(int *)((*(int *)&gen_args[0]) + 0xc) != 0) {
      F_00406b30(*(int *)((*(int *)&gen_args[0]) + 0xc));
      *(undefined4 *)((*(int *)&gen_args[0]) + 0xc) = 0;
    }
    if (*(int *)((*(int *)&gen_args[0]) + 0x20) == 1) {
      uVar8 = 0;
      uVar2 = F_00404270();
      uVar2 = F_00406c00(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar1 * 4),0,uVar2,uVar8);
      *(uint *)((*(int *)&gen_args[0]) + 0xc) = uVar2;
      *(undefined1 *)((*(int *)&gen_args[0]) + 0x32) = 1;
    }
    if (*(int *)((*(int *)&gen_args[0]) + 0x10) != 0) {
      F_00406b30(*(int *)((*(int *)&gen_args[0]) + 0x10));
      *(undefined4 *)((*(int *)&gen_args[0]) + 0x10) = 0;
    }
    uVar8 = 0;
    uVar2 = F_00404270();
    _Dst = (undefined *)F_00406c00(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar1 * 4),0,uVar2,uVar8);
    iVar6 = 0;
    *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x10) = _Dst;
    F_00c48350(_Dst,0,uVar1 * 4);
    (*(uint *)(gen_frame + 0x14)) = 0;
    uVar2 = F_0056d250(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x18),0,0);
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = *(undefined * PTR32 *)(uVar2 + 0x104);
    F_00559d10(*(undefined * PTR32 *)(uVar2 + 0x104),&(*(uint *)&gen_args[3]),((undefined1 *)(gen_frame + 0xc)));
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))))
                               );
    if (0 < (int)uVar1) {
      (*(int *)(gen_frame + 0x18)) = 0;
      do {
        iVar3 = iVar6;
        iVar4 = iVar6;
        if (*(int *)((*(int *)&gen_args[0]) + 0x20) != 0) {
          iVar3 = (*(int *)(gen_frame + 0x18));
          iVar4 = (*(int *)(gen_frame + 0x18)) + 1;
        }
        if ((*(byte *)((*(int *)&gen_args[2]) + iVar4 * 8) & 0xf) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)((*(int *)&gen_args[2]) + 4 + iVar4 * 8);
        }
        *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar6 * 4))) = uVar8;
        if (*(int *)((*(int *)&gen_args[0]) + 0x20) == 1) {
          if ((*(byte *)((*(int *)&gen_args[2]) + iVar3 * 8) & 0xf) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)((*(int *)&gen_args[2]) + 4 + iVar3 * 8);
          }
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0xc) + iVar6 * 4))) = uVar8;
          if ((*(byte *)((*(int *)&gen_args[2]) + 0x10 + iVar3 * 8) & 0xf) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)((*(int *)&gen_args[2]) + 0x14 + iVar3 * 8);
          }
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x10) + iVar6 * 4))) = uVar8;
        }
        F_00584110((*(undefined * PTR32 *)(gen_frame + 0x10)),*((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 8) + iVar6 * 4))));
        uVar2 = F_00577bc0((*(undefined * PTR32 *)(gen_frame + 0x10)),0,0,REFG(undefined4, 0x108cc50),0);
        fVar7 = (float10)(int)uVar2;
        if ((int)uVar2 < 0) {
          fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        if ((float10)(int)(*(uint *)(gen_frame + 0x14)) < fVar7 + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))))) {
          (*(uint *)(gen_frame + 0x14)) = (int)(fVar7 + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))));
        }
        (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar1);
    }
    if (*(int *)((*(int *)&gen_args[0]) + 0x20) == 0) {
      if ((int)uVar1 < (*(int *)&gen_args[1])) {
        *(undefined1 *)((*(int *)&gen_args[0]) + 0x32) = 1;
      }
      iVar6 = 0;
      if (0 < (int)((*(int *)&gen_args[1]) - uVar1)) {
        pbVar5 = (byte *)((*(int *)&gen_args[2]) + uVar1 * 8);
        do {
          if ((*pbVar5 & 0xf) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(pbVar5 + 4);
          }
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x10) + iVar6 * 4))) = uVar8;
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 8;
        } while (iVar6 < (int)((*(int *)&gen_args[1]) - uVar1));
      }
    }
    return (*(uint *)(gen_frame + 0x14));
  }
  return 0;
}

/* ref: FUN_007844e0 */
uint F_007844e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7844e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 8);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = param_1 * 4;
    if (*(char *)((int)this + 0x35) == '\0') {
      F_00584110((undefined *)*param_2,*(undefined4 *)(iVar2 + iVar1));
    }
    else {
      F_00589b30(param_3,*(undefined4 *)(iVar2 + iVar1));
    }
    uVar4 = *(uint *)((int)this + 0xc);
    if (((uVar4 != 0) && (*(int *)((int)this + 0x20) == 1)) && (*(int *)((int)this + 0x18) != 0)) {
      bVar3 = F_0055a300((undefined *)param_2[1],(uint)(*(int *)(uVar4 + iVar2) != 0));
      uVar4 = CONCAT31(extraout_var,bVar3);
      iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)((int)this + 0xc))));
      if (iVar1 != 0) {
        uVar4 = F_005951c0(param_3,iVar1,0,param_2[1]);
      }
    }
  }
  return uVar4;
}

/* ref: Client::UI2::PopupMenu::vf2 */
uint F_00784560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x784560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort * param_4 = (ushort *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 3) {
    if (*(undefined * PTR32 *)(this + 0x1c) == (undefined *)0x0) {
      return 3;
    }
    uVar1 = F_005791d0(*(undefined * PTR32 *)(this + 0x1c),(uint)*param_4,(uint)param_4[1]);
    if (uVar1 != 0) {
      return uVar1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,0xffffffff);
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
      uVar1 = F_00562110(*(undefined * PTR32 *)(this + 0x18),0);
    }
    *(undefined4 *)(this + 0x1c) = 0;
    if (this[0x33] != (undefined1)0x0) {
      return uVar1;
    }
  }
  else {
    if (uVar1 != 0x21) {
      return uVar1;
    }
    if (*(int *)(this + 0x1c) == 0) {
      return 0x21;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,*(undefined4 *)(param_4 + 4));
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
      F_00562110(*(undefined * PTR32 *)(this + 0x18),0);
    }
    if (this[0x33] != (undefined1)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
      return uVar1;
    }
  }
  uVar1 = F_00586850(*(undefined * PTR32 *)(this + 4),3,0,this);
  return uVar1;
}

/* ref: FUN_00784610 */
byte F_00784610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x784610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 < *(int *)((int)this + 0x24))) {
    if (*(int *)((int)this + 0x20) == 0) {
      return *(int *)(iVar1 + param_1 * 4) != 1;
    }
    return (*(byte *)(iVar1 + param_1 * 4) & 3) == 0;
  }
  return 0;
}

/* ref: FUN_00784650 */
uint F_00784650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x784650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x4c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x22) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x7fffffff;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  F_0056c400((undefined *)((int)this + 0x78),0,0);
  *(undefined2 *)((int)this + 200) = 0xffff;
  *(undefined2 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined2 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined1 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00784740 */
uint F_00784740(unsigned int gen_a0)
{
  GEN_ENTER(0x784740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  uVar1 = F_00580e00((undefined *)((int)this + 0x78));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00784760 */
ushort F_00784760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x784760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  F_0057eb00(param_1,0);
  F_0055ad70(*(undefined4 *)((int)this + 8),1);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10c))) = 0;
  F_0055a410(*(undefined4 *)((int)this + 8),1);
  uVar1 = F_0055a020(*(undefined4 *)((int)this + 8));
  *(ushort *)((int)this + 0x3c) = uVar1;
  return uVar1;
}

/* ref: FUN_007847c0 */
uint F_007847c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7847c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 < 5) {
    *(byte *)((int)this + 0x1c) = (byte)param_1;
    *(undefined1 *)((int)this + 0x68) = 0;
    *(undefined1 *)((int)this + 0x6a) = 0;
    *(ushort *)((int)this + 0x1e) = (ushort)(byte)param_1 * 400;
    uVar1 = (uint)(byte)param_1 * 2 + 1;
    *(ushort *)((int)this + 0x20) = (ushort)(byte)param_1 * 7 + 0x13;
    *(short *)((int)this + 0x22) = (short)uVar1;
  }
  return uVar1;
}

/* ref: FUN_00784800 */
uint F_00784800(unsigned int gen_a0)
{
  GEN_ENTER(0x784800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 in_ecx;
  int * piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (*(char *)((int)this + 0x24) == '\0') {
    bVar2 = F_0055ab50(*(undefined4 *)((int)this + 8));
    *(byte *)((int)this + 0x24) = bVar2;
  }
  in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 8)));
  uVar4 = F_0055ab00(*(undefined4 *)((int)this + 8));
  F_00557890(in_ecx,uVar4);
  F_0055ab60(*(undefined * PTR32 *)((int)this + 8),(uint)*(byte *)((int)this + 0x24),1);
  if (*(byte *)((int)this + 0x24) < 0x15) {
    F_0055adc0(*(undefined4 *)((int)this + 8),
                 (uint)(byte)(&REFG(undefined, 0x10c08cc))[*(byte *)((int)this + 0x24)]);
  }
  F_00577d20(*(undefined * PTR32 *)((int)this + 8),((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x10)),&REFG(undefined, 0x10c08e4),0,REFG(undefined4, 0x108cc50),0);
  bVar2 = F_0055ade0(*(undefined4 *)((int)this + 8));
  *(byte *)((int)this + 0x58) = bVar2;
  uVar3 = F_0055a030(*(undefined4 *)((int)this + 8));
  bVar2 = *(byte *)((int)this + 0x1c);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  *(short *)((int)this + 0x3e) =
       (short)((ulonglong)uVar3 / (ulonglong)(longlong)(int)(uint)*(byte *)((int)this + 0x58));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(uint *)(gen_frame + 0x1c)) = (uint)bVar2;
  uVar4 = F_0055ab00(*(undefined4 *)((int)this + 8));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  bVar2 = *(byte *)((int)this + 0x24);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(uint *)(gen_frame + 0x2c)) = (uint)bVar2;
  uVar3 = F_0055a020(*(undefined4 *)((int)this + 8));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(uint *)(gen_frame + 0x34)) = (uint)uVar3;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x8)),0x15,4,&(*(undefined4 *)(gen_frame + 0x18)));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0x2c) = 0x7fffffff;
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 3;
  do {
    this_00 = this_00 + -2;
    uVar4 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_00784950 */
uint F_00784950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x784950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  if ((((*(int *)((int)this + 0xa4) != param_1) || (param_1 == 0x7fffffff)) ||
      (*(int *)((int)this + 0xa8) != param_2)) ||
     (((*(uint *)((int)this + 0xac) != (uint)*(ushort *)((int)this + 0x3e) ||
       (*(uint *)((int)this + 0xb0) != (uint)*(ushort *)((int)this + 0x3c))) ||
      ((char)param_3 != '\0')))) {
    bVar1 = *(byte *)((int)this + 0x1c);
    *(undefined1 *)((int)this + 0x68) = 1;
    *(char *)((int)this + 0x69) = ((char)param_4 != '\0') * '\x02' + -1;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(int *)(gen_frame + 0x1c)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    uVar2 = *(ushort *)((int)this + 0x3e);
    (*(int *)(gen_frame + 0x24)) = param_2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(int *)(gen_frame + 0x2c)) = uVar2 + 1;
    uVar2 = *(ushort *)((int)this + 0x3c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
    (*(uint *)(gen_frame + 0x34)) = (uint)uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),2);
    (*(char *)(gen_frame + 0x3c)) = (char)param_3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),2);
    (*(char *)(gen_frame + 0x44)) = (char)param_4;
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x8)),0x16,7,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x48));
    iVar4 = 6;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar2 = *(ushort *)((int)this + 0x3c);
  *(int *)((int)this + 0xa4) = param_1;
  *(int *)((int)this + 0xa8) = param_2;
  *(uint *)((int)this + 0xac) = (uint)*(ushort *)((int)this + 0x3e);
  *(uint *)((int)this + 0xb0) = (uint)uVar2;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)uVar2;
}

/* ref: FUN_00784ac0 */
uint F_00784ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x784ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  
  if (*(char *)((int)this + 0x68) != '\0') {
    *(undefined4 *)((int)this + 0x54) = 1;
  }
  iVar2 = 0;
  if (*(int *)((int)this + 100) < 1) {
    if ((*(int *)((int)this + 100) < 0) &&
       (uVar5 = 0,
       *(ushort *)((int)this + 0x44) != 1 && -1 < (int)(*(ushort *)((int)this + 0x44) - 1))) {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20)));
      uVar4 = *(ushort *)((int)this + 0x1e);
      do {
        iVar2 = iVar2 + *(int *)(iVar1 + 4 + (uint)uVar4 * 4);
        if (*(int *)(iVar1 + (uint)uVar4 * 4) == *(int *)((int)this + 0x60)) {
          uVar5 = ((iVar2 - (uint)*(ushort *)((int)this + 0x3e)) - *(int *)((int)this + 100)) + 1;
          *(uint *)((int)this + 0x54) = uVar5;
          if (*(uint *)((int)this + 0xb8) < uVar5) {
            *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0xb8);
          }
          break;
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 + 2;
      } while ((int)(uVar5 & 0xffff) < (int)(*(ushort *)((int)this + 0x44) - 1));
    }
  }
  else {
    sVar3 = *(short *)((int)this + 0x44) + -1;
    if (-1 < sVar3) {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20)));
      uVar5 = (uint)(ushort)(sVar3 * 2 + *(short *)((int)this + 0x1e));
      do {
        iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 4 + (uVar5 & 0xffff) * 4)));
        if (*((int *)GEN_TOP((iVar1 + (uVar5 & 0xffff) * 4))) == *(int *)((int)this + 0x60)) {
          iVar2 = (((uint)*(ushort *)((int)this + 0x4c) - *(int *)((int)this + 100)) - iVar2) + 1;
          *(int *)((int)this + 0x54) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0x54) = 1;
          }
          break;
        }
        sVar3 = sVar3 + -1;
        uVar5 = uVar5 - 2;
      } while (-1 < sVar3);
    }
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(char *)((int)this + 0xa1) != '\0') {
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0xb8);
  }
  return 0;
}

/* ref: FUN_00784bc0 */
byte F_00784bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x784bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint * this_00;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar6;
  iVar10 = *(int *)((int)this + 0x10);
  iVar8 = *(int *)((int)this + 0x48) - (uint)*(ushort *)((int)this + 0x3e);
  iVar7 = *(int *)(iVar10 + 0xa8);
  (*(int *)(gen_frame + 0x14)) = iVar7;
  iVar3 = *(int *)(iVar10 + 0xb0);
  (*(uint *)(gen_frame + 0x18)) = iVar7 >> 0x1f;
  (*(int *)(gen_frame + 0x8)) = iVar8;
  (*(int *)(gen_frame + 0xc)) = iVar8 >> 0x1f;
  (*(byte *)(gen_frame + 0x1f)) = 0;
  uVar4 = (uint)(((longlong)iVar3 * (longlong)iVar8) / (longlong)iVar7);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  iVar7 = (int)(((longlong)*(int *)((int)this + 0x50) * (longlong)iVar8) / (longlong)iVar7) - uVar4;
  uVar9 = *(uint *)((int)this + 0x2c);
  (*(uint *)(gen_frame + 0x18)) = uVar9;
  (*(char *)(gen_frame + 0x1e)) = '\0';
  if ((((*(int *)(iVar10 + 0xa8) <= iVar3) ||
       (*(int *)(iVar10 + 0xa8) <= *(int *)((int)this + 0x50))) &&
      (*(int *)((int)this + 0x50) <= iVar3)) &&
     (iVar7 = iVar7 + -1, *(int *)((int)this + 0x50) < iVar3)) {
    (*(char *)(gen_frame + 0x1e)) = '\x01';
  }
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) - iVar7;
      *(uint *)((int)this + 0x60) = uVar9;
      if ((uint)*(ushort *)((int)this + 0x4c) + *(int *)((int)this + 0x30) <
          *(ushort *)((int)this + 0x3e) + 1 + uVar4) {
        uVar4 = *(uint *)((int)this + 0x38);
        uVar9 = uVar9 + 1;
        (*(uint *)(gen_frame + 0x18)) = uVar9;
        if (uVar4 < uVar9) {
          (*(uint *)(gen_frame + 0x18)) = uVar4;
        }
        if ((*(char *)(gen_frame + 0x1e)) != '\0') {
          (*(uint *)(gen_frame + 0x18)) = 0x7fffffff;
          *(undefined1 *)((int)this + 0xa1) = 1;
        }
        (*(byte *)(gen_frame + 0x1f)) = 1;
      }
    }
  }
  else {
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) - iVar7;
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x28);
    if (uVar4 < *(uint *)((int)this + 0x30)) {
      if (uVar9 != 0) {
        (*(uint *)(gen_frame + 0x18)) = uVar9 - 1;
        if (uVar9 - 1 < *(uint *)((int)this + 0x34)) {
          (*(uint *)(gen_frame + 0x18)) = *(uint *)((int)this + 0x34);
        }
      }
      (*(byte *)(gen_frame + 0x1f)) = 1;
    }
  }
  *(undefined4 *)((int)this + 100) = 0;
  if ((*(byte *)(gen_frame + 0x1f)) == 0) {
    F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  (*(uint *)(gen_frame + 0x10)) = -iVar7;
  if (((*(uint *)((int)this + 0xa4) != (*(uint *)(gen_frame + 0x18))) || ((*(uint *)(gen_frame + 0x18)) == 0x7fffffff)) ||
     ((*(int *)((int)this + 0xa8) != -iVar7 ||
      ((*(uint *)((int)this + 0xac) != (uint)*(ushort *)((int)this + 0x3e) ||
       (*(uint *)((int)this + 0xb0) != (uint)*(ushort *)((int)this + 0x3c))))))) {
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    bVar1 = *(byte *)((int)this + 0x1c);
    *(undefined1 *)((int)this + 0x68) = 1;
    *(char *)((int)this + 0x69) = (iVar7 < 0) * '\x02' + -1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x18));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
    uVar2 = *(ushort *)((int)this + 0x3e);
    (*(int *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x10));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
    (*(int *)(gen_frame + 0x3c)) = uVar2 + 1;
    uVar2 = *(ushort *)((int)this + 0x3c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),3);
    (*(uint *)(gen_frame + 0x44)) = (uint)uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),2);
    (*(undefined1 *)(gen_frame + 0x4c)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),2);
    (*(bool *)(gen_frame + 0x54)) = iVar7 < 0;
    piVar5 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
    ((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5,&(*(int *)(gen_frame + 0x8)),0x16,7,&(*(undefined4 *)(gen_frame + 0x20)));
    F_005a2670(&(*(int *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x58));
    iVar10 = 6;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  bVar1 = (*(byte *)(gen_frame + 0x1f));
  *(uint *)((int)this + 0xa8) = (*(uint *)(gen_frame + 0x10));
  *(uint *)((int)this + 0xa4) = (*(uint *)(gen_frame + 0x18));
  *(uint *)((int)this + 0xac) = (uint)*(ushort *)((int)this + 0x3e);
  *(uint *)((int)this + 0xb0) = (uint)*(ushort *)((int)this + 0x3c);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return bVar1;
}

/* ref: FUN_00784e70 */
uint F_00784e70(unsigned int gen_a0)
{
  GEN_ENTER(0x784e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)((int)this + 0x70) != '\0') {
    iVar1 = *(int *)((int)this + 0x10);
    iVar2 = *(int *)(iVar1 + 0xb0);
    if (iVar2 == *(int *)(iVar1 + 0xa8)) {
      *(undefined1 *)((int)this + 0x70) = 0;
      *(undefined1 *)((int)this + 0xa1) = 1;
    }
    uVar3 = iVar2 + 1;
    uVar4 = *(uint *)(iVar1 + 0xa8);
    if ((int)uVar3 < (int)*(uint *)(iVar1 + 0xa8)) {
      uVar4 = uVar3;
    }
    uVar3 = F_00574c80(iVar1,uVar4,1,1);
    *(uint *)((int)this + 0x50) = uVar4;
    return uVar3;
  }
  uVar4 = F_005609c0((int)this + 0x78);
  return uVar4;
}

/* ref: FUN_00784f10 */
uint F_00784f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x784f10u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return param_2;
  }
  if (param_3 < 1) {
    sVar2 = *(short *)(in_ecx + 0x44) + -1;
    if (-1 < sVar2) {
      iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x5c) + 0x20)));
      uVar4 = (uint)(ushort)(sVar2 * 2 + *(short *)(in_ecx + 0x1e));
      do {
        if (*((uint *)GEN_TOP((iVar1 + (uVar4 & 0xffff) * 4))) == param_2) {
          if (-1 < sVar2 + param_3) {
            return *((uint *)GEN_TOP((iVar1 + (uVar4 + param_3 * 2 & 0xffff) * 4)));
          }
          if (*(int *)(in_ecx + 0x30) != 0) {
            return *(int *)(in_ecx + 0x28) - 1;
          }
        }
        sVar2 = sVar2 + -1;
        uVar4 = uVar4 - 2;
      } while (-1 < sVar2);
    }
  }
  else {
    uVar4 = (uint)*(ushort *)(in_ecx + 0x44);
    sVar2 = 0;
    if (uVar4 != 0) {
      iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x5c) + 0x20)));
      uVar3 = (uint)*(ushort *)(in_ecx + 0x1e);
      do {
        if (*((uint *)GEN_TOP((iVar1 + (uVar3 & 0xffff) * 4))) == param_2) {
          if ((int)uVar4 <= sVar2 + param_3) {
            return *(int *)(in_ecx + 0x2c) + 1;
          }
          return *((uint *)GEN_TOP((iVar1 + (uVar3 + param_3 * 2 & 0xffff) * 4)));
        }
        sVar2 = sVar2 + 1;
        uVar3 = uVar3 + 2;
      } while ((int)sVar2 < (int)uVar4);
      return param_2;
    }
  }
  return param_2;
}

/* ref: FUN_00784f27 */
uint F_00784f27(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x784f27u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (in_eax < 1) {
    sVar2 = *(short *)(in_ecx + 0x44) + -1;
    if (-1 < sVar2) {
      iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x5c) + 0x20)));
      uVar4 = (uint)(ushort)(sVar2 * 2 + *(short *)(in_ecx + 0x1e));
      do {
        if (*((int *)GEN_TOP((iVar1 + (uVar4 & 0xffff) * 4))) == *(int *)(in_ebp + 8)) {
          if (-1 < (int)sVar2 + *(int *)(in_ebp + 0xc)) {
            return *((uint *)GEN_TOP((iVar1 + (uVar4 + *(int *)(in_ebp + 0xc) * 2 & 0xffff) * 4)));
          }
          if (*(int *)(in_ecx + 0x30) != 0) {
            return *(int *)(in_ecx + 0x28) - 1;
          }
        }
        sVar2 = sVar2 + -1;
        uVar4 = uVar4 - 2;
      } while (-1 < sVar2);
    }
    uVar4 = *(uint *)(in_ebp + 8);
  }
  else {
    uVar5 = (uint)*(ushort *)(in_ecx + 0x44);
    uVar4 = *(uint *)(in_ebp + 8);
    sVar2 = 0;
    if (uVar5 != 0) {
      iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x5c) + 0x20)));
      uVar3 = (uint)*(ushort *)(in_ecx + 0x1e);
      do {
        if (*((uint *)GEN_TOP((iVar1 + (uVar3 & 0xffff) * 4))) == uVar4) {
          if ((int)sVar2 + *(int *)(in_ebp + 0xc) < (int)uVar5) {
            return *((uint *)GEN_TOP((iVar1 + (uVar3 + *(int *)(in_ebp + 0xc) * 2 & 0xffff) * 4)));
          }
          return *((int *)GEN_TOP((*(int *)(in_ebp + -4) + 0x2c))) + 1;
        }
        sVar2 = sVar2 + 1;
        uVar3 = uVar3 + 2;
      } while ((int)sVar2 < (int)uVar5);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00785010 */
uint F_00785010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x785010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  if (param_1 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = F_005684c0(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)(param_1 + 0x10),((undefined1 *)(gen_frame + 0x4)));
    uVar1 = *(uint *)(param_1 + 0x2c);
    F_0055ad50(*(undefined * PTR32 *)((int)this + 8),(uint)*(ushort *)(param_1 + 0x14),
                 *(ushort *)(param_1 + 0x14) + uVar2);
    F_0055aad0(*(undefined4 *)((int)this + 8),uVar1 & 0xffffff | 0x80000000);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00785090 */
uint F_00785090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0057ee00(*(undefined * PTR32 *)((int)this + 8),(uint)*(ushort *)((int)this + 0xc4),
                       (uint)*(ushort *)((int)this + 200));
  uVar3 = 0;
  if (uVar1 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = F_005684c0(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)(uVar1 + 0x10),((undefined1 *)(gen_frame + 0x4)));
    uVar3 = *(uint *)(uVar1 + 0x2c);
    F_0055ad50(*(undefined * PTR32 *)((int)this + 8),(uint)*(ushort *)(uVar1 + 0x14),
                 *(ushort *)(uVar1 + 0x14) + uVar2);
    F_0055aad0(*(undefined4 *)((int)this + 8),uVar3 & 0xffffff | 0x80000000);
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar3 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00785120 */
uint F_00785120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x785120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,((undefined1 *)(gen_frame + 0x4)),param_1);
  uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_00785160 */
uint F_00785160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x785160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00785170 */
uint F_00785170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x785170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x20);
  if (uVar1 == param_2) {
    *(undefined4 *)(in_ecx + 0x20) = 0;
  }
  return uVar1;
}

/* ref: FUN_007851b0 */
uint F_007851b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7851b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_007851d0 */
uint F_007851d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7851d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar2 = F_0055a020(param_1);
  uVar3 = F_0055a020(param_4);
  F_00559eb0(param_4,(uint)(ushort)(uVar2 - uVar3));
  uVar4 = F_00577bc0(param_4,0,0,REFG(undefined4, 0x108cc50),0);
  sVar1 = uVar2 + ((short)param_9 - (short)uVar4);
  uVar2 = F_0055a020(param_3);
  F_00559eb0(param_3,(uint)(ushort)(sVar1 - uVar2));
  uVar2 = F_0055a020(param_2);
  uVar4 = F_00577bc0(param_3,0,0,REFG(undefined4, 0x108cc50),0);
  uVar4 = (ushort)((sVar1 + (short)param_8) - uVar2) - uVar4;
  F_00559eb0(param_2,uVar4 & 0xffff);
  uVar2 = F_00559d70(param_1);
  F_00559eb0(param_5,(uint)uVar2);
  uVar2 = F_0055a020(param_6);
  uVar4 = F_00559eb0(param_6,(uint)(ushort)(((short)uVar4 + (short)param_7) - uVar2));
  return uVar4;
}

/* ref: FUN_007852a0 */
ushort F_007852a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7852a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  ushort * param_7 = (ushort *)(uintptr_t)gen_a6;
  short * param_8 = (short *)(uintptr_t)gen_a7;
  short * param_9 = (short *)(uintptr_t)gen_a8;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  
  uVar1 = F_00559d70(param_4);
  uVar2 = F_0055a020(param_4);
  sVar4 = uVar1 + uVar2;
  uVar1 = F_00559d70(param_3);
  uVar2 = F_0055a020(param_3);
  *param_9 = uVar2 + (uVar1 - sVar4);
  uVar1 = F_00559d70(param_2);
  uVar2 = F_0055a030(param_2);
  *param_8 = uVar2 + (uVar1 - sVar4);
  uVar1 = F_00559d70(param_5);
  uVar2 = F_00559d70(param_1);
  uVar3 = F_0055a020(param_5);
  uVar3 = uVar3 + ((uVar1 - sVar4) - uVar2);
  *param_7 = uVar3;
  return uVar3;
}

/* ref: FUN_00785330 */
uint F_00785330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = F_00577bc0(param_1,0,0,REFG(undefined4, 0x108cc50),0);
  uVar1 = F_00559d70(param_1);
  uVar2 = F_00559eb0(param_2,(uint)(ushort)((short)uVar2 + uVar1 + (short)param_3));
  return uVar2;
}

/* ref: FUN_00785370 */
uint F_00785370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_0055e430(param_2,((undefined2 *)(gen_frame + 0x8)),((undefined2 *)(gen_frame + 0x4)),param_3);
  *(undefined4 *)(param_1 + 4) = 0xc8e;
  *param_1 = 0x4001;
  param_1[1] = ((undefined2 *)(gen_frame + 0x8))[0];
  param_1[2] = ((undefined2 *)(gen_frame + 0x4))[0];
  return (uint)param_1;
}

/* ref: FUN_007853b0 */
uint F_007853b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7853b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 uVar5;
  uint * this;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 6;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  uVar2 = F_0055a020(param_2);
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(uint *)(gen_frame + 0x14)) = (uint)uVar2;
  uVar3 = F_0055ab00(param_2);
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  bVar1 = F_0055ab50(param_2);
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = 4;
  pbVar4 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1,((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x8)))));
  if ((*pbVar4 & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(pbVar4 + 4);
  }
  F_00584110(param_2,uVar5);
  F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  this = &(*(uint *)(gen_frame + 0x28));
  iVar6 = 3;
  do {
    this = this + -2;
    uVar3 = F_005a2670(this);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_00785470 */
uint F_00785470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x785470u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte * pbVar1;
  uint uVar2;
  undefined1 * this;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),6);
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  pbVar1 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1,((undefined1 *)(gen_frame + 0x14)),0x2a,2,&(*(undefined4 *)(gen_frame + 0x4)))));
  if ((*pbVar1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(pbVar1 + 4);
  }
  F_005a2670(((undefined1 *)(gen_frame + 0x14)));
  this = ((undefined1 *)(gen_frame + 0x14));
  iVar3 = 1;
  do {
    this = this + -8;
    F_005a2670(this);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007854f0 */
uint F_007854f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7854f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c467c));
  F_0058d480((int)this + 0x180);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x60;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8a0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined2 *)((int)this + 0x1b8) = 0xffff;
  *(undefined2 *)((int)this + 0x1ba) = 0xffff;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x80;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined1 *)((int)this + 0x1bc) = 0;
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x67 ^
       *(byte *)((int)this + 0xf9) | 0x18;
  F_0055e2a0(this,0x20000000,0);
  return (uint)this;
}

/* ref: FUN_00785580 */
uint F_00785580(unsigned int gen_a0)
{
  GEN_ENTER(0x785580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c467c));
  F_0058d4b0((undefined *)((int)this + 0x180));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonCursor::vf37 */
uint F_007855a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7855a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0056c5f0(this + 0x180);
  *(undefined4 *)(this + 0x1b0) = 0;
  this[0x1bc] = (undefined1)0x0;
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007855d0 */
uint F_007855d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7855d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined3 extraout_var = 0;
  
  uVar3 = F_0055dcb0();
  *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xec))) = 0;
  uVar3 = F_0055dcb0();
  bVar2 = *(byte *)(uVar3 + 0x218);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
  uVar4 = F_0055dcb0();
  if ((((*((char *)GEN_TOP((*(int *)(uVar4 + 0x18) + 0xc6a))) == '\0') && (*(char *)(uVar3 + 0x21d) == '\0'))
      && (*(int *)(uVar3 + 0x210) == 0)) && (bVar2 != 2)) {
    sVar1 = *(short *)(uVar3 + 0x214);
    uVar4 = (uint)*(ushort *)(uVar3 + 0x216);
    (*(uint *)(gen_frame + 0x18)) = uVar4;
    if ((*(short *)((int)this + 0x1b8) != sVar1) ||
       (*(ushort *)((int)this + 0x1ba) != *(ushort *)(uVar3 + 0x216))) {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1b0),1);
      F_0056c5f0((undefined *)((int)this + 0x180));
      if ((*(uint *)(gen_frame + 0x14)) == 3) {
        (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((int)sVar1 - (int)*(short *)((int)this + 0x1b4))));
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 1;
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((int)(short)(*(uint *)(gen_frame + 0x18)) - (int)*(short *)((int)this + 0x1b6))));
        F_00595110((int)this + 0x180,0x5a,*(undefined4 *)((int)this + 0x1b0),&(*(undefined4 *)(gen_frame + 0x4)),2,
                     REFG(float, 0x1088068));
        uVar3 = F_0058d530((undefined *)((int)this + 0x180));
        uVar5 = (undefined2)(uVar3 >> 0x10);
      }
      else {
        uVar3 = F_00559e00(*(undefined4 *)((int)this + 0x1b0),
                             (uint)(ushort)(sVar1 - *(short *)((int)this + 0x1b4)),
                             (uint)(ushort)((short)(*(uint *)(gen_frame + 0x18)) - *(short *)((int)this + 0x1b6)));
        uVar5 = (undefined2)(uVar3 >> 0x10);
      }
      *(short *)((int)this + 0x1b8) = sVar1;
      *(short *)((int)this + 0x1ba) = (short)(*(uint *)(gen_frame + 0x18));
      *(undefined1 *)((int)this + 0x1bc) = 1;
      return CONCAT22(uVar5,(short)(*(uint *)(gen_frame + 0x18)));
    }
  }
  else {
    F_0056c5f0((undefined *)((int)this + 0x180));
    bVar2 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1b0),0);
    uVar4 = CONCAT31(extraout_var,bVar2);
  }
  return uVar4;
}

/* ref: FUN_00785760 */
uint F_00785760(unsigned int gen_a0)
{
  GEN_ENTER(0x785760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  *(undefined2 *)((int)this + 0x1ba) = 0xffff;
  *(undefined2 *)((int)this + 0x1b8) = 0xffff;
  uVar3 = F_0055dcb0();
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9e0(uVar4);
  uVar5 = F_0055dcb0();
  if (((*((char *)GEN_TOP((*(int *)(uVar5 + 0x18) + 0xc6a))) == '\0') && (*(char *)(uVar3 + 0x21d) == '\0')) &&
     (*(int *)(uVar3 + 0x210) == 0)) {
    F_0055dcb0();
    this_00 = (undefined *)F_005673b0(uVar4);
    if (((this_00 != (undefined *)0x0) && (bVar2 = F_0055a4e0(this_00), bVar2 == 0)) &&
       (uVar3 = F_0055a2d0(this_00), (char)uVar3 != '\0')) {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1b0),1);
      uVar3 = F_0055dcb0();
      if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xec))) != this_00) {
        F_0056c5f0((undefined *)((int)this + 0x180));
        F_00559fb0(this_00,&(*(uint *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x20)));
        F_0055a000(this_00,((undefined1 *)(gen_frame + 0x24)),((ushort *)(gen_frame + 0x28)));
        sVar1 = (short)(*(uint *)(gen_frame + 0x1c)) - *(short *)((int)this + 0x1b4);
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = sVar1;
        (*(uint *)(gen_frame + 0x1c)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)),sVar1);
        sVar1 = (short)(*(uint *)(gen_frame + 0x20)) + ((((ushort *)(gen_frame + 0x28))[0] >> 1) - *(short *)((int)this + 0x1b6));
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = sVar1;
        (*(uint *)(gen_frame + 0x20)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)),sVar1);
        uVar3 = F_0055dcb0();
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xec))) == 0) {
          F_00559e00(*(undefined4 *)((int)this + 0x1b0),(*(uint *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x20)));
        }
        else {
          (*(float *)(gen_frame + 0x10)) = (float)(int)(short)(*(uint *)(gen_frame + 0x1c));
          (*(undefined4 *)(gen_frame + 0xc)) = 0;
          (*(undefined4 *)(gen_frame + 0x14)) = 1;
          (*(float *)(gen_frame + 0x18)) = (float)(int)(short)(*(uint *)(gen_frame + 0x20));
          F_00595110((int)this + 0x180,0x5a,*(undefined4 *)((int)this + 0x1b0),&(*(undefined4 *)(gen_frame + 0xc)),2,
                       REFG(float, 0x1088068));
          F_0058d530((undefined *)((int)this + 0x180));
        }
        *(undefined1 *)((int)this + 0x1bc) = 1;
        uVar3 = F_0055dcb0();
        *((undefined * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xec))) = this_00;
        return uVar3;
      }
      bVar2 = F_005610b0((undefined *)((int)this + 0x180));
      if (bVar2 != 0) {
        return CONCAT31(extraout_var,bVar2);
      }
      *(undefined1 *)((int)this + 0x1bc) = 1;
      F_00559fb0(this_00,&(*(uint *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x20)));
      F_0055a000(this_00,((undefined1 *)(gen_frame + 0x24)),((ushort *)(gen_frame + 0x28)));
      uVar3 = F_00559e00(*(undefined4 *)((int)this + 0x1b0),
                           (uint)(ushort)((short)(*(uint *)(gen_frame + 0x1c)) - *(short *)((int)this + 0x1b4)),
                           (uint)(ushort)(((((ushort *)(gen_frame + 0x28))[0] >> 1) - *(short *)((int)this + 0x1b6)) +
                                         (short)(*(uint *)(gen_frame + 0x20))));
      return uVar3;
    }
  }
  F_0056c5f0((undefined *)((int)this + 0x180));
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x1b0),0);
  uVar3 = F_0055dcb0();
  *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xec))) = 0;
  return uVar3;
}

/* ref: Client::UI2::AddonCursor::vf38 */
uint F_007859b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7859b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)param_1 + 0x1bc) = 0;
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) && (*(int *)((int)param_1 + 0x1b0) != 0)) {
    uVar1 = F_0055dcb0();
    if (*(char *)(uVar1 + 0x218) != '\0') {
      F_007855d0(param_1);
      uVar1 = F_005a2370(param_1,param_2);
      return uVar1;
    }
    F_00785760(param_1);
  }
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCursor::vf41 */
byte F_00785a10(unsigned int gen_a0)
{
  GEN_ENTER(0x785a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Cursor",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCursor::vf44 */
uint F_00785a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined2 uVar1;
  uint uVar2;
  float10 fVar3;
  
  *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(this + 0x90);
  uVar2 = F_0055e2f0(this,2);
  if (uVar2 == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,&(*(uint *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x0)),0);
    *(ushort *)(this + 0x1b4) = (ushort)(*(uint *)(gen_frame + 0x4)) >> 1;
    *(ushort *)(this + 0x1b6) = (ushort)(*(uint *)(gen_frame + 0x0)) >> 1;
  }
  else {
    fVar3 = F_0055a750(uVar2);
    (*(ushort *)(gen_frame + 0xa)) = ((undefined2)0x27f);
    (*(uint *)(gen_frame + 0x4)) = ((undefined2)0x27f) | 0xc00;
    (*(uint *)(gen_frame + 0x4)) = (int)TRUNC(fVar3);
    (*(uint *)(gen_frame + 0x4)) = (int)TRUNC(fVar3) & 0xffff;
    fVar3 = F_0055a760(uVar2);
    (*(ushort *)(gen_frame + 0xa)) = ((undefined2)0x27f);
    (*(uint *)(gen_frame + 0x0)) = ((undefined2)0x27f) | 0xc00;
    *(ushort *)(this + 0x1b4) = (ushort)(*(uint *)(gen_frame + 0x4));
    uVar2 = (uint)TRUNC(fVar3);
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = (ushort)uVar2;
    uVar1 = (ushort)(*(uint *)(gen_frame + 0x0));
    (*(uint *)(gen_frame + 0x0)) = uVar2 & 0xffff;
    *(undefined2 *)(this + 0x1b6) = uVar1;
  }
  uVar2 = F_0055dcb0();
  F_005aa060((undefined *)(uVar2 + 0x20c),0,0);
  uVar2 = F_0055dcb0();
  F_005a9f80((undefined *)(uVar2 + 0x20c));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonCursor::vf46 */
byte F_00785b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_0055dcb0();
  piVar3 = (int *)F_0055b990(uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_0055dcb0();
    this_00 = (undefined *)(uVar2 + 0x20c);
    *(bool *)(uVar2 + 0x219) = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x38))) != 0;
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x34))) != 0) {
      F_005a9f80(this_00);
      F_005aa060(this_00,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x3c))),0);
      return 0;
    }
    F_005a9ff0(this_00);
  }
  return 0;
}

/* ref: Client::UI2::AddonCursor::vf5 */
unsigned int F_00785b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x785b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_005a89b0(this,1,1);
  uVar1 = F_0055dcb0();
  F_005a9f80((undefined *)(uVar1 + 0x20c));
  return 0;
}

/* ref: Client::UI2::AddonCursor::vf6 */
unsigned int F_00785bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_005b0610(this,1,1,0);
  uVar1 = F_0055dcb0();
  F_005a9ff0((undefined *)(uVar1 + 0x20c));
  return 0;
}

/* ref: Client::UI2::AddonCursor::vf2 */
unsigned int F_00785bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x785bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::UI2::AddonCursor::vf28 */
byte F_00785c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785c00u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  short * psVar1;
  short * psVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) != 0) {
    uVar3 = F_0055a2d0(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))));
    if ((char)uVar3 != '\0') {
      uVar3 = F_0055dcb0();
      if (*(char *)(uVar3 + 0x218) != '\0') {
        *(*(short * PTR32 *)&gen_args[1]) = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8)));
        *(*(short * PTR32 *)&gen_args[2]) = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ba)));
        return 1;
      }
      uVar3 = F_0055dcb0();
      psVar2 = (*(short * PTR32 *)&gen_args[2]);
      psVar1 = (*(short * PTR32 *)&gen_args[1]);
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xec)));
      if (this_00 != (undefined *)0x0) {
        F_00559fb0(this_00,(*(short * PTR32 *)&gen_args[1]),(*(short * PTR32 *)&gen_args[2]));
        F_0055a000(this_00,&(*(short * PTR32 *)&gen_args[2]),&(*(short * PTR32 *)&gen_args[1]));
        *psVar1 = *psVar1 + ((ushort)(*(short * PTR32 *)&gen_args[2]) >> 1);
        *psVar2 = *psVar2 + ((ushort)(*(short * PTR32 *)&gen_args[1]) >> 1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00785cc0 */
uint F_00785cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x785cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c477c));
  F_0055b830((int)this + 400);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x10;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined2 *)((int)this + 0x2d0) = 0;
  *(undefined1 *)((int)this + 0x2d2) = 1;
  *(undefined4 *)((int)this + 0x120) = 0x890;
  F_0055e2a0(this,0x8000000,1);
  F_0055e2a0(this,0x20000000,0);
  return (uint)this;
}

/* ref: FUN_00785d80 */
uint F_00785d80(unsigned int gen_a0)
{
  GEN_ENTER(0x785d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c477c));
  F_0055b840();
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonFade::vf36 */
uint F_00785da0(unsigned int gen_a0)
{
  GEN_ENTER(0x785da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  F_0055dc60((undefined *)this);
  uVar2 = F_0055b850(this + 400,0x120000);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x284) = uVar1;
  *(undefined4 *)(this + 0x288) = uVar1;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  return uVar2;
}

/* ref: Client::UI2::AddonFade::vf39 */
unsigned int F_00785e20(unsigned int gen_a0)
{
  GEN_ENTER(0x785e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  if ((this[0x2ab] != (undefined1)0x0) && (this[0x2d2] != (undefined1)0x0)) {
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(this + 0x2a4);
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(this + 0x2a0);
    *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(this + 0x2a4);
    *(undefined4 *)(this + 0x1b8) = 0;
    *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(this + 0x2a0);
    *(undefined4 *)(this + 0x1c4) = 0;
    *(undefined4 *)(this + 0x1c8) = 0;
    *(uint *)(this + 0x290) =
         (uint)(ushort)(*(short *)(this + 0x128) << 6) << 9 | *(uint *)(this + 0x290) & 0xfe0001ff;
    uVar1 = *(undefined4 *)(this + 0x2a8);
    *(undefined4 *)(this + 0x1d0) = uVar1;
    *(undefined4 *)(this + 0x1d4) = uVar1;
    *(undefined4 *)(this + 0x1d8) = uVar1;
    *(undefined4 *)(this + 0x1dc) = uVar1;
    uVar2 = F_0055dcb0();
    F_00585cf0(this + 400,*(undefined4 *)(uVar2 + 4));
  }
  return 0;
}

/* ref: Client::UI2::AddonFade::vf42 */
byte F_00785ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x785ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_00785f00 */
uint F_00785f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x785f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 * this_00;
  int iVar5;
  
  uVar2 = *(ushort *)((int)this + 0xf6);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
  (*(uint *)(gen_frame + 0x8)) = uVar2 & 0xf;
  uVar3 = *(undefined4 *)((int)this + 0x2ac);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
  uVar4 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x11,2,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(((undefined1 *)(gen_frame + 0x14)));
  if ((char)param_1 != '\0') {
    if (*(int *)((int)this + 0x2ac) == 1) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
      uVar4 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x14) + 0x58))))
                (*(int * PTR32 *)(uVar4 + 0x14),*(ushort *)((int)this + 0xf6) & 0xf,0);
    }
    bVar1 = *(byte *)((int)this + 0x13a);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
    (*(uint *)(gen_frame + 0x8)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    uVar4 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x14)),4,2,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(((undefined1 *)(gen_frame + 0x14)));
  }
  this_00 = ((undefined1 *)(gen_frame + 0x14));
  iVar5 = 1;
  do {
    this_00 = this_00 + -8;
    uVar4 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  return uVar4;
}

/* ref: FUN_00786010 */
uint F_00786010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x786010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
  (*(uint *)(gen_frame + 0x18)) = (-(uint)((char)param_1 != '\0') & 0xffffff80) + 0x100 | 0x24;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x3a,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: FUN_00786090 */
uint F_00786090(unsigned int gen_a0)
{
  GEN_ENTER(0x786090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c488c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4878));
  *(undefined4 *)((int)this + 0x120) = 0x854;
  return (uint)this;
}

/* ref: Client::UI2::AddonDialogue::vf41 */
byte F_00786110(unsigned int gen_a0)
{
  GEN_ENTER(0x786110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Dialogue",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonDialogue::vf44 */
unsigned int F_00786120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x786120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::AddonDialogue::vf38 */
uint F_00786130(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x786130u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a2370(param_1,param_2);
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) &&
     ((uVar1 = (uint)param_1[0x3d] >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x8c))(param_1);
  }
  return uVar1;
}

/* ref: FUN_0078616d */
unsigned int F_0078616d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78616du, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00786180 */
uint F_00786180(unsigned int gen_a0)
{
  GEN_ENTER(0x786180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c498c));
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x67 ^
       *(byte *)((int)this + 0xf9) | 0x18;
  F_0055e2a0(this,0x8000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonDragDrop::vf41 */
byte F_00786210(unsigned int gen_a0)
{
  GEN_ENTER(0x786210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ResidentDragTarget",0,6);
  return bVar1;
}

/* ref: FUN_00786220 */
uint F_00786220(unsigned int gen_a0)
{
  GEN_ENTER(0x786220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4a9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4a88));
  F_0055b830((int)this + 400);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x10;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  F_0055e2a0(this,0x8000000,1);
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  return (uint)this;
}

/* ref: FUN_007862c0 */
uint F_007862c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7862c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4a9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4a88));
  F_0055b840();
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonFilter::vf36 */
uint F_007862f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7862f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  F_0055dc60((undefined *)this);
  uVar2 = F_0055b850(this + 400,0x120000);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x284) = uVar1;
  *(undefined4 *)(this + 0x288) = uVar1;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x2a8) = 0x80000000;
  return uVar2;
}

/* ref: Client::UI2::AddonFilter::vf38 */
uint F_00786380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x786380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = F_0055dcb0();
  fVar2 = (float10)*(int *)(uVar1 + 0x234);
  if (*(int *)(uVar1 + 0x234) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(in_ecx + 0x2a0) = (float)fVar2;
  uVar1 = F_0055dcb0();
  fVar2 = (float10)*(int *)(uVar1 + 0x238);
  if (*(int *)(uVar1 + 0x238) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(in_ecx + 0x2a4) = (float)fVar2;
  return uVar1;
}

/* ref: Client::UI2::AddonFilter::vf39 */
uint F_007863e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7863e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(this + 0x2a4);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(this + 0x2a0);
  *(undefined4 *)(this + 0x1b4) = *(undefined4 *)(this + 0x2a4);
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(this + 0x2a0);
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(uint *)(this + 0x290) =
       (uint)(ushort)(*(short *)(this + 0x128) << 6) << 9 | *(uint *)(this + 0x290) & 0xfe0001ff;
  uVar1 = *(undefined4 *)(this + 0x2a8);
  *(undefined4 *)(this + 0x1d0) = uVar1;
  *(undefined4 *)(this + 0x1d4) = uVar1;
  *(undefined4 *)(this + 0x1d8) = uVar1;
  *(undefined4 *)(this + 0x1dc) = uVar1;
  uVar2 = F_0055dcb0();
  uVar2 = F_00585cf0(this + 400,*(undefined4 *)(uVar2 + 4));
  return uVar2;
}

/* ref: Client::UI2::AddonFilter::vf42 */
byte F_00786490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x786490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_007864a0 */
byte F_007864a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7864a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  bool bVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      uVar2 = 0;
      piVar3 = (int *)((int)this + 300);
      while (*piVar3 != 0) {
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
        if (3 < uVar2) {
          return 1;
        }
      }
      *(uint *)((int)this + uVar2 * 4 + 300) = (uint)*(byte *)(param_2 + 0x13a);
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0x180) + 0x14))))((int)this + -0x180,1);
    return 1;
  }
  if (param_2 != 0) {
    bVar1 = true;
    if (*(uint *)((int)this + 300) == (uint)*(byte *)(param_2 + 0x13a)) {
      *(undefined4 *)((int)this + 300) = 0;
    }
    else if (*(uint *)((int)this + 300) != 0) {
      bVar1 = false;
    }
    if (*(uint *)((int)this + 0x130) == (uint)*(byte *)(param_2 + 0x13a)) {
      *(undefined4 *)((int)this + 0x130) = 0;
    }
    else if (*(uint *)((int)this + 0x130) != 0) {
      bVar1 = false;
    }
    if (*(uint *)((int)this + 0x134) == (uint)*(byte *)(param_2 + 0x13a)) {
      *(undefined4 *)((int)this + 0x134) = 0;
    }
    else if (*(uint *)((int)this + 0x134) != 0) {
      bVar1 = false;
    }
    if (*(uint *)((int)this + 0x138) == (uint)*(byte *)(param_2 + 0x13a)) {
      *(undefined4 *)((int)this + 0x138) = 0;
    }
    else if (*(uint *)((int)this + 0x138) != 0) {
      return 1;
    }
    if (bVar1) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0x180) + 0x18))))((int)this + -0x180,1,0);
    }
    return 1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0x180) + 0x18))))((int)this + -0x180,1,0);
  return 1;
}

/* ref: FUN_007865d0 */
uint F_007865d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7865d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8a0;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4bac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4b98));
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc4;
  F_0055e2a0(this,0x8000000,1);
  F_0055e2a0(this,0x20000000,0);
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonOperationGuide::vf41 */
byte F_007866b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7866b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"OperationGuide",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonOperationGuide::vf38 */
uint F_007866c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7866c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00588b50((undefined *)(uVar1 + 0x1ec));
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: FUN_007866f0 */
uint F_007866f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7866f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x60;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4cac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc4;
  F_0055e2a0(this,0x8000000,1);
  F_0055e2a0(this,0x20000000,0);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x10c4ca4),0,0,(float)(float10)1,1);
  F_0055e220(this,REFG(float, 0x1088068),0,0,(float)(float10)1,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonNowLoading::vf41 */
byte F_007867c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7867c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Loading",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonNowLoading::vf46 */
byte F_007867d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7867d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * pAVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (param_1 < 3) {
    return 0;
  }
  if (((param_2[0x10] & 0xf) == 0) || (uVar4 = *(uint *)(param_2 + 0x14), uVar4 == 0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 4);
    }
    uVar4 = uVar4 & 0xf;
    if ((param_2[8] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_2 + 0xc);
    }
    if ((uVar5 & 0x180) == 0x80) {
      *(uint *)(this + 0x180) = *(uint *)(this + 0x180) | uVar4;
      iVar2 = *(int *)(this + 0x180);
      if (*(int *)(this + 0x184) != 0) {
        return 0;
      }
      goto LAB_00786824;
    }
    if ((uVar4 & *(uint *)(this + 0x180)) != 0) {
      *(uint *)(this + 0x180) = ~uVar4 & *(uint *)(this + 0x180);
    }
    if (*(int *)(this + 0x180) != 0) {
      return 0;
    }
  }
  else {
    if ((uVar4 & 1) == 0) {
      pAVar1 = this + 0x184;
      *(uint *)pAVar1 = *(uint *)pAVar1 & ~(uVar4 >> 1);
      if (*(uint *)pAVar1 != 0) {
        return 0;
      }
      iVar2 = *(int *)(this + 0x180);
LAB_00786824: ;
      if (iVar2 == 0) {
        return 0;
      }
      bVar3 = F_005b8a10(this);
      if (bVar3 == 0) {
        return 0;
      }
      ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
      return 0;
    }
    *(uint *)(this + 0x184) = *(uint *)(this + 0x184) | uVar4 >> 1;
  }
  bVar3 = F_005b89f0(this);
  if (bVar3 != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  }
  return 0;
}

/* ref: FUN_007868d0 */
uint F_007868d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7868d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4dac));
  return (uint)this;
}

/* ref: Client::UI2::AddonYesNo::vf25 */
uint F_00786930(unsigned int gen_a0)
{
  GEN_ENTER(0x786930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonYesNo::vf41 */
byte F_00786970(unsigned int gen_a0)
{
  GEN_ENTER(0x786970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"SelectYesNo",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonYesNo::vf2 */
unsigned int F_00786980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x786980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_007869d0 */
uint F_007869d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7869d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4eac));
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectOk::vf25 */
uint F_00786a30(unsigned int gen_a0)
{
  GEN_ENTER(0x786a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf36 */
uint F_00786a60(unsigned int gen_a0)
{
  GEN_ENTER(0x786a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf41 */
byte F_00786a80(unsigned int gen_a0)
{
  GEN_ENTER(0x786a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"SelectOk",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf2 */
unsigned int F_00786a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x786a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 0x17) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00786ae0 */
uint F_00786ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x786ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4fac));
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(undefined2 *)((int)this + 0x19d) = 0;
  *(undefined1 *)((int)this + 0x19f) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf25 */
uint F_00786b70(unsigned int gen_a0)
{
  GEN_ENTER(0x786b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf38 */
uint F_00786bb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x786bb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  uint uVar2;
  undefined * this;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = F_005a2370(param_1,param_2);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),*(char *)((int)param_1 + 0x19c));
  if (*(char *)((int)param_1 + 0x19c) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x1a0) - (float10)param_2)));
    *(float *)((int)param_1 + 0x1a0) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      *(undefined4 *)((int)param_1 + 0x1a0) = 0;
    }
    if (*(int *)((int)param_1 + 0x194) != 0) {
      uVar4 = *(undefined4 *)((int)param_1 + 0x198);
      iVar3 = (int)*(float *)((int)param_1 + 0x1a0);
      this = (undefined *)F_0055dcb0();
      uVar2 = F_005b03e0(this,iVar3,uVar4);
      uVar2 = F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x194),uVar2);
    }
    if (*(float *)((int)param_1 + 0x1a0) <= 0.0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x184) + 0x28))))(*(int * PTR32 *)((int)param_1 + 0x184),0);
      *(undefined1 *)((int)param_1 + 0x19c) = 0;
      if (*(char *)((int)param_1 + 0x19f) == '\x01') {
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(undefined4 *)(gen_frame + 0x18)) = 1;
        F_005a9110(param_1,1,&(*(undefined4 *)(gen_frame + 0x14)));
        uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
        return uVar2;
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a9110(param_1,1,&(*(undefined4 *)(gen_frame + 0xc)));
      uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf41 */
byte F_00786cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x786cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"SelectYesNoCount",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf41 */
byte F_00786cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x786cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ContextMenu",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf38 */
uint F_00786ce0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x786ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if ((char)param_1[0x6d] != '\0') {
    F_0056a3d0((undefined *)param_1[0x61],3,0,param_1 + 0x60,0,0);
  }
  *(undefined1 *)(param_1 + 0x6d) = 0;
  uVar1 = F_005a2370(param_1,param_2);
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) &&
     ((uVar1 = (uint)param_1[0x3d] >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
    uVar1 = F_0055dcb0();
    uVar1 = *(uint *)(uVar1 + 0x18);
    if (*(char *)(uVar1 + 0xc6a) == '\0') {
      uVar1 = F_0055dcb0();
      if ((*((int * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x14) + 0xcc))) != param_1) &&
         (*(char *)((int)param_1 + 0x1c1) == '\0')) {
        uVar1 = ((code *)*(gen_code32 *)(*param_1 + 100))(param_1);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00786d80 */
byte F_00786d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x786d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x1c1) = 1;
  if (*(char *)((int)this + 0x1c0) == '\0') {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
    uVar1 = F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    if ((char)uVar1 != '\0') {
      *(undefined1 *)((int)this + 0x1c0) = 1;
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      return 1;
    }
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: Client::UI2::AddonContextMenu::vf25 */
uint F_00786df0(unsigned int gen_a0)
{
  GEN_ENTER(0x786df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  this[0x1c1] = (undefined1)0x1;
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  uVar1 = F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(this + 0x19c) = 0;
    F_00586850(*(undefined * PTR32 *)(this + 0x184),3,0,this + 0x180);
  }
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf53 */
unsigned int F_00786e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x786e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((char)param_1 == '\0') && (this[0x1c1] == (undefined1)0x0)) {
    ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
  }
  return 0;
}

/* ref: Client::UI2::AddonContextMenu::vf52 */
byte F_00786e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x786e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (*param_1 == 4) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x180) + 0xc))))
              (this + 0x180,*((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0xc0))));
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonSelectString::vf41 */
byte F_00786f10(unsigned int gen_a0)
{
  GEN_ENTER(0x786f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"SelectString",0,6);
  return bVar1;
}

/* ref: FUN_00786f20 */
byte F_00786f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x786f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: Client::UI2::AddonSelectString::vf2 */
unsigned int F_00786f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x786f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::UI2::AddonSelectString::vf25 */
uint F_00786f70(unsigned int gen_a0)
{
  GEN_ENTER(0x786f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00786fa0 */
uint F_00786fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x786fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c50ac));
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x200;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00787020 */
uint F_00787020(unsigned int gen_a0)
{
  GEN_ENTER(0x787020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c50ac));
  if (*(int *)((int)this + 0x19c) != 0) {
    F_00406b30(*(int *)((int)this + 0x19c));
    *(undefined4 *)((int)this + 0x19c) = 0;
  }
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonListGrid::vf25 */
uint F_00787050(unsigned int gen_a0)
{
  GEN_ENTER(0x787050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonListGrid::vf41 */
byte F_00787090(unsigned int gen_a0)
{
  GEN_ENTER(0x787090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ListGrid",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonListGrid::vf2 */
uint F_007870a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7870a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  uint * this_01;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = param_1 & 0xffff;
  uVar4 = uVar3 - 0x17;
  if (0x16 < uVar4) goto switchD_007870d2_caseD_18;
  uVar4 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x78726c) + uVar3 + 1)));
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0x17: ;
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0xc)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x8)));
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  default: ;
    goto switchD_007870d2_caseD_18;
  case 0x1f: ;
    *(undefined4 *)(this + 0x1a0) = param_4[2];
    uVar4 = F_00557670(param_3,0);
    this_00 = *(undefined * PTR32 *)(this + 0x184);
    if ((this_00 == (undefined *)0x0) || (*(int *)(this + 0x1a0) < 0)) goto switchD_007870d2_caseD_18;
    puVar6 = *((undefined1 * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 8 + param_4[2] * 0x10)));
    break;
  case 0x20: ;
    uVar4 = F_00557670(param_3,0);
    this_00 = *(undefined * PTR32 *)(this + 0x184);
    if (this_00 == (undefined *)0x0) goto switchD_007870d2_caseD_18;
    puVar6 = &REFG(undefined1, 0x10be67a);
    break;
  case 0x21: ;
    F_00557670(param_3,0);
    bVar1 = *(byte *)(param_4 + 4);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 4 + param_4[2] * 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + param_4[2] * 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
    (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar5 = 2;
    do {
      this_01 = this_01 + -2;
      uVar3 = F_005a2670(this_01);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  case 0x2d: ;
    if (*(int *)(this + 0x188) != 0) {
      F_005ab2b0((undefined *)*param_4,*((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 4 + param_4[2] * 0x10))),
                   *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 0xc + param_4[2] * 0x10))),0);
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
      *(undefined1 *)(param_3 + 0x15) = 1;
      uVar3 = F_00557670(param_3,0);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
    goto switchD_007870d2_caseD_18;
  }
  uVar4 = F_00584110(this_00,puVar6);
switchD_007870d2_caseD_18: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_007872a0 */
unsigned int F_007872a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7872a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x19c) != 0) {
    in_ecx = F_00559ba0(*param_2);
    if (in_ecx != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + param_1 * 0x10)));
      this_00 = (undefined *)F_00559ba0(in_ecx);
      F_00584110(this_00,uVar1);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonListGrid::vf52 */
byte F_007872e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7872e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((((*param_1 == 4) && ((char)param_1[1] == '\0')) && (*(int *)(this + 0x19c) != 0)) &&
     (-1 < *(int *)(this + 0x1a0))) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 4 + *(int *)(this + 0x1a0) * 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + *(int *)(this + 0x1a0) * 0x10)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_007873f0 */
uint F_007873f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7873f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c51ac));
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined2 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8100;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_007874b0 */
uint F_007874b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7874b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c51ac));
  if (*(int *)((int)this + 0x1a0) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a0));
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonListIcon::vf25 */
uint F_007874e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7874e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonListIcon::vf41 */
byte F_00787580(unsigned int gen_a0)
{
  GEN_ENTER(0x787580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ListIcon",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonListIcon::vf52 */
byte F_00787590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x787590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x184);
  if (*param_1 == 0xf) {
    uVar2 = iVar1 + 1;
    if (((char)param_1[1] != '\x02') && (*(uint *)(this + 0x188) < uVar2)) {
      uVar2 = 0;
    }
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      if ((char)param_1[1] != '\x02') {
        uVar2 = *(uint *)(this + 0x188);
      }
    }
    else {
      uVar2 = iVar1 - 1;
    }
  }
  F_00908c60(this,uVar2);
  if (*(int *)(this + 0x184) != iVar1) {
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  }
  return 1;
}

/* ref: Client::UI2::AddonListIcon::vf2 */
uint F_00787620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x787620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  byte bVar2;
  undefined1 AVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint * this_00;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar5 = param_1 & 0xffff;
  uVar6 = uVar5 - 0x17;
  if (uVar6 < 0x17) {
    uVar6 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7878e0) + uVar5 + 1)));
    switch((unsigned int)(uintptr_t)(uVar5)) {
    case 0x17: ;
      uVar6 = param_2 - 100;
      if ((uVar6 < 10) && (uVar6 <= *(uint *)(this + 0x188))) {
        uVar5 = F_00908c60(this,uVar6);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar5;
      }
      break;
    case 0x1f: ;
      F_00557670(param_3,0);
      iVar4 = *(int *)(this + 0x1a0);
      iVar7 = *(int *)(this + 0x184) * 0x19 + param_4[2];
      uVar8 = *(undefined4 *)(iVar4 + 8 + iVar7 * 0x14);
      iVar9 = iVar4 + iVar7 * 0x14;
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar4 + iVar7 * 0x14);
      (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(iVar9 + 4);
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar9 + 0xc);
      (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar9 + 0x10);
      F_00560760(&(*(undefined4 *)(gen_frame + 0x4)));
      iVar9 = *param_4;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar8;
      if ((*(uint *)(this + 0x18c) & 0x100) != 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x30));
        (*(undefined1 *)(gen_frame + 0xf)) = 0;
        uVar8 = 0;
        if (iVar9 != 0) {
          uVar8 = *(undefined4 *)(iVar9 + 0x70);
        }
        AVar3 = this[0x13a];
        uVar5 = F_0055dcb0();
        uVar5 = F_00588780((undefined *)(uVar5 + 0xe0),6,(uint)(byte)AVar3,uVar8,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar5;
      }
      uVar8 = 0;
      if (iVar9 != 0) {
        uVar8 = *(undefined4 *)(iVar9 + 0x70);
      }
      AVar3 = this[0x13a];
      uVar5 = F_0055dcb0();
      uVar5 = F_00588780((undefined *)(uVar5 + 0xe0),2,(uint)(byte)AVar3,uVar8,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    case 0x20: ;
      F_00557670(param_3,0);
      uVar5 = F_0055dcb0();
      uVar6 = F_00594d90((undefined *)(uVar5 + 0xe0),0);
      break;
    case 0x21: ;
      F_00557670(param_3,0);
      if (*(int *)(this + 0x19c) != 0) {
        *((bool *)GEN_TOP((*(int *)(this + 0x19c) + 0x113))) = (*(uint *)(this + 0x18c) & 0x400) != 0x400;
      }
      iVar9 = *(int *)(this + 0x184) * 0x19 + param_4[2];
      bVar2 = *(byte *)(param_4 + 4);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int *)(gen_frame + 0x1c)) = iVar9;
      iVar9 = iVar9 * 0x14;
      uVar8 = *((undefined4 *)GEN_TOP((iVar9 + *(int *)(this + 0x1a0))));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(undefined4 *)(gen_frame + 0x24)) = uVar8;
      uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + 0xc + iVar9)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(undefined4 *)(gen_frame + 0x2c)) = uVar8;
      F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x10)));
      this_00 = &(*(uint *)(gen_frame + 0x38));
      iVar9 = 4;
      do {
        this_00 = this_00 + -2;
        uVar5 = F_005a2670(this_00);
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    case 0x2d: ;
      if (*(int *)(this + 0x19c) != 0) {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + (*(int *)(this + 0x184) * 0x19 + param_4[2]) * 0x14)));
        (*(undefined4 *)(gen_frame + 0x28)) = puVar1[1];
        (*(undefined4 *)(gen_frame + 0x2c)) = puVar1[2];
        (*(undefined4 *)(gen_frame + 0x34)) = puVar1[4];
        F_005ab2b0((undefined *)*param_4,puVar1[3],*puVar1,0);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
        *(undefined1 *)(param_3 + 0x15) = 1;
        uVar5 = F_00557670(param_3,0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar5;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar6;
}

/* ref: FUN_00787910 */
unsigned int F_00787910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x787910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)((int)this + 0x1a0);
  if (iVar2 != 0) {
    iVar4 = *(int *)((int)this + 0x184) * 0x19 + param_1;
    uVar3 = *(undefined4 *)(iVar2 + 4 + iVar4 * 0x14);
    puVar1 = (undefined4 *)(iVar2 + iVar4 * 0x14);
    uVar6 = puVar1[4];
    F_005951c0(param_3,*puVar1,0,0);
    if ((((*(uint *)((int)this + 0x18c) & 0x200) != 0) &&
        ((*(byte *)((int)param_3 + 0x220) & 4) != 0)) &&
       (iVar2 = *(int *)((int)param_3 + 0x1e0), iVar2 != 0)) {
      this_00 = *(undefined * PTR32 *)(iVar2 + 0xbc);
      if (this_00 != (undefined *)0x0) {
        F_0055dcb0();
        uVar5 = F_0056a410(uVar6);
        F_00584110(this_00,uVar5);
      }
      F_005618b0(iVar2,(uint)((byte)uVar3 & 1));
    }
  }
  return 0;
}

/* ref: FUN_007879d0 */
uint F_007879d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7879d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(int *)((int)this + 0x188) != 0) && (-1 < (int)*(uint *)((int)this + 400))) {
    uVar2 = *(uint *)((int)this + 400) / 0x19;
  }
  uVar1 = F_00908c60(this,uVar2);
  if ((uVar2 != 0) && (uVar2 <= *(uint *)((int)this + 0x188))) {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x1a4),0);
    uVar1 = F_0059dde0(*(undefined * PTR32 *)((int)this + uVar2 * 4 + 0x1a4),1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSelectIconString::vf41 */
byte F_00787a40(unsigned int gen_a0)
{
  GEN_ENTER(0x787a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"SelectIconString",0,6);
  return bVar1;
}

/* ref: FUN_00787a50 */
byte F_00787a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x787a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: Client::UI2::AddonSelectIconString::vf25 */
uint F_00787a90(unsigned int gen_a0)
{
  GEN_ENTER(0x787a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00787ac0 */
uint F_00787ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x787ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) & 0xfb;
  bVar2 = bVar1 | 0x80;
  *(byte *)((int)this + 0xf9) = bVar1 | 0xc0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c52bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c52a8));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar2) & 0x77 ^ bVar2 | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonToolTipS::vf41 */
byte F_00787b80(unsigned int gen_a0)
{
  GEN_ENTER(0x787b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ToolTipS",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonToolTipS::vf44 */
ushort F_00787b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x787b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * this_00;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e340(this,2);
  *(uint *)(this + 0x184) = uVar1;
  this_00 = (undefined *)F_0055e2f0(this,3);
  *(undefined * PTR32 *)(this + 0x188) = this_00;
  if (this_00 != (undefined *)0x0) {
    F_0055a300(this_00,0);
  }
  if (*(undefined * PTR32 *)(this + 0x188) != (undefined *)0x0) {
    F_0055a000(*(undefined * PTR32 *)(this + 0x188),((short *)(gen_frame + 0x18)),((undefined2 *)(gen_frame + 0x10)));
  }
  if (*(undefined * PTR32 *)(this + 0x184) != (undefined *)0x0) {
    F_0055a000(*(undefined * PTR32 *)(this + 0x184),((short *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0xc)));
  }
  *(short *)(this + 0x18c) = ((short *)(gen_frame + 0x18))[0] - ((short *)(gen_frame + 0x14))[0];
  *(undefined2 *)(this + 0x18e) = ((undefined2 *)(gen_frame + 0x10))[0];
  return ((short *)(gen_frame + 0x18))[0] - ((short *)(gen_frame + 0x14))[0];
}

/* ref: Client::UI2::AddonToolTipS::vf2 */
unsigned int F_00787c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x787c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_00787c60 */
byte F_00787c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x787c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  short sVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 uVar5;
  int iVar6;
  undefined * puVar7;
  byte * pbVar8;
  uint * this_00;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(bool *)(gen_frame + 0x17)) = true;
  sVar2 = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (*(int *)((int)this + 4) != 0) {
    if (param_2 != (undefined4 *)0x0) {
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(undefined4 *)(gen_frame + 0x24)) = 0x15e;
      uVar3 = F_0055ab00(*(undefined4 *)((int)this + 4));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(uint *)(gen_frame + 0x2c)) = uVar3;
      bVar1 = F_0055ab50(*(undefined4 *)((int)this + 4));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      puVar7 = (undefined *)*param_2;
      (*(uint *)(gen_frame + 0x34)) = (uint)bVar1;
      if (puVar7 == (undefined *)0x0) {
        puVar7 = &REFG(undefined, 0x10be682);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = puVar7;
      F_0057eb00(*(undefined * PTR32 *)((int)this + 4),1);
      uVar3 = F_0055dcb0();
      pbVar4 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))
                                 (*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x18)))));
      if ((*pbVar4 & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar4 + 4);
      }
      F_00584110(*(undefined * PTR32 *)((int)this + 4),uVar5);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      pbVar8 = &REFG(undefined1, 0x10be683);
      pbVar4 = (byte *)F_0055aaf0(*(undefined4 *)((int)this + 4));
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00787d75: ;
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00787d7a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00787d75;
        pbVar4 = pbVar4 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00787d7a: ;
      (*(bool *)(gen_frame + 0x17)) = iVar6 == 0;
      this_00 = &(*(uint *)(gen_frame + 0x38));
      iVar6 = 3;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    F_00577d20(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0xc)),0,0,REFG(undefined4, 0x108cc50),0);
    uVar3 = F_00584550(*(undefined * PTR32 *)((int)this + 4));
    sVar2 = (short)uVar3;
  }
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0x180) + 0x4c))))
              ((int)this + -0x180,(uint)(ushort)(*(short *)((int)this + 0xc) + (short)(*(undefined4 *)(gen_frame + 0x10))),
               (uint)(ushort)(*(short *)((int)this + 0xe) * sVar2));
    F_0055a300(*(undefined * PTR32 *)((int)this + 8),(uint)((*(bool *)(gen_frame + 0x17)) == false));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0x180) + 0x14))))((int)this + -0x180,1);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
}

/* ref: FUN_00787e30 */
uint F_00787e30(unsigned int gen_a0)
{
  GEN_ENTER(0x787e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c53bc));
  return (uint)this;
}

/* ref: Client::UI2::AddonInputNumeric::vf25 */
uint F_00787ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x787ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonInputNumeric::vf36 */
uint F_00787ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x787ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  return uVar1;
}

/* ref: Client::UI2::AddonInputNumeric::vf41 */
byte F_00787ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x787ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"InputNumeric",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonInputNumeric::vf2 */
unsigned int F_00787f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x787f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  
  if ((short)param_1 == 0x17) {
    if (param_2 == 0) {
      F_00557670(param_3,0);
      if (*(int *)(this + 0x198) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x178)));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    }
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00787f80 */
uint F_00787f80(unsigned int gen_a0)
{
  GEN_ENTER(0x787f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c54bc));
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  return (uint)this;
}

/* ref: Client::UI2::AddonInputString::vf25 */
uint F_00788040(unsigned int gen_a0)
{
  GEN_ENTER(0x788040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(char * PTR32 *)(gen_frame + 0xc)) = "";
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(char * PTR32 *)(gen_frame + 0x14)) = "";
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonInputString::vf41 */
byte F_007880e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7880e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"InputString",0,6);
  return bVar1;
}

/* ref: FUN_007880f0 */
unsigned int F_007880f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7880f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  ushort * puVar2;
  undefined * this;
  ushort uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  this = (*(undefined * PTR32 *)&gen_args[2]);
  if ((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) {
    uVar3 = F_0055a030((*(undefined * PTR32 *)&gen_args[2]));
    pbVar6 = &REFG(undefined1, 0x10be6ef);
    pbVar4 = (byte *)F_0055aaf0(this);
    puVar2 = (*(ushort * PTR32 *)&gen_args[0]);
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00788137: ;
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0078813c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00788137;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0078813c: ;
    if (iVar5 == 0) {
      uVar3 = F_0055a030(this);
      *(*(short * PTR32 *)&gen_args[1]) = *(*(short * PTR32 *)&gen_args[1]) + uVar3;
      return 0;
    }
    F_00559f40(this,(uint)*(*(ushort * PTR32 *)&gen_args[0]));
    F_00577d20(this,&(*(ushort * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)&gen_args[2]),0,0,REFG(undefined4, 0x108cc50),0);
    *puVar2 = *puVar2 + (short)(*(undefined * PTR32 *)&gen_args[2]);
    *(*(short * PTR32 *)&gen_args[1]) = *(*(short * PTR32 *)&gen_args[1]) + (uVar3 - (short)(*(undefined * PTR32 *)&gen_args[2]));
  }
  return 0;
}

/* ref: FUN_007881a0 */
uint F_007881a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7881a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_007881b0 */
uint F_007881b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7881b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*(int *)((int)this + 0x198) != 0) {
    if (*(char *)((int)this + 0x188) == '\0') {
      bVar1 = F_00908e50(this);
      if (bVar1 == 0) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x28))))(*(int * PTR32 *)((int)this + 0x198),0);
        return uVar2;
      }
    }
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x28))))(*(int * PTR32 *)((int)this + 0x198),1);
  }
  return in_EAX;
}

/* ref: FUN_007881f0 */
uint F_007881f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7881f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c55bc));
  *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8100;
  return (uint)this;
}

/* ref: FUN_007882d0 */
uint F_007882d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7882d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c55bc));
  if (*(int *)((int)this + 0x1a8) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a8));
    *(undefined4 *)((int)this + 0x1a8) = 0;
  }
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonListColorChooser::vf25 */
uint F_00788300(unsigned int gen_a0)
{
  GEN_ENTER(0x788300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonListColorChooser::vf41 */
byte F_00788340(unsigned int gen_a0)
{
  GEN_ENTER(0x788340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ListColorChooser",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonListColorChooser::vf52 */
byte F_00788350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x788350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if ((char)param_1[1] != '\0') {
    return 0;
  }
  if (*param_1 == 0xf) {
    iVar1 = *(int *)(this + 0x184) + 1;
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    iVar1 = 0;
    if (*(int *)(this + 0x184) != 0) {
      F_00908f10(this,*(int *)(this + 0x184) + -1,1);
      return 1;
    }
  }
  F_00908f10(this,iVar1,1);
  return 1;
}

/* ref: Client::UI2::AddonListColorChooser::vf2 */
uint F_007883a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7883a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = param_1 & 0xffff;
  if (uVar3 == 0x17) {
    F_00557670(param_3,0);
    uVar3 = param_2 - 100;
    if ((uVar3 < 10) && (uVar3 <= *(uint *)(this + 0x188))) {
      uVar3 = F_00908f10(this,uVar3,0);
    }
  }
  else if (uVar3 == 0x21) {
    F_00557670(param_3,0);
    bVar1 = *(byte *)(param_4 + 0x10);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    iVar4 = *(int *)(this + 0x194) * *(int *)(this + 0x184) + *(int *)(param_4 + 8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(uint *)(gen_frame + 0x4)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = iVar4;
    uVar2 = *((undefined4 *)GEN_TOP((iVar4 * 0xc + *(int *)(this + 0x1a8))));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 8 + iVar4 * 0xc)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x19c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
    F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x0)));
    *(int *)(this + 0x198) = iVar4;
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 4;
    do {
      this_00 = this_00 + -2;
      uVar3 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_007884e0 */
unsigned int F_007884e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7884e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (*(int *)((int)this + 0x1a8) != 0) {
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1a8) +
                     (*(int *)((int)this + 0x184) * *(int *)((int)this + 0x194) + param_1) * 0xc)));
    fVar4 = (float10)*(double *)&REFG(undefined, 0x1088100);
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1088118);
    uVar2 = (int)TRUNC(((float10)(uVar3 & 0xff) / fVar4) * fVar5) & 0xff;
    uVar1 = (int)TRUNC(((float10)(uVar3 >> 8 & 0xff) / fVar4) * fVar5) & 0xff;
    uVar3 = (int)TRUNC(((float10)(uVar3 >> 0x10 & 0xff) / fVar4) * fVar5) & 0xff;
    this_00 = (undefined *)F_00561490(param_3,4);
    F_0055a1d0(this_00,uVar3,uVar1,uVar2);
    if ((*(uint *)((int)this + 0x1a0) == param_1) &&
       (*(uint *)((int)this + 0x1a0) == *(uint *)((int)this + 0x198) % *(uint *)((int)this + 0x194))
       ) {
      if ((*(byte *)((int)this + 0x18c) & 0x10) != 0) {
        F_0059d640((undefined *)*param_2,3);
        return 0;
      }
      F_0059d640((undefined *)*param_2,3);
    }
  }
  return 0;
}

/* ref: FUN_00788610 */
uint F_00788610(unsigned int gen_a0)
{
  GEN_ENTER(0x788610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c56bc));
  *(undefined4 *)((int)this + 0x196) = 0;
  *(undefined4 *)((int)this + 0x19a) = 0;
  *(undefined2 *)((int)this + 0x19e) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8100;
  return (uint)this;
}

/* ref: FUN_007886d0 */
uint F_007886d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7886d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c56bc));
  if (*(int *)((int)this + 0x1a4) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a4));
    *(undefined4 *)((int)this + 0x1a4) = 0;
  }
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonContextIconMenu::vf25 */
uint F_00788700(unsigned int gen_a0)
{
  GEN_ENTER(0x788700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(int *)(this + 0x1a4) != 0) {
    F_00406b30(*(int *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::UI2::AddonContextIconMenu::vf41 */
byte F_00788760(unsigned int gen_a0)
{
  GEN_ENTER(0x788760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ContextIconMenu",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonContextIconMenu::vf53 */
unsigned int F_00788770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x788770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::AddonContextIconMenu::vf2 */
uint F_00788780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x788780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  byte bVar2;
  undefined1 AVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar5 = param_1 & 0xffff;
  uVar6 = uVar5 - 0x17;
  if (uVar6 < 0x17) {
    uVar6 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7889f0) + uVar5 + 1)));
    switch((unsigned int)(uintptr_t)(uVar5)) {
    case 0x17: ;
      uVar6 = param_2 - 100;
      if ((uVar6 < 10) && (uVar6 <= *(uint *)(this + 0x188))) {
        uVar5 = F_00909050(this,uVar6);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar5;
      }
      break;
    case 0x1f: ;
      F_00557670(param_3,0);
      iVar8 = *(int *)(this + 0x1a4) + (*(int *)(this + 0x184) * 0x19 + param_4[2]) * 0x14;
      F_00560760(&(*(undefined4 *)(gen_frame + 0x4)));
      iVar4 = *param_4;
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar8 + 8);
      if (((byte)this[0x18c] & 0x80) != 0) {
        (*(undefined1 *)(gen_frame + 0xe)) = 2;
        (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)(iVar8 + 6);
        (*(undefined1 *)(gen_frame + 0xf)) = *(undefined1 *)(iVar8 + 4);
        uVar7 = 0;
        if (iVar4 != 0) {
          uVar7 = *(undefined4 *)(iVar4 + 0x70);
        }
        AVar3 = this[0x13a];
        uVar5 = F_0055dcb0();
        uVar5 = F_00588780((undefined *)(uVar5 + 0xe0),6,(uint)(byte)AVar3,uVar7,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar5;
      }
      uVar7 = 0;
      if (iVar4 != 0) {
        uVar7 = *(undefined4 *)(iVar4 + 0x70);
      }
      AVar3 = this[0x13a];
      uVar5 = F_0055dcb0();
      uVar5 = F_00588780((undefined *)(uVar5 + 0xe0),2,(uint)(byte)AVar3,uVar7,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    case 0x20: ;
      F_00557670(param_3,0);
      uVar5 = F_0055dcb0();
      uVar6 = F_00594d90((undefined *)(uVar5 + 0xe0),0);
      break;
    case 0x21: ;
      F_00557670(param_3,0);
      iVar8 = *(int *)(this + 0x184) * 0x19 + param_4[2];
      bVar2 = *(byte *)(param_4 + 4);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + iVar8 * 0x14)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int *)(gen_frame + 0x1c)) = iVar8;
      uVar7 = *puVar1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(undefined4 *)(gen_frame + 0x24)) = uVar7;
      uVar7 = puVar1[3];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(undefined4 *)(gen_frame + 0x2c)) = uVar7;
      F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x10)));
      this_00 = &(*(uint *)(gen_frame + 0x38));
      iVar8 = 4;
      do {
        this_00 = this_00 + -2;
        uVar5 = F_005a2670(this_00);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar5;
    case 0x2d: ;
      if (*(int *)(this + 0x1a0) != 0) {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + (*(int *)(this + 0x184) * 0x19 + param_4[2]) * 0x14)));
        F_005ab2b0((undefined *)*param_4,puVar1[3],*puVar1,puVar1[4]);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
        *(undefined1 *)(param_3 + 0x15) = 1;
        uVar5 = F_00557670(param_3,0);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar5;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar6;
}

/* ref: FUN_00788a20 */
unsigned int F_00788a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x788a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  if (*(int *)((int)this + 0x1a4) != 0) {
    F_005951c0(param_3,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a4) +
                          (*(int *)((int)this + 0x184) * 0x19 + param_1) * 0x14))),0,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditPlayer::vf39 */
unsigned int F_00788a50(unsigned int gen_a0)
{
  GEN_ENTER(0x788a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x180) == 2) {
    F_00579170((undefined *)this);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditPlayer::vf25 */
unsigned int F_00788a60(void)
{
  GEN_ENTER(0x788a60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00788a70 */
uint F_00788a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x788a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != *(uint *)((int)this + 0x200)) {
    *(uint *)((int)this + 0x200) = param_1;
    uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x1fc),*(undefined4 *)(&REFG(undefined, 0x10c0b18) + param_1 * 4))
    ;
  }
  return uVar1;
}

/* ref: FUN_00788aa0 */
uint F_00788aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x788aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_ecx;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  in_ecx = F_00559ba0(*param_2);
  uVar2 = (param_1 >> 2) + *(int *)((int)this + 0x22c);
  if (0x15 < uVar2) {
    uVar2 = uVar2 - 0x16;
  }
  uVar1 = 0;
  if (in_ecx != 0) {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + ((param_1 & 3) + uVar2 * 4) * 4 + 0x238)));
    this_00 = (undefined *)F_00559ba0(in_ecx);
    uVar1 = F_00584110(this_00,uVar3);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCreditPlayer::vf54 */
uint F_00788b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x788b20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  uint uStack_8;
  
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x208));
  uStack_8 = (uint)uVar4;
  dVar2 = (double)(int)param_2;
  if ((int)param_2 < 0) {
    dVar2 = dVar2 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar2 = dVar2 * REFG(double, 0x1088108);
  fVar6 = F_0055dfd0(param_1);
  fVar1 = (float10)REFG(double, 0x1088108);
  uVar4 = F_0055a030(*(undefined4 *)(param_1 + 0x208));
  dVar3 = (double)param_3;
  if (param_3 < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar3 = dVar3 * REFG(double, 0x1088108);
  fVar7 = F_0055dfd0(param_1);
  uVar5 = F_00559da0(*(undefined4 *)(param_1 + 0x208),
                       ((float)GEN_TOF(((float10)dVar2 - (fVar6 * (float10)uStack_8) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 - (fVar7 * (float10)uVar4) * (float10)REFG(double, 0x1088108)))));
  return uVar5;
}

/* ref: Client::UI2::AddonCreditScroll::vf36 */
uint F_00788be0(unsigned int gen_a0)
{
  GEN_ENTER(0x788be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x440) = 1;
  return uVar1;
}

/* ref: Client::UI2::AddonCreditScroll::vf39 */
unsigned int F_00788c00(unsigned int gen_a0)
{
  GEN_ENTER(0x788c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x180) == 5) {
    F_00579170((undefined *)this);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditScroll::vf41 */
byte F_00788c10(unsigned int gen_a0)
{
  GEN_ENTER(0x788c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CreditStaff",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCreditScroll::vf48 */
uint F_00788c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x788c20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(in_ecx + 0x180) == 6);
  if (*(char *)(in_ecx + 0x444) != '\0') {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}

/* ref: FUN_00788c40 */
byte F_00788c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x788c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 1: ;
  case 4: ;
  case 5: ;
    if (*(char *)(param_1 + 1) == '\0') {
      *(bool *)((int)this + 0x43c) = *(char *)((int)this + 0x43c) == '\0';
      *(undefined4 *)((int)this + 0x440) = 1;
      return 1;
    }
    break;
  case 2: ;
  case 3: ;
    if (*(char *)(param_1 + 1) == '\0') {
      F_005a9130(this,0);
      return 1;
    }
    break;
  case 10: ;
    if ((*(char *)(param_1 + 1) == '\0') && (*(char *)((int)this + 0x43c) == '\0')) {
      bVar1 = 1;
      *(int *)((int)this + 0x440) = *(int *)((int)this + 0x440) + 1;
      if (3 < *(int *)((int)this + 0x440)) {
        *(undefined4 *)((int)this + 0x440) = 1;
      }
    }
  }
  return bVar1;
}

/* ref: Client::UI2::AddonCreditScroll::vf25 */
unsigned int F_00788cf0(void)
{
  GEN_ENTER(0x788cf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonCreditScroll::vf2 */
unsigned int F_00788d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x788d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  
  if (((*(int *)(this + 0x180) == 5) && ((short)param_1 == 0xc)) &&
     (*(char *)(param_4 + 0x14) == '\0')) {
    bVar1 = F_00788c40(this,param_4);
    if (bVar1 != 0) {
      F_00557670(param_3,0);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditScroll::vf54 */
uint F_00788d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x788d40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 fVar1;
  float10 fVar2;
  ushort uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  uint uStack_8;
  
  uVar3 = F_0055a020(*(undefined4 *)(param_1 + 0x3b4));
  uStack_8 = (uint)uVar3;
  fVar5 = F_0055dfd0(param_1);
  fVar1 = (float10)REFG(double, 0x1088108);
  uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x3b4));
  fVar6 = F_0055dfd0(param_1);
  fVar2 = (float10)REFG(double, 0x1088108);
  F_00559eb0(*(undefined4 *)(param_1 + 0x3b4),
               (int)((float10)(param_2 >> 1) - (fVar5 * (float10)uStack_8) * fVar1) & 0xffff);
  uVar4 = F_00559f40(*(undefined4 *)(param_1 + 0x3b4),
                       (int)((float10)(param_3 >> 1) - (fVar6 * (float10)uVar3) * fVar2) & 0xffff);
  return uVar4;
}

/* ref: FUN_00788e00 */
uint F_00788e00(unsigned int gen_a0)
{
  GEN_ENTER(0x788e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)((int)this + uVar1 + 0x354) == '\0') {
      *(undefined1 *)(uVar1 + 0x354 + (int)this) = 1;
      F_0055a300(*(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x1d4),1);
      return *(uint *)((int)this + uVar1 * 4 + 0x1d4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x18);
  return 0;
}

/* ref: FUN_00788e40 */
uint F_00788e40(unsigned int gen_a0)
{
  GEN_ENTER(0x788e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)((int)this + uVar1 + 0x36c) == '\0') {
      *(undefined1 *)(uVar1 + 0x36c + (int)this) = 1;
      F_0055a300(*(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x234),1);
      return *(uint *)((int)this + uVar1 * 4 + 0x234);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x18);
  return 0;
}

/* ref: FUN_00788e80 */
uint F_00788e80(unsigned int gen_a0)
{
  GEN_ENTER(0x788e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)((int)this + uVar1 + 900) == '\0') {
      *(undefined1 *)(uVar1 + 900 + (int)this) = 1;
      F_0055a300(*(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x294),1);
      return *(uint *)((int)this + uVar1 * 4 + 0x294);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x30);
  return 0;
}

/* ref: FUN_00788ec0 */
uint F_00788ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x788ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int * piVar3;
  
  uVar2 = 0;
  piVar3 = (int *)((int)this + 0x1d4);
  do {
    if (*piVar3 == param_1) {
      *(undefined1 *)(uVar2 + 0x354 + (int)this) = 0;
      bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + uVar2 * 4 + 0x1d4),0);
      return CONCAT31(extraout_var,bVar1);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0x18);
  uVar2 = 0;
  piVar3 = (int *)((int)this + 0x234);
  do {
    if (*piVar3 == param_1) {
      *(undefined1 *)(uVar2 + 0x36c + (int)this) = 0;
      bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + uVar2 * 4 + 0x234),0);
      return CONCAT31(extraout_var_00,bVar1);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0x18);
  uVar2 = 0;
  piVar3 = (int *)((int)this + 0x294);
  do {
    if (*piVar3 == param_1) {
      *(undefined1 *)(uVar2 + 900 + (int)this) = 0;
      bVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + uVar2 * 4 + 0x294),0);
      return CONCAT31(extraout_var_01,bVar1);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0x30);
  return uVar2;
}

/* ref: FUN_00788f70 */
uint F_00788f70(unsigned int gen_a0)
{
  GEN_ENTER(0x788f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x841;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x20;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c57bc));
  *(undefined2 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x198) = 0xffffffff;
  *(undefined4 *)((int)this + 0x19e) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditCast::vf36 */
uint F_00789000(unsigned int gen_a0)
{
  GEN_ENTER(0x789000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x180) = 0;
  return uVar1;
}

/* ref: Client::UI2::AddonCreditCast::vf37 */
uint F_00789020(unsigned int gen_a0)
{
  GEN_ENTER(0x789020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    F_0050c620(*(int *)(this + 0x184),0,0);
    *(undefined4 *)(this + 0x184) = 0;
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_00406b30(*(int *)(this + 0x18c));
    *(undefined4 *)(this + 0x18c) = 0;
  }
  *(undefined4 *)(this + 0x180) = 0;
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCreditCast::vf39 */
unsigned int F_00789080(unsigned int gen_a0)
{
  GEN_ENTER(0x789080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x19c] != (undefined1)0x0) {
    F_00579170((undefined *)this);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditCast::vf41 */
byte F_00789090(unsigned int gen_a0)
{
  GEN_ENTER(0x789090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CreditCast",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCreditCast::vf48 */
byte F_007890a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7890a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(int *)(in_ecx + 0x180) == 3;
}

/* ref: Client::UI2::AddonCreditCast::vf25 */
unsigned int F_007890b0(void)
{
  GEN_ENTER(0x7890b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonCreditCast::vf2 */
unsigned int F_007890c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7890c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_007890d0 */
uint F_007890d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7890d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(param_1 + 0x1a4))));
  fVar4 = (float10)fVar1;
  *(float *)(param_1 + 0x1a4) = fVar1;
  if (*(int *)(param_1 + 0x198) != -1) {
    *(undefined1 *)(param_1 + 0x19c) = 1;
  }
  sVar2 = 0;
  if (0 < *(short *)(param_1 + 0x188)) {
    do {
      if (((float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x18c) + sVar2 * 4))) <= fVar4) &&
         (fVar5 = (float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x18c) + sVar2 * 4 + 2))),
         (!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 < fVar4))) {
        iVar3 = (int)sVar2;
        if (*(int *)(param_1 + 0x198) != iVar3) {
          F_0059d640(*(undefined * PTR32 *)(param_1 + 400),0x65);
          F_0059d640(*(undefined * PTR32 *)(param_1 + 0x194),iVar3 + 0x65);
          *(int *)(param_1 + 0x198) = iVar3;
        }
        break;
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < *(short *)(param_1 + 0x188));
  }
  if ((*(int *)(param_1 + 0x198) != -1) &&
     ((float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x18c) + 2 + *(short *)(param_1 + 0x198) * 4))) <
      (float10)*(float *)(param_1 + 0x1a4))) {
    F_0059d640(*(undefined * PTR32 *)(param_1 + 400),0x66);
    *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  }
  if ((float10)(int)*((short *)GEN_TOP((*(uint *)(param_1 + 0x18c) + 2 +
                              (short)(*(short *)(param_1 + 0x188) + -1) * 4))) +
      (float10)*(double *)&REFG(undefined, 0x10947f0) < (float10)*(float *)(param_1 + 0x1a4)) {
    *(undefined4 *)(param_1 + 0x180) = 3;
  }
  return *(uint *)(param_1 + 0x18c);
}

/* ref: Client::UI2::AddonCreditCast::vf54 */
uint F_00789200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789200u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  uint local_14;
  
  fVar6 = (float10)(int)param_2;
  if ((int)param_2 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)fVar6;
  local_14 = (uint)(longlong)TRUNC(fVar1 * gen_bits2f(param_1[0x6a]));
  if (param_3 < local_14) {
    fVar6 = (float10)(int)param_3;
    if ((int)param_3 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1,0);
    fVar6 = (float10)(float)fVar6 / (float10)(uVar4 & 0xffff);
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,0);
    fVar6 = (float10)fVar1 / (float10)(uVar4 & 0xffff);
  }
  F_0056b4b0(param_1,(float)fVar6);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,0);
  dVar2 = (double)fVar1 * REFG(double, 0x1088108);
  fVar7 = F_0055df60(param_1);
  fVar6 = (float10)REFG(double, 0x1088108);
  uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1,0);
  dVar3 = (double)(int)param_3;
  if ((int)param_3 < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar3 = dVar3 * REFG(double, 0x1088108);
  fVar8 = F_0055df60(param_1);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))
                    (param_1,(int)((float10)dVar2 - (fVar7 * (float10)(uVar4 & 0xffff)) * fVar6) &
                             0xffff,
                     (int)((float10)dVar3 -
                          (fVar8 * (float10)(uVar5 & 0xffff)) * (float10)REFG(double, 0x1088108)) & 0xffff);
  return uVar4;
}

/* ref: FUN_00789350 */
uint F_00789350(unsigned int gen_a0)
{
  GEN_ENTER(0x789350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x841;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined2 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x20;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x20;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c58bc));
  *(undefined4 *)((int)this + 0x194) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditEnd::vf36 */
uint F_007893d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7893d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x180) = 0;
  return uVar1;
}

/* ref: Client::UI2::AddonCreditEnd::vf37 */
uint F_007893f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7893f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(this + 0x180) = 0;
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCreditEnd::vf38 */
uint F_00789400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x789400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  F_005a2370(param_1,param_2);
  uVar2 = *(uint *)(param_1 + 0x180);
  if (uVar2 == 1) {
    bVar1 = F_00577b50(*(undefined * PTR32 *)(param_1 + 0x188));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      bVar1 = F_00577b50(*(undefined * PTR32 *)(param_1 + 0x18c));
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) {
        *(undefined4 *)(param_1 + 0x180) = 2;
        return uVar2;
      }
    }
  }
  else if (uVar2 == 2) {
    *(float *)(param_1 + 0x194) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x194) + (float10)param_2)));
    if (*(char *)(param_1 + 0x19c) == '\0') {
      uVar2 = F_0059d640(*(undefined * PTR32 *)(param_1 + 0x184),0x65);
      *(undefined1 *)(param_1 + 0x19c) = 1;
      return uVar2;
    }
    if (*(char *)(param_1 + 0x19d) == '\0') {
      uVar2 = F_00559cf0(*(undefined4 *)(param_1 + 0x184));
      if ((short)uVar2 == 0x66) {
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
        (*(undefined4 *)(gen_frame + 0x18)) = 0xf425e;
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))
                  (*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
        F_005a2670(((undefined1 *)(gen_frame + 0xc)));
        *(undefined1 *)(param_1 + 0x19d) = 1;
        uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCreditEnd::vf39 */
unsigned int F_00789500(unsigned int gen_a0)
{
  GEN_ENTER(0x789500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x180) == 2) {
    F_00579170((undefined *)this);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditEnd::vf41 */
byte F_00789510(unsigned int gen_a0)
{
  GEN_ENTER(0x789510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"CreditEnd",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonCreditEnd::vf44 */
uint F_00789520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined * pAVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar2;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  uVar2 = F_0055e360(this,2);
  *(uint *)(this + 0x188) = uVar2;
  uVar2 = F_0055e360(this,3);
  *(uint *)(this + 0x18c) = uVar2;
  *(undefined4 *)(this + 0x180) = 1;
  *(undefined2 *)(this + 0x19c) = 0;
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar2 + 0x14));
  pAVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 2;
  F_00591c00(*(undefined * PTR32 *)(this + 0x188),0x1d6b6,pAVar3);
  F_00591c00(*(undefined * PTR32 *)(this + 0x18c),0x1d6b7,pAVar3);
  F_00568380(*(undefined * PTR32 *)(this + 0x184),0x41,0,this,0,0);
  uVar2 = F_0055dcb0();
  uVar1 = *(undefined4 *)(uVar2 + 0x238);
  uVar2 = F_0055dcb0();
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,*(undefined4 *)(uVar2 + 0x234),uVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonCreditEnd::vf48 */
byte F_00789610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789610u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(int *)(in_ecx + 0x180) == 3;
}

/* ref: Client::UI2::AddonCreditEnd::vf25 */
unsigned int F_00789620(void)
{
  GEN_ENTER(0x789620u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonCreditEnd::vf2 */
unsigned int F_00789630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x789630u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  if ((((short)param_2 == 0x41) && (*(int *)(in_ecx + 0x180) == 2)) &&
     (*(char *)(param_5 + 2) == '\x01')) {
    *(undefined4 *)(in_ecx + 0x180) = 3;
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditEnd::vf54 */
uint F_00789660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789660u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  uint local_14;
  
  fVar6 = (float10)(int)param_2;
  if ((int)param_2 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)fVar6;
  local_14 = (uint)(longlong)TRUNC(fVar1 * gen_bits2f(param_1[0x66]));
  if (param_3 < local_14) {
    fVar6 = (float10)(int)param_3;
    if ((int)param_3 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1,0);
    fVar6 = (float10)(float)fVar6 / (float10)(uVar4 & 0xffff);
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,0);
    fVar6 = (float10)fVar1 / (float10)(uVar4 & 0xffff);
  }
  F_0056b4b0(param_1,(float)fVar6);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,0);
  dVar2 = (double)fVar1 * REFG(double, 0x1088108);
  fVar7 = F_0055df60(param_1);
  fVar6 = (float10)REFG(double, 0x1088108);
  uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1,0);
  dVar3 = (double)(int)param_3;
  if ((int)param_3 < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar3 = dVar3 * REFG(double, 0x1088108);
  fVar8 = F_0055df60(param_1);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))
                    (param_1,(int)((float10)dVar2 - (fVar7 * (float10)(uVar4 & 0xffff)) * fVar6) &
                             0xffff,
                     (int)((float10)dVar3 -
                          (fVar8 * (float10)(uVar5 & 0xffff)) * (float10)REFG(double, 0x1088108)) & 0xffff);
  return uVar4;
}

/* ref: FUN_007897b0 */
uint F_007897b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7897b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c59bc));
  *(undefined1 *)((int)this + 0x180) = 0;
  F_0055e2a0(this,0x8000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonHud::vf44 */
uint F_00789810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  this[0x180] = (undefined1)0x1;
  return uVar1;
}

/* ref: Client::UI2::AddonHud::vf38 */
unsigned int F_00789830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x789830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0x180] != (undefined1)0x0) {
    AVar1 = this[0x13a];
    uVar3 = F_0055dcb0();
    bVar2 = F_005800a0(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    if (bVar2 != 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xf;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
      this[0x180] = (undefined1)0x0;
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  return 0;
}

/* ref: FUN_00789890 */
uint F_00789890(unsigned int gen_a0)
{
  GEN_ENTER(0x789890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5abc));
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  F_0055e2a0(this,0x4000002,1);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 10;
  return (uint)this;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf2 */
uint F_007898f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7898f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 6) {
    if (param_2 == 1) {
      (*(undefined4 *)(gen_frame + 0x30)) = 3;
      (*(uint *)(gen_frame + 0x34)) = 0x11;
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x30)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x8)));
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x30)));
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar1;
    }
    uVar1 = param_2;
    if (param_2 == 0) {
      (*(undefined4 *)(gen_frame + 0x30)) = 3;
      (*(uint *)(gen_frame + 0x34)) = 0x12;
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x30)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x30)));
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar1;
    }
  }
  else {
    if (uVar1 == 7) {
      (*(undefined4 *)(gen_frame + 0x30)) = 3;
      (*(uint *)(gen_frame + 0x34)) = 0xffffffff;
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x10)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x30)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x10)));
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x30)));
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar1;
    }
    uVar1 = uVar1 - 9;
    if (uVar1 == 0) {
      if (param_2 == 0) {
        (*(undefined4 *)(gen_frame + 0x28)) = 3;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0x10;
        (*(undefined4 *)(gen_frame + 0x30)) = 4;
        (*(uint *)(gen_frame + 0x34)) = (uint)*(byte *)(param_4 + 6);
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x28)));
        puVar2 = &(*(uint *)(gen_frame + 0x38));
        iVar3 = 1;
        do {
          puVar2 = puVar2 + -2;
          uVar1 = F_005a2670(puVar2);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar1;
      }
      uVar1 = param_2 - 1;
      if (uVar1 == 0) {
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 600);
        (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(this + 0x25c);
        (*(uint *)(gen_frame + 0x34)) = (uint)*(byte *)(param_4 + 6);
        iVar3 = 3;
        (*(undefined4 *)(gen_frame + 0x18)) = 3;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0x11;
        (*(undefined4 *)(gen_frame + 0x20)) = 4;
        (*(undefined4 *)(gen_frame + 0x28)) = 4;
        (*(undefined4 *)(gen_frame + 0x30)) = 4;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
        puVar2 = &(*(uint *)(gen_frame + 0x38));
        do {
          puVar2 = puVar2 + -2;
          uVar1 = F_005a2670(puVar2);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf36 */
uint F_00789ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x789ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_0055dc60((undefined *)this);
  pvVar1 = F_00c48350(this + 0x180,0,0xd0);
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  return (uint)pvVar1;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf37 */
uint F_00789b10(unsigned int gen_a0)
{
  GEN_ENTER(0x789b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,0,8,0);
  F_005a92d0(this,1,9,0);
  F_005a92d0(this,0,0x13,0);
  F_005a92d0(this,1,0x15,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf41 */
byte F_00789b50(unsigned int gen_a0)
{
  GEN_ENTER(0x789b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TargetInfo",0,6);
  return bVar1;
}

/* ref: FUN_00789b60 */
byte F_00789b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789b60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (((*(int *)&gen_args[1]) != 0) && ((*(int *)&gen_args[2]) != 0)) {
    piVar1 = *(int * PTR32 *)((*(int *)&gen_args[1]) + 0x20);
    iVar2 = *piVar1;
    bVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))) != iVar2;
    iVar3 = piVar1[2];
    iVar4 = piVar1[0x24];
    uVar5 = **(undefined4 * PTR32 *)((*(int *)&gen_args[2]) + 0x20);
    uVar6 = (*(undefined4 * PTR32 *)((*(int *)&gen_args[2]) + 0x20))[1];
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))) = iVar2;
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar7);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))),uVar5);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),uVar6);
    if (*((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x198))) + 0xe4))) != iVar3) {
      F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x198))),iVar3,(*(int *)&gen_args[1]));
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))),(uint)(0 < iVar4));
    F_00591c00(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))),iVar4,0);
    return bVar7;
  }
  return 0;
}

/* ref: FUN_00789c10 */
uint F_00789c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x789c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 extraout_var = 0;
  
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(uVar5 + 0x88);
    uVar2 = *(uint *)(uVar5 + 0x8c);
    if (*(int *)((int)this + 0x188) != 0) {
      uVar5 = F_005612d0(uVar1);
      F_0055aa30(*(undefined4 *)((int)this + 0x188),uVar5);
      uVar5 = F_005612d0(uVar2);
      uVar5 = F_0055ab90(*(undefined4 *)((int)this + 0x188),uVar5);
    }
    if (*(int *)((int)this + 0x18c) != 0) {
      uVar5 = F_005612d0(uVar1);
      F_0055aa30(*(undefined4 *)((int)this + 0x18c),uVar5);
      uVar5 = F_005612d0(uVar2);
      uVar5 = F_0055ab90(*(undefined4 *)((int)this + 0x18c),uVar5);
    }
    if (*(int *)((int)this + 400) != 0) {
      uVar5 = F_005612d0(uVar1);
      F_0055aa30(*(undefined4 *)((int)this + 400),uVar5);
      uVar5 = F_005612d0(uVar2);
      uVar5 = F_0055ab90(*(undefined4 *)((int)this + 400),uVar5);
    }
    if (*(undefined * PTR32 *)((int)this + 0x194) != (undefined *)0x0) {
      uVar4 = F_0055a170(*(undefined * PTR32 *)((int)this + 0x194),uVar2 & 0xff,(int)uVar2 >> 8 & 0xff,
                           (int)uVar2 >> 0x10 & 0xff);
      uVar5 = CONCAT22(extraout_var,uVar4);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0x198);
    if (this_00 != (undefined *)0x0) {
      uVar3 = *(undefined4 *)((int)this + 0x19c);
      F_00561aa0(this_00,uVar1);
      F_00561b40(this_00,uVar1);
      uVar5 = F_00561b90(uVar2,uVar3);
    }
  }
  return uVar5;
}

/* ref: FUN_00789d40 */
uint F_00789d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789d40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar4 = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x1c))) == 0) {
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c4),0);
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c0),0);
      bVar3 = F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c8),0);
      return CONCAT31(extraout_var,bVar3);
    }
    iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x30)));
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + 4)));
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c4),1);
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c0),1);
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x1c8),1);
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x1c0),uVar2);
    uVar4 = F_00568230(*(undefined4 *)(param_1 + 0x1c4),
                         (float)((float10)iVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  }
  return uVar4;
}

/* ref: FUN_00789e00 */
uint F_00789e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint in_EAX = 0;
  
  if ((param_1 != 0) && (in_EAX = 0, param_2 != 0)) {
    in_EAX = F_00584110(*(undefined * PTR32 *)((int)this + 0x1d0),
                          *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8))));
  }
  return in_EAX;
}

/* ref: FUN_00789e30 */
uint F_00789e30(unsigned int gen_a0)
{
  GEN_ENTER(0x789e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  *(undefined4 *)((int)this + 0x268) = 0;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5bbc));
  *(byte *)((int)this + 0xfb) = (bVar1 ^ *(byte *)((int)this + 0xfb)) & 0x5f ^ bVar1 | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  F_0055e2a0(this,2,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonTargetCursor::vf2 */
unsigned int F_00789eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x789eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::UI2::AddonTargetCursor::vf36 */
uint F_00789ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x789ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_0055dc60((undefined *)this);
  pvVar1 = F_00c48350(this + 0x180,0,0xe8);
  return (uint)pvVar1;
}

/* ref: Client::UI2::AddonTargetCursor::vf37 */
uint F_00789ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x789ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x17,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonTargetCursor::vf41 */
byte F_00789f00(unsigned int gen_a0)
{
  GEN_ENTER(0x789f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TargetCursor",0,6);
  return bVar1;
}

/* ref: FUN_00789f10 */
byte F_00789f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x789f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  if (6 < param_1) {
    return 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 0x24c);
  if ((puVar1 != (undefined4 *)0x0) && ((puVar1[4] != param_2 || ((char)param_3 != '\0')))) {
    puVar1[4] = param_2;
    if (param_2 == 0) {
      if (puVar1[6] != -1) {
        F_0059d640((undefined *)*puVar1,puVar1[6]);
        return 1;
      }
      F_0055a300((undefined *)*puVar1,0);
    }
    else if (param_2 < 3) {
      if (puVar1[5] == -1) {
        F_0055a300((undefined *)*puVar1,1);
      }
      else {
        F_0059d640((undefined *)*puVar1,puVar1[5]);
      }
      if ((undefined *)puVar1[3] != (undefined *)0x0) {
        F_00559c60((undefined *)puVar1[3],1);
        return 1;
      }
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00789fb0 */
uint F_00789fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x789fb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if ((param_2 < 7) &&
     (puVar1 = *(undefined4 * PTR32 *)(param_1 + 0x24c + param_2 * 4), puVar1 != (undefined4 *)0x0)) {
    F_0055a730(*puVar1,&(*(float *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x8)));
    uVar2 = F_00559da0(*puVar1,((float)GEN_TOF(((float10)((int)param_3 >> 0x10) - (float10)(*(float *)(gen_frame + 0x4))))),
                         ((float)GEN_TOF(((float10)(param_3 & 0xffff) - (float10)(*(float *)(gen_frame + 0x8))))));
  }
  return uVar2;
}

/* ref: FUN_0078a020 */
uint F_0078a020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x78a020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  ushort uVar2;
  undefined2 extraout_var = 0;
  uint uVar3;
  
  uVar3 = param_1;
  if ((param_1 < 7) && (iVar1 = *(int *)((int)this + param_1 * 4 + 0x24c), iVar1 != 0)) {
    F_0055a170(*(undefined * PTR32 *)(iVar1 + 4),(param_2 & 0xff) - 0xa0,(param_2 >> 8 & 0xff) - 0xa0,
                 (param_2 >> 0x10 & 0xff) - 0xa0);
    uVar2 = F_0055a170(*(undefined * PTR32 *)(iVar1 + 8),param_3 & 0xff,param_3 >> 8 & 0xff,
                         param_3 >> 0x10 & 0xff);
    uVar3 = CONCAT22(extraout_var,uVar2);
  }
  return uVar3;
}

/* ref: FUN_0078a0a0 */
uint F_0078a0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78a0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0x2c);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)((int)this + 0x3a) + *(int *)(uVar1 + 4);
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = F_00578ee0((undefined *)((int)this + 0x24),uVar2);
      uVar1 = F_0055a6b0(uVar1,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonTargetCursor::vf28 */
byte F_0078a0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0xf9] & 1) == 0) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 600);
  if (((puVar2 == (undefined4 *)0x0) || (puVar2[4] == 0)) ||
     (uVar1 = F_0055a2d0(*puVar2), (char)uVar1 == '\0')) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0x254);
  }
  if (((puVar2 != (undefined4 *)0x0) && (puVar2[4] != 0)) &&
     (uVar1 = F_0055a2d0(*puVar2), (char)uVar1 != '\0')) {
    F_0055a000((undefined *)*puVar2,((short *)(gen_frame + 0x8)),((short *)(gen_frame + 0x4)));
    F_00559fb0((undefined *)*puVar2,param_1,param_2);
    *param_1 = *param_1 + ((short *)(gen_frame + 0x8))[0];
    *param_2 = *param_2 + ((short *)(gen_frame + 0x4))[0];
    return 1;
  }
  return 0;
}

/* ref: FUN_0078a170 */
uint F_0078a170(unsigned int gen_a0)
{
  GEN_ENTER(0x78a170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5cbc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(byte *)((int)this + 0xfb) = (bVar1 ^ *(byte *)((int)this + 0xfb)) & 0x5f ^ bVar1 | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  F_0055e2a0(this,2,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf36 */
uint F_0078a1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x78a1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  return 0;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf37 */
uint F_0078a220(unsigned int gen_a0)
{
  GEN_ENTER(0x78a220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x17,0);
  *(undefined4 *)(this + 0x180) = 0;
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf41 */
byte F_0078a240(unsigned int gen_a0)
{
  GEN_ENTER(0x78a240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TargetCursorGrand",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf44 */
uint F_0078a250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  *(undefined4 *)(this + 0x94) = 0;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this,3);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e360(this,4);
  *(uint *)(this + 0x18c) = uVar1;
  *(undefined4 *)(this + 0x180) = 0;
  F_0059d640(*(undefined * PTR32 *)(this + 0x184),0x66);
  uVar1 = F_005a91d0(this,1,0x17);
  return uVar1;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf47 */
uint F_0078a2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a2c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 extraout_var = 0;
  undefined2 extraout_var_00 = 0;
  float fVar6;
  
  iVar1 = *(int *)(param_2 + 0x5c);
  uVar5 = param_2;
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x94))) == 0) {
      if (param_1[0x60] == 1) {
        uVar5 = F_0059d640((undefined *)param_1[0x61],4);
        param_1[0x60] = 0;
        return uVar5;
      }
      uVar5 = (uint)param_1[0x3d] >> 0x14 & 0xf;
      if ((uVar5 == 3) || (uVar5 == 2)) {
        uVar4 = F_00559c40(param_1[0x61]);
        uVar5 = CONCAT22(extraout_var,uVar4);
        if ((char)uVar4 == '\0') {
          uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,0,0);
          return uVar5;
        }
      }
    }
    else {
      uVar5 = (uint)param_1[0x3d] >> 0x14 & 0xf;
      if ((uVar5 == 5) || (uVar5 == 4)) {
        ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,0);
      }
      if (param_1[0x60] == 0) {
        F_0059d640((undefined *)param_1[0x61],0x65);
        param_1[0x60] = 1;
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      uVar5 = *(uint *)(iVar1 + 0x98);
      uVar2 = *(uint *)(iVar1 + 0xa0);
      uVar3 = *(uint *)(iVar1 + 0x9c);
      uVar4 = F_0055a030(param_1[0x61]);
      fVar6 = ((float)GEN_TOF(((float10)(uVar5 & 0xffff) - (float10)uVar4 * (float10)REFG(double, 0x1088108))));
      uVar4 = F_0055a020(param_1[0x61]);
      F_00559da0(param_1[0x61],
                   ((float)GEN_TOF(((float10)(uVar5 >> 0x10) - (float10)uVar4 * (float10)REFG(double, 0x1088108)))),fVar6)
      ;
      F_0055a170((undefined *)param_1[0x62],(uVar3 & 0xff) - 0xa0,(uVar3 >> 8 & 0xff) - 0xa0,
                   (uVar3 >> 0x10 & 0xff) - 0xa0);
      uVar4 = F_0055a170((undefined *)param_1[99],uVar2 & 0xff,uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff);
      uVar5 = CONCAT22(extraout_var_00,uVar4);
    }
  }
  return uVar5;
}

/* ref: FUN_0078a4a0 */
uint F_0078a4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x78a4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5dbc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  F_0058d480((int)this + 400);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x82;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined2 *)((int)this + 0x1d0) = 0;
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x77 ^
       *(byte *)((int)this + 0xf9) | 8;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined1 *)((int)this + 0x1d2) = 0;
  F_0055e2a0(this,2,1);
  return (uint)this;
}

/* ref: FUN_0078a550 */
uint F_0078a550(unsigned int gen_a0)
{
  GEN_ENTER(0x78a550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5dbc));
  F_0058d4b0((undefined *)((int)this + 400));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonBattleTalk::vf37 */
uint F_0078a580(unsigned int gen_a0)
{
  GEN_ENTER(0x78a580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x25,0);
  F_005a92d0(this,0,0x22,0);
  F_0056c5f0(this + 400);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonBattleTalk::vf41 */
byte F_0078a5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x78a5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"BattleTalk",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBattleTalk::vf44 */
uint F_0078a5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  *(undefined4 *)(this + 0x94) = 0;
  F_005a91d0(this,1,0x25);
  F_005a91d0(this,0,0x22);
  uVar2 = F_0055e340(this,4);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e340(this,5);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x188) = uVar2;
  this_00 = (undefined *)F_0055e2f0(this,6);
  *(undefined * PTR32 *)(this + 0x18c) = this_00;
  F_0055adf0(this_00,((undefined1 *)(gen_frame + 0x4)),((short *)(gen_frame + 0x8)),0);
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x184));
  *(ushort *)(this + 0x1d0) = ((short *)(gen_frame + 0x8))[0] - uVar1;
  uVar1 = F_00567f90(*(undefined * PTR32 *)(this + 0x188),0x65);
  *(uint *)(this + 0x1c0) = (uint)uVar1;
  uVar2 = F_00567ff0(*(undefined * PTR32 *)(this + 0x188),0x65);
  *(uint *)(this + 0x1c4) = uVar2 & 0xffff;
  return uVar2 & 0xffff;
}

/* ref: Client::UI2::AddonBattleTalk::vf54 */
uint F_0078a690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x50))(this,0);
  iVar4 = param_1 - (uVar3 & 0xffff);
  dVar2 = (double)iVar4;
  if (iVar4 < 0) {
    dVar2 = dVar2 + *(double *)&REFG(double, 0x10b8de8);
  }
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x30))(this,(int)(dVar2 * REFG(double, 0x1088108)) & 0xffff);
  return uVar3;
}

/* ref: FUN_0078a6e0 */
uint F_0078a6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x78a6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_0059d670(*(undefined * PTR32 *)((int)this + 0x188),0x11);
  (*(undefined4 *)(gen_frame + 0x4)) = 5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00595110((int)this + 400,100,*(undefined4 *)((int)this + 0x90),&(*(undefined4 *)(gen_frame + 0x4)),1,REFG(float, 0x1088068));
  F_0056c650((undefined *)((int)this + 400),0x3d,0,this,0,0);
  uVar1 = F_0058d530((undefined *)((int)this + 400));
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  return uVar1;
}

/* ref: FUN_0078a770 */
uint F_0078a770(unsigned int gen_a0)
{
  GEN_ENTER(0x78a770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x90),0);
  *(undefined1 *)((int)this + 0x1d2) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x12;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonScreenInfo::vf54 */
unsigned int F_0078a7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  undefined * pAVar2;
  int iVar3;
  
  pAVar2 = this + 0x22c;
  iVar3 = 0x12;
  do {
    piVar1 = *(int * PTR32 *)pAVar2;
    if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0xf9) & 1) != 0)) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x100))(piVar1);
    }
    pAVar2 = pAVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_0078a850 */
uint F_0078a850(unsigned int gen_a0)
{
  GEN_ENTER(0x78a850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_005609d0((undefined *)((int)this + 0x1c8),0x3a);
  if (bVar1 == 0) {
    F_0056c440((undefined *)((int)this + 0x1c8),0x3a,0,this,0);
    uVar2 = F_00592380((undefined *)((int)this + 0x1c8));
    return uVar2;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0078a890 */
uint F_0078a890(unsigned int gen_a0)
{
  GEN_ENTER(0x78a890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  
  bVar1 = F_005609d0((undefined *)((int)this + 0x1c8),0x3a);
  if (bVar1 != 0) {
    F_00588be0((undefined *)((int)this + 0x1c8),0x3a,0,this);
    F_005609b0((int)this + 0x1c8);
    return extraout_EAX;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0078a8d0 */
uint F_0078a8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78a8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: FUN_0078a930 */
unsigned int F_0078a930(unsigned int gen_a0)
{
  GEN_ENTER(0x78a930u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if (param_1 != (undefined *)0x0) {
    F_0058f5b0(param_1);
  }
  return 0;
}

/* ref: FUN_0078a950 */
uint F_0078a950(unsigned int gen_a0)
{
  GEN_ENTER(0x78a950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c5ebc));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonAreaText::vf41 */
byte F_0078a9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x78a9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"AreaText",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonAreaText::vf63 */
uint F_0078a9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78a9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 uVar5;
  uint * this_00;
  int iVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (3 < param_1) {
    uVar5 = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    uVar2 = F_0055dcb0();
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if ((*(byte *)(param_2 + 0x18) & 0xf) != 0) {
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = 10000;
    uVar3 = F_0055ab00(*((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x84))));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    bVar1 = F_0055ab50(*((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x84))));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    pbVar4 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x8)))));
    if ((*pbVar4 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(pbVar4 + 4);
    }
    F_0058bba0(*(undefined * PTR32 *)(this + 0x188),uVar5);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
    F_00559c60(*(undefined * PTR32 *)(this + 0x184),2);
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: Client::UI2::AddonAreaText::vf65 */
byte F_0078ab50(unsigned int gen_a0)
{
  GEN_ENTER(0x78ab50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonAreaText::vf66 */
uint F_0078ab90(unsigned int gen_a0)
{
  GEN_ENTER(0x78ab90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonGetAction::vf41 */
byte F_0078abd0(unsigned int gen_a0)
{
  GEN_ENTER(0x78abd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GetAction",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGetAction::vf66 */
uint F_0078abe0(unsigned int gen_a0)
{
  GEN_ENTER(0x78abe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[0x188] = (undefined1)0x0;
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: FUN_0078ac10 */
uint F_0078ac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_0059d640(*(undefined * PTR32 *)(param_2 + 0x184),0x66);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf64 */
uint F_0078ac40(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78ac40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x109cac8);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf65 */
byte F_0078acf0(unsigned int gen_a0)
{
  GEN_ENTER(0x78acf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf66 */
uint F_0078ad30(unsigned int gen_a0)
{
  GEN_ENTER(0x78ad30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 400) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 400));
  }
  if (*(undefined * PTR32 *)(this + 0x19c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x19c));
  }
  if (*(undefined * PTR32 *)(this + 0x194) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x194));
  }
  if (*(undefined * PTR32 *)(this + 0x18c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x18c));
  }
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonGrandCompany0::vf41 */
byte F_0078ad90(unsigned int gen_a0)
{
  GEN_ENTER(0x78ad90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GrandCompany0",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonGrandCompany1::vf41 */
byte F_0078ada0(unsigned int gen_a0)
{
  GEN_ENTER(0x78ada0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"GrandCompany1",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonScreenText::vf37 */
uint F_0078adc0(unsigned int gen_a0)
{
  GEN_ENTER(0x78adc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  this_00 = this + 0x184;
  iVar2 = 10;
  do {
    F_0056c5f0(this_00);
    this_00 = this_00 + 0x70;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonScreenText::vf41 */
byte F_0078adf0(unsigned int gen_a0)
{
  GEN_ENTER(0x78adf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Text0",1,6);
  return bVar1;
}

/* ref: FUN_0078ae00 */
double F_0078ae00(unsigned int gen_a0)
{
  GEN_ENTER(0x78ae00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 local_c;
  
  if (*(int *)((int)this + 0x3c) == 1) {
    uVar2 = F_0055a020(*(undefined * PTR32 *)((int)this + 0x50));
    uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48));
    F_00559e70(*(undefined4 *)((int)this + 0x50),
                 ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 100));
    uVar4 = F_00577bc0(*(undefined * PTR32 *)((int)this + 0x50),0,0,REFG(undefined4, 0x108cc50),0);
    iVar5 = uVar4 + uVar2;
    fVar7 = (float10)iVar5;
    if (iVar5 < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar8 = F_00559d60(*(undefined4 *)((int)this + 0x50));
    fVar1 = (float10)REFG(double, 0x1088108);
    uVar4 = F_00577bc0(*(undefined * PTR32 *)((int)this + 0x50),0,0,REFG(undefined4, 0x108cc50),0);
    fVar9 = (float10)(int)uVar4;
    if ((int)uVar4 < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_00559e70(*(undefined4 *)((int)this + 100),
                 ((float)GEN_TOF((((float10)(double)((float10)uVar2 * fVar1 + fVar8) -
                         fVar9 * (float10)REFG(double, 0x1088108)) - (float10)*(double *)&REFG(undefined, 0x10944d0)))));
    uVar6 = CONCAT22((short)((uint)(int)fVar7 >> 0x10),(short)(int)fVar7 + 0x19);
    F_0055a060(*(undefined4 *)((int)this + 0x5c),uVar6);
    F_0055a060(*(undefined4 *)((int)this + 0x60),uVar6);
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x5c));
    uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48));
    F_00559e70(*(undefined4 *)((int)this + 0x5c),
                 ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x60));
    uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48));
    fVar7 = F_00559e70(*(undefined4 *)((int)this + 0x60),
                         ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))))
    ;
    return (double)fVar7;
  }
  uVar4 = F_00577bc0(*(undefined * PTR32 *)((int)this + 0x50),0,0,REFG(undefined4, 0x108cc50),0);
  fVar7 = (float10)(int)uVar4;
  if ((int)uVar4 < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  local_c = CONCAT22((short)((uint)gen_fl2bits((float)(fVar7 + (float10)*(double *)&REFG(undefined, 0x1090718)))
                            >> 0x10),(short)(int)(fVar7 + (float10)*(double *)&REFG(undefined, 0x1090718)));
  F_0055a060(*(undefined4 *)((int)this + 0x5c),local_c);
  F_0055a060(*(undefined4 *)((int)this + 0x60),local_c);
  uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x50));
  uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48));
  F_00559e70(*(undefined4 *)((int)this + 0x50),
               ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
  uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x5c));
  uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48));
  F_00559e70(*(undefined4 *)((int)this + 0x5c),
               ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
  uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x60));
  uVar3 = F_0055a020(*(undefined4 *)((int)this + 0x48));
  fVar7 = F_00559e70(*(undefined4 *)((int)this + 0x60),
                       ((float)GEN_TOF(((float10)(int)((uint)uVar3 - (uint)uVar2) * (float10)REFG(double, 0x1088108)))));
  return (double)fVar7;
}

/* ref: Client::UI2::AddonScreenText::vf66 */
unsigned int F_0078b060(void)
{
  GEN_ENTER(0x78b060u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonScreenText::vf2 */
unsigned int F_0078b070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78b070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined * pAVar2;
  
  if ((short)param_1 == 0x3d) {
    uVar1 = 0;
    pAVar2 = this + 0x180;
    while (pAVar2 != param_2) {
      uVar1 = uVar1 + 1;
      pAVar2 = pAVar2 + 0x70;
      if (9 < uVar1) {
        return 0;
      }
    }
    *(undefined4 *)(pAVar2 + 0x44) = 0;
    *(undefined4 *)(pAVar2 + 0x34) = 0;
    *(undefined4 *)(pAVar2 + 0x40) = 0xffffffff;
    F_0055a200(*(undefined4 *)(pAVar2 + 0x48),0xff);
    F_0055a300(*(undefined * PTR32 *)(pAVar2 + 0x48),0);
    F_00588f80(pAVar2 + 4,0x3d,pAVar2,this,0);
  }
  return 0;
}

/* ref: FUN_0078b0f0 */
unsigned int F_0078b0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78b0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar2 = -1;
  piVar3 = (int *)((int)this + 0x1c0);
  iVar4 = 2;
  do {
    if (((piVar3[-2] == param_1) && (iVar1 = *piVar3, iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    if (((piVar3[0x1a] == param_1) && (iVar1 = piVar3[0x1c], iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    if (((piVar3[0x36] == param_1) && (iVar1 = piVar3[0x38], iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    if (((piVar3[0x52] == param_1) && (iVar1 = piVar3[0x54], iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    if (((piVar3[0x6e] == param_1) && (iVar1 = piVar3[0x70], iVar1 < iVar2)) && (-1 < iVar1)) {
      iVar2 = iVar1;
    }
    piVar3 = piVar3 + 0x8c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_0078b190 */
uint F_0078b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78b190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  uVar2 = 0xffffffff;
  puVar3 = (uint *)((int)this + 0x1c0);
  iVar4 = 2;
  do {
    if (((puVar3[-2] == param_1) && (uVar1 = *puVar3, (int)uVar2 < (int)uVar1)) && ((int)uVar1 < 10)
       ) {
      uVar2 = uVar1;
    }
    if (((puVar3[0x1a] == param_1) && (uVar1 = puVar3[0x1c], (int)uVar2 < (int)uVar1)) &&
       ((int)uVar1 < 10)) {
      uVar2 = uVar1;
    }
    if (((puVar3[0x36] == param_1) && (uVar1 = puVar3[0x38], (int)uVar2 < (int)uVar1)) &&
       ((int)uVar1 < 10)) {
      uVar2 = uVar1;
    }
    if (((puVar3[0x52] == param_1) && (uVar1 = puVar3[0x54], (int)uVar2 < (int)uVar1)) &&
       ((int)uVar1 < 10)) {
      uVar2 = uVar1;
    }
    if (((puVar3[0x6e] == param_1) && (uVar1 = puVar3[0x70], (int)uVar2 < (int)uVar1)) &&
       ((int)uVar1 < 10)) {
      uVar2 = uVar1;
    }
    puVar3 = puVar3 + 0x8c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: FUN_0078b260 */
uint F_0078b260(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78b260u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  
  uVar7 = (*(uint *)&gen_args[0]);
  iVar1 = *(int *)((*(uint *)&gen_args[0]) + 0x38);
  F_00559fe0(*(undefined4 *)((*(uint *)&gen_args[0]) + 0x48),&(*(uint *)&gen_args[0]),&(*(float *)(gen_frame + 0x8)));
  if (iVar1 == 0) {
    dVar4 = (double)(*(float *)&gen_args[1]) * REFG(double, 0x1088108);
    uVar5 = F_0055a020(*(undefined4 *)(uVar7 + 0x48));
    (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)dVar4 -
                     (float10)(float)((float10)uVar5 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0]))))) *
                     (float10)REFG(double, 0x1088108))));
    F_00559e70(*(undefined4 *)(uVar7 + 0x48),(*(float *)&gen_args[1]));
    iVar1 = *(int *)(uVar7 + 0x40);
    fVar2 = (float10)*(double *)&REFG(undefined, 0x10968a0);
    fVar8 = (float10)(*(float *)&gen_args[2]);
    fVar3 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
    uVar5 = F_0055a030(*(undefined4 *)(uVar7 + 0x48));
    (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)(double)(fVar8 * fVar3 + (float10)iVar1 * fVar2) -
                     (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x8))) * (float10)REFG(double, 0x1088108))));
    uVar6 = F_00559f00(*(undefined4 *)(uVar7 + 0x48),(*(float *)&gen_args[1]));
  }
  else {
    if (iVar1 == 1) {
      dVar4 = (double)(*(float *)&gen_args[1]) * *(double *)&REFG(undefined, 0x10919f0);
      uVar5 = F_0055a020(*(undefined4 *)(uVar7 + 0x48));
      (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)dVar4 -
                       (float10)(float)((float10)uVar5 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0]))))) *
                       (float10)REFG(double, 0x1088108))));
      F_00559e70(*(undefined4 *)(uVar7 + 0x48),(*(float *)&gen_args[1]));
      iVar1 = *(int *)(uVar7 + 0x40);
      fVar2 = (float10)*(double *)&REFG(undefined, 0x10968a0);
      fVar8 = (float10)(*(float *)&gen_args[2]);
      fVar3 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
      uVar5 = F_0055a030(*(undefined4 *)(uVar7 + 0x48));
      (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)(double)(fVar8 * fVar3 + (float10)iVar1 * fVar2) -
                       (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x8))) * (float10)REFG(double, 0x1088108))));
      uVar7 = F_00559f00(*(undefined4 *)(uVar7 + 0x48),(*(float *)&gen_args[1]));
      return uVar7;
    }
    uVar6 = iVar1 - 2;
    if (uVar6 == 0) {
      dVar4 = (double)(*(float *)&gen_args[1]) * *(double *)&REFG(undefined, 0x1094878);
      uVar5 = F_0055a020(*(undefined4 *)(uVar7 + 0x48));
      (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)dVar4 -
                       (float10)(float)((float10)uVar5 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0]))))) *
                       (float10)REFG(double, 0x1088108))));
      F_00559e70(*(undefined4 *)(uVar7 + 0x48),(*(float *)&gen_args[1]));
      iVar1 = *(int *)(uVar7 + 0x40);
      fVar2 = (float10)*(double *)&REFG(undefined, 0x10968a0);
      fVar8 = (float10)(*(float *)&gen_args[2]);
      fVar3 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
      uVar5 = F_0055a030(*(undefined4 *)(uVar7 + 0x48));
      (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)(double)(fVar8 * fVar3 + (float10)iVar1 * fVar2) -
                       (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x8))) * (float10)REFG(double, 0x1088108))));
      uVar7 = F_00559f00(*(undefined4 *)(uVar7 + 0x48),(*(float *)&gen_args[1]));
      return uVar7;
    }
  }
  return uVar6;
}

/* ref: Client::UI2::AddonImage::vf41 */
byte F_0078b480(unsigned int gen_a0)
{
  GEN_ENTER(0x78b480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Image",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonImage::vf64 */
uint F_0078b490(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78b490u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00568210(*(undefined4 *)(param_1 + 0x180),*(float *)(param_1 + 0x1a0),
               *(float *)(param_1 + 0x1a4));
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10c5fd0);
  F_00568230(*(undefined4 *)(param_1 + 0x180),
               ((float)GEN_TOF(((float10)(float)((float10)param_2 / fVar1) * (float10)(*(float *)(gen_frame + 0x8))))));
  F_00568250(*(undefined4 *)(param_1 + 0x180),
               ((float)GEN_TOF(((float10)(float)((float10)param_2 / fVar1) * (float10)(*(float *)(gen_frame + 0x4))))));
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x109cac8);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonImage::vf66 */
uint F_0078b5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x78b5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x19c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x19c));
  }
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  this[0x188] = (undefined1)0x0;
  return uVar1;
}

/* ref: FUN_0078b5f0 */
uint F_0078b5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78b5f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00559c60(*(undefined * PTR32 *)(param_3 + 0x184),2);
  iVar1 = *(int *)(param_3 + 0x18c);
  if (-1 < iVar1) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(int *)(gen_frame + 0x18)) = iVar1;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf37 */
uint F_0078b670(unsigned int gen_a0)
{
  GEN_ENTER(0x78b670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    F_0056c5f0(this + 0x1a8);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf64 */
uint F_0078b690(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78b690u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  longlong lVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(float *)(gen_frame + 0x18)) = param_2;
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = param_3;
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10968c8);
  if (fVar6 < (float10)param_2 / (float10)param_3) {
    (*(float *)(gen_frame + 0x18)) = (float)(fVar6 * (float10)param_3);
  }
  else {
    (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = (float)((float10)param_2 / fVar6);
  }
  fVar6 = (float10)(*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)(param_1 + 0x194));
  pfVar4 = (float *)&(*(float *)(gen_frame + 0x18));
  fVar2 = ((float)GEN_TOF((fVar6 / (float10)*(ushort *)(param_1 + 0x194))));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar6 = (float10)(*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)*(ushort *)(param_1 + 0x196));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)*(ushort *)(param_1 + 0x196));
  fVar7 = (float10)(int)gen_fl2bits((*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = (float)(fVar6 / fVar7);
  if (!((float10)fVar2 < (float10)(float)(fVar6 / fVar7))) {
    pfVar4 = (float *)((int)&(*(longlong *)(gen_frame + 0x10)) + 4);
  }
  fVar2 = *pfVar4;
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = fVar2;
  (*(longlong *)(gen_frame + 0x10)) = CONCAT44((uint)gen_fl2bits(fVar2),(int)(*(longlong *)(gen_frame + 0x10)));
  F_00568210(*(undefined4 *)(param_1 + 0x180),fVar2,fVar2);
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0xc)));
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 2)) = ((undefined2)0x27f);
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0))));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)*(ushort *)(param_1 + 0x196));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
  lVar1 = (longlong)TRUNC((float10)*(ushort *)(param_1 + 0x196) * (float10)(*(float *)(gen_frame + 0xc)));
  (*(longlong *)(gen_frame + 0x10)) = lVar1;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (int)lVar1;
  iVar3 = (int)(*(longlong *)(gen_frame + 0x10));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
  (*(longlong *)(gen_frame + 0x10)) = (longlong)TRUNC((float10)param_3);
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (int)(longlong)TRUNC((float10)param_3);
  fVar6 = (float10)((int)(*(longlong *)(gen_frame + 0x10)) - iVar3);
  if ((int)(*(longlong *)(gen_frame + 0x10)) - iVar3 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
  lVar1 = (longlong)TRUNC((float10)*(ushort *)(param_1 + 0x194) * (float10)(*(float *)(gen_frame + 0x8)));
  (*(longlong *)(gen_frame + 0x10)) = lVar1;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (int)lVar1;
  iVar3 = (int)(*(longlong *)(gen_frame + 0x10));
  (*(longlong *)(gen_frame + 0x10)) = (longlong)TRUNC((float10)param_2);
  lVar1 = (*(longlong *)(gen_frame + 0x10));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (int)(longlong)TRUNC((float10)param_2);
  fVar7 = (float10)((int)(*(longlong *)(gen_frame + 0x10)) - iVar3);
  if ((int)(*(longlong *)(gen_frame + 0x10)) - iVar3 < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(longlong *)(gen_frame + 0x10)) = lVar1;
  uVar5 = F_00559da0(*(undefined4 *)(param_1 + 0x180),(float)(fVar7 * (float10)REFG(double, 0x1088108)),
                       (float)(fVar6 * (float10)REFG(double, 0x1088108)));
  return uVar5;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf65 */
byte F_0078b830(unsigned int gen_a0)
{
  GEN_ENTER(0x78b830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 0x188))) {
    case 1: ;
    case 3: ;
    case 4: ;
    case 5: ;
      return 0;
    case 2: ;
      uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
      uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
      return uVar1 <= uVar2;
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf66 */
uint F_0078b890(unsigned int gen_a0)
{
  GEN_ENTER(0x78b890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x198) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x198));
  }
  if (*(undefined * PTR32 *)(this + 0x19c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x19c));
  }
  if (*(undefined * PTR32 *)(this + 0x1a0) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x1a0));
  }
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: FUN_0078b8e0 */
uint F_0078b8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78b8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  F_0056a7a0(param_2 + 4);
  F_0056a7e0(param_2 + 4);
  *(int *)((int)param_3 + 0x18c) = *(int *)((int)param_3 + 0x18c) + -1;
  uVar1 = *(uint *)((int)param_3 + 0x18c);
  if ((int)uVar1 < 1) {
    F_00559c60(*(undefined * PTR32 *)((int)param_3 + 0x184),2);
    uVar1 = *(uint *)((int)param_3 + 400);
    if (-1 < (int)uVar1) {
      uVar1 = F_0078a8d0(param_3,uVar1);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf2 */
unsigned int F_0078b930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78b930u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  if ((short)param_2 == 0x3d) {
    *(undefined4 *)(in_ecx + 0x188) = 0;
  }
  return 0;
}

/* ref: Client::UI2::AddonImageLocationTitle::vf41 */
byte F_0078b950(unsigned int gen_a0)
{
  GEN_ENTER(0x78b950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ImageLocationTitle",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonImageLocationTitle::vf44 */
ushort F_0078b960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78b960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e360(this,3);
  *(uint *)(this + 0x198) = uVar2;
  uVar2 = F_0055e360(this,4);
  *(uint *)(this + 0x19c) = uVar2;
  uVar2 = F_0055e360(this,5);
  *(uint *)(this + 0x1a0) = uVar2;
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x180));
  *(ushort *)(this + 0x194) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x180));
  *(ushort *)(this + 0x196) = uVar1;
  *(undefined4 *)(this + 0x1ea) = 0x670068;
  *(undefined2 *)(this + 0x1e8) = 0x65;
  return uVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleShort::vf41 */
byte F_0078ba20(unsigned int gen_a0)
{
  GEN_ENTER(0x78ba20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"ImageLocationTitleShort",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonImageLocationTitleShort::vf44 */
ushort F_0078ba30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78ba30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e360(this,3);
  *(uint *)(this + 0x198) = uVar2;
  uVar2 = F_0055e360(this,4);
  *(uint *)(this + 0x19c) = uVar2;
  uVar2 = F_0055e360(this,5);
  *(uint *)(this + 0x1a0) = uVar2;
  uVar1 = F_0055a020(*(undefined4 *)(this + 0x180));
  *(ushort *)(this + 0x194) = uVar1;
  uVar1 = F_0055a030(*(undefined4 *)(this + 0x180));
  *(ushort *)(this + 0x196) = uVar1;
  *(undefined4 *)(this + 0x1ea) = 0x670068;
  *(undefined2 *)(this + 0x1e8) = 0x65;
  return uVar1;
}

/* ref: Client::UI2::AddonLevelUp::vf41 */
byte F_0078bb10(unsigned int gen_a0)
{
  GEN_ENTER(0x78bb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"LevelUp",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonLevelUp::vf44 */
uint F_0078bb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78bb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this,2);
  *(uint *)(this + 0x18c) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonLevelUp::vf64 */
uint F_0078bb90(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78bb90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  float10 fVar5;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar1 = (double)param_2 * REFG(double, 0x1088108);
  uVar2 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar5 = (float10)REFG(double, 0x1088108);
  uVar3 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar4 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)dVar1 -
                              (float10)(float)((float10)uVar2 * (float10)(*(float *)(gen_frame + 0x8))) * fVar5))),
                       ((float)GEN_TOF(((float10)(double)(fVar5 * (float10)param_3) -
                              (float10)(float)((float10)uVar3 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar4;
}

/* ref: Client::UI2::AddonLevelUp::vf65 */
byte F_0078bc40(unsigned int gen_a0)
{
  GEN_ENTER(0x78bc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonLevelUp::vf66 */
uint F_0078bc80(unsigned int gen_a0)
{
  GEN_ENTER(0x78bc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x18c) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x18c));
  }
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: FUN_0078bcb0 */
uint F_0078bcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78bcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00559c60(*(undefined * PTR32 *)(param_3 + 0x184),2);
  iVar1 = *(int *)(param_3 + 0x188);
  if (-1 < iVar1) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(int *)(gen_frame + 0x18)) = iVar1;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonWideText::vf41 */
byte F_0078bd40(unsigned int gen_a0)
{
  GEN_ENTER(0x78bd40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"Text1",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonWideText::vf44 */
uint F_0078bd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78bd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e340(this,3);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e2f0(this,4);
  *(uint *)(this + 0x18c) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonWideText::vf64 */
uint F_0078bdd0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78bdd0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x109ca50);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonWideText::vf66 */
uint F_0078be80(unsigned int gen_a0)
{
  GEN_ENTER(0x78be80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  this[0x19c] = (undefined1)0x0;
  return uVar1;
}

/* ref: FUN_0078beb0 */
uint F_0078beb0(unsigned int gen_a0)
{
  GEN_ENTER(0x78beb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  undefined2 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  F_00577d20(*(undefined * PTR32 *)((int)this + 0x188),&(*(uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x4)),0,0,REFG(undefined4, 0x108cc50),0);
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 0x28;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 0x10;
  uVar1 = F_0055a020(*(undefined4 *)((int)this + 0x180));
  F_00559e70(*(undefined4 *)((int)this + 0x18c),
               ((float)GEN_TOF(((float10)(int)((uint)uVar1 - ((*(uint *)(gen_frame + 0x8)) & 0xffff)) * (float10)REFG(double, 0x1088108)))));
  uVar1 = F_0055a030(*(undefined4 *)((int)this + 0x180));
  F_00559f00(*(undefined4 *)((int)this + 0x18c),
               ((float)GEN_TOF(((float10)(int)((uint)uVar1 - ((*(uint *)(gen_frame + 0x4)) & 0xffff)) * (float10)REFG(double, 0x1088108)))));
  F_0055a060(*(undefined4 *)((int)this + 0x18c),(*(uint *)(gen_frame + 0x8)));
  uVar1 = F_0055a080(*(undefined4 *)((int)this + 0x18c),(*(uint *)(gen_frame + 0x4)));
  return CONCAT22(extraout_var,uVar1);
}

/* ref: FUN_0078bf80 */
uint F_0078bf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78bf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  undefined4 uVar6;
  uint * this_00;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = F_0055dcb0();
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = 10000;
  uVar4 = F_0055ab00(*(undefined4 *)((int)this + 0x188));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  bVar1 = F_0055ab50(*(undefined4 *)((int)this + 0x188));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
  pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))
                             (*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x8)))));
  if ((*pbVar5 & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(pbVar5 + 4);
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x188),uVar6);
  F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  F_0078beb0(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
  if (param_2 == 1) {
    uVar6 = 0x68;
  }
  else {
    uVar6 = 0x67;
  }
  uVar2 = F_00567f90(*(undefined * PTR32 *)((int)this + 0x184),uVar6);
  F_00559c60(*(undefined * PTR32 *)((int)this + 0x184),uVar2 + 1);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar7 = 3;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_0078c0d0 */
byte F_0078c0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x78c0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = F_00567f90(*(undefined * PTR32 *)((int)this + 0x184),0x66);
  uVar2 = F_00559cd0(*(undefined4 *)((int)this + 0x184));
  return uVar2 == uVar1;
}

/* ref: FUN_0078c100 */
uint F_0078c100(unsigned int gen_a0)
{
  GEN_ENTER(0x78c100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c5fdc));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonTextChain::vf41 */
byte F_0078c190(unsigned int gen_a0)
{
  GEN_ENTER(0x78c190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextChain",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextChain::vf44 */
uint F_0078c1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e340(this,3);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this,4);
  *(uint *)(this + 0x18c) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonTextChain::vf63 */
unsigned int F_0078c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (3 < param_1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    F_0055dcb0();
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x14);
    }
    F_0057eb30(*(undefined * PTR32 *)(this + 0x188),uVar1,0,0,0,0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
    F_00559c60(*(undefined * PTR32 *)(this + 0x184),2);
  }
  return 0;
}

/* ref: Client::UI2::AddonTextChain::vf64 */
uint F_0078c2c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78c2c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x109cac8);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextChain::vf65 */
byte F_0078c370(unsigned int gen_a0)
{
  GEN_ENTER(0x78c370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextChain::vf66 */
uint F_0078c3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x78c3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: FUN_0078c3d0 */
uint F_0078c3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x78c3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c60ec));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonTextError::vf41 */
byte F_0078c460(unsigned int gen_a0)
{
  GEN_ENTER(0x78c460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextError",1,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextError::vf44 */
uint F_0078c470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e340(this,2);
  *(uint *)(this + 0x188) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonTextError::vf63 */
uint F_0078c4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 uVar5;
  uint * this_00;
  int iVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (3 < param_1) {
    uVar5 = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    uVar2 = F_0055dcb0();
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if ((*(byte *)(param_2 + 0x18) & 0xf) != 0) {
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = 10000;
    uVar3 = F_0055ab00(*(undefined4 *)(this + 0x188));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    bVar1 = F_0055ab50(*(undefined4 *)(this + 0x188));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    pbVar4 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))
                               (*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x8)))));
    if ((*pbVar4 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(pbVar4 + 4);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x188),uVar5);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
    F_00559c60(*(undefined * PTR32 *)(this + 0x184),2);
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: Client::UI2::AddonTextError::vf64 */
uint F_0078c630(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78c630u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)) = REFG(float, 0x1088068);
  (*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = REFG(float, 0x10c61f8);
  if (((((*(byte *)(param_1 + 0x80) & 1) != 0) && ((*(byte *)(param_1 + 0x80) & 4) != 0)) &&
      (*(char *)(param_1 + 0x3c) == '\x02')) && (iVar2 = *(int *)(param_1 + 0x2c), iVar2 != -0xc)) {
    (*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)) = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x10) / (float10)*(double *)&REFG(undefined, 0x1088118))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x14) / (float10)*(double *)&REFG(undefined, 0x1088118))))
    ;
  }
  (*(double *)(gen_frame + 0x14)) = (double)(*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)) * (double)param_2;
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = ((float)GEN_TOF(((float10)(*(double *)(gen_frame + 0x14)) -
                 (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * (float10)REFG(double, 0x1088108))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)) = fVar1;
  (*(double *)(gen_frame + 0xc)) = (double)(*(float *)((char *)&(*(double *)(gen_frame + 0xc)) + 4)) * (double)param_3;
  uVar3 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x14)) + 0));
  uVar4 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar5 = F_00559da0(*(undefined4 *)(param_1 + 0x180),(*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)),
                       ((float)GEN_TOF(((float10)(*(double *)(gen_frame + 0xc)) -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar5;
}

/* ref: Client::UI2::AddonTextError::vf65 */
byte F_0078c720(unsigned int gen_a0)
{
  GEN_ENTER(0x78c720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextError::vf66 */
uint F_0078c760(unsigned int gen_a0)
{
  GEN_ENTER(0x78c760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: FUN_0078c780 */
uint F_0078c780(unsigned int gen_a0)
{
  GEN_ENTER(0x78c780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c6204));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonTextClassChange::vf41 */
byte F_0078c810(unsigned int gen_a0)
{
  GEN_ENTER(0x78c810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextClassChange",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextClassChange::vf44 */
uint F_0078c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e340(this,4);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this,6);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this,7);
  *(uint *)(this + 400) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonTextClassChange::vf63 */
unsigned int F_0078c8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78c8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (3 < param_1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x188),uVar1);
    if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x18c),uVar1);
    if (param_1 < 0xb) {
      F_0055a300(*(undefined * PTR32 *)(this + 400),0);
    }
    else if ((*(byte *)(param_2 + 0x38) & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 400),0);
    }
    else {
      F_00584110(*(undefined * PTR32 *)(this + 400),*(undefined4 *)(param_2 + 0x3c));
    }
    F_0055dcb0();
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
    F_00559c60(*(undefined * PTR32 *)(this + 0x184),2);
  }
  return 0;
}

/* ref: Client::UI2::AddonTextClassChange::vf64 */
uint F_0078c9a0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78c9a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x10c6310);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextClassChange::vf65 */
byte F_0078ca50(unsigned int gen_a0)
{
  GEN_ENTER(0x78ca50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextClassChange::vf66 */
uint F_0078ca90(unsigned int gen_a0)
{
  GEN_ENTER(0x78ca90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf63 */
unsigned int F_0078cad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78cad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (5 < param_1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((*(byte *)(param_2 + 0x48) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x4c);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x10c))(this,uVar4,uVar2,uVar1);
    ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this,uVar3 & 0xff);
  }
  return 0;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf64 */
uint F_0078cb50(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78cb50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x10c6318);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf65 */
byte F_0078cc00(unsigned int gen_a0)
{
  GEN_ENTER(0x78cc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf66 */
uint F_0078cc40(unsigned int gen_a0)
{
  GEN_ENTER(0x78cc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184));
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184),uVar1);
  if (*(undefined * PTR32 *)(this + 0x188) != (undefined *)0x0) {
    F_0058f5b0(*(undefined * PTR32 *)(this + 0x188));
  }
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: FUN_0078cc90 */
uint F_0078cc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78cc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00559c60(*(undefined * PTR32 *)(param_3 + 0x184),2);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote0::vf41 */
byte F_0078ccb0(unsigned int gen_a0)
{
  GEN_ENTER(0x78ccb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextMonsterNote0",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote0::vf44 */
unsigned int F_0078ccc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78ccc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this,6);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this,7);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this,8);
  *(uint *)(this + 0x1a0) = uVar1;
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184));
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184),uVar1);
  return 0;
}

/* ref: Client::UI2::AddonTextMonsterNote1::vf41 */
byte F_0078cd60(unsigned int gen_a0)
{
  GEN_ENTER(0x78cd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextMonsterNote1",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote1::vf68 */
unsigned int F_0078cd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78cd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)(this + 0x1a0) != (undefined *)0x0) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x1a0),param_1 + 0x65);
  }
  return 0;
}

/* ref: Client::UI2::AddonTextMonsterNote2::vf41 */
byte F_0078cd90(unsigned int gen_a0)
{
  GEN_ENTER(0x78cd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextMonsterNote2",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote2::vf68 */
unsigned int F_0078cda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78cda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)(this + 0x1a0) != (undefined *)0x0) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x1a0),param_1 + 0x65);
  }
  return 0;
}

/* ref: FUN_0078cdc0 */
uint F_0078cdc0(unsigned int gen_a0)
{
  GEN_ENTER(0x78cdc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c6324));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf41 */
byte F_0078ce50(unsigned int gen_a0)
{
  GEN_ENTER(0x78ce50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextTargetCircle",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf63 */
unsigned int F_0078ce60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78ce60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (3 < param_1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_0058bba0(*(undefined * PTR32 *)(this + 0x188),uVar1);
    F_00559c60(*(undefined * PTR32 *)(this + 0x184),2);
  }
  return 0;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf64 */
uint F_0078ceb0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78ceb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x10c6318);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf65 */
byte F_0078cf60(unsigned int gen_a0)
{
  GEN_ENTER(0x78cf60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf66 */
uint F_0078cfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x78cfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf41 */
byte F_0078cfd0(unsigned int gen_a0)
{
  GEN_ENTER(0x78cfd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"TextAchievementUnlocked",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf44 */
unsigned int F_0078cfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78cfe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e360(this,5);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this,6);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this,7);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184));
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184),uVar1);
  return 0;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf64 */
uint F_0078d080(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x78d080u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  dVar2 = (double)param_2 * REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar3 = (double)param_3 * *(double *)&REFG(undefined, 0x10c6318);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar3 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf66 */
uint F_0078d130(unsigned int gen_a0)
{
  GEN_ENTER(0x78d130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00559cb0(*(undefined4 *)(this + 0x184));
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184),uVar1);
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  if (*(undefined * PTR32 *)(this + 0x188) != (undefined *)0x0) {
    uVar1 = F_0058f5b0(*(undefined * PTR32 *)(this + 0x188));
  }
  this[0x1b0] = (undefined1)0x0;
  return uVar1;
}

/* ref: FUN_0078d180 */
uint F_0078d180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0x36;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  uVar1 = F_00559c60(*(undefined * PTR32 *)(param_3 + 0x184),2);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf37 */
uint F_0078d230(unsigned int gen_a0)
{
  GEN_ENTER(0x78d230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf41 */
byte F_0078d250(unsigned int gen_a0)
{
  GEN_ENTER(0x78d250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"MainCommand",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf52 */
byte F_0078d260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78d260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::AddonMainCommand::vf53 */
unsigned int F_0078d270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78d270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (((char)param_2 == '\0') && (*(char *)(in_ecx + 0xff0) != '\0')) {
    *(ushort *)(in_ecx + 0x126) = *(ushort *)(in_ecx + 0x126) | 1;
    *(undefined1 *)(in_ecx + 0xff0) = 0;
  }
  return 0;
}

/* ref: FUN_0078d2a0 */
uint F_0078d2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x78d2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x37,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: FUN_0078d2f0 */
uint F_0078d2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78d2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055e2f0(this,param_1);
  uVar1 = F_00559c20(uVar1);
  return uVar1;
}

/* ref: FUN_0078d310 */
uint F_0078d310(unsigned int gen_a0)
{
  GEN_ENTER(0x78d310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = &REFG(undefined4, 0x10c0eec);
  do {
    if (*piVar2 == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0x12);
  return 0xffffffff;
}

/* ref: Client::UI2::AddonMainCommand::vf62 */
uint F_0078d340(unsigned int gen_a0)
{
  GEN_ENTER(0x78d340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this,0x4000002,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf63 */
uint F_0078d360(unsigned int gen_a0)
{
  GEN_ENTER(0x78d360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this,0x4000002,0);
  F_0055e2a0(this,0x2000000,1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf65 */
uint F_0078d390(unsigned int gen_a0)
{
  GEN_ENTER(0x78d390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_00580230(*(undefined * PTR32 *)(uVar1 + 0x14),this,0);
  return uVar1;
}

/* ref: FUN_0078d3b0 */
uint F_0078d3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x78d3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6654));
  *(undefined4 *)((int)this + 0x180) = 0xff;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  F_0055e2a0(this,0x4000002,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonParameter::vf37 */
uint F_0078d420(unsigned int gen_a0)
{
  GEN_ENTER(0x78d420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,3,0);
  F_005a92d0(this,0,2,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonParameter::vf41 */
byte F_0078d450(unsigned int gen_a0)
{
  GEN_ENTER(0x78d450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,"parameter",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonParameter::vf40 */
uint F_0078d460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x78d460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Client::UI2::AddonParameter::vf2 */
unsigned int F_0078d470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x78d470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_0078d480 */
uint F_0078d480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x78d480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x90),0x65);
  }
  else {
    if (param_1 == 2) {
      uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x90),0x66);
      return uVar1;
    }
    uVar1 = param_1 - 4;
    if (uVar1 == 0) {
      uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x90),0x67);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_0078d4d0 */
uint F_0078d4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x78d4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_005a28a0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x188),
               *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + *(int *)(&REFG(undefined, 0x10c1014) + param_1 * 0x10) * 4))));
  uVar1 = F_005a04e0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x188),
                       *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + *(int *)(&REFG(undefined, 0x10c1010) + param_1 * 0x10) * 4))),
                       param_3);
  return uVar1;
}

/* ref: FUN_0078d530 */
uint F_0078d530(unsigned int gen_a0)
{
  GEN_ENTER(0x78d530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6754));
  *(undefined4 *)((int)this + 0x180) = 0xff;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  F_0056c400((undefined *)((int)this + 0x198),0,0);
  in_ecx = (int)this + 0x1d8;
  iVar1 = 1;
  do {
    F_0058d480(in_ecx);
    in_ecx = in_ecx + 0x30;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xfb) =
       *(byte *)((int)this + 0xfb) & 0x37 | *(byte *)((int)this + 0xf9) & 200 | 0x48;
  F_0055e2a0(this,0x4000002,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonExp::vf37 */
uint F_0078d620(unsigned int gen_a0)
{
  GEN_ENTER(0x78d620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,3,0);
  F_005a92d0(this,0,2,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonExp::vf41 */
byte F_0078d650(unsigned int gen_a0)
{
  GEN_ENTER(0x78d650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this,(*(undefined * PTR32 (*)[1])REFP(0x10c1064)),0,6);
  return bVar1;
}

