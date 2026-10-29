#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c09b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c09b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c09930(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c09b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c09b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if ((0 < *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x10)))) &&
     (param_1[2] = param_1[2] + 1, *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x10))) < param_1[2])) {
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x120) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x198) = 0;
    if (*(int *)((int)this + 0x78) == 0) {
      F_00ba74d0(*(undefined * PTR32 *)((int)this + 0x74) GEN_EDX_FWD);
    }
    if (*(int *)((int)this + 0x7c) != 6) {
      *(undefined4 *)((int)this + 0x7c) = 6;
    }
    uVar1 = F_00c09af0(this GEN_EDX_ARG);
    return uVar1;
  }
  F_00c08780(this GEN_EDX_ARG,param_1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c09bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c09bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x14,0,0x25c);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x11))) = 1;
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c09c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc09c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * this_00;
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  
  this_00 = this + 0x1e4;
  iVar4 = *(int *)this_00;
  local_c = 0;
  if (iVar4 != *(int *)(this + 0x1e8)) {
    local_c = *(int *)(this + 0x1e8) - iVar4;
    iVar3 = local_c - param_2;
    if (iVar3 < 1) {
      F_00c46aa0(param_1,iVar4,local_c);
      iVar4 = *(int *)this_00;
      if (iVar4 != *(int *)(this + 0x1e8)) {
        F_00c46e20(iVar4,*(int *)(this + 0x1e8),0);
        *(int *)(this + 0x1e8) = iVar4;
      }
    }
    else {
      F_00c46aa0(param_1,iVar4,param_2);
      F_00c46e20(*(int *)this_00,*(int *)this_00 + param_2,iVar3);
      F_00bb6510(this_00 GEN_EDX_ARG,iVar3);
      local_c = param_2;
    }
  }
  bVar1 = false;
  do {
    if ((int)param_2 <= (int)local_c) {
      return local_c;
    }
    uVar2 = F_00c08990(this GEN_EDX_ARG);
    if ((int)uVar2 < 0) {
      if (bVar1) {
        return local_c;
      }
    }
    else {
      bVar1 = true;
      if (uVar2 == 0) {
        if (local_c == 0) {
          F_00c08e20(this GEN_EDX_ARG,0,0);
        }
        return local_c;
      }
      F_00bb6510(this_00 GEN_EDX_ARG,uVar2);
      iVar3 = param_2 - local_c;
      uVar2 = F_00c08e20(this GEN_EDX_ARG,*(int *)this_00,uVar2);
      iVar4 = uVar2 - iVar3;
      if (iVar4 < 1) {
        F_00c46aa0(local_c + param_1,*(int *)this_00,uVar2);
        iVar4 = *(int *)this_00;
        if (iVar4 != *(int *)(this + 0x1e8)) {
          F_00c46e20(iVar4,*(int *)(this + 0x1e8),0);
          *(int *)(this + 0x1e8) = iVar4;
        }
        local_c = local_c + uVar2;
      }
      else {
        F_00c46aa0(local_c + param_1,*(int *)this_00,iVar3);
        F_00c46e20(*(int *)this_00,*(int *)this_00 + iVar3,iVar4);
        F_00bb6510(this_00 GEN_EDX_ARG,iVar4);
        local_c = local_c + iVar3;
      }
    }
    F_00bada50();
  } while( true );
}

/* ref: FUN_00c09dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c09dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc09dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  bool bVar7;
  int local_18;
  uint local_14;
  int local_c;
  
  piVar5 = *(int * PTR32 *)(param_1 + 0x14);
  if (piVar5 == (int *)0x0) {
    local_18 = *(int *)(param_1 + 0xc);
    local_c = *(int *)(param_1 + 0x10);
  }
  else {
    local_18 = *piVar5;
    local_c = piVar5[1] - *piVar5;
  }
  if ((*(byte *)(param_1 + 4) & 0x40) == 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (uint)*(byte *)(param_1 + 7);
  }
  uVar4 = (uint)*(byte *)(local_c - 1 + local_18);
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      puVar1 = (undefined4 *)piVar5[2];
      uVar3 = (uint)*(byte *)((int)puVar1 + 6);
      if ((uVar3 == local_14) ||
         ((((int)local_14 <= (int)uVar3 || ((int)(local_14 - uVar3) < 0x80)) &&
          (((int)uVar3 <= (int)local_14 || (0x7e < (int)(uVar3 - local_14))))))) {
        piVar2 = (int *)*piVar5;
        if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
          *(int * PTR32 *)piVar5[1] = piVar2;
          *(int *)(*piVar5 + 4) = piVar5[1];
          F_00429760(piVar5,0xc,0x25c);
          *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) - 1;
        }
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
        piVar5 = piVar2;
      }
      else {
        iVar6 = 0;
        bVar7 = local_c == 0;
        if (0 < local_c) {
          do {
            if (uVar3 == *(byte *)(iVar6 + local_18)) {
              piVar2 = (int *)*piVar5;
              if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
                *(int * PTR32 *)piVar5[1] = piVar2;
                *(int *)(*piVar5 + 4) = piVar5[1];
                F_00429760(piVar5,0xc,0x25c);
                *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) - 1;
              }
              ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
              piVar5 = piVar2;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_c);
          bVar7 = iVar6 == local_c;
        }
        if (bVar7) {
          piVar5 = (int *)*piVar5;
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x1ac));
  }
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      uVar3 = (uint)*(byte *)(piVar5[2] + 6);
      if ((((local_14 != uVar3) &&
           (((int)uVar3 <= (int)local_14 || ((int)(uVar3 - local_14) < 0x80)))) &&
          ((((int)local_14 <= (int)uVar3 || (0x7e < (int)(local_14 - uVar3))) && (uVar4 != uVar3))))
         && (((uVar4 < uVar3 && (0x7f < (int)(uVar3 - uVar4))) ||
             ((uVar3 < uVar4 && ((int)(uVar4 - uVar3) < 0x7f)))))) {
        F_00c09b60(this GEN_EDX_ARG,piVar5[2]);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)((int)this + 0x1ac));
  }
  F_00c097a0(this GEN_EDX_ARG);
  uVar4 = F_00c09930(this GEN_EDX_ARG,param_1);
  return uVar4;
}

/* ref: FUN_00c09fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c09fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc09fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int * this_00;
  
  this_00 = (int *)0x0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0x640;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = (undefined1)(*(undefined4 *)&gen_args[1]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = ((char)(*(undefined4 *)&gen_args[5]) != '\0') - 1 & (*(uint *)&gen_args[3]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = ((char)(*(undefined4 *)&gen_args[5]) != '\0') - 1 & (*(uint *)&gen_args[4]);
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    this_00 = (int *)F_00406b90(0x10,0,0);
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      *this_00 = 0;
      this_00[1] = 0;
      this_00[2] = 0;
      F_00bb6510(this_00 GEN_EDX_ARG,(*(uint *)&gen_args[4]));
    }
  }
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = this_00;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    F_00c46aa0(*this_00,(*(uint *)&gen_args[3]),this_00[1] - *this_00);
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) | 0x40;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = (undefined1)(*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c0a050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0a050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc0a050u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  int * this_00;
  
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 5))) = (byte)(*(undefined4 *)&gen_args[4]) + 6;
  this_00 = (int *)0x0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0x20;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = (undefined1)(*(undefined4 *)&gen_args[1]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = ((char)(*(undefined4 *)&gen_args[5]) != '\0') - 1 & (*(uint *)&gen_args[3]);
  if ((char)(*(undefined4 *)&gen_args[5]) == '\0') {
    uVar1 = (uint)(byte)(*(undefined4 *)&gen_args[4]);
  }
  else {
    uVar1 = 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar1;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    this_00 = (int *)F_00406b90(0x10,0,0);
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      *this_00 = 0;
      this_00[1] = 0;
      this_00[2] = 0;
      F_00bb6510(this_00 GEN_EDX_ARG,(uint)(byte)(*(undefined4 *)&gen_args[4]));
    }
  }
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = this_00;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    F_00c46aa0(*this_00,(*(uint *)&gen_args[3]),this_00[1] - *this_00);
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) | 0x40;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = (undefined1)(*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0a100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0a100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((this[0xc2] == (undefined1)0x0) && (this[0xc3] != (undefined1)0x0)) {
    uVar4 = 0;
    (*(int *)(gen_frame + 0x28)) = *((int *)GEN_TOP((*(int *)(this + 0xc4) + 8))) - 6;
    if (0 < param_2) {
      do {
        iVar5 = param_2 - uVar4;
        if ((*(int *)(gen_frame + 0x28)) < iVar5) {
          iVar5 = (*(int *)(gen_frame + 0x28));
        }
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0xcc);
        uVar2 = (*(undefined4 *)(gen_frame + 0x24));
        iVar3 = (*(int *)(this + 200) + 1) % 0xff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 0)) = (undefined1)*(undefined4 *)(this + 0xcc);
        (*(undefined1 *)(gen_frame + 0x13)) = (undefined1)(*(undefined4 *)(gen_frame + 0x24));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
        (*(int *)(gen_frame + 0x18)) = param_1 + uVar4;
        (*(int *)(gen_frame + 0x1c)) = iVar5;
        (*(undefined2 *)(gen_frame + 0x10)) = 0x640;
        *(int *)(this + 200) = iVar3;
        (*(undefined1 *)(gen_frame + 0x12)) = (char)iVar3;
        (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
        F_00c08fb0(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x20));
        uVar4 = uVar4 + iVar5;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
        if ((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) {
          iVar5 = *(*(int * PTR32 *)(gen_frame + 0x20));
          if (iVar5 != 0) {
            F_00429760(iVar5,(*(int * PTR32 *)(gen_frame + 0x20))[2] - iVar5,0x25c);
          }
          *piVar1 = 0;
          piVar1[1] = 0;
          piVar1[2] = 0;
          F_00406ad0(piVar1);
        }
      } while ((int)uVar4 < param_2);
    }
    return uVar4;
  }
  return 0xffffffff;
}

/* ref: FUN_00c0a200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0a200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0a200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined1 * puVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x1c8) != 0) {
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (undefined1 *)0x0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    F_00bb6510(&(*(undefined1 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x1c8));
    piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
    puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
    if (piVar3 != *(int * PTR32 *)((int)this + 0x1c4)) {
      do {
        *puVar4 = *(undefined1 *)(piVar3[2] + 6);
        piVar3 = (int *)*piVar3;
        puVar4 = puVar4 + 1;
      } while (piVar3 != (int *)*(int *)((int)this + 0x1c4));
    }
    iVar1 = *(int *)((int)this + 0xcc);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    (*(undefined1 *)(gen_frame + 0x8)) = 0x60;
    (*(undefined1 *)(gen_frame + 0xb)) = (char)iVar1;
    (*(char *)(gen_frame + 0x9)) = ((char)(*(undefined4 *)(gen_frame + 0x20)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x1c))) + 6;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x14)) = (uint)(byte)((char)(*(undefined4 *)(gen_frame + 0x20)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x1c)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
    (*(undefined1 *)(gen_frame + 0xa)) = (char)((iVar1 + 1) % 0xff);
    (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
    F_00c08780(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x18));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    if ((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) {
      iVar1 = *(*(int * PTR32 *)(gen_frame + 0x18));
      if (iVar1 != 0) {
        F_00429760(iVar1,(*(int * PTR32 *)(gen_frame + 0x18))[2] - iVar1,0x25c);
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      F_00406ad0(piVar3);
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
    uVar2 = 0;
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x1c)) != (undefined1 *)0x0) {
      uVar5 = F_00429760((*(undefined1 * PTR32 *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x24)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),0x25c);
      uVar2 = (uint)uVar5;
    }
  }
  return uVar2;
}

/* ref: FUN_00c0a320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0a320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0a320u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  uVar6 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
  uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
  if ((uVar6 == uVar5) ||
     ((((int)uVar5 <= (int)uVar6 || ((int)(uVar5 - uVar6) < 0x80)) &&
      (((int)uVar6 <= (int)uVar5 || (0x7e < (int)(uVar6 - uVar5))))))) goto LAB_00c0a4bd;
  if (uVar6 == (int)(uVar5 + 1) % 0xff) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) == 0) ||
       (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))))) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = uVar6;
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD)));
      F_00c0ebd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
      F_00c090e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1);
    }
    goto LAB_00c0a4bd;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))) <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))))
  goto LAB_00c0a4bd;
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
  (*(char *)(gen_frame + 0x1b)) = '\0';
  if (piVar4 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
LAB_00c0a44b: ;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
    uVar5 = *(uint *)(iVar1 + 4);
    (*(uint *)(gen_frame + 0x10)) = uVar6;
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    piVar4 = (int *)F_004296a0(0xc,0,0x25c);
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x14));
    if ((uint *)(piVar4 + 2) != (uint *)0x0) {
      piVar4[2] = (*(uint *)(gen_frame + 0x10));
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0x1b)) != '\0') goto LAB_00c0a4b4;
      uVar6 = (uint)*(byte *)(piVar4[2] + 6);
      uVar5 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
      if (uVar5 == uVar6) {
LAB_00c0a437: ;
        (*(char *)(gen_frame + 0x1b)) = '\x01';
      }
      else if (((uVar6 <= uVar5) || ((int)(uVar6 - uVar5) < 0x80)) &&
              ((uVar5 <= uVar6 || (0x7e < (int)(uVar5 - uVar6))))) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x14)) = uVar5;
        F_00c0f010(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)),piVar4,&(*(uint *)(gen_frame + 0x14)));
        goto LAB_00c0a437;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    if ((*(char *)(gen_frame + 0x1b)) == '\0') goto LAB_00c0a44b;
  }
LAB_00c0a4b4: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) + 1;
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
LAB_00c0a4bd: ;
  if ((0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)))) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x18))), iVar1 == 0 ||
      (iVar1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))))))) {
    F_00c0a200((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar5 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
    return uVar5;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)));
  if ((iVar1 < 1) ||
     ((iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x14))), iVar2 != 0 && (iVar1 <= iVar2)))) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) == 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x28)));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) = 1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14c))) = uVar3;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 0;
      _Var7 = F_00c4b7c2((__time64_t *)0x0);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = (int)_Var7;
      uVar8 = F_00427d90();
      *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x138))) = uVar8;
      uVar8 = F_00427e30();
      *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140))) = uVar8;
    }
  }
  else {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
    if (iVar1 != 0) {
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
      (*(undefined1 *)(gen_frame + 0xb)) = (char)iVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
      (*(undefined2 *)(gen_frame + 0x8)) = 0x640;
      (*(undefined1 *)(gen_frame + 0xa)) = (char)((iVar1 + 1) % 0xff);
      F_00c08780((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      uVar5 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
      return uVar5;
    }
  }
  uVar5 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
  return uVar5;
}

/* ref: FUN_00c0a5d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0a5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0a5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x1c8) != 0) {
    uVar2 = F_00c0a200(this GEN_EDX_FWD);
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0xd0);
  *(undefined4 *)((int)this + 0xd0) = 0;
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)iVar1;
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((iVar1 + 1) % 0xff);
    uVar2 = F_00c08780(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: FUN_00c0a640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0a640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0a640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int * piVar8;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x7c))) {
  case 0: ;
  case 1: ;
  case 6: ;
    goto switchD_00c0a65d_caseD_0;
  case 3: ;
    if ((*(int *)((int)this + 0x198) != 0) &&
       (bVar3 = F_00c0cc30((undefined *)((int)this + 0x180) GEN_EDX_FWD), bVar3 != 0)) {
      *(undefined4 *)((int)this + 0x198) = 0;
      F_00c08500(this GEN_EDX_ARG);
      if (*(int *)((int)this + 0x7c) != 6) {
        *(undefined4 *)((int)this + 0x7c) = 6;
      }
    }
    break;
  case 5: ;
    if ((*(int *)((int)this + 0x198) != 0) &&
       ((*(int *)((int)this + 0x1b0) == 0 ||
        (bVar3 = F_00c0cc30((undefined *)((int)this + 0x180) GEN_EDX_ARG), bVar3 != 0)))) {
      F_00c08560(this GEN_EDX_ARG);
      if (*(int *)((int)this + 0x78) == 0) {
        F_00ba74d0(*(undefined * PTR32 *)((int)this + 0x74) GEN_EDX_ARG);
      }
      if (*(int *)((int)this + 0x7c) != 6) {
        *(undefined4 *)((int)this + 0x7c) = 6;
      }
      F_00c09af0(this GEN_EDX_ARG);
      return 0;
    }
  case 4: ;
    if ((*(char *)((int)this + 0x80) != '\0') && (uVar5 = F_00c08990(this GEN_EDX_ARG), -1 < (int)uVar5)) {
      uVar4 = uVar5;
      if ((int)uVar5 < 1) {
        uVar4 = 1;
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (undefined * PTR32 *)0x0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      F_00bb6510(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4);
      uVar2 = (*(undefined4 *)(gen_frame + 0xc));
      uVar5 = F_00c08e20(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),uVar5);
      if (*(int *)((int)this + 0x70) != 0) {
        F_00badf20((undefined *)((int)this + 8) GEN_EDX_ARG,*(int *)((int)this + 0x70),uVar2,uVar5);
      }
      F_00bb4550(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    }
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0xe0) GEN_EDX_ARG);
  if ((bVar3 != 0) && (*(int *)((int)this + 0x1b0) == 0)) {
    iVar7 = (*(int *)((int)this + 200) + 1) % 0xff;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0x608;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
    *(int *)((int)this + 200) = iVar7;
    uVar6 = (undefined1)iVar7;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = uVar6;
    (*(uint *)(gen_frame + 0x14)) = (uint)CONCAT12(uVar6,0x608);
    F_00c08fb0(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)));
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0x108) GEN_EDX_ARG);
  if ((bVar3 != 0) &&
     (piVar8 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac))), piVar8 != *(int * PTR32 *)((int)this + 0x1ac))) {
    do {
      F_00c09b60(this GEN_EDX_ARG,piVar8[2]);
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)*(int *)((int)this + 0x1ac));
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0x130) GEN_EDX_ARG);
  if (bVar3 != 0) {
    F_00c0a5d0(this GEN_EDX_ARG);
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0x158) GEN_EDX_ARG);
  if (bVar3 != 0) {
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x120) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x198) = 0;
    if (*(int *)((int)this + 0x78) == 0) {
      F_00ba74d0(*(undefined * PTR32 *)((int)this + 0x74) GEN_EDX_ARG);
    }
    if (*(int *)((int)this + 0x7c) != 6) {
      *(undefined4 *)((int)this + 0x7c) = 6;
    }
    if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
      F_00c09570(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,this);
    }
    if ((*(char *)((int)this + 0x80) == '\0') || (*(int *)((int)this + 0x70) == 0)) {
      if (*(int *)((int)this + 0x70) == 0) {
        (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
      }
    }
    else if ((((code *)*(gen_code32 *)((int)this + 0x20) != (code *)0x0) &&
             (uVar5 = ((code *)*(gen_code32 *)((int)this + 0x20))(*(int *)((int)this + 0x70)),
             (char)uVar5 != '\0')) &&
            (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x70), puVar1 != (undefined4 *)0x0)) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      return 0;
    }
  }
switchD_00c0a65d_caseD_0: ;
  return 0;
}

/* ref: FUN_00c0a8a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0a8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0a8a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 * puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 * puVar15;
  uint uVar16;
  
  iVar14 = (*(int *)&gen_args[1]);
  iVar11 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
  if (iVar11 != 1) {
    if (iVar11 == 3) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = (uint)*(byte *)((*(int *)&gen_args[1]) + 6);
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) != 4) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 4;
      }
      F_00c0a5d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
      F_00c09410((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      uVar16 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)&gen_args[1]));
      return uVar16;
    }
    if (iVar11 != 6) goto LAB_00c0aa81;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = (uint)*(byte *)((*(int *)&gen_args[1]) + 6);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) != 2) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 2;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))));
  }
  puVar15 = (undefined4 *)F_00406b90(0x2c,0,0);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    uVar7 = *(ushort *)((*(int *)&gen_args[1]) + 0x16);
    (*(uint *)(gen_frame + 0x2c)) = (uint)uVar7;
    bVar2 = *(byte *)((*(int *)&gen_args[1]) + 0x1b);
    (*(byte *)(gen_frame + 0x38)) = bVar2;
    bVar3 = *(byte *)((*(int *)&gen_args[1]) + 0x1a);
    uVar8 = *(ushort *)((*(int *)&gen_args[1]) + 0x14);
    uVar9 = *(ushort *)((*(int *)&gen_args[1]) + 0x12);
    (*(byte *)(gen_frame + 0x39)) = bVar3;
    bVar4 = *(byte *)((*(int *)&gen_args[1]) + 0x19);
    (*(byte *)(gen_frame + 0x3a)) = bVar4;
    bVar5 = *(byte *)((*(int *)&gen_args[1]) + 0x18);
    (*(byte *)(gen_frame + 0x3b)) = bVar5;
    bVar6 = *(byte *)((*(int *)&gen_args[1]) + 0xd);
    uVar10 = *(ushort *)((*(int *)&gen_args[1]) + 0x10);
    (*(uint *)(gen_frame + 0x30)) = (uint)uVar10;
    uVar12 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0)));
    (*(undefined4 *)(gen_frame + 0x34)) = uVar12;
    *puVar15 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc)));
    puVar15[1] = uVar12;
    puVar15[2] = (uint)uVar10;
    puVar15[3] = (uint)bVar6;
    puVar15[4] = (uint)bVar5;
    puVar15[5] = (uint)bVar4;
    puVar15[6] = (uint)bVar3;
    puVar15[7] = (uint)bVar2;
    puVar15[8] = (uint)uVar7;
    puVar15[9] = (uint)uVar9;
    puVar15[10] = (uint)uVar8;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = puVar15;
  uVar12 = puVar15[7];
  (*(undefined4 *)(gen_frame + 0x1c)) = puVar15[6];
  (*(undefined4 *)(gen_frame + 0x20)) = puVar15[5];
  (*(undefined4 *)(gen_frame + 0x24)) = puVar15[4];
  (*(undefined4 *)(gen_frame + 0x28)) = puVar15[8];
  (*(undefined4 *)(gen_frame + 0x34)) = puVar15[10];
  uVar13 = puVar15[3];
  (*(uint *)(gen_frame + 0x30)) = puVar15[9];
  (*(uint *)(gen_frame + 0x2c)) = puVar15[2];
  uVar16 = F_00c4f2dd();
  (*(undefined2 *)(gen_frame + 0x12)) = (undefined2)(*(uint *)(gen_frame + 0x30));
  (*(undefined2 *)(gen_frame + 0x10)) = (undefined2)(*(uint *)(gen_frame + 0x2c));
  (*(undefined1 *)(gen_frame + 0x18)) = (undefined1)(*(undefined4 *)(gen_frame + 0x24));
  (*(undefined2 *)(gen_frame + 0x16)) = (undefined2)(*(undefined4 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  (*(undefined1 *)(gen_frame + 0xc)) = 1;
  (*(undefined1 *)(gen_frame + 0xe)) = 1;
  (*(undefined1 *)(gen_frame + 0x1a)) = (undefined1)(*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined1 *)(gen_frame + 0x1b)) = (char)uVar12;
  (*(undefined2 *)(gen_frame + 0x4)) = 0x16c0;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = (int)uVar16 % 0xff;
  puVar1 = (undefined1 *)((*(int *)&gen_args[1]) + 6);
  (*(undefined1 *)(gen_frame + 0x6)) = (char)((int)uVar16 % 0xff);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 0)) = (undefined1)uVar13;
  (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)(*(int *)&gen_args[1]);
  (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)(*(undefined4 *)(gen_frame + 0x34));
  (*(undefined1 *)(gen_frame + 0x19)) = (undefined1)(*(undefined4 *)(gen_frame + 0x20));
  (*(undefined1 *)(gen_frame + 0x7)) = *puVar1;
  F_00c08fb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
LAB_00c0aa81: ;
  uVar16 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar14);
  return uVar16;
}

/* ref: FUN_00c0aaa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0aaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0aaa0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
  if (((iVar1 != 3) && (iVar1 != 6)) && (iVar1 != 5)) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 5;
  }
  uVar5 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
  if ((uVar5 == uVar3) ||
     ((((int)uVar3 <= (int)uVar5 || ((int)(uVar3 - uVar5) < 0x80)) &&
      (((int)uVar5 <= (int)uVar3 || (0x7e < (int)(uVar5 - uVar3))))))) goto LAB_00c0ac6b;
  if (uVar5 == (int)(uVar3 + 1) % 0xff) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) == 0) ||
       (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))))) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = uVar5;
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD)));
      F_00c0ebd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
      F_00c090e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1);
    }
    F_00c0a5d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
    return uVar3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))) <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))))
  goto LAB_00c0ac6b;
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
  (*(char *)(gen_frame + 0xb)) = '\0';
  if (piVar4 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
LAB_00c0abf9: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
    uVar3 = *(uint *)(iVar1 + 4);
    (*(uint *)(gen_frame + 0x0)) = uVar5;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    piVar4 = (int *)F_004296a0(0xc,0,0x25c);
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x4));
    if ((uint *)(piVar4 + 2) != (uint *)0x0) {
      piVar4[2] = (*(uint *)(gen_frame + 0x0));
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0xb)) != '\0') goto LAB_00c0ac62;
      uVar5 = (uint)*(byte *)(piVar4[2] + 6);
      uVar3 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
      if (uVar3 == uVar5) {
LAB_00c0abe5: ;
        (*(char *)(gen_frame + 0xb)) = '\x01';
      }
      else if (((uVar5 <= uVar3) || ((int)(uVar5 - uVar3) < 0x80)) &&
              ((uVar3 <= uVar5 || (0x7e < (int)(uVar3 - uVar5))))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        F_00c0f010(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),piVar4,&(*(uint *)(gen_frame + 0x4)));
        goto LAB_00c0abe5;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00c0abf9;
  }
LAB_00c0ac62: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) + 1;
LAB_00c0ac6b: ;
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  if ((0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)))) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x18))), iVar1 == 0 ||
      (iVar1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))))))) {
    F_00c0a200((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
    return uVar3;
  }
  if ((0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)))) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x14))), iVar1 == 0 ||
      (iVar1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))))))) {
    F_00c08860((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
    return uVar3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) == 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x28)));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) = 1;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14c))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 0;
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = (int)_Var6;
    uVar7 = F_00427d90();
    *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x138))) = uVar7;
    uVar7 = F_00427e30();
    *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140))) = uVar7;
  }
  uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
  return uVar3;
}

/* ref: FUN_00c0ad40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ad40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ad40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  uVar5 = (uint)*(byte *)((int)param_1 + 6);
  uVar3 = *(uint *)((int)this + 0xcc);
  if ((uVar5 == uVar3) ||
     ((((int)uVar3 <= (int)uVar5 || ((int)(uVar3 - uVar5) < 0x80)) &&
      (((int)uVar5 <= (int)uVar3 || (0x7e < (int)(uVar5 - uVar3))))))) goto LAB_00c0aecb;
  iVar1 = *(int *)((int)this + 0x1d4);
  if (uVar5 == (int)(uVar3 + 1) % 0xff) {
    if ((iVar1 == 0) || (*(int *)((int)this + 0x1c8) + iVar1 < *(int *)((int)this + 0x1e0))) {
      *(uint *)((int)this + 0xcc) = uVar5;
      F_00c090e0(this GEN_EDX_FWD,0);
    }
    F_00c0a5d0(this GEN_EDX_ARG);
    uVar3 = F_00c09930(this GEN_EDX_ARG,param_1);
    return uVar3;
  }
  if (*(int *)((int)this + 0x1e0) <= iVar1 + *(int *)((int)this + 0x1c8)) goto LAB_00c0aecb;
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
  (*(char *)(gen_frame + 0xb)) = '\0';
  if (piVar4 == *(int * PTR32 *)((int)this + 0x1c4)) {
LAB_00c0ae5b: ;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    iVar1 = *(int *)((int)this + 0x1c4);
    uVar3 = *(uint *)(iVar1 + 4);
    (*(uint *)(gen_frame + 0x0)) = uVar5;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    piVar4 = (int *)F_004296a0(0xc,0,0x25c);
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x4));
    if ((uint *)(piVar4 + 2) != (uint *)0x0) {
      piVar4[2] = (*(uint *)(gen_frame + 0x0));
    }
    if (*(int *)((int)this + 0x1c8) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0xb)) != '\0') goto LAB_00c0aec4;
      uVar5 = (uint)*(byte *)(piVar4[2] + 6);
      uVar3 = (uint)*(byte *)((int)param_1 + 6);
      if (uVar3 == uVar5) {
LAB_00c0ae47: ;
        (*(char *)(gen_frame + 0xb)) = '\x01';
      }
      else if (((uVar5 <= uVar3) || ((int)(uVar5 - uVar3) < 0x80)) &&
              ((uVar3 <= uVar5 || (0x7e < (int)(uVar3 - uVar5))))) {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        F_00c0f010((undefined *)((int)this + 0x1c4) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),piVar4,&(*(uint *)(gen_frame + 0x4)));
        goto LAB_00c0ae47;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x1c4));
    if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00c0ae5b;
  }
LAB_00c0aec4: ;
  *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + 1;
LAB_00c0aecb: ;
  if ((0 < *(int *)((int)this + 0xd4)) &&
     ((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x18))), iVar1 == 0 ||
      (iVar1 < *(int *)((int)this + 0xd4))))) {
    F_00c0a200(this GEN_EDX_ARG);
    uVar3 = F_00c09930(this GEN_EDX_ARG,param_1);
    return uVar3;
  }
  if ((0 < *(int *)((int)this + 0xd0)) &&
     ((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x14))), iVar1 == 0 ||
      (iVar1 < *(int *)((int)this + 0xd0))))) {
    F_00c08860(this GEN_EDX_ARG);
    uVar3 = F_00c09930(this GEN_EDX_ARG,param_1);
    return uVar3;
  }
  if (*(int *)((int)this + 0x148) == 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x28)));
    *(undefined4 *)((int)this + 0x148) = 1;
    *(undefined4 *)((int)this + 0x14c) = uVar2;
    *(undefined4 *)((int)this + 0x150) = 0;
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x130) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)((int)this + 0x138) = uVar7;
    uVar7 = F_00427e30();
    *(ulonglong *)((int)this + 0x140) = uVar7;
  }
  uVar3 = F_00c09930(this GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: FUN_00c0afb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c0afb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0afb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  if (param_2 < 6) {
LAB_00c0afc6: ;
    uVar2 = 6;
  }
  else {
    bVar1 = *param_1;
    if ((char)bVar1 < '\0') {
      uVar2 = 1;
    }
    else if ((bVar1 & 8) == 0) {
      if ((bVar1 & 0x20) == 0) {
        if ((bVar1 & 0x10) == 0) {
          if ((bVar1 & 0x40) == 0) goto LAB_00c0afc6;
          uVar2 = (param_2 != 6) - 1 & 2;
          if (5 < uVar2) goto switchD_00c0b019_caseD_1;
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 5;
    }
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xc0b130) + uVar2))))) {
    case 0: ;
      *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + 1;
    }
  }
switchD_00c0b019_caseD_1: ;
  if (*(char *)((int)this + 0x1a8) != '\0') {
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x158) = (int)_Var3;
    uVar4 = F_00427d90();
    *(ulonglong *)((int)this + 0x160) = uVar4;
    uVar4 = F_00427e30();
    *(ulonglong *)((int)this + 0x168) = uVar4;
  }
                    
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    uVar2 = F_00c08260(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2);
    F_00c0a320(this GEN_EDX_ARG,uVar2);
    F_00c09240(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return;
  case 2: ;
    uVar2 = F_00c08210(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,param_1,param_2);
    F_00c09930(this GEN_EDX_ARG,uVar2);
    return;
  case 4: ;
    uVar2 = F_00c083b0(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,param_1,param_2);
    F_00c0aaa0(this GEN_EDX_ARG,uVar2);
    return;
  default: ;
    return;
  }
}

/* ref: FUN_00c0b1d0 */
GEN_LIB GEN_FRAME unsigned int F_00c0b1d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc0b1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  undefined * this;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((byte *)(gen_frame + 0x4))[0x44] = (char)uVar1;
  ((byte *)(gen_frame + 0x4))[0x45] = (char)(uVar1 >> 8);
  ((byte *)(gen_frame + 0x4))[0x46] = (char)(uVar1 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0x47] = (char)(uVar1 >> 0x18);
  this = *(undefined * PTR32 *)(param_1 + 0x24);
  ((byte *)(gen_frame + 0x4))[0] = 0;
  ((byte *)(gen_frame + 0x4))[1] = 0;
  ((byte *)(gen_frame + 0x4))[2] = 0;
  ((byte *)(gen_frame + 0x4))[3] = 0;
  if (*(int *)((int)this + 0x1f8) != 0) {
    uVar2 = param_2;
    uVar3 = param_3;
    uVar1 = F_00ba7220(((byte *)(gen_frame + 0x4)) + 4 GEN_EDX_ARG,param_4,0);
    this = (undefined *)F_00c09700(this GEN_EDX_ARG,uVar1,uVar2,uVar3);
    F_00ba6730();
  }
  if (this != (undefined *)0x0) {
    F_00c0afb0(this GEN_EDX_ARG,param_2,param_3);
  }
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 68)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00c0b250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0b250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0b250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar3 = *(int * PTR32 *)((int)this + 8);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    do {
      piVar5 = piVar4;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar5 = (int *)piVar4[2];
        if (*(char *)((int)piVar5 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x11);
          piVar3 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x11);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar2 = (int *)piVar4[1];
          piVar3 = piVar4;
          while ((piVar5 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar2 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
      piVar3 = (int *)F_00c0a640((undefined *)piVar4[3] GEN_EDX_FWD);
      piVar4 = piVar5;
    } while (piVar5 != *(int * PTR32 *)((int)this + 8));
  }
  return (uint)piVar3;
}

/* ref: FUN_00c0b2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0b2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0b2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined4 in_ecx;
  int * piVar7;
  ulonglong uVar8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x110e7b4));
  F_00c0a640(this GEN_EDX_FWD);
  if (*(int *)((int)this + 0x78) == 0) {
    in_ecx = *(undefined4 *)((int)this + 0x70);
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x78) + 0x70)));
  }
  pvVar3 = (undefined *)F_00ba6e30(in_ecx GEN_EDX_ARG);
  if (pvVar3 == (undefined *)0x0) {
    pvVar3 = REFG(void * PTR32, 0x14c5958);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar4 = F_00ba7110(pvVar3 GEN_EDX_ARG);
  F_00c0ece0((undefined *)(uVar4 + 4) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x4)) != *(int *)(uVar4 + 8)) {
    F_00c0d6f0((undefined *)(uVar4 + 4) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_00c0eeb0((undefined *)(uVar4 + 4) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
  }
  if (*(int *)((int)this + 0xc4) != 0) {
    F_00406ad0(*(int *)((int)this + 0xc4));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1ac));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1b8)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1b8)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1b8));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1c4)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1c4));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1d0)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1d0));
  }
  piVar7 = *(int * PTR32 *)((int)this + 500);
  if (piVar7 != (int *)0x0) {
    piVar6 = (int *)*piVar7;
    piVar5 = (int *)*piVar6;
    *piVar6 = (int)piVar6;
    *(int *)(*piVar7 + 4) = *piVar7;
    piVar7[1] = 0;
    if (piVar5 != (int *)*piVar7) {
      do {
        piVar6 = (int *)*piVar5;
        F_00429760(piVar5,0xc,0x25c);
        piVar5 = piVar6;
      } while (piVar6 != (int *)*piVar7);
    }
    F_00429760(*piVar7,0xc,0x25c);
    F_00406ad0(piVar7);
  }
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x1f8);
  if (pvVar3 != (undefined *)0x0) {
    F_00c0ef70(pvVar3 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)pvVar3 + 4),
                 *(undefined4 * PTR32 *)((int)pvVar3 + 4));
    F_00429760(*(undefined4 *)((int)pvVar3 + 4),0x28,0x25c);
    F_00406ad0(pvVar3);
  }
  if ((*(int *)((int)this + 0x78) == 0) &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x74), puVar1 != (undefined4 *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
  }
  iVar2 = *(int *)((int)this + 0x1e4);
  if (iVar2 != 0) {
    F_00429760(iVar2,*(int *)((int)this + 0x1ec) - iVar2,0x25c);
  }
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  piVar7 = *(int * PTR32 *)((int)this + 0x1d0);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4))) = *(int *)((int)this + 0x1d0);
  *(undefined4 *)((int)this + 0x1d4) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1d0));
  }
  F_00429760(*(undefined4 *)((int)this + 0x1d0),0xc,0x25c);
  piVar7 = *(int * PTR32 *)((int)this + 0x1c4);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) = *(int *)((int)this + 0x1c4);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1c4)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1c4));
  }
  F_00429760(*(undefined4 *)((int)this + 0x1c4),0xc,0x25c);
  piVar7 = *(int * PTR32 *)((int)this + 0x1b8);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1b8) + 4))) = *(int *)((int)this + 0x1b8);
  *(undefined4 *)((int)this + 0x1bc) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1b8)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1b8));
  }
  F_00429760(*(undefined4 *)((int)this + 0x1b8),0xc,0x25c);
  piVar7 = *(int * PTR32 *)((int)this + 0x1ac);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 4))) = *(int *)((int)this + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1ac));
  }
  uVar8 = F_00429760(*(undefined4 *)((int)this + 0x1ac),0xc,0x25c);
  F_00ba6730();
  return (uint)uVar8;
}

/* ref: FUN_00c0b630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0b630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0b630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = *(uint *)((int)this + 0x74);
  if (*(int *)(uVar1 + 0x24) == 0) {
    this_00 = (undefined *)F_00ba6e30(*(undefined4 *)((int)this + 0x70) GEN_EDX_FWD);
    if (this_00 == (undefined *)0x0) {
      this_00 = REFG(void * PTR32, 0x14c5958);
    }
    pvVar2 = this;
    this_01 = (undefined *)F_00ba7110(this_00 GEN_EDX_ARG);
    F_00c091e0(this_01 GEN_EDX_ARG,pvVar2);
    gen_imp_InterlockedExchange(((LONG *)GEN_TOP((*(int *)((int)this + 0x74) + 0x24))),(LONG)this);
    F_00ba79d0(*(undefined4 *)((int)this + 0x74) GEN_EDX_ARG,((code *)REFP(0xc0b1d0)));
    F_00ba7aa0(*(undefined * PTR32 *)((int)this + 0x74) GEN_EDX_ARG,0,0xffffffff);
    uVar1 = F_00ba9ae0(*(undefined * PTR32 *)((int)this + 0x74) GEN_EDX_ARG,this_00);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0b6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0b6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0b630(this GEN_EDX_FWD);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0b6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0b6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  F_00c0b630(this GEN_EDX_FWD);
  if (this[0x80] == (undefined1)0x0) {
    puVar1 = (uint *)F_00406b90(0xc,0,0);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1[1] = 0;
      uVar2 = F_004296a0(0xc,0,0x25c);
      *puVar1 = uVar2;
      *(uint *)uVar2 = uVar2;
      *(uint *)(*puVar1 + 4) = *puVar1;
    }
    *(uint * PTR32 *)(this + 500) = puVar1;
  }
  uVar2 = F_00406b90(0x10,0,0);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(uVar2 + 8) = 0;
    uVar3 = F_004296a0(0x28,0,0x25c);
    *(uint *)(uVar2 + 4) = uVar3;
    *(uint *)uVar3 = uVar3;
    *((int *)GEN_TOP((*(int *)(uVar2 + 4) + 4))) = *(int *)(uVar2 + 4);
    *((int *)GEN_TOP((*(int *)(uVar2 + 4) + 8))) = *(int *)(uVar2 + 4);
    *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x20))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x21))) = 1;
  }
  *(uint *)(this + 0x1f8) = uVar2;
  uVar2 = F_00ba7510(*(undefined * PTR32 *)(this + 0x74) GEN_EDX_ARG,param_1,param_2);
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0b770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0b770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  F_00c0b630(this GEN_EDX_FWD);
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 500) + 4)));
  while (iVar1 == 0) {
    F_00bada50();
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 500) + 4)));
  }
  piVar2 = *(int * PTR32 *)(this + 500);
  piVar3 = (int *)*piVar2;
  iVar1 = *(int *)(*piVar3 + 8);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    F_00429760(piVar4,0xc,0x25c);
    piVar2 = piVar2 + 1;
    *piVar2 = *piVar2 - 1;
  }
  *(undefined4 *)(iVar1 + 0x70) = param_2;
  F_00bb1770(param_1 GEN_EDX_ARG,iVar1);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0b7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0b7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  F_00c0b630(this GEN_EDX_FWD);
  if ((this[0xc2] != (undefined1)0x0) || (this[0xc3] != (undefined1)0x0)) {
    return 0xffffffff;
  }
  F_00ba6880(this + 0x82 GEN_EDX_ARG,param_1);
  if (*(int *)(this + 0x7c) != 3) {
    *(undefined4 *)(this + 0x7c) = 3;
  }
  iVar1 = *(int *)(this + 0xc4);
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar1 + 0x20);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar1 + 0x28);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(iVar1 + 0x24);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(iVar1 + 8);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar1 + 0xc);
  uVar6 = F_00c4f2dd();
  *(int *)(this + 200) = (int)uVar6 % 0xff;
  F_00c08640(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(int)uVar6 % 0xff,(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),uVar2,
               uVar3,uVar4);
  F_00c08fb0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)(this + 0x198) = 1;
  *(int *)(this + 0x19c) = *(int *)(this + 0x2c) * 1000;
  *(undefined4 *)(this + 0x1a0) = 0;
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)(this + 0x180) = (int)_Var7;
  uVar8 = F_00427d90();
  *(ulonglong *)(this + 0x188) = uVar8;
  uVar8 = F_00427e30();
  *(ulonglong *)(this + 400) = uVar8;
  if (this[0x80] == (undefined1)0x0) {
    bVar5 = F_00c0cc30(this + 0x180 GEN_EDX_ARG);
    while ((bVar5 != 0 && (F_00bada50(), *(int *)(this + 0x7c) != 4))) {
      bVar5 = F_00c0cc30(this + 0x180 GEN_EDX_ARG);
    }
    *(undefined4 *)(this + 0x198) = 0;
    if (*(int *)(this + 0x7c) != 4) {
      F_00c08a10(this GEN_EDX_ARG);
      *(undefined4 *)(this + 0xd4) = 0;
      *(undefined4 *)(this + 0xd8) = 0;
      *(undefined4 *)(this + 0xd0) = 0;
      *(undefined4 *)(this + 0x120) = 0;
      if (*(int *)(this + 0x7c) == 3) {
        F_00c08500(this GEN_EDX_ARG);
      }
      else if (*(int *)(this + 0x7c) != 5) {
        return 0xffffffff;
      }
      if (*(int *)(this + 0x7c) != 6) {
        *(undefined4 *)(this + 0x7c) = 6;
      }
      return 0xffffffff;
    }
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf2 */
GEN_LIB GEN_NOFRAME uint F_00c0b9b0(void)
{
  GEN_ENTER(0xc0b9b0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf2 */
GEN_LIB GEN_NOFRAME uint F_00c0b9c0(void)
{
  GEN_ENTER(0xc0b9c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf2 */
GEN_LIB GEN_NOFRAME uint F_00c0b9d0(void)
{
  GEN_ENTER(0xc0b9d0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf2 */
GEN_LIB GEN_NOFRAME uint F_00c0b9e0(void)
{
  GEN_ENTER(0xc0b9e0u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf2 */
GEN_LIB GEN_NOFRAME uint F_00c0b9f0(void)
{
  GEN_ENTER(0xc0b9f0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: FUN_00c0ba30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ba30(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ba30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c0ba60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ba60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ba60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c0bb20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0bb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0bb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a1af40(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  return (uint)this;
}

/* ref: FUN_00c0bc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0bc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9), GEN_P(undefined4 param_10, unsigned int gen_a10), GEN_P(undefined4 param_11, unsigned int gen_a11))
{
  GEN_ENTER(0xc0bc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a11;)
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined4 *)((int)this + 0x1c) = param_8;
  *(undefined4 *)((int)this + 0x20) = param_9;
  *(undefined4 *)((int)this + 0x24) = param_10;
  *(undefined4 *)((int)this + 0x28) = param_11;
  return (uint)this;
}

/* ref: FUN_00c0bda0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0bda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf2 */
GEN_LIB GEN_NOFRAME uint F_00c0bdc0(void)
{
  GEN_ENTER(0xc0bdc0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf4 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0bdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0bdd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if ((int)uVar1 <= param_2) {
    *param_1 = this[4];
    param_1[1] = this[5];
    param_1[2] = this[6];
    param_1[3] = this[7];
    param_1[4] = (undefined1)((char)this[0xc] << 4);
    param_1[5] = this[0xd];
    param_1[6] = this[0xe];
    param_1[7] = (undefined1)0x0;
    param_1[8] = this[0x11];
    param_1[9] = this[0x10];
    param_1[10] = this[0x13];
    param_1[0xb] = this[0x12];
    param_1[0xc] = this[0x15];
    param_1[0xd] = this[0x14];
    param_1[0xe] = this[0x17];
    param_1[0xf] = this[0x16];
    param_1[0x10] = this[0x18];
    param_1[0x11] = this[0x19];
    param_1[0x12] = this[0x1a];
    param_1[0x13] = this[0x1b];
    return 1;
  }
  return 0;
}

/* ref: FUN_00c0bed0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0bed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0bef0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0bef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0bf10 */
GEN_LIB GEN_FRAME uint F_00c0bf10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0bf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0bf20 */
GEN_LIB GEN_FRAME uint F_00c0bf20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0bf20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00c0bf30 */
GEN_LIB GEN_FRAME uint F_00c0bf30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0bf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00c0bf60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0bf60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0bf90 */
GEN_LIB GEN_FRAME uint F_00c0bf90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0bf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00c0bfc0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0bfc0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00c0bfe0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0bfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0bfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c010 */
GEN_LIB GEN_FRAME uint F_00c0c010(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c020 */
GEN_LIB GEN_FRAME uint F_00c0c020(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00c0c030 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0c030(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0c060 */
GEN_LIB GEN_FRAME uint F_00c0c060(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x20;
}

/* ref: FUN_00c0c070 */
GEN_LIB GEN_FRAME uint F_00c0c070(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x21;
}

/* ref: FUN_00c0c080 */
GEN_LIB GEN_FRAME uint F_00c0c080(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c090 */
GEN_LIB GEN_FRAME uint F_00c0c090(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00c0c0a0 */
GEN_LIB GEN_FRAME uint F_00c0c0a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00c0c0b0 */
GEN_LIB GEN_FRAME uint F_00c0c0b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00c0c0c0 */
GEN_LIB GEN_FRAME uint F_00c0c0c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
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

/* ref: FUN_00c0c0e0 */
GEN_LIB GEN_FRAME uint F_00c0c0e0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
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

/* ref: FUN_00c0c120 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0c120(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0c150 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0c150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0c1b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0c1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c210 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0c210(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c240 */
GEN_LIB GEN_FRAME uint F_00c0c240(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c250 */
GEN_LIB GEN_FRAME uint F_00c0c250(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c280 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0c280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0c2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c2b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c2c0 */
GEN_LIB GEN_FRAME uint F_00c0c2c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00c0c2e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0c2e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c340 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c0c340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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

/* ref: FUN_00c0c390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c390(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c3a0 */
GEN_LIB GEN_FRAME uint F_00c0c3a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00c0c3b0 */
GEN_LIB GEN_FRAME uint F_00c0c3b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x11;
}

/* ref: FUN_00c0c3c0 */
GEN_LIB GEN_FRAME uint F_00c0c3c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00c0c3d0 */
GEN_LIB GEN_FRAME uint F_00c0c3d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00c0c3e0 */
GEN_LIB GEN_FRAME uint F_00c0c3e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00c0c400 */
GEN_LIB GEN_FRAME uint F_00c0c400(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00c0c420 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0c420(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c450 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0c450(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c480(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c490(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c4e0 */
GEN_LIB GEN_FRAME uint F_00c0c4e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c4f0 */
GEN_LIB GEN_FRAME uint F_00c0c4f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c500 */
GEN_LIB GEN_FRAME uint F_00c0c500(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c510 */
GEN_LIB GEN_FRAME uint F_00c0c510(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c530 */
GEN_LIB GEN_FRAME uint F_00c0c530(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c570 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0c570(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c0c5a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0c5a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c0c600 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0c600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c0c670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0c670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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

/* ref: FUN_00c0c6d0 */
GEN_LIB GEN_FRAME uint F_00c0c6d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c6e0 */
GEN_LIB GEN_FRAME uint F_00c0c6e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c6f0 */
GEN_LIB GEN_FRAME uint F_00c0c6f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c700 */
GEN_LIB GEN_FRAME uint F_00c0c700(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c710 */
GEN_LIB GEN_FRAME uint F_00c0c710(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c740 */
GEN_LIB GEN_FRAME uint F_00c0c740(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c750 */
GEN_LIB GEN_FRAME uint F_00c0c750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c760 */
GEN_LIB GEN_FRAME uint F_00c0c760(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c800 */
GEN_LIB GEN_FRAME uint F_00c0c800(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0c820 */
GEN_LIB GEN_FRAME uint F_00c0c820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0c840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c860 */
GEN_LIB GEN_FRAME uint F_00c0c860(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0c8b0 */
GEN_LIB GEN_FRAME uint F_00c0c8b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0c8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c0c8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0c8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined1 AVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (((byte)this[4] & 0x40) == 0) {
      AVar2 = (undefined1)0xff;
    }
    else {
      AVar2 = this[7];
    }
    *(undefined *)((int)puVar1 + 6) = this[6];
    puVar1[2] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    *(undefined2 *)(puVar1 + 1) = 0x640;
    *(undefined *)((int)puVar1 + 7) = AVar2;
    return (uint)puVar1;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0c930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0c930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0c960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0c960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    return ((uint)(byte)this[5] + piVar1[1]) - *piVar1;
  }
  return (uint)(byte)this[5] + *(int *)(this + 0x10);
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf4 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0c980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 6,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 6,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf4 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0ca30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ca30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 4,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 4,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0cae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 NVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    NVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x608;
    *(undefined *)((int)puVar2 + 6) = NVar1;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0cb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0cb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 RVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    RVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x610;
    *(undefined *)((int)puVar2 + 6) = RVar1;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0cb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0cbc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0cbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0cbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00c0cc30 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00c0cc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  __time64_t _Var2;
  
  if (*(int *)((int)this + 0x18) == 1) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *(int *)((int)this + 0xc) !=
         (uint)((uint)uVar1 < *(uint *)((int)this + 8))) ||
       (*(uint *)((int)this + 0x1c) <= (uint)uVar1 - *(uint *)((int)this + 8))) {
      if (*(int *)((int)this + 0x20) == 0) {
        *(undefined4 *)((int)this + 0x18) = 0;
        return 1;
      }
      _Var2 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *(ulonglong *)((int)this + 8) = uVar1;
      uVar1 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar1;
      *(undefined4 *)((int)this + 0x18) = 2;
      return 1;
    }
  }
  else if (*(int *)((int)this + 0x18) == 2) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *(int *)((int)this + 0xc) !=
         (uint)((uint)uVar1 < *(uint *)((int)this + 8))) ||
       (*(uint *)((int)this + 0x20) <= (uint)uVar1 - *(uint *)((int)this + 8))) {
      _Var2 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *(ulonglong *)((int)this + 8) = uVar1;
      uVar1 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar1;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0cce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 SVar1;
  undefined1 SVar2;
  undefined1 SVar3;
  undefined1 SVar4;
  undefined1 SVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 * puVar10;
  
  puVar10 = (undefined4 *)F_00406b90(0x1c,0,0);
  if (puVar10 != (undefined4 *)0x0) {
    SVar1 = this[0x1b];
    SVar2 = this[0x1a];
    SVar3 = this[0x19];
    SVar4 = this[0x18];
    uVar6 = *(undefined2 *)(this + 0x14);
    uVar7 = *(undefined2 *)(this + 0x12);
    uVar8 = *(undefined2 *)(this + 0x10);
    uVar9 = *(undefined2 *)(this + 0x16);
    SVar5 = this[0xd];
    *(undefined *)((int)puVar10 + 6) = this[6];
    *(undefined1 *)((int)puVar10 + 7) = 0;
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 1;
    *(undefined1 *)((int)puVar10 + 0xe) = 1;
    *(undefined2 *)(puVar10 + 4) = uVar8;
    *(undefined2 *)((int)puVar10 + 0x12) = uVar7;
    *(undefined2 *)(puVar10 + 5) = uVar6;
    *(undefined *)(puVar10 + 6) = SVar4;
    *(undefined2 *)((int)puVar10 + 0x16) = uVar9;
    *(undefined *)((int)puVar10 + 0x19) = SVar3;
    *(undefined *)((int)puVar10 + 0xd) = SVar5;
    *(undefined2 *)(puVar10 + 1) = 0x1680;
    *puVar10 = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
    *(undefined *)((int)puVar10 + 0x1a) = SVar2;
    *(undefined *)((int)puVar10 + 0x1b) = SVar1;
    return (uint)puVar10;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0cda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0cdf0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0ce10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ce10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00c0ce40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ce40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce80 */
GEN_LIB GEN_FRAME uint F_00c0ce80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0ce80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00c0ce90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ce90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ce90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0cea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0cea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0cea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0cef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0cef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0cef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
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

/* ref: FUN_00c0cf50 */
GEN_LIB GEN_FRAME uint F_00c0cf50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0cf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00c0cf70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0cf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0cf70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0cf90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0cf90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0cf90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_00c0d050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d050(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d060(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d070 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c0d070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00c0d0f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
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

/* ref: FUN_00c0d180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00c0c340(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00c0d1d0 */
GEN_LIB GEN_FRAME uint F_00c0d1d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0d200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d220 */
GEN_LIB GEN_FRAME uint F_00c0d220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0d240 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c600(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0d260 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0d260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c670(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0d270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d320 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0d320(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0d3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0d3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0d3e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d3e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0d3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d3f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0d440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0d460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0d4a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0d4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0d570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d570(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d5d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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

/* ref: FUN_00c0d650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d650(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0d670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0d670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0d670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0d070(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0d680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00c0d6b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0d6b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x11) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x11) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x11) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0d780 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_00c0d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c0d830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00c0d860 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0d860(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c0d8e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c0d8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c0d8e0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x14,0x25c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}

/* ref: FUN_00c0d920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x11) == '\0') {
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

/* ref: FUN_00c0d980 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c0d980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0d980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c0d980(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x28,0x25c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return;
}

/* ref: FUN_00c0d9c0 */
GEN_LIB GEN_FRAME uint F_00c0d9c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00c0d9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0d9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0d9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c0da50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0da50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc0da50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x14,0x25c);
                    
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
  cVar1 = *(char *)(param_4[1] + 0x10);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x10) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(iVar2 + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x11) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x11) == '\0') {
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
LAB_00c0dc4d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x10) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x11))) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x11) == '\0') {
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
        goto LAB_00c0dc4d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x10);
  } while( true );
}

/* ref: FUN_00c0dc80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0dc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc0dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x28,0x25c);
                    
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
LAB_00c0de7d: ;
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
        goto LAB_00c0de7d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00c0deb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0deb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c0c670(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c0dec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0dec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0dec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0dee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0dee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0dee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0df00 */
GEN_LIB GEN_FRAME unsigned int F_00c0df00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc0df00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
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
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00c0df70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0df70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0df70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00c0dfd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0dfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0dfd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25c);
  return (uint)uVar3;
}

/* ref: FUN_00c0e020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e030(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e080(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c0e0b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e0b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0e0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e0d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c0e0e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e0e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c0c340(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
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
      goto LAB_00c0e1fa;
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
      piVar4 = (int *)F_00c0c0e0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar5 = F_00c0c0c0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00c0e1fa: ;
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
            F_00c0d5d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00c0cef0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              F_00c0d5d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00c0e2b8: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00c0cef0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_00c0e2b8;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00c0d5d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            F_00c0cef0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00429760(piVar3,0x28,0x25c);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c0e340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00c0d070(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00c0e360 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0e360(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c0e370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c0e420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0e460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c0d6f0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00c0e480 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0e480(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0e480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c0e490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c0e580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c0d000(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0e5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0e5a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x11))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00c0d070(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x11) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x11) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x11) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_00c0e6ba;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x11) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      piVar4 = (int *)F_00c0c400(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      uVar5 = F_00c0c3e0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00c0e6ba: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00c0d920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(*piVar6 + 0x10) != '\x01') || (*(char *)(piVar6[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x10) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00c0d0f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              F_00c0d920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00c0e778: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00c0d0f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(piVar6[2] + 0x10) == '\x01') && (*(char *)(*piVar6 + 0x10) == '\x01'))
            goto LAB_00c0e778;
            if (*(char *)(*piVar6 + 0x10) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_00c0d920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(*piVar6 + 0x10) = 1;
            F_00c0d0f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0x25c);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c0e800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0e800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0e800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    F_00c0d8e0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x14,0x25c);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x11);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00c0e860 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0e860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0e860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x21);
  while (cVar1 == '\0') {
    F_00c0d980(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x28,0x25c);
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

/* ref: FUN_00c0e8c0 */
GEN_LIB GEN_FRAME unsigned int F_00c0e8c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0e8c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00c0df00(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00c0e8e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0e8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00c0da50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00c0c600(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00c0da50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x14,0x25c);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c0e9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0e9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
          puVar6 = (undefined4 *)F_00c0dc80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(int *)&gen_args[2]));
          *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00c0c670(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      }
      puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14)) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[4] < *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        puVar6 = (undefined4 *)F_00c0dc80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),iVar4,puVar3,(*(int *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      F_00429760((*(int *)&gen_args[2]),0x28,0x25c);
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
        goto LAB_00c0ea33;
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
LAB_00c0ea33: ;
        puVar5 = (undefined4 *)puVar6[2];
      }
    }
    cVar1 = *(char *)((int)puVar5 + 0x21);
    puVar3 = puVar6;
    puVar6 = puVar5;
    iVar4 = (*(int *)(gen_frame + 0x8));
  } while( true );
}

/* ref: FUN_00c0eae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0eae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc0eae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_3;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_2 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  *param_1 = *(undefined4 *)(param_2 + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0eb60 */
GEN_LIB GEN_FRAME uint F_00c0eb60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc0eb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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

/* ref: FUN_00c0ebd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ebd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ebd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c0ec30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ec30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c0ec90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ec90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ec90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x25c);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0ece0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ece0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ece0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0ed50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0ed50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0ed50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25c);
  return (uint)uVar3;
}

/* ref: FUN_00c0eda0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0eda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0eda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c0ee00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ee00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ee00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x25c);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0ee50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ee50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0ee50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c0d000(this GEN_EDX_FWD,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    if ((*(uint *)(uVar1 + 0x14) <= param_2[1]) &&
       ((param_2[1] != *(uint *)(uVar1 + 0x14) || (*(uint *)(uVar1 + 0x10) <= *param_2)))) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0eeb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0eeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc0eeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00c0e800(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x11);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00c0e5a0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0ef50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0ef50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00c0eeb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c0ef70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0ef70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc0ef70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00c0e860(this GEN_EDX_FWD);
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
    F_00c0e0e0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00c0f010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc0f010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25c);
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_3;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_2 + 4) = (uint)piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  *param_1 = *(uint *)(param_2 + 4);
  return (uint)param_1;
}

/* ref: FUN_00c0f080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0f080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_00c0e8e0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00c0f0e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x28,0,0x25c);
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

/* ref: FUN_00c0f130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x25c);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f1c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0f1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x25c);
    piVar1 = (int *)uVar2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00c0f1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0eeb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc0f230u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c0d6f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00c0df00((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00c0eeb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00c0f290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0f290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x25c);
    piVar1 = (int *)uVar2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00c0f2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c0f2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x28,0,0x25c);
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
  F_00c0e9c0(this GEN_EDX_ARG,param_1,puVar3,0);
  return param_1;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00c0ed50(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0eeb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0f520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0f620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_00bb6510(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00c0f640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0ef70(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 DVar1;
  undefined1 DVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  
  if (*(int *)(this + 0x14) == 0) {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    if (((byte)this[4] & 0x40) == 0) {
      DVar1 = (undefined1)0xff;
    }
    else {
      DVar1 = this[7];
    }
    uVar5 = *(undefined4 *)(this + 0x10);
    iVar8 = *(int *)(this + 0xc);
    DVar2 = this[6];
    *(undefined2 *)(puVar6 + 1) = 0x640;
    *(undefined *)((int)puVar6 + 6) = DVar2;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,uVar5);
    }
  }
  else {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    piVar7 = *(int * PTR32 *)(this + 0x14);
    iVar3 = piVar7[1];
    iVar4 = *piVar7;
    iVar8 = *piVar7;
    if (((byte)this[4] & 0x40) == 0) {
      DVar1 = (undefined1)0xff;
    }
    else {
      DVar1 = this[7];
    }
    DVar2 = this[6];
    *(undefined2 *)(puVar6 + 1) = 0x640;
    *(undefined *)((int)puVar6 + 6) = DVar2;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,iVar3 - iVar4);
    }
  }
  puVar6[5] = piVar7;
  F_00c46aa0(*piVar7,iVar8,piVar7[1] - *piVar7);
  *(undefined *)((int)puVar6 + 7) = DVar1;
  *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) | 0x40;
  return (uint)puVar6;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0f7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 EVar1;
  undefined1 EVar2;
  undefined1 EVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  int local_14;
  
  if (*(int *)(this + 0x14) == 0) {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    if (((byte)this[4] & 0x40) == 0) {
      EVar1 = (undefined1)0xff;
    }
    else {
      EVar1 = this[7];
    }
    EVar2 = this[0x10];
    local_14 = *(int *)(this + 0xc);
    EVar3 = this[6];
    *(undefined1 *)(puVar6 + 1) = 0x20;
    *(byte *)((int)puVar6 + 5) = (char)EVar2 + 6;
    *(undefined *)((int)puVar6 + 6) = EVar3;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,(uint)(byte)EVar2);
      goto LAB_00c0f913;
    }
  }
  else {
    puVar6 = (undefined4 *)F_00406b90(0x18,0,0);
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    piVar7 = *(int * PTR32 *)(this + 0x14);
    iVar4 = piVar7[1];
    iVar5 = *piVar7;
    local_14 = *piVar7;
    if (((byte)this[4] & 0x40) == 0) {
      EVar1 = (undefined1)0xff;
    }
    else {
      EVar1 = this[7];
    }
    EVar2 = this[6];
    *(undefined1 *)(puVar6 + 1) = 0x20;
    *(char *)((int)puVar6 + 5) = (char)(iVar4 - iVar5) + '\x06';
    *(undefined *)((int)puVar6 + 6) = EVar2;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    puVar6[3] = 0;
    puVar6[4] = 0;
    piVar7 = (int *)F_00406b90(0x10,0,0);
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      F_00bb6510(piVar7 GEN_EDX_ARG,iVar4 - iVar5 & 0xff);
      goto LAB_00c0f913;
    }
  }
  piVar7 = (int *)0x0;
LAB_00c0f913: ;
  puVar6[5] = piVar7;
  F_00c46aa0(*piVar7,local_14,piVar7[1] - *piVar7);
  *(undefined *)((int)puVar6 + 7) = EVar1;
  *(byte *)(puVar6 + 1) = *(byte *)(puVar6 + 1) | 0x40;
  return (uint)puVar6;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0f950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00c0b2c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerWinsock::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0f990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0f990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  if (param_2 != 1) {
    return 0;
  }
  uVar1 = *(uint *)(this + 0x148);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x14c;
    do {
      if (*(uint *)pPVar3 == param_1) break;
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  if ((uVar2 == uVar1) && (uVar1 < 0x40)) {
    *(uint *)(this + uVar2 * 4 + 0x14c) = param_1;
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
  }
  uVar1 = *(uint *)(this + 0x24c);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x250;
    do {
      if (*(uint *)pPVar3 == param_1) break;
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  if ((uVar2 == uVar1) && (uVar1 < 0x40)) {
    *(uint *)(this + uVar2 * 4 + 0x250) = param_1;
    *(int *)(this + 0x24c) = *(int *)(this + 0x24c) + 1;
  }
  if (*(uint *)(this + 0x350) < param_1) {
    *(uint *)(this + 0x350) = param_1;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0fa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc0fa30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  if (param_2 == 1) {
    uVar1 = *(uint *)(this + 0x148);
    if (uVar1 != 0) {
      pPVar3 = this + 0x14c;
      uVar2 = 0;
LAB_00c0fa52: ;
      if (*(int *)pPVar3 != param_1) goto code_r0x00c0fa56;
      if (uVar2 < uVar1 - 1) {
        pPVar3 = this + uVar2 * 4 + 0x14c;
        do {
          *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
          uVar2 = uVar2 + 1;
          pPVar3 = pPVar3 + 4;
        } while (uVar2 < *(int *)(this + 0x148) - 1U);
      }
      *(int *)(this + 0x148) = *(int *)(this + 0x148) - 1;
    }
LAB_00c0fa8a: ;
    uVar1 = *(uint *)(this + 0x24c);
    uVar2 = 0;
    if (uVar1 != 0) {
      pPVar3 = this + 0x250;
      while (*(int *)pPVar3 != param_1) {
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
        if (uVar1 <= uVar2) {
          return 0;
        }
      }
      if (uVar2 < uVar1 - 1) {
        pPVar3 = this + uVar2 * 4 + 0x250;
        do {
          *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
          uVar2 = uVar2 + 1;
          pPVar3 = pPVar3 + 4;
        } while (uVar2 < *(int *)(this + 0x24c) - 1U);
      }
      *(int *)(this + 0x24c) = *(int *)(this + 0x24c) - 1;
    }
  }
  return 0;
code_r0x00c0fa56: ;
  uVar2 = uVar2 + 1;
  pPVar3 = pPVar3 + 4;
  if (uVar1 <= uVar2) goto LAB_00c0fa8a;
  goto LAB_00c0fa52;
}

/* ref: Client::Network::Socket::PollerWinsock::vf5 */
GEN_LIB GEN_NOFRAME uint F_00c0faf0(void)
{
  GEN_ENTER(0xc0faf0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = gen_imp_WSAGetLastError();
  return -(uint)(iVar1 != 0x2734);
}

/* ref: Client::Network::Socket::PollerWinsock::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0fb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0fb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x220];
  undefined * readfds;
  char cVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined * pPVar8;
  int * piVar9;
  undefined * pfVar10;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if (*(int *)(this + 0xc) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_FWD);
    return 0;
  }
  piVar9 = *(int * PTR32 *)(this + 8);
  readfds = (undefined *)(this + 0x44);
  (*(uint *)((char *)(readfds))) = 0;
  piVar4 = (int *)*piVar9;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (piVar4 != piVar9) {
    do {
      iVar7 = piVar4[4];
      *(undefined2 *)(iVar7 + 4) = 0;
      *(undefined1 *)(iVar7 + 6) = 0;
      uVar2 = (*(uint *)((char *)(readfds)));
      uVar6 = 0;
      if (uVar2 != 0) {
        pPVar8 = this + 0x48;
        do {
          if (*(int *)pPVar8 == piVar4[3]) break;
          uVar6 = uVar6 + 1;
          pPVar8 = pPVar8 + 4;
        } while (uVar6 < uVar2);
      }
      if ((uVar6 == uVar2) && (uVar2 < 0x40)) {
        *(int *)(this + uVar6 * 4 + 0x48) = piVar4[3];
        (*(uint *)((char *)(readfds))) = (*(uint *)((char *)(readfds))) + 1;
      }
      if ((*(uint *)(gen_frame + 0x8)) < (uint)piVar4[3]) {
        (*(uint *)(gen_frame + 0x8)) = piVar4[3];
      }
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar9 = (int *)piVar4[2];
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar9 + 0x15);
          piVar4 = piVar9;
          piVar9 = (int *)*piVar9;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar9 + 0x15);
            piVar4 = piVar9;
            piVar9 = (int *)*piVar9;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar9 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar9 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar9 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)(this + 8));
  }
  pPVar8 = this + 0x148;
  pfVar10 = ((undefined *)(gen_frame + 0x10));
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 - 1) {
    (*(uint *)((char *)(pfVar10))) = *(uint *)pPVar8;
    pPVar8 = pPVar8 + 4;
    pfVar10 = (undefined *)((SOCKET *)(((char *)(pfVar10) + 4)));
  }
  (*(long *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = 0;
  (*(long *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = 0;
  pPVar8 = this + 0x24c;
  pfVar10 = ((undefined *)(gen_frame + 0x114));
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 - 1) {
    (*(uint *)((char *)(pfVar10))) = *(uint *)pPVar8;
    pPVar8 = pPVar8 + 4;
    pfVar10 = (undefined *)((SOCKET *)(((char *)(pfVar10) + 4)));
  }
  iVar7 = gen_imp_select((*(uint *)(gen_frame + 0x8)) + 1,readfds,((undefined *)(gen_frame + 0x10)),((undefined *)(gen_frame + 0x114)),&(*(undefined8 *)(gen_frame + 0x0)));
  if (iVar7 != 0) {
    if (-1 < iVar7) {
      piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8)));
      if (piVar9 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8)) {
        do {
          iVar7 = piVar9[4];
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],readfds);
          *(bool *)(iVar7 + 4) = iVar5 != 0;
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],((undefined *)(gen_frame + 0x10)));
          *(bool *)(iVar7 + 5) = iVar5 != 0;
          iVar5 = gen_imp___WSAFDIsSet(piVar9[3],((undefined *)(gen_frame + 0x114)));
          *(bool *)(iVar7 + 6) = iVar5 != 0;
          if (*(char *)((int)piVar9 + 0x15) == '\0') {
            piVar4 = (int *)piVar9[2];
            if (*(char *)((int)piVar4 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar4 + 0x15);
              piVar9 = piVar4;
              piVar4 = (int *)*piVar4;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar4 + 0x15);
                piVar9 = piVar4;
                piVar4 = (int *)*piVar4;
              }
            }
            else {
              cVar1 = *(char *)(piVar9[1] + 0x15);
              piVar3 = (int *)piVar9[1];
              piVar4 = piVar9;
              while ((piVar9 = piVar3, cVar1 == '\0' && (piVar4 == (int *)piVar9[2]))) {
                cVar1 = *(char *)(piVar9[1] + 0x15);
                piVar3 = (int *)piVar9[1];
                piVar4 = piVar9;
              }
            }
          }
        } while (piVar9 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 8));
      }
      F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
      return 1;
    }
    F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
    return 0xffffffff;
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0fd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0fd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c11300((undefined *)this GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(uint *)(this + 0x350) < param_1) {
    *(uint *)(this + 0x350) = param_1;
  }
  return uVar1;
}

/* ref: FUN_00c0fd80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0fd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0fd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c116d0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  return (uint)this;
}

/* ref: FUN_00c0fdb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c0fdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc0fdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  uVar1 = F_00c11750(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Network::Socket::PollerWinsock::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c0fdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc0fdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * pPVar3;
  
  uVar1 = F_00c11830((undefined *)this GEN_EDX_FWD,param_1);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  uVar1 = *(uint *)(this + 0x44);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x48;
LAB_00c0fdf0: ;
    if (*(int *)pPVar3 != param_1) goto code_r0x00c0fdf4;
    if (uVar2 < uVar1 - 1) {
      pPVar3 = this + uVar2 * 4 + 0x48;
      do {
        *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
      } while (uVar2 < *(int *)(this + 0x44) - 1U);
    }
    *(int *)(this + 0x44) = *(int *)(this + 0x44) - 1;
  }
LAB_00c0fe1b: ;
  uVar1 = *(uint *)(this + 0x148);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x14c;
    do {
      if (*(int *)pPVar3 == param_1) {
        if (uVar2 < uVar1 - 1) {
          pPVar3 = this + uVar2 * 4 + 0x14c;
          do {
            *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
            uVar2 = uVar2 + 1;
            pPVar3 = pPVar3 + 4;
          } while (uVar2 < *(int *)(this + 0x148) - 1U);
        }
        *(int *)(this + 0x148) = *(int *)(this + 0x148) - 1;
        break;
      }
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
    } while (uVar2 < uVar1);
  }
  uVar1 = *(uint *)(this + 0x24c);
  uVar2 = 0;
  if (uVar1 != 0) {
    pPVar3 = this + 0x250;
    while (*(int *)pPVar3 != param_1) {
      uVar2 = uVar2 + 1;
      pPVar3 = pPVar3 + 4;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    if (uVar2 < uVar1 - 1) {
      pPVar3 = this + uVar2 * 4 + 0x250;
      do {
        *(undefined4 *)pPVar3 = *(undefined4 *)(pPVar3 + 4);
        uVar2 = uVar2 + 1;
        pPVar3 = pPVar3 + 4;
      } while (uVar2 < *(int *)(this + 0x24c) - 1U);
    }
    *(int *)(this + 0x24c) = *(int *)(this + 0x24c) - 1;
  }
  return 0;
code_r0x00c0fdf4: ;
  uVar2 = uVar2 + 1;
  pPVar3 = pPVar3 + 4;
  if (uVar1 <= uVar2) goto LAB_00c0fe1b;
  goto LAB_00c0fdf0;
}

/* ref: FUN_00c0fed0 */
GEN_LIB GEN_FRAME uint F_00c0fed0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0fed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00c0fee0 */
GEN_LIB GEN_FRAME uint F_00c0fee0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc0fee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00c0ff20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0ff20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ff20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c0ffa0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0ffa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ffa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c0ffd0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c0ffd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc0ffd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c10010 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c10010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc10010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c10060 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c10060(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc10060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c100b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c100b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc100b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00c10100 */
GEN_LIB GEN_FRAME uint F_00c10100(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10110 */
GEN_LIB GEN_FRAME uint F_00c10110(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10180 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c10180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
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
      return (uint)this;
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
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c101e0 */
GEN_LIB GEN_FRAME uint F_00c101e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc101e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c101f0 */
GEN_LIB GEN_FRAME uint F_00c101f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc101f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10200 */
GEN_LIB GEN_FRAME uint F_00c10200(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10210 */
GEN_LIB GEN_FRAME byte F_00c10210(void)
{
  GEN_ENTER(0xc10210u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00c10240 */
GEN_LIB GEN_FRAME uint F_00c10240(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c102a0 */
GEN_LIB GEN_FRAME uint F_00c102a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc102a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c102b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c102b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc102b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c102d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c102d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc102d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c102f0 */
GEN_LIB GEN_FRAME uint F_00c102f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc102f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10320 */
GEN_LIB GEN_FRAME uint F_00c10320(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10330 */
GEN_LIB GEN_FRAME uint F_00c10330(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc10330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c10370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc10370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
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

/* ref: FUN_00c103d0 */
GEN_LIB GEN_FRAME uint F_00c103d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc103d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00c10410 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_00c10410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc10410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
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

/* ref: FUN_00c10460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00bae660(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00c104b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c104b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc104b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c104e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c104e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc104e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c10180(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c104f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c104f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc104f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c10550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc10550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c10570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc10570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c10590 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00c10590(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc10590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c105d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c105d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc105d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bae660(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c105e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c105e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc105e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_00c10660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c10660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c106e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00c106e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc106e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00c106e0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0x25a);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_00c10720 */
GEN_LIB GEN_FRAME uint F_00c10720(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc10720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00c10740 */
GEN_LIB GEN_FRAME uint F_00c10740(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc10740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c10760 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c10760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c10180(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c10770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00c10790 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00c10790(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00c107b0 */
GEN_LIB GEN_FRAME uint F_00c107b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc107b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c107d0 */
GEN_LIB GEN_FRAME uint F_00c107d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc107d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c10830 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c10830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x25a);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x25a);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00c108f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c108f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc108f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00c106e0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0x25a);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00c10950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc10950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x18,0x25a);
                    
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
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
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
LAB_00c10b4d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
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
        goto LAB_00c10b4d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00c10b80 */
GEN_LIB GEN_FRAME uint F_00c10b80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc10b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  return (uint)param_2;
}

/* ref: FUN_00c10ba0 */
GEN_LIB GEN_FRAME unsigned int F_00c10ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc10ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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

/* ref: FUN_00c10bd0 */
GEN_LIB GEN_FRAME unsigned int F_00c10bd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc10bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00c10c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc10c00u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00bae660(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00c10d1a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00bae620(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00c0fee0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00c10d1a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00c105e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00c10370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00c105e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00c10dd8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00c10370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00c10dd8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00c105e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00c10370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0x25a);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c10e60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c10e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc10e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00c10830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c10e90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc10e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
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

/* ref: FUN_00c10f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc10f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00c108f0(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00c10c00(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00c10fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c10fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc10fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00c10950((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00c10180(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00c10950((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,0x25a);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00c11090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc11090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,0x25a);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_1[1];
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = *param_1;
    puVar2[4] = uVar1;
  }
  return (uint)puVar2;
}

/* ref: FUN_00c110e0 */
GEN_LIB GEN_FRAME unsigned int F_00c110e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc110e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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

/* ref: FUN_00c11110 */
GEN_LIB GEN_FRAME unsigned int F_00c11110(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc11110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00c11140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c11140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc11140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00c10830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c11170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc11170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
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
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c11220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc11220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00c10f10(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c11240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc11240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,0x25a);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_2[1];
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = *param_2;
    puVar2[4] = uVar1;
  }
  F_00c10fb0(this GEN_EDX_ARG,param_1,puVar2,0);
  return param_1;
}

/* ref: FUN_00c112a0 */
GEN_LIB GEN_FRAME unsigned int F_00c112a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc112a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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

/* ref: FUN_00c112d0 */
GEN_LIB GEN_FRAME unsigned int F_00c112d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc112d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerBase::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11300u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)&gen_args[1]) == -1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = (int *)F_00c11170((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)),&(*(int *)&gen_args[1]));
  if (*piVar1 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if (uVar2 != 0) {
      (*(int *)(gen_frame + 0x14)) = (*(int *)&gen_args[1]);
      (*(uint *)(gen_frame + 0x18)) = uVar2;
      F_00c11240((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x14)));
      *(undefined2 *)(uVar2 + 4) = 0;
      *(undefined1 *)(uVar2 + 6) = 0;
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar2;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c113a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c113a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc113a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00c10830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c113d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c113d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc113d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c10f10(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c11450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc11450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
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
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x25a);
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
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x25a);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00c115d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c115d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc115d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c10f10(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00c11650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc11650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00c11450(this GEN_EDX_FWD,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 2;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x25a);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: FUN_00c116d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c116d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc116d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e7f0));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar2 = F_004296a0(0x18,0,0x25a);
  *(uint *)((int)this + 8) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  puVar1 = (undefined4 *)((int)this + 0x14);
  *puVar1 = 0;
  puVar3 = (undefined4 *)F_004296a0(8,0,0x25a);
  *puVar1 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c));
  return (uint)this;
}

/* ref: FUN_00c11750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc11750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e7f0));
  F_00bb57c0(this GEN_EDX_FWD);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c));
  F_00c10830((undefined *)((int)this + 0x14) GEN_EDX_ARG);
  F_00429760(*(undefined4 *)((int)this + 0x14),8,0x25a);
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00c10f10((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,0x25a);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::PollerBase::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c117c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc117c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00c11750(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerWinsock::vf4 */
GEN_LIB GEN_NOFRAME uint F_00c117f0(void)
{
  GEN_ENTER(0xc117f0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00406b90(8,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x110478c));
    return (uint)puVar1;
  }
  return 0;
}

/* ref: FUN_00c11820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc11820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c11650(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::PollerBase::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c11830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc11830u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int * piVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x2c);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)&gen_args[1]) == -1) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0xffffffff;
  }
  piVar2 = (int *)F_00c11170((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
  iVar1 = *piVar2;
  if (iVar1 == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
    return 0xffffffff;
  }
  *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 7))) = 1;
  F_00c11650((*(undefined * PTR32 *)&gen_args[0]) + 0x14 GEN_EDX_ARG,iVar1 + 0x10);
  F_00c10c00((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,&(*(int *)&gen_args[1]),iVar1);
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00c118d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc118d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110e818));
  F_00c11750(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c11910 */
GEN_LIB GEN_NOFRAME uint F_00c11910(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc11910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00c02740(param_1,((char *)REFP(0x1347d34)));
  return 0;
}

/* ref: FUN_00c11930 */
GEN_LIB GEN_NOFRAME uint F_00c11930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc11930u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x10),param_2,param_3,(*(int *)&gen_a3));
  if ((uVar2 == 0) && ((*(int *)&gen_a3) != 0)) {
                    
    F_00bb93a0(param_1,4);
  }
  *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + ((*(int *)&gen_a3) - param_3);
  return uVar2;
}

/* ref: FUN_00c11980 */
GEN_LIB GEN_NOFRAME uint F_00c11980(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc11980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_3;
  if (iVar1 < param_5 / 2) {
    iVar3 = iVar1 * 2;
    if (iVar3 < 4) {
      iVar3 = 4;
    }
  }
  else {
    iVar3 = param_5;
    if (param_5 <= iVar1) {
      F_00c02740(param_1,param_6);
    }
  }
  if (iVar3 + 1U <= (uint)(0xfffffffd / (ulonglong)param_4)) {
    uVar2 = F_00c11930(param_1,param_2,*param_3 * param_4,iVar3 * param_4);
    *param_3 = iVar3;
    return uVar2;
  }
  F_00c02740(param_1,((char *)REFP(0x1347d34)));
  *param_3 = iVar3;
  return 0;
}

/* ref: FUN_00c11a10 */
GEN_LIB GEN_NOFRAME uint F_00c11a10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc11a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 0x3c);
  if (puVar1[2] < puVar1[1] + 1) {
    if (0x7ffffffd < puVar1[2]) {
      F_00c11b70(param_1,((char *)REFP(0x1347e24)),0);
    }
    uVar2 = puVar1[2] * 2;
    if (uVar2 + 1 < 0xfffffffe) {
      uVar3 = F_00c11930(*(undefined4 *)(param_1 + 0x34),*puVar1,puVar1[2],uVar2);
    }
    else {
      uVar3 = F_00c11910(*(undefined4 *)(param_1 + 0x34));
    }
    puVar1[2] = uVar2;
    *puVar1 = uVar3;
  }
  uVar2 = puVar1[1];
  *(undefined1 *)(uVar2 + *puVar1) = (undefined1)param_2;
  puVar1[1] = puVar1[1] + 1;
  return uVar2;
}

/* ref: FUN_00c11a90 */
GEN_LIB GEN_NOFRAME uint F_00c11a90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc11a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  char * pcVar1;
  char * pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    pcVar1 = (&REFG(undefined * PTR32, 0x110e840))[(int)(iVar5)];
    pcVar2 = pcVar1;
    do {
      cVar4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar4 != '\0');
    uVar3 = F_00c05a80(param_1,pcVar1,(int)pcVar2 - (int)(pcVar1 + 1));
    *(byte *)(uVar3 + 5) = *(byte *)(uVar3 + 5) | 0x20;
    cVar4 = (char)iVar5;
    iVar5 = iVar5 + 1;
    *(char *)(uVar3 + 6) = cVar4 + '\x01';
  } while (iVar5 < 0x15);
  return uVar3;
}

/* ref: FUN_00c11ae0 */
GEN_LIB GEN_NOFRAME uint F_00c11ae0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc11ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (0x100 < param_2) {
    return *(uint *)(&REFG(undefined, 0x110e43c) + param_2 * 4);
  }
  iVar1 = F_00c489cc(param_2);
  if (iVar1 != 0) {
    uVar2 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347e40)),param_2);
    return uVar2;
  }
  uVar2 = F_00c00790(*(undefined4 *)(param_1 + 0x34),&REFG(undefined, 0x1347e4c),param_2);
  return uVar2;
}

/* ref: FUN_00c11b70 */
GEN_LIB GEN_NOFRAME uint F_00c11b70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc11b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0xc));
  F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)(param_1 + 0x40) + 0x10,0x50);
  uVar1 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                       *(undefined4 *)(param_1 + 4),param_2);
  if (param_3 != 0) {
    if ((param_3 < 0x11c) || (0x11e < param_3)) {
      uVar2 = F_00c11ae0(param_1,param_3);
    }
    else {
      F_00c11a10(param_1,0);
      uVar2 = **(uint * PTR32 *)(param_1 + 0x3c);
    }
    F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347e5c)),uVar1,uVar2);
  }
                    
  F_00bb93a0(*(undefined4 *)(param_1 + 0x34),3);
}

/* ref: FUN_00c11c20 */
GEN_LIB GEN_NOFRAME uint F_00c11c20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc11c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c11b70(param_1,param_2,*(undefined4 *)(param_1 + 0x10));
  return uVar1;
}

/* ref: FUN_00c11c40 */
GEN_LIB GEN_NOFRAME uint F_00c11c40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc11c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = F_00c05a80(uVar1,param_2,param_3);
  puVar3 = (undefined4 *)F_00c058d0(uVar1,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x30) + 4))),uVar2);
  if (puVar3[2] == 0) {
    *puVar3 = 1;
    puVar3[2] = 1;
  }
  return uVar2;
}

/* ref: FUN_00c11c90 */
GEN_LIB GEN_NOFRAME uint F_00c11c90(GEN_P(uint * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc11c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  
  iVar1 = *(int *)in_esi[0xe];
  uVar2 = *in_esi;
  *(int *)in_esi[0xe] = iVar1 - 1;
  if (iVar1 == 0) {
    uVar4 = F_00c05fe0(in_esi[0xe]);
  }
  else {
    pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
    uVar4 = (uint)*pbVar3;
    *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
  }
  *in_esi = uVar4;
  if (((uVar4 == 10) || (uVar4 == 0xd)) && (uVar4 != uVar2)) {
    iVar1 = *(int *)in_esi[0xe];
    *(int *)in_esi[0xe] = iVar1 - 1;
    if (iVar1 == 0) {
      uVar4 = F_00c05fe0(in_esi[0xe]);
    }
    else {
      pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
      uVar4 = (uint)*pbVar3;
      *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
    }
    *in_esi = uVar4;
  }
  in_esi[1] = in_esi[1] + 1;
  if (0x7ffffffc < (int)in_esi[1]) {
    uVar4 = F_00c11b70(in_esi,((char *)REFP(0x1347e6c)),in_esi[4]);
  }
  return uVar4;
}

/* ref: FUN_00c11d20 */
GEN_LIB GEN_NOFRAME uint F_00c11d20(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc11d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  param_2[0xe] = param_3;
  param_2[1] = 1;
  param_2[2] = 1;
  *(undefined1 *)(param_2 + 0x11) = 0x2e;
  param_2[0xd] = param_1;
  param_2[8] = 0x11f;
  param_2[0xc] = 0;
  param_2[0x10] = param_4;
  uVar3 = F_00c11930(param_1,*(undefined4 *)param_2[0xf],((undefined4 *)param_2[0xf])[2],0x20);
  *(uint *)param_2[0xf] = uVar3;
  *(undefined4 *)(param_2[0xf] + 8) = 0x20;
  iVar2 = *(int *)param_2[0xe];
  *(int *)param_2[0xe] = iVar2 - 1;
  uVar3 = param_2[0xe];
  if (iVar2 != 0) {
    bVar1 = **(byte * PTR32 *)(uVar3 + 4);
    *(byte * PTR32 *)(uVar3 + 4) = *(byte * PTR32 *)(uVar3 + 4) + 1;
    *param_2 = (uint)bVar1;
    return uVar3;
  }
  uVar3 = F_00c05fe0(uVar3);
  *param_2 = uVar3;
  return uVar3;
}

/* ref: FUN_00c11db0 */
GEN_LIB GEN_NOFRAME uint F_00c11db0(GEN_P(undefined4 in_ecx, unsigned int gen_a0), GEN_P(uint * in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xc11db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  
  uVar4 = F_00c51da0(in_ecx,*in_esi);
  if (uVar4 == 0) {
    return 0;
  }
  F_00c11a10(in_esi,*in_esi);
  iVar2 = *(int *)in_esi[0xe];
  *(int *)in_esi[0xe] = iVar2 - 1;
  if (iVar2 != 0) {
    pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
    bVar1 = *pbVar3;
    *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
    *in_esi = (uint)bVar1;
    return 1;
  }
  uVar4 = F_00c05fe0(in_esi[0xe]);
  *in_esi = uVar4;
  return 1;
}

/* ref: FUN_00c11e30 */
GEN_LIB GEN_NOFRAME uint F_00c11e30(GEN_P(undefined4 in_ecx, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xc11e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(int in_esi = (int)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  int iVar2;
  undefined * plVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0xc));
  plVar3 = F_00c527f9();
  cVar1 = *(char *)(in_esi + 0x44);
  if (plVar3 == (undefined *)0x0) {
    cVar6 = '.';
  }
  else {
    cVar6 = *(*(char * PTR32 *)((char *)(plVar3)));
  }
  *(char *)(in_esi + 0x44) = cVar6;
  iVar4 = (*(int * PTR32 *)(in_esi + 0x3c))[1];
  iVar2 = **(int * PTR32 *)(in_esi + 0x3c);
  while (iVar4 != 0) {
    iVar4 = iVar4 - 1;
    if (*(char *)(iVar2 + iVar4) == cVar1) {
      *(char *)(iVar2 + iVar4) = cVar6;
    }
  }
  uVar5 = F_00c00370(**(undefined4 * PTR32 *)(in_esi + 0x3c),in_ecx);
  if (uVar5 == 0) {
    iVar4 = (*(int * PTR32 *)(in_esi + 0x3c))[1];
    cVar1 = *(char *)(in_esi + 0x44);
    iVar2 = **(int * PTR32 *)(in_esi + 0x3c);
    while (iVar4 != 0) {
      iVar4 = iVar4 - 1;
      if (*(char *)(iVar2 + iVar4) == cVar1) {
        *(undefined1 *)(iVar2 + iVar4) = 0x2e;
      }
    }
    F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)(in_esi + 0x40) + 0x10,0x50);
    uVar5 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                         *(undefined4 *)(in_esi + 4),((char *)REFP(0x1347e88)));
    F_00c11a10(in_esi,0);
    F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347e5c)),uVar5,
                 **(undefined4 * PTR32 *)(in_esi + 0x3c));
                    
    F_00bb93a0(*(undefined4 *)(in_esi + 0x34),3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00c11f20 */
GEN_LIB GEN_NOFRAME uint F_00c11f20(GEN_P(uint * in_eax, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc11f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_eax = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  do {
    F_00c11a10(in_eax,*in_eax);
    iVar5 = *(int *)in_eax[0xe];
    *(int *)in_eax[0xe] = iVar5 - 1;
    if (iVar5 == 0) {
      uVar4 = F_00c05fe0(in_eax[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(in_eax[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(in_eax[0xe] + 4) = pbVar2 + 1;
    }
    *in_eax = uVar4;
    iVar5 = F_00c48637(uVar4);
  } while ((iVar5 != 0) || (*in_eax == 0x2e));
  uVar4 = F_00c11db0(&REFG(undefined, 0x1347e9c),in_eax);
  if (uVar4 != 0) {
    F_00c11db0(&REFG(undefined, 0x1347ea0),in_eax);
  }
  while ((iVar5 = F_00c4883f(*in_eax), iVar5 != 0 || (*in_eax == 0x5f))) {
    F_00c11a10(in_eax,*in_eax);
    iVar5 = *(int *)in_eax[0xe];
    *(int *)in_eax[0xe] = iVar5 - 1;
    if (iVar5 == 0) {
      uVar4 = F_00c05fe0(in_eax[0xe]);
      *in_eax = uVar4;
    }
    else {
      pbVar2 = *(byte * PTR32 *)(in_eax[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(in_eax[0xe] + 4) = pbVar2 + 1;
      *in_eax = (uint)bVar1;
    }
  }
  F_00c11a10(in_eax,0);
  iVar5 = ((int *)in_eax[0xf])[1];
  uVar4 = in_eax[0x11];
  iVar3 = *(int *)in_eax[0xf];
  while (iVar5 != 0) {
    iVar5 = iVar5 - 1;
    if (*(char *)(iVar3 + iVar5) == '.') {
      *(char *)(iVar3 + iVar5) = (char)uVar4;
    }
  }
  uVar4 = F_00c00370(*(undefined4 *)in_eax[0xf],in_edi);
  if (uVar4 == 0) {
    uVar4 = F_00c11e30(in_edi,in_eax);
  }
  return uVar4;
}

/* ref: FUN_00c12020 */
GEN_LIB GEN_NOFRAME uint F_00c12020(GEN_P(uint * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc12020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *in_esi;
  uVar5 = 0;
  F_00c11a10(in_esi,uVar1);
  iVar2 = *(int *)in_esi[0xe];
  *(int *)in_esi[0xe] = iVar2 - 1;
  if (iVar2 == 0) {
    uVar4 = F_00c05fe0(in_esi[0xe]);
  }
  else {
    pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
    uVar4 = (uint)*pbVar3;
    *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
  }
  *in_esi = uVar4;
  while (uVar4 == 0x3d) {
    F_00c11a10(in_esi,*in_esi);
    iVar2 = *(int *)in_esi[0xe];
    *(int *)in_esi[0xe] = iVar2 - 1;
    if (iVar2 == 0) {
      uVar4 = F_00c05fe0(in_esi[0xe]);
    }
    else {
      pbVar3 = *(byte * PTR32 *)(in_esi[0xe] + 4);
      uVar4 = (uint)*pbVar3;
      *(byte * PTR32 *)(in_esi[0xe] + 4) = pbVar3 + 1;
    }
    uVar5 = uVar5 + 1;
    *in_esi = uVar4;
  }
  if (*in_esi != uVar1) {
    return -uVar5 - 1;
  }
  return uVar5;
}

/* ref: FUN_00c120b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c120b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc120b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  char * pcVar8;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0xc));
  F_00c11a10(this,*(undefined4 *)this);
  iVar4 = **(int * PTR32 *)((int)this + 0x38);
  **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
  if (iVar4 == 0) {
    uVar3 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
  }
  else {
    pbVar2 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
    uVar3 = (uint)*pbVar2;
    *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar2 + 1;
  }
  *(uint *)this = uVar3;
  if ((uVar3 == 10) || (uVar3 == 0xd)) {
    F_00c11c90(this);
  }
  do {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)this)) {
    default: ;
      if (param_1 != (uint *)0x0) {
        F_00c11a10(this,*(undefined4 *)this);
      }
      iVar4 = **(int * PTR32 *)((int)this + 0x38);
      **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
      if (iVar4 == 0) {
        uVar3 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
        *(uint *)this = uVar3;
      }
      else {
        pbVar2 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
        bVar1 = *pbVar2;
        *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar2 + 1;
        *(uint *)this = (uint)bVar1;
      }
      break;
    case 10: ;
    case 0xd: ;
      F_00c11a10(this,10);
      F_00c11c90(this);
      if (param_1 == (uint *)0x0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3c) + 4))) = 0;
      }
      break;
    case 0x5b: ;
      uVar3 = F_00c12020(this);
      if (uVar3 == param_2) {
        F_00c11a10(this,*(undefined4 *)this);
        iVar4 = **(int * PTR32 *)((int)this + 0x38);
        **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
        if (iVar4 == 0) {
          uVar3 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
        }
        else {
          pbVar2 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
          uVar3 = (uint)*pbVar2;
          *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar2 + 1;
        }
        *(uint *)this = uVar3;
        if (param_2 == 0) {
          F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
          uVar3 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                               *(undefined4 *)((int)this + 4),
                               ((char *)REFP(0x1347ed4)));
          iVar4 = F_00c489cc(0x5b);
          if (iVar4 == 0) {
            uVar7 = *(undefined4 *)((int)this + 0x34);
            pcVar8 = &REFG(undefined, 0x1347e4c);
          }
          else {
            uVar7 = *(undefined4 *)((int)this + 0x34);
            pcVar8 = ((char *)REFP(0x1347e40));
          }
          uVar5 = F_00c00790(uVar7,pcVar8,0x5b);
          F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar3,uVar5);
                    
          F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
        }
      }
      break;
    case 0x5d: ;
      uVar3 = F_00c12020(this);
      if (uVar3 == param_2) {
        F_00c11a10(this,*(undefined4 *)this);
        iVar4 = **(int * PTR32 *)((int)this + 0x38);
        **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
        if (iVar4 == 0) {
          puVar6 = (undefined4 *)F_00c05fe0(*(undefined4 *)((int)this + 0x38));
        }
        else {
          pbVar2 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
          puVar6 = (undefined4 *)(uint)*pbVar2;
          *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar2 + 1;
        }
        *(undefined4 * PTR32 *)this = puVar6;
        if (param_1 != (uint *)0x0) {
          uVar7 = *(undefined4 *)((int)this + 0x34);
          uVar3 = F_00c05a80(uVar7,**(int * PTR32 *)((int)this + 0x3c) + 2 + param_2,
                               (*(int * PTR32 *)((int)this + 0x3c))[1] + param_2 * -2 - 4);
          puVar6 = (undefined4 *)
                   F_00c058d0(uVar7,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 4))),uVar3);
          if (puVar6[2] == 0) {
            *puVar6 = 1;
            puVar6[2] = 1;
          }
          *param_1 = uVar3;
        }
        F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        return (uint)puVar6;
      }
      break;
    case 0xffffffff: ;
      pcVar8 = ((char *)REFP(0x1347ea4));
      if (param_1 == (uint *)0x0) {
        pcVar8 = ((char *)REFP(0x1347ebc));
      }
      F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
      uVar3 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                           *(undefined4 *)((int)this + 4),pcVar8);
      F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar3,
                   REFG(undefined * PTR32, 0x110e8b8));
                    
      F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
    }
  } while( true );
}

/* ref: FUN_00c123e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c123e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc123e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte * pbVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  uint * puVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint * PTR32 *)(gen_frame + 0x8));
  uVar3 = *(undefined4 *)this;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = param_2;
  F_00c11a10(this,uVar3);
  iVar4 = **(int * PTR32 *)((int)this + 0x38);
  **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
  if (iVar4 == 0) {
    uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
  }
  else {
    pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
    uVar2 = (uint)*pbVar1;
    *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
  }
  *(uint *)this = uVar2;
  do {
    if (uVar2 == param_1) {
      F_00c11a10(this,*(undefined4 *)this);
      iVar4 = **(int * PTR32 *)((int)this + 0x38);
      **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
      if (iVar4 == 0) {
        uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
      }
      else {
        pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
        uVar2 = (uint)*pbVar1;
        *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
      }
      uVar3 = *(undefined4 *)((int)this + 0x34);
      *(uint *)this = uVar2;
      uVar2 = F_00c05a80(uVar3,**(int * PTR32 *)((int)this + 0x3c) + 1,
                           (*(int * PTR32 *)((int)this + 0x3c))[1] - 2);
      puVar6 = (undefined4 *)
               F_00c058d0(uVar3,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 4))),uVar2);
      if (puVar6[2] != 0) {
        *(*(uint * PTR32 *)(gen_frame + 0x8)) = uVar2;
        F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)&(*(uint * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        return (uint)puVar6;
      }
      *puVar6 = 1;
      puVar6[2] = 1;
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x8));
      *(*(uint * PTR32 *)(gen_frame + 0x8)) = uVar2;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)&(*(uint * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      return (uint)puVar7;
    }
    uVar3 = *(undefined4 *)this;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    default: ;
      goto switchD_00c12455_caseD_0;
    case 10: ;
    case 0xd: ;
      F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
      uVar2 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                           *(undefined4 *)((int)this + 4),((char *)REFP(0x1347f0c)));
      F_00c11a10(this,0);
      F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar2,
                   **(undefined4 * PTR32 *)((int)this + 0x3c));
                    
      F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
    case 0x5c: ;
      iVar4 = **(int * PTR32 *)((int)this + 0x38);
      **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
      if (iVar4 == 0) {
        uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
      }
      else {
        pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
        uVar2 = (uint)*pbVar1;
        *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
      }
      break;
    case 0xffffffff: ;
      F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
      uVar2 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                           *(undefined4 *)((int)this + 4),((char *)REFP(0x1347ef8)));
      F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar2,
                   REFG(undefined * PTR32, 0x110e8b8));
                    
      F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
    }
    *(uint *)this = uVar2;
    switch((unsigned int)(uintptr_t)(uVar2)) {
    default: ;
      iVar4 = F_00c48637(uVar2);
      if (iVar4 != 0) {
        iVar8 = 0;
        iVar4 = 0;
        do {
          iVar4 = *(int *)this - 0x30 + iVar4 * 10;
          iVar5 = **(int * PTR32 *)((int)this + 0x38);
          **(int * PTR32 *)((int)this + 0x38) = iVar5 - 1;
          if (iVar5 == 0) {
            uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
          }
          else {
            pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
            uVar2 = (uint)*pbVar1;
            *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
          }
          iVar8 = iVar8 + 1;
          *(uint *)this = uVar2;
        } while ((iVar8 < 3) && (iVar5 = F_00c48637(uVar2), iVar5 != 0));
        if (0xff < iVar4) {
          F_00c007b0(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x40) + 0x10,0x50);
          uVar2 = F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),
                               *(undefined4 *)((int)this + 4),((char *)REFP(0x1347f20)));
          F_00c11a10(this,0);
          F_00c00790(*(undefined4 *)((int)this + 0x34),((char *)REFP(0x1347e5c)),uVar2,
                       **(undefined4 * PTR32 *)((int)this + 0x3c));
                    
          F_00bb93a0(*(undefined4 *)((int)this + 0x34),3);
        }
        F_00c11a10(this,iVar4);
        goto switchD_00c12553_caseD_ffffffff;
      }
      uVar3 = *(undefined4 *)this;
      goto LAB_00c1258a;
    case 10: ;
    case 0xd: ;
      F_00c11a10(this,10);
      F_00c11c90(this);
      goto switchD_00c12553_caseD_ffffffff;
    case 0x61: ;
      uVar3 = 7;
      break;
    case 0x62: ;
      uVar3 = 8;
      break;
    case 0x66: ;
      uVar3 = 0xc;
      break;
    case 0x6e: ;
      uVar3 = 10;
      break;
    case 0x72: ;
      uVar3 = 0xd;
      break;
    case 0x74: ;
      uVar3 = 9;
      break;
    case 0x76: ;
      uVar3 = 0xb;
      break;
    case 0xffffffff: ;
      goto switchD_00c12553_caseD_ffffffff;
    }
switchD_00c12455_caseD_0: ;
LAB_00c1258a: ;
    F_00c11a10(this,uVar3);
    iVar4 = **(int * PTR32 *)((int)this + 0x38);
    **(int * PTR32 *)((int)this + 0x38) = iVar4 - 1;
    if (iVar4 == 0) {
      uVar2 = F_00c05fe0(*(undefined4 *)((int)this + 0x38));
    }
    else {
      pbVar1 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4)));
      uVar2 = (uint)*pbVar1;
      *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 4))) = pbVar1 + 1;
    }
    *(uint *)this = uVar2;
switchD_00c12553_caseD_ffffffff: ;
    uVar2 = *(uint *)this;
  } while( true );
}

/* ref: FUN_00c12870 */
GEN_LIB GEN_NOFRAME uint GEN_FASTCALL F_00c12870(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc12870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0xc));
  *(undefined4 *)(param_1[0xf] + 4) = 0;
LAB_00c12890: ;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  default: ;
    iVar3 = F_00c4873c(*param_1);
    if (iVar3 != 0) {
      iVar3 = *(int *)param_1[0xe];
      *(int *)param_1[0xe] = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = F_00c05fe0(param_1[0xe]);
        *param_1 = uVar4;
      }
      else {
        pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
        bVar1 = *pbVar2;
        *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
        *param_1 = (uint)bVar1;
      }
      goto LAB_00c12890;
    }
    iVar3 = F_00c48637(*param_1);
    if (iVar3 == 0) {
      iVar3 = F_00c484b8(*param_1);
      if ((iVar3 == 0) && (uVar4 = *param_1, uVar4 != 0x5f)) {
        iVar3 = *(int *)param_1[0xe];
        *(int *)param_1[0xe] = iVar3 - 1;
        if (iVar3 != 0) {
          pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
          bVar1 = *pbVar2;
          *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
          *param_1 = (uint)bVar1;
          F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
          return uVar4;
        }
        uVar5 = F_00c05fe0(param_1[0xe]);
        *param_1 = uVar5;
        F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        return uVar4;
      }
      do {
        F_00c11a10(param_1,*param_1);
        iVar3 = *(int *)param_1[0xe];
        *(int *)param_1[0xe] = iVar3 - 1;
        if (iVar3 == 0) {
          uVar4 = F_00c05fe0(param_1[0xe]);
        }
        else {
          pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
          uVar4 = (uint)*pbVar2;
          *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
        }
        *param_1 = uVar4;
        iVar3 = F_00c4883f(uVar4);
      } while ((iVar3 != 0) || (*param_1 == 0x5f));
      uVar4 = F_00c11c40(param_1,*(undefined4 *)param_1[0xf],((undefined4 *)param_1[0xf])[1]);
      bVar1 = *(byte *)(uVar4 + 6);
      if (bVar1 != 0) {
        F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        return bVar1 + 0x100;
      }
      *param_2 = uVar4;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x11d;
    }
    break;
  case 10: ;
  case 0xd: ;
    F_00c11c90(param_1);
    goto LAB_00c12890;
  case 0x22: ;
  case 0x27: ;
    F_00c123e0(param_1 GEN_EDX_ARG,*param_1,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x11e;
  case 0x2d: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x2d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x2d;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 == 0x5b) {
      uVar4 = F_00c12020(param_1);
      *(undefined4 *)(param_1[0xf] + 4) = 0;
      if ((int)uVar4 < 0) goto LAB_00c1293d;
      F_00c120b0(param_1 GEN_EDX_ARG,0,uVar4);
      *(undefined4 *)(param_1[0xf] + 4) = 0;
    }
    else {
LAB_00c1293d: ;
      uVar4 = *param_1;
      while (((uVar4 != 10 && (*param_1 != 0xd)) && (*param_1 != 0xffffffff))) {
        iVar3 = *(int *)param_1[0xe];
        *(int *)param_1[0xe] = iVar3 - 1;
        if (iVar3 == 0) {
          uVar4 = F_00c05fe0(param_1[0xe]);
        }
        else {
          pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
          uVar4 = (uint)*pbVar2;
          *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
        }
        *param_1 = uVar4;
      }
    }
    goto LAB_00c12890;
  case 0x2e: ;
    F_00c11a10(param_1,*param_1);
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    uVar4 = F_00c51da0(&REFG(undefined, 0x1347f5c),uVar4);
    if (uVar4 != 0) {
      F_00c11a10(param_1,*param_1);
      iVar3 = *(int *)param_1[0xe];
      *(int *)param_1[0xe] = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = F_00c05fe0(param_1[0xe]);
      }
      else {
        pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
        uVar4 = (uint)*pbVar2;
        *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      }
      *param_1 = uVar4;
      uVar4 = F_00c11db0(&REFG(undefined, 0x1347f60),param_1);
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return (uVar4 != 0) + 0x116;
    }
    iVar3 = F_00c48637(*param_1);
    if (iVar3 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x2e;
    }
    break;
  case 0x3c: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x3c;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x11a;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x11a;
  case 0x3d: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x3d;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x118;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x118;
  case 0x3e: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x3e;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x119;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x119;
  case 0x5b: ;
    uVar4 = F_00c12020(param_1);
    if (-1 < (int)uVar4) {
      F_00c120b0(param_1 GEN_EDX_ARG,param_2,uVar4);
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x11e;
    }
    if (uVar4 == 0xffffffff) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x5b;
    }
    F_00c007b0(((undefined1 *)(gen_frame + 0xc)),param_1[0x10] + 0x10,0x50);
    uVar4 = F_00c00790(param_1[0xd],((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0xc)),param_1[1],
                         ((char *)REFP(0x1347f3c)));
    F_00c11a10(param_1,0);
    F_00c00790(param_1[0xd],((char *)REFP(0x1347e5c)),uVar4,*(undefined4 *)param_1[0xf]);
                    
    F_00bb93a0(param_1[0xd],3);
  case 0x7e: ;
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      uVar4 = (uint)*pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x7e;
    }
    iVar3 = *(int *)param_1[0xe];
    *(int *)param_1[0xe] = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *(byte * PTR32 *)(param_1[0xe] + 4);
      bVar1 = *pbVar2;
      *(byte * PTR32 *)(param_1[0xe] + 4) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 0x11b;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x11b;
  case 0xffffffff: ;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0x11f;
  }
  F_00c11f20(param_1,param_2);
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 0x11c;
}

/* ref: FUN_00c13000 */
GEN_LIB GEN_NOFRAME uint F_00c13000(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc13000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x20) != 0x11f) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = 0x11f;
    return 0x11f;
  }
  uVar1 = F_00c12870(param_1,param_1 + 0x18);
  *(uint *)(param_1 + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_00c13040 */
GEN_LIB GEN_NOFRAME uint F_00c13040(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc13040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c12870(param_1,param_1 + 0x28);
  *(uint *)(param_1 + 0x20) = uVar1;
  return uVar1;
}

/* ref: FUN_00c130c0 */
GEN_LIB GEN_NOFRAME uint F_00c130c0(GEN_P(int * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc130c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(*in_esi + 0x3c) == 0) {
    uVar1 = F_00c00790(in_esi[4],((char *)REFP(0x1347f74)));
    uVar1 = F_00c11b70(in_esi[3],uVar1,0);
    return uVar1;
  }
  uVar1 = F_00c00790(in_esi[4],((char *)REFP(0x1347f98)),
                       *(int *)(*in_esi + 0x3c));
  uVar1 = F_00c11b70(in_esi[3],uVar1,0);
  return uVar1;
}

/* ref: FUN_00c13190 */
GEN_LIB GEN_NOFRAME uint F_00c13190(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc13190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_esi = (int)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (*(int *)(in_esi + 0x10) == in_edi) {
    uVar1 = F_00c13000(in_esi);
    return uVar1;
  }
  if (in_eax == *(int *)(in_esi + 4)) {
    uVar1 = F_00c11ae0(in_esi,in_edi);
    uVar1 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar1);
    uVar1 = F_00c11c20(in_esi,uVar1);
    return uVar1;
  }
  F_00c11ae0(in_esi,param_4);
  uVar1 = F_00c11ae0(in_esi,in_edi);
  uVar1 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347fc0)),
                       uVar1);
  uVar1 = F_00c11c20(in_esi,uVar1);
  return uVar1;
}

/* ref: FUN_00c13260 */
GEN_LIB GEN_NOFRAME uint F_00c13260(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(undefined4 * in_esi, unsigned int gen_a2))
{
  GEN_ENTER(0xc13260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c273d0(*(undefined4 *)(in_ecx + 0x30),in_eax);
  in_esi[4] = 0xffffffff;
  in_esi[5] = 0xffffffff;
  *in_esi = 4;
  in_esi[2] = uVar1;
  return uVar1;
}

/* ref: FUN_00c13280 */
GEN_LIB GEN_NOFRAME uint F_00c13280(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc13280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(in_esi + 0x10) != 0x11d) {
    uVar2 = F_00c11ae0(in_esi,0x11d);
    uVar2 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar2);
    F_00c11c20(in_esi,uVar2);
  }
  uVar1 = *(undefined4 *)(in_esi + 0x18);
  F_00c13000(in_esi);
  uVar2 = F_00c273d0(*(undefined4 *)(in_esi + 0x30),uVar1);
  in_edi[4] = 0xffffffff;
  in_edi[5] = 0xffffffff;
  *in_edi = 4;
  in_edi[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00c132e0 */
GEN_LIB GEN_NOFRAME ushort F_00c132e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc132e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  ushort uVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = *(int * PTR32 *)(param_1 + 0x30);
  iVar4 = *piVar3;
  iVar7 = *(int *)(iVar4 + 0x38);
  piVar1 = (int *)(iVar4 + 0x38);
  if (iVar7 < (short)piVar3[0xc] + 1) {
    uVar5 = F_00c11980(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(iVar4 + 0x18),piVar1,0xc,
                         0x7fff,((char *)REFP(0x1347fec)));
    *(uint *)(iVar4 + 0x18) = uVar5;
  }
  if (iVar7 < *piVar1) {
    iVar6 = iVar7 * 0xc;
    do {
      *((undefined4 *)GEN_TOP((iVar6 + *(int *)(iVar4 + 0x18)))) = 0;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar7 < *piVar1);
  }
  *((int *)GEN_TOP((*(int *)(iVar4 + 0x18) + (short)piVar3[0xc] * 0xc))) = param_2;
  if (((*(byte *)(param_2 + 5) & 3) != 0) && ((*(byte *)(iVar4 + 5) & 4) != 0)) {
    F_00c01900(*(undefined4 *)(param_1 + 0x34),iVar4,param_2);
  }
  uVar2 = *(ushort *)(piVar3 + 0xc);
  *(ushort *)(piVar3 + 0xc) = uVar2 + 1;
  return uVar2;
}

/* ref: FUN_00c133e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00c133e0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1))
{
  GEN_ENTER(0xc133e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(in_eax + 0x30);
  *(char *)((int)piVar1 + 0x32) = *(char *)((int)piVar1 + 0x32) + (char)in_edx;
  for (; in_edx != 0; in_edx = in_edx - 1) {
    *((int *)GEN_TOP((*(int *)(*piVar1 + 0x18) + 4 +
            (uint)*((ushort *)GEN_TOP(((int)piVar1 + ((uint)*(byte *)((int)piVar1 + 0x32) - in_edx) * 2 + 0xac))) * 0xc)))
         = piVar1[6];
  }
  return 0;
}

/* ref: FUN_00c13420 */
GEN_LIB GEN_NOFRAME uint F_00c13420(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1))
{
  GEN_ENTER(0xc13420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  byte bVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(in_eax + 0x30);
  bVar1 = *(byte *)((int)piVar2 + 0x32);
  while (in_edx < (int)(uint)bVar1) {
    *(char *)((int)piVar2 + 0x32) = *(char *)((int)piVar2 + 0x32) - 1;
    *((int *)GEN_TOP((*(int *)(*piVar2 + 0x18) + 8 +
            (uint)*((ushort *)GEN_TOP(((int)piVar2 + (uint)*(byte *)((int)piVar2 + 0x32) * 2 + 0xac))) * 0xc))) =
         piVar2[6];
    bVar1 = *(byte *)((int)piVar2 + 0x32);
  }
  return (uint)piVar2;
}

/* ref: FUN_00c13460 */
GEN_LIB GEN_NOFRAME uint F_00c13460(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc13460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  int * piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  
  iVar3 = *param_1;
  iVar6 = *(int *)(iVar3 + 0x24);
  piVar1 = (int *)(iVar3 + 0x24);
  uVar4 = 0;
  if (*(char *)(iVar3 + 0x48) != '\0') {
    pbVar5 = (byte *)(param_1 + 0xd);
    do {
      if (((uint)pbVar5[-1] == *param_3) && ((uint)*pbVar5 == param_3[2])) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 2;
    } while ((int)uVar4 < (int)(uint)*(byte *)(iVar3 + 0x48));
  }
  if (0x3c < *(byte *)(iVar3 + 0x48) + 1) {
    if (*(int *)(iVar3 + 0x3c) == 0) {
      uVar4 = F_00c00790(param_1[4],((char *)REFP(0x1347f74)),0x3c,
                           ((char *)REFP(0x1348018)));
    }
    else {
      uVar4 = F_00c00790(param_1[4],((char *)REFP(0x1347f98)),
                           *(int *)(iVar3 + 0x3c));
    }
    F_00c11b70(param_1[3],uVar4,0);
  }
  if (*piVar1 < (int)(*(byte *)(iVar3 + 0x48) + 1)) {
    uVar4 = F_00c11980(param_1[4],*(undefined4 *)(iVar3 + 0x1c),piVar1,4,0x7ffffffd,&REFG(undefined, 0x14c5bf0))
    ;
    *(uint *)(iVar3 + 0x1c) = uVar4;
  }
  if (iVar6 < *piVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x1c) + iVar6 * 4))) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *piVar1);
  }
  *((int *)GEN_TOP((*(int *)(iVar3 + 0x1c) + (uint)*(byte *)(iVar3 + 0x48) * 4))) = param_2;
  if (((*(byte *)(param_2 + 5) & 3) != 0) && ((*(byte *)(iVar3 + 5) & 4) != 0)) {
    F_00c01900(param_1[4],iVar3,param_2);
  }
  *((char *)GEN_TOP(((int)param_1 + (uint)*(byte *)(iVar3 + 0x48) * 2 + 0x33))) = (char)*param_3;
  *((char *)GEN_TOP(((int)param_1 + (uint)*(byte *)(iVar3 + 0x48) * 2 + 0x34))) = (char)param_3[2];
  bVar2 = *(byte *)(iVar3 + 0x48);
  *(byte *)(iVar3 + 0x48) = bVar2 + 1;
  return (uint)bVar2;
}

/* ref: FUN_00c135f0 */
GEN_LIB GEN_NOFRAME uint F_00c135f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc135f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  ushort * puVar4;
  
  if (param_1 == (int *)0x0) {
    param_3[4] = 0xffffffff;
    param_3[5] = 0xffffffff;
    *param_3 = 8;
    param_3[2] = 0xff;
    return 8;
  }
  iVar1 = *(byte *)((int)param_1 + 0x32) - 1;
  if (-1 < iVar1) {
    puVar4 = (ushort *)((int)param_1 + iVar1 * 2 + 0xac);
    do {
      if (param_2 == *((int *)GEN_TOP((*(int *)(*param_1 + 0x18) + (uint)*puVar4 * 0xc)))) {
        if (-1 < iVar1) {
          param_3[4] = 0xffffffff;
          param_3[5] = 0xffffffff;
          *param_3 = 6;
          param_3[2] = iVar1;
          if ((param_4 == 0) && (piVar3 = (int *)param_1[5], piVar3 != (int *)0x0)) {
            while (iVar1 < (int)(uint)*(byte *)(piVar3 + 2)) {
              piVar3 = (int *)*piVar3;
              if (piVar3 == (int *)0x0) {
                return 6;
              }
            }
            *(undefined1 *)((int)piVar3 + 9) = 1;
          }
          return 6;
        }
        break;
      }
      iVar1 = iVar1 - 1;
      puVar4 = puVar4 - 1;
    } while (-1 < iVar1);
  }
  uVar2 = F_00c135f0((int *)param_1[2],param_2,param_3,0);
  if (uVar2 != 8) {
    uVar2 = F_00c13460(param_1,param_2,param_3);
    param_3[2] = uVar2;
    *param_3 = 7;
    return 7;
  }
  return 8;
}

/* ref: FUN_00c136d0 */
GEN_LIB GEN_NOFRAME uint F_00c136d0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc136d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(in_eax + 0x10) != 0x11d) {
    uVar3 = F_00c11ae0(in_eax,0x11d);
    uVar3 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(in_eax,uVar3);
  }
  uVar1 = *(undefined4 *)(in_eax + 0x18);
  F_00c13000(in_eax);
  uVar2 = *(undefined4 *)(in_eax + 0x30);
  uVar3 = F_00c135f0(uVar2,uVar1,param_2,1);
  if (uVar3 == 8) {
    uVar3 = F_00c273d0(uVar2,uVar1);
    *(uint *)(param_2 + 8) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00c13740 */
GEN_LIB GEN_NOFRAME uint F_00c13740(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int * in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc13740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_3 - param_4;
  iVar1 = *(int *)(in_eax + 0x30);
  iVar2 = *in_ecx;
  if ((iVar2 == 0xd) || (iVar2 == 0xe)) {
    iVar5 = iVar5 + 1;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    uVar4 = F_00c27480(iVar1,in_ecx,iVar5);
    if (1 < iVar5) {
      uVar4 = F_00c27270(iVar1,iVar5 - 1);
    }
  }
  else {
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = F_00c27e50(iVar1,in_ecx);
    }
    if (0 < iVar5) {
      uVar3 = *(undefined4 *)(iVar1 + 0x24);
      F_00c27270(iVar1,iVar5);
      uVar4 = F_00c278f0(iVar1,uVar3,iVar5);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00c13810 */
GEN_LIB GEN_NOFRAME uint F_00c13810(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc13810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(in_esi + 0x14);
  *(undefined4 *)(in_esi + 0x14) = *puVar1;
  F_00c13420(*(undefined4 *)(in_esi + 0xc),(uint)*(byte *)(puVar1 + 2));
  if (*(char *)((int)puVar1 + 9) != '\0') {
    F_00c27800(in_esi,0x23,(uint)*(byte *)(puVar1 + 2),0,0);
  }
  *(uint *)(in_esi + 0x24) = (uint)*(byte *)(in_esi + 0x32);
  uVar2 = F_00c27a60(in_esi,puVar1[1]);
  return uVar2;
}

/* ref: FUN_00c13860 */
GEN_LIB GEN_NOFRAME uint F_00c13860(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc13860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char * pcVar6;
  
  piVar2 = *(int * PTR32 *)(param_1 + 0x30);
  iVar4 = *piVar2;
  piVar1 = (int *)(iVar4 + 0x34);
  iVar5 = *piVar1;
  if (iVar5 < piVar2[0xb] + 1) {
    uVar3 = F_00c11980(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(iVar4 + 0x10),piVar1,4,
                         0x3ffff,((char *)REFP(0x1348048)));
    *(uint *)(iVar4 + 0x10) = uVar3;
  }
  if (iVar5 < *piVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x10) + iVar5 * 4))) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar1);
  }
  *((int *)GEN_TOP((*(int *)(iVar4 + 0x10) + piVar2[0xb] * 4))) = *param_2;
  piVar2[0xb] = piVar2[0xb] + 1;
  if (((*(byte *)(*param_2 + 5) & 3) != 0) && ((*(byte *)(iVar4 + 5) & 4) != 0)) {
    F_00c01900(*(undefined4 *)(param_1 + 0x34),iVar4,*param_2);
  }
  uVar3 = F_00c27830(piVar2,0x24,0,piVar2[0xb] - 1);
  param_3[4] = 0xffffffff;
  param_3[5] = 0xffffffff;
  *param_3 = 0xb;
  param_3[2] = uVar3;
  iVar4 = 0;
  if (*(char *)(*param_2 + 0x48) != '\0') {
    pcVar6 = (char *)((int)param_2 + 0x33);
    do {
      F_00c27800(piVar2,(*pcVar6 == '\x06') - 1 & 4,0,(uint)(byte)pcVar6[1],0);
      uVar3 = (uint)*(byte *)(*param_2 + 0x48);
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 2;
    } while (iVar4 < (int)uVar3);
  }
  return uVar3;
}

/* ref: FUN_00c13960 */
GEN_LIB GEN_NOFRAME uint F_00c13960(GEN_P(uint * in_eax, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc13960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_eax = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar1 = *(uint *)(param_2 + 0x34);
  uVar2 = F_00c05e50(uVar1);
  *in_eax = uVar2;
  in_eax[2] = *(uint *)(param_2 + 0x30);
  in_eax[3] = param_2;
  in_eax[4] = uVar1;
  *(uint * PTR32 *)(param_2 + 0x30) = in_eax;
  in_eax[7] = 0xffffffff;
  in_eax[8] = 0xffffffff;
  in_eax[6] = 0;
  in_eax[9] = 0;
  in_eax[10] = 0;
  in_eax[0xb] = 0;
  *(undefined2 *)(in_eax + 0xc) = 0;
  *(undefined1 *)((int)in_eax + 0x32) = 0;
  in_eax[5] = 0;
  *(undefined4 *)(uVar2 + 0x20) = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(uVar2 + 0x4b) = 2;
  uVar3 = F_00c05020(uVar1,0,0);
  in_eax[1] = uVar3;
  puVar4 = *(uint * PTR32 *)(uVar1 + 8);
  *puVar4 = uVar3;
  puVar4[2] = 5;
  if (*(int *)(uVar1 + 0x1c) - *(int *)(uVar1 + 8) < 0x11) {
    F_00bb8d50(uVar1,1);
  }
  *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 0x10;
  puVar4 = *(uint * PTR32 *)(uVar1 + 8);
  *puVar4 = uVar2;
  puVar4[2] = 9;
  if (*(int *)(uVar1 + 0x1c) - *(int *)(uVar1 + 8) < 0x11) {
    puVar4 = (uint *)F_00bb8d50(uVar1,1);
  }
  *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 0x10;
  return (uint)puVar4;
}

/* ref: FUN_00c13a20 */
GEN_LIB GEN_NOFRAME uint F_00c13a20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc13a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x34);
  piVar2 = *(int * PTR32 *)(param_1 + 0x30);
  iVar3 = *piVar2;
  F_00c13420(param_1,0);
  F_00c279d0(piVar2,((undefined4)(uint)(0)),((undefined4)(uint)(0)));
  if (piVar2[6] + 1U < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0xc),*(int *)(iVar3 + 0x2c) * 4,piVar2[6] * 4 );
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0xc) = uVar4;
  *(int *)(iVar3 + 0x2c) = piVar2[6];
  if (piVar2[6] + 1U < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0x14),*(int *)(iVar3 + 0x30) * 4, piVar2[6] * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0x14) = uVar4;
  *(int *)(iVar3 + 0x30) = piVar2[6];
  if (piVar2[10] + 1U < 0x10000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 8),*(int *)(iVar3 + 0x28) << 4, piVar2[10] << 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 8) = uVar4;
  *(int *)(iVar3 + 0x28) = piVar2[10];
  if (piVar2[0xb] + 1U < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0x10),*(int *)(iVar3 + 0x34) * 4, piVar2[0xb] * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0x10) = uVar4;
  *(int *)(iVar3 + 0x34) = piVar2[0xb];
  if ((int)(short)piVar2[0xc] + 1U < 0x15555556) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0x18),*(int *)(iVar3 + 0x38) * 0xc, (short)piVar2[0xc] * 0xc);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0x18) = uVar4;
  *(int *)(iVar3 + 0x38) = (int)(short)piVar2[0xc];
  if (*(byte *)(iVar3 + 0x48) + 1 < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*(undefined4 *)(iVar3 + 0x1c),*(int *)(iVar3 + 0x24) * 4, (uint)*(byte *)(iVar3 + 0x48) * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *(uint *)(iVar3 + 0x1c) = uVar4;
  *(uint *)(iVar3 + 0x24) = (uint)*(byte *)(iVar3 + 0x48);
  *(int *)(param_1 + 0x30) = piVar2[2];
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - 0x20;
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 == 0x11d) || (uVar4 == 0x11e)) {
    uVar4 = F_00c11c40(param_1,*(int *)(param_1 + 0x18) + 0x10, *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0xc))));
  }
  return uVar4;
}

/* ref: FUN_00c13c00 */
GEN_LIB GEN_NOFRAME uint F_00c13c00(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc13c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(in_eax + 0x30);
  F_00c27ed0(uVar1,param_2);
  F_00c13000(in_eax);
  F_00c13280(in_eax,((undefined1 *)(gen_frame + 0x8)));
  uVar2 = F_00c28490(uVar1,param_2,((undefined1 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_00c13c40 */
GEN_LIB GEN_NOFRAME uint F_00c13c40(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc13c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00c13000(in_esi);
  F_00c14ca0(in_esi,in_edi,0);
  F_00c27f20(*(undefined4 *)(in_esi + 0x30),in_edi);
  if (*(int *)(in_esi + 0x10) != 0x5d) {
    uVar1 = F_00c11ae0(in_esi,0x5d);
    uVar1 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar1);
    F_00c11c20(in_esi,uVar1);
  }
  uVar1 = F_00c13000(in_esi);
  return uVar1;
}

/* ref: FUN_00c13c90 */
GEN_LIB GEN_NOFRAME uint F_00c13c90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc13c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int in_esi;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  in_esi = *(int *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(in_esi + 0x24);
  if (*(int *)(param_1 + 0x10) == 0x11d) {
    if (0x7ffffffd < *(int *)(param_2 + 0x1c)) {
      F_00c130c0(in_esi);
    }
    F_00c13280(param_1,((undefined1 *)(gen_frame + 0x0)));
  }
  else {
    F_00c13c40(param_1,((undefined1 *)(gen_frame + 0x0)));
  }
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (*(int *)(param_1 + 0x10) != 0x3d) {
    uVar2 = F_00c11ae0(param_1,0x3d);
    uVar2 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar2);
    F_00c11c20(param_1,uVar2);
  }
  F_00c13000(param_1);
  uVar2 = F_00c27f40(in_esi,((undefined1 *)(gen_frame + 0x0)));
  F_00c14ca0(param_1,((undefined1 *)(gen_frame + 0x18)),0);
  uVar3 = F_00c27f40(in_esi,((undefined1 *)(gen_frame + 0x18)));
  uVar2 = F_00c27800(in_esi,9,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x18) + 8))),uVar2,uVar3);
  *(undefined4 *)(in_esi + 0x24) = uVar1;
  return uVar2;
}

/* ref: FUN_00c13da0 */
GEN_LIB GEN_NOFRAME unsigned int F_00c13da0(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc13da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  int iVar1;
  
  if (in_esi[9] != 0) {
    iVar1 = *in_esi;
    if ((iVar1 != 0xd) && (iVar1 != 0xe)) {
      if (iVar1 != 0) {
        F_00c27e50(in_edi,in_esi);
      }
      F_00c27860(in_edi,*(undefined4 *)(in_esi[6] + 8),in_esi[8],in_esi[9]);
      return;
    }
    F_00c27480(in_edi,in_esi,0xffffffff);
    F_00c27860(in_edi,*(undefined4 *)(in_esi[6] + 8),in_esi[8],0xffffffff);
    in_esi[8] = in_esi[8] - 1;
  }
  return;
}

/* ref: FUN_00c13e40 */
GEN_LIB GEN_NOFRAME uint F_00c13e40(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xc13e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  int * in_edi;
  undefined4 in_eax_00;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  in_edi = *(int * PTR32 *)(in_ecx + 0x30);
  in_eax_00 = *(undefined4 *)(in_ecx + 4);
  uVar4 = F_00c27800(in_edi,10,0,0,0);
  in_eax[4] = 0xffffffff;
  in_eax[5] = 0xffffffff;
  *in_eax = 0xb;
  in_eax[2] = uVar4;
  uVar2 = *(undefined4 *)(in_ecx + 0x30);
  (*(int *)(gen_frame + 0x2c)) = 0;
  ((byte *)(gen_frame + 0x8))[0x1c] = 0;
  ((byte *)(gen_frame + 0x8))[0x1d] = 0;
  ((byte *)(gen_frame + 0x8))[0x1e] = 0;
  ((byte *)(gen_frame + 0x8))[0x1f] = 0;
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  ((byte *)(gen_frame + 0x8))[0x21] = 0;
  ((byte *)(gen_frame + 0x8))[0x22] = 0;
  ((byte *)(gen_frame + 0x8))[0x23] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = in_eax;
  ((byte *)(gen_frame + 0x8))[0x10] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x11] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x12] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x13] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x14] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x15] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x16] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x17] = 0xff;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  ((byte *)(gen_frame + 0x8))[8] = 0;
  ((byte *)(gen_frame + 0x8))[9] = 0;
  ((byte *)(gen_frame + 0x8))[10] = 0;
  ((byte *)(gen_frame + 0x8))[0xb] = 0;
  F_00c27e50(uVar2,in_eax);
  if (*(int *)(in_ecx + 0x10) != 0x7b) {
    uVar5 = F_00c11ae0(in_ecx,0x7b);
    uVar5 = F_00c00790(*(undefined4 *)(in_ecx + 0x34),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_ecx,uVar5);
  }
  F_00c13000(in_ecx);
  while (*(int *)(in_ecx + 0x10) != 0x7d) {
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) != 0) {
      F_00c27e50(in_edi,((byte *)(gen_frame + 0x8)));
      ((byte *)(gen_frame + 0x8))[0] = 0;
      ((byte *)(gen_frame + 0x8))[1] = 0;
      ((byte *)(gen_frame + 0x8))[2] = 0;
      ((byte *)(gen_frame + 0x8))[3] = 0;
      if ((*(int *)(gen_frame + 0x2c)) == 0x32) {
        F_00c27860(in_edi,*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) + 8))),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)),0x32);
        (*(int *)(gen_frame + 0x2c)) = 0;
      }
    }
    if (*(int *)(in_ecx + 0x10) == 0x5b) {
LAB_00c1402b: ;
      F_00c13c90(in_ecx,((byte *)(gen_frame + 0x8)));
    }
    else {
      if (*(int *)(in_ecx + 0x10) == 0x11d) {
        F_00c13040(in_ecx);
        if (*(int *)(in_ecx + 0x20) == 0x3d) goto LAB_00c1402b;
        F_00c14ca0(in_ecx,((byte *)(gen_frame + 0x8)),0);
        if (0x7ffffffd < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32))) {
          piVar3 = *(int * PTR32 *)(in_ecx + 0x30);
          if (*(int *)(*piVar3 + 0x3c) == 0) {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f74)),0x7ffffffd,
                                 ((char *)REFP(0x1348078)));
            iVar6 = piVar3[3];
          }
          else {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f98)),
                                 *(int *)(*piVar3 + 0x3c));
            iVar6 = piVar3[3];
          }
          goto LAB_00c13f8d;
        }
      }
      else {
        F_00c14ca0(in_ecx,((byte *)(gen_frame + 0x8)),0);
        if (0x7ffffffd < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32))) {
          piVar3 = *(int * PTR32 *)(in_ecx + 0x30);
          if (*(int *)(*piVar3 + 0x3c) == 0) {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f74)),0x7ffffffd,
                                 ((char *)REFP(0x1348078)));
          }
          else {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f98)),
                                 *(int *)(*piVar3 + 0x3c));
          }
          iVar6 = piVar3[3];
LAB_00c13f8d: ;
          F_00c11b70(iVar6,uVar5,0);
        }
      }
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) + 1;
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
    }
    if (*(int *)(in_ecx + 0x10) == 0x2c) {
      F_00c13000(in_ecx);
    }
    else {
      if (*(int *)(in_ecx + 0x10) != 0x3b) break;
      F_00c13000(in_ecx);
    }
  }
  F_00c13190(in_eax_00,in_ecx,0x7d,0x7b);
  F_00c13da0(((byte *)(gen_frame + 0x8)),in_edi);
  puVar1 = ((uint *)GEN_TOP((*(int *)(*in_edi + 0xc) + uVar4 * 4)));
  uVar5 = F_00c00290((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  *puVar1 = uVar5 << 0x17 | *puVar1 & 0x7fffff;
  puVar1 = ((uint *)GEN_TOP((*(int *)(*in_edi + 0xc) + uVar4 * 4)));
  uVar4 = F_00c00290((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)));
  uVar4 = (uVar4 << 0xe ^ *puVar1) & 0x7fc000;
  *puVar1 = *puVar1 ^ uVar4;
  return uVar4;
}

/* ref: FUN_00c140d0 */
GEN_LIB GEN_NOFRAME uint F_00c140d0(GEN_P(int in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xc140d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int in_edx;
  
  piVar1 = *(int * PTR32 *)(in_edi + 0x30);
  iVar2 = *piVar1;
  in_edx = 0;
  *(undefined1 *)(iVar2 + 0x4a) = 0;
  if (*(int *)(in_edi + 0x10) != 0x29) {
    while (*(int *)(in_edi + 0x10) != 0x117) {
      if (*(int *)(in_edi + 0x10) == 0x11d) {
        uVar3 = *(undefined4 *)(in_edi + 0x18);
        F_00c13000(in_edi);
        piVar4 = *(int * PTR32 *)(in_edi + 0x30);
        if (200 < (int)(*(byte *)((int)piVar4 + 0x32) + 1 + in_edx)) {
          if (*(int *)(*piVar4 + 0x3c) == 0) {
            uVar7 = F_00c00790(piVar4[4],((char *)REFP(0x1347f74)),200,
                                 ((char *)REFP(0x1348008)));
          }
          else {
            uVar7 = F_00c00790(piVar4[4],((char *)REFP(0x1347f98)),
                                 *(int *)(*piVar4 + 0x3c));
          }
          F_00c11b70(piVar4[3],uVar7,0);
        }
        uVar5 = F_00c132e0(in_edi,uVar3);
        *((ushort *)GEN_TOP(((int)piVar4 + ((uint)*(byte *)((int)piVar4 + 0x32) + in_edx) * 2 + 0xac))) = uVar5
        ;
        in_edx = in_edx + 1;
      }
      else {
        F_00c11c20(in_edi,((char *)REFP(0x1348094)));
      }
      if ((*(char *)(iVar2 + 0x4a) != '\0') || (*(int *)(in_edi + 0x10) != 0x2c)) goto LAB_00c14259;
      F_00c13000(in_edi);
    }
    F_00c13000(in_edi);
    uVar7 = F_00c11c40(in_edi,&REFG(undefined, 0x1348090),3);
    piVar4 = *(int * PTR32 *)(in_edi + 0x30);
    if (200 < (int)(*(byte *)((int)piVar4 + 0x32) + 1 + in_edx)) {
      if (*(int *)(*piVar4 + 0x3c) == 0) {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f74)),200,
                             ((char *)REFP(0x1348008)));
      }
      else {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f98)),
                             *(int *)(*piVar4 + 0x3c));
      }
      F_00c11b70(piVar4[3],uVar6,0);
    }
    uVar5 = F_00c132e0(in_edi,uVar7);
    *((ushort *)GEN_TOP(((int)piVar4 + ((uint)*(byte *)((int)piVar4 + 0x32) + in_edx) * 2 + 0xac))) = uVar5;
    in_edx = in_edx + 1;
    *(undefined1 *)(iVar2 + 0x4a) = 7;
  }
LAB_00c14259: ;
  F_00c133e0(in_edi,in_edx);
  *(byte *)(iVar2 + 0x49) = *(char *)((int)piVar1 + 0x32) - (*(byte *)(iVar2 + 0x4a) & 1);
  uVar7 = F_00c27270(piVar1,(uint)*(byte *)((int)piVar1 + 0x32));
  return uVar7;
}

/* ref: FUN_00c14290 */
GEN_LIB GEN_NOFRAME uint F_00c14290(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc14290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x250];
  int in_esi;
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x24c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  F_00c13960(((int *)(gen_frame + 0x10)),param_1);
  *(undefined4 *)(((int *)(gen_frame + 0x10))[0] + 0x3c) = param_4;
  if (*(int *)(param_1 + 0x10) != 0x28) {
    uVar3 = F_00c11ae0(param_1,0x28);
    uVar3 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(param_1,uVar3);
  }
  F_00c13000(param_1);
  if (param_3 != 0) {
    uVar3 = F_00c11c40(param_1,&REFG(undefined, 0x13480b0),4);
    in_esi = *(int *)(param_1 + 0x30);
    if (200 < *(byte *)(in_esi + 0x32) + 1) {
      F_00c130c0(in_esi);
    }
    uVar2 = F_00c132e0(param_1,uVar3);
    *((ushort *)GEN_TOP((in_esi + 0xac + (uint)*(byte *)(in_esi + 0x32) * 2))) = uVar2;
    piVar1 = *(int * PTR32 *)(param_1 + 0x30);
    *(char *)((int)piVar1 + 0x32) = *(char *)((int)piVar1 + 0x32) + '\x01';
    *((int *)GEN_TOP((*(int *)(*piVar1 + 0x18) + 4 +
            (uint)*((ushort *)GEN_TOP(((int)piVar1 + (uint)*(byte *)((int)piVar1 + 0x32) * 2 + 0xaa))) * 0xc))) =
         piVar1[6];
  }
  F_00c140d0(param_1);
  if (*(int *)(param_1 + 0x10) != 0x29) {
    uVar3 = F_00c11ae0(param_1,0x29);
    uVar3 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(param_1,uVar3);
  }
  F_00c13000(param_1);
  F_00c16290(param_1);
  *(undefined4 *)(((int *)(gen_frame + 0x10))[0] + 0x40) = *(undefined4 *)(param_1 + 4);
  F_00c13190(param_4,param_1,0x106,0x109);
  F_00c13a20(param_1);
  uVar3 = F_00c13860(param_1,((int *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x24c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00c14400 */
GEN_LIB GEN_NOFRAME uint F_00c14400(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc14400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 1;
  F_00c14ca0(in_esi,in_edi,0);
  while (*(int *)(in_esi + 0x10) == 0x2c) {
    F_00c13000(in_esi);
    F_00c27e50(*(undefined4 *)(in_esi + 0x30),in_edi);
    F_00c14ca0(in_esi,in_edi,0);
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c14440 */
GEN_LIB GEN_NOFRAME uint F_00c14440(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc14440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int in_eax_00;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_eax + 0x10);
  iVar2 = *(int *)(in_eax + 0x30);
  in_eax_00 = *(int *)(in_eax + 4);
  if (iVar1 == 0x28) {
    if (in_eax_00 != *(int *)(in_eax + 8)) {
      F_00c11c20(in_eax,((char *)REFP(0x13480b8)));
    }
    F_00c13000(in_eax);
    if (*(int *)(in_eax + 0x10) == 0x29) {
      ((int *)(gen_frame + 0x8))[0] = 0;
    }
    else {
      F_00c14400(in_eax,((int *)(gen_frame + 0x8)));
      F_00c27480(iVar2,((int *)(gen_frame + 0x8)),0xffffffff);
    }
    F_00c13190(in_eax_00,in_eax,0x29,0x28);
  }
  else if (iVar1 == 0x7b) {
    F_00c13e40(((int *)(gen_frame + 0x8)),in_eax);
  }
  else {
    if (iVar1 != 0x11e) {
      uVar3 = F_00c11c20(in_eax,((char *)REFP(0x13480ec)));
      return uVar3;
    }
    uVar3 = F_00c273d0(iVar2,*(undefined4 *)(in_eax + 0x18));
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
    ((int *)(gen_frame + 0x8))[0] = 4;
    (*(uint *)(gen_frame + 0x10)) = uVar3;
    F_00c13000(in_eax);
  }
  iVar1 = param_2[2];
  if ((((int *)(gen_frame + 0x8))[0] == 0xd) || (((int *)(gen_frame + 0x8))[0] == 0xe)) {
    iVar4 = -1;
  }
  else {
    if (((int *)(gen_frame + 0x8))[0] != 0) {
      F_00c27e50(iVar2,((int *)(gen_frame + 0x8)));
    }
    iVar4 = (*(int *)(iVar2 + 0x24) - iVar1) - 1;
  }
  uVar3 = F_00c27800(iVar2,0x1c,iVar1,iVar4 + 1,2);
  param_2[4] = 0xffffffff;
  param_2[5] = 0xffffffff;
  *param_2 = 0xd;
  param_2[2] = uVar3;
  uVar3 = F_00c27740(iVar2,in_eax_00);
  *(int *)(iVar2 + 0x24) = iVar1 + 1;
  return uVar3;
}

/* ref: FUN_00c14580 */
GEN_LIB GEN_NOFRAME uint F_00c14580(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc14580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 in_eax_00;
  uint uVar1;
  
  if (*(int *)(in_eax + 0x10) == 0x28) {
    in_eax_00 = *(undefined4 *)(in_eax + 4);
    F_00c13000(in_eax);
    F_00c14ca0(in_eax,param_2,0);
    F_00c13190(in_eax_00,in_eax,0x29,0x28);
    uVar1 = F_00c27a80(*(undefined4 *)(in_eax + 0x30),param_2);
    return uVar1;
  }
  if (*(int *)(in_eax + 0x10) != 0x11d) {
    uVar1 = F_00c11c20(in_eax,((char *)REFP(0x1348108)));
    return uVar1;
  }
  uVar1 = F_00c136d0(in_eax,param_2);
  return uVar1;
}

/* ref: FUN_00c145f0 */
GEN_LIB GEN_NOFRAME uint F_00c145f0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc145f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)(in_esi + 0x30);
  F_00c14580(in_esi,in_edi);
  uVar4 = *(int *)(in_esi + 0x10) - 0x28;
  uVar5 = uVar4;
  if (uVar4 < 0xf7) {
    do {
      uVar5 = (uint)(&REFG(byte, 0xc147dc))[(int)(uVar4)];
      switch((unsigned int)(uintptr_t)(uVar4 + 0x28)) {
      case 0x28: ;
      case 0x7b: ;
      case 0x11e: ;
                    
        F_00c27e50(uVar1,in_edi);
        F_00c14440(in_esi,in_edi);
        break;
      default: ;
        goto switchD_00c14627_caseD_29;
      case 0x2e: ;
        uVar3 = *(undefined4 *)(in_esi + 0x30);
        F_00c27ed0(uVar3,in_edi);
        F_00c13000(in_esi);
        if (*(int *)(in_esi + 0x10) != 0x11d) {
          uVar5 = F_00c11ae0(in_esi,0x11d);
          uVar5 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar5);
          F_00c11c20(in_esi,uVar5);
        }
        uVar2 = *(undefined4 *)(in_esi + 0x18);
        F_00c13000(in_esi);
        uVar5 = F_00c273d0(*(undefined4 *)(in_esi + 0x30),uVar2);
        (*(uint *)(gen_frame + 0x10)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
        ((undefined4 *)(gen_frame + 0x8))[0] = 4;
        F_00c28490(uVar3,in_edi,((undefined4 *)(gen_frame + 0x8)));
        break;
      case 0x3a: ;
        F_00c13000(in_esi);
        if (*(int *)(in_esi + 0x10) != 0x11d) {
          uVar5 = F_00c11ae0(in_esi,0x11d);
          uVar5 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar5);
          F_00c11c20(in_esi,uVar5);
        }
        uVar3 = *(undefined4 *)(in_esi + 0x18);
        F_00c13000(in_esi);
        uVar5 = F_00c273d0(*(undefined4 *)(in_esi + 0x30),uVar3);
        (*(uint *)(gen_frame + 0x10)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
        ((undefined4 *)(gen_frame + 0x8))[0] = 4;
        F_00c28130(uVar1,in_edi,((undefined4 *)(gen_frame + 0x8)));
        F_00c14440(in_esi,in_edi);
        break;
      case 0x5b: ;
        F_00c27ed0(uVar1,in_edi);
        F_00c13000(in_esi);
        F_00c14ca0(in_esi,((undefined4 *)(gen_frame + 0x8)),0);
        F_00c27f20(*(undefined4 *)(in_esi + 0x30),((undefined4 *)(gen_frame + 0x8)));
        if (*(int *)(in_esi + 0x10) != 0x5d) {
          uVar5 = F_00c11ae0(in_esi,0x5d);
          uVar5 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar5);
          F_00c11c20(in_esi,uVar5);
        }
        F_00c13000(in_esi);
        F_00c28490(uVar1,in_edi,((undefined4 *)(gen_frame + 0x8)));
      }
      uVar4 = *(int *)(in_esi + 0x10) - 0x28;
      uVar5 = uVar4;
    } while (uVar4 < 0xf7);
switchD_00c14627_caseD_29: ;
                    
  }
  return uVar5;
}

/* ref: FUN_00c148e0 */
GEN_LIB GEN_NOFRAME uint F_00c148e0(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc148e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_2 + 0x10))) {
  case 0x7b: ;
    uVar2 = F_00c13e40(in_eax,param_2);
    return uVar2;
  default: ;
    uVar2 = F_00c145f0(param_2,in_eax);
    return uVar2;
  case 0x107: ;
    *in_eax = 3;
    in_eax[2] = 0;
    break;
  case 0x109: ;
    F_00c13000(param_2);
    uVar2 = F_00c14290(param_2,in_eax,0,*(undefined4 *)(param_2 + 4));
    return uVar2;
  case 0x10d: ;
    *in_eax = 1;
    in_eax[2] = 0;
    break;
  case 0x113: ;
    *in_eax = 2;
    in_eax[2] = 0;
    break;
  case 0x117: ;
    piVar1 = *(int * PTR32 *)(param_2 + 0x30);
    if (*(char *)(*piVar1 + 0x4a) == '\0') {
      F_00c11c20(param_2,((char *)REFP(0x134811c)));
    }
    *(byte *)(*piVar1 + 0x4a) = *(byte *)(*piVar1 + 0x4a) & 0xfb;
    uVar2 = F_00c27800(piVar1,0x25,0,1,0);
    *in_eax = 0xe;
    in_eax[2] = uVar2;
    break;
  case 0x11c: ;
    in_eax[2] = 0;
    in_eax[4] = 0xffffffff;
    in_eax[5] = 0xffffffff;
    *in_eax = 5;
    *(undefined8 *)(in_eax + 2) = *(undefined8 *)(param_2 + 0x18);
    uVar2 = F_00c13000(param_2);
    return uVar2;
  case 0x11e: ;
    F_00c13260(*(undefined4 *)(param_2 + 0x18),param_2,in_eax);
    uVar2 = F_00c13000(param_2);
    return uVar2;
  }
  in_eax[5] = 0xffffffff;
  in_eax[4] = 0xffffffff;
  uVar2 = F_00c13000(param_2);
  return uVar2;
}

/* ref: FUN_00c14af0 */
GEN_LIB GEN_NOFRAME uint F_00c14af0(GEN_P(undefined4 in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc14af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(in_eax)) {
  case 0x25: ;
    return 4;
  default: ;
    return 0xf;
  case 0x2a: ;
    return 2;
  case 0x2b: ;
    return 0;
  case 0x2d: ;
    return 1;
  case 0x2f: ;
    return 3;
  case 0x3c: ;
    return 9;
  case 0x3e: ;
    return 0xb;
  case 0x5e: ;
    return 5;
  case 0x101: ;
    return 0xd;
  case 0x10f: ;
    return 0xe;
  case 0x116: ;
    return 6;
  case 0x118: ;
    return 8;
  case 0x119: ;
    return 0xc;
  case 0x11a: ;
    return 10;
  case 0x11b: ;
    return 7;
  }
}

/* ref: FUN_00c14ca0 */
GEN_LIB GEN_NOFRAME uint F_00c14ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc14ca0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short * psVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  psVar1 = ((short *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)));
  *psVar1 = *psVar1 + 1;
  if (200 < *((ushort *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)))) {
    F_00c11b70(param_1,((char *)REFP(0x1348024)),0);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0x23) {
    uVar5 = 2;
  }
  else if (iVar2 == 0x2d) {
    uVar5 = 0;
  }
  else if (iVar2 != 0x10e) {
    F_00c148e0(param_2,param_1);
    goto LAB_00c14d03;
  }
  F_00c13000(param_1);
  F_00c14ca0(param_1,param_2,8);
  F_00c28640(*(undefined4 *)(param_1 + 0x30),uVar5,param_2);
LAB_00c14d03: ;
  uVar3 = F_00c14af0(*(undefined4 *)(param_1 + 0x10));
  while ((uVar3 != 0xf && ((*(uint *)&gen_a2) < (byte)(&REFG(undefined, 0x110e8c0))[(int)(uVar3 * 2)]))) {
    F_00c13000(param_1);
    F_00c286f0(*(undefined4 *)(param_1 + 0x30),uVar3,param_2);
    uVar4 = F_00c14ca0(param_1,((undefined1 *)(gen_frame + 0x8)),(uint)(byte)(&REFG(undefined, 0x110e8c1))[(int)(uVar3 * 2)]);
    F_00c287a0(*(undefined4 *)(param_1 + 0x30),uVar3,param_2,((undefined1 *)(gen_frame + 0x8)));
    uVar3 = uVar4;
  }
  psVar1 = ((short *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)));
  *psVar1 = *psVar1 - 1;
  return uVar3;
}

/* ref: FUN_00c14e20 */
GEN_LIB GEN_NOFRAME uint F_00c14e20(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc14e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(in_eax + 0x30);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)(iVar1 + 0x32);
  (*(undefined1 *)(gen_frame + 0xd)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 * PTR32 *)(iVar1 + 0x14) = &(*(undefined4 *)(gen_frame + 0x4));
  F_00c16290(in_eax);
  puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = *puVar2;
  F_00c13420(*(undefined4 *)(iVar1 + 0xc),(uint)*(byte *)(puVar2 + 2));
  if (*(char *)((int)puVar2 + 9) != '\0') {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar2 + 2),0,0);
  }
  *(uint *)(iVar1 + 0x24) = (uint)*(byte *)(iVar1 + 0x32);
  uVar3 = F_00c27a60(iVar1,puVar2[1]);
  return uVar3;
}

/* ref: FUN_00c14ea0 */
GEN_LIB GEN_NOFRAME uint F_00c14ea0(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0xc14ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = *(int *)(in_ecx + 0x30);
  iVar2 = *(int *)(iVar1 + 0x24);
  bVar3 = false;
  uVar4 = 0;
  if (in_eax != (int *)0x0) {
    do {
      if (in_eax[2] == 9) {
        if (in_eax[4] == *(int *)(in_edi + 8)) {
          bVar3 = true;
          in_eax[4] = iVar2;
        }
        if (in_eax[5] == *(int *)(in_edi + 8)) {
          bVar3 = true;
          in_eax[5] = iVar2;
        }
      }
      in_eax = (int *)*in_eax;
    } while (in_eax != (int *)0x0);
    uVar4 = 0;
    if (bVar3) {
      F_00c27800(iVar1,0,*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(in_edi + 8),0);
      uVar4 = F_00c27270(iVar1,1);
    }
  }
  return uVar4;
}

/* ref: FUN_00c14f00 */
GEN_LIB GEN_NOFRAME uint F_00c14f00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc14f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)(param_2 + 8);
  if ((*piVar1 < 6) || (9 < *piVar1)) {
    F_00c11c20(param_1,((char *)REFP(0x1348148)));
  }
  if (*(int *)(param_1 + 0x10) == 0x2c) {
    F_00c13000(param_1);
    ((int *)(gen_frame + 0x20))[0] = param_2;
    F_00c145f0(param_1,((int *)(gen_frame + 0x28)));
    if (((int *)(gen_frame + 0x28))[0] == 6) {
      F_00c14ea0(param_2,param_1,((int *)(gen_frame + 0x28)));
    }
    if ((int)(200 - (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)))) < (int)param_3) {
      F_00c130c0(*(undefined4 *)(param_1 + 0x30));
    }
    F_00c14f00(param_1,(int)((int *)(gen_frame + 0x20)),param_3 + 1);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x3d) {
      uVar5 = F_00c11ae0(param_1,0x3d);
      uVar5 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar5);
      F_00c11c20(param_1,uVar5);
    }
    F_00c13000(param_1);
    uVar5 = F_00c14400(param_1,((undefined4 *)(gen_frame + 0x8)));
    if (uVar5 == param_3) {
      F_00c27510(*(undefined4 *)(param_1 + 0x30),((undefined4 *)(gen_frame + 0x8)));
      uVar5 = F_00c28040(*(undefined4 *)(param_1 + 0x30),piVar1,((undefined4 *)(gen_frame + 0x8)));
      return uVar5;
    }
    F_00c13740(param_1,((undefined4 *)(gen_frame + 0x8)),param_3,uVar5);
    if ((int)param_3 < (int)uVar5) {
      piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x24)));
      *piVar2 = *piVar2 + (param_3 - uVar5);
    }
  }
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(iVar3 + 0x24);
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
  ((undefined4 *)(gen_frame + 0x8))[0] = 0xc;
  (*(int *)(gen_frame + 0x10)) = iVar4 - 1;
  uVar5 = F_00c28040(iVar3,piVar1,((undefined4 *)(gen_frame + 0x8)));
  return uVar5;
}

/* ref: FUN_00c15060 */
GEN_LIB GEN_NOFRAME uint F_00c15060(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc15060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c14ca0(in_esi,((byte *)(gen_frame + 0x8)),0);
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) == 1) {
    ((byte *)(gen_frame + 0x8))[0] = 3;
    ((byte *)(gen_frame + 0x8))[1] = 0;
    ((byte *)(gen_frame + 0x8))[2] = 0;
    ((byte *)(gen_frame + 0x8))[3] = 0;
  }
  F_00c282a0(*(undefined4 *)(in_esi + 0x30),((byte *)(gen_frame + 0x8)));
  (*(undefined1 *)((char *)&uVar1 + 0)) = ((byte *)(gen_frame + 0x8))[0x14];
  (*(undefined1 *)((char *)&uVar1 + 1)) = ((byte *)(gen_frame + 0x8))[0x15];
  (*(undefined1 *)((char *)&uVar1 + 2)) = ((byte *)(gen_frame + 0x8))[0x16];
  (*(undefined1 *)((char *)&uVar1 + 3)) = ((byte *)(gen_frame + 0x8))[0x17];
  return uVar1;
}

/* ref: FUN_00c150a0 */
GEN_LIB GEN_NOFRAME uint F_00c150a0(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc150a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  byte bVar4;
  
  iVar1 = *(int *)(in_eax + 0x30);
  bVar4 = 0;
  for (puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x14); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    if (*(char *)((int)puVar2 + 10) != '\0') goto LAB_00c150d0;
    bVar4 = bVar4 | *(byte *)((int)puVar2 + 9);
  }
  F_00c11c20(in_eax,((char *)REFP(0x1348170)));
LAB_00c150d0: ;
  if (bVar4 != 0) {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar2 + 2),0,0);
  }
  uVar3 = F_00c27990(iVar1);
  uVar3 = F_00c271e0(iVar1,puVar2 + 1,uVar3);
  return uVar3;
}

/* ref: FUN_00c15100 */
GEN_LIB GEN_NOFRAME uint F_00c15100(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(in_eax + 0x30);
  F_00c13000(in_eax);
  uVar3 = F_00c26f20(iVar1);
  F_00c14ca0(in_eax,((int *)(gen_frame + 0x18)),0);
  if (((int *)(gen_frame + 0x18))[0] == 1) {
    ((int *)(gen_frame + 0x18))[0] = 3;
  }
  F_00c282a0(*(undefined4 *)(in_eax + 0x30),((int *)(gen_frame + 0x18)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0x16)) = 1;
  (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(iVar1 + 0x32);
  (*(undefined1 *)(gen_frame + 0x15)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 * PTR32 *)(iVar1 + 0x14) = &(*(undefined4 *)(gen_frame + 0xc));
  if (*(int *)(in_eax + 0x10) != 0x103) {
    uVar4 = F_00c11ae0(in_eax,0x103);
    uVar4 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar4);
    F_00c11c20(in_eax,uVar4);
  }
  F_00c13000(in_eax);
  F_00c14e20(in_eax);
  uVar4 = F_00c27990(iVar1);
  F_00c28a30(iVar1,uVar4,uVar3);
  F_00c13190(param_2,in_eax,0x106,0x115);
  puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = *puVar2;
  F_00c13420(*(undefined4 *)(iVar1 + 0xc),(uint)*(byte *)(puVar2 + 2));
  if (*(char *)((int)puVar2 + 9) != '\0') {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar2 + 2),0,0);
  }
  *(uint *)(iVar1 + 0x24) = (uint)*(byte *)(iVar1 + 0x32);
  F_00c27a60(iVar1,puVar2[1]);
  uVar3 = F_00c27a60(iVar1,(*(undefined4 *)(gen_frame + 0x2c)));
  return uVar3;
}

/* ref: FUN_00c15230 */
GEN_LIB GEN_NOFRAME uint F_00c15230(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int in_esi;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  in_esi = *(int *)(param_1 + 0x30);
  uVar2 = F_00c26f20(in_esi);
  (*(undefined1 *)(gen_frame + 0x16)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(in_esi + 0x32);
  (*(undefined1 *)(gen_frame + 0x15)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(in_esi + 0x14);
  *(undefined4 * PTR32 *)(in_esi + 0x14) = &(*(undefined4 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  (*(undefined1 *)(gen_frame + 0x8)) = *(undefined1 *)(in_esi + 0x32);
  (*(char *)(gen_frame + 0x9)) = '\0';
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(in_esi + 0x14);
  *(undefined4 * PTR32 *)(in_esi + 0x14) = &(*(undefined4 *)(gen_frame + 0x0));
  F_00c13000(param_1);
  F_00c16290(param_1);
  F_00c13190(param_2,param_1,0x114,0x110);
  F_00c14ca0(param_1,((int *)(gen_frame + 0x18)),0);
  if (((int *)(gen_frame + 0x18))[0] == 1) {
    ((int *)(gen_frame + 0x18))[0] = 3;
  }
  F_00c282a0(*(undefined4 *)(param_1 + 0x30),((int *)(gen_frame + 0x18)));
  if ((*(char *)(gen_frame + 0x9)) == '\0') {
    F_00c13810(in_esi);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = (*(uint *)(gen_frame + 0x2c));
  }
  else {
    F_00c150a0(param_1);
    F_00c27a60(*(undefined4 *)(param_1 + 0x30),(*(uint *)(gen_frame + 0x2c)));
    F_00c13810(in_esi);
    uVar3 = F_00c27990(in_esi);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
  }
  F_00c28a30(uVar4,uVar3,uVar2);
  puVar1 = *(undefined4 * PTR32 *)(in_esi + 0x14);
  *(undefined4 *)(in_esi + 0x14) = *puVar1;
  F_00c13420(*(undefined4 *)(in_esi + 0xc),(uint)*(byte *)(puVar1 + 2));
  if (*(char *)((int)puVar1 + 9) != '\0') {
    F_00c27800(in_esi,0x23,(uint)*(byte *)(puVar1 + 2),0,0);
  }
  *(uint *)(in_esi + 0x24) = (uint)*(byte *)(in_esi + 0x32);
  uVar2 = F_00c27a60(in_esi,puVar1[1]);
  return uVar2;
}

/* ref: FUN_00c15390 */
GEN_LIB GEN_NOFRAME uint F_00c15390(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc15390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00c14ca0(in_esi,((uint *)(gen_frame + 0x8)),0);
  F_00c27e50(*(undefined4 *)(in_esi + 0x30),((uint *)(gen_frame + 0x8)));
  return ((uint *)(gen_frame + 0x8))[0];
}

/* ref: FUN_00c153c0 */
GEN_LIB GEN_NOFRAME uint F_00c153c0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc153c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = *(int * PTR32 *)(in_eax + 0x30);
  iVar6 = 3;
  *(char *)((int)piVar1 + 0x32) = *(char *)((int)piVar1 + 0x32) + '\x03';
  do {
    iVar3 = (uint)*(byte *)((int)piVar1 + 0x32) - iVar6;
    iVar6 = iVar6 - 1;
    *((int *)GEN_TOP((*(int *)(*piVar1 + 0x18) + 4 + (uint)*(ushort *)((int)piVar1 + iVar3 * 2 + 0xac) * 0xc)))
         = piVar1[6];
  } while (iVar6 != 0);
  if (*(int *)(in_eax + 0x10) != 0x103) {
    uVar4 = F_00c11ae0(in_eax,0x103);
    uVar4 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar4);
    F_00c11c20(in_eax,uVar4);
  }
  F_00c13000(in_eax);
  if (param_5 == 0) {
    uVar4 = F_00c27990(piVar1);
  }
  else {
    uVar4 = F_00c27830(piVar1,0x20,param_2,0x1fffe);
  }
  ((int *)(gen_frame + 0x4))[1] = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)((int)piVar1 + 0x32);
  (*(undefined1 *)(gen_frame + 0xd)) = 0;
  ((int *)(gen_frame + 0x4))[0] = piVar1[5];
  piVar1[5] = (int)((int *)(gen_frame + 0x4));
  F_00c133e0(in_eax,param_4);
  F_00c27270(piVar1,param_4);
  F_00c14e20(in_eax);
  piVar2 = (int *)piVar1[5];
  piVar1[5] = *piVar2;
  F_00c13420(piVar1[3],(uint)*(byte *)(piVar2 + 2));
  if (*(char *)((int)piVar2 + 9) != '\0') {
    F_00c27800(piVar1,0x23,(uint)*(byte *)(piVar2 + 2),0,0);
  }
  piVar1[9] = (uint)*(byte *)((int)piVar1 + 0x32);
  F_00c27a60(piVar1,piVar2[1]);
  F_00c27a60(piVar1,uVar4);
  if (param_5 == 0) {
    uVar5 = F_00c27800(piVar1,0x21,param_2,0,param_4);
  }
  else {
    uVar5 = F_00c27830(piVar1,0x1f,param_2,0x1fffe);
  }
  F_00c27740(piVar1,param_3);
  if (param_5 != 0) {
    uVar4 = F_00c28a30(piVar1,uVar5,uVar4 + 1);
    return uVar4;
  }
  uVar5 = F_00c27990(piVar1);
  uVar4 = F_00c28a30(piVar1,uVar5,uVar4 + 1);
  return uVar4;
}

/* ref: FUN_00c15560 */
GEN_LIB GEN_NOFRAME uint F_00c15560(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc15560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(in_edi + 0x30);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  uVar5 = F_00c11c40(in_edi,((char *)REFP(0x1348184)),0xb);
  iVar3 = *(int *)(in_edi + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 1) {
    F_00c130c0(iVar3);
  }
  uVar4 = F_00c132e0(in_edi,uVar5);
  *((ushort *)GEN_TOP((iVar3 + 0xac + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar4;
  uVar5 = F_00c11c40(in_edi,((char *)REFP(0x1348190)),0xb);
  iVar3 = *(int *)(in_edi + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 2) {
    F_00c130c0(iVar3);
  }
  uVar4 = F_00c132e0(in_edi,uVar5);
  *((ushort *)GEN_TOP((iVar3 + 0xae + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar4;
  uVar5 = F_00c11c40(in_edi,((char *)REFP(0x134819c)),10);
  iVar3 = *(int *)(in_edi + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 3) {
    F_00c130c0(iVar3);
  }
  uVar4 = F_00c132e0(in_edi,uVar5);
  *((ushort *)GEN_TOP((iVar3 + 0xb0 + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar4;
  iVar3 = *(int *)(in_edi + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 4) {
    F_00c130c0(iVar3);
  }
  uVar4 = F_00c132e0(in_edi,param_2);
  *((ushort *)GEN_TOP((iVar3 + 0xb2 + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar4;
  if (*(int *)(in_edi + 0x10) != 0x3d) {
    uVar5 = F_00c11ae0(in_edi,0x3d);
    uVar5 = F_00c00790(*(undefined4 *)(in_edi + 0x34),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_edi,uVar5);
  }
  F_00c13000(in_edi);
  F_00c14ca0(in_edi,((undefined1 *)(gen_frame + 0x8)),0);
  F_00c27e50(*(undefined4 *)(in_edi + 0x30),((undefined1 *)(gen_frame + 0x8)));
  if (*(int *)(in_edi + 0x10) != 0x2c) {
    uVar5 = F_00c11ae0(in_edi,0x2c);
    uVar5 = F_00c00790(*(undefined4 *)(in_edi + 0x34),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_edi,uVar5);
  }
  F_00c13000(in_edi);
  F_00c14ca0(in_edi,((undefined1 *)(gen_frame + 0x8)),0);
  F_00c27e50(*(undefined4 *)(in_edi + 0x30),((undefined1 *)(gen_frame + 0x8)));
  if (*(int *)(in_edi + 0x10) == 0x2c) {
    F_00c13000(in_edi);
    F_00c14ca0(in_edi,((undefined1 *)(gen_frame + 0x8)),0);
    F_00c27e50(*(undefined4 *)(in_edi + 0x30),((undefined1 *)(gen_frame + 0x8)));
  }
  else {
    uVar5 = F_00c27400(iVar1,1.0);
    F_00c27830(iVar1,1,*(undefined4 *)(iVar1 + 0x24),uVar5);
    F_00c27270(iVar1,1);
  }
  uVar5 = F_00c153c0(in_edi,uVar2,param_3,1,1);
  return uVar5;
}

/* ref: FUN_00c15790 */
GEN_LIB GEN_NOFRAME uint F_00c15790(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  uVar6 = F_00c11c40(param_1,((char *)REFP(0x13481a8)),0xf);
  iVar7 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar7 + 0x32) + 1) {
    F_00c130c0(iVar7);
  }
  uVar5 = F_00c132e0(param_1,uVar6);
  *((ushort *)GEN_TOP((iVar7 + 0xac + (uint)*(byte *)(iVar7 + 0x32) * 2))) = uVar5;
  uVar6 = F_00c11c40(param_1,((char *)REFP(0x13481b8)),0xb);
  iVar7 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar7 + 0x32) + 2) {
    F_00c130c0(iVar7);
  }
  uVar5 = F_00c132e0(param_1,uVar6);
  *((ushort *)GEN_TOP((iVar7 + 0xae + (uint)*(byte *)(iVar7 + 0x32) * 2))) = uVar5;
  uVar6 = F_00c11c40(param_1,((char *)REFP(0x13481c4)),0xd);
  iVar7 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar7 + 0x32) + 3) {
    F_00c130c0(iVar7);
  }
  uVar5 = F_00c132e0(param_1,uVar6);
  *((ushort *)GEN_TOP((iVar7 + 0xb0 + (uint)*(byte *)(iVar7 + 0x32) * 2))) = uVar5;
  iVar7 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar7 + 0x32) + 4) {
    F_00c130c0(iVar7);
  }
  uVar5 = F_00c132e0(param_1,param_2);
  *((ushort *)GEN_TOP((iVar7 + 0xb2 + (uint)*(byte *)(iVar7 + 0x32) * 2))) = uVar5;
  iVar7 = 4;
  while (*(int *)(param_1 + 0x10) == 0x2c) {
    F_00c13000(param_1);
    if (*(int *)(param_1 + 0x10) != 0x11d) {
      uVar6 = F_00c11ae0(param_1,0x11d);
      uVar6 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar6);
      F_00c11c20(param_1,uVar6);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    F_00c13000(param_1);
    piVar4 = *(int * PTR32 *)(param_1 + 0x30);
    if (200 < (int)(*(byte *)((int)piVar4 + 0x32) + 1 + iVar7)) {
      if (*(int *)(*piVar4 + 0x3c) == 0) {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f74)),200,
                             ((char *)REFP(0x1348008)));
      }
      else {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f98)),
                             *(int *)(*piVar4 + 0x3c));
      }
      F_00c11b70(piVar4[3],uVar6,0);
    }
    uVar5 = F_00c132e0(param_1,uVar3);
    *((ushort *)GEN_TOP(((int)piVar4 + ((uint)*(byte *)((int)piVar4 + 0x32) + iVar7) * 2 + 0xac))) = uVar5;
    iVar7 = iVar7 + 1;
  }
  if (*(int *)(param_1 + 0x10) != 0x10b) {
    uVar6 = F_00c11ae0(param_1,0x10b);
    uVar6 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar6);
    F_00c11c20(param_1,uVar6);
  }
  F_00c13000(param_1);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar6 = F_00c14400(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c13740(param_1,((undefined1 *)(gen_frame + 0x8)),3,uVar6);
  F_00c27230(iVar1,3);
  uVar6 = F_00c153c0(param_1,uVar2,uVar3,iVar7 - 3,0);
  return uVar6;
}

/* ref: FUN_00c15a10 */
GEN_LIB GEN_NOFRAME uint F_00c15a10(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  iVar1 = *(int *)(in_eax + 0x30);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xe)) = 1;
  (*(undefined1 *)(gen_frame + 0xc)) = *(undefined1 *)(iVar1 + 0x32);
  (*(undefined1 *)(gen_frame + 0xd)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 * PTR32 *)(iVar1 + 0x14) = &(*(undefined4 *)(gen_frame + 0x4));
  F_00c13000(in_eax);
  if (*(int *)(in_eax + 0x10) != 0x11d) {
    uVar5 = F_00c11ae0(in_eax,0x11d);
    uVar5 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_eax,uVar5);
  }
  uVar2 = *(undefined4 *)(in_eax + 0x18);
  F_00c13000(in_eax);
  iVar3 = *(int *)(in_eax + 0x10);
  if (iVar3 != 0x2c) {
    if (iVar3 == 0x3d) {
      F_00c15560(in_eax,uVar2,param_2);
      goto LAB_00c15abc;
    }
    if (iVar3 != 0x10b) {
      F_00c11c20(in_eax,((char *)REFP(0x13481d4)));
      goto LAB_00c15abc;
    }
  }
  F_00c15790(in_eax,uVar2);
LAB_00c15abc: ;
  F_00c13190(param_2,in_eax,0x106,0x108);
  puVar4 = *(undefined4 * PTR32 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = *puVar4;
  F_00c13420(*(undefined4 *)(iVar1 + 0xc),(uint)*(byte *)(puVar4 + 2));
  if (*(char *)((int)puVar4 + 9) != '\0') {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar4 + 2),0,0);
  }
  *(uint *)(iVar1 + 0x24) = (uint)*(byte *)(iVar1 + 0x32);
  uVar5 = F_00c27a60(iVar1,puVar4[1]);
  return uVar5;
}

/* ref: FUN_00c15b20 */
GEN_LIB GEN_NOFRAME uint F_00c15b20(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc15b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c13000(in_esi);
  F_00c14ca0(in_esi,((byte *)(gen_frame + 0x8)),0);
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) == 1) {
    ((byte *)(gen_frame + 0x8))[0] = 3;
    ((byte *)(gen_frame + 0x8))[1] = 0;
    ((byte *)(gen_frame + 0x8))[2] = 0;
    ((byte *)(gen_frame + 0x8))[3] = 0;
  }
  F_00c282a0(*(undefined4 *)(in_esi + 0x30),((byte *)(gen_frame + 0x8)));
  if (*(int *)(in_esi + 0x10) != 0x112) {
    uVar1 = F_00c11ae0(in_esi,0x112);
    uVar1 = F_00c00790(*(undefined4 *)(in_esi + 0x34),((char *)REFP(0x1347f64)),uVar1);
    F_00c11c20(in_esi,uVar1);
  }
  F_00c13000(in_esi);
  F_00c14e20(in_esi);
  (*(undefined1 *)((char *)&uVar1 + 0)) = ((byte *)(gen_frame + 0x8))[0x14];
  (*(undefined1 *)((char *)&uVar1 + 1)) = ((byte *)(gen_frame + 0x8))[0x15];
  (*(undefined1 *)((char *)&uVar1 + 2)) = ((byte *)(gen_frame + 0x8))[0x16];
  (*(undefined1 *)((char *)&uVar1 + 3)) = ((byte *)(gen_frame + 0x8))[0x17];
  return uVar1;
}

/* ref: FUN_00c15ba0 */
GEN_LIB GEN_NOFRAME uint F_00c15ba0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(in_eax + 0x30);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  uVar3 = F_00c15b20(in_eax);
  iVar2 = *(int *)(in_eax + 0x10);
  while (iVar2 == 0x105) {
    uVar4 = F_00c27990(uVar1);
    F_00c271e0(uVar1,&(*(undefined4 *)(gen_frame + 0xc)),uVar4);
    F_00c27a60(uVar1,uVar3);
    uVar3 = F_00c15b20(in_eax);
    iVar2 = *(int *)(in_eax + 0x10);
  }
  if (*(int *)(in_eax + 0x10) == 0x104) {
    uVar4 = F_00c27990(uVar1);
    F_00c271e0(uVar1,&(*(undefined4 *)(gen_frame + 0xc)),uVar4);
    F_00c27a60(uVar1,uVar3);
    F_00c13000(in_eax);
    F_00c14e20(in_eax);
  }
  else {
    F_00c271e0(uVar1,&(*(undefined4 *)(gen_frame + 0xc)),uVar3);
  }
  F_00c27a60(uVar1,(*(undefined4 *)(gen_frame + 0xc)));
  uVar3 = F_00c13190(param_2,in_eax,0x106,0x10a);
  return uVar3;
}

/* ref: FUN_00c15c60 */
GEN_LIB GEN_NOFRAME uint F_00c15c60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc15c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x10) != 0x11d) {
    uVar6 = F_00c11ae0(param_1,0x11d);
    uVar6 = F_00c00790(*(undefined4 *)(param_1 + 0x34),((char *)REFP(0x1347f64)),uVar6);
    F_00c11c20(param_1,uVar6);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  F_00c13000(param_1);
  iVar3 = *(int *)(param_1 + 0x30);
  if (200 < *(byte *)(iVar3 + 0x32) + 1) {
    F_00c130c0(iVar3);
  }
  uVar5 = F_00c132e0(param_1,uVar2);
  *((ushort *)GEN_TOP((iVar3 + 0xac + (uint)*(byte *)(iVar3 + 0x32) * 2))) = uVar5;
  iVar3 = piVar1[9];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
  ((undefined4 *)(gen_frame + 0x0))[0] = 6;
  (*(int *)(gen_frame + 0x8)) = iVar3;
  F_00c27270(piVar1,1);
  piVar4 = *(int * PTR32 *)(param_1 + 0x30);
  *(char *)((int)piVar4 + 0x32) = *(char *)((int)piVar4 + 0x32) + '\x01';
  *((int *)GEN_TOP((*(int *)(*piVar4 + 0x18) + 4 +
          (uint)*((ushort *)GEN_TOP(((int)piVar4 + (uint)*(byte *)((int)piVar4 + 0x32) * 2 + 0xaa))) * 0xc))) =
       piVar4[6];
  F_00c14290(param_1,((undefined1 *)(gen_frame + 0x18)),0,*(undefined4 *)(param_1 + 4));
  F_00c28040(piVar1,((undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x18)));
  uVar6 = (uint)*((ushort *)GEN_TOP(((int)piVar1 + (uint)*(byte *)((int)piVar1 + 0x32) * 2 + 0xaa)));
  *((int *)GEN_TOP((*(int *)(*piVar1 + 0x18) + 4 + uVar6 * 0xc))) = piVar1[6];
  return uVar6 * 3;
}

/* ref: FUN_00c15d70 */
GEN_LIB GEN_NOFRAME unsigned int F_00c15d70(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc15d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int * piVar2;
  ushort uVar3;
  uint uVar4;
  int in_edx;
  
  in_edx = 0;
  while( true ) {
    if (*(int *)(in_eax + 0x10) != 0x11d) {
      uVar4 = F_00c11ae0(in_eax,0x11d);
      uVar4 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar4);
      F_00c11c20(in_eax,uVar4);
    }
    uVar1 = *(undefined4 *)(in_eax + 0x18);
    F_00c13000(in_eax);
    piVar2 = *(int * PTR32 *)(in_eax + 0x30);
    if (200 < (int)(*(byte *)((int)piVar2 + 0x32) + 1 + in_edx)) {
      if (*(int *)(*piVar2 + 0x3c) == 0) {
        uVar4 = F_00c00790(piVar2[4],((char *)REFP(0x1347f74)),200,
                             ((char *)REFP(0x1348008)));
      }
      else {
        uVar4 = F_00c00790(piVar2[4],((char *)REFP(0x1347f98)),
                             *(int *)(*piVar2 + 0x3c));
      }
      F_00c11b70(piVar2[3],uVar4,0);
    }
    uVar3 = F_00c132e0(in_eax,uVar1);
    *((ushort *)GEN_TOP(((int)piVar2 + ((uint)*(byte *)((int)piVar2 + 0x32) + in_edx) * 2 + 0xac))) = uVar3;
    in_edx = in_edx + 1;
    if (*(int *)(in_eax + 0x10) != 0x2c) break;
    F_00c13000(in_eax);
  }
  if (*(int *)(in_eax + 0x10) == 0x3d) {
    F_00c13000(in_eax);
    uVar4 = F_00c14400(in_eax,((undefined4 *)(gen_frame + 0x8)));
  }
  else {
    uVar4 = 0;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  }
  F_00c13740(in_eax,((undefined4 *)(gen_frame + 0x8)),in_edx,uVar4);
  F_00c133e0(in_eax,in_edx);
  return;
}

/* ref: FUN_00c15e90 */
GEN_LIB GEN_NOFRAME uint F_00c15e90(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  F_00c136d0(in_eax,param_2);
  iVar1 = *(int *)(in_eax + 0x10);
  while (iVar1 == 0x2e) {
    uVar2 = *(undefined4 *)(in_eax + 0x30);
    F_00c27ed0(uVar2,param_2);
    F_00c13000(in_eax);
    if (*(int *)(in_eax + 0x10) != 0x11d) {
      uVar4 = F_00c11ae0(in_eax,0x11d);
      uVar4 = F_00c00790(*(undefined4 *)(in_eax + 0x34),((char *)REFP(0x1347f64)),uVar4);
      F_00c11c20(in_eax,uVar4);
    }
    uVar3 = *(undefined4 *)(in_eax + 0x18);
    F_00c13000(in_eax);
    uVar4 = F_00c273d0(*(undefined4 *)(in_eax + 0x30),uVar3);
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
    ((undefined4 *)(gen_frame + 0x8))[0] = 4;
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    F_00c28490(uVar2,param_2,((undefined4 *)(gen_frame + 0x8)));
    iVar1 = *(int *)(in_eax + 0x10);
  }
  if (*(int *)(in_eax + 0x10) != 0x3a) {
    return 0;
  }
  uVar2 = *(undefined4 *)(in_eax + 0x30);
  F_00c27ed0(uVar2,param_2);
  F_00c13000(in_eax);
  F_00c13280(in_eax,((undefined4 *)(gen_frame + 0x8)));
  F_00c28490(uVar2,param_2,((undefined4 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_00c15f80 */
GEN_LIB GEN_NOFRAME uint F_00c15f80(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc15f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00c13000(in_esi);
  uVar1 = F_00c15e90(in_esi,((undefined1 *)(gen_frame + 0x18)));
  F_00c14290(in_esi,((undefined1 *)(gen_frame + 0x0)),uVar1,in_edi);
  F_00c28040(*(undefined4 *)(in_esi + 0x30),((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00c27740(*(undefined4 *)(in_esi + 0x30),in_edi);
  return uVar1;
}

/* ref: FUN_00c15fd0 */
GEN_LIB GEN_NOFRAME uint F_00c15fd0(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc15fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(in_eax + 0x30);
  F_00c145f0(in_eax,((int *)(gen_frame + 0x8)));
  if (((int *)(gen_frame + 0x8))[0] == 0xd) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(*piVar2 + 0xc) + (*(int *)(gen_frame + 0x10)) * 4)));
    *puVar1 = *puVar1 & 0xff807fff | 0x4000;
    return (uint)puVar1;
  }
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  uVar3 = F_00c14f00(in_eax,((undefined4 *)(gen_frame + 0x0)),1);
  return uVar3;
}

/* ref: FUN_00c16030 */
GEN_LIB GEN_NOFRAME uint F_00c16030(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc16030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(in_eax + 0x30);
  F_00c13000(in_eax);
  switch((unsigned int)(uintptr_t)(*(int *)(in_eax + 0x10))) {
  case 0x104: ;
  case 0x105: ;
  case 0x106: ;
  case 0x114: ;
  case 0x11f: ;
    break;
  default: ;
    if (*(int *)(in_eax + 0x10) != 0x3b) {
      uVar2 = F_00c14400(in_eax,((byte *)(gen_frame + 0x8)));
      if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) != 0xd) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) != 0xe)) {
        if (uVar2 == 1) {
          uVar2 = F_00c27ed0(piVar1,((byte *)(gen_frame + 0x8)));
          uVar2 = F_00c279d0(piVar1,uVar2,1);
          return uVar2;
        }
        F_00c27e50(piVar1,((byte *)(gen_frame + 0x8)));
        uVar2 = F_00c279d0(piVar1,(uint)*(byte *)((int)piVar1 + 0x32),uVar2);
        return uVar2;
      }
      F_00c27480(piVar1,((byte *)(gen_frame + 0x8)),0xffffffff);
      if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) == 0xd) && (uVar2 == 1)) {
        *((uint *)GEN_TOP((*(int *)(*piVar1 + 0xc) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) * 4))) =
             *((uint *)GEN_TOP((*(int *)(*piVar1 + 0xc) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) * 4))) & 0xffffffdd | 0x1d;
      }
      uVar2 = F_00c279d0(piVar1,(uint)*(byte *)((int)piVar1 + 0x32),0xffffffff);
      return uVar2;
    }
  }
  uVar2 = F_00c279d0(piVar1,0,0);
  return uVar2;
}

/* ref: FUN_00c16150 */
GEN_LIB GEN_NOFRAME uint F_00c16150(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc16150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  undefined4 in_edi;
  
  in_edi = *(undefined4 *)(in_eax + 4);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_eax + 0x10))) {
  case 0x102: ;
    F_00c13000(in_eax);
    F_00c150a0(in_eax);
    return 1;
  case 0x103: ;
    F_00c13000(in_eax);
    F_00c14e20(in_eax);
    F_00c13190(in_edi,in_eax,0x106,0x103);
    return 0;
  default: ;
    F_00c15fd0(in_eax);
    return 0;
  case 0x108: ;
    F_00c15a10(in_eax,in_edi);
    return 0;
  case 0x109: ;
    F_00c15f80(in_eax,in_edi);
    return 0;
  case 0x10a: ;
    F_00c15ba0(in_eax,in_edi);
    return 0;
  case 0x10c: ;
    break;
  case 0x110: ;
    F_00c15230(in_eax,in_edi);
    return 0;
  case 0x111: ;
    F_00c16030(in_eax);
    return 1;
  case 0x115: ;
    F_00c15100(in_eax,in_edi);
    return 0;
  }
  F_00c13000(in_eax);
  if (*(int *)(in_eax + 0x10) == 0x109) {
    F_00c13000(in_eax);
    F_00c15c60(in_eax);
    return 0;
  }
  F_00c15d70(in_eax);
  return 0;
}

/* ref: FUN_00c16290 */
GEN_LIB GEN_NOFRAME unsigned int F_00c16290(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  short * psVar1;
  uint uVar2;
  
  psVar1 = ((short *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)));
  *psVar1 = *psVar1 + 1;
  if (200 < *((ushort *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)))) {
    F_00c11b70(param_1,((char *)REFP(0x1348024)),0);
  }
  do {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0x10))) {
    case 0x104: ;
    case 0x105: ;
    case 0x106: ;
    case 0x114: ;
    case 0x11f: ;
      goto switchD_00c162d4_caseD_104;
    }
    uVar2 = F_00c16150(param_1);
    if (*(int *)(param_1 + 0x10) == 0x3b) {
      F_00c13000(param_1);
    }
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x24))) = (uint)*((byte *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x32)));
  } while (uVar2 == 0);
switchD_00c162d4_caseD_104: ;
  psVar1 = ((short *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x34)));
  *psVar1 = *psVar1 - 1;
  return 0;
}

/* ref: FUN_00c16340 */
GEN_LIB GEN_NOFRAME uint F_00c16340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc16340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x290];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x28c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x44)) = param_3;
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00c05a80(param_1,param_4,(int)pcVar2 - (int)(param_4 + 1));
  F_00c11d20(param_1,((undefined1 *)(gen_frame + 0x8)),param_2,uVar3);
  F_00c13960(((uint *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0x8)));
  *(undefined1 *)(((uint *)(gen_frame + 0x50))[0] + 0x4a) = 2;
  F_00c13000(((undefined1 *)(gen_frame + 0x8)));
  F_00c16290(((undefined1 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x18)) != 0x11f) {
    uVar3 = F_00c11ae0(((undefined1 *)(gen_frame + 0x8)),0x11f);
    uVar3 = F_00c00790((*(undefined4 *)(gen_frame + 0x3c)),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(((undefined1 *)(gen_frame + 0x8)),uVar3);
  }
  F_00c13a20(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28c)) ^ (uint)((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return ((uint *)(gen_frame + 0x50))[0];
}

/* ref: FUN_00c16430 */
GEN_LIB GEN_NOFRAME uint F_00c16430(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9a910(param_1,0xffffd8f0);
  return 1;
}

/* ref: FUN_00c16450 */
GEN_LIB GEN_NOFRAME uint F_00c16450(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9b190(param_1,1);
  if (uVar1 == 0) {
    F_00b9adc0(param_1);
  }
  return 1;
}

/* ref: FUN_00c16480 */
GEN_LIB GEN_NOFRAME uint F_00c16480(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9a940(param_1,2);
  if ((uVar1 != 0) && (uVar1 != 5)) {
    F_00b9c590(param_1,2,((char *)REFP(0x13481ec)));
  }
  F_00b9a760(param_1,2);
  uVar1 = F_00b9b3d0(param_1,1);
  F_00b9afd0(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c164d0 */
GEN_LIB GEN_NOFRAME uint F_00c164d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc164d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9b1f0(param_1,1);
  return 1;
}

/* ref: FUN_00c164f0 */
GEN_LIB GEN_NOFRAME uint F_00c164f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc164f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7a0(param_1,2,5);
  F_00b9a760(param_1,2);
  uVar1 = F_00b9b480(param_1,1);
  if (uVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348204)));
  }
  return 1;
}

/* ref: FUN_00c165a0 */
GEN_LIB GEN_NOFRAME uint F_00c165a0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc165a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_esi = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (in_esi == in_eax) {
    F_00b9a910(in_esi,0xfffffffe);
    F_00b9a7b0(in_esi,0xfffffffd);
    uVar1 = F_00b9b290(in_esi,0xfffffffe,param_3);
    return uVar1;
  }
  F_00b9a680(in_eax,in_esi,1);
  uVar1 = F_00b9b290(in_esi,0xfffffffe,param_3);
  return uVar1;
}

