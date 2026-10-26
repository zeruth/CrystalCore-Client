#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0042a800 */
byte F_0042a800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42a800u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte * pbVar6;
  
  pbVar6 = param_1;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 == 0xffffffff) {
    pbVar1 = param_1;
    do {
      bVar4 = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (bVar4 != 0);
    param_2 = (int)pbVar1 - (int)(param_1 + 1);
  }
  param_1 = (byte *)0x0;
  if (param_2 != 0) {
    do {
      bVar4 = *pbVar6;
      if ((char)bVar4 < '\0') {
        if ((bVar4 & 0xe0) == 0xc0) {
          uVar5 = 2;
          if (param_2 < (int)param_1 + 2U) {
            return 0;
          }
          if ((bVar4 & 0x1e) == 0) {
            return 0;
          }
        }
        else if ((bVar4 & 0xf0) == 0xe0) {
          uVar5 = 3;
          if (param_2 < (int)param_1 + 3U) {
            return 0;
          }
          if ((pbVar6[1] & 0x20) == 0 && (bVar4 & 0xf) == 0) {
            return 0;
          }
          bVar4 = pbVar6[1] >> 2 & 0xf | bVar4 << 4;
          if ((0xd7 < bVar4) && (bVar4 < 0xe0)) {
            return 0;
          }
        }
        else {
          if ((bVar4 & 0xf8) != 0xf0) {
            return 0;
          }
          uVar5 = 4;
          if (param_2 < (int)param_1 + 4U) {
            return 0;
          }
          if ((pbVar6[1] & 0x30) == 0 && (bVar4 & 7) == 0) {
            return 0;
          }
          if (0x10 < (byte)(pbVar6[1] >> 4 & 3 | (bVar4 & 7) << 2)) {
            return 0;
          }
        }
        iVar3 = 1;
        if (1 < uVar5) {
          do {
            if ((pbVar6[iVar3] & 0xc0) != 0x80) {
              return 0;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        pbVar6 = pbVar6 + uVar5;
        param_1 = (byte *)((int)param_1 + uVar5);
      }
      else if (bVar4 == 2) {
        if (pbVar6[1] != 0x2e) {
          return 0;
        }
        uVar5 = (int)param_1 + 2;
        pbVar6 = pbVar6 + 2;
        if (param_2 <= uVar5) {
          return 0;
        }
        bVar4 = *pbVar6;
        uVar2 = 0;
        if (bVar4 != 0) {
          do {
            if (*pbVar6 == 0) {
              return 0;
            }
            if (param_2 <= uVar5) {
              return 0;
            }
            uVar2 = uVar2 + 1;
            pbVar6 = pbVar6 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar2 < bVar4);
        }
        if (*pbVar6 != 3) {
          return 0;
        }
        pbVar6 = pbVar6 + 1;
        param_1 = (byte *)(uVar5 + 1);
      }
      else {
        if (bVar4 == 0) {
          return 1;
        }
        pbVar6 = pbVar6 + 1;
        param_1 = (byte *)((int)param_1 + 1);
      }
    } while (param_1 < param_2);
  }
  return 1;
}

/* ref: FUN_0042a970 */
uint F_0042a970(unsigned int gen_a0)
{
  GEN_ENTER(0x42a970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) - 1;
}

/* ref: FUN_0042a980 */
byte F_0042a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42a980u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + *in_ecx);
}

/* ref: FUN_0042a990 */
uint F_0042a990(unsigned int gen_a0)
{
  GEN_ENTER(0x42a990u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_0042a9a0 */
uint F_0042a9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x42a9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int iVar8;
  uint local_c;
  uint local_8;
  
  bVar4 = true;
  if (((char)param_1 == '\0') || ((char)param_2 != '\0')) {
    local_c = *(uint *)((int)this + 8);
  }
  else {
    local_c = 1;
  }
  local_8 = 0;
  if (local_c != 0) {
    do {
      cVar2 = *(char *)(*(int *)this + local_8);
      pcVar7 = (char *)(*(int *)this + local_8);
      if (((char)param_1 == '\0') || (bVar4)) {
        if ((byte)(cVar2 + 0x9fU) < 0x1a) {
          if ((local_8 == 0) || (param_4 == (undefined4 *)0x0)) {
            *pcVar7 = cVar2 + -0x20;
          }
          else {
            iVar8 = 0;
            iVar5 = param_4[1];
            puVar1 = param_4;
            while (iVar5 != 0) {
              iVar5 = F_00c4b813((char *)*puVar1,(char *)(*(int *)this + local_8),puVar1[1]);
              if (iVar5 == 0) goto LAB_0042aaf0;
              iVar8 = iVar8 + 1;
              puVar1 = param_4 + iVar8 * 2;
              iVar5 = puVar1[1];
            }
            *(char *)(local_8 + *(int *)this) = cVar2 + -0x20;
          }
        }
        else if (cVar2 == -0x3d) {
          bVar3 = pcVar7[1];
          if (((0x9f < bVar3) && (bVar3 < 0xb7)) || ((byte)(bVar3 + 0x48) < 7)) {
            if (((char)param_3 == '\0') || (!bVar4)) {
              pcVar7[1] = bVar3 - 0x20;
            }
            else {
              if ((byte)(bVar3 + 0x60) < 6) {
                *pcVar7 = 'A';
              }
              else if ((byte)(bVar3 + 0x58) < 4) {
                *pcVar7 = 'E';
              }
              else if ((byte)(bVar3 + 0x54) < 4) {
                *pcVar7 = 'I';
              }
              else if ((byte)(bVar3 + 0x4e) < 5) {
                *pcVar7 = 'O';
              }
              else {
                if (3 < (byte)(bVar3 + 0x47)) goto LAB_0042aaf0;
                *pcVar7 = 'U';
              }
              uVar6 = local_8 + 1;
              if (uVar6 < *(int *)((int)this + 8) - 1U) {
                do {
                  *(undefined1 *)(*(int *)this + uVar6) = ((undefined1 *)(*(int *)this + uVar6))[1];
                  uVar6 = uVar6 + 1;
                } while (uVar6 < *(int *)((int)this + 8) - 1U);
              }
              *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
            }
          }
        }
        else if ((cVar2 == -0x3b) && (pcVar7[1] == -0x6d)) {
          pcVar7[1] = -0x6e;
        }
LAB_0042aaf0: ;
        bVar4 = false;
      }
      if (cVar2 == ' ') {
        bVar4 = true;
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_c);
  }
  return (uint)this;
}

/* ref: FUN_0042ab30 */
uint F_0042ab30(unsigned int gen_a0)
{
  GEN_ENTER(0x42ab30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *(char * PTR32 *)this;
  cVar1 = *pcVar2;
  pcVar3 = pcVar2;
  do {
    if (cVar1 == '\0') {
      *pcVar3 = '\0';
      *(char * PTR32 *)((int)this + 8) = pcVar3 + (1 - *(int *)this);
      return (uint)this;
    }
    if (cVar1 == -0x11) {
      if (pcVar2[1] == -0x44) {
        if (0x3f < (byte)(pcVar2[2] + 0x80U)) goto LAB_0042ab83;
        *pcVar3 = pcVar2[2] + -0x60;
        pcVar2 = pcVar2 + 3;
      }
      else {
        if ((pcVar2[1] != -0x43) || (0x1e < (byte)(pcVar2[2] + 0x80U))) goto LAB_0042ab83;
        *pcVar3 = pcVar2[2] + -0x20;
        pcVar2 = pcVar2 + 3;
      }
    }
    else {
LAB_0042ab83: ;
      *pcVar3 = cVar1;
      pcVar2 = pcVar2 + 1;
    }
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar2;
  } while( true );
}

/* ref: FUN_0042abe0 */
uint F_0042abe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42abe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *(char * PTR32 *)this;
  cVar1 = *pcVar2;
  pcVar3 = pcVar2;
  while( true ) {
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    if (cVar1 == (char)param_1) break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  }
  return (int)pcVar3 - (int)pcVar2;
}

/* ref: FUN_0042ac10 */
unsigned int F_0042ac10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42ac10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  char * pcVar2;
  
  pcVar2 = *(char * PTR32 *)this;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    if (*pcVar2 == (char)param_1) {
      *pcVar2 = (char)param_2;
    }
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return 0;
}

/* ref: FUN_0042ac50 */
byte F_0042ac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (param_1[2] + -1 != *(int *)((int)this + 8) + -1) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 8) + -2;
  if (-1 < iVar1) {
    do {
      if (*(char *)(*(int *)this + iVar1) != *(char *)(*param_1 + iVar1)) {
        return 0;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 1;
}

/* ref: FUN_0042aca0 */
uint F_0042aca0(unsigned int gen_a0)
{
  GEN_ENTER(0x42aca0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  
  *(undefined1 *)(in_ecx + 4) = 1;
  in_ecx[2] = 1;
  puVar1 = (undefined1 *)*in_ecx;
  in_ecx[3] = 0;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_0042acc0 */
uint F_0042acc0(unsigned int gen_a0)
{
  GEN_ENTER(0x42acc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (((byte)((byte)param_1 + 0x80) < 0x40) || ((byte)param_1 < 0x80)) {
    return 1;
  }
  if ((byte)param_1 < 0xe0) {
    return 2;
  }
  if ((byte)param_1 < 0xf0) {
    return 3;
  }
  if ((byte)param_1 < 0xf8) {
    return 4;
  }
  if ((byte)param_1 < 0xfc) {
    return 5;
  }
  return (-(uint)((byte)param_1 < 0xfe) & 5) + 1;
}

/* ref: FUN_0042ad20 */
uint F_0042ad20(unsigned int gen_a0)
{
  GEN_ENTER(0x42ad20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (((byte)((byte)param_1 + 0x80) < 0x40) || ((byte)param_1 < 0x80)) {
    return 1;
  }
  if ((byte)param_1 < 0xe0) {
    return 2;
  }
  if ((byte)param_1 < 0xf0) {
    return 3;
  }
  if ((byte)param_1 < 0xf8) {
    return 4;
  }
  if ((byte)param_1 < 0xfc) {
    return 5;
  }
  return (-(uint)((byte)param_1 < 0xfe) & 5) + 1;
}

/* ref: FUN_0042ad80 */
uint F_0042ad80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42ad80u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  
  uVar2 = (ushort)param_1;
  if (param_2 == (byte *)0x0) {
    if (0x7f < uVar2) {
      return 3 - (uVar2 < 0x800);
    }
  }
  else {
    bVar1 = (byte)param_1;
    if (0x7f < uVar2) {
      if (uVar2 < 0x800) {
        *param_2 = (byte)(param_1 >> 6) | 0xc0;
        param_2[1] = bVar1 & 0x3f | 0x80;
        return 2;
      }
      *param_2 = (byte)(param_1 >> 8) >> 4 | 0xe0;
      param_2[1] = (byte)(param_1 >> 6) & 0x3f | 0x80;
      param_2[2] = bVar1 & 0x3f | 0x80;
      return 3;
    }
    *param_2 = bVar1;
  }
  return 1;
}

/* ref: FUN_0042ae10 */
uint F_0042ae10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42ae10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = 0;
  if (param_2 == (byte *)0x0) {
    if (param_1 < 0x80) {
      return 1;
    }
    if (param_1 < 0x800) {
      return 2;
    }
    if (param_1 < 0x10000) {
      return 3;
    }
    if (param_1 < 0x200000) {
      return 4;
    }
    if (param_1 < 0x4000000) {
      return 5;
    }
    if (param_1 < 0x80000000) {
      return 6;
    }
  }
  else {
    bVar3 = (byte)param_1;
    if (param_1 < 0x80) {
      *param_2 = bVar3;
      return 1;
    }
    if (param_1 < 0x800) {
      *param_2 = (byte)(param_1 >> 6) | 0xc0;
      param_2[1] = bVar3 & 0x3f | 0x80;
      return 2;
    }
    if (param_1 < 0x10000) {
      *param_2 = (byte)(param_1 >> 0xc) | 0xe0;
      param_2[1] = (byte)(param_1 >> 6) & 0x3f | 0x80;
      param_2[2] = bVar3 & 0x3f | 0x80;
      return 3;
    }
    if (param_1 < 0x200000) {
      *param_2 = (byte)(param_1 >> 0x12) | 0xf0;
      param_2[1] = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
      param_2[2] = (byte)(param_1 >> 6) & 0x3f | 0x80;
      param_2[3] = bVar3 & 0x3f | 0x80;
      return 4;
    }
    bVar1 = (byte)(param_1 >> 0x18);
    if (param_1 < 0x4000000) {
      *param_2 = bVar1 | 0xf8;
      param_2[1] = (byte)(param_1 >> 0x12) & 0x3f | 0x80;
      param_2[2] = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
      param_2[3] = (byte)(param_1 >> 6) & 0x3f | 0x80;
      param_2[4] = bVar3 & 0x3f | 0x80;
      return 5;
    }
    if (param_1 < 0x80000000) {
      *param_2 = bVar1 >> 6 | 0xfc;
      param_2[1] = bVar1 & 0x3f | 0x80;
      param_2[2] = (byte)(param_1 >> 0x12) & 0x3f | 0x80;
      param_2[3] = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
      param_2[4] = (byte)(param_1 >> 6) & 0x3f | 0x80;
      param_2[5] = bVar3 & 0x3f | 0x80;
      uVar2 = 6;
    }
  }
  return uVar2;
}

/* ref: FUN_0042afa0 */
uint F_0042afa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42afa0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  uint uVar4;
  undefined1 * puVar5;
  
  uVar4 = 0;
  if (param_2 == (undefined1 *)0x0) {
    uVar1 = *param_1;
    puVar3 = param_1;
    if (uVar1 != 0) {
      do {
        iVar2 = 0;
        if (uVar1 < 0x80) {
          iVar2 = 1;
        }
        else if (uVar1 < 0x800) {
          iVar2 = 2;
        }
        else if (uVar1 < 0x10000) {
          iVar2 = 3;
        }
        else if (uVar1 < 0x200000) {
          iVar2 = 4;
        }
        else if (uVar1 < 0x4000000) {
          iVar2 = 5;
        }
        else if (uVar1 < 0x80000000) {
          iVar2 = 6;
        }
        uVar1 = puVar3[1];
        puVar3 = puVar3 + 1;
        uVar4 = uVar4 + iVar2;
      } while (uVar1 != 0);
      return uVar4;
    }
  }
  else {
    uVar1 = *param_1;
    puVar3 = param_1;
    puVar5 = param_2;
    while (uVar1 != 0) {
      uVar1 = F_0042ae10(uVar1,puVar5);
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + uVar1;
      uVar4 = uVar4 + uVar1;
      uVar1 = *puVar3;
    }
    *puVar5 = 0;
  }
  return uVar4;
}

/* ref: FUN_0042b060 */
uint F_0042b060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42b060u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined1 gen_out[0x4];
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  bVar1 = *param_1;
  uVar6 = (uint)bVar1;
  uVar5 = 1;
  local_c = 1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0xe0) == 0xc0) {
      uVar5 = 2;
      uVar6 = (*param_1 & 0x1f) << 6 | param_1[1] & 0x3f;
    }
    else {
      if ((bVar1 & 0xf0) == 0xe0) {
        bVar2 = param_1[2];
        bVar3 = param_1[1];
        uVar5 = 3;
        uVar6 = *param_1 & 0xf;
      }
      else {
        if ((bVar1 & 0xf8) == 0xf0) {
          bVar2 = param_1[3];
          bVar3 = param_1[2];
          bVar1 = param_1[1];
          uVar5 = 4;
          uVar6 = *param_1 & 7;
        }
        else {
          if ((bVar1 & 0xfc) != 0xf8) {
            uVar5 = local_c;
            uVar6 = 0;
            if ((bVar1 & 0xfe) == 0xfc) {
              local_c = 6;
              uVar6 = param_1[5] & 0x3f |
                      (((((*param_1 & 1) << 6 | param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f) << 6 |
                       param_1[3] & 0x3f) << 6 | param_1[4] & 0x3f) << 6;
              uVar5 = local_c;
            }
            goto LAB_0042b19e;
          }
          bVar2 = param_1[4];
          bVar3 = param_1[3];
          bVar1 = param_1[2];
          uVar5 = 5;
          uVar6 = (*param_1 & 3) << 6 | param_1[1] & 0x3f;
        }
        uVar6 = uVar6 << 6 | bVar1 & 0x3f;
      }
      uVar6 = bVar2 & 0x3f | (uVar6 << 6 | bVar3 & 0x3f) << 6;
    }
  }
LAB_0042b19e: ;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar6;
  }
  F_00c47745(uVar4 ^ (uint)(uint)(gen_out + 0x0));
  return uVar5;
}

/* ref: FUN_0042b1c0 */
uint F_0042b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42b1c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  
  uVar2 = (*(uint *)&gen_args[1]);
  uVar4 = 0;
  if ((*(uint *)&gen_args[1]) == 0) {
    cVar1 = *(*(char * PTR32 *)&gen_args[0]);
    pcVar5 = (*(char * PTR32 *)&gen_args[0]);
    if (cVar1 != '\0') {
      do {
        if (cVar1 == '\x02') {
          pcVar5 = pcVar5 + (byte)pcVar5[2] + 3;
        }
        else {
          uVar2 = F_0042b060(pcVar5,&(*(uint *)&gen_args[1]));
          pcVar5 = pcVar5 + uVar2;
          if ((((*(uint *)&gen_args[1]) == 0) || ((*(uint *)&gen_args[1]) < 0xd7ff)) || ((0xdfff < (*(uint *)&gen_args[1]) && ((*(uint *)&gen_args[1]) < 0x10000))))
          {
            uVar4 = uVar4 + 1;
          }
          else if ((*(uint *)&gen_args[1]) - 0x10000 < 0x100000) {
            uVar4 = uVar4 + 2;
          }
        }
        cVar1 = *pcVar5;
      } while (cVar1 != '\0');
      return uVar4;
    }
  }
  else {
    cVar1 = *(*(char * PTR32 *)&gen_args[0]);
    pcVar5 = (*(char * PTR32 *)&gen_args[0]);
    while (cVar1 != '\0') {
      if (cVar1 == '\x02') {
        pcVar5 = pcVar5 + (byte)pcVar5[2] + 3;
      }
      else {
        uVar3 = F_0042b060(pcVar5,&(*(uint *)&gen_args[1]));
        pcVar5 = pcVar5 + uVar3;
        if ((*(uint *)&gen_args[1]) == 0) {
          *(undefined2 *)(uVar2 + uVar4 * 2) = 0x2a;
        }
        else {
          if ((0xd7fe < (*(uint *)&gen_args[1])) && (((*(uint *)&gen_args[1]) < 0xe000 || (0xffff < (*(uint *)&gen_args[1]))))) {
            if ((*(uint *)&gen_args[1]) - 0x10000 < 0x100000) {
              *(ushort *)(uVar2 + uVar4 * 2) =
                   (ushort)((((*(uint *)&gen_args[1]) >> 0x10) - 1 | 0xff60) << 6) | (ushort)((*(uint *)&gen_args[1]) >> 10) & 0x3f;
              *(ushort *)(uVar2 + 4 + uVar4 * 2) = (ushort)(*(uint *)&gen_args[1]) & 0x3ff | 0xdc00;
              uVar4 = uVar4 + 4;
            }
            goto LAB_0042b2cd;
          }
          *(ushort *)(uVar2 + uVar4 * 2) = (ushort)(*(uint *)&gen_args[1]);
        }
        uVar4 = uVar4 + 1;
      }
LAB_0042b2cd: ;
      cVar1 = *pcVar5;
    }
    *(undefined2 *)(uVar2 + uVar4 * 2) = 0;
  }
  return uVar4;
}

/* ref: FUN_0042b300 */
uint F_0042b300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42b300u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte * pbVar10;
  ushort * puVar11;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return 0;
  }
  uVar9 = 0;
  pbVar10 = param_2;
  puVar11 = param_1;
  do {
    uVar4 = (uint)uVar1;
    if ((uVar4 & 0xfc00) == 0xd800) {
      uVar5 = (uVar4 & 0x3c0) + 0x40;
      uVar4 = uVar4 & 0x3f;
      puVar11 = puVar11 + 1;
      if ((*puVar11 & 0xfc00) != 0xdc00) {
        return uVar9;
      }
      uVar7 = *puVar11 & 0x3ff;
      uVar6 = (uVar5 | uVar4) << 10 | uVar7;
      iVar8 = 0;
      if (pbVar10 == (byte *)0x0) {
        if (uVar6 < 0x80) {
          iVar8 = 1;
        }
        else if (uVar6 < 0x800) {
          iVar8 = 2;
        }
        else if (uVar6 < 0x10000) {
          iVar8 = 3;
        }
        else if (uVar6 < 0x200000) {
          iVar8 = 4;
        }
        else if (uVar6 < 0x4000000) {
          iVar8 = 5;
        }
        else if (uVar6 < 0x80000000) {
LAB_0042b513: ;
          iVar8 = 6;
        }
      }
      else {
        bVar3 = (byte)uVar7;
        if (uVar6 < 0x80) {
          *pbVar10 = bVar3;
          iVar8 = 1;
        }
        else if (uVar6 < 0x800) {
          *pbVar10 = (byte)(uVar6 >> 6) | 0xc0;
          pbVar10[1] = bVar3 & 0x3f | 0x80;
          iVar8 = 2;
        }
        else if (uVar6 < 0x10000) {
          *pbVar10 = (byte)((uVar5 | uVar4) >> 2) | 0xe0;
          pbVar10[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
          pbVar10[2] = bVar3 & 0x3f | 0x80;
          iVar8 = 3;
        }
        else {
          bVar2 = (byte)(uVar5 >> 8);
          if (uVar6 < 0x200000) {
            *pbVar10 = bVar2 | 0xf0;
            pbVar10[1] = (byte)((uVar5 | uVar4) >> 2) & 0x3f | 0x80;
            pbVar10[2] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
            pbVar10[3] = bVar3 & 0x3f | 0x80;
            iVar8 = 4;
          }
          else if (uVar6 < 0x4000000) {
            *pbVar10 = 0xf8;
            pbVar10[1] = bVar2 | 0x80;
            pbVar10[2] = (byte)((uVar5 | uVar4) >> 2) & 0x3f | 0x80;
            pbVar10[3] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
            pbVar10[4] = bVar3 & 0x3f | 0x80;
            iVar8 = 5;
          }
          else if (uVar6 < 0x80000000) {
            *pbVar10 = 0xfc;
            pbVar10[1] = 0x80;
            pbVar10[2] = bVar2 | 0x80;
            pbVar10[3] = (byte)((uVar5 | uVar4) >> 2) & 0x3f | 0x80;
            pbVar10[4] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
            pbVar10[5] = bVar3 & 0x3f | 0x80;
            goto LAB_0042b513;
          }
        }
      }
      uVar9 = uVar9 + iVar8;
      if (pbVar10 != (byte *)0x0) {
        pbVar10 = pbVar10 + iVar8;
      }
    }
    else {
      uVar4 = F_0042ae10(uVar4,pbVar10);
      uVar9 = uVar9 + uVar4;
      if (pbVar10 != (byte *)0x0) {
        pbVar10 = pbVar10 + uVar4;
      }
    }
    uVar1 = puVar11[1];
    puVar11 = puVar11 + 1;
    if (uVar1 == 0) {
      return uVar9;
    }
  } while( true );
}

/* ref: FUN_0042b560 */
uint F_0042b560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42b560u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  char * pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    pcVar2 = param_1;
    do {
      uVar1 = (int)*pcVar2 - (int)pcVar2[param_2 - (int)param_1];
      if (uVar1 != 0) {
        return uVar1;
      }
      if (*pcVar2 == '\0') {
        return 0;
      }
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_0042b5a0 */
byte F_0042b5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x42b5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  
  pbVar4 = *(byte * PTR32 *)this;
  bVar1 = *pbVar4;
  do {
    if (bVar1 == 0) {
      return 1;
    }
    if ((byte)(bVar1 + 0x80) < 0x40) {
      uVar2 = 1;
    }
    else if (bVar1 < 0x80) {
      uVar2 = 1;
    }
    else if (bVar1 < 0xe0) {
      uVar2 = 2;
    }
    else if (bVar1 < 0xf0) {
      uVar2 = 3;
    }
    else if (bVar1 < 0xf8) {
      uVar2 = 4;
    }
    else if (bVar1 < 0xfc) {
      uVar2 = 5;
    }
    else {
      uVar2 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
    }
    uVar3 = 1;
    pbVar4 = pbVar4 + 1;
    if (1 < uVar2) {
      do {
        if ((*pbVar4 & 0x80) == 0) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar3 < uVar2);
    }
    bVar1 = *pbVar4;
  } while( true );
}

/* ref: FUN_0042b630 */
uint F_0042b630(unsigned int gen_a0)
{
  GEN_ENTER(0x42b630u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[2] = 1;
  *(undefined2 *)(in_ecx + 4) = 0x101;
  in_ecx[3] = 0;
  in_ecx[1] = 0x40;
  *in_ecx = (undefined1 *)((int)in_ecx + 0x12);
  *(undefined1 *)((int)in_ecx + 0x12) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0042b660 */
byte F_0042b660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42b660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (param_1[2] + -1 != *(int *)((int)this + 8) + -1) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 8) + -2;
  if (-1 < iVar1) {
    do {
      if (*(char *)(*(int *)this + iVar1) != *(char *)(*param_1 + iVar1)) {
        return 0;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 1;
}

/* ref: FUN_0042b6a0 */
byte F_0042b6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42b6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  pbVar2 = *(byte * PTR32 *)this;
  pbVar3 = param_1;
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

/* ref: FUN_0042b6f0 */
byte F_0042b6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42b6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (param_1[2] + -1 != *(int *)((int)this + 8) + -1) {
    return 1;
  }
  iVar1 = *(int *)((int)this + 8) + -2;
  if (-1 < iVar1) {
    do {
      if (*(char *)(*(int *)this + iVar1) != *(char *)(*param_1 + iVar1)) {
        return 1;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_0042b740 */
byte F_0042b740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42b740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  pbVar2 = *(byte * PTR32 *)this;
  pbVar3 = param_1;
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
  return 1 - bVar4 != (uint)(bVar4 != 0);
}

/* ref: FUN_0042b790 */
uint F_0042b790(unsigned int gen_a0)
{
  GEN_ENTER(0x42b790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  
  if (*(char *)((int)this + 0x10) == '\0') {
    pbVar3 = *(byte * PTR32 *)this;
    iVar4 = 0;
    if (pbVar3 == (byte *)0x0) {
      return 0;
    }
    bVar1 = *pbVar3;
    while (bVar1 != 0) {
      if ((byte)(bVar1 + 0x80) < 0x40) {
        iVar2 = 1;
      }
      else if (bVar1 < 0x80) {
        iVar2 = 1;
      }
      else if (bVar1 < 0xe0) {
        iVar2 = 2;
      }
      else if (bVar1 < 0xf0) {
        iVar2 = 3;
      }
      else if (bVar1 < 0xf8) {
        iVar2 = 4;
      }
      else if (bVar1 < 0xfc) {
        iVar2 = 5;
      }
      else {
        iVar2 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      pbVar3 = pbVar3 + iVar2;
      iVar4 = iVar4 + 1;
      bVar1 = *pbVar3;
    }
    *(undefined1 *)((int)this + 0x10) = 1;
    *(int *)((int)this + 0xc) = iVar4;
  }
  return *(uint *)((int)this + 0xc);
}

/* ref: FUN_0042b820 */
uint F_0042b820(unsigned int gen_a0)
{
  GEN_ENTER(0x42b820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 8) != 0) {
    do {
      pbVar1 = (byte *)(*(int *)this + uVar4);
      bVar2 = *pbVar1;
      if ((byte)(bVar2 + 0xbf) < 0x1a) {
        *pbVar1 = bVar2 + 0x20;
LAB_0042b846: ;
        if ((byte)(bVar2 + 0x80) < 0x40) {
          iVar3 = 1;
        }
        else if (bVar2 < 0x80) {
          iVar3 = 1;
        }
        else {
          if (bVar2 < 0xe0) goto LAB_0042b8a6;
          if (bVar2 < 0xf0) {
            iVar3 = 3;
          }
          else if (bVar2 < 0xf8) {
            iVar3 = 4;
          }
          else if (bVar2 < 0xfc) {
            iVar3 = 5;
          }
          else {
            iVar3 = (-(uint)(bVar2 < 0xfe) & 5) + 1;
          }
        }
      }
      else if (bVar2 == 0xc3) {
        bVar2 = pbVar1[1];
        if (((bVar2 < 0x80) || (0x96 < bVar2)) && (6 < (byte)(bVar2 + 0x68))) {
LAB_0042b8a6: ;
          iVar3 = 2;
        }
        else {
          pbVar1[1] = 0xe3;
          iVar3 = 2;
        }
      }
      else {
        if (bVar2 != 0xc5) goto LAB_0042b846;
        if (pbVar1[1] != 0x92) goto LAB_0042b8a6;
        pbVar1[1] = 0x93;
        iVar3 = 2;
      }
      uVar4 = uVar4 + iVar3;
    } while (uVar4 < *(uint *)((int)this + 8));
  }
  return (uint)this;
}

/* ref: FUN_0042b8f0 */
uint F_0042b8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x42b8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 8) != 0) {
    do {
      bVar2 = *(byte *)(*(int *)this + uVar4);
      iVar3 = *(int *)this + uVar4;
      if (bVar2 == 0xe3) {
        if (*(char *)(iVar3 + 1) == -0x7f) {
          if ((byte)(*(char *)(iVar3 + 2) + 0x7fU) < 0x1f) {
            *(char *)(iVar3 + 1) = *(char *)(iVar3 + 1) + '\x01';
            pcVar1 = (char *)(*(int *)this + 2 + uVar4);
            *pcVar1 = *pcVar1 + ' ';
            iVar3 = 3;
          }
          else {
            if (0x1f < (byte)(*(char *)(iVar3 + 2) + 0x60U)) goto LAB_0042b9a6;
            *(char *)(iVar3 + 1) = *(char *)(iVar3 + 1) + '\x02';
            pcVar1 = (char *)(*(int *)this + 2 + uVar4);
            *pcVar1 = *pcVar1 + -0x20;
            iVar3 = 3;
          }
        }
        else if ((*(char *)(iVar3 + 1) == -0x7e) && ((byte)(*(char *)(iVar3 + 2) + 0x80U) < 0x17)) {
          *(char *)(iVar3 + 1) = *(char *)(iVar3 + 1) + '\x01';
          pcVar1 = (char *)(*(int *)this + 2 + uVar4);
          *pcVar1 = *pcVar1 + ' ';
          iVar3 = 3;
        }
        else {
LAB_0042b9a6: ;
          iVar3 = 3;
        }
      }
      else {
        iVar3 = 1;
        if (0x3f < (byte)(bVar2 + 0x80)) {
          if (bVar2 < 0x80) {
            iVar3 = 1;
          }
          else if (bVar2 < 0xe0) {
            iVar3 = 2;
          }
          else {
            if (bVar2 < 0xf0) goto LAB_0042b9a6;
            if (bVar2 < 0xf8) {
              iVar3 = 4;
            }
            else if (bVar2 < 0xfc) {
              iVar3 = 5;
            }
            else {
              iVar3 = (-(uint)(bVar2 < 0xfe) & 5) + 1;
            }
          }
        }
      }
      uVar4 = uVar4 + iVar3;
    } while (uVar4 < *(uint *)((int)this + 8));
  }
  return (uint)this;
}

/* ref: FUN_0042b9e0 */
uint F_0042b9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42b9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  int iVar8;
  uint uVar9;
  
  uVar3 = F_0042b790(this);
  if (param_1 <= uVar3) {
    iVar4 = param_2;
    if (param_2 == -1) {
      uVar3 = F_0042b790(this);
      iVar4 = uVar3 - param_1;
    }
    pbVar2 = *(byte * PTR32 *)this;
    uVar3 = 0;
    iVar8 = 0;
    for (uVar9 = param_1; uVar9 != 0; uVar9 = uVar9 - 1) {
      bVar1 = *pbVar2;
      if ((byte)(bVar1 + 0x80) < 0x40) {
        iVar5 = 1;
      }
      else if (bVar1 < 0x80) {
        iVar5 = 1;
      }
      else if (bVar1 < 0xe0) {
        iVar5 = 2;
      }
      else if (bVar1 < 0xf0) {
        iVar5 = 3;
      }
      else if (bVar1 < 0xf8) {
        iVar5 = 4;
      }
      else if (bVar1 < 0xfc) {
        iVar5 = 5;
      }
      else {
        iVar5 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      pbVar2 = pbVar2 + iVar5;
      iVar8 = iVar8 + iVar5;
      uVar3 = param_1;
    }
    pbVar7 = pbVar2;
    iVar5 = iVar8;
    if (uVar3 != param_1 + iVar4) {
      iVar4 = (param_1 + iVar4) - uVar3;
      do {
        bVar1 = *pbVar7;
        if ((byte)(bVar1 + 0x80) < 0x40) {
          iVar6 = 1;
        }
        else if (bVar1 < 0x80) {
          iVar6 = 1;
        }
        else if (bVar1 < 0xe0) {
          iVar6 = 2;
        }
        else if (bVar1 < 0xf0) {
          iVar6 = 3;
        }
        else if (bVar1 < 0xf8) {
          iVar6 = 4;
        }
        else if (bVar1 < 0xfc) {
          iVar6 = 5;
        }
        else {
          iVar6 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
        }
        pbVar7 = pbVar7 + iVar6;
        iVar5 = iVar5 + iVar6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    F_00c46e20(pbVar2,pbVar7,*(int *)((int)this + 8) - iVar5);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + (iVar8 - iVar5);
    *(undefined1 *)((int)this + 0x10) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0042bb20 */
uint F_0042bb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42bb20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  
  pbVar3 = *(byte * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  for (uVar4 = (*(uint *)&gen_args[1]); uVar4 != 0; uVar4 = uVar4 - 1) {
    bVar1 = *pbVar3;
    if ((byte)(bVar1 + 0x80) < 0x40) {
      iVar2 = 1;
    }
    else if (bVar1 < 0x80) {
      iVar2 = 1;
    }
    else if (bVar1 < 0xe0) {
      iVar2 = 2;
    }
    else if (bVar1 < 0xf0) {
      iVar2 = 3;
    }
    else if (bVar1 < 0xf8) {
      iVar2 = 4;
    }
    else if (bVar1 < 0xfc) {
      iVar2 = 5;
    }
    else {
      iVar2 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
    }
    pbVar3 = pbVar3 + iVar2;
  }
  F_0042b060(pbVar3,&(*(uint *)&gen_args[1]));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_0042bba0 */
uint F_0042bba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42bba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[2];
  if (*(uint *)((int)this + 8) < (uint)param_1[2]) {
    uVar5 = *(uint *)((int)this + 8);
  }
  pcVar3 = *(char * PTR32 *)this;
  uVar4 = 0;
  if (uVar5 != 0) {
    iVar1 = *param_1 - (int)pcVar3;
    do {
      uVar2 = (int)*pcVar3 - (int)pcVar3[iVar1];
      if (uVar2 != 0) {
        return uVar2;
      }
      if (*pcVar3 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}

/* ref: FUN_0042bbf0 */
uint F_0042bbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42bbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  int local_c;
  byte * local_8;
  
  iVar5 = 0;
  local_8 = *(byte * PTR32 *)this;
  local_10 = 0;
  local_c = 0;
  if (param_2 != 0) {
    local_10 = param_2;
    uVar2 = param_2;
    do {
      bVar1 = *local_8;
      if ((byte)(bVar1 + 0x80) < 0x40) {
        iVar4 = 1;
      }
      else if (bVar1 < 0x80) {
        iVar4 = 1;
      }
      else if (bVar1 < 0xe0) {
        iVar4 = 2;
      }
      else if (bVar1 < 0xf0) {
        iVar4 = 3;
      }
      else if (bVar1 < 0xf8) {
        iVar4 = 4;
      }
      else if (bVar1 < 0xfc) {
        iVar4 = 5;
      }
      else {
        iVar4 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      local_8 = local_8 + iVar4;
      iVar5 = iVar5 + iVar4;
      uVar2 = uVar2 - 1;
      local_c = iVar5;
    } while (uVar2 != 0);
  }
  if (*local_8 != 0) {
    iVar5 = param_1[2];
    do {
      if (*(uint *)((int)this + 8) < (uint)(iVar5 + local_c)) {
        return 0xffffffff;
      }
      uVar2 = 0;
      if ((char)param_3 == '\0') {
        if (iVar5 == 1) {
          return local_10;
        }
        pbVar3 = local_8;
        while (*pbVar3 == pbVar3[*param_1 - (int)local_8]) {
          if (*pbVar3 == 0) {
            return local_10;
          }
          uVar2 = uVar2 + 1;
          pbVar3 = pbVar3 + 1;
          if (iVar5 - 1U <= uVar2) {
            return local_10;
          }
        }
      }
      else if (iVar5 != 1) {
        pbVar3 = local_8;
        do {
          if (*pbVar3 != pbVar3[*param_1 - (int)local_8]) {
            return local_10;
          }
          if (*pbVar3 == 0) break;
          uVar2 = uVar2 + 1;
          pbVar3 = pbVar3 + 1;
        } while (uVar2 < iVar5 - 1U);
      }
      bVar1 = *local_8;
      if ((byte)(bVar1 + 0x80) < 0x40) {
        iVar4 = 1;
      }
      else if (bVar1 < 0x80) {
        iVar4 = 1;
      }
      else if (bVar1 < 0xe0) {
        iVar4 = 2;
      }
      else if (bVar1 < 0xf0) {
        iVar4 = 3;
      }
      else if (bVar1 < 0xf8) {
        iVar4 = 4;
      }
      else if (bVar1 < 0xfc) {
        iVar4 = 5;
      }
      else {
        iVar4 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      local_c = local_c + iVar4;
      local_10 = local_10 + 1;
      local_8 = local_8 + iVar4;
    } while (*local_8 != 0);
  }
  return 0xffffffff;
}

/* ref: FUN_0042bda0 */
uint F_0042bda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42bda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  uint local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  uVar3 = F_0042b790(this);
  pbVar6 = *(byte * PTR32 *)this;
  if (param_2 == 0xffffffff) {
    local_8 = *(int *)((int)this + 8) + -2;
    pbVar5 = pbVar6 + local_8;
    pbVar6 = pbVar6 + local_8;
    bVar1 = *pbVar5;
    while ((bVar1 & 0xc0) == 0x80) {
      pbVar5 = pbVar6 + -1;
      pbVar6 = pbVar6 + -1;
      local_8 = local_8 + -1;
      bVar1 = *pbVar5;
    }
    if (uVar3 == 0) {
      return 0xffffffff;
    }
    local_c = uVar3 - 1;
  }
  else if (param_2 != 0) {
    local_c = param_2;
    local_8 = 0;
    uVar3 = param_2;
    do {
      bVar1 = *pbVar6;
      if ((byte)(bVar1 + 0x80) < 0x40) {
        iVar4 = 1;
      }
      else if (bVar1 < 0x80) {
        iVar4 = 1;
      }
      else if (bVar1 < 0xe0) {
        iVar4 = 2;
      }
      else if (bVar1 < 0xf0) {
        iVar4 = 3;
      }
      else if (bVar1 < 0xf8) {
        iVar4 = 4;
      }
      else if (bVar1 < 0xfc) {
        iVar4 = 5;
      }
      else {
        iVar4 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      pbVar6 = pbVar6 + iVar4;
      local_8 = local_8 + iVar4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  iVar4 = param_1[2];
  do {
    if ((uint)(iVar4 + local_8) <= *(uint *)((int)this + 8)) {
      uVar3 = 0;
      if ((char)param_3 == '\0') {
        if (iVar4 == 1) {
          return local_c;
        }
        pbVar5 = pbVar6;
        while (*pbVar5 == pbVar5[*param_1 - (int)pbVar6]) {
          if (*pbVar5 == 0) {
            return local_c;
          }
          uVar3 = uVar3 + 1;
          pbVar5 = pbVar5 + 1;
          if (iVar4 - 1U <= uVar3) {
            return local_c;
          }
        }
      }
      else if (iVar4 != 1) {
        pbVar5 = pbVar6;
        do {
          if (*pbVar5 != pbVar5[*param_1 - (int)pbVar6]) {
            return local_c;
          }
          if (*pbVar5 == 0) break;
          uVar3 = uVar3 + 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar3 < iVar4 - 1U);
      }
    }
    bVar1 = pbVar6[-1];
    iVar2 = local_8;
    while( true ) {
      local_8 = iVar2 + -1;
      pbVar6 = pbVar6 + -1;
      if ((bVar1 & 0xc0) != 0x80) break;
      bVar1 = pbVar6[-1];
      iVar2 = local_8;
    }
    if (local_c == 0) {
      return 0xffffffff;
    }
    local_c = local_c - 1;
  } while( true );
}

/* ref: FUN_0042bf40 */
uint F_0042bf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42bf40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  byte * local_c;
  uint local_8;
  
  local_c = *(byte * PTR32 *)this;
  uVar5 = 0;
  local_8 = 0;
  uVar2 = F_0042b790(param_1);
  if (uVar2 == 0) {
    return 0;
  }
  if ((param_2 != 0xffffffff) && (param_2 != 0)) {
    do {
      uVar2 = F_0042b790(this);
      local_8 = uVar5;
      if (uVar2 <= uVar5) break;
      uVar2 = F_0042ad20((uint)*local_c);
      uVar5 = uVar5 + 1;
      local_c = local_c + uVar2;
      local_8 = uVar5;
    } while (uVar5 < param_2);
  }
  uVar2 = F_0042b790(this);
  if (local_8 < uVar2) {
    do {
      uVar2 = 0;
      if (param_1[2] == 1) {
        return local_8;
      }
      pbVar3 = local_c;
      while (*pbVar3 == pbVar3[*param_1 - (int)local_c]) {
        if (*pbVar3 == 0) {
          return local_8;
        }
        uVar2 = uVar2 + 1;
        pbVar3 = pbVar3 + 1;
        if (param_1[2] - 1U <= uVar2) {
          return local_8;
        }
      }
      bVar1 = *local_c;
      if ((byte)(bVar1 + 0x80) < 0x40) {
        iVar4 = 1;
      }
      else if (bVar1 < 0x80) {
        iVar4 = 1;
      }
      else if (bVar1 < 0xe0) {
        iVar4 = 2;
      }
      else if (bVar1 < 0xf0) {
        iVar4 = 3;
      }
      else if (bVar1 < 0xf8) {
        iVar4 = 4;
      }
      else if (bVar1 < 0xfc) {
        iVar4 = 5;
      }
      else {
        iVar4 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      local_c = local_c + iVar4;
      local_8 = local_8 + 1;
      uVar2 = F_0042b790(this);
    } while (local_8 < uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_0042c080 */
uint F_0042c080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42c080u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  
  uVar2 = (uint)(*(byte * PTR32 *)&gen_args[2]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 1) {
    if ((*(undefined4 * PTR32 *)&gen_args[1])[2] != 1) {
      if ((*(byte * PTR32 *)&gen_args[2]) == (byte *)0xffffffff) {
        uVar2 = F_0042b790((*(undefined * PTR32 *)&gen_args[0]));
        iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
        (*(uint *)(gen_frame + 0x14)) = uVar2;
        (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + -1 + iVar4)));
        F_0042f260(&(*(byte * PTR32 *)&gen_args[2]),&(*(uint *)(gen_frame + 0x14)));
      }
      else {
        (*(uint *)(gen_frame + 0x14)) = 0;
        uVar3 = F_0042b790((*(undefined * PTR32 *)&gen_args[0]));
        if (uVar3 - 1 < uVar2) {
          uVar2 = F_0042b790((*(undefined * PTR32 *)&gen_args[0]));
          uVar2 = uVar2 - 1;
        }
        (*(byte * PTR32 *)&gen_args[2]) = *(byte * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
        if (uVar2 != 0) {
          (*(uint *)(gen_frame + 0x14)) = uVar2;
          do {
            bVar1 = *(*(byte * PTR32 *)&gen_args[2]);
            if ((byte)(bVar1 + 0x80) < 0x40) {
              iVar4 = 1;
            }
            else if (bVar1 < 0x80) {
              iVar4 = 1;
            }
            else if (bVar1 < 0xe0) {
              iVar4 = 2;
            }
            else if (bVar1 < 0xf0) {
              iVar4 = 3;
            }
            else if (bVar1 < 0xf8) {
              iVar4 = 4;
            }
            else if (bVar1 < 0xfc) {
              iVar4 = 5;
            }
            else {
              iVar4 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
            }
            (*(byte * PTR32 *)&gen_args[2]) = (*(byte * PTR32 *)&gen_args[2]) + iVar4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
      }
      while( true ) {
        pbVar5 = (*(byte * PTR32 *)&gen_args[2]);
        bVar1 = *(*(byte * PTR32 *)&gen_args[2]);
        (*(uint *)(gen_frame + 0xc)) = 0;
        if ((byte)(bVar1 + 0x80) < 0x40) {
          uVar2 = 1;
        }
        else if (bVar1 < 0x80) {
          uVar2 = 1;
        }
        else if (bVar1 < 0xe0) {
          uVar2 = 2;
        }
        else if (bVar1 < 0xf0) {
          uVar2 = 3;
        }
        else if (bVar1 < 0xf8) {
          uVar2 = 4;
        }
        else if (bVar1 < 0xfc) {
          uVar2 = 5;
        }
        else {
          uVar2 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
        }
        (*(byte * PTR32 *)(gen_frame + 0x10)) = ((byte *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
        (*(uint *)(gen_frame + 0x18)) = uVar2;
        (*(uint *)(gen_frame + 0x8)) = 0;
        uVar3 = F_0042b790((*(undefined4 * PTR32 *)&gen_args[1]));
        if (uVar3 != 0) break;
LAB_0042c34a: ;
        if (((char)(*(undefined4 *)&gen_args[3]) != '\0') && (uVar2 = F_0042b790((*(undefined4 * PTR32 *)&gen_args[1])), (*(uint *)(gen_frame + 0xc)) == uVar2)) {
          return (*(uint *)(gen_frame + 0x14));
        }
        if ((*(uint *)(gen_frame + 0x14)) == 0) {
          return 0xffffffff;
        }
        bVar1 = pbVar5[-1];
        while ((*(byte * PTR32 *)&gen_args[2]) = pbVar5 + -1, (bVar1 & 0xc0) == 0x80) {
          pbVar5 = (*(byte * PTR32 *)&gen_args[2]);
          bVar1 = (*(byte * PTR32 *)&gen_args[2])[-1];
        }
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) - 1;
      }
LAB_0042c1f3: ;
      bVar1 = *(*(byte * PTR32 *)(gen_frame + 0x10));
      if ((byte)(bVar1 + 0x80) < 0x40) {
        uVar3 = 1;
      }
      else if (bVar1 < 0x80) {
        uVar3 = 1;
      }
      else if (bVar1 < 0xe0) {
        uVar3 = 2;
      }
      else if (bVar1 < 0xf0) {
        uVar3 = 3;
      }
      else if (bVar1 < 0xf8) {
        uVar3 = 4;
      }
      else if (bVar1 < 0xfc) {
        uVar3 = 5;
      }
      else {
        uVar3 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
        if (uVar3 == uVar2) {
          uVar2 = 0;
          pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x10));
          if (uVar3 == 0) {
            return (*(uint *)(gen_frame + 0x14));
          }
          while (*pbVar5 == (*(byte * PTR32 *)&gen_args[2])[uVar2]) {
            if (*pbVar5 == 0) {
              return (*(uint *)(gen_frame + 0x14));
            }
            uVar2 = uVar2 + 1;
            pbVar5 = pbVar5 + 1;
            if (uVar3 <= uVar2) {
              return (*(uint *)(gen_frame + 0x14));
            }
          }
        }
      }
      else {
        uVar2 = 0;
        pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x10));
        if (uVar3 != 0) {
          do {
            if (*pbVar5 != (*(byte * PTR32 *)&gen_args[2])[uVar2]) {
              if (uVar3 != (*(uint *)(gen_frame + 0x18))) goto LAB_0042c2d2;
              uVar2 = 0;
              pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x10));
              goto LAB_0042c2b6;
            }
            if (*pbVar5 == 0) break;
            uVar2 = uVar2 + 1;
            pbVar5 = pbVar5 + 1;
          } while (uVar2 < uVar3);
        }
      }
      goto LAB_0042c2d5;
    }
    if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
      uVar2 = F_0042b790((*(undefined * PTR32 *)&gen_args[0]));
      return uVar2 - 1;
    }
  }
  return 0xffffffff;
  while( true ) {
    uVar2 = uVar2 + 1;
    pbVar5 = pbVar5 + 1;
    if (uVar3 <= uVar2) break;
LAB_0042c2b6: ;
    if (*pbVar5 != (*(byte * PTR32 *)&gen_args[2])[uVar2]) goto LAB_0042c2d2;
    if (*pbVar5 == 0) break;
  }
LAB_0042c2d5: ;
  bVar1 = *(*(byte * PTR32 *)(gen_frame + 0x10));
  if ((byte)(bVar1 + 0x80) < 0x40) {
    iVar4 = 1;
  }
  else if (bVar1 < 0x80) {
    iVar4 = 1;
  }
  else if (bVar1 < 0xe0) {
    iVar4 = 2;
  }
  else if (bVar1 < 0xf0) {
    iVar4 = 3;
  }
  else if (bVar1 < 0xf8) {
    iVar4 = 4;
  }
  else if (bVar1 < 0xfc) {
    iVar4 = 5;
  }
  else {
    iVar4 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
  }
  (*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte * PTR32 *)(gen_frame + 0x10)) + iVar4;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
  uVar3 = F_0042b790((*(undefined4 * PTR32 *)&gen_args[1]));
  pbVar5 = (*(byte * PTR32 *)&gen_args[2]);
  uVar2 = (*(uint *)(gen_frame + 0x18));
  if (uVar3 <= (*(uint *)(gen_frame + 0x8))) goto LAB_0042c34a;
  goto LAB_0042c1f3;
LAB_0042c2d2: ;
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
  goto LAB_0042c2d5;
}

/* ref: FUN_0042c3a0 */
uint F_0042c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42c3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte * pbVar6;
  uint local_1c;
  uint local_18;
  byte * local_10;
  uint local_c;
  byte * local_8;
  
  if (*(int *)((int)this + 8) == 1) {
    return 0xffffffff;
  }
  if (param_1[2] == 1) {
    return ((char)param_3 != '\0') - 1;
  }
  local_8 = *(byte * PTR32 *)this;
  if (param_2 == 0xffffffff) {
    local_c = 0;
  }
  else {
    uVar2 = 0;
    local_c = 0;
    if (param_2 != 0) {
      do {
        uVar3 = F_0042b790(this);
        local_c = uVar2;
        if (uVar3 <= uVar2) break;
        uVar3 = F_0042ad20((uint)*local_8);
        uVar2 = uVar2 + 1;
        local_8 = local_8 + uVar3;
        local_c = uVar2;
      } while (uVar2 < param_2);
    }
  }
  uVar2 = F_0042b790(this);
  if (local_c < uVar2) {
    do {
      bVar1 = *local_8;
      local_18 = 0;
      if ((byte)(bVar1 + 0x80) < 0x40) {
        uVar2 = 1;
      }
      else if (bVar1 < 0x80) {
        uVar2 = 1;
      }
      else if (bVar1 < 0xe0) {
        uVar2 = 2;
      }
      else if (bVar1 < 0xf0) {
        uVar2 = 3;
      }
      else if (bVar1 < 0xf8) {
        uVar2 = 4;
      }
      else if (bVar1 < 0xfc) {
        uVar2 = 5;
      }
      else {
        uVar2 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      local_1c = 0;
      local_10 = (byte *)*param_1;
      uVar3 = F_0042b790(param_1);
      if (uVar3 != 0) {
LAB_0042c4a8: ;
        bVar1 = *local_10;
        if ((byte)(bVar1 + 0x80) < 0x40) {
          uVar3 = 1;
        }
        else if (bVar1 < 0x80) {
          uVar3 = 1;
        }
        else if (bVar1 < 0xe0) {
          uVar3 = 2;
        }
        else if (bVar1 < 0xf0) {
          uVar3 = 3;
        }
        else if (bVar1 < 0xf8) {
          uVar3 = 4;
        }
        else if (bVar1 < 0xfc) {
          uVar3 = 5;
        }
        else {
          uVar3 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
        }
        if ((char)param_3 == '\0') {
          if (uVar3 == uVar2) {
            uVar5 = 0;
            pbVar6 = local_10;
            if (uVar3 == 0) {
              return local_c;
            }
            while (*pbVar6 == local_8[uVar5]) {
              if (*pbVar6 == 0) {
                return local_c;
              }
              uVar5 = uVar5 + 1;
              pbVar6 = pbVar6 + 1;
              if (uVar3 <= uVar5) {
                return local_c;
              }
            }
          }
        }
        else {
          uVar5 = 0;
          pbVar6 = local_10;
          if (uVar3 != 0) {
            do {
              if (*pbVar6 != local_8[uVar5]) {
                if (uVar3 != uVar2) goto LAB_0042c582;
                uVar5 = 0;
                pbVar6 = local_10;
                goto LAB_0042c566;
              }
              if (*pbVar6 == 0) break;
              uVar5 = uVar5 + 1;
              pbVar6 = pbVar6 + 1;
            } while (uVar5 < uVar3);
          }
        }
        goto LAB_0042c585;
      }
LAB_0042c5fb: ;
      if (((char)param_3 != '\0') && (uVar2 = F_0042b790(param_1), local_18 == uVar2)) {
        return local_c;
      }
      bVar1 = *local_8;
      if ((byte)(bVar1 + 0x80) < 0x40) {
        iVar4 = 1;
      }
      else if (bVar1 < 0x80) {
        iVar4 = 1;
      }
      else if (bVar1 < 0xe0) {
        iVar4 = 2;
      }
      else if (bVar1 < 0xf0) {
        iVar4 = 3;
      }
      else if (bVar1 < 0xf8) {
        iVar4 = 4;
      }
      else if (bVar1 < 0xfc) {
        iVar4 = 5;
      }
      else {
        iVar4 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      local_8 = local_8 + iVar4;
      local_c = local_c + 1;
      uVar2 = F_0042b790(this);
    } while (local_c < uVar2);
  }
  return 0xffffffff;
  while( true ) {
    uVar5 = uVar5 + 1;
    pbVar6 = pbVar6 + 1;
    if (uVar3 <= uVar5) break;
LAB_0042c566: ;
    if (*pbVar6 != local_8[uVar5]) goto LAB_0042c582;
    if (*pbVar6 == 0) break;
  }
LAB_0042c585: ;
  bVar1 = *local_10;
  if ((byte)(bVar1 + 0x80) < 0x40) {
    iVar4 = 1;
  }
  else if (bVar1 < 0x80) {
    iVar4 = 1;
  }
  else if (bVar1 < 0xe0) {
    iVar4 = 2;
  }
  else if (bVar1 < 0xf0) {
    iVar4 = 3;
  }
  else if (bVar1 < 0xf8) {
    iVar4 = 4;
  }
  else if (bVar1 < 0xfc) {
    iVar4 = 5;
  }
  else {
    iVar4 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
  }
  local_10 = local_10 + iVar4;
  local_1c = local_1c + 1;
  uVar3 = F_0042b790(param_1);
  if (uVar3 <= local_1c) goto LAB_0042c5fb;
  goto LAB_0042c4a8;
LAB_0042c582: ;
  local_18 = local_18 + 1;
  goto LAB_0042c585;
}

/* ref: FUN_0042c690 */
uint F_0042c690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42c690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x33);
  return (uint)uVar1;
}

/* ref: FUN_0042c6b0 */
uint F_0042c6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x42c6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_004296a0(param_4,0,0x33);
  if ((param_1 != 0) &&
     (F_00c46e20(uVar1,param_1,param_2), (char)param_6 != '\0')) {
    F_00429760(param_1,param_3,0x33);
  }
  return uVar1;
}

/* ref: FUN_0042c700 */
byte F_0042c700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42c700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char * pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[2];
  if (*(uint *)((int)this + 8) < (uint)param_1[2]) {
    uVar5 = *(uint *)((int)this + 8);
  }
  pcVar1 = *(char * PTR32 *)this;
  uVar4 = 0;
  if (uVar5 != 0) {
    iVar2 = *param_1 - (int)pcVar1;
    do {
      iVar3 = (int)*pcVar1 - (int)pcVar1[iVar2];
      if (iVar3 != 0) goto LAB_0042c74c;
      if (*pcVar1 == '\0') break;
      uVar4 = uVar4 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar4 < uVar5);
  }
  iVar3 = 0;
LAB_0042c74c: ;
  return iVar3 < 1;
}

/* ref: FUN_0042c760 */
byte F_0042c760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42c760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char * pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[2];
  if (*(uint *)((int)this + 8) < (uint)param_1[2]) {
    uVar5 = *(uint *)((int)this + 8);
  }
  pcVar1 = *(char * PTR32 *)this;
  uVar4 = 0;
  if (uVar5 != 0) {
    iVar2 = *param_1 - (int)pcVar1;
    do {
      iVar3 = (int)*pcVar1 - (int)pcVar1[iVar2];
      if (iVar3 != 0) goto LAB_0042c7ac;
      if (*pcVar1 == '\0') break;
      uVar4 = uVar4 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar4 < uVar5);
  }
  iVar3 = 0;
LAB_0042c7ac: ;
  return -1 < iVar3;
}

/* ref: FUN_0042c7c0 */
byte F_0042c7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42c7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char * pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[2];
  if (*(uint *)((int)this + 8) < (uint)param_1[2]) {
    uVar5 = *(uint *)((int)this + 8);
  }
  pcVar1 = *(char * PTR32 *)this;
  uVar4 = 0;
  if (uVar5 != 0) {
    iVar2 = *param_1 - (int)pcVar1;
    do {
      iVar3 = (int)*pcVar1 - (int)pcVar1[iVar2];
      if (iVar3 != 0) goto LAB_0042c80c;
      if (*pcVar1 == '\0') break;
      uVar4 = uVar4 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar4 < uVar5);
  }
  iVar3 = 0;
LAB_0042c80c: ;
  return iVar3 < 0;
}

/* ref: FUN_0042c820 */
byte F_0042c820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42c820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char * pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[2];
  if (*(uint *)((int)this + 8) < (uint)param_1[2]) {
    uVar5 = *(uint *)((int)this + 8);
  }
  pcVar1 = *(char * PTR32 *)this;
  uVar4 = 0;
  if (uVar5 != 0) {
    iVar2 = *param_1 - (int)pcVar1;
    do {
      iVar3 = (int)*pcVar1 - (int)pcVar1[iVar2];
      if (iVar3 != 0) goto LAB_0042c86c;
      if (*pcVar1 == '\0') break;
      uVar4 = uVar4 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar4 < uVar5);
  }
  iVar3 = 0;
LAB_0042c86c: ;
  return 0 < iVar3;
}

/* ref: FUN_0042c880 */
ulonglong F_0042c880(unsigned int gen_a0)
{
  GEN_ENTER(0x42c880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  undefined4 in_EDX = 0;
  ulonglong uVar1;
  
  uVar1 = CONCAT44(in_EDX,in_EAX);
  if (*(char *)((int)this + 0x11) == '\0') {
    uVar1 = F_00429760(*(undefined4 *)this,*(undefined4 *)((int)this + 4),0x33);
  }
  return uVar1;
}

/* ref: FUN_0042c8a0 */
uint F_0042c8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42c8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042bf40(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0042c8b0 */
uint F_0042c8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42c8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042c3a0(this,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_0042c8d0 */
uint F_0042c8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42c8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042c3a0(this,param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_0042c8f0 */
uint F_0042c8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42c8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042c080(this,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_0042c910 */
uint F_0042c910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42c910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042c080(this,param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_0042c930 */
uint F_0042c930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42c930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((char)param_2 != '\0') {
    *(undefined1 *)((int)this + 0x10) = 0;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 < param_1) {
    uVar3 = *(undefined4 *)((int)this + 8);
    iVar4 = *(int *)this;
    uVar6 = param_1 + 0x1f & 0xffffffe0;
    cVar1 = *(char *)((int)this + 0x11);
    uVar5 = F_004296a0(uVar6,0,0x33);
    if (iVar4 != 0) {
      F_00c46e20(uVar5,iVar4,uVar3);
      if (cVar1 == '\0') {
        F_00429760(iVar4,uVar2,0x33);
      }
    }
    *(uint *)((int)this + 4) = uVar6;
    *(uint *)this = uVar5;
    *(undefined1 *)((int)this + 0x11) = 0;
    *(uint *)((int)this + 8) = param_1;
    return uVar5;
  }
  *(uint *)((int)this + 8) = param_1;
  return uVar2;
}

/* ref: FUN_0042c9d0 */
uint F_0042c9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42c9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  char * pcVar5;
  uint local_8;
  
  pcVar5 = ((char *)GEN_TOP((*(int *)((int)this + 8) + -1 + *(int *)this)));
  local_8 = F_0042b790(this);
  uVar2 = F_0042b790(param_1);
  if (uVar2 == 0) {
    uVar2 = F_0042b790(this);
    return uVar2;
  }
  if (param_2 != 0xffffffff) {
    uVar2 = F_0042b790(this);
    if (uVar2 < param_2) {
      return 0xffffffff;
    }
    if (local_8 != param_2) {
      iVar3 = local_8 - param_2;
      do {
        bVar1 = pcVar5[-1];
        while (pcVar5 = pcVar5 + -1, (bVar1 & 0xc0) == 0x80) {
          bVar1 = pcVar5[-1];
        }
        local_8 = local_8 - 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  do {
    uVar2 = 0;
    if (param_1[2] == 1) {
      return local_8;
    }
    pcVar4 = pcVar5;
    while (*pcVar4 == pcVar4[*param_1 - (int)pcVar5]) {
      if (*pcVar4 == '\0') {
        return local_8;
      }
      uVar2 = uVar2 + 1;
      pcVar4 = pcVar4 + 1;
      if (param_1[2] - 1U <= uVar2) {
        return local_8;
      }
    }
    if (local_8 == 0) {
      return 0xffffffff;
    }
    bVar1 = pcVar5[-1];
    pcVar4 = pcVar5;
    while (pcVar5 = pcVar4 + -1, (bVar1 & 0xc0) == 0x80) {
      bVar1 = pcVar4[-2];
      pcVar4 = pcVar5;
    }
    local_8 = local_8 - 1;
  } while( true );
}

/* ref: FUN_0042cad0 */
uint F_0042cad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42cad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  uint local_8;
  
  uVar2 = 0;
  uVar8 = 0;
  local_8 = 0;
  iVar7 = param_2;
  if (param_1[4] != 0) {
    do {
      uVar2 = param_1[5];
      puVar4 = param_1;
      if (7 < uVar2) {
        puVar4 = (undefined4 *)*param_1;
      }
      if ((*(ushort *)((int)puVar4 + uVar8 * 2) & 0xfc00) == 0xd800) {
        puVar4 = param_1;
        if (7 < uVar2) {
          puVar4 = (undefined4 *)*param_1;
        }
        iVar7 = uVar8 * 2;
        puVar6 = param_1;
        if (7 < uVar2) {
          puVar6 = (undefined4 *)*param_1;
        }
        iVar1 = uVar8 * 2;
        uVar8 = uVar8 + 1;
        puVar3 = param_1;
        if (7 < uVar2) {
          puVar3 = (undefined4 *)*param_1;
        }
        if ((*(ushort *)((int)puVar3 + uVar8 * 2) & 0xfc00) != 0xdc00) {
          return local_8;
        }
        puVar3 = param_1;
        if (7 < uVar2) {
          puVar3 = (undefined4 *)*param_1;
        }
        uVar2 = (*(ushort *)((int)puVar6 + iVar1) & 0x3f |
                ((*(ushort *)((int)puVar4 + iVar7) >> 6 & 0xf) + 1) * 0x40) << 10 |
                *(ushort *)((int)puVar3 + uVar8 * 2) & 0x3ff;
        iVar7 = param_2;
      }
      else {
        puVar4 = param_1;
        if (7 < uVar2) {
          puVar4 = (undefined4 *)*param_1;
        }
        uVar2 = (uint)*(ushort *)((int)puVar4 + uVar8 * 2);
      }
      uVar5 = F_0042ae10(uVar2,iVar7);
      uVar2 = local_8 + uVar5;
      if (iVar7 != 0) {
        iVar7 = iVar7 + uVar5;
        param_2 = iVar7;
      }
      uVar8 = uVar8 + 1;
      local_8 = uVar2;
    } while (uVar8 < (uint)param_1[4]);
  }
  return uVar2;
}

/* ref: FUN_0042cbc0 */
uint F_0042cbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42cbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined2 *)((int)this + 0x10) = 0x101;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0x12);
  *(undefined1 *)((int)this + 0x12) = 0;
  F_0042c930(this,param_1[2],1);
  F_00c46aa0(*(undefined4 *)this,*param_1,param_1[2]);
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_0042cc20 */
uint F_0042cc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42cc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  char * pcVar2;
  int iVar3;
  
  *(undefined2 *)((int)this + 0x10) = 0x101;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0x12);
  *(undefined1 *)((int)this + 0x12) = 0;
  iVar3 = param_2;
  if (param_2 == -1) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  }
  F_0042c930(this,iVar3 + 1,1);
  F_00c46e20(*(undefined4 *)this,param_1,iVar3);
  *(undefined1 *)(iVar3 + *(int *)this) = 0;
  return (uint)this;
}

/* ref: FUN_0042cca0 */
uint F_0042cca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42cca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined2 *)((int)this + 0x10) = 0x101;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0x12);
  *(undefined1 *)((int)this + 0x12) = 0;
  F_0042c930(this,2,1);
  **(undefined1 * PTR32 *)this = (undefined1)param_1;
  *(undefined1 *)(*(int *)this + 1) = 0;
  return (uint)this;
}

/* ref: FUN_0042ccf0 */
uint F_0042ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42ccf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != this) {
    F_0042c930(this,param_1[2],1);
    F_00c46aa0(*(undefined4 *)this,*param_1,*(undefined4 *)((int)this + 8));
    *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
    *(undefined4 *)((int)this + 0xc) = param_1[3];
  }
  return (uint)this;
}

/* ref: FUN_0042cd30 */
uint F_0042cd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42cd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  param_1[2] = 1;
  *(undefined2 *)(param_1 + 4) = 0x101;
  param_1[3] = 0;
  param_1[1] = 0x40;
  *param_1 = (int)param_1 + 0x12;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  F_0042c930(param_1,*(int *)((int)this + 8) + -1 + param_2[2],1);
  F_00c46e20(*param_1,*(undefined4 *)this,*(undefined4 *)((int)this + 8));
  F_00c46e20(*(int *)((int)this + 8) + -1 + *param_1,*param_2,param_2[2]);
  return (uint)param_1;
}

/* ref: FUN_0042cdb0 */
uint F_0042cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42cdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  char * pcVar2;
  
  *param_1 = (int)param_1 + 0x12;
  *(undefined2 *)(param_1 + 4) = 0x101;
  param_1[3] = 0;
  param_1[2] = 1;
  param_1[1] = 0x40;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0042c930(param_1,pcVar2 + (1 - (int)(param_2 + 1)) + *(int *)((int)this + 8) + -1,1);
  F_00c46e20(*param_1,*(undefined4 *)this,*(int *)((int)this + 8) + -1);
  F_00c46e20(*(int *)((int)this + 8) + -1 + *param_1,param_2,pcVar2 + (1 - (int)(param_2 + 1)));
  return (uint)param_1;
}

/* ref: FUN_0042ce40 */
uint F_0042ce40(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x42ce40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x400,param_2,((undefined *)&gen_args[2]));
  *param_1 = (int)param_1 + 0x12;
  *(undefined2 *)(param_1 + 4) = 0x101;
  param_1[3] = 0;
  param_1[2] = 1;
  param_1[1] = 0x40;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  pcVar3 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(((char *)(gen_frame + 0x8)) + 1);
  F_0042c930(param_1,iVar4 + 1,1);
  F_00c46e20(*param_1,((char *)(gen_frame + 0x8)),iVar4);
  uVar2 = (*(uint *)(gen_frame + 0x408));
  *(undefined1 *)(iVar4 + *param_1) = 0;
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x40c));
  return (uint)param_1;
}

/* ref: FUN_0042cef0 */
uint F_0042cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042b300(param_1,0);
  F_0042c930(this,uVar1 + 1,1);
  uVar2 = F_0042b300(param_1,*(undefined4 *)this);
  *(undefined1 *)(uVar1 + *(int *)this) = 0;
  return uVar2;
}

/* ref: FUN_0042cf30 */
uint F_0042cf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42cf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  puVar3 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar3 = (undefined4 *)*param_1;
  }
  uVar1 = F_0042b300(puVar3,0);
  F_0042c930(this,uVar1 + 1,1);
  uVar2 = F_0042b300(puVar3,*(undefined4 *)this);
  *(undefined1 *)(uVar1 + *(int *)this) = 0;
  return uVar2;
}

/* ref: FUN_0042cf80 */
uint F_0042cf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42cf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042afa0(param_1,0);
  F_0042c930(this,uVar1 + 1,1);
  uVar1 = F_0042afa0(param_1,*(undefined4 *)this);
  return uVar1;
}

/* ref: FUN_0042cfc0 */
uint F_0042cfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42cfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  if (3 < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  uVar1 = F_0042afa0(puVar2,0);
  F_0042c930(this,uVar1 + 1,1);
  uVar1 = F_0042afa0(puVar2,*(undefined4 *)this);
  return uVar1;
}

/* ref: FUN_0042d000 */
uint F_0042d000(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x42d000u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x400,param_2,((undefined *)&gen_args[2]));
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0042c930(param_1,pcVar2 + (1 - (int)(((char *)(gen_frame + 0x8)) + 1)),1);
  uVar3 = F_00c46e20(*param_1,((char *)(gen_frame + 0x8)),pcVar2 + (1 - (int)(((char *)(gen_frame + 0x8)) + 1)));
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar3;
}

/* ref: FUN_0042d080 */
uint F_0042d080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42d080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCSTR param_1 = (LPCSTR)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  (*(WCHAR *)(gen_frame + 0x8)) = L'\0';
  F_00c48350(((undefined1 *)(gen_frame + 0xa)),0,0x7fe);
  gen_imp_MultiByteToWideChar(0,0,param_1,-1,&(*(WCHAR *)(gen_frame + 0x8)),0x400);
  uVar1 = F_0042b300(&(*(WCHAR *)(gen_frame + 0x8)),0);
  F_0042c930(this,uVar1 + 1,1);
  F_0042b300(&(*(WCHAR *)(gen_frame + 0x8)),*(undefined4 *)this);
  *(undefined1 *)(uVar1 + *(int *)this) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return (uint)this;
}

/* ref: FUN_0042d120 */
uint F_0042d120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42d120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_0042c930(this,param_2 + 1,1);
  F_00c46e20(*(undefined4 *)this,param_1,param_2);
  uVar1 = *(uint *)this;
  *(undefined1 *)(param_2 + uVar1) = 0;
  return uVar1;
}

/* ref: FUN_0042d160 */
uint F_0042d160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42d160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 8);
  F_0042c930(this,iVar1 + 1,1);
  *(undefined1 *)(iVar1 + -1 + *(int *)this) = (undefined1)param_1;
  uVar2 = *(uint *)this;
  *(undefined1 *)(uVar2 + iVar1) = 0;
  return uVar2;
}

/* ref: FUN_0042d190 */
uint F_0042d190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42d190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * pbVar1;
  int iVar2;
  
  F_0042c930(this,*(int *)((int)this + 8) + 1,1);
  iVar2 = *(int *)((int)this + 8) + -1;
  if (iVar2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      *(undefined1 *)(*(int *)this + 1 + iVar2) = *(undefined1 *)(*(int *)this + iVar2);
    } while (iVar2 != 0);
    pbVar1 = *(byte * PTR32 *)this;
    *pbVar1 = (byte)param_1;
    return (uint)pbVar1;
  }
  **(byte * PTR32 *)this = (byte)param_1;
  return (uint)(byte)param_1;
}

/* ref: FUN_0042d1d0 */
byte F_0042d1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x42d1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  bVar1 = *(byte *)(iVar2 + -2 + *(int *)this);
  F_0042c930(this,iVar2 + -1,1);
  *(undefined1 *)(iVar2 + -2 + *(int *)this) = 0;
  return bVar1;
}

/* ref: FUN_0042d200 */
byte F_0042d200(unsigned int gen_a0)
{
  GEN_ENTER(0x42d200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar1 = **(byte * PTR32 *)this;
  uVar6 = 1;
  if (1 < *(uint *)((int)this + 8)) {
    do {
      *(undefined1 *)(*(int *)this + -1 + uVar6) = *(undefined1 *)(*(int *)this + uVar6);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)((int)this + 8));
  }
  iVar3 = *(int *)((int)this + 8);
  uVar6 = iVar3 - 1;
  uVar4 = *(uint *)((int)this + 4);
  *(undefined1 *)((int)this + 0x10) = 0;
  if (uVar6 <= uVar4) {
    *(uint *)((int)this + 8) = uVar6;
    return bVar1;
  }
  iVar5 = *(int *)this;
  uVar8 = iVar3 + 0x1eU & 0xffffffe0;
  cVar2 = *(char *)((int)this + 0x11);
  uVar7 = F_004296a0(uVar8,0,0x33);
  if ((iVar5 != 0) && (F_00c46e20(uVar7,iVar5,iVar3), cVar2 == '\0')) {
    F_00429760(iVar5,uVar4,0x33);
  }
  *(uint *)((int)this + 4) = uVar8;
  *(uint *)this = uVar7;
  *(undefined1 *)((int)this + 0x11) = 0;
  *(uint *)((int)this + 8) = uVar6;
  return bVar1;
}

/* ref: FUN_0042d2c0 */
uint F_0042d2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42d2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 == -1) {
    iVar1 = (*(int *)((int)this + 8) - param_2) + -1;
  }
  F_0042cc20(param_1,*(int *)this + param_2,iVar1);
  return (uint)param_1;
}

/* ref: FUN_0042d2f0 */
uint F_0042d2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42d2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_3 == 0) {
    *(undefined2 *)(param_1 + 4) = 0x101;
    param_1[3] = 0;
    param_1[2] = 1;
    param_1[1] = 0x40;
    *param_1 = (undefined1 *)((int)param_1 + 0x12);
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    F_0042c930(param_1,1,1);
    F_00c46e20(*param_1,&REFG(undefined, 0x108cc56),0);
    *(undefined1 *)*param_1 = 0;
    return (uint)param_1;
  }
  iVar4 = -1;
  if (param_3 == -1) {
    param_3 = F_0042b790(this);
  }
  else {
    param_3 = param_2 + param_3;
  }
  pbVar3 = *(byte * PTR32 *)this;
  pbVar5 = (byte *)0x0;
  bVar1 = *pbVar3;
  while (bVar1 != 0) {
    if (param_2 == uVar6) {
      iVar4 = 0;
      pbVar5 = pbVar3;
    }
    else if (param_3 == uVar6) break;
    if ((byte)(bVar1 + 0x80) < 0x40) {
      iVar2 = 1;
    }
    else if (bVar1 < 0x80) {
      iVar2 = 1;
    }
    else if (bVar1 < 0xe0) {
      iVar2 = 2;
    }
    else if (bVar1 < 0xf0) {
      iVar2 = 3;
    }
    else if (bVar1 < 0xf8) {
      iVar2 = 4;
    }
    else if (bVar1 < 0xfc) {
      iVar2 = 5;
    }
    else {
      iVar2 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
    }
    pbVar3 = pbVar3 + iVar2;
    iVar4 = iVar4 + iVar2;
    uVar6 = uVar6 + 1;
    bVar1 = *pbVar3;
  }
  if ((param_2 == uVar6) && (pbVar5 == (byte *)0x0)) {
    F_0042cc20(param_1,&REFG(undefined, 0x108cc57),0xffffffff);
    return (uint)param_1;
  }
  F_0042cc20(param_1,pbVar5,iVar4);
  return (uint)param_1;
}

/* ref: FUN_0042d420 */
uint F_0042d420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42d420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 == 0xffffffff) || (uVar5 = param_2, *(uint *)((int)this + 8) <= param_2)) {
    uVar5 = *(int *)((int)this + 8) - 1;
  }
  if (uVar5 != 0) {
    uVar4 = uVar5 - 1;
    bVar1 = *(byte *)(*(int *)this + uVar4);
    iVar2 = *(int *)this + uVar4;
    while( true ) {
      if ((bVar1 & 0xc0) != 0x80) {
        uVar3 = F_0042b060(iVar2,0);
        if (uVar3 + uVar4 == uVar5) {
          uVar4 = uVar5;
        }
        F_0042cc20(param_1,*(undefined4 *)this,uVar4);
        return (uint)param_1;
      }
      if (uVar4 == 0) break;
      bVar1 = *(byte *)(iVar2 + -1);
      iVar2 = iVar2 + -1;
      uVar4 = uVar4 - 1;
    }
  }
  F_0042cbc0(param_1,&REFG(undefined * PTR32, 0x12fd328));
  return (uint)param_1;
}

/* ref: FUN_0042d4b0 */
uint F_0042d4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42d4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar2 = F_0042c930(this,param_1,1);
  *(undefined4 *)((int)this + 8) = uVar1;
  return uVar2;
}

/* ref: FUN_0042d4d0 */
uint F_0042d4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42d4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  F_0042c930(this,param_1[2] + -1 + iVar1,1);
  if (param_1 != this) {
    F_00c46e20(*(int *)this + -1 + iVar1,*param_1,param_1[2]);
    return (uint)this;
  }
  F_00c46e20(*(int *)this + -1 + iVar1,*(int *)this,iVar1 + -1);
  *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 8)))) = 0;
  return (uint)this;
}

/* ref: FUN_0042d540 */
uint F_0042d540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42d540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  char * pcVar3;
  
  iVar2 = *(int *)((int)this + 8);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_0042c930(this,pcVar3 + (1 - (int)(param_1 + 1)) + iVar2 + -1,1);
  F_00c46e20(*(int *)this + -1 + iVar2,param_1,pcVar3 + (1 - (int)(param_1 + 1)))
  ;
  return (uint)this;
}

/* ref: FUN_0042d590 */
uint F_0042d590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42d590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  F_0042c930(this,iVar1 + param_2,1);
  F_00c46e20(*(int *)this + -1 + iVar1,param_1,param_2);
  *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 8)))) = 0;
  return (uint)this;
}

/* ref: FUN_0042d5d0 */
uint F_0042d5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42d5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042c9d0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0042d5e0 */
uint F_0042d5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42d5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_1 < *(uint *)((int)this + 8)) {
    iVar1 = *(int *)((int)this + 8);
    F_0042c930(this,iVar1 + param_3,1);
    F_00c46e20(*(int *)this + param_1 + param_3,*(int *)this + param_1,(iVar1 - param_1) + -1);
    *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 8)))) = 0;
    F_00c46e20(*(int *)this + param_1,param_2,param_3);
  }
  return (uint)this;
}

/* ref: FUN_0042d640 */
uint F_0042d640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42d640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0042b790(this);
  F_0042d2f0(this,((byte *)(gen_frame + 0x4)),param_1,uVar1 - param_1);
  F_0042b9e0(this,param_1,0xffffffff);
  F_0042d4d0(this,param_2);
  F_0042d4d0(this,((byte *)(gen_frame + 0x4)));
  if (((byte *)(gen_frame + 0x4))[0x11] == 0) {
    F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)),0x33);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_0042d6c0 */
uint F_0042d6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42d6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b9e0(this,param_1,param_2);
  uVar1 = F_0042b790(this);
  F_0042d2f0(this,((byte *)(gen_frame + 0x4)),param_1,uVar1 - param_1);
  F_0042b9e0(this,param_1,0xffffffff);
  F_0042d4d0(this,param_3);
  F_0042d4d0(this,((byte *)(gen_frame + 0x4)));
  if (((byte *)(gen_frame + 0x4))[0x11] == 0) {
    F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)),0x33);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_0042d750 */
uint F_0042d750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42d750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar4 = F_0042bf40(this,param_1,0);
  while (uVar4 != 0xffffffff) {
    uVar5 = F_0042b790(param_1);
    F_0042b9e0(this,uVar4,uVar5);
    uVar5 = F_0042b790(this);
    F_0042d2f0(this,((byte *)(gen_frame + 0x4)),uVar4,uVar5 - uVar4);
    F_0042b9e0(this,uVar4,0xffffffff);
    iVar2 = *(int *)((int)this + 8);
    uVar5 = *(uint *)((int)this + 4);
    uVar4 = iVar2 + -1 + param_2[2];
    *(undefined1 *)((int)this + 0x10) = 0;
    if (uVar5 < uVar4) {
      iVar3 = *(int *)this;
      uVar7 = uVar4 + 0x1f & 0xffffffe0;
      cVar1 = *(char *)((int)this + 0x11);
      uVar6 = F_004296a0(uVar7,0,0x33);
      if ((iVar3 != 0) && (F_00c46e20(uVar6,iVar3,iVar2), cVar1 == '\0')) {
        F_00429760(iVar3,uVar5,0x33);
      }
      *(uint *)((int)this + 4) = uVar7;
      *(uint *)this = uVar6;
      *(undefined1 *)((int)this + 0x11) = 0;
    }
    *(uint *)((int)this + 8) = uVar4;
    if (param_2 == this) {
      F_00c46e20(*(int *)this + -1 + iVar2,*(int *)this,iVar2 + -1);
      *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 8)))) = 0;
    }
    else {
      F_00c46e20(*(int *)this + -1 + iVar2,*param_2,param_2[2]);
    }
    iVar2 = *(int *)((int)this + 8);
    uVar5 = *(uint *)((int)this + 4);
    uVar4 = iVar2 + -1 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8));
    *(undefined1 *)((int)this + 0x10) = 0;
    if (uVar5 < uVar4) {
      iVar3 = *(int *)this;
      uVar7 = uVar4 + 0x1f & 0xffffffe0;
      cVar1 = *(char *)((int)this + 0x11);
      uVar6 = F_004296a0(uVar7,0,0x33);
      if ((iVar3 != 0) && (F_00c46e20(uVar6,iVar3,iVar2), cVar1 == '\0')) {
        F_00429760(iVar3,uVar5,0x33);
      }
      *(uint *)this = uVar6;
      *(uint *)((int)this + 4) = uVar7;
      *(undefined1 *)((int)this + 0x11) = 0;
    }
    *(uint *)((int)this + 8) = uVar4;
    if (((byte *)(gen_frame + 0x4)) == this) {
      F_00c46e20(*(int *)this + -1 + iVar2,*(int *)this,iVar2 + -1);
      *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 8)))) = 0;
    }
    else {
      F_00c46e20(*(int *)this + -1 + iVar2,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)));
    }
    if (((byte *)(gen_frame + 0x4))[0x11] == 0) {
      F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)),0x33);
    }
    uVar4 = F_0042bf40(this,param_1,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_0042d970 */
uint F_0042d970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42d970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != this) {
    F_0042c930(this,param_1[2],1);
    F_00c46aa0(*(undefined4 *)this,*param_1,*(undefined4 *)((int)this + 8));
    *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
    *(undefined4 *)((int)this + 0xc) = param_1[3];
  }
  return (uint)this;
}

/* ref: FUN_0042d9b0 */
uint F_0042d9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42d9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  puVar1 = (undefined4 *)F_0042d2f0(param_1,((byte *)(gen_frame + 0x4)),param_2,param_3);
  if (puVar1 != this) {
    F_0042c930(this,puVar1[2],1);
    F_00c46aa0(*(undefined4 *)this,*puVar1,*(undefined4 *)((int)this + 8));
    *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(puVar1 + 4);
    *(undefined4 *)((int)this + 0xc) = puVar1[3];
  }
  if (((byte *)(gen_frame + 0x4))[0x11] == 0) {
    F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)),0x33);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_0042da40 */
uint F_0042da40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42da40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined1 * puVar1;
  byte abVar2 [4];
  byte bVar3;
  uint uVar4;
  undefined1 * PTR32 * ppuVar5;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (*(uint *)((int)this + 8) < (uint)(param_1 + param_2)) {
    (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)(gen_frame + 0x66));
    (*(undefined2 *)(gen_frame + 0x64)) = 0x101;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 1;
    ((byte *)(gen_frame + 0x58))[0] = 0x40;
    ((byte *)(gen_frame + 0x58))[1] = 0;
    ((byte *)(gen_frame + 0x58))[2] = 0;
    ((byte *)(gen_frame + 0x58))[3] = 0;
    ((undefined1 *)(gen_frame + 0x66))[0] = 0;
    F_0042c930(&(*(undefined1 * PTR32 *)(gen_frame + 0x54)),1,1);
    F_00c46e20((*(undefined1 * PTR32 *)(gen_frame + 0x54)),&REFG(undefined, 0x108cc58),0);
    ppuVar5 = &(*(undefined1 * PTR32 *)(gen_frame + 0x54));
    *(*(undefined1 * PTR32 *)(gen_frame + 0x54)) = 0;
    uVar4 = F_0042bba0(param_3,ppuVar5);
    uVar4 = -uVar4;
    puVar1 = (*(undefined1 * PTR32 *)(gen_frame + 0x54));
    { unsigned int gen_ac = (unsigned int)((*(unsigned int *)((byte *)(gen_frame + 0x58)))); memcpy(abVar2, &gen_ac, 4); }
    bVar3 = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x64)) + 1));
  }
  else {
    F_0042d2f0(this,((byte *)(gen_frame + 0x0)),param_1,param_2);
    uVar4 = F_0042bba0(((byte *)(gen_frame + 0x0)),param_3);
    puVar1 = (undefined1 *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    *(undefined4 *)abVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
    bVar3 = ((byte *)(gen_frame + 0x0))[0x11];
  }
  if (bVar3 == 0) {
    F_00429760(puVar1,abVar2,0x33);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar4;
}

/* ref: FUN_0042db30 */
uint F_0042db30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x42db30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_0042d2f0(this,((byte *)(gen_frame + 0x0)),param_1,param_2);
  F_0042d2f0(param_3,&(*(int *)(gen_frame + 0x54)),param_4,param_5);
  uVar4 = (*(uint *)(gen_frame + 0x5c));
  if ((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) < (*(uint *)(gen_frame + 0x5c))) {
    uVar4 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  }
  uVar2 = 0;
  pcVar3 = (char *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  if (uVar4 != 0) {
    do {
      uVar1 = (int)*pcVar3 - (int)*(char *)(uVar2 + (*(int *)(gen_frame + 0x54)));
      if (uVar1 != 0) goto LAB_0042dbac;
      if (*pcVar3 == '\0') break;
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar2 < uVar4);
  }
  uVar1 = 0;
LAB_0042dbac: ;
  if ((*(char *)(gen_frame + 0x65)) == '\0') {
    F_00429760((*(int *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),0x33);
  }
  if (((byte *)(gen_frame + 0x0))[0x11] == 0) {
    F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),0x33);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar1;
}

/* ref: FUN_0042dc00 */
byte F_0042dc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42dc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042c930(this,*(int *)((int)this + 8) + 1,1);
  *((byte *)GEN_TOP((*(int *)this + -2 + *(int *)((int)this + 8)))) = (byte)param_1;
  *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 8)))) = 0;
  return (byte)param_1;
}

/* ref: FUN_0042dc30 */
uint F_0042dc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte * pbVar4;
  int iVar5;
  undefined1 * puVar6;
  uint uVar7;
  byte * pbVar8;
  uint uVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  pbVar8 = *(byte * PTR32 *)this;
  uVar9 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (param_2 != 0) {
    (*(uint *)(gen_frame + 0x10)) = param_2;
    uVar7 = param_2;
    do {
      bVar1 = *pbVar8;
      if ((byte)(bVar1 + 0x80) < 0x40) {
        iVar3 = 1;
      }
      else if (bVar1 < 0x80) {
        iVar3 = 1;
      }
      else if (bVar1 < 0xe0) {
        iVar3 = 2;
      }
      else if (bVar1 < 0xf0) {
        iVar3 = 3;
      }
      else if (bVar1 < 0xf8) {
        iVar3 = 4;
      }
      else if (bVar1 < 0xfc) {
        iVar3 = 5;
      }
      else {
        iVar3 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      pbVar8 = pbVar8 + iVar3;
      uVar9 = uVar9 + iVar3;
      uVar7 = uVar7 - 1;
      (*(uint *)(gen_frame + 0xc)) = uVar9;
    } while (uVar7 != 0);
  }
  bVar1 = *pbVar8;
  uVar9 = (*(uint *)(gen_frame + 0xc));
  uVar7 = (*(uint *)(gen_frame + 0x10));
  do {
    if ((bVar1 == 0) || (*(uint *)((int)this + 8) <= uVar9)) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0xffffffff;
    }
    bVar1 = *pbVar8;
    if ((byte)(bVar1 + 0x80) < 0x40) {
      iVar3 = 1;
    }
    else if (bVar1 < 0x80) {
      iVar3 = 1;
    }
    else if (bVar1 < 0xe0) {
      iVar3 = 2;
    }
    else if (bVar1 < 0xf0) {
      iVar3 = 3;
    }
    else if (bVar1 < 0xf8) {
      iVar3 = 4;
    }
    else if (bVar1 < 0xfc) {
      iVar3 = 5;
    }
    else {
      iVar3 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
    }
    puVar6 = ((undefined1 *)(gen_frame + 0x26));
    (*(ushort *)(gen_frame + 0x24)) = 0x101;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 1;
    (*(uint *)(gen_frame + 0x18)) = 0x40;
    (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar6;
    ((undefined1 *)(gen_frame + 0x26))[0] = 0;
    iVar5 = iVar3;
    if (iVar3 == -1) {
      pbVar4 = pbVar8;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      iVar5 = (int)pbVar4 - (int)(pbVar8 + 1);
    }
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x24)) + 0)) = 0;
    (*(ushort *)(gen_frame + 0x24)) = 0x100;
    if (0x40 < iVar5 + 1U) {
      uVar10 = iVar5 + 0x20U & 0xffffffe0;
      puVar6 = (undefined1 *)F_004296a0(uVar10,0,0x33);
      F_00c46e20(puVar6,((undefined1 *)(gen_frame + 0x26)),1);
      uVar2 = (*(ushort *)(gen_frame + 0x24));
      (*(uint *)(gen_frame + 0x18)) = uVar10;
      (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar6;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x24)) + 1)) = 0;
      (*(ushort *)(gen_frame + 0x24)) = uVar2 & 0xff;
    }
    (*(int *)(gen_frame + 0x1c)) = iVar5 + 1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar6;
    F_00c46e20(puVar6,pbVar8,iVar5);
    (*(undefined1 * PTR32 *)(gen_frame + 0x14))[iVar5] = 0;
    if ((char)param_3 == '\0') {
      uVar10 = F_0042bf40(param_1,&(*(undefined1 * PTR32 *)(gen_frame + 0x14)),0);
      if (uVar10 != 0xffffffff) {
LAB_0042de00: ;
        if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x24)) + 1)) == '\0') {
          F_00429760((*(undefined1 * PTR32 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x18)),0x33);
        }
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar7;
      }
    }
    else {
      uVar10 = F_0042bf40(param_1,&(*(undefined1 * PTR32 *)(gen_frame + 0x14)),0);
      if (uVar10 == 0xffffffff) goto LAB_0042de00;
    }
    uVar9 = uVar9 + iVar3;
    uVar7 = uVar7 + 1;
    pbVar8 = pbVar8 + iVar3;
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x24)) + 1)) == '\0') {
      F_00429760((*(undefined1 * PTR32 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x18)),0x33);
    }
    bVar1 = *pbVar8;
  } while( true );
}

/* ref: FUN_0042de70 */
uint F_0042de70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42de70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte * pbVar9;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar6 = 0;
  uVar7 = 0;
  if (param_2 == 0xffffffff) {
    uVar6 = F_0042b790(this);
    pbVar9 = ((byte *)GEN_TOP((*(int *)this + -2 + *(int *)((int)this + 8))));
    bVar1 = *pbVar9;
    while (uVar6 = uVar6 - 1, (bVar1 & 0xc0) == 0x80) {
      pbVar4 = pbVar9 + -1;
      pbVar9 = pbVar9 + -1;
      bVar1 = *pbVar4;
    }
    uVar7 = *(int *)((int)this + 8) - 2;
  }
  else {
    (*(byte * PTR32 *)(gen_frame + 0x0)) = *(byte * PTR32 *)this;
    if (param_2 == 0) goto LAB_0042e110;
    do {
      pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x0));
      if (*(int *)((int)this + 8) - 2U <= uVar7) break;
      bVar1 = *(*(byte * PTR32 *)(gen_frame + 0x0));
      if ((byte)(bVar1 + 0x80) < 0x40) {
        iVar3 = 1;
      }
      else if (bVar1 < 0x80) {
        iVar3 = 1;
      }
      else if (bVar1 < 0xe0) {
        iVar3 = 2;
      }
      else if (bVar1 < 0xf0) {
        iVar3 = 3;
      }
      else if (bVar1 < 0xf8) {
        iVar3 = 4;
      }
      else if (bVar1 < 0xfc) {
        iVar3 = 5;
      }
      else {
        iVar3 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
      }
      (*(byte * PTR32 *)(gen_frame + 0x0)) = (*(byte * PTR32 *)(gen_frame + 0x0)) + iVar3;
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + iVar3;
      pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x0));
    } while (uVar6 != param_2);
  }
joined_r0x0042df5f: ;
  if (uVar7 != 0) {
    bVar1 = *pbVar9;
    if ((byte)(bVar1 + 0x80) < 0x40) {
      iVar3 = 1;
    }
    else if (bVar1 < 0x80) {
      iVar3 = 1;
    }
    else if (bVar1 < 0xe0) {
      iVar3 = 2;
    }
    else if (bVar1 < 0xf0) {
      iVar3 = 3;
    }
    else if (bVar1 < 0xf8) {
      iVar3 = 4;
    }
    else if (bVar1 < 0xfc) {
      iVar3 = 5;
    }
    else {
      iVar3 = (-(uint)(bVar1 < 0xfe) & 5) + 1;
    }
    uVar5 = (int)&(*(ushort *)(gen_frame + 0x15)) + 1;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0xc)) = 1;
    (*(uint *)(gen_frame + 0x8)) = 0x40;
    (*(uint *)(gen_frame + 0x4)) = uVar5;
    (*(ushort *)(gen_frame + 0x15)) = 1;
    if (iVar3 == -1) {
      pbVar4 = pbVar9;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      iVar3 = (int)pbVar4 - (int)(pbVar9 + 1);
    }
    (*(undefined1 *)(gen_frame + 0x14)) = 0;
    if (0x40 < iVar3 + 1U) {
      uVar8 = iVar3 + 0x20U & 0xffffffe0;
      uVar5 = F_004296a0(uVar8,0,0x33);
      F_00c46e20(uVar5,(int)&(*(ushort *)(gen_frame + 0x15)) + 1,1);
      uVar2 = (*(ushort *)(gen_frame + 0x15));
      (*(uint *)(gen_frame + 0x8)) = uVar8;
      (*(uint *)(gen_frame + 0x4)) = uVar5;
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x15)) + 0)) = 0;
      (*(ushort *)(gen_frame + 0x15)) = uVar2 & 0xff00;
    }
    (*(uint *)(gen_frame + 0xc)) = iVar3 + 1U;
    (*(uint *)(gen_frame + 0x4)) = uVar5;
    F_00c46e20(uVar5,pbVar9,iVar3);
    *(undefined1 *)((*(uint *)(gen_frame + 0x4)) + iVar3) = 0;
    if ((char)param_3 == '\0') {
      uVar5 = F_0042bf40(param_1,&(*(uint *)(gen_frame + 0x4)),0);
      if (uVar5 != 0xffffffff) {
LAB_0042e063: ;
        if ((char)(*(ushort *)(gen_frame + 0x15)) == '\0') {
          F_00429760((*(uint *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x8)),0x33);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return uVar6;
      }
    }
    else {
      uVar5 = F_0042bf40(param_1,&(*(uint *)(gen_frame + 0x4)),0);
      if (uVar5 == 0xffffffff) goto LAB_0042e063;
    }
    if (uVar6 == 0) {
      if ((char)(*(ushort *)(gen_frame + 0x15)) == '\0') {
        F_00429760((*(uint *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x8)),0x33);
      }
      goto LAB_0042e110;
    }
    bVar1 = pbVar9[-1];
    while( true ) {
      uVar7 = uVar7 - 1;
      pbVar9 = pbVar9 + -1;
      if ((bVar1 & 0xc0) != 0x80) break;
      bVar1 = pbVar9[-1];
    }
    uVar6 = uVar6 - 1;
    if ((char)(*(ushort *)(gen_frame + 0x15)) == '\0') {
      F_00429760((*(uint *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x8)),0x33);
    }
    goto joined_r0x0042df5f;
  }
LAB_0042e110: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0xffffffff;
}

/* ref: FUN_0042e130 */
uint F_0042e130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e130u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042b300(param_2,0);
  F_0042c930(param_1,uVar1 + 1,1);
  uVar2 = F_0042b300(param_2,*param_1);
  *(undefined1 *)(uVar1 + *param_1) = 0;
  return uVar2;
}

/* ref: FUN_0042e170 */
uint F_0042e170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined2 *)((int)this + 0x10) = 0x101;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0x12);
  *(undefined1 *)((int)this + 0x12) = 0;
  uVar1 = F_0042b300(param_1,0);
  F_0042c930(this,uVar1 + 1,1);
  F_0042b300(param_1,*(undefined4 *)this);
  *(undefined1 *)(uVar1 + *(int *)this) = 0;
  return (uint)this;
}

/* ref: FUN_0042e1e0 */
uint F_0042e1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0x12);
  *(undefined2 *)((int)this + 0x10) = 0x101;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 *)((int)this + 0x12) = 0;
  uVar1 = *(undefined4 *)((int)this + 8);
  F_0042c930(this,param_1,1);
  *(undefined4 *)((int)this + 8) = uVar1;
  return (uint)this;
}

/* ref: FUN_0042e230 */
uint F_0042e230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined2 *)((int)this + 0x10) = 0x101;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0x12);
  *(undefined1 *)((int)this + 0x12) = 0;
  puVar2 = param_1;
  if (3 < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  uVar1 = F_0042afa0(puVar2,0);
  F_0042c930(this,uVar1 + 1,1);
  F_0042afa0(puVar2,*(undefined4 *)this);
  return (uint)this;
}

/* ref: FUN_0042e290 */
uint F_0042e290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined2 *)((int)this + 0x10) = 0x101;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0x12);
  *(undefined1 *)((int)this + 0x12) = 0;
  uVar1 = F_0042afa0(param_1,0);
  F_0042c930(this,uVar1 + 1,1);
  F_0042afa0(param_1,*(undefined4 *)this);
  return (uint)this;
}

/* ref: FUN_0042e2f0 */
uint F_0042e2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined2 *)((int)this + 0x10) = 0x101;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0x12);
  *(undefined1 *)((int)this + 0x12) = 0;
  puVar2 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  uVar1 = F_0042b300(puVar2,0);
  F_0042c930(this,uVar1 + 1,1);
  F_0042b300(puVar2,*(undefined4 *)this);
  *(undefined1 *)(uVar1 + *(int *)this) = 0;
  return (uint)this;
}

/* ref: FUN_0042e360 */
uint F_0042e360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042d4d0(this,param_1);
  return uVar1;
}

/* ref: FUN_0042e370 */
uint F_0042e370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  char * pcVar3;
  
  iVar2 = *(int *)((int)this + 8);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_0042c930(this,pcVar3 + (1 - (int)(param_1 + 1)) + iVar2 + -1,1);
  F_00c46e20(*(int *)this + -1 + iVar2,param_1,pcVar3 + (1 - (int)(param_1 + 1)))
  ;
  return (uint)this;
}

/* ref: FUN_0042e3c0 */
uint F_0042e3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042c930(this,*(int *)((int)this + 8) + 1,1);
  *((undefined1 *)GEN_TOP((*(int *)this + -2 + *(int *)((int)this + 8)))) = (undefined1)param_1;
  *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 8)))) = 0;
  return (uint)this;
}

/* ref: FUN_0042e3f0 */
uint F_0042e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042b300(param_1,0);
  F_0042c930(this,uVar1 + 1,1);
  uVar2 = F_0042b300(param_1,*(undefined4 *)this);
  *(undefined1 *)(uVar1 + *(int *)this) = 0;
  return uVar2;
}

/* ref: FUN_0042e430 */
uint F_0042e430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  F_0042c930(this,iVar3 + 1,1);
  uVar4 = F_00c46e20(*(undefined4 *)this,param_1,iVar3);
  *(undefined1 *)(iVar3 + *(int *)this) = 0;
  return uVar4;
}

/* ref: FUN_0042e480 */
uint F_0042e480(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x42e480u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x400,param_2,((undefined *)&gen_args[2]));
  param_1[2] = 1;
  *param_1 = (undefined1 *)((int)param_1 + 0x12);
  *(undefined2 *)(param_1 + 4) = 0x101;
  param_1[3] = 0;
  param_1[1] = 0x40;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  F_0042d080(param_1,((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return (uint)param_1;
}

/* ref: FUN_0042e500 */
uint F_0042e500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42e500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042dc30(this,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_0042e520 */
uint F_0042e520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42e520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042dc30(this,param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_0042e540 */
uint F_0042e540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42e540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042de70(this,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_0042e560 */
uint F_0042e560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42e560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042de70(this,param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_0042e580 */
uint F_0042e580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42e580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = F_0042b790(this);
  if (uVar4 < param_1) {
    uVar2 = *(undefined4 *)((int)this + 8);
    iVar7 = param_1 - uVar4;
    uVar4 = F_0042c930(this,param_1,1);
    *(undefined4 *)((int)this + 8) = uVar2;
    if ((char)param_2 != '\0') {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        uVar4 = *(uint *)((int)this + 4);
        uVar6 = *(int *)((int)this + 8) + 1;
        *(undefined1 *)((int)this + 0x10) = 0;
        if (uVar4 < uVar6) {
          uVar2 = *(undefined4 *)((int)this + 8);
          iVar3 = *(int *)this;
          uVar8 = *(int *)((int)this + 8) + 0x20U & 0xffffffe0;
          cVar1 = *(char *)((int)this + 0x11);
          uVar5 = F_004296a0(uVar8,0,0x33);
          if ((iVar3 != 0) && (F_00c46e20(uVar5,iVar3,uVar2), cVar1 == '\0')) {
            F_00429760(iVar3,uVar4,0x33);
          }
          *(uint *)this = uVar5;
          *(undefined1 *)((int)this + 0x11) = 0;
          *(uint *)((int)this + 4) = uVar8;
        }
        *(uint *)((int)this + 8) = uVar6;
        *(char *)(*(int *)this + -2 + uVar6) = (char)param_2;
        uVar4 = *(uint *)this;
        *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + -1 + uVar4))) = 0;
      }
    }
    return uVar4;
  }
  uVar4 = F_0042b9e0(this,param_1,0xffffffff);
  return uVar4;
}

/* ref: FUN_0042e670 */
uint F_0042e670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42e670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_c;
  
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  **(undefined1 * PTR32 *)this = 0;
  uVar2 = *(undefined4 *)((int)this + 8);
  F_0042c930(this,param_1,1);
  *(undefined4 *)((int)this + 8) = uVar2;
  if (param_1 != 0) {
    local_c = param_1;
    do {
      uVar3 = *(uint *)((int)this + 4);
      uVar6 = *(int *)((int)this + 8) + 1;
      *(undefined1 *)((int)this + 0x10) = 0;
      if (uVar3 < uVar6) {
        uVar2 = *(undefined4 *)((int)this + 8);
        iVar4 = *(int *)this;
        uVar7 = *(int *)((int)this + 8) + 0x20U & 0xffffffe0;
        cVar1 = *(char *)((int)this + 0x11);
        uVar5 = F_004296a0(uVar7,0,0x33);
        if (iVar4 != 0) {
          F_00c46e20(uVar5,iVar4,uVar2);
          if (cVar1 == '\0') {
            F_00429760(iVar4,uVar3,0x33);
          }
        }
        *(uint *)this = uVar5;
        *(undefined1 *)((int)this + 0x11) = 0;
        *(uint *)((int)this + 4) = uVar7;
      }
      local_c = local_c + -1;
      *(uint *)((int)this + 8) = uVar6;
      *(undefined1 *)(*(int *)this + -2 + uVar6) = (undefined1)param_2;
      *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 8)))) = 0;
    } while (local_c != 0);
  }
  return (uint)this;
}

/* ref: FUN_0042e750 */
uint F_0042e750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCSTR param_1 = (LPCSTR)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  LPWSTR * PTR32 * pppWVar1;
  LPCSTR pCVar2;
  int cchWideChar;
  LPWSTR * PTR32 * PTR32 * lpWideCharStr;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  *(undefined2 *)((int)this + 0x10) = 0x101;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0x12);
  *(undefined1 *)((int)this + 0x12) = 0;
  F_0042c930(this,1,1);
  **(undefined1 * PTR32 *)this = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return (uint)this;
  }
  pCVar2 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pCVar2 = *(LPCSTR *)param_1;
  }
  cchWideChar = gen_imp_MultiByteToWideChar(0,8,pCVar2,-1,(LPWSTR)0x0,0);
  pppWVar1 = ((LPWSTR * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
  if (cchWideChar != 0) {
    (*(undefined2 *)((char *)&((LPWSTR * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] + 0)) = 0;
    ((LPWSTR * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (LPWSTR * PTR32 *)((uint)pppWVar1 & 0xffff0000);
    (*(uint *)(gen_frame + 0x70)) = 7;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    if (cchWideChar == 0) {
      F_004020a0(((LPWSTR * PTR32 * PTR32 *)(gen_frame + 0x5c)),0,0xffffffff);
    }
    else {
      F_0042f630(((LPWSTR * PTR32 * PTR32 *)(gen_frame + 0x5c)),cchWideChar,0);
    }
    lpWideCharStr = (LPWSTR * PTR32 * PTR32 *)((LPWSTR * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
    if ((*(uint *)(gen_frame + 0x70)) < 8) {
      lpWideCharStr = ((LPWSTR * PTR32 * PTR32 *)(gen_frame + 0x5c));
    }
    pCVar2 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pCVar2 = *(LPCSTR *)param_1;
    }
    gen_imp_MultiByteToWideChar(0,8,pCVar2,-1,(LPWSTR)lpWideCharStr,cchWideChar);
    puVar3 = (undefined4 *)F_0042e2f0(((byte *)(gen_frame + 0x8)),((LPWSTR * PTR32 * PTR32 *)(gen_frame + 0x5c)));
    if (puVar3 != this) {
      F_0042c930(this,puVar3[2],1);
      F_00c46aa0(*(undefined4 *)this,*puVar3,*(undefined4 *)((int)this + 8));
      *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(puVar3 + 4);
      *(undefined4 *)((int)this + 0xc) = puVar3[3];
    }
    if (((byte *)(gen_frame + 0x8))[0x11] == 0) {
      F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),0x33);
    }
    if (7 < (*(uint *)(gen_frame + 0x70))) {
      F_00429760(((LPWSTR * PTR32 * PTR32 *)(gen_frame + 0x5c))[0],(*(uint *)(gen_frame + 0x70)) * 2 + 2,0x3d);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)this;
}

/* ref: FUN_0042e8c0 */
uint F_0042e8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 gen_out[0x4];
  undefined1 uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  uVar5 = uVar4;
  if (param_1 != this) {
    if (*(char *)((int)this + 0x11) == '\0') {
      if (*(char *)((int)param_1 + 0x11) == '\0') {
        iVar2 = *(int *)this;
        *(int *)this = *param_1;
        *param_1 = iVar2;
      }
      else {
        *param_1 = *(int *)this;
        F_00c46aa0((int)this + 0x12,(int)param_1 + 0x12,param_1[2]);
        *(int *)this = (int)this + 0x12;
      }
    }
    else if (*(char *)((int)param_1 + 0x11) == '\0') {
      *(int *)this = *param_1;
      F_00c46aa0((int)param_1 + 0x12,(int)this + 0x12,*(undefined4 *)((int)this + 8));
      *param_1 = (int)param_1 + 0x12;
    }
    else {
      piVar3 = param_1;
      if ((uint)param_1[2] <= *(uint *)((int)this + 8)) {
        piVar3 = this;
      }
      F_00430030((int)this + 0x12,(int)this + piVar3[2] + 0x12,(int)param_1 + 0x12);
    }
    iVar2 = *(int *)((int)this + 0xc);
    *(int *)((int)this + 0xc) = param_1[3];
    param_1[3] = iVar2;
    uVar1 = *(undefined1 *)((int)this + 0x10);
    *(char *)((int)this + 0x10) = (char)param_1[4];
    *(undefined1 *)(param_1 + 4) = uVar1;
    uVar1 = *(undefined1 *)((int)this + 0x11);
    *(undefined1 *)((int)this + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
    *(undefined1 *)((int)param_1 + 0x11) = uVar1;
    iVar2 = *(int *)((int)this + 4);
    *(int *)((int)this + 4) = param_1[1];
    param_1[1] = iVar2;
    uVar5 = *(uint *)((int)this + 8);
    *(int *)((int)this + 8) = param_1[2];
    param_1[2] = uVar5;
  }
  F_00c47745(uVar4 ^ (uint)(uint)(gen_out + 0x0));
  return uVar5;
}

/* ref: FUN_0042e9b0 */
unsigned int F_0042e9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42e9b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  char cVar2;
  undefined4 * this;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  char * pcVar6;
  undefined4 * puVar7;
  
  this = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[1])[4] = 0;
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if (7 < (uint)(*(undefined4 * PTR32 *)&gen_args[1])[5]) {
    puVar5 = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  }
  *(undefined2 *)puVar5 = 0;
  cVar2 = *(*(char * PTR32 *)&gen_args[0]);
  pcVar6 = (*(char * PTR32 *)&gen_args[0]);
  do {
    if (cVar2 == '\0') {
      return 0;
    }
    if (cVar2 == '\x02') {
      pcVar6 = pcVar6 + (byte)pcVar6[2] + 3;
    }
    else {
      uVar3 = F_0042b060(pcVar6,&(*(undefined4 * PTR32 *)&gen_args[1]));
      puVar5 = (*(undefined4 * PTR32 *)&gen_args[1]);
      pcVar6 = pcVar6 + uVar3;
      if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
        puVar5 = this;
        if (7 < (uint)this[5]) {
          puVar5 = (undefined4 *)*this;
        }
        iVar1 = (int)puVar5 + this[4] * 2;
        puVar5 = this;
        if (7 < (uint)this[5]) {
          puVar5 = (undefined4 *)*this;
        }
        if (iVar1 == 0) {
          puVar7 = (undefined4 *)0x2a;
          iVar4 = 0;
        }
        else {
          iVar4 = iVar1 - (int)((int)(uintptr_t)puVar5) >> 1;
          puVar7 = (undefined4 *)0x2a;
        }
      }
      else {
        if (((undefined4 *)0xd7fe < (*(undefined4 * PTR32 *)&gen_args[1])) &&
           (((*(undefined4 * PTR32 *)&gen_args[1]) < (undefined4 *)0xe000 || ((undefined4 *)0xffff < (*(undefined4 * PTR32 *)&gen_args[1]))))) {
          if ((*(undefined4 * PTR32 *)&gen_args[1]) + -0x4000 < (undefined4 *)0x100000) {
            F_00430060(this,(((uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x10) - 1 | 0xff60) << 6 |
                              (uint)(*(undefined4 * PTR32 *)&gen_args[1]) >> 10 & 0x3f);
            F_00430060(this,(uint)puVar5 & 0x3ff | 0xdc00);
          }
          goto LAB_0042eaca;
        }
        puVar5 = this;
        if (7 < (uint)this[5]) {
          puVar5 = (undefined4 *)*this;
        }
        iVar1 = (int)puVar5 + this[4] * 2;
        puVar5 = this;
        if (7 < (uint)this[5]) {
          puVar5 = (undefined4 *)*this;
        }
        iVar4 = 0;
        puVar7 = (*(undefined4 * PTR32 *)&gen_args[1]);
        if (iVar1 != 0) {
          iVar4 = iVar1 - (int)((int)(uintptr_t)puVar5) >> 1;
        }
      }
      F_0042f6f0(this,iVar4,1,puVar7);
    }
LAB_0042eaca: ;
    cVar2 = *pcVar6;
  } while( true );
}

/* ref: FUN_0042eae0 */
uint F_0042eae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42eae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = F_0042b790(this);
  uVar1 = param_1[4];
  uVar2 = uVar2 * 2;
  if (((uVar1 <= uVar2) && (param_1[5] != uVar2)) &&
     (uVar2 = F_00403370(param_1,uVar2,1), (char)uVar2 != '\0')) {
    param_1[4] = uVar1;
    puVar3 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    *(undefined2 *)((int)puVar3 + uVar1 * 2) = 0;
  }
  F_0042e9b0(*(undefined4 *)this,param_1);
  return (uint)param_1;
}

/* ref: FUN_0042eb40 */
uint F_0042eb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42eb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = F_0042b790(this);
  uVar1 = param_1[4];
  uVar2 = uVar2 * 2;
  if (((uVar1 <= uVar2) && (param_1[5] != uVar2)) &&
     (uVar2 = F_00403370(param_1,uVar2,1), (char)uVar2 != '\0')) {
    param_1[4] = uVar1;
    puVar3 = param_1;
    if (7 < param_1[5]) {
      puVar3 = (uint *)*param_1;
    }
    *(undefined2 *)((int)puVar3 + uVar1 * 2) = 0;
  }
  F_0042e9b0(*(undefined4 *)this,param_1);
  if (param_1[5] < 8) {
    return (uint)param_1;
  }
  return *param_1;
}

/* ref: FUN_0042ebb0 */
uint F_0042ebb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42ebb0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  param_2[4] = 0;
  puVar2 = param_2;
  if (3 < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  *puVar2 = 0;
  uVar3 = 0;
  uVar6 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  pcVar7 = param_1;
  if (*param_1 != '\0') {
    do {
      uVar3 = F_0042b060(pcVar7,((int *)(gen_frame + 0x4)) + uVar6);
      uVar6 = uVar6 + 1;
      pcVar7 = pcVar7 + uVar3;
      if (0xff < uVar6) {
        ((int *)(gen_frame + 0x4))[(int)(uVar6)] = 0;
        iVar5 = 0;
        piVar4 = ((int *)(gen_frame + 0x4));
        iVar1 = ((int *)(gen_frame + 0x4))[0];
        while (iVar1 != 0) {
          piVar4 = piVar4 + 1;
          iVar5 = iVar5 + 1;
          iVar1 = *piVar4;
        }
        F_0042fe20(param_2,((int *)(gen_frame + 0x4)),iVar5);
        uVar6 = 0;
      }
      uVar3 = (*(uint *)(gen_frame + 0x0)) + 1;
      (*(uint *)(gen_frame + 0x0)) = uVar3;
    } while (*pcVar7 != '\0');
    if (uVar6 != 0) {
      ((int *)(gen_frame + 0x4))[(int)(uVar6)] = 0;
      iVar5 = 0;
      piVar4 = ((int *)(gen_frame + 0x4));
      iVar1 = ((int *)(gen_frame + 0x4))[0];
      while (iVar1 != 0) {
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = *piVar4;
      }
      F_0042fe20(param_2,((int *)(gen_frame + 0x4)),iVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar3;
}

/* ref: FUN_0042eca0 */
uint F_0042eca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42eca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = F_0042b790(this);
  uVar1 = param_1[4];
  uVar3 = uVar3 * 2;
  if (((uVar1 <= uVar3) && (param_1[5] != uVar3)) &&
     (bVar2 = F_0042fa90(param_1,uVar3,1), bVar2 != 0)) {
    param_1[4] = uVar1;
    puVar4 = param_1;
    if (3 < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    puVar4[uVar1] = 0;
  }
  F_0042ebb0(*(undefined4 *)this,param_1);
  return (uint)param_1;
}

/* ref: FUN_0042ed00 */
uint F_0042ed00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42ed00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int iVar7;
  char * pcVar8;
  undefined4 * puVar9;
  
  pppuVar2 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 7;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar2 & 0xffff0000);
  uVar3 = F_0042b790(this);
  if ((uVar3 * 2 != 7) && (uVar3 = F_00403370(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3 * 2,1), (char)uVar3 != '\0')) {
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 8) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    *(undefined2 *)ppppuVar6 = 0;
  }
  F_0042e9b0(*(undefined4 *)this,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)));
  ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 8) {
    ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  iVar4 = gen_imp_WideCharToMultiByte(0,0,ppppuVar6,0xffffffff,0,0,0,0);
  if (iVar4 != 0) {
    pcVar5 = (char *)F_00406bb0(iVar4 + 1,0,0);
    pcVar5[iVar4] = '\0';
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 8) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    iVar7 = gen_imp_WideCharToMultiByte(0,0,ppppuVar6,0xffffffff,pcVar5,iVar4,0,0);
    if (iVar7 != 0) {
      pcVar5[iVar4] = '\0';
      pcVar8 = pcVar5;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_004300e0(param_1,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    }
    F_00406b30(pcVar5);
  }
  puVar9 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar9 = (undefined4 *)*param_1;
  }
  if (7 < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) * 2 + 2,0x3d);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)puVar9;
}

/* ref: FUN_0042ee30 */
uint F_0042ee30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42ee30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    for (uVar1 = param_3 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = CONCAT22((undefined2)param_2,(undefined2)param_2);
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = (uint)((param_3 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar2 = (undefined2)param_2;
      puVar2 = (undefined4 *)((int)puVar2 + 2);
    }
    return (uint)param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_0042eea0 */
uint F_0042eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte * pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)*param_1;
  uVar2 = F_0042ad20((uint)*pbVar1);
  *param_1 = pbVar1 + uVar2;
  *param_2 = *param_2 + 1;
  return (uint)param_2;
}

/* ref: FUN_0042eed0 */
uint F_0042eed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42eed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x33);
  return uVar1;
}

/* ref: FUN_0042eef0 */
uint F_0042eef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42eef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x33);
  return (uint)uVar1;
}

/* ref: FUN_0042ef70 */
uint F_0042ef70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42ef70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  return (uint)param_2;
}

/* ref: FUN_0042ef90 */
byte F_0042ef90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42ef90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (3 < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (3 < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0x10) * 4)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0042efd0 */
uint F_0042efd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42efd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x3c);
  return uVar1;
}

/* ref: FUN_0042eff0 */
uint F_0042eff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42eff0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x3c);
  return (uint)uVar1;
}

/* ref: FUN_0042f020 */
unsigned int F_0042f020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    iVar2 = param_3;
    do {
      *((undefined4 *)GEN_TOP(((param_1 - (int)param_2) + (int)puVar1))) = *puVar1;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0042f050 */
byte F_0042f050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f050u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_1 == *param_2;
}

/* ref: FUN_0042f0c0 */
uint F_0042f0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 2;
  return (uint)this;
}

/* ref: FUN_0042f0f0 */
uint F_0042f0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x3f);
  return uVar1;
}

/* ref: FUN_0042f110 */
uint F_0042f110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x3f);
  return (uint)uVar1;
}

/* ref: FUN_0042f150 */
uint F_0042f150(unsigned int gen_a0)
{
  GEN_ENTER(0x42f150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0042f160 */
uint F_0042f160(unsigned int gen_a0)
{
  GEN_ENTER(0x42f160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0042f170 */
uint F_0042f170(unsigned int gen_a0)
{
  GEN_ENTER(0x42f170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0042f180 */
uint F_0042f180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  
  if (param_2 != 0) {
    puVar2 = param_1;
    for (uVar1 = param_2 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = CONCAT22((undefined2)param_3,(undefined2)param_3);
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = (uint)((param_2 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar2 = (undefined2)param_3;
      puVar2 = (undefined4 *)((int)puVar2 + 2);
    }
    return (uint)param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_0042f1c0 */
byte F_0042f1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x42f1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return ((byte)param_1 & 0xc0) == 0x80;
}

/* ref: FUN_0042f1f0 */
uint F_0042f1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f1f0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  
  puVar1 = param_1;
  if (*param_1 < *param_2) {
    puVar1 = param_2;
  }
  return (uint)puVar1;
}

/* ref: FUN_0042f210 */
uint F_0042f210(unsigned int gen_a0)
{
  GEN_ENTER(0x42f210u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0042f220 */
uint F_0042f220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f220u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  
  *param_1 = *param_1 + -1;
  *param_2 = *param_2 + -1;
  bVar1 = *(byte *)*param_1;
  while ((bVar1 & 0xc0) == 0x80) {
    *param_1 = *param_1 + -1;
    *param_2 = *param_2 + -1;
    bVar1 = *(byte *)*param_1;
  }
  *param_3 = *param_3 + -1;
  return (uint)param_3;
}

/* ref: FUN_0042f260 */
uint F_0042f260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f260u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  
  *param_1 = *param_1 + -1;
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  while ((bVar1 & 0xc0) == 0x80) {
    pbVar2 = pbVar2 + -1;
    *param_1 = (int)pbVar2;
    bVar1 = *pbVar2;
  }
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_0042f2a0 */
uint F_0042f2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (7 < *(uint *)((int)this + 0x14)) {
    return *(int *)this + param_1 * 2;
  }
  return (uint)(undefined *)((int)this + param_1 * 2);
}

/* ref: FUN_0042f2c0 */
uint F_0042f2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (7 < *(uint *)((int)this + 0x14)) {
    return *(int *)this + param_1 * 2;
  }
  return (uint)(undefined *)((int)this + param_1 * 2);
}

/* ref: FUN_0042f2f0 */
uint F_0042f2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  in_ecx[4] = param_2;
  if (3 < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  in_ecx[param_2] = 0;
  return param_2;
}

/* ref: FUN_0042f320 */
unsigned int F_0042f320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (3 < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_0042f020(this,uVar1,param_2);
    }
    F_00429760(uVar1,*(int *)((int)this + 0x14) * 4 + 4,0x3c);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 3;
  *(undefined4 *)((int)this + param_2 * 4) = 0;
  return 0;
}

/* ref: FUN_0042f380 */
int F_0042f380(unsigned int gen_a0)
{
  GEN_ENTER(0x42f380u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = 0;
  iVar1 = *param_1;
  piVar3 = param_1;
  while (iVar1 != 0) {
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
    iVar1 = *piVar3;
  }
  return iVar2;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_0042f3a0 */
uint F_0042f3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *(undefined1 *)((int)in_ecx + param_2) = 0;
  return param_2;
}

/* ref: FUN_0042f3c0 */
byte F_0042f3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar1)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0042f400 */
uint F_0042f400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42f400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  if (param_2 == 1) {
    if (7 < *(uint *)((int)this + 0x14)) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined2 *)((int)this + param_1 * 2) = (undefined2)param_3;
    return (uint)this;
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  puVar2 = (uint *)((int)this + param_1 * 2);
  if (param_2 != 0) {
    this = ((undefined *)GEN_TOP(CONCAT22((undefined2)param_3,(undefined2)param_3)));
    for (uVar1 = param_2 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = (uint)this;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = (uint)((param_2 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar2 = (undefined2)param_3;
      puVar2 = (uint *)((int)puVar2 + 2);
    }
  }
  return (uint)this;
}

/* ref: FUN_0042f460 */
uint F_0042f460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 2;
  return (uint)this;
}

/* ref: FUN_0042f480 */
uint F_0042f480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0042f490 */
uint F_0042f490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f490u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 1;
}

/* ref: FUN_0042f4a0 */
uint F_0042f4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f4a0u, gen_a0, gen_a1, gen_a2, 0u);
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
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_1,(int)pvVar1 + uVar5 + param_1,uVar2 - uVar5)
    ;
    iVar3 = *(int *)((int)this + 0x10) - uVar5;
    *(int *)((int)this + 0x10) = iVar3;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + iVar3) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + iVar3) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0042f540 */
unsigned int F_0042f540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2);
    }
    F_00429760(uVar1,*(int *)((int)this + 0x14) + 1,0x3f);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)(param_2 + (int)this) = 0;
  return 0;
}

/* ref: FUN_0042f590 */
uint F_0042f590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0042f5b0 */
uint F_0042f5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0042f5d0 */
uint F_0042f5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0042f630 */
uint F_0042f630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x10);
  if (-iVar2 - 1U <= param_1) {
                    
    F_00c4579a("string too long");
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_004031e0(this,uVar1,iVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (7 < *(uint *)((int)this + 0x14)) {
        **(undefined2 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined2 *)this = 0;
      return (uint)this;
    }
    F_0042f400(this,*(undefined4 *)((int)this + 0x10),param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar1;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + uVar1 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + uVar1 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0042f6f0 */
uint F_0042f6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42f6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  if (-uVar2 - 1 <= param_2) {
                    
    F_00c4579a("string too long");
  }
  if (param_2 != 0) {
    uVar1 = uVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_004031e0(this,uVar1,uVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (*(uint *)((int)this + 0x14) < 8) {
        *(undefined2 *)this = 0;
        return (uint)this;
      }
      **(undefined2 * PTR32 *)this = 0;
      return (uint)this;
    }
    pvVar4 = this;
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46e20(((undefined *)GEN_TOP(((int)pvVar4 + (param_1 + param_2) * 2))),(undefined *)((int)pvVar3 + param_1 * 2),
               (*(int *)((int)this + 0x10) - param_1) * 2);
    F_0042f400(this,param_1,param_2,param_3);
    *(uint *)((int)this + 0x10) = uVar1;
    if (7 < *(uint *)((int)this + 0x14)) {
      *(undefined2 *)(*(int *)this + uVar1 * 2) = 0;
      return (uint)this;
    }
    *(undefined2 *)((int)this + uVar1 * 2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0042f7f0 */
uint F_0042f7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f7f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 == 0) {
    return 0;
  }
  return param_1 - param_2 >> 1;
}

/* ref: FUN_0042f810 */
uint F_0042f810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar6 = param_1 | 3;
  uVar7 = param_1;
  if (uVar6 != 0xffffffff) {
    uVar2 = *(uint *)((int)this + 0x14);
    uVar3 = uVar2 >> 1;
    uVar7 = uVar6;
    if ((uVar6 / 3 < uVar3) && (uVar7 = uVar3 + uVar2, -uVar3 - 2 < uVar2)) {
      uVar7 = 0xfffffffe;
    }
  }
  uVar6 = F_004296a0(uVar7 * 4 + 4,0,0x3c);
  if (param_2 != 0) {
    puVar1 = this;
    if (3 < *(uint *)((int)this + 0x14)) {
      puVar1 = *(undefined4 * PTR32 *)this;
    }
    iVar5 = uVar6 - (int)puVar1;
    iVar4 = param_2;
    do {
      *(undefined4 *)(iVar5 + (int)puVar1) = *puVar1;
      puVar1 = puVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = *(uint *)((int)this + 0x14);
  if (3 < uVar2) {
    uVar8 = F_00429760(*(undefined4 *)this,uVar2 * 4 + 4,0x3c);
    uVar2 = (uint)uVar8;
  }
  *(undefined4 *)this = 0;
  *(uint *)this = uVar6;
  *(uint *)((int)this + 0x14) = uVar7;
  *(int *)((int)this + 0x10) = param_2;
  if (uVar7 < 4) {
    *(undefined4 *)((int)this + param_2 * 4) = 0;
    return uVar2;
  }
  *(undefined4 *)(uVar6 + param_2 * 4) = 0;
  return uVar2;
}

/* ref: FUN_0042f8e0 */
uint F_0042f8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0042f8f0 */
uint F_0042f8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 2;
  return (uint)param_1;
}

/* ref: FUN_0042f910 */
uint F_0042f910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42f910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 | 0xf;
  uVar5 = param_1;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    uVar5 = uVar4;
    if ((uVar4 / 3 < uVar2) && (uVar5 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      uVar5 = 0xfffffffe;
    }
  }
  uVar4 = F_004296a0(uVar5 + 1,0,0x3f);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x3f);
  }
  *(undefined1 *)this = 0;
  *(uint *)this = uVar4;
  *(uint *)((int)this + 0x14) = uVar5;
  *(int *)((int)this + 0x10) = param_2;
  if (uVar5 < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return uVar4;
  }
  *(undefined1 *)(uVar4 + param_2) = 0;
  return uVar4;
}

/* ref: FUN_0042f9d0 */
uint F_0042f9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0042f9f0 */
uint F_0042f9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42f9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x10);
  uVar2 = param_1;
  if ((uVar1 <= param_1) && (*(uint *)((int)this + 0x14) != param_1)) {
    uVar2 = F_00403370(this,param_1,1);
    if ((char)uVar2 != '\0') {
      *(uint *)((int)this + 0x10) = uVar1;
      if (7 < *(uint *)((int)this + 0x14)) {
        this = *(undefined * PTR32 *)this;
      }
      uVar2 = 0;
      *(undefined2 *)((int)this + uVar1 * 2) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_0042fa30 */
uint F_0042fa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42fa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (7 < *(uint *)((int)this + 0x14)) {
    *param_1 = *(int *)this + *(int *)((int)this + 0x10) * 2;
    return (uint)param_1;
  }
  *param_1 = (int)((int)this + *(int *)((int)this + 0x10) * 2);
  return (uint)param_1;
}

/* ref: FUN_0042fa60 */
uint F_0042fa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42fa60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 <= *(uint *)((int)this + 0x10)) {
    uVar1 = F_004020a0(this,param_1,0xffffffff);
    return uVar1;
  }
  uVar1 = F_0042f630(this,param_1 - *(uint *)((int)this + 0x10),param_2);
  return uVar1;
}

/* ref: FUN_0042fa90 */
byte F_0042fa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42fa90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < param_1) {
    F_0042f810(this,param_1,*(undefined4 *)((int)this + 0x10));
    return param_1 != 0;
  }
  if (((char)param_2 != '\0') && (param_1 < 4)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if (param_1 < uVar3) {
      uVar3 = param_1;
    }
    if (3 < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_0042f020(this,uVar2,uVar3);
      }
      F_00429760(uVar2,*(int *)((int)this + 0x14) * 4 + 4,0x3c);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 3;
    *(undefined4 *)((int)this + uVar3 * 4) = 0;
    return param_1 != 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (3 < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined4 *)this = 0;
  }
  return param_1 != 0;
}

/* ref: FUN_0042fb50 */
uint F_0042fb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42fb50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (7 < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0042fb70 */
uint F_0042fb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42fb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < param_1) {
    F_0042f910(this,param_1,*(undefined4 *)((int)this + 0x10));
    return (uint)(param_1 != 0);
  }
  if (((char)param_2 != '\0') && (param_1 < 0x10)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if (param_1 < uVar3) {
      uVar3 = param_1;
    }
    if (0xf < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_00c46aa0(this,uVar2,uVar3);
      }
      F_00429760(uVar2,*(int *)((int)this + 0x14) + 1,0x3f);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined1 *)(uVar3 + (int)this) = 0;
    return (uint)(param_1 != 0);
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined1 *)this = 0;
  }
  return (uint)(param_1 != 0);
}

/* ref: FUN_0042fc30 */
uint F_0042fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42fc30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_0042f810(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (3 < *(uint *)((int)this + 0x14)) {
        **(undefined4 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined4 *)this = 0;
      return (uint)this;
    }
    puVar4 = param_1;
    if (3 < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    pvVar3 = this;
    if (3 < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_0042f020(((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 4))),puVar4 + param_2,uVar5);
    *(uint *)((int)this + 0x10) = uVar2;
    if (3 < *(uint *)((int)this + 0x14)) {
      *(undefined4 *)(*(int *)this + uVar2 * 4) = 0;
      return (uint)this;
    }
    *(undefined4 *)((int)this + uVar2 * 4) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0042fd30 */
unsigned int F_0042fd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42fd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 uVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar2 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 1) {
    uVar1 = *puVar3;
    *puVar3 = *puVar2;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

/* ref: FUN_0042fd60 */
uint F_0042fd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42fd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 <= *(uint *)((int)this + 0x10)) {
    uVar1 = F_004020a0(this,param_1,0xffffffff);
    return uVar1;
  }
  uVar1 = F_0042f630(this,param_1 - *(uint *)((int)this + 0x10),0);
  return uVar1;
}

/* ref: FUN_0042fd90 */
byte F_0042fd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x42fd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0x10);
  uVar3 = param_1;
  if ((uVar1 <= param_1) && (*(uint *)((int)this + 0x14) != param_1)) {
    bVar2 = F_0042fa90(this,param_1,1);
    uVar3 = (uint)bVar2;
    if (bVar2 != 0) {
      *(uint *)((int)this + 0x10) = uVar1;
      if (3 < *(uint *)((int)this + 0x14)) {
        this = *(undefined * PTR32 *)this;
      }
      *(undefined4 *)((int)this + uVar1 * 4) = 0;
    }
  }
  return (byte)uVar3;
}

/* ref: FUN_0042fdd0 */
uint F_0042fdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42fdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 - (int)((int)(uintptr_t)pvVar1) >> 1;
  }
  F_0042f6f0(this,iVar2,1,param_3);
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  *param_1 = (int)((int)this + iVar2 * 2);
  return (uint)param_1;
}

/* ref: FUN_0042fe20 */
uint F_0042fe20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x42fe20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this + 0x14);
    pvVar3 = this;
    if (3 < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (3 < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 4)))) {
        pvVar3 = this;
        if (3 < uVar2) {
          pvVar3 = *(undefined * PTR32 *)this;
        }
        uVar2 = F_0042fc30(this,this,(int)param_1 - (int)((int)(uintptr_t)pvVar3) >> 2,param_2);
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
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_0042f810(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (3 < *(uint *)((int)this + 0x14)) {
        **(undefined4 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined4 *)this = 0;
      return (uint)this;
    }
    pvVar3 = this;
    if (3 < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_0042f020(((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 4))),param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar2;
    if (3 < *(uint *)((int)this + 0x14)) {
      *(undefined4 *)(*(int *)this + uVar2 * 4) = 0;
      return (uint)this;
    }
    *(undefined4 *)((int)this + uVar2 * 4) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0042ff40 */
uint F_0042ff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x42ff40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_0042f4a0(this,uVar3 + param_2,0xffffffff);
    F_0042f4a0(this,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar3) {
    F_0042f910(this,uVar3,*(undefined4 *)((int)this + 0x10));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar1,(int)puVar2 + param_2,uVar3);
  *(uint *)((int)this + 0x10) = uVar3;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + uVar3) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + uVar3) = 0;
  return (uint)this;
}

/* ref: FUN_00430030 */
unsigned int F_00430030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x430030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 uVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar2 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 1) {
    uVar1 = *puVar3;
    *puVar3 = *puVar2;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00430054 */
unsigned int F_00430054(void)
{
  GEN_ENTER(0x430054u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_0043005f */
unsigned int F_0043005f(void)
{
  GEN_ENTER(0x43005fu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00430060 */
uint F_00430060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x430060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar1 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0x10) * 2)));
  pvVar3 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_0042f6f0(this,(int)pvVar1 - (int)((int)(uintptr_t)pvVar3) >> 1,1,param_1);
    return uVar2;
  }
  uVar2 = F_0042f6f0(this,0,1,param_1);
  return uVar2;
}

/* ref: FUN_004300b0 */
uint F_004300b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4300b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *param_1;
  piVar2 = param_1;
  while (iVar1 != 0) {
    piVar2 = piVar2 + 1;
    iVar4 = iVar4 + 1;
    iVar1 = *piVar2;
  }
  uVar3 = F_0042fe20(this,param_1,iVar4);
  return uVar3;
}

/* ref: FUN_004300e0 */
uint F_004300e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4300e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_0042ff40(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_0042ff40(this,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_0042f910(this,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return (uint)this;
}

/* ref: FUN_004301e0 */
uint F_004301e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4301e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *param_1;
  piVar2 = param_1;
  while (iVar1 != 0) {
    piVar2 = piVar2 + 1;
    iVar4 = iVar4 + 1;
    iVar1 = *piVar2;
  }
  uVar3 = F_0042fe20(this,param_1,iVar4);
  return uVar3;
}

/* ref: FUN_00430210 */
uint F_00430210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x430210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_004300e0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00430240 */
uint F_00430240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x430240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_004300e0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00430270 */
byte F_00430270(unsigned int gen_a0)
{
  GEN_ENTER(0x430270u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_GetFileAttributesW(param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00430290 */
uint F_00430290(unsigned int gen_a0)
{
  GEN_ENTER(0x430290u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  BOOL BVar1;
  
  BVar1 = gen_imp_CreateDirectoryW(param_1,(GEN_LPANY)0x0);
  return (uint)(BVar1 != 0);
}

/* ref: FUN_004302b0 */
uint F_004302b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4302b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  char * pcVar1;
  int iVar2;
  LPCWSTR lpFilename;
  char cVar3;
  short sVar4;
  int iVar5;
  char * pcVar6;
  short * psVar7;
  LPCWSTR pWVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  lpFilename = (LPCWSTR)((int)this + 0x1490);
  if (*(short *)((int)this + 0x1490) == 0) {
    iVar5 = F_00c4b813(((char *)REFP(0x12fa250)),"/*****ff14******",0x10);
    if (iVar5 == 0) {
      pcVar6 = ((char *)REFP(0x12fa250)) + 0x10;
      cVar3 = ((char *)REFP(0x12fa250))[0x10];
      while (cVar3 != '\0') {
        if (*pcVar6 == '*') {
          *pcVar6 = '\0';
          break;
        }
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar3 = *pcVar1;
      }
    }
    iVar5 = -1;
    gen_imp_GetModuleFileNameW((HMODULE)0x0,lpFilename,0x104);
    psVar7 = (short *)((int)this + 0x1492);
    iVar9 = 2;
    do {
      sVar4 = psVar7[-1];
      if (sVar4 == 0) break;
      if ((sVar4 == 0x5c) || (sVar4 == 0x2f)) {
        iVar5 = iVar9 + -2;
      }
      sVar4 = *psVar7;
      if (sVar4 == 0) break;
      if ((sVar4 == 0x5c) || (sVar4 == 0x2f)) {
        iVar5 = iVar9 + -1;
      }
      sVar4 = psVar7[1];
      if (sVar4 == 0) break;
      if ((sVar4 == 0x5c) || (sVar4 == 0x2f)) {
        iVar5 = iVar9;
      }
      sVar4 = psVar7[2];
      if (sVar4 == 0) break;
      if ((sVar4 == 0x5c) || (sVar4 == 0x2f)) {
        iVar5 = iVar9 + 1;
      }
      sVar4 = psVar7[3];
      if (sVar4 == 0) break;
      if ((sVar4 == 0x5c) || (sVar4 == 0x2f)) {
        iVar5 = iVar9 + 2;
      }
      iVar2 = iVar9 + 3;
      psVar7 = psVar7 + 5;
      iVar9 = iVar9 + 5;
    } while (iVar2 < 0x104);
    F_00c4bd50(&(*(undefined * PTR32 *)(gen_frame + 0x8)),lpFilename,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x108cc74)))));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
      F_00c48f5e(((undefined1 *)(gen_frame + 0x104)),0x40,1,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      F_00c4bbff((*(undefined * PTR32 *)(gen_frame + 0x8)),(*(long *)(gen_frame + 0x140)),0);
      F_00c48f5e(((undefined1 *)(gen_frame + 0xc)),0xf8,1,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x14));
      F_00c4b948(&(*(undefined4 *)(gen_frame + 0x144)),&(*(undefined4 *)(gen_frame + 0x4)));
      F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x40,"%04d/%02d/%02d %02d:%02d:%02d",(*(int *)(gen_frame + 0x158)) + 0x76c,(*(int *)(gen_frame + 0x154)) + 1,
                 (*(undefined4 *)(gen_frame + 0x150)),(*(undefined4 *)(gen_frame + 0x14c)),(*(undefined4 *)(gen_frame + 0x148)),(*(undefined4 *)(gen_frame + 0x144)));
    }
    if (iVar5 != -1) {
      *(undefined2 *)((int)this + iVar5 * 2 + 0x1490) = 0;
    }
    iVar5 = gen_imp_lstrlenW(lpFilename);
    pWVar8 = lpFilename;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*pWVar8 == L'\\') {
        *pWVar8 = L'/';
      }
      pWVar8 = pWVar8 + 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return (uint)lpFilename;
}

/* ref: FUN_004304a0 */
uint F_004304a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4304a0u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  wchar_t * _Dst;
  undefined * PTR32 * ppuVar1;
  
  _Dst = (wchar_t *)(&REFG(undefined, 0x1371108) + in_eax * 0x208);
  if (in_eax == 2) {
    ppuVar1 = (*(undefined * PTR32 (*)[6])REFP(0x108cc9c));
  }
  else {
    ppuVar1 = (*(undefined * PTR32 (*)[8])REFP(0x108cccc));
  }
  F_00c4a8e0(_Dst,0x104,(wchar_t *)ppuVar1);
  F_00c4b8d3(_Dst,0x104,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x108cd00)))));
  if ((char)param_2 == '\0') {
    ppuVar1 = (*(undefined * PTR32 (*)[4])REFP(0x108cd28));
  }
  else {
    ppuVar1 = (*(undefined * PTR32 (*)[6])REFP(0x108cd0c));
  }
  F_00c4b8d3(_Dst,0x104,(wchar_t *)ppuVar1);
  F_00c4b8d3(_Dst,0x104,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x108cd3c)))));
  return (uint)_Dst;
}

/* ref: FUN_00430520 */
uint F_00430520(unsigned int gen_a0)
{
  GEN_ENTER(0x430520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x12fd37c))[param_1];
}

/* ref: FUN_00430540 */
uint F_00430540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x430540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  wchar_t * param_3 = (wchar_t *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  wchar_t * pwVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  pwVar1 = (wchar_t *)F_004302b0(this);
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x0)),param_2,pwVar1);
  uVar2 = gen_imp_lstrlenW(((wchar_t *)(gen_frame + 0x0)));
  *param_1 = L'\0';
  uVar4 = uVar2;
  if (-1 < (int)uVar2) {
    pwVar1 = param_1 + uVar2;
    uVar4 = (int)((wchar_t *)(gen_frame + 0x0)) - (int)param_1;
    do {
      if (*(short *)(uVar4 + (int)pwVar1) == 0x2f) {
        F_00c4983b(param_1,param_2,((wchar_t *)(gen_frame + 0x0)),uVar2);
        *pwVar1 = L'\0';
        F_00c4b8d3(param_1,param_2,param_3);
        DVar3 = gen_imp_GetFileAttributesW(param_1);
        if ((DVar3 != 0xffffffff) && ((DVar3 & 0x10) != 0)) goto LAB_004305f7;
      }
      pwVar1 = pwVar1 + -1;
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
  }
  *param_1 = L'\0';
  DVar3 = uVar4;
LAB_004305f7: ;
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return DVar3;
}

/* ref: FUN_00430610 */
byte F_00430610(unsigned int gen_a0)
{
  GEN_ENTER(0x430610u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  bool bVar4;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  DVar1 = gen_imp_GetFileAttributesW(param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
    return 1;
  }
  BVar2 = gen_imp_CreateDirectoryW(param_1,0);
  bVar4 = BVar2 != 0;
  if (!bVar4) {
    F_00c4a8e0(((wchar_t *)(gen_frame + 0x0)),0x104,param_1);
    iVar3 = gen_imp_lstrlenW(((wchar_t *)(gen_frame + 0x0)));
    if (-1 < iVar3) {
      while (((wchar_t *)(gen_frame + 0x0))[(int)(iVar3)] != L'/') {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
          return 0;
        }
      }
      ((wchar_t *)(gen_frame + 0x0))[(int)(iVar3)] = L'\0';
      F_00430610(((wchar_t *)(gen_frame + 0x0)));
      BVar2 = gen_imp_CreateDirectoryW(param_1,0);
      bVar4 = BVar2 != 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return bVar4;
}

/* ref: FUN_004306f0 */
uint F_004306f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4306f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  wchar_t * _Dst;
  byte bVar1;
  wchar_t * _Src;
  DWORD DVar2;
  uint uVar3;
  int in_eax;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  in_eax = param_1;
  if (param_1 == 0) {
    in_eax = 1;
  }
  _Dst = (wchar_t *)(in_eax * 0x208 + 0x1698 + (int)this);
  if (*(short *)(in_eax * 0x208 + 0x1698 + (int)this) == 0) {
    _Src = (wchar_t *)F_004302b0(this);
    F_00c4a8e0(((wchar_t *)(gen_frame + 0x10)),0x104,_Src);
    gen_imp_lstrlenW(((wchar_t *)(gen_frame + 0x10)));
    F_00c4b8d3(((wchar_t *)(gen_frame + 0x10)),0x104,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[3])REFP(0x108cd58)))));
    DVar2 = gen_imp_GetFileAttributesW(((wchar_t *)(gen_frame + 0x10)));
    if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
      uVar3 = F_00414500(*(undefined4 *)((int)this + 0x10),4);
      F_004142d0(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(uVar3 + 0x14));
      bVar1 = F_00414450(((undefined1 *)(gen_frame + 0xc)));
      uVar3 = F_004304a0(in_eax,(uint)bVar1);
      F_00430540(this,_Dst,0x104,uVar3);
    }
    else {
      F_00c4a8e0(_Dst,0x104,((wchar_t *)(gen_frame + 0x10)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return (uint)_Dst;
}

/* ref: FUN_00430800 */
uint F_00430800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x430800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar2;
  
  uVar2 = 1;
  *(undefined4 *)((int)this + 0x1284) = param_1;
  this_00 = (undefined *)F_00414500(*(undefined4 *)((int)this + 0x14),0x13);
  bVar1 = F_00414a40(this_00,param_1,uVar2);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00430830 */
uint F_00430830(unsigned int gen_a0)
{
  GEN_ENTER(0x430830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  wchar_t * _Dst;
  wchar_t * _Src;
  DWORD DVar1;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  _Dst = (wchar_t *)((int)this + 0x20c0);
  if (*(short *)((int)this + 0x20c0) == 0) {
    _Src = (wchar_t *)F_004302b0(this);
    F_00c4a8e0(((wchar_t *)(gen_frame + 0x0)),0x104,_Src);
    F_00c4b8d3(((wchar_t *)(gen_frame + 0x0)),0x104,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[3])REFP(0x108cec0)))));
    DVar1 = gen_imp_GetFileAttributesW(((wchar_t *)(gen_frame + 0x0)));
    if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
      F_00c4a8e0(_Dst,0x104,((wchar_t *)(gen_frame + 0x0)));
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
      return (uint)_Dst;
    }
    F_00430540(this,_Dst,0x104,(*(undefined * PTR32 (*)[8])REFP(0x108ced0)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return (uint)_Dst;
}

/* ref: FUN_004308f0 */
uint F_004308f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4308f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  wchar_t * _Dst;
  byte bVar1;
  wchar_t * pwVar2;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  _Dst = (wchar_t *)((int)this + 0x1cb0);
  if (*(short *)((int)this + 0x1cb0) == 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x8)));
    bVar1 = F_00420900(((undefined1 *)(gen_frame + 0x8)));
    if (bVar1 != 0) {
      F_0042e370(((undefined1 *)(gen_frame + 0x8)),"/My Games/");
      F_0042e370(((undefined1 *)(gen_frame + 0x8)),REFG(undefined * PTR32, 0x12fd394));
      (*(uint *)(gen_frame + 0x70)) = 7;
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)) + 0)) = L'\0';
      (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = ((wchar_t *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)) + 2)) << 0x10)));
      F_0042eae0(((undefined1 *)(gen_frame + 0x8)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)));
      pwVar2 = (*(wchar_t * PTR32 *)(gen_frame + 0x5c));
      if ((*(uint *)(gen_frame + 0x70)) < 8) {
        pwVar2 = (wchar_t *)&(*(wchar_t * PTR32 *)(gen_frame + 0x5c));
      }
      F_00c4a8e0(_Dst,0x104,pwVar2);
      F_00430610(_Dst);
      if (7 < (*(uint *)(gen_frame + 0x70))) {
        F_00429760((*(wchar_t * PTR32 *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x70)) * 2 + 2,0x3d);
      }
      pwVar2 = (*(wchar_t * PTR32 *)(gen_frame + 0x5c));
      (*(uint *)(gen_frame + 0x70)) = 7;
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)) + 0)) = L'\0';
      (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = (wchar_t *)((uint)pwVar2 & 0xffff0000);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)_Dst;
}

/* ref: FUN_004309e0 */
uint F_004309e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4309e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414500(in_ecx,4);
  F_004142d0(param_2,*(undefined4 *)(uVar1 + 0x14));
  return param_2;
}

/* ref: FUN_00430a00 */
unsigned int F_00430a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, ...)
{
  GEN_ENTER(0x430a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[37];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  { va_list gen_va; va_start(gen_va, gen_a4);
    for (int gen_i = 5; gen_i < 37; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char * param_5 = (char *)(uintptr_t)gen_a4;
  char * pcVar1;
  char * pcVar2;
  
  F_00c472af(&REFG(undefined, 0x1371f28),0x400,"%s(%d):Assertion %s %s",param_2,param_4,param_3,param_1);
  REFG(undefined * PTR32, 0x136fc04) = &REFG(undefined, 0x1371f28);
  if (param_5 == (char *)0x0) {
    REFG(undefined1, 0x1371728) = 0;
  }
  else {
    F_00c475c9(&REFG(undefined1, 0x1371728),0x800,param_5,((undefined *)&gen_args[5]));
    pcVar1 = &REFG(undefined1, 0x1371728);
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    if ((pcVar2 + -0x1371729 < (char *)0x3fe) && (pcVar2[-1] != '\n')) {
      *pcVar2 = '\n';
      pcVar2[1] = '\0';
    }
  }
  REFG(undefined1 * PTR32, 0x136fc08) = &REFG(undefined1, 0x1371728);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return 0;
}

/* ref: FUN_00430b20 */
byte F_00430b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x430b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  int * piVar2;
  undefined * puVar3;
  char * pcVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  puVar3 = *(undefined * PTR32 *)((int)this + 8);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = &REFG(undefined, 0x108cf50);
  }
  F_00c472af(((char *)(gen_frame + 0x8)),0x100,&REFG(undefined, 0x108cf54),param_1,puVar3);
  piVar2 = *(int * PTR32 *)((int)this + 4);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = (int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1);
  if ((uint)(piVar2[2] + 1 + iVar5) < (uint)piVar2[1]) {
    F_00c46aa0(*piVar2 + piVar2[2],((char *)(gen_frame + 0x8)),iVar5);
    piVar2[2] = piVar2[2] + iVar5;
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: FUN_00430bd0 */
unsigned int F_00430bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x430bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00430be0 */
unsigned int F_00430be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x430be0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  LPCSTR param_2 = (LPCSTR)gen_a1;
  if ((param_1 & REFG(undefined4, 0x12fd39c)) != 0) {
    gen_imp_OutputDebugStringA(param_2);
  }
  return 0;
}

/* ref: FUN_00430c00 */
uint F_00430c00(unsigned int gen_a0, ...)
{
  GEN_ENTER(0x430c00u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  uint uVar1;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x11008)) = 0x430c0d;
  (*(uint *)(gen_frame + 0x11008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar1 = F_00c475c9(((char *)(gen_frame + 0x10008)),0x1000,param_1,((undefined *)&gen_args[1]));
  if (REFG(int, 0x12fd39c) != 0) {
    gen_imp_OutputDebugStringA(((char *)(gen_frame + 0x10008)));
    uVar1 = extraout_EAX;
  }
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00430c60 */
uint F_00430c60(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x430c60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  uint param_1 = (uint)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  uint extraout_EAX = 0;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x11008)) = 0x430c6d;
  (*(uint *)(gen_frame + 0x11008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00c475c9(((char *)(gen_frame + 0x10008)),0x1000,param_2,((undefined *)&gen_args[2]));
  uVar1 = REFG(undefined4, 0x12fd39c);
  if ((param_1 & REFG(undefined4, 0x12fd39c)) != 0) {
    gen_imp_OutputDebugStringA(((char *)(gen_frame + 0x10008)));
    uVar1 = extraout_EAX;
  }
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00430cc0 */
uint F_00430cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, ...)
{
  GEN_ENTER(0x430cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[36];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  { va_list gen_va; va_start(gen_va, gen_a3);
    for (int gen_i = 4; gen_i < 36; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x12010];
  uint uVar1;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x12008)) = 0x430ccd;
  (*(uint *)(gen_frame + 0x12008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00c472af(((CHAR *)(gen_frame + 0x11008)),0x1000,"%s(%d): ",param_1,param_2);
  F_00c475c9(((char *)(gen_frame + 0x10008)),0x1000,param_4,((undefined *)&gen_args[4]));
  uVar1 = F_00c473c8(((CHAR *)(gen_frame + 0x11008)),0x1000,((char *)(gen_frame + 0x10008)));
  if ((param_3 & REFG(undefined4, 0x12fd39c)) != 0) {
    gen_imp_OutputDebugStringA(((CHAR *)(gen_frame + 0x11008)));
    uVar1 = extraout_EAX;
  }
  F_00c47745((*(uint *)(gen_frame + 0x12008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00430d50 */
unsigned int F_00430d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x430d50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  LPCSTR param_2 = (LPCSTR)gen_a1;
  if ((param_1 & REFG(undefined4, 0x12fd39c)) != 0) {
    gen_imp_OutputDebugStringA(param_2);
  }
  return 0;
}

/* ref: FUN_00430d70 */
uint F_00430d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x430d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  uint extraout_EAX = 0;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x11008)) = 0x430d7d;
  (*(uint *)(gen_frame + 0x11008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00c472af(((CHAR *)(gen_frame + 0x10008)),0x1000,"%s(%d): %s",param_1,param_2,param_4);
  uVar1 = REFG(undefined4, 0x12fd39c);
  if ((param_3 & REFG(undefined4, 0x12fd39c)) != 0) {
    gen_imp_OutputDebugStringA(((CHAR *)(gen_frame + 0x10008)));
    uVar1 = extraout_EAX;
  }
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00430de0 */
uint F_00430de0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x430de0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  UINT param_1 = (UINT)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  undefined * this;
  byte bVar1;
  HWND hWnd;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x11008)) = 0x430ded;
  (*(uint *)(gen_frame + 0x11008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar2 = 8;
  if ((REFG(char, 0x1371720) == '\0') &&
     (F_00c475c9(((char *)(gen_frame + 0x10008)),0x1000,param_2,((undefined *)&gen_args[2])), this = REFG(void * PTR32, 0x137104c),
     REFG(void * PTR32, 0x137104c) != (undefined *)0x0)) {
    F_004246e0(REFG(void * PTR32, 0x137104c),1);
    REFG(char, 0x1371720) = 1;
    bVar1 = F_00a1be10();
    if (bVar1 == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = *((HWND *)GEN_TOP((*(int *)((int)this + 0x434) + 8)));
    }
    uVar2 = gen_imp_MessageBoxA(hWnd,((char *)(gen_frame + 0x10008)),"FFXIV",param_1);
    REFG(char, 0x1371720) = '\0';
    *(uint *)&REFG(undefined, 0x12fd3a0) = uVar2;
    F_004246e0(this,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar2;
}

/* ref: FUN_00430ea0 */
uint F_00430ea0(unsigned int gen_a0, ...)
{
  GEN_ENTER(0x430ea0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x11008)) = 0x430ead;
  (*(uint *)(gen_frame + 0x11008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00c475c9(((char *)(gen_frame + 0x10008)),0x1000,param_1,((undefined *)&gen_args[1]));
  uVar1 = F_00430de0(0,((char *)(gen_frame + 0x10008)));
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00430ef0 */
uint F_00430ef0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x430ef0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x11008)) = 0x430efd;
  (*(uint *)(gen_frame + 0x11008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00c475c9(((char *)(gen_frame + 0x10008)),0x1000,param_2,((undefined *)&gen_args[2]));
  uVar1 = F_00430de0(param_1,((char *)(gen_frame + 0x10008)));
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00430f50 */
uint F_00430f50(unsigned int gen_a0, ...)
{
  GEN_ENTER(0x430f50u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x11008)) = 0x430f5d;
  (*(uint *)(gen_frame + 0x11008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00c475c9(((char *)(gen_frame + 0x10008)),0x1000,param_1,((undefined *)&gen_args[1]));
  uVar1 = F_00430de0(0,((char *)(gen_frame + 0x10008)));
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00430fb0 */
uint F_00430fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x430fb0u, gen_a0, 0u, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00430fd0 */
uint F_00430fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x430fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 * PTR32 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *param_1 = 0;
  return (uint)this;
}

/* ref: FUN_00430ff0 */
byte F_00430ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x430ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  int iVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(param_1 + 1);
    if ((uint)(*(int *)((int)this + 8) + 1 + iVar3) < *(uint *)((int)this + 4)) {
      F_00c46aa0(*(int *)this + *(int *)((int)this + 8),param_1,iVar3);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + iVar3;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00431050 */
uint F_00431050(unsigned int gen_a0)
{
  GEN_ENTER(0x431050u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)((REFG(undefined4, 0x12fd39c) & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00431070 */
uint F_00431070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x431070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1080214));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004310b0 */
uint F_004310b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4310b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 2;
  *(undefined1 *)(in_ecx + 1) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004310d0 */
uint F_004310d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4310d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 3;
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004310f0 */
uint F_004310f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4310f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 4;
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00431110 */
uint F_00431110(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x431110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = 5;
  in_ecx[1] = (undefined4)gen_fl2bits(param_2);
  return (uint)in_ecx;
}

/* ref: FUN_004311a0 */
uint F_004311a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4311a0u, gen_a0, 0u, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  if ((*in_ecx & 0xf) == 0) {
    return 0;
  }
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_004311b0 */
uint F_004311b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4311b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005a2710(this,3);
  *(uint *)((int)this + 4) = param_1;
  return param_1;
}

/* ref: FUN_004311d0 */
uint F_004311d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4311d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005a2710(this,6);
  *(uint *)((int)this + 4) = param_1;
  return param_1;
}

/* ref: FUN_004311f0 */
float10 F_004311f0(float gen_a0)
{
  GEN_ENTER(0x4311f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(SQRT((float10)param_1)));
}

/* ref: FUN_00431210 */
byte F_00431210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x431210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (((char)param_3 != '\0') ||
     (uVar1 = param_2, *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 4))) != param_2)) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 4))) = param_2;
    uVar1 = (uint)((char)param_4 == '\0');
    *(bool *)((int)this + 0x1d) = (char)param_4 == '\0';
  }
  return (byte)uVar1;
}

/* ref: FUN_00431240 */
uint F_00431240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x431240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + param_2 * 4)));
}

/* ref: FUN_00431250 */
uint F_00431250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x431250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  char cVar2;
  char * pcVar3;
  int * piVar4;
  byte * pbVar5;
  int iVar6;
  char * pcVar7;
  uint uVar8;
  byte * pbVar9;
  bool bVar10;
  undefined4 uVar11;
  
  if ((char)param_4 == '\0') {
    if ((char)param_3 == '\0') {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 4)));
      if (param_2 != (byte *)*piVar4) {
        *(bool *)((int)this + 0x1d) = (char)param_5 == '\0';
      }
      *piVar4 = (int)param_2;
      return (uint)piVar4;
    }
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 4)));
    if (param_2 != (byte *)*piVar4) {
      *piVar4 = (int)param_2;
      *(bool *)((int)this + 0x1d) = (char)param_5 == '\0';
      return (uint)piVar4;
    }
  }
  else {
    piVar4 = *(int * PTR32 *)((int)this + 0x20);
    if (param_2 != (byte *)0x0) {
      if (piVar4[param_1] != 0) {
        pbVar9 = (byte *)piVar4[param_1];
        pbVar5 = param_2;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_004312d8: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_004312dd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_004312d8;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_004312dd: ;
        if (iVar6 == 0) {
          return 0;
        }
      }
      pbVar9 = param_2;
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar1 != 0);
      pcVar3 = *((char * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4)));
      pbVar9 = pbVar9 + (1 - (int)(param_2 + 1));
      if (pcVar3 == (char *)0x0) {
        pbVar5 = (byte *)0x0;
      }
      else {
        pcVar7 = pcVar3;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        pbVar5 = ((byte *)GEN_TOP((pcVar7 + (1 - (int)(pcVar3 + 1)))));
      }
      if (pbVar5 < pbVar9) {
        if (pcVar3 != (char *)0x0) {
          F_00406ad0(pcVar3);
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4))) = 0;
        }
        uVar11 = 0;
        uVar8 = F_00404270();
        uVar8 = F_00406c00(pbVar9,0,uVar8,uVar11);
        *((uint *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4))) = uVar8;
      }
      F_00c49908(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4))),pbVar9,param_2);
      iVar6 = *(int *)((int)this + 0x24);
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 4))) =
           *(undefined4 *)(iVar6 + param_1 * 4);
      *(bool *)((int)this + 0x1d) = (char)param_5 == '\0';
      return CONCAT31((int3)((uint)iVar6 >> 8),(char)param_5 == '\0');
    }
    if (piVar4[param_1] != 0) {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4)));
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4))) != 0) {
        F_00406ad0(*piVar4);
        piVar4 = *(int * PTR32 *)((int)this + 0x24);
        piVar4[param_1] = 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 4))) = 0;
      *(bool *)((int)this + 0x1d) = (char)param_5 == '\0';
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_004313e0 */
uint F_004313e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4313e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_0042a990(param_2);
  uVar1 = F_00431250(this,param_1,uVar1,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00431410 */
uint F_00431410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x431410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + param_2 * 4)));
}

/* ref: FUN_00431470 */
unsigned int F_00431470(float gen_a0)
{
  GEN_ENTER(0x431470u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00431490 */
uint F_00431490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x431490u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  int local_c;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  fVar3 = (float10)((float)GEN_TOF((((float10)(param_2 & 0xffff) * ((float10)*param_1 + (float10)1)) * fVar2)))
  ;
  if (fVar3 < (float10)0) {
    local_c = (int)(longlong)TRUNC(fVar3 - fVar2);
    iVar1 = local_c;
  }
  else {
    local_c = (int)(longlong)TRUNC(fVar3 + fVar2);
    iVar1 = local_c;
  }
  fVar3 = (float10)((float)GEN_TOF((((float10)(ushort)param_3 * ((float10)1 - (float10)param_1[1])) * fVar2)));
  if (fVar3 < (float10)0) {
    local_c = (int)(longlong)TRUNC(fVar3 - fVar2);
    return iVar1 * 0x10000 + local_c;
  }
  local_c = (int)(longlong)TRUNC(fVar3 + fVar2);
  return iVar1 * 0x10000 + local_c;
}

/* ref: FUN_00431570 */
byte F_00431570(unsigned int gen_a0)
{
  GEN_ENTER(0x431570u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  if ((((!(*param_1 < REFG(float, 0x1090708))) && (!(REFG(float, 0x1087f04) < *param_1))) &&
      (!(param_1[1] < REFG(float, 0x1090708)))) &&
     (((!(REFG(float, 0x1087f04) < param_1[1]) && (!(REFG(float, 0x1087f04) < param_1[2]))) && (!(param_1[2] < 0.0)))))
  {
    return 1;
  }
  return 0;
}

/* ref: FUN_004315c0 */
uint F_004315c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4315c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  F_00a60a40(param_3,param_1,param_2);
  return param_1;
}

/* ref: FUN_004315e0 */
uint F_004315e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4315e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 1: ;
      return 0;
    case 2: ;
      bVar1 = F_00a62270(param_1);
      return (bVar1 != 0) + 3;
    case 3: ;
    case 9: ;
      return 1;
    case 4: ;
      return 6;
    case 5: ;
    case 7: ;
      return 5;
    case 6: ;
      return 7;
    case 10: ;
      return 2;
    }
  }
  return 8;
}

/* ref: FUN_00431680 */
uint F_00431680(float gen_a0)
{
  GEN_ENTER(0x431680u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x108d6b8))) && !(param_1 <= *(float *)&REFG(undefined, 0x108d6b8))) {
    return 0;
  }
  if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x108d6b4))) && !(param_1 <= *(float *)&REFG(undefined, 0x108d6b4))) {
    return (int)((float10)*(double *)&REFG(undefined, 0x1090718) -
                (((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1090720)) *
                (float10)*(float *)&REFG(undefined, 0x12fdf50)) * (float10)*(double *)&REFG(undefined, 0x1090718));
  }
  if ((float10)param_1 < (float10)*(double *)&REFG(undefined, 0x1090710)) {
    return 100;
  }
  return (int)((float10)*(double *)&REFG(undefined, 0x1088118) -
              (((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1090710)) *
              (float10)*(float *)&REFG(undefined, 0x12fdf4c)) * (float10)*(double *)&REFG(undefined, 0x1090718));
}

/* ref: FUN_00431710 */
uint F_00431710(unsigned int gen_a0)
{
  GEN_ENTER(0x431710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x70f0) = 0;
  *(undefined4 *)(in_ecx + 0x729c) = 0;
  *(undefined4 *)(in_ecx + 0x71bc) = 0;
  *(undefined4 *)(in_ecx + 0x72a0) = 0;
  return 0;
}

/* ref: FUN_00431730 */
uint F_00431730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x431730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x72a8);
  while ((((piVar2[100] != param_1 || (piVar2[0x65] != param_2)) || (*piVar2 != -0x20000000)) ||
         (piVar2[1] != 0))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 2;
    if (0x31 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_00431780 */
uint F_00431780(unsigned int gen_a0)
{
  GEN_ENTER(0x431780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(in_ecx + 0x72a8);
  while ((*piVar2 != -0x20000000 || (piVar2[1] != 0))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 2;
    if (0x31 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_004317b0 */
uint F_004317b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4317b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x75c8);
  while ((((piVar2[0x88] != param_1 || (piVar2[0x89] != param_2)) || (*piVar2 != -0x20000000)) ||
         (piVar2[1] != 0))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 2;
    if (0x43 < uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_00431800 */
uint F_00431800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x431800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = (int *)((int)this + 0x75c8);
  piVar4 = (int *)((int)this + 0x7a08);
  uVar1 = 0;
  piVar2 = piVar3;
  while (((*piVar2 != -0x20000000 || (piVar2[1] != 0)) || (*piVar4 != param_1))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 2;
    piVar4 = piVar4 + 1;
    if (0x43 < uVar1) {
      uVar1 = 0;
      while ((*piVar3 != -0x20000000 || (piVar3[1] != 0))) {
        uVar1 = uVar1 + 1;
        piVar3 = piVar3 + 2;
        if (0x43 < uVar1) {
          return 0xffffffff;
        }
      }
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00431860 */
uint F_00431860(unsigned int gen_a0)
{
  GEN_ENTER(0x431860u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 * puVar6;
  undefined1 local_c;
  int * local_8;
  
  piVar4 = (int *)*param_1;
  iVar5 = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  local_8 = (int *)piVar4[0x5c];
  local_c = 0;
  piVar3 = local_8;
  if (local_8 != (int *)0x0) goto LAB_004319d1;
  uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  if (uVar2 == 1) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 0xb8))((int *)*param_1)));
    if ((((char)piVar3 != '\0') &&
        (piVar3 = (int *)F_00a5f290((undefined *)*param_1), piVar3 != (int *)0x0)) &&
       ((*(byte *)((int)piVar3 + 0x2dd2) & 0x10) != 0)) goto LAB_0043193e;
  }
  else {
    if (uVar2 == 2) {
      local_8 = (int *)0x0;
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 0xb8))((int *)*param_1)));
      if ((char)piVar3 == '\0') goto LAB_004319d1;
      piVar4 = (int *)F_00a5f290((undefined *)*param_1);
      piVar3 = (int *)0x0;
      if (piVar4 == (int *)0x0) goto LAB_004319d1;
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
      if ((char)piVar3 != '\x03') {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
        if ((char)piVar3 != '\x02') {
          if (piVar4[0x5a4] != 0) {
            if (*(char *)((int)piVar4 + 0x2ecd) == '\x02') {
              local_8 = (int *)0xebf1;
            }
            else if (0 < REFG(int, 0x14ab04c)) {
              puVar6 = &REFG(undefined4, 0x14aa78c);
              do {
                piVar3 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),*puVar6);
                if (piVar4 == piVar3) {
                  local_8 = (int *)0xec06;
                  break;
                }
                iVar5 = iVar5 + 1;
                puVar6 = puVar6 + 0x12;
              } while (iVar5 < REFG(int, 0x14ab04c));
            }
          }
          goto LAB_004319d1;
        }
        piVar4 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),piVar4[0xbb6]);
        piVar3 = (int *)0x0;
        if ((piVar4 == (int *)0x0) ||
           (piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4))), (char)piVar3 == '\0'))
        goto LAB_004319d1;
        piVar4 = (int *)F_00a5f290(piVar4);
        piVar3 = (int *)0x0;
        if (piVar4 == (int *)0x0) goto LAB_004319d1;
        bVar1 = F_00a9f620(piVar4);
        piVar3 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
        if (bVar1 != 0) goto LAB_0043193e;
      }
      if ((*(byte *)((int)piVar4 + 0x2dd2) & 0x10) == 0) goto LAB_004319d1;
LAB_0043193e: ;
      local_8 = (int *)0xec05;
      local_c = 0x80;
      goto LAB_004319d1;
    }
    piVar3 = (int *)(uVar2 - 3);
    if (piVar3 != (int *)0x0) goto LAB_004319d1;
  }
  local_8 = (int *)0x0;
LAB_004319d1: ;
  param_1[0xf] = (int)local_8;
  *(undefined1 *)((int)param_1 + 0x41) = local_c;
  return (uint)piVar3;
}

/* ref: FUN_004319f0 */
uint F_004319f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4319f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1090734));
  in_ecx[1] = 0;
  F_00aadc00(in_ecx + 2);
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00431a30 */
unsigned int F_00431a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x431a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  HWND param_2 = (HWND)gen_a2;
  HWND pHVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(HWND *)((int)this + 0x60) = param_2;
  pHVar1 = gen_imp_SetClipboardViewer(param_2);
  *(HWND *)((int)this + 100) = pHVar1;
  return 0;
}

/* ref: FUN_00431a60 */
unsigned int F_00431a60(unsigned int gen_a0)
{
  GEN_ENTER(0x431a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(HWND *)((int)this + 100) != (HWND)0x0) {
    gen_imp_ChangeClipboardChain(*(HWND *)((int)this + 0x60),*(HWND *)((int)this + 100));
  }
  return 0;
}

/* ref: FUN_00431a80 */
uint F_00431a80(unsigned int gen_a0)
{
  GEN_ENTER(0x431a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  char * PTR32 * ppcVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 8))))((int)this + 8);
    F_0042cbc0(((char * PTR32 *)(gen_frame + 0x4)),uVar1);
    if (*((char * PTR32 *)(gen_frame + 0x4))[0] != '\0') {
      ppcVar3 = ((char * PTR32 *)(gen_frame + 0x4));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      F_00559480(ppcVar3);
    }
    uVar2 = F_0042c880(((char * PTR32 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00431af0 */
uint F_00431af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x431af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  uint param_2 = (uint)gen_a2;
  HWND hWnd;
  uint uVar1;
  
  hWnd = *(HWND *)((int)this + 100);
  if (param_1 == hWnd) {
    *(uint *)((int)this + 100) = param_2;
    return param_2;
  }
  uVar1 = 0;
  if (hWnd != (HWND)0x0) {
    uVar1 = gen_imp_SendMessageA(hWnd,0x30d,(WPARAM)param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00431b20 */
uint F_00431b20(unsigned int gen_a0)
{
  GEN_ENTER(0x431b20u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  uVar2 = 0;
  do {
    pbVar5 = (&REFG(undefined * PTR32, 0x12fd5a8))[uVar2];
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00431b60: ;
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00431b65;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00431b60;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00431b65: ;
    if (iVar4 == 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    if (0x18a < (int)uVar2) {
      return 0xffffffff;
    }
  } while( true );
}

/* ref: FUN_00431b80 */
byte F_00431b80(unsigned int gen_a0)
{
  GEN_ENTER(0x431b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00a34970(this,0x112);
  if (bVar1 == 0) {
    bVar1 = F_00a34970(this,0x113);
    if (bVar1 == 0) {
      bVar1 = F_00a34970(this,0x114);
      if (bVar1 == 0) {
        bVar1 = F_00a34970(this,0x115);
        if (bVar1 == 0) {
          bVar1 = F_00a34970(this,0x116);
          if (bVar1 == 0) {
            bVar1 = F_00a34970(this,0x117);
            if (bVar1 == 0) {
              uVar2 = F_00a34e80(this,3);
              if (uVar2 == 0) {
                uVar2 = F_00a34e80(this,4);
                if (uVar2 == 0) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_00431c10 */
byte F_00431c10(unsigned int gen_a0)
{
  GEN_ENTER(0x431c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00a34b70(this,0x112);
  if (bVar1 == 0) {
    bVar1 = F_00a34b70(this,0x113);
    if (bVar1 == 0) {
      bVar1 = F_00a34b70(this,0x114);
      if (bVar1 == 0) {
        bVar1 = F_00a34b70(this,0x115);
        if (bVar1 == 0) {
          bVar1 = F_00a34b70(this,0x116);
          if (bVar1 == 0) {
            bVar1 = F_00a34b70(this,0x117);
            if (bVar1 == 0) {
              uVar2 = F_00a34e80(this,3);
              if (uVar2 == 0) {
                uVar2 = F_00a34e80(this,4);
                if (uVar2 == 0) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_00431ca0 */
byte F_00431ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x431ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00a34870(this,0x11b);
  if (bVar1 == 0) {
    bVar1 = F_00a34870(this,0x11c);
    if (bVar1 == 0) {
      bVar1 = F_00a34870(this,0x119);
      if (bVar1 == 0) {
        bVar1 = F_00a34870(this,0x11a);
        if (bVar1 == 0) {
          uVar2 = F_00a34e80(this,5);
          if (uVar2 == 0) {
            uVar2 = F_00a34e80(this,6);
            if (uVar2 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_00431d10 */
uint F_00431d10(unsigned int gen_a0)
{
  GEN_ENTER(0x431d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00a34480(this);
  F_0046db90(this);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa20160;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x27,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x126;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x2a,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x128;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x2b,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x131;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x2c,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x132;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x2d,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x133;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x2e,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x134;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x2f,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x135;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x30,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x136;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x31,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x137;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x32,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x138;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x33,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x139;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x34,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x130;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x35,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x31;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x36,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x32;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x37,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x33;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x38,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x34;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x39,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x35;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x3a,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x36;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x3b,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x37;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x3c,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x3d,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x39;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x3e,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x3f,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x84;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x40,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x8c;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x41,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x231;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x42,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x232;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x43,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x233;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x44,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x234;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x45,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x235;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x46,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x236;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x47,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x237;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x48,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x238;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x49,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x239;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x4a,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x230;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x4b,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x284;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x4c,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x28c;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x4d,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x242;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xf5,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x4c;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xe9,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x48;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xf4,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x255;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xe0,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x249;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xfa,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x446;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x111,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x44c;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x105,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x54c;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x106,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x6d;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xde,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x59;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xdf,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x55;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xe1,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x49;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xe2,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x4f;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xe3,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x50;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xe4,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x47;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xe5,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x4a;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xe7,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x4b;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xe8,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x43;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xea,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x42;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xeb,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x4e;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xec,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x4d;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xed,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x8a;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xee,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x14d;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xf1,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0xd;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xff,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x86;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x100,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x452;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x101,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x552;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x102,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x453;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x103,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x450;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x104,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x448;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x10f,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x459;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x110,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x57;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x112,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x53;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x113,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x41;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x114,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x44;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x115,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x51;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x116,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x45;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x117,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x26;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x119,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x11a,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x25;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x11b,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x27;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x11c,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x21;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x11d,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x22;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x11e,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x24;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xb2;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x120,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x323;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x121,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x223;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x122,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x23;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x123,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x124,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa2;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x125,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x126,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0xa2;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x127,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x56;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x128,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x46;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x129,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x12d,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0xa10052;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x12e,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x6f;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x130,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x132,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x133,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x134,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x135,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x1a9;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x136,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x1ab;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x137,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x1ac;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x138,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x1aa;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x139,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x146;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x13c,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 9;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x13f,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x109;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x140,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x70;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x143,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x71;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x144,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x72;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x145,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x73;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x146,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x74;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x147,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x75;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x148,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x76;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x149,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x77;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x14a,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x54;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x153,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x154;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x156,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x79;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x158,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x7a;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x159,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x7b;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x15b,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x58;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x15c,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4ae;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xba,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8b1;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xbb,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x2b0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xbc,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa7;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xbd,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa5;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xbe,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa8;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xbf,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa6;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xc0,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xab;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xc1,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa9;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xc2,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xac;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xc3,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xaa;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xc4,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4a7;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xc5,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4a5;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xc6,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4a8;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,199,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4a6;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,200,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4ab;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xc9,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4a9;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xca,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4ac;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xcb,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4aa;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xcc,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8a7;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xcd,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8a5;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xce,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8a8;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xcf,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8a6;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd0,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8ab;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd1,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8a9;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd2,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8ac;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd3,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8aa;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd4,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x2a9;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd5,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x2ac;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd6,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x2aa;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd7,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x2ab;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd8,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x2a5;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xd9,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x2a8;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xda,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x2a6;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xdb,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x2a7;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0xdc,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xaf;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x15f,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x160,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa9;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x15e,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x1ad;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x12f,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x5a;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x12a,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xaa;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,299,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x1ad;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x11f,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xab;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x15d,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x6b;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x40b4;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x161,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x61;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x80b3;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x162,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x1b2;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x163,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xb3;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x164,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x40b4;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x165,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x80b3;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x166,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x4ae;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x167,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x8b1;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x168,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xaf;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x169,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xb2;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x16a,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xa9;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x16b,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xab;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x16c,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x40b4;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x16d,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x40b4;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x16e,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x1ad;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x16f,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xb2;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x170,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x2c;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  F_00a34390(this,0x171,&(*(undefined4 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x40b4;
  (*(undefined2 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  uVar1 = F_00a34390(this,0x172,&(*(undefined4 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00433820 */
uint F_00433820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x433820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_0042a990(param_1);
  uVar1 = F_00431b20(uVar1);
  if (-1 < (int)uVar1) {
    puVar2 = (undefined4 *)F_00a343f0(this,uVar1);
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar2 + 2);
    *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)puVar2 + 10);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00433880 */
byte F_00433880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x433880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042a990(param_1);
  uVar1 = F_00431b20(uVar1);
  if (-1 < (int)uVar1) {
    F_00a34390(this,uVar1,param_2);
    *(undefined1 *)((int)this + 0x87c) = 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_004338c0 */
byte F_004338c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4338c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042aca0(param_1);
  iVar3 = 0;
  do {
    uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%02X.%02X,",(uint)*(byte *)(param_2 + iVar3),
                         (uint)*(byte *)(param_2 + 1 + iVar3));
    F_0042d4d0(param_1,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    iVar3 = iVar3 + 2;
  } while (iVar3 < 4);
  cVar1 = *(char *)*param_1;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return cVar1 != '\0';
}

/* ref: FUN_00433940 */
uint F_00433940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x433940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1 * 0xb + *(int *)((int)this + 0x83c);
  uVar3 = 0;
  cVar1 = *(char *)(iVar4 + 4);
  cVar2 = *(char *)(iVar4 + 5);
  if (cVar1 == -0x53) {
    if (cVar2 == '\x01') {
      return 0x100;
    }
  }
  else if (cVar1 == -0x52) {
    if (cVar2 == '\x04') {
      return 0x200;
    }
  }
  else if (cVar1 == -0x50) {
    if (cVar2 == '\x02') {
      return 0x800;
    }
  }
  else if ((cVar1 == -0x4f) && (cVar2 == '\b')) {
    uVar3 = 0x1000;
  }
  return uVar3;
}

/* ref: Client::UI::UIInputData::vf7 */
byte F_004339b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4339b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  
  bVar1 = F_00a34870(this,0x173);
  bVar2 = bVar1 != 0;
  bVar1 = F_00a34870(this,0x176);
  if (bVar1 != 0) {
    bVar2 = bVar2 | 2;
  }
  bVar1 = F_00a34870(this,0x174);
  if (bVar1 != 0) {
    bVar2 = bVar2 | 4;
  }
  bVar1 = F_00a34870(this,0x177);
  if (bVar1 != 0) {
    bVar2 = bVar2 | 8;
  }
  bVar1 = F_00a34870(this,0x182);
  if (bVar1 != 0) {
    bVar2 = bVar2 | 0x80;
  }
  bVar1 = F_00a34870(this,0x181);
  if (bVar1 != 0) {
    bVar2 = bVar2 | 0x40;
  }
  return bVar2;
}

/* ref: FUN_00433a30 */
byte F_00433a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x433a30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x7d);
  if (bVar1 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360),0x7d);
    return 0;
  }
  if ((char)param_2 != '\0') {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x7f);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x7f);
      return 0;
    }
    uVar2 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    uVar2 = F_00ab1cc0((uint)*(byte *)(uVar2 + 0x2a));
    if ((REFG(char, 0x14a739c) == '\0') && (*(char *)(uVar2 + 5) == '\0')) {
      return 0;
    }
  }
  return 1;
}

/* ref: Global::OnLogoutReply */
uint F_00433ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x433ab0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint in_ecx;
  undefined * this;
  undefined4 uVar1;
  
  if (REFG(char, 0x1372338) != '\0') {
    uVar1 = 0;
    in_ecx = ((code *)*(gen_code32 *)(*param_1 + 0x48))(param_1);
    this = (undefined *)F_00763050(in_ecx,uVar1);
    in_EAX = 0;
    if (this != (undefined *)0x0) {
      REFG(undefined1, 0x137232f) = 1;
      in_EAX = F_007e4b80(this,(uint)REFG(undefined1, 0x1372333),0x3c);
    }
    REFG(char, 0x1372338) = '\0';
  }
  return in_EAX;
}

/* ref: FUN_00433b00 */
uint F_00433b00(unsigned int gen_a0)
{
  GEN_ENTER(0x433b00u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (REFG(int, 0x1372334) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1)));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(int, 0x1372334),0);
    REFG(int, 0x1372334) = 0;
  }
  REFG(undefined1, 0x1372338) = 0;
  return in_EAX;
}

/* ref: FUN_00433b40 */
unsigned int F_00433b40(unsigned int gen_a0)
{
  GEN_ENTER(0x433b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_0058f530(this_00);
  return 0;
}

/* ref: FUN_00433b50 */
byte F_00433b50(unsigned int gen_a0)
{
  GEN_ENTER(0x433b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_005675f0(this_00);
  return bVar1;
}

/* ref: FUN_00433b60 */
unsigned int F_00433b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x433b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00433b70 */
byte F_00433b70(unsigned int gen_a0)
{
  GEN_ENTER(0x433b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  
  in_ecx = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  bVar1 = F_00567730(in_ecx);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf73 */
uint F_00433b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x433b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  this_00 = (undefined *)F_00763050(uVar1,uVar2);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_007e4980(this_00,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: Client::UI::UIModule::vf4 */
unsigned int F_00433bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x433bb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x214) = 1;
  return 0;
}

/* ref: Client::UI::UIModule::vf3 */
uint F_00433bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x433bc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x92538) = param_2;
  return param_2;
}

/* ref: Client::UI::UIModule::vf5 */
uint F_00433bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x433bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x220);
}

/* ref: Client::UI::UIModule::vf6 */
uint F_00433be0(unsigned int gen_a0)
{
  GEN_ENTER(0x433be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x224;
}

/* ref: Client::UI::UIModule::vf7 */
uint F_00433bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x433bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x63df0;
}

/* ref: Client::UI::UIModule::vf8 */
uint F_00433c00(unsigned int gen_a0)
{
  GEN_ENTER(0x433c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5b8f0;
}

/* ref: Client::UI::UIModule::vf9 */
uint F_00433c10(unsigned int gen_a0)
{
  GEN_ENTER(0x433c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5c118;
}

/* ref: Client::UI::UIModule::vf10 */
uint F_00433c20(unsigned int gen_a0)
{
  GEN_ENTER(0x433c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x8f8;
}

/* ref: Client::UI::UIModule::vf11 */
uint F_00433c30(unsigned int gen_a0)
{
  GEN_ENTER(0x433c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30c0;
}

/* ref: Client::UI::UIModule::vf12 */
uint F_00433c40(unsigned int gen_a0)
{
  GEN_ENTER(0x433c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x23f90;
}

/* ref: Client::UI::UIModule::vf13 */
uint F_00433c50(unsigned int gen_a0)
{
  GEN_ENTER(0x433c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x501e8;
}

/* ref: Client::UI::UIModule::vf14 */
uint F_00433c60(unsigned int gen_a0)
{
  GEN_ENTER(0x433c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x574e8;
}

/* ref: Client::UI::UIModule::vf17 */
uint F_00433c70(unsigned int gen_a0)
{
  GEN_ENTER(0x433c70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x91998;
}

/* ref: Client::UI::UIModule::vf18 */
uint F_00433c80(unsigned int gen_a0)
{
  GEN_ENTER(0x433c80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x86f7c;
}

/* ref: Client::UI::UIModule::vf19 */
uint F_00433c90(unsigned int gen_a0)
{
  GEN_ENTER(0x433c90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5c2d0;
}

/* ref: Client::UI::UIModule::vf20 */
uint F_00433ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x433ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x91ca8;
}

/* ref: Client::UI::UIModule::vf21 */
uint F_00433cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x433cb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x92530;
}

/* ref: Client::UI::UIModule::vf22 */
uint F_00433cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x433cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x575b8;
}

/* ref: Client::UI::UIModule::vf15 */
uint F_00433cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x433cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x57858;
}

/* ref: Client::UI::UIModule::vf16 */
uint F_00433ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x433ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x57538;
}

/* ref: Client::UI::UIModule::vf25 */
byte F_00433cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x433cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  uVar2 = F_00763050(uVar2,1);
  if (uVar2 != 0) {
    bVar1 = F_00780610(uVar2);
    if (bVar1 == 1) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI::UIModule::vf28 */
byte F_00433d20(unsigned int gen_a0)
{
  GEN_ENTER(0x433d20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x92543);
}

/* ref: Client::UI::UIModule::vf30 */
unsigned int F_00433d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x433d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_007c83d0(this + 0x63df0,param_1);
  return 0;
}

/* ref: FUN_00433d50 */
uint F_00433d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x433d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 1);
  uVar2 = *param_1;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x48))(this)));
  uVar1 = F_00763080(this_00,uVar2,uVar1);
  return uVar1;
}

/* ref: Client::UI::UIModule::vf32 */
uint F_00433d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x433d70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::UI::UIModule::vf33 */
uint F_00433d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x433d90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::UI::UIModule::vf34 */
uint F_00433da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x433da0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x84))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::UI::UIModule::vf35 */
uint F_00433dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x433dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc0))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::UI::UIModule::vf36 */
byte F_00433de0(unsigned int gen_a0)
{
  GEN_ENTER(0x433de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  
  in_ecx = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  bVar1 = F_0075ea20(in_ecx);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf37 */
unsigned int F_00433df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x433df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_0075ea40(this_00,param_1);
  return 0;
}

/* ref: Client::UI::UIModule::vf38 */
unsigned int F_00433e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x433e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_00867470(this_00,param_1);
  return 0;
}

/* ref: Client::UI::UIModule::vf39 */
uint F_00433e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x433e30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x78))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::UI::UIModule::vf40 */
uint F_00433e50(unsigned int gen_a0)
{
  GEN_ENTER(0x433e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  uVar1 = F_0075edd0(uVar1);
  return uVar1;
}

/* ref: Client::UI::UIModule::vf41 */
uint F_00433e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x433e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_00820b30(this_00,param_1,param_2,param_3,uVar2,uVar3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI::UIModule::vf42 */
uint F_00433e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x433e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075ec30(this_00,param_1,param_2,param_3,uVar2,uVar3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI::UIModule::vf43 */
byte F_00433ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x433ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075ed10(this_00,param_1,param_2,param_3,uVar2,uVar3);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf44 */
byte F_00433ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x433ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075eb60(this_00,param_1,param_2,param_3);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf45 */
uint F_00433f20(unsigned int gen_a0)
{
  GEN_ENTER(0x433f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x48))(this)));
  F_00763020(pvVar1,uVar3);
  pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  uVar2 = F_008aa7d0(pvVar1);
  return uVar2;
}

/* ref: Client::UI::UIModule::vf47 */
byte F_00433f50(unsigned int gen_a0)
{
  GEN_ENTER(0x433f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  
  in_ecx = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  bVar1 = F_0075ddc0(in_ecx);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf48 */
unsigned int F_00433f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x433f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_00902e70(this_00,param_1,param_2);
  return 0;
}

/* ref: Client::UI::UIModule::vf49 */
unsigned int F_00433f80(unsigned int gen_a0)
{
  GEN_ENTER(0x433f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_007c93e0(this_00);
  return 0;
}

/* ref: Client::UI::UIModule::vf50 */
uint F_00433f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x433f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  uVar1 = F_008c2600(this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::UI::UIModule::vf51 */
unsigned int F_00433fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x433fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_007c93f0(this_00);
  return 0;
}

/* ref: Client::UI::UIModule::vf52 */
unsigned int F_00433fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x433fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_007c95f0(this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return 0;
}

/* ref: Client::UI::UIModule::vf53 */
unsigned int F_00434020(unsigned int gen_a0)
{
  GEN_ENTER(0x434020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_007c9650(this_00);
  return 0;
}

/* ref: Client::UI::UIModule::vf54 */
byte F_00434030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x434030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_007c8bb0(this_00,param_1,param_2,param_3,param_4);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf55 */
byte F_00434060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x434060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  undefined4 uVar2;
  undefined * this_00;
  
  uVar2 = 10;
  if (REFG(int, 0x1379c70) == 4) {
    uVar2 = 0xb;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075f070(this_00,param_1,param_2,param_3,param_4,param_5,param_6,uVar2);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf56 */
byte F_004340b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4340b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075f1b0(this_00,param_1);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf57 */
byte F_004340d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4340d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  undefined * this_00;
  
  uVar2 = 0xb;
  if (REFG(int, 0x1379c70) != 4) {
    uVar2 = param_2;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075f2b0(this_00,param_1,uVar2,param_3,param_4);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf58 */
byte F_00434110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x434110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined4 uVar2;
  undefined * this_00;
  
  uVar2 = 10;
  if (REFG(int, 0x1379c70) == 4) {
    uVar2 = 0xb;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075f3a0(this_00,param_1,uVar2);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf59 */
byte F_00434140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x434140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_007c8da0(this_00,param_1);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf60 */
byte F_00434160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x434160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075f470(this_00,param_1,param_2);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf61 */
byte F_00434180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x434180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_007c8fe0(this_00,param_1,param_2,param_3,param_4);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf62 */
byte F_004341b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4341b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075f710(this_00);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf63 */
uint F_004341c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4341c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  uVar1 = F_0075f800(uVar1);
  return uVar1;
}

/* ref: Client::UI::UIModule::vf64 */
byte F_004341d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4341d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_0075f810(this_00);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf65 */
byte F_004341e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4341e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_007c91c0(this_00,param_1,param_2,param_3);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf66 */
byte F_00434210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x434210u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))();
  bVar1 = F_00820c80(uVar2,param_2,param_3,param_4);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf67 */
uint F_00434240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x434240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  uVar1 = F_008aa830(this_00,param_1);
  return uVar1;
}

/* ref: Client::UI::UIModule::vf68 */
unsigned int F_00434260(unsigned int gen_a0)
{
  GEN_ENTER(0x434260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  F_008aa910(this_00);
  return 0;
}

/* ref: Client::UI::UIModule::vf69 */
byte F_00434270(unsigned int gen_a0)
{
  GEN_ENTER(0x434270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this)));
  bVar1 = F_007c9470(this_00);
  return bVar1;
}

/* ref: Client::UI::UIModule::vf71 */
byte F_00434280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x434280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    this_00 = (undefined *)F_00763050(uVar2,3);
    if (this_00 == (undefined *)0x0) {
      return 1;
    }
    uVar2 = F_0076ecb0(this_00,1);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    return 1;
  case 2: ;
    uVar1 = 0x1e;
    break;
  case 3: ;
    uVar1 = 0x19;
    break;
  case 4: ;
    uVar1 = 0x18;
    break;
  case 5: ;
    uVar1 = 0x58;
    break;
  case 6: ;
    uVar1 = 0x55;
    break;
  case 7: ;
    uVar1 = 0x13;
    break;
  case 8: ;
    uVar1 = 0x3b;
    break;
  case 9: ;
    uVar1 = 0x14;
    break;
  case 10: ;
  case 0xb: ;
  case 0x17: ;
  case 0x18: ;
    return 1;
  case 0xc: ;
    uVar1 = 0x2e;
    break;
  case 0xd: ;
    uVar1 = 0x2c;
    break;
  case 0xe: ;
    uVar1 = 0x2b;
    break;
  case 0xf: ;
    uVar1 = 0x30;
    break;
  case 0x10: ;
    uVar1 = 0x1f;
    break;
  case 0x11: ;
    uVar1 = 0xf;
    break;
  case 0x12: ;
    uVar1 = 0x1a;
    break;
  case 0x13: ;
    uVar1 = 8;
    break;
  case 0x14: ;
    uVar1 = 0xb;
    break;
  case 0x15: ;
    uVar1 = 0x10;
    break;
  case 0x16: ;
    uVar1 = 0xe;
    break;
  case 0x19: ;
    uVar1 = 0x49;
    break;
  default: ;
    goto switchD_0043428c_caseD_19;
  case 0x1b: ;
    uVar1 = 0x3f;
    break;
  case 0x1c: ;
    uVar1 = 0x2d;
    break;
  case 0x1d: ;
    uVar1 = 0x15;
    break;
  case 0x1e: ;
    uVar1 = 0x4a;
    break;
  case 0x1f: ;
    uVar1 = 0x5b;
    break;
  case 0x20: ;
    uVar1 = 0x51;
    break;
  case 0x21: ;
    uVar1 = 0x29;
    break;
  case 0x22: ;
    uVar1 = 0xc;
    break;
  case 0x23: ;
    uVar1 = 0x28;
    break;
  case 0x24: ;
    uVar1 = 0x38;
    break;
  case 0x25: ;
    uVar1 = 0x57;
    break;
  case 0x27: ;
    uVar1 = 0x2a;
    break;
  case 0x29: ;
    uVar1 = 0x16;
    break;
  case 0x2a: ;
    uVar1 = 0x5c;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  piVar3 = (int *)F_00763050(uVar2,uVar1);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
    return (char)uVar2 != '\0';
  }
switchD_0043428c_caseD_19: ;
  return 0;
}

/* ref: FUN_004344b0 */
uint F_004344b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4344b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((char)param_3 != '\0') {
    F_008bbbe0((undefined *)((int)this + 0x1f0),param_1,param_2);
  }
  *(undefined1 *)((int)this + 0x5babd) = 1;
  uVar1 = F_00abefa0((undefined *)((int)this + 0x5b8f0),param_1,this);
  return uVar1;
}

/* ref: FUN_004344f0 */
uint F_004344f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4344f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *(gen_code32 *)((int)this + param_2 * 8 + 0x14);
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(*(int *)((int)this + param_2 * 8 + 0x18) + -4 + (int)this,((undefined1 *)(gen_frame + 0x4)),param_3,
                      param_4);
    F_00560a60(param_1,uVar2);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00434550 */
uint F_00434550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x434550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (((byte)*(undefined4 *)param_2 & 0xf) == 6) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(param_2 + 4),REFG(undefined4, 0x108cc50));
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),uVar1,REFG(undefined4, 0x108cc50));
    *(undefined1 *)((int)this + 0x5babd) = 1;
    F_00abefa0((undefined *)((int)this + 0x5b8f0),((undefined1 *)(gen_frame + 0x54)),this);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  }
  *param_1 = 0;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)param_1;
}

/* ref: FUN_004345f0 */
uint F_004345f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4345f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (((byte)*(undefined4 *)param_2 & 0xf) == 6) {
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)),uVar1,REFG(undefined4, 0x108cc50));
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)),uVar1,REFG(undefined4, 0x108cc50));
    if (param_3 < 3) {
      F_008bbbe0((undefined *)((int)this + 0x1f0),((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
    }
    *(undefined1 *)((int)this + 0x5babd) = 1;
    F_00abefa0((undefined *)((int)this + 0x5b8f0),((undefined1 *)(gen_frame + 0x54)),this);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  }
  *param_1 = 0;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)param_1;
}

/* ref: FUN_004346c0 */
uint F_004346c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4346c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090754));
  REFG(undefined1, 0x12fdbd7) = 0;
  uVar1 = F_0042c880((undefined *)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  return (uint)uVar1;
}

/* ref: FUN_00434700 */
uint F_00434700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x434700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)((*(ushort *)(in_ecx + 0xc) & (ushort)param_2) != 0);
}

/* ref: FUN_00434720 */
uint F_00434720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x434720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
  iVar1 = *(int *)(uVar2 + 0x1bd48);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4),8)));
  if (((((char)this_00 != '\0') && ((*(byte *)(uVar2 + 0x2c24c) & 2) != 0)) && (iVar1 != 1)) &&
     (*(char *)((int)this + 0x13) == '\0')) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    this_00 = (undefined *)F_00763050(uVar2,0x56);
    if ((*(int *)((int)this + 0x18) == 0) && (this_00 != (undefined *)0x0)) {
      *(undefined4 *)((int)this + 0x28) = param_4;
      *(undefined4 *)((int)this + 0x20) = param_1;
      *(undefined4 *)((int)this + 0x24) = param_3;
      F_0042e430((undefined *)((int)this + 0x30),param_2);
      this_00 = (undefined *)F_00778b60(this_00,param_1,param_2);
      *(undefined4 *)((int)this + 0x18) = 4;
    }
  }
  return (uint)this_00;
}

/* ref: FUN_004347c0 */
unsigned int F_004347c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4347c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x14) = 0;
  return 0;
}

/* ref: FUN_00434820 */
uint F_00434820(unsigned int gen_a0)
{
  GEN_ENTER(0x434820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  undefined * this_01;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  ulonglong uVar3;
  
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = REFG(void * PTR32, 0x1379694);
  uVar3 = F_005339f0(&REFG(undefined4, 0x1375bc0));
  uVar2 = (uint)uVar3;
  if (uVar3 == 0xe0000000) {
    uVar3 = F_00538780(&REFG(undefined4, 0x1375bc0));
    uVar2 = (uint)uVar3;
    if ((uVar3 == 0xe0000000) && (this_00 != (undefined *)0x0)) {
      bVar1 = F_00a34970(this_01,0x160);
      if (bVar1 != 0) {
        if (*(char *)((int)this_00 + 0x2e08) == '\0') {
          F_00aa0ed0(this_00,0x32,0);
        }
        else {
          F_00a69a80();
        }
      }
      bVar1 = F_00a34970(this_01,0x15f);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        if (*(char *)((int)this_00 + 0x2e08) != '\0') {
          uVar2 = F_00a69a80();
          return uVar2;
        }
        bVar1 = F_00a7efa0(&REFG(char, 0x14ab058),(uint)(REFG(char, 0x14ab058) == '\0'));
        uVar2 = CONCAT31(extraout_var_00,bVar1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00434920 */
uint F_00434920(unsigned int gen_a0)
{
  GEN_ENTER(0x434920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = F_00763050(uVar1,0x56);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,6);
  if ((uVar3 != 0) && (*(short *)(uVar1 + 0xc) == 0)) {
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d34))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x2d34))) = 0;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar3;
}

/* ref: FUN_004349a0 */
byte F_004349a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4349a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint in_ecx;
  int * this_00;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = F_00a5f2b0(param_1);
  if (uVar2 == 0) {
    if (param_1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
      if (uVar2 == 7) {
        uVar3 = 6;
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
        this_00 = (int *)F_00763050(uVar2,uVar3);
        if (this_00 != (int *)0x0) {
          bVar1 = F_0076a1f0(param_1);
          if (bVar1 != 0) {
            F_00769610(this_00);
            uVar2 = F_00769ad0(this_00,param_1);
            if (1 < (int)uVar2) {
              iVar4 = param_1[0x1d];
              goto LAB_004349f6;
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = 6;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    this_00 = (int *)F_00763050(in_ecx,uVar3);
    if (this_00 != (int *)0x0) {
      bVar1 = F_0076a220(uVar2);
      if (bVar1 != 0) {
        F_00769610(this_00);
        F_007cd910(this_00,uVar2);
        iVar4 = *(int *)(uVar2 + 0x74);
LAB_004349f6: ;
        F_0076a1d0(this_00,this,iVar4);
        ((code *)*(gen_code32 *)(*this_00 + 8))(this_00);
        return 1;
      }
    }
    if (REFG(int, 0x1488344) != 0) {
      uVar2 = F_006b8c00();
      uVar2 = F_006c5190(uVar2);
      if ((char)uVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Client::UI::UIInputModule::vf1 */
uint F_00434a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x434a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(char *)(in_ecx + 0x15) == '\0') {
    uVar1 = F_00533a30(&REFG(undefined4, 0x1375bc0));
  }
  else {
    uVar1 = F_005339e0(&REFG(undefined4, 0x1375bc0));
  }
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x74) == param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00434ad0 */
byte F_00434ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x434ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(byte *)(in_ecx + 0xc) & 0xa4) == 0xa4;
}

/* ref: FUN_00434ae0 */
byte F_00434ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x434ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  
  if (*(char *)((int)this + 0x14) == '\0') {
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar1 = F_0075e9d0(in_ecx);
    if (bVar1 == 0) {
      return (*(byte *)((int)this + 0xc) & 0xa4) == 0xa4;
    }
  }
  return 0;
}

/* ref: FUN_00434b10 */
byte F_00434b10(unsigned int gen_a0)
{
  GEN_ENTER(0x434b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x14) == '\0') {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar1 = F_0075e9d0(uVar2);
    if (bVar1 == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      bVar1 = F_005594b0(uVar2);
      if (bVar1 == 0) {
        return (*(ushort *)((int)this + 0xc) & 0x118) == 0x118;
      }
    }
  }
  return 0;
}

/* ref: FUN_00434b60 */
byte F_00434b60(unsigned int gen_a0)
{
  GEN_ENTER(0x434b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  bVar1 = F_007c9500(this_00);
  if (bVar1 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar1 = F_007c8910(uVar2);
    if ((bVar1 == 0) && (REFG(int, 0x1488344) != 0)) {
      uVar2 = F_006b8c00();
      uVar2 = F_006c5190(uVar2);
      if ((char)uVar2 != '\0') {
        return 0;
      }
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x6c))))(*(int * PTR32 *)((int)this + 4));
    if (((char)uVar2 != '\0') && (*(char *)((int)this + 0x14) == '\0')) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      bVar1 = F_0075e9d0(uVar2);
      if (bVar1 == 0) {
        return (*(byte *)((int)this + 0xc) & 0xa4) == 0xa4;
      }
    }
  }
  return 0;
}

/* ref: FUN_00434be0 */
byte F_00434be0(unsigned int gen_a0)
{
  GEN_ENTER(0x434be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_0075e990(uVar2);
  if (bVar1 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar1 = F_0075e9d0(uVar2);
    if (bVar1 == 0) {
      return *(byte *)((int)this + 0xc) >> 1 & 1;
    }
  }
  return 0;
}

/* ref: FUN_00434c20 */
byte F_00434c20(unsigned int gen_a0)
{
  GEN_ENTER(0x434c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x14) == '\0') {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar1 = F_0075e990(uVar2);
    if (bVar1 == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      bVar1 = F_0075e9d0(uVar2);
      if (bVar1 == 0) {
        return (*(byte *)((int)this + 0xc) & 0xa4) == 0xa4;
      }
    }
  }
  return 0;
}

/* ref: FUN_00434c70 */
byte F_00434c70(unsigned int gen_a0)
{
  GEN_ENTER(0x434c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x14) == '\0') {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar1 = F_0075e990(uVar2);
    if (bVar1 == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      bVar1 = F_0075e9d0(uVar2);
      if (bVar1 == 0) {
        return (*(byte *)((int)this + 0xc) & 0xa4) == 0xa4;
      }
    }
  }
  return 0;
}

/* ref: FUN_00434cc0 */
byte F_00434cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x434cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_0075e990(uVar2);
  if (bVar1 == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    bVar1 = F_0075e9d0(uVar2);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00434d00 */
byte F_00434d00(unsigned int gen_a0)
{
  GEN_ENTER(0x434d00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xc) >> 6 & 1;
}

/* ref: FUN_00434d10 */
uint F_00434d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x434d10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = param_2;
    if (param_1 != 1) {
      if (param_1 == 2) {
        iVar1 = param_2 + 0x32;
      }
      else if (param_1 == 3) {
        iVar1 = param_2 + 100;
      }
    }
    if (param_3 == 0) {
      return iVar1 + 65000;
    }
    if (param_3 == 1) {
      return iVar1 + 0xff14;
    }
    if (param_3 == 2) {
      return iVar1 + 0x10040;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00434d60 */
uint F_00434d60(unsigned int gen_a0)
{
  GEN_ENTER(0x434d60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    return param_1 + 0xedc6;
  }
  return 0xffffffff;
}

/* ref: FUN_00434d80 */
uint F_00434d80(unsigned int gen_a0)
{
  GEN_ENTER(0x434d80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    return param_1 + 0xf021;
  }
  return 0xffffffff;
}

/* ref: FUN_00434da0 */
byte F_00434da0(unsigned int gen_a0)
{
  GEN_ENTER(0x434da0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 1) {
    return 1;
  }
  if (param_1 != 2) {
    return 3;
  }
  return 2;
}

/* ref: FUN_00434dd0 */
byte F_00434dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x434dd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
    return 0;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
    return 1;
  case 9: ;
  case 10: ;
  case 0xb: ;
    return 2;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
    return 3;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
    return 4;
  case 0x13: ;
    bVar1 = 5;
  }
  return bVar1;
}

/* ref: FUN_00434e40 */
uint F_00434e40(unsigned int gen_a0)
{
  GEN_ENTER(0x434e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 0xe) {
    return *(uint *)(&REFG(undefined, 0x108ed3c) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00434e60 */
uint F_00434e60(unsigned int gen_a0)
{
  GEN_ENTER(0x434e60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 0xd) {
    return *(uint *)(&REFG(undefined, 0x108ed74) + param_1 * 4);
  }
  return 9999;
}

/* ref: FUN_00434e80 */
uint F_00434e80(unsigned int gen_a0)
{
  GEN_ENTER(0x434e80u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if (param_1 != (undefined *)0x0) {
    if (*(char *)((int)param_1 + 6) == '\0') {
      uVar3 = *(uint *)((int)param_1 + 8);
      if ((*(byte *)((int)param_1 + 0x14) & 1) != 0) {
        uVar3 = uVar3 + 1000000;
      }
    }
    else {
      pvVar2 = (undefined *)F_00a3a860(param_1);
      uVar3 = F_0046e5e0(pvVar2);
    }
    bVar1 = F_00a37790(uVar3);
    if (bVar1 == 0) {
      if (*(char *)((int)param_1 + 6) == '\0') {
        uVar3 = *(uint *)((int)param_1 + 8);
        if ((*(byte *)((int)param_1 + 0x14) & 1) != 0) {
          uVar3 = uVar3 + 1000000;
        }
      }
      else {
        pvVar2 = (undefined *)F_00a3a860(param_1);
        uVar3 = F_0046e5e0(pvVar2);
      }
      uVar3 = F_00ab24a0(uVar3);
      if ((uVar3 != 0) && (*(byte *)(uVar3 + 0xa6) != 0)) {
        uVar3 = F_007605d0((uint)*(byte *)(uVar3 + 0xa6));
        return *(uint *)(&REFG(undefined, 0x108eda8) + uVar3 * 4);
      }
    }
  }
  return 9999;
}

/* ref: FUN_00434f20 */
uint F_00434f20(unsigned int gen_a0)
{
  GEN_ENTER(0x434f20u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if (param_1 != (undefined *)0x0) {
    if (*(char *)((int)param_1 + 6) == '\0') {
      uVar3 = *(uint *)((int)param_1 + 8);
      if ((*(byte *)((int)param_1 + 0x14) & 1) != 0) {
        uVar3 = uVar3 + 1000000;
      }
    }
    else {
      pvVar2 = (undefined *)F_00a3a860(param_1);
      uVar3 = F_0046e5e0(pvVar2);
    }
    bVar1 = F_00a37790(uVar3);
    if (bVar1 == 0) {
      if (*(char *)((int)param_1 + 6) == '\0') {
        uVar3 = *(uint *)((int)param_1 + 8);
        if ((*(byte *)((int)param_1 + 0x14) & 1) != 0) {
          uVar3 = uVar3 + 1000000;
        }
      }
      else {
        pvVar2 = (undefined *)F_00a3a860(param_1);
        uVar3 = F_0046e5e0(pvVar2);
      }
      uVar3 = F_00ab24a0(uVar3);
      if ((uVar3 != 0) && (*(byte *)(uVar3 + 0xa6) != 0)) {
        uVar3 = F_007605d0((uint)*(byte *)(uVar3 + 0xa6));
        if (uVar3 < 0xe) {
          return *(uint *)(&REFG(undefined, 0x108ed3c) + uVar3 * 4);
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00434fc0 */
byte F_00434fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x434fc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((((param_1 != 0xdac) && (param_1 != 0xce4)) && (param_1 != 0xd48)) &&
     ((param_1 < 0xc80 || (0xc89 < param_1)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00435000 */
uint F_00435000(unsigned int gen_a0)
{
  GEN_ENTER(0x435000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 < 0xdad) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0xc80: ;
      return 0x38;
    case 0xc81: ;
      return 0x32;
    case 0xc82: ;
      return 0x33;
    case 0xc83: ;
      return 0x34;
    case 0xc84: ;
      return 0x35;
    case 0xc85: ;
      return 0x36;
    case 0xc86: ;
      return 0x37;
    case 0xc87: ;
      return 0x3a;
    case 0xc88: ;
      return 0x39;
    case 0xc89: ;
      return 0x3b;
    case 0xce4: ;
      return 0x3c;
    case 0xd48: ;
      return 0x3d;
    }
  }
  return 0x31;
}

/* ref: FUN_004351c0 */
byte F_004351c0(void)
{
  GEN_ENTER(0x4351c0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a7399);
}

/* ref: FUN_004351d0 */
byte F_004351d0(void)
{
  GEN_ENTER(0x4351d0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a7388);
}

/* ref: FUN_004351e0 */
byte F_004351e0(void)
{
  GEN_ENTER(0x4351e0u, 0u, 0u, 0u, 0u);
  return REFG(short, 0x14ab148) != 0;
}

/* ref: FUN_004351f0 */
uint F_004351f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4351f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (0 < param_1 - param_2) {
    uVar1 = ((param_1 - param_2) + 0x3b) / 0x3c;
  }
  return uVar1;
}

/* ref: FUN_00435220 */
byte F_00435220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = F_00ab21a0(param_1);
    if (uVar1 == 0) {
      return 0;
    }
  }
  return *(byte *)(uVar1 + 0x45);
}

/* ref: FUN_00435250 */
uint F_00435250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435250u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2;
  if ((param_2 == 0) && (uVar1 = F_00ab21a0(param_1), uVar1 == 0)) {
    return 0;
  }
  uVar2 = uVar1;
  if ((uVar1 == 0) && (uVar2 = F_00ab21a0(param_1), uVar2 == 0)) {
    return param_1;
  }
  if (*(char *)(uVar2 + 0x45) == '\0') {
    return param_1;
  }
  return (uint)*(byte *)(uVar1 + 0x3e);
}

/* ref: FUN_004352a0 */
byte F_004352a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4352a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_1 < 8) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(&REFG(undefined, 0x108ede0) + param_1 * 8);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(&REFG(undefined, 0x108ede4) + param_1 * 8);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_004352e0 */
uint F_004352e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4352e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x13723bc) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x13723bc) = *(uint *)&REFG(undefined, 0x13723bc) | 1;
    REFG(undefined4, 0x13723b8) = *REFG(undefined * PTR32, 0x12fe400);
    REFG(undefined4, 0x13723b9) = REFG(undefined * PTR32, 0x12fe400)[1];
    REFG(undefined4, 0x13723ba) = REFG(undefined * PTR32, 0x12fe400)[2];
    REFG(undefined4, 0x13723bb) = 0;
  }
  if (param_1 < 0x20) {
    REFG(undefined4, 0x13723ba) = REFG(undefined * PTR32, 0x12fe400)[2] + (char)param_1;
    return 0x13723b8;
  }
  return 0;
}

/* ref: FUN_00435340 */
uint F_00435340(unsigned int gen_a0)
{
  GEN_ENTER(0x435340u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  undefined * puVar2;
  undefined * puVar3;
  uint uVar4;
  
  uVar4 = param_1;
  puVar2 = REFG(undefined * PTR32, 0x12fe404);
  puVar3 = (undefined *)0x0;
  if (param_1 < 1000) {
    REFG(undefined4, 0x13723c9) = 0;
    param_1 = 0;
    puVar3 = &REFG(undefined4, 0x13723c9);
    do {
      puVar3[-3] = *puVar2;
      puVar3[-2] = puVar2[1];
      uVar1 = (int)uVar4 / 10;
      puVar3[-1] = puVar2[2] + (char)uVar1 * -10 + (char)uVar4;
      if (uVar1 == 0) {
        return (uint)(puVar3 + -3);
      }
      param_1 = param_1 + 1;
      uVar4 = uVar1;
      puVar3 = puVar3 + -3;
    } while ((int)param_1 < 3);
    puVar3 = &REFG(undefined, 0x13723c0);
  }
  return (uint)puVar3;
}

/* ref: FUN_004353c0 */
uint F_004353c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4353c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x16058;
}

/* ref: FUN_004353d0 */
uint F_004353d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4353d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x16120;
}

/* ref: FUN_004353e0 */
uint F_004353e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4353e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 0xb6) * 500 + param_1;
}

/* ref: FUN_00435440 */
uint F_00435440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 8 + param_2 * 4);
}

/* ref: FUN_00435450 */
ulonglong F_00435450(unsigned int gen_a0)
{
  GEN_ENTER(0x435450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(ulonglong *)((int)this + 0xa8);
}

/* ref: FUN_00435460 */
uint F_00435460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x435460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0xa8) = param_1;
  *(undefined4 *)((int)this + 0xac) = param_2;
  return param_1;
}

/* ref: FUN_00435480 */
byte F_00435480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((uint)(((ulonglong)(((ulonglong)(byte)param_1 < 0x40) ? ((*(ulonglong *)((int)this + 0xa8) >> (ulonglong)(byte)param_1)) : 0))) & 1) != 1) {
    return 0;
  }
  return 1;
}

/* ref: Client::UI::Info::InfoProxyBlacklist::vf5 */
uint F_00435500(unsigned int gen_a0)
{
  GEN_ENTER(0x435500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  this[0x660] = (undefined1)0x1;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x10);
  if (uVar2 != 0) {
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) != (uint)(*(uint *)(this + 8) < 200)) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) = (uint)(*(uint *)(this + 8) < 200);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00435540 */
ulonglong F_00435540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  uint uVar7;
  undefined4 * puVar8;
  bool bVar9;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0xe);
  if (uVar3 != 0) {
    uVar7 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      puVar8 = *(undefined4 * PTR32 *)(uVar3 + 0x20);
      do {
        pbVar4 = (byte *)*puVar8;
        pbVar6 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00435596: ;
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0043559b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00435596;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_0043559b: ;
        if (iVar5 == 0) {
          return CONCAT44(*(undefined4 *)((int)this + uVar7 * 8 + 0x14),
                          *(undefined4 *)((int)this + uVar7 * 8 + 0x10));
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar7 < *(uint *)((int)this + 8));
    }
  }
  return 0;
}

/* ref: FUN_004355d0 */
byte F_004355d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4355d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x660) == '\0') {
    return 1;
  }
  uVar2 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    piVar1 = (int *)((int)this + 0x10);
    do {
      if ((*piVar1 == param_1) && (piVar1[1] == param_2)) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (uVar2 < *(uint *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00435620 */
uint F_00435620(unsigned int gen_a0)
{
  GEN_ENTER(0x435620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1090768));
  uVar1 = F_0042c880((undefined *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyCatalogSearch::vf1 */
unsigned int F_00435640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x435640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint in_ecx;
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  puVar2 = param_1;
  if (param_2 != 0) {
    do {
      if (*(uint *)(this + 0x394) <= *(uint *)(this + 8)) {
        return 0;
      }
      *((undefined4 *)GEN_TOP((this + *(uint *)(this + 8) * 8 + 0x6c))) = *puVar2;
      *((undefined2 *)GEN_TOP((this + *(int *)(this + 8) * 8 + 0x70))) = *(undefined2 *)(puVar2 + 1);
      uVar3 = 0x3c;
      in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      this_00 = (undefined *)F_00763050(in_ecx,uVar3);
      if (this_00 != (undefined *)0x0) {
        F_0077ad70(this_00,*(undefined4 *)(this + 8),*puVar2,(uint)*(ushort *)(puVar2 + 1));
      }
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (uVar1 < param_2);
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyCatalogSearch::vf2 */
unsigned int F_004356b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4356b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI::Info::InfoProxyCatalogSearch::vf3 */
unsigned int F_004356c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4356c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: Client::UI::Info::InfoProxyCatalogSearch::vf5 */
uint F_004356d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4356d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar2 = 0x3c;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  this_00 = (undefined *)F_00763050(uVar1,uVar2);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_007defe0(this_00);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_004356f0 */
uint F_004356f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4356f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < *(uint *)(in_ecx + 8)) {
    return in_ecx + 0x6c + param_2 * 8;
  }
  return 0;
}

/* ref: FUN_00435710 */
uint F_00435710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * puVar1;
  
  if ((param_2 < *(uint *)(in_ecx + 8)) &&
     (puVar1 = (uint *)(in_ecx + 0x6c + param_2 * 8), puVar1 != (uint *)0x0)) {
    return *puVar1;
  }
  return 0;
}

/* ref: FUN_00435730 */
uint F_00435730(unsigned int gen_a0)
{
  GEN_ENTER(0x435730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38c);
}

/* ref: FUN_00435740 */
uint F_00435740(unsigned int gen_a0)
{
  GEN_ENTER(0x435740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x390);
}

/* ref: FUN_00435750 */
uint F_00435750(unsigned int gen_a0)
{
  GEN_ENTER(0x435750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x394);
}

/* ref: FUN_00435760 */
unsigned int F_00435760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x435760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_1 + -1000000;
  if (999999 < param_1 - 1000000U) {
    iVar3 = param_1;
  }
  uVar1 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    piVar2 = (int *)((int)this + 0x6c);
    while (*piVar2 != iVar3) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
      if (*(uint *)((int)this + 8) <= uVar1) {
        return 0;
      }
    }
    iVar3 = (uint)*(ushort *)((int)this + uVar1 * 8 + 0x70) - (uint)(ushort)param_2;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    *(short *)((int)this + uVar1 * 8 + 0x70) = (short)iVar3;
  }
  return 0;
}

/* ref: FUN_004357e0 */
byte F_004357e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4357e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined1 *)((int)this + 0x11) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x12) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x10) = 10;
  *(byte *)((int)this + 0x13) = (byte)param_3;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_4;
  return (byte)param_3;
}

/* ref: FUN_00435810 */
uint F_00435810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x10) = 0x14;
  uVar1 = F_0042e430((undefined *)((int)this + 0x18),param_1);
  return uVar1;
}

/* ref: FUN_00435830 */
uint F_00435830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x435830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x11) = (undefined1)param_3;
  *(undefined2 *)((int)this + 0x14) = (undefined2)param_4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  *(short *)((int)this + 0x12) = (short)param_5;
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_5 * 0x48 >> 0x20) != 0) |
                       (uint)((ulonglong)param_5 * 0x48),0,0);
  *(uint *)((int)this + 0x18) = uVar1;
  *(undefined2 *)((int)this + 0x1c) = 0;
  return (uint)this;
}

/* ref: FUN_004358a0 */
uint F_004358a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4358a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: FUN_004358c0 */
byte F_004358c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4358c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(uint *)(param_1 + 8) & 0x78000000) != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004358e0 */
byte F_004358e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4358e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x18);
    do {
      if ((*piVar2 == param_1) && (piVar2[1] == param_2)) {
        if ((char)(*(int * PTR32 *)((int)this + 0x18))[uVar1 * 0x12 + 0xf] == '\0') {
          return 0;
        }
        return 1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x12;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  return 0;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf8 */
uint F_00435940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x435940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_3 * 5;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + param_4 * 0x20);
  if (*(int *)(iVar1 + param_3 * 0x20) != iVar2) {
    *(int *)(iVar1 + param_3 * 0x20) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 4 + param_4 * 0x20);
  if (*(int *)(iVar1 + 4 + param_3 * 0x20) != iVar2) {
    *(int *)(iVar1 + 4 + param_3 * 0x20) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 8 + param_4 * 0x20);
  if (*(int *)(iVar1 + 8 + param_3 * 0x20) != iVar2) {
    *(int *)(iVar1 + 8 + param_3 * 0x20) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 0xc + param_4 * 0x20);
  if (*(int *)(iVar1 + 0xc + param_3 * 0x20) != iVar2) {
    *(int *)(iVar1 + 0xc + param_3 * 0x20) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 0x10 + param_4 * 0x20);
  if (*(int *)(iVar1 + 0x10 + param_3 * 0x20) != iVar2) {
    *(int *)(iVar1 + 0x10 + param_3 * 0x20) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 0x14 + param_4 * 0x20);
  if (*(int *)(iVar1 + 0x14 + param_3 * 0x20) != iVar2) {
    *(int *)(iVar1 + 0x14 + param_3 * 0x20) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 0x18 + param_4 * 0x20);
  if (*(int *)(iVar1 + 0x18 + param_3 * 0x20) != iVar2) {
    *(int *)(iVar1 + 0x18 + param_3 * 0x20) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 0x1c + param_4 * 0x20);
  if (*(int *)(iVar1 + 0x1c + param_3 * 0x20) != iVar2) {
    *(int *)(iVar1 + 0x1c + param_3 * 0x20) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)param_2 + 0x20);
  iVar2 = *(int *)(iVar1 + param_4 * 0x14);
  if (iVar2 != *(int *)(iVar1 + param_3 * 0x14)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(int *)(iVar1 + param_3 * 0x14) = iVar2;
  F_00431250(param_2,iVar3 + 1,*((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 4 + param_4 * 0x14)))
               ,0,1,0);
  iVar1 = *(int *)((int)param_2 + 0x20);
  iVar2 = *(int *)(iVar1 + 8 + param_4 * 0x14);
  if (iVar2 != *(int *)(iVar1 + 8 + param_3 * 0x14)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(int *)(iVar1 + 8 + param_3 * 0x14) = iVar2;
  F_00431250(param_2,iVar3 + 3,
               *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0xc + param_4 * 0x14))),0,1,0);
  uVar4 = F_00431250(param_2,iVar3 + 4,
                       *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x10 + param_4 * 0x14))),0,1,0)
  ;
  return uVar4;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf10 */
uint F_00435a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00ab1c90((uint)*(ushort *)(param_1 + 10));
  if (uVar1 != 0) {
    puVar2 = (uint *)F_00ab2750((uint)*(ushort *)(uVar1 + 0x20));
    if (puVar2 != (uint *)0x0) {
      return (*puVar2 & 0xffffff) + (int)puVar2;
    }
  }
  return 0x108d04e;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf11 */
uint F_00435ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  bVar2 = (byte)(uVar1 >> 8) & 7;
  return (-(uint)((uVar1 & 0xf0000000) != 0x20000000) & 0xffffffc0) + 0x40 |
         (uint)(((byte)uVar1 & 0xf0) == 0x10) | ~(uVar1 >> 0x11) & 0x80 |
         -(uint)(*(char *)(param_1 + 0x17) != '\0') & 0x20 | (bVar2 != 4) - 1 & 0x10 |
         (bVar2 != 3) - 1 & 8 | (bVar2 != 2) - 1 & 4 | (bVar2 != 1) - 1 & 2;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf1 */
uint F_00435b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x435b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,(uint)(byte)this[0x10]);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,(uint)(byte)this[0x11]);
  if ((uVar3 != 0) && (uVar4 != 0)) {
    local_8 = 0;
    if (param_2 != 0) {
      puVar6 = (undefined4 *)(param_1 + 0x10);
      do {
        if (puVar6[-4] == 0 && puVar6[-3] == 0) break;
        iVar5 = *(int *)(this + 8);
        iVar1 = *(int *)(this + 0x18);
        *(undefined4 *)(iVar1 + iVar5 * 0x48) = puVar6[-4];
        *(undefined4 *)(iVar1 + 4 + iVar5 * 0x48) = puVar6[-3];
        iVar5 = *(int *)(this + 8);
        iVar1 = *(int *)(this + 0x18);
        *(undefined4 *)(iVar1 + 8 + iVar5 * 0x48) = puVar6[2];
        *(undefined4 *)(iVar1 + 0xc + iVar5 * 0x48) = puVar6[3];
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x10 + *(int *)(this + 8) * 0x48))) = *puVar6;
        *((undefined2 *)GEN_TOP((*(int *)(this + 0x18) + 0x14 + *(int *)(this + 8) * 0x48))) =
             *(undefined2 *)(this + 8);
        *((undefined1 *)GEN_TOP((*(int *)(this + 0x18) + 0x16 + *(int *)(this + 8) * 0x48))) =
             *(undefined1 *)(puVar6 + 1);
        *((undefined1 *)GEN_TOP((*(int *)(this + 0x18) + 0x17 + *(int *)(this + 8) * 0x48))) =
             *(undefined1 *)((int)puVar6 + 5);
        *((undefined1 *)GEN_TOP((*(int *)(this + 0x18) + 0x18 + *(int *)(this + 8) * 0x48))) =
             *(undefined1 *)((int)puVar6 + 6);
        *((undefined1 *)GEN_TOP((*(int *)(this + 0x18) + 0x1a + *(int *)(this + 8) * 0x48))) =
             *(undefined1 *)((int)puVar6 + 0x16);
        puVar7 = (undefined4 *)((int)puVar6 + 0x17);
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x1c + *(int *)(this + 8) * 0x48)));
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x3c + *(int *)(this + 8) * 0x48)));
        *puVar7 = *(undefined4 *)((int)puVar6 + 0x37);
        *(undefined2 *)(puVar7 + 1) = *(undefined2 *)((int)puVar6 + 0x3b);
        *(undefined1 *)((int)puVar7 + 6) = *(undefined1 *)((int)puVar6 + 0x3d);
        ((code *)*(gen_code32 *)(*(int *)this + 0x24))
                  (this,uVar3,uVar4,*(int *)(this + 8),
                   *(int *)(this + 0x18) + *(int *)(this + 8) * 0x48,puVar6 + -4);
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        puVar6 = puVar6 + 0x14;
        local_8 = local_8 + 1;
      } while (local_8 < param_2);
    }
    uVar4 = *(uint *)(this + 8);
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) != uVar4) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) = uVar4;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
  }
  return uVar4;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf2 */
uint F_00435d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x435d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(uint)(byte)this[0x10]);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(uint)(byte)this[0x11]);
  if ((uVar2 != 0) && (uVar3 != 0)) {
    uVar6 = 0;
    if (*(int *)(this + 8) != 0) {
      piVar1 = *(int * PTR32 *)(this + 0x18);
LAB_00435d90: ;
      if ((*piVar1 != *param_1) || (piVar1[1] != param_1[1])) goto LAB_00435d9f;
      uVar6 = uVar6 + 1;
      if (uVar6 < *(uint *)(this + 8)) {
        iVar4 = uVar6 * 0x48;
        do {
          puVar7 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar4)));
          puVar8 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar4))) + -0x12;
          for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,uVar2,uVar3,uVar6 - 1,uVar6);
          iVar4 = iVar4 + 0x48;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(this + 8));
      }
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
    }
LAB_00435dff: ;
    uVar3 = *(uint *)(this + 8);
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) != uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar3;
LAB_00435d9f: ;
  uVar6 = uVar6 + 1;
  piVar1 = piVar1 + 0x12;
  if (*(uint *)(this + 8) <= uVar6) goto LAB_00435dff;
  goto LAB_00435d90;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf12 */
uint F_00435e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x435e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(uint)(byte)this[0x10]);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(uint)(byte)this[0x11]);
  if (((uVar2 != 0) && (uVar3 != 0)) && (piVar1 = *(int * PTR32 *)(this + 0x18), piVar1 != (int *)0x0)) {
    uVar4 = 0;
    if (*(int *)(this + 8) != 0) {
LAB_00435e94: ;
      if ((*piVar1 != param_1) || (piVar1[1] != param_2)) goto LAB_00435ea3;
      uVar4 = uVar4 + 1;
      if (uVar4 < *(uint *)(this + 8)) {
        iVar5 = uVar4 * 0x48;
        do {
          puVar7 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar5)));
          puVar8 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar5))) + -0x12;
          for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,uVar2,uVar3,uVar4 - 1,uVar4);
          iVar5 = iVar5 + 0x48;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(this + 8));
      }
      *(int *)(this + 8) = *(int *)(this + 8) + -1;
    }
LAB_00435f0d: ;
    uVar3 = *(uint *)(this + 8);
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) != uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar3;
LAB_00435ea3: ;
  uVar4 = uVar4 + 1;
  piVar1 = piVar1 + 0x12;
  if (*(uint *)(this + 8) <= uVar4) goto LAB_00435f0d;
  goto LAB_00435e94;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf3 */
uint F_00435f30(unsigned int gen_a0)
{
  GEN_ENTER(0x435f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 8) = 0;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(uint)(byte)this[0x10]);
  if (uVar2 != 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) != *(int *)(this + 8))
    {
      *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + (uint)*(ushort *)(this + 0x14) * 4))) = *(int *)(this + 8);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00435f70 */
ulonglong F_00435f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x435f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  byte * pbVar7;
  byte * pbVar8;
  bool bVar9;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(uint)*(byte *)((int)this + 0x11));
  if (uVar4 != 0) {
    uVar4 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      iVar2 = *(int *)((int)this + 0x18);
      pbVar7 = (byte *)(iVar2 + 0x1c);
      pbVar6 = param_1;
      pbVar8 = pbVar7;
LAB_00435fb0: ;
      do {
        bVar1 = *pbVar7;
        bVar9 = bVar1 < *pbVar6;
        if (bVar1 == *pbVar6) {
          if (bVar1 != 0) {
            bVar1 = pbVar7[1];
            bVar9 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00435fd0;
            pbVar7 = pbVar7 + 2;
            pbVar6 = pbVar6 + 2;
            if (bVar1 != 0) goto LAB_00435fb0;
          }
          iVar5 = 0;
        }
        else {
LAB_00435fd0: ;
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        if (iVar5 == 0) {
          return CONCAT44(*(undefined4 *)(iVar2 + 4 + uVar4 * 0x48),
                          *(undefined4 *)(iVar2 + uVar4 * 0x48));
        }
        uVar4 = uVar4 + 1;
        pbVar7 = pbVar8 + 0x48;
        pbVar6 = param_1;
        pbVar8 = pbVar7;
      } while (uVar4 < *(uint *)((int)this + 8));
    }
  }
  return 0;
}

/* ref: FUN_00436010 */
uint F_00436010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x436010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,(uint)*(byte *)((int)this + 0x11));
  if (uVar3 != 0) {
    uVar3 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      pbVar6 = ((byte *)GEN_TOP((*(int *)((int)this + 0x18) + 0x1c)));
      pbVar5 = param_1;
      pbVar7 = pbVar6;
LAB_00436050: ;
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 == *pbVar5) {
          if (bVar1 != 0) {
            bVar1 = pbVar6[1];
            bVar8 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00436070;
            pbVar6 = pbVar6 + 2;
            pbVar5 = pbVar5 + 2;
            if (bVar1 != 0) goto LAB_00436050;
          }
          iVar4 = 0;
        }
        else {
LAB_00436070: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        }
        if (iVar4 == 0) {
          return *(int *)((int)this + 0x18) + uVar3 * 0x48;
        }
        uVar3 = uVar3 + 1;
        pbVar6 = pbVar7 + 0x48;
        pbVar5 = param_1;
        pbVar7 = pbVar6;
      } while (uVar3 < *(uint *)((int)this + 8));
    }
  }
  return 0;
}

/* ref: FUN_004360a0 */
ulonglong F_004360a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4360a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(uint *)((int)this + 8)) {
    return CONCAT44(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 4 + param_1 * 0x48))),
                    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 0x48))));
  }
  return 0;
}

