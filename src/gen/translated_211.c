#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0105f580 */
uint F_0105f580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f580u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 0xb;
}

/* ref: FUN_0105f5e0 */
uint F_0105f5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2;
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (param_2 < uVar3 + 8) {
    return uVar3;
  }
  uVar4 = F_0105df60(8,param_1 + 8);
  uVar3 = uVar3 + uVar4;
  if (param_2 < uVar3 + 8) {
    return uVar3;
  }
  uVar4 = F_0105df60(8,param_1 + 0x10);
  uVar3 = uVar3 + uVar4;
  if (param_2 < uVar3 + 8) {
    return uVar3;
  }
  uVar4 = F_0105df60(8,param_1 + 0x18);
  uVar3 = uVar3 + uVar4;
  if (param_2 < uVar3 + 4) {
    return uVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  if (param_2 < uVar3 + 8) {
    return uVar3 + 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  if (param_2 < uVar3 + 0xc) {
    return uVar3 + 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)(param_1 + 0x29) = uVar1;
  if (param_2 < uVar3 + 0x10) {
    return uVar3 + 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x2f);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined1 *)(param_1 + 0x2d) = uVar1;
  if (param_2 < uVar3 + 0x14) {
    return uVar3 + 0x10;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x33);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x32);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_1 + 0x31);
  *(undefined1 *)(param_1 + 0x31) = uVar1;
  if (param_2 < uVar3 + 0x16) {
    return uVar3 + 0x14;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x35);
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_1 + 0x34);
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  if (param_2 < uVar3 + 0x18) {
    return uVar3 + 0x16;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x37);
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_1 + 0x36);
  *(undefined1 *)(param_1 + 0x36) = uVar1;
  if (param_2 < uVar3 + 0x1a) {
    return uVar3 + 0x18;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x39);
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  uVar4 = uVar3 + 0x1c;
  if (param_2 < uVar4) {
    return uVar3 + 0x1a;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x3a);
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_1 + 0x3b);
  *(undefined1 *)(param_1 + 0x3b) = uVar1;
  if (param_2 < uVar3 + 0x2c) {
    if (param_2 <= uVar4) goto LAB_0105f7ac;
    uVar3 = F_0105e000(param_2 - uVar4,param_1 + 0x3c);
  }
  else {
    uVar3 = 0;
    param_2 = 8;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x3c + uVar3);
      *(undefined1 *)(param_1 + 0x3c + uVar3) = *(undefined1 *)(param_1 + 0x3d + uVar3);
      *(undefined1 *)(param_1 + 0x3d + uVar3) = uVar1;
      uVar3 = uVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar4 = uVar4 + uVar3;
LAB_0105f7ac: ;
  if (uVar4 + 0x20 <= uVar2) {
    uVar4 = uVar4 + 0x24;
  }
  return uVar4;
}

/* ref: FUN_0105f7c0 */
uint F_0105f7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f7c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  uint uVar6;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  puVar5 = (undefined1 *)(param_1 + 0x21);
  do {
    if (param_2 <= local_8) break;
    uVar2 = F_0105df60(8,puVar5 + -0x21);
    if (uVar2 + 8 < 0x71) {
      uVar3 = F_0105df60(8,puVar5 + -0x19);
      uVar2 = uVar2 + uVar3;
      if (uVar2 + 8 < 0x71) {
        uVar3 = F_0105df60(8,puVar5 + -0x11);
        uVar2 = uVar2 + uVar3;
        if (uVar2 + 8 < 0x71) {
          uVar3 = F_0105df60(8,puVar5 + -9);
          uVar3 = uVar2 + uVar3;
          uVar2 = uVar3;
          if (uVar3 + 4 < 0x71) {
            uVar1 = puVar5[-1];
            puVar5[-1] = puVar5[2];
            puVar5[2] = uVar1;
            uVar1 = *puVar5;
            *puVar5 = puVar5[1];
            puVar5[1] = uVar1;
            uVar2 = uVar3 + 4;
            if (uVar3 + 8 < 0x71) {
              uVar1 = puVar5[3];
              puVar5[3] = puVar5[6];
              puVar5[6] = uVar1;
              uVar1 = puVar5[4];
              puVar5[4] = puVar5[5];
              puVar5[5] = uVar1;
              uVar2 = uVar3 + 8;
              if (uVar3 + 0xc < 0x71) {
                uVar1 = puVar5[7];
                puVar5[7] = puVar5[10];
                puVar5[10] = uVar1;
                uVar1 = puVar5[8];
                puVar5[8] = puVar5[9];
                puVar5[9] = uVar1;
                uVar2 = uVar3 + 0xc;
                if (uVar3 + 0x10 < 0x71) {
                  uVar1 = puVar5[0xb];
                  puVar5[0xb] = puVar5[0xe];
                  puVar5[0xe] = uVar1;
                  uVar1 = puVar5[0xc];
                  puVar5[0xc] = puVar5[0xd];
                  puVar5[0xd] = uVar1;
                  uVar2 = uVar3 + 0x10;
                  if (uVar3 + 0x14 < 0x71) {
                    uVar1 = puVar5[0x12];
                    puVar5[0x12] = puVar5[0xf];
                    puVar5[0xf] = uVar1;
                    uVar1 = puVar5[0x11];
                    puVar5[0x11] = puVar5[0x10];
                    puVar5[0x10] = uVar1;
                    uVar2 = uVar3 + 0x14;
                    if (uVar3 + 0x16 < 0x71) {
                      uVar1 = puVar5[0x14];
                      puVar5[0x14] = puVar5[0x13];
                      puVar5[0x13] = uVar1;
                      uVar2 = uVar3 + 0x16;
                      if (uVar3 + 0x18 < 0x71) {
                        uVar1 = puVar5[0x15];
                        puVar5[0x15] = puVar5[0x16];
                        puVar5[0x16] = uVar1;
                        uVar2 = uVar3 + 0x18;
                        if (uVar3 + 0x1a < 0x71) {
                          uVar1 = puVar5[0x18];
                          puVar5[0x18] = puVar5[0x17];
                          uVar6 = uVar3 + 0x1c;
                          puVar5[0x17] = uVar1;
                          uVar2 = uVar3 + 0x1a;
                          if (uVar6 < 0x71) {
                            uVar1 = puVar5[0x1a];
                            puVar5[0x1a] = puVar5[0x19];
                            puVar5[0x19] = uVar1;
                            if (uVar3 + 0x2c < 0x71) {
                              uVar2 = 0;
                              iVar4 = 8;
                              do {
                                uVar1 = puVar5[uVar2 + 0x1b];
                                puVar5[uVar2 + 0x1b] = puVar5[uVar2 + 0x1c];
                                puVar5[uVar2 + 0x1c] = uVar1;
                                uVar2 = uVar2 + 2;
                                iVar4 = iVar4 + -1;
                              } while (iVar4 != 0);
LAB_0105f9af: ;
                              uVar6 = uVar6 + uVar2;
                            }
                            else if (uVar6 < 0x70) {
                              uVar2 = F_0105e000(0x70 - uVar6,puVar5 + 0x1b);
                              goto LAB_0105f9af;
                            }
                            uVar2 = uVar6;
                            if (uVar6 + 0x20 < 0x71) {
                              uVar2 = uVar6 + 0x24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_c = local_c + 1;
    local_8 = local_8 + uVar2;
    puVar5 = puVar5 + 0x70;
  } while (local_c < 10);
  return local_8 + 3;
}

/* ref: FUN_0105fa30 */
uint F_0105fa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fa30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = 0;
  puVar5 = (undefined1 *)(param_1 + 9);
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar2 = F_0105df60(8,puVar5 + -9);
    uVar3 = uVar2;
    if (uVar2 + 4 < 0x31) {
      uVar1 = puVar5[2];
      puVar5[2] = puVar5[-1];
      puVar5[-1] = uVar1;
      uVar1 = puVar5[1];
      puVar5[1] = *puVar5;
      *puVar5 = uVar1;
      uVar3 = uVar2 + 7;
      if (uVar2 + 0x27 < 0x31) {
        uVar3 = uVar2 + 0x27;
      }
    }
    iVar6 = iVar6 + 1;
    uVar4 = uVar4 + uVar3;
    puVar5 = puVar5 + 0x30;
  } while (iVar6 < 8);
  return uVar4;
}

/* ref: FUN_0105faa0 */
uint F_0105faa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105faa0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xd;
}

/* ref: FUN_0105fb30 */
uint F_0105fb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fb30u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  return 0x12;
}

/* ref: FUN_0105fbe0 */
uint F_0105fbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  return (-(uint)(param_2 < 0x32) & 0xffffffe0) + 0x32;
}

/* ref: FUN_0105fc90 */
uint F_0105fc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fc90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  iVar3 = 0;
  uVar4 = 4;
  puVar2 = param_1 + 9;
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = puVar2[-5];
    puVar2[-5] = puVar2[-2];
    puVar2[-2] = uVar1;
    uVar1 = puVar2[-4];
    puVar2[-4] = puVar2[-3];
    puVar2[-3] = uVar1;
    uVar1 = puVar2[-1];
    puVar2[-1] = puVar2[2];
    puVar2[2] = uVar1;
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    uVar1 = puVar2[3];
    puVar2[3] = puVar2[6];
    puVar2[6] = uVar1;
    uVar1 = puVar2[4];
    puVar2[4] = puVar2[5];
    puVar2[5] = uVar1;
    uVar1 = puVar2[7];
    puVar2[7] = puVar2[10];
    puVar2[10] = uVar1;
    uVar1 = puVar2[8];
    puVar2[8] = puVar2[9];
    puVar2[9] = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 0x32;
    puVar2 = puVar2 + 0x34;
  } while (iVar3 < 0x14);
  return uVar4;
}

/* ref: FUN_0105fe00 */
uint F_0105fe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fe00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = uVar1;
      return uVar2 + 5;
    }
  }
  return uVar2;
}

/* ref: FUN_0105fe70 */
uint F_0105fe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fe70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 6;
}

/* ref: FUN_0105fec0 */
uint F_0105fec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fec0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar5 = 0;
  puVar4 = (undefined1 *)(param_1 + 3);
  do {
    if (param_2 <= uVar6) break;
    uVar1 = puVar4[-3];
    puVar4[-3] = *puVar4;
    *puVar4 = uVar1;
    uVar1 = puVar4[-2];
    puVar4[-2] = puVar4[-1];
    puVar4[-1] = uVar1;
    uVar1 = puVar4[1];
    puVar4[1] = puVar4[2];
    puVar4[2] = uVar1;
    iVar5 = iVar5 + 1;
    uVar6 = uVar6 + 6;
    puVar4 = puVar4 + 8;
  } while (iVar5 < 0x14);
  if (uVar6 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_1 + 0xa3);
    uVar2 = *(undefined1 *)(param_1 + 0xa2);
    *(undefined1 *)(param_1 + 0xa3) = uVar1;
    *(undefined1 *)(param_1 + 0xa2) = *(undefined1 *)(param_1 + 0xa1);
    *(undefined1 *)(param_1 + 0xa1) = uVar2;
    uVar3 = uVar6 + 4;
    if (uVar6 + 8 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0xa4);
      *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_1 + 0xa7);
      *(undefined1 *)(param_1 + 0xa7) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0xa5);
      *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)(param_1 + 0xa6);
      *(undefined1 *)(param_1 + 0xa6) = uVar1;
      uVar3 = uVar6 + 8;
      if (uVar6 + 0xc <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0xa8);
        *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_1 + 0xab);
        uVar2 = *(undefined1 *)(param_1 + 0xaa);
        *(undefined1 *)(param_1 + 0xab) = uVar1;
        *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(param_1 + 0xa9);
        *(undefined1 *)(param_1 + 0xa9) = uVar2;
        uVar3 = uVar6 + 0xe;
      }
    }
    return uVar3;
  }
  return uVar6;
}

/* ref: FUN_0105ffe0 */
uint F_0105ffe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ffe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar3 = uVar2 + 4;
      if (uVar2 + 8 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x17);
        *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x16);
        *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = uVar1;
        uVar3 = uVar2 + 10;
        if ((uVar2 + 0x38 <= param_2) && (uVar3 = uVar2 + 0x58, param_2 < uVar2 + 0x58)) {
          uVar3 = uVar2 + 0x38;
        }
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_01060080 */
uint F_01060080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 8 <= param_2) {
      uVar3 = F_0105df60(8,param_1 + 0x10);
      uVar2 = uVar2 + uVar3;
      if (uVar2 + 8 <= param_2) {
        uVar3 = F_0105df60(8,param_1 + 0x18);
        uVar2 = uVar2 + uVar3;
        if (uVar2 + 2 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x20);
          *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0x21);
          *(undefined1 *)(param_1 + 0x21) = uVar1;
          return uVar2 + 0xb;
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_01060170 */
uint F_01060170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1060170u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_1;
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (param_2 < uVar3 + 8) {
    return uVar3;
  }
  uVar4 = F_0105df60(8,param_1 + 8);
  uVar3 = uVar3 + uVar4;
  if (param_2 < uVar3 + 4) {
    return uVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  uVar4 = uVar3 + 0xc;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  if (param_2 < uVar4) {
    return uVar3 + 5;
  }
  if (param_2 < uVar3 + 0x44) {
    if (param_2 <= uVar4) goto LAB_0106020b;
    iVar7 = param_2 - uVar4;
  }
  else {
    iVar7 = 0x38;
  }
  uVar3 = F_01060110(param_1 + 0x20,iVar7,param_3);
  uVar4 = uVar4 + uVar3;
LAB_0106020b: ;
  uVar4 = uVar4 + 1;
  param_1 = 0;
  iVar6 = iVar6 + 0x60;
  do {
    if (param_2 <= uVar4) break;
    uVar3 = F_0105df60(8,iVar6);
    if (uVar3 + 8 < 0x39) {
      uVar5 = F_0105df60(8,iVar6 + 8);
      uVar5 = uVar3 + 4 + uVar5;
      uVar3 = uVar5 + 0x20;
      uVar2 = uVar5;
      if ((0x38 < uVar3) || (uVar2 = uVar5 + 0x23, uVar5 + 0x23 < 0x39)) {
        uVar3 = uVar2;
      }
    }
    uVar4 = uVar4 + uVar3;
    param_1 = param_1 + 1;
    iVar6 = iVar6 + 0x38;
  } while (param_1 < 3);
  if (param_2 < uVar4 + 0x16) {
    return uVar4;
  }
  return uVar4 + 0x16;
}

/* ref: FUN_01060280 */
uint F_01060280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060280u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  uVar2 = uVar2 + uVar3;
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 0x10);
  uVar2 = uVar2 + uVar3;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0x1b);
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x1a);
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x19);
    uVar3 = uVar2 + 8;
    *(undefined1 *)(param_1 + 0x19) = uVar1;
    if (param_2 < uVar3) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x1f);
    *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_1 + 0x1c);
    *(undefined1 *)(param_1 + 0x1c) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x1e);
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1d);
    *(undefined1 *)(param_1 + 0x1d) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x23);
      *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x20) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x22);
      *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
      *(undefined1 *)(param_1 + 0x21) = uVar1;
      if (param_2 < uVar2 + 0xe) {
        return uVar2 + 0xc;
      }
      uVar1 = *(undefined1 *)(param_1 + 0x25);
      *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_1 + 0x24);
      *(undefined1 *)(param_1 + 0x24) = uVar1;
      if (param_2 < uVar2 + 0x10) {
        return uVar2 + 0xe;
      }
      uVar1 = *(undefined1 *)(param_1 + 0x27);
      *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_1 + 0x26);
      uVar3 = uVar2 + 0x29;
      *(undefined1 *)(param_1 + 0x26) = uVar1;
      if (param_2 < uVar3) {
        return uVar2 + 0x13;
      }
      if (uVar2 + 0x30 <= param_2) {
        uVar3 = uVar2 + 0x50;
        if (param_2 < uVar3) {
          return uVar2 + 0x30;
        }
        if (uVar2 + 0x111 <= param_2) {
          return uVar2 + 0x111;
        }
      }
    }
    return uVar3;
  }
  return uVar2;
}

/* ref: FUN_01060390 */
uint F_01060390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060390u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  uVar2 = uVar2 + uVar3;
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 0x10);
  uVar2 = uVar2 + uVar3;
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 0x18);
  uVar2 = uVar2 + uVar3;
  if (param_2 < uVar2 + 4) {
    return uVar2;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
  uVar3 = uVar2 + 8;
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  if (param_2 < uVar3) {
    return uVar2 + 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  if (uVar2 + 0xc <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0x2b);
    *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x28) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_1 + 0x29);
    *(undefined1 *)(param_1 + 0x29) = uVar1;
    if (param_2 < uVar2 + 0xe) {
      return uVar2 + 0xc;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x2c) = uVar1;
    if (param_2 < uVar2 + 0x10) {
      return uVar2 + 0xe;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x2f);
    *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_1 + 0x2e);
    uVar3 = uVar2 + 0x28;
    *(undefined1 *)(param_1 + 0x2e) = uVar1;
    if (param_2 < uVar3) {
      return uVar2 + 0x12;
    }
    if (uVar2 + 0x2f <= param_2) {
      return uVar2 + 0x2f;
    }
  }
  return uVar3;
}

/* ref: FUN_010604a0 */
uint F_010604a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10604a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc2) & 0xffffff3f) + 0xc2;
}

/* ref: FUN_01060510 */
uint F_01060510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060510u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  uVar4 = 0x20;
  if (param_2 < 0x20) {
    return 0;
  }
  iVar6 = 0;
  puVar5 = (undefined1 *)(param_1 + 0x28);
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar2 = F_0105df60(8,puVar5 + -8);
    uVar3 = uVar2;
    if (uVar2 + 2 < 0x41) {
      uVar1 = puVar5[1];
      puVar5[1] = *puVar5;
      *puVar5 = uVar1;
      uVar3 = uVar2 + 3;
      if (uVar2 + 0x31 < 0x41) {
        uVar3 = uVar2 + 0x31;
      }
    }
    iVar6 = iVar6 + 1;
    uVar4 = uVar4 + uVar3;
    puVar5 = puVar5 + 0x40;
  } while (iVar6 < 0x10);
  return uVar4;
}

/* ref: FUN_01060620 */
uint F_01060620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1060620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar3 = 4;
  iVar4 = 0;
  puVar5 = param_1 + 8;
  do {
    if (param_2 <= uVar3) {
      return uVar3;
    }
    uVar2 = F_01060580(puVar5,0x68,param_3);
    iVar4 = iVar4 + 1;
    uVar3 = uVar3 + uVar2;
    puVar5 = puVar5 + 0x68;
  } while (iVar4 < 5);
  return uVar3;
}

/* ref: FUN_010606b0 */
uint F_010606b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10606b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar5 = 0;
  puVar4 = (undefined1 *)(param_1 + 8);
  do {
    if (param_2 <= uVar3) {
      return uVar3;
    }
    uVar2 = F_0105df60(8,puVar4 + -8);
    if (uVar2 + 2 < 0x11) {
      uVar1 = puVar4[1];
      puVar4[1] = *puVar4;
      *puVar4 = uVar1;
      uVar2 = uVar2 + 3;
    }
    iVar5 = iVar5 + 1;
    uVar3 = uVar3 + uVar2;
    puVar4 = puVar4 + 0x10;
  } while (iVar5 < 0x10);
  return uVar3;
}

/* ref: FUN_01060700 */
uint F_01060700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc2) & 0xffffff3f) + 0xc2;
}

/* ref: FUN_01060720 */
uint F_01060720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060720u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (uVar3 + 8 <= param_2) {
    uVar4 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar3 + uVar4;
    if (uVar3 + 8 <= param_2) {
      uVar4 = F_0105df60(8,param_1 + 0x10);
      uVar3 = uVar3 + uVar4;
      if (uVar3 + 8 <= param_2) {
        uVar4 = F_0105df60(8,param_1 + 0x18);
        uVar3 = uVar3 + uVar4;
        if (uVar3 + 4 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x23);
          *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
          *(undefined1 *)(param_1 + 0x20) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x22);
          *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
          *(undefined1 *)(param_1 + 0x21) = uVar1;
          uVar4 = uVar3 + 4;
          if (uVar3 + 8 <= param_2) {
            uVar1 = *(undefined1 *)(param_1 + 0x24);
            *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x27);
            uVar2 = *(undefined1 *)(param_1 + 0x26);
            *(undefined1 *)(param_1 + 0x27) = uVar1;
            *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_1 + 0x25);
            *(undefined1 *)(param_1 + 0x25) = uVar2;
            uVar6 = uVar3 + 0xc;
            uVar4 = uVar3 + 8;
            if (uVar6 <= param_2) {
              uVar1 = *(undefined1 *)(param_1 + 0x28);
              *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_1 + 0x2b);
              *(undefined1 *)(param_1 + 0x2b) = uVar1;
              uVar1 = *(undefined1 *)(param_1 + 0x29);
              *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_1 + 0x2a);
              *(undefined1 *)(param_1 + 0x2a) = uVar1;
              if (uVar3 + 0x18 <= param_2) {
                iVar5 = 0;
                iVar7 = 3;
                do {
                  uVar1 = *(undefined1 *)(param_1 + 0x2c + iVar5);
                  *(undefined1 *)(param_1 + 0x2c + iVar5) = *(undefined1 *)(param_1 + 0x2f + iVar5);
                  *(undefined1 *)(param_1 + 0x2f + iVar5) = uVar1;
                  uVar1 = *(undefined1 *)(param_1 + 0x2d + iVar5);
                  *(undefined1 *)(param_1 + 0x2d + iVar5) = *(undefined1 *)(param_1 + 0x2e + iVar5);
                  *(undefined1 *)(param_1 + 0x2e + iVar5) = uVar1;
                  iVar5 = iVar5 + 4;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                return uVar6 + iVar5 + 1;
              }
              if (uVar6 < param_2) {
                uVar3 = F_0105dfc0(param_2 - uVar6,param_1 + 0x2c);
                uVar6 = uVar6 + uVar3;
              }
              uVar4 = uVar6 + 1;
            }
          }
          return uVar4;
        }
      }
    }
  }
  return uVar3;
}

/* ref: FUN_01060860 */
uint F_01060860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060860u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1;
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (param_2 < uVar3 + 0xc) {
    if (uVar3 < param_2) {
      uVar4 = F_0105dfc0(param_2 - uVar3,param_1 + 8);
      goto LAB_010608dc;
    }
  }
  else {
    uVar4 = 0;
    param_1 = 3;
    do {
      uVar1 = *(undefined1 *)(iVar2 + 8 + uVar4);
      *(undefined1 *)(iVar2 + 8 + uVar4) = *(undefined1 *)(iVar2 + 0xb + uVar4);
      *(undefined1 *)(iVar2 + 0xb + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(iVar2 + 9 + uVar4);
      *(undefined1 *)(iVar2 + 9 + uVar4) = *(undefined1 *)(iVar2 + 10 + uVar4);
      *(undefined1 *)(iVar2 + 10 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
LAB_010608dc: ;
    uVar3 = uVar3 + uVar4;
  }
  if (param_2 < uVar3 + 0xc) {
    if (param_2 <= uVar3) goto LAB_0106092f;
    uVar4 = F_0105dfc0(param_2 - uVar3,iVar2 + 0x14);
  }
  else {
    uVar4 = 0;
    iVar6 = 3;
    do {
      uVar1 = *(undefined1 *)(iVar2 + 0x14 + uVar4);
      *(undefined1 *)(iVar2 + 0x14 + uVar4) = *(undefined1 *)(iVar2 + 0x17 + uVar4);
      *(undefined1 *)(iVar2 + 0x17 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(iVar2 + 0x15 + uVar4);
      *(undefined1 *)(iVar2 + 0x15 + uVar4) = *(undefined1 *)(iVar2 + 0x16 + uVar4);
      *(undefined1 *)(iVar2 + 0x16 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar3 = uVar3 + uVar4;
LAB_0106092f: ;
  if (param_2 < uVar3 + 0x3c) {
    if (uVar3 < param_2) {
      uVar4 = F_0105dfc0(param_2 - uVar3,iVar2 + 0x20);
      uVar3 = uVar3 + uVar4;
    }
    return uVar3;
  }
  iVar5 = 0;
  iVar6 = 0xf;
  do {
    uVar1 = *(undefined1 *)(iVar2 + 0x20 + iVar5);
    *(undefined1 *)(iVar2 + 0x20 + iVar5) = *(undefined1 *)(iVar2 + 0x23 + iVar5);
    *(undefined1 *)(iVar2 + 0x23 + iVar5) = uVar1;
    uVar1 = *(undefined1 *)(iVar2 + 0x21 + iVar5);
    *(undefined1 *)(iVar2 + 0x21 + iVar5) = *(undefined1 *)(iVar2 + 0x22 + iVar5);
    *(undefined1 *)(iVar2 + 0x22 + iVar5) = uVar1;
    iVar5 = iVar5 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return uVar3 + iVar5;
}

/* ref: FUN_01060990 */
uint F_01060990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_010609c0 */
uint F_010609c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10609c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return 0xd - (param_2 < 0xd);
}

/* ref: FUN_01060a50 */
uint F_01060a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060a50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x2c) & 0xffffffe0) + 0x2c;
}

/* ref: FUN_01060af0 */
uint F_01060af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060af0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x4c) & 0xffffffc0) + 0x4c;
}

/* ref: FUN_01060b90 */
uint F_01060b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060b90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x8c) & 0xffffff80) + 0x8c;
}

/* ref: FUN_01060c30 */
uint F_01060c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060c30u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x10c) & 0xffffff00) + 0x10c;
}

/* ref: FUN_01060cd0 */
uint F_01060cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x18c) & 0xfffffe80) + 0x18c;
}

/* ref: FUN_01060d70 */
uint F_01060d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060d70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x20c) & 0xfffffe00) + 0x20c;
}

/* ref: FUN_01060e10 */
uint F_01060e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060e10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x30c) & 0xfffffd00) + 0x30c;
}

/* ref: FUN_01060eb0 */
uint F_01060eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x40c) & 0xfffffc00) + 0x40c;
}

/* ref: FUN_01060f50 */
uint F_01060f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060f50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x60c) & 0xfffffa00) + 0x60c;
}

/* ref: FUN_01060ff0 */
uint F_01060ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x80c) & 0xfffff800) + 0x80c;
}

/* ref: FUN_01061090 */
uint F_01061090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061090u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0xc0c) & 0xfffff400) + 0xc0c;
}

/* ref: FUN_01061130 */
uint F_01061130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061130u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_010611c0 */
uint F_010611c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10611c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  return 8;
}

/* ref: FUN_01061200 */
uint F_01061200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061200u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  if (0xf < param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0xe);
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
    *(undefined1 *)(param_1 + 0xf) = uVar1;
    if (param_2 < 0x12) {
      return 0x10;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x11);
    *(undefined1 *)(param_1 + 0x11) = uVar1;
    iVar3 = 0;
    uVar4 = 0x14;
    puVar2 = (undefined1 *)(param_1 + 0x1b);
    do {
      if (param_2 <= uVar4) {
        return uVar4;
      }
      uVar1 = puVar2[-7];
      puVar2[-7] = puVar2[-6];
      puVar2[-6] = uVar1;
      uVar1 = puVar2[-5];
      puVar2[-5] = puVar2[-4];
      puVar2[-4] = uVar1;
      uVar1 = puVar2[-3];
      puVar2[-3] = *puVar2;
      *puVar2 = uVar1;
      uVar1 = puVar2[-2];
      puVar2[-2] = puVar2[-1];
      puVar2[-1] = uVar1;
      uVar1 = puVar2[1];
      puVar2[1] = puVar2[4];
      puVar2[4] = uVar1;
      uVar1 = puVar2[2];
      puVar2[2] = puVar2[3];
      puVar2[3] = uVar1;
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 0xc;
      puVar2 = puVar2 + 0xc;
    } while (iVar3 < 0x1e);
    return uVar4;
  }
  return 0xe;
}

/* ref: FUN_01061320 */
uint F_01061320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061320u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return 0x10;
}

/* ref: FUN_010613c0 */
uint F_010613c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10613c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (0x11 < param_2) {
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x11];
    param_1[0x11] = uVar1;
    if (param_2 < 0x14) {
      return 0x12;
    }
    uVar1 = param_1[0x12];
    param_1[0x12] = param_1[0x13];
    param_1[0x13] = uVar1;
    if (0x17 < param_2) {
      uVar1 = param_1[0x14];
      param_1[0x14] = param_1[0x17];
      param_1[0x17] = uVar1;
      uVar1 = param_1[0x15];
      param_1[0x15] = param_1[0x16];
      param_1[0x16] = uVar1;
      if (param_2 < 0x1a) {
        return 0x18;
      }
      uVar1 = param_1[0x18];
      param_1[0x18] = param_1[0x19];
      param_1[0x19] = uVar1;
      iVar3 = 0;
      uVar4 = 0x1c;
      puVar2 = param_1 + 0x21;
      do {
        if (param_2 <= uVar4) {
          return uVar4;
        }
        uVar1 = puVar2[-3];
        puVar2[-3] = puVar2[-2];
        puVar2[-2] = uVar1;
        uVar1 = puVar2[-1];
        puVar2[-1] = *puVar2;
        *puVar2 = uVar1;
        uVar1 = puVar2[3];
        puVar2[3] = puVar2[6];
        puVar2[6] = uVar1;
        uVar1 = puVar2[4];
        puVar2[4] = puVar2[5];
        puVar2[5] = uVar1;
        uVar1 = puVar2[7];
        puVar2[7] = puVar2[10];
        puVar2[10] = uVar1;
        uVar1 = puVar2[8];
        puVar2[8] = puVar2[9];
        puVar2[9] = uVar1;
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 + 0x10;
        puVar2 = puVar2 + 0x10;
      } while (iVar3 < 4);
      return uVar4;
    }
    return 0x14;
  }
  return 0x10;
}

/* ref: FUN_01061520 */
uint F_01061520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061520u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_010615f0 */
uint F_010615f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10615f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  return 0x1c;
}

/* ref: FUN_01061700 */
uint F_01061700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061700u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x1c) {
    return 0x14;
  }
  uVar2 = F_0105df60(8,param_1 + 0x18);
  return uVar2 + 0x14;
}

/* ref: FUN_010617e0 */
uint F_010617e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10617e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  return 10;
}

/* ref: FUN_01061860 */
uint F_01061860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061860u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  return 8;
}

/* ref: FUN_01061890 */
uint F_01061890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1061890u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = 0;
  puVar3 = (undefined1 *)(param_1 + 4);
  do {
    if (param_2 <= uVar2) break;
    uVar1 = *puVar3;
    *puVar3 = puVar3[1];
    puVar3[1] = uVar1;
    iVar4 = iVar4 + 1;
    uVar2 = uVar2 + 8;
    puVar3 = puVar3 + 8;
  } while (iVar4 < 4);
  iVar4 = 0;
  puVar3 = (undefined1 *)(param_1 + 0x24);
  do {
    if (param_2 <= uVar2) {
      return uVar2;
    }
    uVar1 = *puVar3;
    *puVar3 = puVar3[1];
    puVar3[1] = uVar1;
    iVar4 = iVar4 + 1;
    uVar2 = uVar2 + 8;
    puVar3 = puVar3 + 8;
  } while (iVar4 < 4);
  return uVar2;
}

/* ref: FUN_010618e0 */
uint F_010618e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10618e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 * puVar6;
  int iVar7;
  
  uVar3 = param_2;
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  param_1[7] = param_1[4];
  uVar2 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = param_1[6];
  param_1[6] = uVar2;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[0xb];
  param_1[0xb] = param_1[8];
  uVar2 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = param_1[10];
  param_1[10] = uVar2;
  if (0xf < param_2) {
    uVar1 = param_1[0xf];
    param_1[0xf] = param_1[0xc];
    uVar2 = param_1[0xd];
    param_1[0xc] = uVar1;
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar2;
    if (param_2 < 0x14) {
      return 0x10;
    }
    uVar1 = param_1[0x13];
    param_1[0x13] = param_1[0x10];
    uVar2 = param_1[0x11];
    param_1[0x10] = uVar1;
    param_1[0x11] = param_1[0x12];
    param_1[0x12] = uVar2;
    if (0x15 < param_2) {
      uVar1 = param_1[0x14];
      param_1[0x14] = param_1[0x15];
      param_1[0x15] = uVar1;
      if (param_2 < 0x20) {
        return 0x18;
      }
      uVar4 = F_0105df60(8,param_1 + 0x18);
      uVar5 = uVar4 + 0x18;
      if (uVar4 + 0x1c <= param_2) {
        uVar1 = param_1[0x20];
        param_1[0x20] = param_1[0x23];
        param_1[0x23] = uVar1;
        uVar1 = param_1[0x21];
        param_1[0x21] = param_1[0x22];
        param_1[0x22] = uVar1;
        iVar7 = 0;
        puVar6 = param_1 + 0x24;
        param_2 = uVar4 + 0x1c;
        do {
          if (uVar3 <= param_2) {
            return param_2;
          }
          uVar5 = F_01061890(puVar6,0x40,param_3);
          uVar5 = param_2 + uVar5;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 0x40;
          param_2 = uVar5;
        } while (iVar7 < 1);
      }
      return uVar5;
    }
    return 0x14;
  }
  return 0xc;
}

/* ref: FUN_01061a30 */
uint F_01061a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1061a30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_2;
  iVar3 = param_1;
  if (param_2 < 8) {
    return 0;
  }
  uVar4 = F_0105df60(8,param_1);
  if (param_2 < uVar4 + 2) {
    return uVar4;
  }
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = uVar1;
  if (param_2 < uVar4 + 8) {
    return uVar4 + 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  if (param_2 < uVar4 + 0xc) {
    return uVar4 + 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  if (param_2 < uVar4 + 0x10) {
    return uVar4 + 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x15) = uVar1;
  if (param_2 < uVar4 + 0x14) {
    return uVar4 + 0x10;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  if (param_2 < uVar4 + 0x16) {
    return uVar4 + 0x14;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x1d);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x1c);
  uVar8 = uVar4 + 0x1c;
  *(undefined1 *)(param_1 + 0x1c) = uVar1;
  if (param_2 < uVar8) {
    return uVar4 + 0x18;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x23);
  uVar2 = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
  param_2 = param_1 + 0x24;
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  param_1 = 0;
  do {
    if (uVar7 <= uVar8) break;
    uVar4 = F_01061890(param_2,0x40,param_3);
    param_2 = param_2 + 0x40;
    uVar8 = uVar8 + uVar4;
    param_1 = param_1 + 1;
  } while (param_1 < 0x10);
  if (uVar7 < uVar8 + 0x80) {
    if (uVar7 <= uVar8) goto LAB_01061b9e;
    iVar5 = uVar7 - uVar8;
  }
  else {
    iVar5 = 0x80;
  }
  uVar4 = F_0105df60(iVar5,iVar3 + 0x428);
  uVar8 = uVar8 + uVar4;
LAB_01061b9e: ;
  if (uVar7 < uVar8 + 6) {
    if (uVar8 < uVar7) {
      uVar7 = F_0105e000(uVar7 - uVar8,iVar3 + 0x4a8);
      uVar8 = uVar8 + uVar7;
    }
    return uVar8;
  }
  iVar6 = 0;
  iVar5 = 3;
  do {
    uVar1 = *(undefined1 *)(iVar3 + 0x4a8 + iVar6);
    *(undefined1 *)(iVar3 + 0x4a8 + iVar6) = *(undefined1 *)(iVar3 + 0x4a9 + iVar6);
    *(undefined1 *)(iVar3 + 0x4a9 + iVar6) = uVar1;
    iVar6 = iVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return uVar8 + iVar6;
}

/* ref: FUN_01061c00 */
uint F_01061c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061c00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  puVar2 = (undefined1 *)(param_1 + 7);
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = puVar2[-7];
    puVar2[-7] = puVar2[-6];
    puVar2[-6] = uVar1;
    uVar1 = puVar2[-5];
    puVar2[-5] = puVar2[-4];
    puVar2[-4] = uVar1;
    uVar1 = puVar2[-3];
    puVar2[-3] = *puVar2;
    *puVar2 = uVar1;
    uVar1 = puVar2[-2];
    puVar2[-2] = puVar2[-1];
    puVar2[-1] = uVar1;
    uVar1 = puVar2[1];
    puVar2[1] = puVar2[4];
    puVar2[4] = uVar1;
    uVar1 = puVar2[2];
    puVar2[2] = puVar2[3];
    puVar2[3] = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 0xc;
    puVar2 = puVar2 + 0xc;
  } while (iVar3 < 0x1e);
  return uVar4;
}

/* ref: FUN_01061c80 */
uint F_01061c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061c80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 6 <= param_2) {
    uVar1 = uVar1 + 6;
  }
  return uVar1;
}

/* ref: FUN_01061d90 */
uint F_01061d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1061d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 * puVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = param_2;
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  param_1[7] = param_1[4];
  uVar2 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = param_1[6];
  param_1[6] = uVar2;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[0xb];
  param_1[0xb] = param_1[8];
  uVar2 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = param_1[10];
  param_1[10] = uVar2;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xf];
  param_1[0xf] = param_1[0xc];
  uVar2 = param_1[0xd];
  param_1[0xc] = uVar1;
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar2;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x13];
  param_1[0x13] = param_1[0x10];
  uVar2 = param_1[0x11];
  param_1[0x10] = uVar1;
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar2;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x17];
  param_1[0x17] = param_1[0x14];
  uVar2 = param_1[0x15];
  param_1[0x14] = uVar1;
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar2;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x1b];
  param_1[0x1b] = param_1[0x18];
  uVar2 = param_1[0x19];
  param_1[0x18] = uVar1;
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar2;
  if (param_2 < 0x24) {
    return 0x1c;
  }
  uVar4 = F_0105df60(8,param_1 + 0x20);
  if (param_2 < uVar4 + 0x1e) {
    return uVar4 + 0x1c;
  }
  uVar1 = param_1[0x29];
  param_1[0x29] = param_1[0x28];
  param_1[0x28] = uVar1;
  if (param_2 < uVar4 + 0x2c) {
    return uVar4 + 0x2a;
  }
  uVar1 = param_1[0x36];
  uVar8 = uVar4 + 0x30;
  param_1[0x36] = param_1[0x37];
  param_1[0x37] = uVar1;
  if (param_2 < uVar8) {
    return uVar4 + 0x2c;
  }
  uVar1 = param_1[0x3b];
  uVar2 = param_1[0x3a];
  param_1[0x3b] = param_1[0x38];
  param_1[0x3a] = param_1[0x39];
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar2;
  if (param_2 < uVar4 + 0x38) {
    return uVar8;
  }
  uVar4 = F_0105df60(8,param_1 + 0x40);
  uVar8 = uVar8 + uVar4;
  if (param_2 < uVar8 + 8) {
    return uVar8;
  }
  uVar4 = F_0105df60(8,param_1 + 0x48);
  uVar8 = uVar8 + uVar4;
  if (param_2 < uVar8 + 8) {
    return uVar8;
  }
  uVar4 = F_0105df60(8,param_1 + 0x50);
  uVar8 = uVar8 + uVar4;
  if (param_2 < uVar8 + 8) {
    return uVar8;
  }
  uVar4 = F_0105df60(8,param_1 + 0x58);
  uVar8 = uVar8 + uVar4;
  if (param_2 < uVar8 + 2) {
    return uVar8;
  }
  uVar1 = param_1[0x61];
  param_1[0x61] = param_1[0x60];
  param_1[0x60] = uVar1;
  if (param_2 < uVar8 + 4) {
    return uVar8 + 2;
  }
  uVar1 = param_1[99];
  param_1[99] = param_1[0x62];
  param_1[0x62] = uVar1;
  if (param_2 < uVar8 + 6) {
    return uVar8 + 4;
  }
  uVar1 = param_1[0x65];
  param_1[0x65] = param_1[100];
  param_1[100] = uVar1;
  if (param_2 < uVar8 + 0x10) {
    return uVar8 + 0xc;
  }
  uVar1 = param_1[0x6f];
  param_1[0x6f] = param_1[0x6c];
  param_1[0x6c] = uVar1;
  uVar1 = param_1[0x6e];
  param_1[0x6e] = param_1[0x6d];
  param_1[0x6d] = uVar1;
  if (param_2 < uVar8 + 0x12) {
    return uVar8 + 0x10;
  }
  uVar1 = param_1[0x71];
  param_1[0x71] = param_1[0x70];
  param_1[0x70] = uVar1;
  if (param_2 < uVar8 + 0x14) {
    return uVar8 + 0x12;
  }
  uVar1 = param_1[0x73];
  param_1[0x73] = param_1[0x72];
  param_1[0x72] = uVar1;
  if (param_2 < uVar8 + 0x18) {
    return uVar8 + 0x14;
  }
  uVar1 = param_1[0x77];
  param_1[0x77] = param_1[0x74];
  param_1[0x74] = uVar1;
  uVar1 = param_1[0x76];
  param_1[0x76] = param_1[0x75];
  param_1[0x75] = uVar1;
  if (param_2 < uVar8 + 0x1a) {
    return uVar8 + 0x18;
  }
  uVar1 = param_1[0x79];
  param_1[0x79] = param_1[0x78];
  param_1[0x78] = uVar1;
  if (param_2 < uVar8 + 0x1c) {
    return uVar8 + 0x1a;
  }
  uVar1 = param_1[0x7b];
  param_1[0x7b] = param_1[0x7a];
  param_1[0x7a] = uVar1;
  if (param_2 < uVar8 + 0x20) {
    return uVar8 + 0x1c;
  }
  uVar1 = param_1[0x7f];
  param_1[0x7f] = param_1[0x7c];
  param_1[0x7c] = uVar1;
  uVar1 = param_1[0x7e];
  param_1[0x7e] = param_1[0x7d];
  param_1[0x7d] = uVar1;
  if (param_2 < uVar8 + 0x2c) {
    return uVar8 + 0x24;
  }
  uVar5 = F_0105df60(8,param_1 + 0x88);
  uVar5 = uVar8 + 0x2a + uVar5;
  uVar4 = uVar5 + 2;
  if (param_2 < uVar4) {
    return uVar5;
  }
  uVar1 = param_1[0x96];
  param_1[0x96] = param_1[0x97];
  param_1[0x97] = uVar1;
  iVar7 = 0;
  puVar6 = param_1 + 0x9f;
  do {
    if (param_2 <= uVar4) break;
    uVar1 = puVar6[-7];
    puVar6[-7] = puVar6[-6];
    puVar6[-6] = uVar1;
    uVar1 = puVar6[-5];
    puVar6[-5] = puVar6[-4];
    puVar6[-4] = uVar1;
    uVar1 = puVar6[-3];
    puVar6[-3] = *puVar6;
    *puVar6 = uVar1;
    uVar1 = puVar6[-2];
    puVar6[-2] = puVar6[-1];
    puVar6[-1] = uVar1;
    uVar1 = puVar6[1];
    puVar6[1] = puVar6[4];
    puVar6[4] = uVar1;
    uVar1 = puVar6[2];
    puVar6[2] = puVar6[3];
    puVar6[3] = uVar1;
    iVar7 = iVar7 + 1;
    uVar4 = uVar4 + 0xc;
    puVar6 = puVar6 + 0xc;
  } while (iVar7 < 0x1e);
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar8 = F_010611c0(param_1 + 0x200,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar8;
    }
  }
  else {
    uVar1 = param_1[0x204];
    param_1[0x204] = param_1[0x207];
    param_1[0x207] = uVar1;
    uVar1 = param_1[0x205];
    param_1[0x205] = param_1[0x206];
    param_1[0x206] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 0x20) {
    return uVar4;
  }
  if (param_2 < uVar4 + 0x3a) {
    return uVar4 + 0x20;
  }
  uVar8 = uVar4 + 0x3c;
  if (param_2 < uVar4 + 100) {
    if (uVar8 < param_2) {
      uVar4 = F_0105dfc0(param_2 - uVar8,param_1 + 0x244);
      goto LAB_01062257;
    }
  }
  else {
    uVar4 = 0;
    param_2 = 10;
    do {
      uVar1 = param_1[uVar4 + 0x244];
      param_1[uVar4 + 0x244] = param_1[uVar4 + 0x247];
      param_1[uVar4 + 0x247] = uVar1;
      uVar1 = param_1[uVar4 + 0x245];
      param_1[uVar4 + 0x245] = param_1[uVar4 + 0x246];
      param_1[uVar4 + 0x246] = uVar1;
      uVar4 = uVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
LAB_01062257: ;
    uVar8 = uVar8 + uVar4;
  }
  if (uVar3 < uVar8 + 0xc) {
    if (uVar3 <= uVar8) goto LAB_010622c9;
    uVar4 = F_0105dfc0(uVar3 - uVar8,param_1 + 0x26c);
  }
  else {
    uVar4 = 0;
    param_2 = 3;
    do {
      uVar1 = param_1[uVar4 + 0x26c];
      param_1[uVar4 + 0x26c] = param_1[uVar4 + 0x26f];
      param_1[uVar4 + 0x26f] = uVar1;
      uVar1 = param_1[uVar4 + 0x26d];
      param_1[uVar4 + 0x26d] = param_1[uVar4 + 0x26e];
      param_1[uVar4 + 0x26e] = uVar1;
      uVar4 = uVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar8 = uVar8 + uVar4;
LAB_010622c9: ;
  if (uVar3 < uVar8 + 6) {
    return uVar8;
  }
  if (uVar8 + 10 <= uVar3) {
    if (uVar3 < uVar8 + 0xf) {
      return uVar8 + 10;
    }
    return uVar8 + 0xf;
  }
  return uVar8 + 6;
}

/* ref: FUN_010622f0 */
uint F_010622f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10622f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  return 8;
}

/* ref: FUN_01062330 */
uint F_01062330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1062330u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 6;
  if (0xb < param_2) {
    iVar5 = 3;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 6 + iVar4);
      *(undefined1 *)(param_1 + 6 + iVar4) = *(undefined1 *)(param_1 + 7 + iVar4);
      *(undefined1 *)(param_1 + 7 + iVar4) = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 2;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (6 < param_2) {
    iVar5 = 0;
    for (uVar3 = param_2 - 6 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = *(undefined1 *)(param_1 + 6 + iVar5);
      *(undefined1 *)(param_1 + 6 + iVar5) = *(undefined1 *)(param_1 + 7 + iVar5);
      *(undefined1 *)(param_1 + 7 + iVar5) = uVar1;
      iVar5 = iVar5 + 2;
    }
    uVar3 = iVar5 + 6;
  }
  return uVar3;
}

/* ref: FUN_010623a0 */
uint F_010623a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10623a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  if (0xb < param_2) {
    iVar4 = 3;
    do {
      uVar3 = uVar2;
      uVar1 = *(undefined1 *)(param_1 + 6 + uVar3);
      *(undefined1 *)(param_1 + 6 + uVar3) = *(undefined1 *)(param_1 + 7 + uVar3);
      *(undefined1 *)(param_1 + 7 + uVar3) = uVar1;
      iVar4 = iVar4 + -1;
      uVar2 = uVar3 + 2;
    } while (iVar4 != 0);
    return uVar3 + 8;
  }
  if (param_2 != 0) {
    uVar2 = F_01062330(param_1,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_01062400 */
uint F_01062400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062400u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 10;
  if (0xf < param_2) {
    iVar6 = 3;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 2;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (10 < param_2) {
    uVar4 = F_0105e000(param_2 - 10,param_1 + 10);
    uVar4 = uVar4 + 10;
  }
  return uVar4;
}

/* ref: FUN_01062490 */
uint F_01062490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062490u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 8;
  if (0x13 < param_2) {
    iVar6 = 3;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_01062540 */
uint F_01062540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062540u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  uVar2 = param_1[0x16];
  param_1[0x17] = uVar1;
  param_1[0x16] = param_1[0x15];
  param_1[0x15] = uVar2;
  uVar4 = 0x18;
  if (0x1d < param_2) {
    iVar6 = 3;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0x18];
      param_1[iVar5 + 0x18] = param_1[iVar5 + 0x19];
      param_1[iVar5 + 0x19] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 2;
    } while (iVar6 != 0);
    return iVar5 + 0x1a;
  }
  if (0x18 < param_2) {
    uVar4 = F_0105e000(param_2 - 0x18,param_1 + 0x18);
    uVar4 = uVar4 + 0x18;
  }
  return uVar4;
}

/* ref: FUN_01062670 */
uint F_01062670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1062670u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  if (param_2 < 0x20) {
    return 0;
  }
  if (0x27 < param_2) {
    uVar3 = F_0105df60(8,param_1 + 0x20);
    uVar4 = uVar3 + 0x20;
    if (uVar3 + 0x24 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x2b);
      *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x28) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x2a);
      *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_1 + 0x29);
      *(undefined1 *)(param_1 + 0x29) = uVar1;
      uVar4 = uVar3 + 0x24;
      if (uVar3 + 0x28 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x2f);
        *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_1 + 0x2c);
        *(undefined1 *)(param_1 + 0x2c) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x2e);
        *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_1 + 0x2d);
        *(undefined1 *)(param_1 + 0x2d) = uVar1;
        uVar4 = uVar3 + 0x34;
        if (uVar3 + 0x38 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x3f);
          *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_1 + 0x3c);
          *(undefined1 *)(param_1 + 0x3c) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x3e);
          *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_1 + 0x3d);
          *(undefined1 *)(param_1 + 0x3d) = uVar1;
          if (param_2 < uVar3 + 0x3c) {
            return uVar3 + 0x38;
          }
          uVar1 = *(undefined1 *)(param_1 + 0x43);
          *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_1 + 0x40);
          *(undefined1 *)(param_1 + 0x40) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x42);
          *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_1 + 0x41);
          *(undefined1 *)(param_1 + 0x41) = uVar1;
          uVar4 = uVar3 + 0x3c;
          if (uVar3 + 0x3e <= param_2) {
            uVar1 = *(undefined1 *)(param_1 + 0x45);
            *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_1 + 0x44);
            *(undefined1 *)(param_1 + 0x44) = uVar1;
            uVar4 = uVar3 + 0x3e;
            if (uVar3 + 0x40 <= param_2) {
              uVar1 = *(undefined1 *)(param_1 + 0x47);
              *(undefined1 *)(param_1 + 0x47) = *(undefined1 *)(param_1 + 0x46);
              *(undefined1 *)(param_1 + 0x46) = uVar1;
              uVar4 = uVar3 + 0x40;
              if (uVar3 + 0x42 <= param_2) {
                uVar1 = *(undefined1 *)(param_1 + 0x49);
                *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_1 + 0x48);
                *(undefined1 *)(param_1 + 0x48) = uVar1;
                if (param_2 < uVar3 + 0x44) {
                  return uVar3 + 0x42;
                }
                uVar1 = *(undefined1 *)(param_1 + 0x4b);
                *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_1 + 0x4a);
                *(undefined1 *)(param_1 + 0x4a) = uVar1;
                uVar4 = uVar3 + 0x44;
                if (uVar3 + 0x48 <= param_2) {
                  uVar1 = *(undefined1 *)(param_1 + 0x4f);
                  *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(param_1 + 0x4c);
                  *(undefined1 *)(param_1 + 0x4c) = uVar1;
                  uVar1 = *(undefined1 *)(param_1 + 0x4e);
                  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_1 + 0x4d);
                  *(undefined1 *)(param_1 + 0x4d) = uVar1;
                  uVar4 = uVar3 + 0x48;
                  if (uVar3 + 0x4c <= param_2) {
                    uVar1 = *(undefined1 *)(param_1 + 0x53);
                    *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_1 + 0x50);
                    *(undefined1 *)(param_1 + 0x50) = uVar1;
                    uVar1 = *(undefined1 *)(param_1 + 0x52);
                    *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_1 + 0x51);
                    uVar4 = uVar3 + 0x50;
                    *(undefined1 *)(param_1 + 0x51) = uVar1;
                    if (param_2 < uVar4) {
                      return uVar3 + 0x4c;
                    }
                    uVar1 = *(undefined1 *)(param_1 + 0x54);
                    *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_1 + 0x57);
                    *(undefined1 *)(param_1 + 0x57) = uVar1;
                    uVar1 = *(undefined1 *)(param_1 + 0x55);
                    *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_1 + 0x56);
                    *(undefined1 *)(param_1 + 0x56) = uVar1;
                    iVar6 = 0;
                    puVar5 = (undefined1 *)(param_1 + 0x5f);
                    do {
                      if (param_2 <= uVar4) {
                        return uVar4;
                      }
                      uVar1 = puVar5[-7];
                      puVar5[-7] = puVar5[-6];
                      puVar5[-6] = uVar1;
                      uVar1 = puVar5[-4];
                      puVar5[-4] = puVar5[-5];
                      puVar5[-5] = uVar1;
                      uVar1 = puVar5[-3];
                      puVar5[-3] = *puVar5;
                      uVar2 = puVar5[-1];
                      *puVar5 = uVar1;
                      puVar5[-1] = puVar5[-2];
                      puVar5[-2] = uVar2;
                      uVar1 = puVar5[4];
                      puVar5[4] = puVar5[1];
                      puVar5[1] = uVar1;
                      uVar1 = puVar5[3];
                      puVar5[3] = puVar5[2];
                      puVar5[2] = uVar1;
                      uVar4 = uVar4 + 0xc;
                      iVar6 = iVar6 + 1;
                      puVar5 = puVar5 + 0xc;
                    } while (iVar6 < 0x1e);
                  }
                }
              }
            }
          }
        }
      }
    }
    return uVar4;
  }
  return 0x20;
}

/* ref: FUN_01062880 */
uint F_01062880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1062880u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar4 = 0;
  iVar6 = param_1;
  do {
    if (param_2 <= uVar5) break;
    uVar2 = F_01062670(iVar6,0x1c0,param_3);
    iVar4 = iVar4 + 1;
    uVar5 = uVar5 + uVar2;
    iVar6 = iVar6 + 0x1c0;
  } while (iVar4 < 8);
  if (uVar5 + 8 <= param_2) {
    uVar2 = F_0105df60(8,param_1 + 0xe00);
    uVar5 = uVar5 + uVar2;
    if (uVar5 + 8 <= param_2) {
      uVar2 = F_0105df60(8,param_1 + 0xe08);
      uVar5 = uVar5 + 4 + uVar2;
      iVar6 = 0;
      puVar3 = (undefined1 *)(param_1 + 0xe1b);
      do {
        if (param_2 <= uVar5) {
          return uVar5;
        }
        uVar1 = puVar3[-7];
        puVar3[-7] = puVar3[-6];
        puVar3[-6] = uVar1;
        uVar1 = puVar3[-5];
        puVar3[-5] = puVar3[-4];
        puVar3[-4] = uVar1;
        uVar1 = puVar3[-3];
        puVar3[-3] = *puVar3;
        *puVar3 = uVar1;
        uVar1 = puVar3[-2];
        puVar3[-2] = puVar3[-1];
        puVar3[-1] = uVar1;
        uVar1 = puVar3[1];
        puVar3[1] = puVar3[4];
        puVar3[4] = uVar1;
        uVar1 = puVar3[2];
        puVar3[2] = puVar3[3];
        puVar3[3] = uVar1;
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 + 0xc;
        puVar3 = puVar3 + 0xc;
      } while (iVar6 < 0x1e);
    }
  }
  return uVar5;
}

/* ref: FUN_01062970 */
uint F_01062970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062970u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = param_1[0xe];
  param_1[0xe] = param_1[0xf];
  param_1[0xf] = uVar1;
  if (param_2 < 0x12) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x11];
  param_1[0x11] = uVar1;
  if (param_2 < 0x14) {
    return 0x12;
  }
  uVar1 = param_1[0x12];
  param_1[0x12] = param_1[0x13];
  param_1[0x13] = uVar1;
  if (param_2 < 0x16) {
    return 0x14;
  }
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x14];
  param_1[0x14] = uVar1;
  uVar3 = 0x18;
  if (0x23 < param_2) {
    iVar5 = 3;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 0x18];
      param_1[iVar4 + 0x18] = param_1[iVar4 + 0x1b];
      param_1[iVar4 + 0x1b] = uVar1;
      uVar1 = param_1[iVar4 + 0x19];
      param_1[iVar4 + 0x19] = param_1[iVar4 + 0x1a];
      param_1[iVar4 + 0x1a] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0x1c;
  }
  if (0x18 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 0x18,param_1 + 0x18);
    uVar3 = uVar3 + 0x18;
  }
  return uVar3;
}

/* ref: FUN_01062ac0 */
uint F_01062ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_01062b20 */
uint F_01062b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062b20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 4;
  puVar2 = (undefined1 *)(param_1 + 9);
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = puVar2[-5];
    puVar2[-5] = puVar2[-2];
    puVar2[-2] = uVar1;
    uVar1 = puVar2[-4];
    puVar2[-4] = puVar2[-3];
    puVar2[-3] = uVar1;
    uVar1 = puVar2[-1];
    puVar2[-1] = puVar2[2];
    puVar2[2] = uVar1;
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 8;
    puVar2 = puVar2 + 8;
  } while (iVar3 < 0x20);
  return uVar4;
}

/* ref: FUN_01062b80 */
uint F_01062b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062b80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 5;
}

/* ref: FUN_01062bb0 */
uint F_01062bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062bb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 4;
  puVar2 = (undefined1 *)(param_1 + 5);
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = puVar2[-1];
    puVar2[-1] = puVar2[2];
    puVar2[2] = uVar1;
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 5;
    puVar2 = puVar2 + 8;
  } while (iVar3 < 0x20);
  return uVar4;
}

/* ref: FUN_01062c00 */
uint F_01062c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062c00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  if (param_2 < 0x20) {
    return 0x1c;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 0x1f) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x1d);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 0x1e) = uVar1;
  if (param_2 < 0x22) {
    return 0x20;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  if (param_2 < 0x24) {
    return 0x22;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x23) = uVar1;
  if (param_2 < 0x26) {
    return 0x24;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  if (param_2 < 0x2c) {
    return 0x28;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x2b) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x2a) = uVar1;
  if (param_2 < 0x30) {
    return 0x2c;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_1 + 0x2f);
  uVar2 = *(undefined1 *)(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0x2f) = uVar1;
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined1 *)(param_1 + 0x2d) = uVar2;
  uVar4 = 0x30;
  if (0x35 < param_2) {
    iVar6 = 3;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = *(undefined1 *)(param_1 + 0x30 + iVar5);
      *(undefined1 *)(param_1 + 0x30 + iVar5) = *(undefined1 *)(param_1 + 0x31 + iVar5);
      *(undefined1 *)(param_1 + 0x31 + iVar5) = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 2;
    } while (iVar6 != 0);
    return iVar5 + 0x32;
  }
  if (0x30 < param_2) {
    uVar4 = F_0105e000(param_2 - 0x30,param_1 + 0x30);
    uVar4 = uVar4 + 0x30;
  }
  return uVar4;
}

/* ref: FUN_01062e00 */
uint F_01062e00(void)
{
  GEN_ENTER(0x1062e00u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_01062e10 */
uint F_01062e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062e10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return 0x10;
}

/* ref: FUN_01062eb0 */
uint F_01062eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1062eb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = param_2;
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (param_2 < uVar2 + 4) {
    return uVar2;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = uVar1;
  if (param_2 < uVar2 + 0x1c) {
    return uVar2 + 0x18;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  if (param_2 < uVar2 + 0x20) {
    return uVar2 + 0x1c;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  if (param_2 < uVar2 + 0x24) {
    return uVar2 + 0x20;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)(param_1 + 0x29) = uVar1;
  if (param_2 < uVar2 + 0x28) {
    return uVar2 + 0x24;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x2f);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined1 *)(param_1 + 0x2d) = uVar1;
  if (param_2 < uVar2 + 0x2c) {
    return uVar2 + 0x28;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_1 + 0x33);
  *(undefined1 *)(param_1 + 0x33) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x31);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_1 + 0x32);
  *(undefined1 *)(param_1 + 0x32) = uVar1;
  if (param_2 < uVar2 + 0x4c) {
    return uVar2 + 0x2c;
  }
  if (param_2 < uVar2 + 0x5d) {
    return uVar2 + 0x4c;
  }
  uVar6 = uVar2 + 0x5e;
  if (param_2 < uVar2 + 0x84) {
    if (uVar6 < param_2) {
      uVar2 = F_0105e000(param_2 - uVar6,param_1 + 0x66);
      goto LAB_0106300e;
    }
  }
  else {
    uVar2 = 0;
    param_2 = 0x13;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x66 + uVar2);
      *(undefined1 *)(param_1 + 0x66 + uVar2) = *(undefined1 *)(param_1 + 0x67 + uVar2);
      *(undefined1 *)(param_1 + 0x67 + uVar2) = uVar1;
      uVar2 = uVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
LAB_0106300e: ;
    uVar6 = uVar6 + uVar2;
  }
  if (uVar4 < uVar6 + 0x4c) {
    if (uVar6 < uVar4) {
      uVar2 = F_0105dfc0(uVar4 - uVar6,param_1 + 0x8c);
      goto LAB_01063077;
    }
  }
  else {
    uVar2 = 0;
    param_2 = 0x13;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x8c + uVar2);
      *(undefined1 *)(param_1 + 0x8c + uVar2) = *(undefined1 *)(param_1 + 0x8f + uVar2);
      *(undefined1 *)(param_1 + 0x8f + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x8d + uVar2);
      *(undefined1 *)(param_1 + 0x8d + uVar2) = *(undefined1 *)(param_1 + 0x8e + uVar2);
      *(undefined1 *)(param_1 + 0x8e + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
LAB_01063077: ;
    uVar6 = uVar6 + uVar2;
  }
  if (uVar4 < uVar6 + 0x10) {
    return uVar6;
  }
  if (uVar4 < uVar6 + 0x1c) {
    return uVar6 + 0x10;
  }
  if (uVar4 < uVar6 + 0x1f) {
    return uVar6 + 0x1c;
  }
  if (uVar4 < uVar6 + 0x15f) {
    return uVar6 + 0x1f;
  }
  if (uVar4 < uVar6 + 0x1af) {
    return uVar6 + 0x15f;
  }
  if (uVar4 < uVar6 + 0x1cf) {
    return uVar6 + 0x1af;
  }
  if (uVar4 < uVar6 + 0x1df) {
    return uVar6 + 0x1cf;
  }
  if (uVar4 < uVar6 + 0x1e7) {
    return uVar6 + 0x1df;
  }
  if (uVar4 < uVar6 + 0x227) {
    return uVar6 + 0x1e7;
  }
  uVar2 = uVar6 + 0x228;
  if (uVar4 < uVar6 + 0x234) {
    if (uVar2 < uVar4) {
      uVar6 = F_0105dfc0(uVar4 - uVar2,param_1 + 0x300);
      goto LAB_01063149;
    }
  }
  else {
    uVar6 = 0;
    iVar5 = 3;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x300 + uVar6);
      *(undefined1 *)(param_1 + 0x300 + uVar6) = *(undefined1 *)(param_1 + 0x303 + uVar6);
      *(undefined1 *)(param_1 + 0x303 + uVar6) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x301 + uVar6);
      *(undefined1 *)(param_1 + 0x301 + uVar6) = *(undefined1 *)(param_1 + 0x302 + uVar6);
      *(undefined1 *)(param_1 + 0x302 + uVar6) = uVar1;
      uVar6 = uVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
LAB_01063149: ;
    uVar2 = uVar2 + uVar6;
  }
  if (uVar4 < uVar2 + 8) {
    return uVar2;
  }
  if (uVar4 < uVar2 + 0xb) {
    return uVar2 + 8;
  }
  if (uVar4 < uVar2 + 0xf) {
    return uVar2 + 0xb;
  }
  if (uVar4 < uVar2 + 0x1a) {
    return uVar2 + 0xf;
  }
  if (uVar4 < uVar2 + 0x2f) {
    return uVar2 + 0x1a;
  }
  if (uVar4 < uVar2 + 0x32) {
    return uVar2 + 0x2f;
  }
  if (uVar4 < uVar2 + 0x36) {
    return uVar2 + 0x32;
  }
  if (uVar4 < uVar2 + 0x68) {
    return uVar2 + 0x36;
  }
  if (uVar4 < uVar2 + 0x81) {
    return uVar2 + 0x68;
  }
  uVar6 = uVar2 + 0x82;
  if (uVar4 < uVar2 + 0xa6) {
    if (uVar4 <= uVar6) goto LAB_010631fb;
    uVar2 = F_0105e000(uVar4 - uVar6,param_1 + 0x38e);
  }
  else {
    uVar2 = 0;
    param_2 = 0x12;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x38e + uVar2);
      *(undefined1 *)(param_1 + 0x38e + uVar2) = *(undefined1 *)(param_1 + 0x38f + uVar2);
      *(undefined1 *)(param_1 + 0x38f + uVar2) = uVar1;
      uVar2 = uVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar6 = uVar6 + uVar2;
LAB_010631fb: ;
  if (uVar4 < uVar6 + 0x24) {
    if (uVar6 < uVar4) {
      uVar4 = F_0105e000(uVar4 - uVar6,param_1 + 0x3b2);
      uVar6 = uVar6 + uVar4;
    }
    return uVar6;
  }
  iVar3 = 0;
  iVar5 = 0x12;
  do {
    uVar1 = *(undefined1 *)(param_1 + 0x3b2 + iVar3);
    *(undefined1 *)(param_1 + 0x3b2 + iVar3) = *(undefined1 *)(param_1 + 0x3b3 + iVar3);
    *(undefined1 *)(param_1 + 0x3b3 + iVar3) = uVar1;
    iVar3 = iVar3 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return uVar6 + iVar3;
}

/* ref: FUN_01063330 */
uint F_01063330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063330u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 0xc) {
    return 4;
  }
  uVar1 = F_0105df60(8,param_1 + 8);
  return uVar1 + 4;
}

/* ref: FUN_01063360 */
uint F_01063360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 8) & 0xfffffff8) + 8;
}

/* ref: FUN_01063380 */
uint F_01063380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063380u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar1;
  uVar2 = 8;
  if (param_2 < 0x30) {
    if (param_2 < 9) goto LAB_010633fe;
    uVar2 = F_0105dfc0(param_2 - 8,param_1 + 8);
  }
  else {
    uVar2 = 0;
    iVar3 = 10;
    do {
      uVar1 = *(undefined1 *)(param_1 + 8 + uVar2);
      *(undefined1 *)(param_1 + 8 + uVar2) = *(undefined1 *)(param_1 + 0xb + uVar2);
      *(undefined1 *)(param_1 + 0xb + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 9 + uVar2);
      *(undefined1 *)(param_1 + 9 + uVar2) = *(undefined1 *)(param_1 + 10 + uVar2);
      *(undefined1 *)(param_1 + 10 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar2 = uVar2 + 8;
LAB_010633fe: ;
  if (uVar2 + 6 <= param_2) {
    uVar2 = uVar2 + 6;
  }
  return uVar2;
}

/* ref: FUN_01063410 */
uint F_01063410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + 4 + uVar3;
    if (uVar2 + 0x28 <= param_2) {
      iVar4 = 0;
      iVar5 = 10;
      do {
        uVar1 = *(undefined1 *)(param_1 + 0x14 + iVar4);
        *(undefined1 *)(param_1 + 0x14 + iVar4) = *(undefined1 *)(param_1 + 0x17 + iVar4);
        *(undefined1 *)(param_1 + 0x17 + iVar4) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x15 + iVar4);
        *(undefined1 *)(param_1 + 0x15 + iVar4) = *(undefined1 *)(param_1 + 0x16 + iVar4);
        *(undefined1 *)(param_1 + 0x16 + iVar4) = uVar1;
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return uVar2 + iVar4;
    }
    if (uVar2 < param_2) {
      uVar3 = F_0105dfc0(param_2 - uVar2,param_1 + 0x14);
      uVar2 = uVar2 + uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_010634b0 */
uint F_010634b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10634b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 3;
}

/* ref: FUN_010634e0 */
uint F_010634e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10634e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (7 < param_2) {
    uVar1 = param_1[4];
    param_1[4] = param_1[7];
    param_1[7] = uVar1;
    uVar1 = param_1[5];
    param_1[5] = param_1[6];
    uVar4 = 0xc;
    param_1[6] = uVar1;
    iVar3 = 0;
    puVar2 = param_1 + 0xc;
    do {
      if (param_2 <= uVar4) {
        return uVar4;
      }
      uVar1 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar1;
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 3;
      puVar2 = puVar2 + 4;
    } while (iVar3 < 5);
    return uVar4;
  }
  return 4;
}

/* ref: FUN_01063570 */
uint F_01063570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063570u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  iVar4 = param_1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  param_1 = 8;
  local_8 = 0;
  puVar2 = (undefined1 *)(iVar4 + 0xd);
  do {
    if (param_2 <= param_1) break;
    uVar1 = puVar2[-5];
    puVar2[-5] = puVar2[-2];
    puVar2[-2] = uVar1;
    uVar1 = puVar2[-4];
    puVar2[-4] = puVar2[-3];
    puVar2[-3] = uVar1;
    uVar1 = puVar2[-1];
    puVar2[-1] = puVar2[2];
    puVar2[2] = uVar1;
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    uVar5 = 0xc;
    iVar4 = 0;
    puVar3 = puVar2 + 7;
    do {
      if (0x1f < uVar5) break;
      uVar1 = *puVar3;
      *puVar3 = puVar3[1];
      puVar3[1] = uVar1;
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 + 3;
      puVar3 = puVar3 + 4;
    } while (iVar4 < 5);
    local_8 = local_8 + 1;
    param_1 = param_1 + uVar5;
    puVar2 = puVar2 + 0x20;
  } while (local_8 < 0xe);
  if (param_2 < param_1 + 0x20) {
    return param_1;
  }
  uVar5 = param_1 + 0x20;
  if ((param_1 + 0x31 <= param_2) && (uVar5 = param_1 + 0x4b, param_2 < param_1 + 0x4b)) {
    uVar5 = param_1 + 0x31;
  }
  return uVar5;
}

/* ref: FUN_01063650 */
uint F_01063650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063650u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_01063680 */
uint F_01063680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 2;
  if (7 < param_2) {
    iVar5 = 3;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 2 + iVar4);
      *(undefined1 *)(param_1 + 2 + iVar4) = *(undefined1 *)(param_1 + 3 + iVar4);
      *(undefined1 *)(param_1 + 3 + iVar4) = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 2;
    } while (iVar5 != 0);
    return iVar4 + 4;
  }
  if (2 < param_2) {
    iVar5 = 0;
    for (uVar3 = param_2 - 2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = *(undefined1 *)(param_1 + 2 + iVar5);
      *(undefined1 *)(param_1 + 2 + iVar5) = *(undefined1 *)(param_1 + 3 + iVar5);
      *(undefined1 *)(param_1 + 3 + iVar5) = uVar1;
      iVar5 = iVar5 + 2;
    }
    uVar3 = iVar5 + 2;
  }
  return uVar3;
}

/* ref: FUN_010636f0 */
unsigned int F_010636f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10636f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_8;
  
  iVar6 = 0;
  local_8 = 0;
  iVar4 = param_1 + 3;
  do {
    if (param_2 <= local_8) {
      return 0;
    }
    iVar5 = 3;
    iVar2 = 0;
    do {
      iVar3 = iVar2;
      uVar1 = *(undefined1 *)(iVar4 + -1 + iVar3);
      *(undefined1 *)(iVar4 + -1 + iVar3) = *(undefined1 *)(iVar4 + iVar3);
      *(undefined1 *)(iVar4 + iVar3) = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar3 + 2;
    } while (iVar5 != 0);
    local_8 = local_8 + iVar3 + 4;
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 8;
  } while (iVar6 < 8);
  return 0;
}

/* ref: FUN_01063740 */
uint F_01063740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1063740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  uVar4 = 4;
  if (param_2 < 0x3c) {
    if (4 < param_2) {
      iVar5 = param_2 - 4;
      goto LAB_0106378a;
    }
  }
  else {
    iVar5 = 0x38;
LAB_0106378a: ;
    uVar4 = F_0105e0e0(param_1 + 8,iVar5,param_3);
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x38) {
    if (param_2 <= uVar4) goto LAB_010637c3;
    iVar5 = param_2 - uVar4;
  }
  else {
    iVar5 = 0x38;
  }
  uVar3 = F_0105e0e0(param_1 + 0x40,iVar5,param_3);
  uVar4 = uVar4 + uVar3;
LAB_010637c3: ;
  if (param_2 < uVar4 + 4) {
    return uVar4;
  }
  uVar1 = param_1[0x7b];
  param_1[0x7b] = param_1[0x78];
  param_1[0x78] = uVar1;
  uVar1 = param_1[0x7a];
  param_1[0x7a] = param_1[0x79];
  param_1[0x79] = uVar1;
  if (param_2 < uVar4 + 8) {
    return uVar4 + 4;
  }
  uVar1 = param_1[0x7c];
  param_1[0x7c] = param_1[0x7f];
  param_1[0x7f] = uVar1;
  uVar1 = param_1[0x7d];
  param_1[0x7d] = param_1[0x7e];
  param_1[0x7e] = uVar1;
  return uVar4 + 8;
}

/* ref: FUN_01063820 */
uint F_01063820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063820u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 5;
}

/* ref: FUN_01063850 */
uint F_01063850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063850u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  uVar4 = uVar3 + 8;
  if (uVar3 + 0xc <= param_2) {
    uVar1 = param_1[0x17];
    param_1[0x17] = param_1[0x14];
    param_1[0x14] = uVar1;
    uVar1 = param_1[0x16];
    param_1[0x16] = param_1[0x15];
    param_1[0x15] = uVar1;
    uVar4 = uVar3 + 0xe;
    if (uVar3 + 0x10 <= param_2) {
      uVar1 = param_1[0x1b];
      param_1[0x1b] = param_1[0x1a];
      param_1[0x1a] = uVar1;
      uVar4 = uVar3 + 0x10;
      if (uVar3 + 0x14 <= param_2) {
        uVar1 = param_1[0x1f];
        param_1[0x1f] = param_1[0x1c];
        param_1[0x1c] = uVar1;
        uVar1 = param_1[0x1e];
        param_1[0x1e] = param_1[0x1d];
        uVar4 = uVar3 + 0x34;
        param_1[0x1d] = uVar1;
        if (param_2 < uVar4) {
          return uVar3 + 0x14;
        }
      }
    }
  }
  return uVar4;
}

/* ref: FUN_01063900 */
uint F_01063900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063900u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 5;
}

/* ref: FUN_01063930 */
uint F_01063930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063930u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0x14) {
    return 0xc;
  }
  uVar2 = F_0105df60(8,param_1 + 0x10);
  return uVar2 + 0xc;
}

/* ref: FUN_010639c0 */
uint F_010639c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10639c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar3 = 4;
  if (0xf < param_2) {
    uVar1 = param_1[4];
    param_1[4] = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = uVar1;
    param_1[6] = param_1[5];
    param_1[5] = uVar2;
    uVar1 = param_1[9];
    param_1[9] = param_1[8];
    param_1[8] = uVar1;
    uVar1 = param_1[0xb];
    param_1[0xb] = param_1[10];
    param_1[10] = uVar1;
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    uVar2 = param_1[0xe];
    param_1[0xf] = uVar1;
    param_1[0xe] = param_1[0xd];
    param_1[0xd] = uVar2;
    return 0x10;
  }
  if (4 < param_2) {
    uVar3 = F_0105e3b0(param_1 + 4,param_2 - 4,param_3);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01063a70 */
uint F_01063a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1063a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar2 = 4;
  if (0x3b < param_2) {
    uVar2 = F_0105e0e0(param_1 + 8,0x38,param_3);
    return uVar2 + 4;
  }
  if (4 < param_2) {
    uVar2 = F_0105e0e0(param_1 + 8,param_2 - 4,param_3);
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_01063ae0 */
uint F_01063ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_01063b70 */
uint F_01063b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063b70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 0xb;
}

/* ref: FUN_01063bd0 */
uint F_01063bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x12) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x11];
  param_1[0x11] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  if (param_2 < 0x20) {
    return 0x1c;
  }
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  if (param_2 < 0x24) {
    return 0x20;
  }
  uVar1 = param_1[0x20];
  param_1[0x20] = param_1[0x23];
  param_1[0x23] = uVar1;
  uVar1 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar1;
  if (param_2 < 0x26) {
    return 0x24;
  }
  uVar1 = param_1[0x24];
  param_1[0x24] = param_1[0x25];
  param_1[0x25] = uVar1;
  if (param_2 < 0x2c) {
    return 0x28;
  }
  uVar1 = param_1[0x28];
  param_1[0x28] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x29];
  param_1[0x29] = param_1[0x2a];
  param_1[0x2a] = uVar1;
  if (param_2 < 0x30) {
    return 0x2c;
  }
  uVar1 = param_1[0x2c];
  param_1[0x2c] = param_1[0x2f];
  param_1[0x2f] = uVar1;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = param_1[0x2e];
  param_1[0x2e] = uVar1;
  return 0x30;
}

/* ref: FUN_01063d70 */
uint F_01063d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1063d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 4;
  if (0x1b < param_2) {
    uVar1 = param_1[5];
    param_1[5] = param_1[4];
    param_1[4] = uVar1;
    uVar1 = param_1[7];
    param_1[7] = param_1[6];
    param_1[6] = uVar1;
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    uVar1 = param_1[0x13];
    param_1[0x13] = param_1[0x10];
    param_1[0x10] = uVar1;
    uVar1 = param_1[0x12];
    param_1[0x12] = param_1[0x11];
    param_1[0x11] = uVar1;
    iVar6 = 4;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0x14];
      param_1[iVar5 + 0x14] = param_1[iVar5 + 0x15];
      param_1[iVar5 + 0x15] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 2;
    } while (iVar6 != 0);
    return iVar5 + 0x16;
  }
  if (4 < param_2) {
    uVar4 = F_0105e240(param_1 + 4,param_2 - 4,param_3);
    uVar4 = uVar4 + 4;
  }
  return uVar4;
}

/* ref: FUN_01063e40 */
uint F_01063e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063e40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0x26) {
    return 6;
  }
  if (param_2 < 0x2c) {
    return 0x28;
  }
  uVar1 = param_1[0x28];
  param_1[0x28] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x29];
  param_1[0x29] = param_1[0x2a];
  param_1[0x2a] = uVar1;
  return 0x2c;
}

/* ref: FUN_01063eb0 */
uint F_01063eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1063eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_01063f10 */
uint F_01063f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1063f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar2 = 4;
  if (0x3b < param_2) {
    uVar2 = F_0105e0e0(param_1 + 8,0x38,param_3);
    return uVar2 + 4;
  }
  if (4 < param_2) {
    uVar2 = F_0105e0e0(param_1 + 8,param_2 - 4,param_3);
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_01063f80 */
uint F_01063f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1063f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar3 = 4;
  if (0xf < param_2) {
    uVar1 = param_1[5];
    param_1[5] = param_1[4];
    param_1[4] = uVar1;
    uVar1 = param_1[7];
    param_1[7] = param_1[6];
    param_1[6] = uVar1;
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xc];
    param_1[0xc] = uVar1;
    uVar1 = param_1[0xf];
    param_1[0xf] = param_1[0xe];
    param_1[0xe] = uVar1;
    return 0x10;
  }
  if (4 < param_2) {
    uVar3 = F_0105e310(param_1 + 4,param_2 - 4,param_3);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01064030 */
uint F_01064030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064030u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  return 0x18;
}

/* ref: FUN_01064100 */
uint F_01064100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064100u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  uVar2 = param_1[0x12];
  param_1[0x13] = uVar1;
  param_1[0x12] = param_1[0x11];
  param_1[0x11] = uVar2;
  uVar4 = 0x1c;
  if (0x25 < param_2) {
    iVar6 = 5;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0x1c];
      param_1[iVar5 + 0x1c] = param_1[iVar5 + 0x1d];
      param_1[iVar5 + 0x1d] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 2;
    } while (iVar6 != 0);
    return iVar5 + 0x1e;
  }
  if (0x1c < param_2) {
    uVar4 = F_0105e000(param_2 - 0x1c,param_1 + 0x1c);
    uVar4 = uVar4 + 0x1c;
  }
  return uVar4;
}

/* ref: FUN_01064220 */
uint F_01064220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064220u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 10;
}

/* ref: FUN_01064280 */
uint F_01064280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064280u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  return 0x1c;
}

/* ref: FUN_01064390 */
uint F_01064390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064390u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  return 0x19;
}

/* ref: FUN_01064460 */
uint F_01064460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064460u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_010644c0 */
uint F_010644c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10644c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  uVar2 = param_1[0x12];
  param_1[0x13] = uVar1;
  param_1[0x12] = param_1[0x11];
  param_1[0x11] = uVar2;
  uVar4 = 0x14;
  if (0x53 < param_2) {
    iVar6 = 0x10;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0x14];
      param_1[iVar5 + 0x14] = param_1[iVar5 + 0x17];
      param_1[iVar5 + 0x17] = uVar1;
      uVar1 = param_1[iVar5 + 0x15];
      param_1[iVar5 + 0x15] = param_1[iVar5 + 0x16];
      param_1[iVar5 + 0x16] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x18;
  }
  if (0x14 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0x14,param_1 + 0x14);
    uVar4 = uVar4 + 0x14;
  }
  return uVar4;
}

/* ref: FUN_010645c0 */
uint F_010645c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10645c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  param_1[7] = param_1[4];
  uVar2 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = param_1[6];
  param_1[6] = uVar2;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[0xb];
  param_1[0xb] = param_1[8];
  uVar2 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = param_1[10];
  param_1[10] = uVar2;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xd];
  param_1[0xd] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x17];
  param_1[0x17] = param_1[0x14];
  uVar2 = param_1[0x15];
  param_1[0x14] = uVar1;
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar2;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x1b];
  param_1[0x1b] = param_1[0x18];
  uVar2 = param_1[0x19];
  param_1[0x18] = uVar1;
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar2;
  if (param_2 < 0x20) {
    return 0x1c;
  }
  uVar1 = param_1[0x1f];
  param_1[0x1f] = param_1[0x1c];
  uVar2 = param_1[0x1d];
  param_1[0x1c] = uVar1;
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar2;
  if (param_2 < 0x24) {
    return 0x20;
  }
  uVar1 = param_1[0x23];
  param_1[0x23] = param_1[0x20];
  uVar2 = param_1[0x21];
  param_1[0x20] = uVar1;
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar2;
  uVar6 = 0x26;
  if (param_2 < 0x2c) {
    if (param_2 < 0x27) goto LAB_0106472a;
    uVar6 = F_0105e000(param_2 - 0x26,param_1 + 0x26);
  }
  else {
    uVar6 = 0;
    iVar5 = 3;
    do {
      uVar1 = param_1[uVar6 + 0x26];
      param_1[uVar6 + 0x26] = param_1[uVar6 + 0x27];
      param_1[uVar6 + 0x27] = uVar1;
      uVar6 = uVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar6 = uVar6 + 0x26;
LAB_0106472a: ;
  if (param_2 < uVar6 + 0x40) {
    if (uVar6 < param_2) {
      uVar4 = F_0105dfc0(param_2 - uVar6,param_1 + 0x2c);
      uVar6 = uVar6 + uVar4;
    }
    return uVar6;
  }
  iVar3 = 0;
  iVar5 = 0x10;
  do {
    uVar1 = param_1[iVar3 + 0x2c];
    param_1[iVar3 + 0x2c] = param_1[iVar3 + 0x2f];
    param_1[iVar3 + 0x2f] = uVar1;
    uVar1 = param_1[iVar3 + 0x2d];
    param_1[iVar3 + 0x2d] = param_1[iVar3 + 0x2e];
    param_1[iVar3 + 0x2e] = uVar1;
    iVar3 = iVar3 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return uVar6 + iVar3;
}

/* ref: FUN_01064790 */
uint F_01064790(void)
{
  GEN_ENTER(0x1064790u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_010647a0 */
uint F_010647a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10647a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 0x2e) {
    return 6;
  }
  if (param_2 < 0x38) {
    return 0x30;
  }
  uVar3 = F_0105df60(8,param_1 + 0x30);
  uVar4 = uVar3 + 0x30;
  if (uVar3 + 0x34 <= param_2) {
    uVar1 = param_1[0x38];
    param_1[0x38] = param_1[0x3b];
    uVar2 = param_1[0x3a];
    param_1[0x3b] = uVar1;
    param_1[0x3a] = param_1[0x39];
    param_1[0x39] = uVar2;
    uVar4 = uVar3 + 0x34;
  }
  return uVar4;
}

/* ref: FUN_01065030 */
uint F_01065030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065030u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_01065130 */
uint F_01065130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065130u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_01065190 */
uint F_01065190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065190u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065220 */
uint F_01065220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065220u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010652d0 */
uint F_010652d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10652d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065380 */
uint F_01065380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065380u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065430 */
uint F_01065430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065430u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010654e0 */
uint F_010654e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10654e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065590 */
uint F_01065590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065590u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065640 */
uint F_01065640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065640u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010656f0 */
uint F_010656f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10656f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010657a0 */
uint F_010657a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10657a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065830 */
uint F_01065830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065830u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010658e0 */
uint F_010658e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10658e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065990 */
uint F_01065990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065990u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065a40 */
uint F_01065a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065a40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065af0 */
uint F_01065af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065af0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065ba0 */
uint F_01065ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065c50 */
uint F_01065c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065c50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065d00 */
uint F_01065d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065d00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065db0 */
uint F_01065db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065db0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  puVar2 = param_1;
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 10;
    puVar2 = puVar2 + 10;
  } while (iVar3 < 0x1e);
  return uVar4;
}

/* ref: FUN_01065df0 */
uint F_01065df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065df0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 4;
  if (0xd < param_2) {
    uVar1 = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)(param_1 + 5) = uVar1;
    return 0xe;
  }
  if (4 < param_2) {
    if (param_2 - 4 < 2) {
      return 4;
    }
    uVar1 = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)(param_1 + 5) = uVar1;
    uVar2 = (-(uint)(param_2 - 4 < 10) & 0xfffffffa) + 0xe;
  }
  return uVar2;
}

/* ref: FUN_01065e50 */
uint F_01065e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 200) & 0xffffff38) + 200;
}

/* ref: FUN_01065e70 */
uint F_01065e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065e70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 4;
}

/* ref: FUN_01065ea0 */
uint F_01065ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  puVar2 = (undefined1 *)(param_1 + 7);
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = puVar2[-7];
    puVar2[-7] = puVar2[-6];
    puVar2[-6] = uVar1;
    uVar1 = puVar2[-3];
    puVar2[-3] = puVar2[-2];
    puVar2[-2] = uVar1;
    uVar1 = puVar2[-1];
    puVar2[-1] = *puVar2;
    *puVar2 = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 9;
    puVar2 = puVar2 + 10;
  } while (iVar3 < 0x10);
  return uVar4;
}

/* ref: FUN_01065ef0 */
uint F_01065ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1065ef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 4;
  if (0xd < param_2) {
    uVar1 = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)(param_1 + 5) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_1 + 9) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 0xb);
    *(undefined1 *)(param_1 + 0xb) = uVar1;
    return 0xd;
  }
  if (4 < param_2) {
    uVar2 = F_0105e470(param_1 + 4,param_2 - 4,param_3);
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_01065f60 */
uint F_01065f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 200) & 0xffffff38) + 200;
}

/* ref: FUN_01065f80 */
uint F_01065f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065f80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 3;
}

/* ref: FUN_01065fb0 */
uint F_01065fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01066020 */
uint F_01066020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066020u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0xf < param_2) {
    iVar6 = 2;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_010660b0 */
uint F_010660b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10660b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0x17 < param_2) {
    iVar6 = 4;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_01066140 */
uint F_01066140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066140u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0x27 < param_2) {
    iVar6 = 8;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_010661d0 */
uint F_010661d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10661d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0x47 < param_2) {
    iVar6 = 0x10;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_01066260 */
uint F_01066260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066260u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0x87 < param_2) {
    iVar6 = 0x20;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_010662f0 */
unsigned int F_010662f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10662f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (param_2 <= uVar1) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    uVar1 = uVar1 + 2;
  } while (iVar2 < 5);
  return 0;
}

/* ref: FUN_01066310 */
uint F_01066310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066310u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 5;
}

/* ref: FUN_01066340 */
uint F_01066340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x28) & 0xffffffd8) + 0x28;
}

/* ref: FUN_01066360 */
uint F_01066360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066360u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 8 - (param_2 < 8);
}

/* ref: FUN_010663b0 */
uint F_010663b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10663b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0x27) & 0xffffffe0) + 0x27;
}

/* ref: FUN_01066410 */
uint F_01066410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x100) & 0xffffff00) + 0x100;
}

/* ref: FUN_01066430 */
uint F_01066430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066430u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_01066460 */
uint F_01066460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x100) & 0xffffff00) + 0x100;
}

/* ref: FUN_01066480 */
uint F_01066480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xfd8) & 0xfffff028) + 0xfd8;
}

/* ref: FUN_010664a0 */
uint F_010664a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10664a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar3 = 4;
  if (7 < param_2) {
    uVar1 = param_1[4];
    param_1[4] = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = uVar1;
    param_1[6] = param_1[5];
    param_1[5] = uVar2;
    return 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066500 */
uint F_01066500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066500u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0xb < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066580 */
uint F_01066580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066580u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x13 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066600 */
uint F_01066600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066600u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x23 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066680 */
uint F_01066680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066680u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x43 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066700 */
uint F_01066700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066700u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x83 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066780 */
uint F_01066780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066780u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[9];
  param_1[9] = param_1[8];
  param_1[8] = uVar1;
  uVar3 = 0xc;
  if (0x17 < param_2) {
    iVar5 = 3;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 0xc];
      param_1[iVar4 + 0xc] = param_1[iVar4 + 0xf];
      param_1[iVar4 + 0xf] = uVar1;
      uVar1 = param_1[iVar4 + 0xd];
      param_1[iVar4 + 0xd] = param_1[iVar4 + 0xe];
      param_1[iVar4 + 0xe] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0x10;
  }
  if (0xc < param_2) {
    uVar3 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar3 = uVar3 + 0xc;
  }
  return uVar3;
}

/* ref: FUN_01066840 */
uint F_01066840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066840u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0xf < param_2) {
    uVar1 = *param_1;
    *param_1 = param_1[3];
    param_1[3] = uVar1;
    uVar1 = param_1[1];
    param_1[1] = param_1[2];
    param_1[2] = uVar1;
    return 0x10;
  }
  if (param_2 != 0) {
    if (param_2 < 4) {
      return 0;
    }
    uVar1 = *param_1;
    *param_1 = param_1[3];
    param_1[3] = uVar1;
    uVar1 = param_1[1];
    param_1[1] = param_1[2];
    param_1[2] = uVar1;
    uVar2 = (-(uint)(param_2 < 0x10) & 0xfffffff6) + 0x10;
  }
  return uVar2;
}

/* ref: FUN_010668b0 */
uint F_010668b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10668b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  return 0x14;
}

/* ref: FUN_01066960 */
uint F_01066960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066960u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar3 = 0xc;
  if (0xf < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    uVar2 = param_1[0xe];
    param_1[0xf] = uVar1;
    param_1[0xe] = param_1[0xd];
    param_1[0xd] = uVar2;
    return 0x10;
  }
  if (0xc < param_2) {
    uVar3 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar3 = uVar3 + 0xc;
  }
  return uVar3;
}

/* ref: FUN_01066a00 */
uint F_01066a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066a00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x13 < param_2) {
    iVar6 = 2;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066ab0 */
uint F_01066ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x1b < param_2) {
    iVar6 = 4;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066b60 */
uint F_01066b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066b60u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x2b < param_2) {
    iVar6 = 8;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066c10 */
uint F_01066c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066c10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x4b < param_2) {
    iVar6 = 0x10;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066cc0 */
uint F_01066cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x8b < param_2) {
    iVar6 = 0x20;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066d80 */
uint F_01066d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066d80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar4 = uVar3 + 8;
    if (uVar3 + 0xc <= param_2) {
      uVar1 = param_1[0x17];
      param_1[0x17] = param_1[0x14];
      param_1[0x14] = uVar1;
      uVar1 = param_1[0x16];
      param_1[0x16] = param_1[0x15];
      param_1[0x15] = uVar1;
      uVar4 = uVar3 + 0xc;
      if (uVar3 + 0x10 <= param_2) {
        uVar1 = param_1[0x1b];
        param_1[0x1b] = param_1[0x18];
        param_1[0x18] = uVar1;
        uVar1 = param_1[0x1a];
        param_1[0x1a] = param_1[0x19];
        param_1[0x19] = uVar1;
        uVar4 = uVar3 + 0x10;
        if (uVar3 + 0x14 <= param_2) {
          uVar1 = param_1[0x1f];
          param_1[0x1f] = param_1[0x1c];
          param_1[0x1c] = uVar1;
          uVar1 = param_1[0x1e];
          uVar4 = uVar3 + 0x18;
          param_1[0x1e] = param_1[0x1d];
          param_1[0x1d] = uVar1;
          if (uVar3 + 0x1c <= param_2) {
            uVar1 = param_1[0x24];
            param_1[0x24] = param_1[0x27];
            param_1[0x27] = uVar1;
            uVar1 = param_1[0x25];
            param_1[0x25] = param_1[0x26];
            param_1[0x26] = uVar1;
            return uVar3 + 0x1c;
          }
          if (uVar4 < param_2) {
            uVar3 = F_0105dfc0(param_2 - uVar4,param_1 + 0x24);
            uVar4 = uVar4 + uVar3;
          }
        }
      }
    }
    return uVar4;
  }
  return 4;
}

/* ref: FUN_01066e80 */
uint F_01066e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066e80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar2 = param_1[3];
  param_1[3] = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar2;
  param_1[1] = param_1[2];
  param_1[2] = uVar3;
  if (0xb < param_2) {
    uVar4 = F_0105df60(8,param_1 + 8);
    uVar6 = uVar4 + 8;
    if (uVar4 + 0xc <= param_2) {
      uVar2 = param_1[0x17];
      param_1[0x17] = param_1[0x14];
      param_1[0x14] = uVar2;
      uVar2 = param_1[0x16];
      param_1[0x16] = param_1[0x15];
      param_1[0x15] = uVar2;
      uVar6 = uVar4 + 0xc;
      if (uVar4 + 0x10 <= param_2) {
        uVar2 = param_1[0x18];
        param_1[0x18] = param_1[0x1b];
        uVar3 = param_1[0x1a];
        param_1[0x1b] = uVar2;
        param_1[0x1a] = param_1[0x19];
        param_1[0x19] = uVar3;
        uVar1 = uVar4 + 0x14;
        uVar6 = uVar4 + 0x10;
        if (uVar1 <= param_2) {
          uVar2 = param_1[0x1c];
          param_1[0x1c] = param_1[0x1f];
          param_1[0x1f] = uVar2;
          uVar2 = param_1[0x1d];
          param_1[0x1d] = param_1[0x1e];
          param_1[0x1e] = uVar2;
          if (uVar4 + 0x1c <= param_2) {
            iVar5 = 0;
            iVar7 = 2;
            do {
              uVar2 = param_1[iVar5 + 0x20];
              param_1[iVar5 + 0x20] = param_1[iVar5 + 0x23];
              param_1[iVar5 + 0x23] = uVar2;
              uVar2 = param_1[iVar5 + 0x21];
              param_1[iVar5 + 0x21] = param_1[iVar5 + 0x22];
              param_1[iVar5 + 0x22] = uVar2;
              iVar5 = iVar5 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            return uVar1 + iVar5;
          }
          uVar6 = uVar1;
          if (uVar1 < param_2) {
            uVar6 = F_0105dfc0(param_2 - uVar1,param_1 + 0x20);
            uVar6 = uVar1 + uVar6;
          }
        }
      }
    }
    return uVar6;
  }
  return 4;
}

/* ref: FUN_01066fa0 */
uint F_01066fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar5 = uVar3 + 8;
    if (uVar3 + 0xc <= param_2) {
      uVar1 = param_1[0x17];
      param_1[0x17] = param_1[0x14];
      param_1[0x14] = uVar1;
      uVar1 = param_1[0x16];
      param_1[0x16] = param_1[0x15];
      param_1[0x15] = uVar1;
      uVar5 = uVar3 + 0xc;
      if (uVar3 + 0x10 <= param_2) {
        uVar1 = param_1[0x18];
        param_1[0x18] = param_1[0x1b];
        uVar2 = param_1[0x1a];
        param_1[0x1b] = uVar1;
        param_1[0x1a] = param_1[0x19];
        param_1[0x19] = uVar2;
        uVar5 = uVar3 + 0x10;
        if (uVar3 + 0x14 <= param_2) {
          uVar1 = param_1[0x1c];
          param_1[0x1c] = param_1[0x1f];
          uVar5 = uVar3 + 0x18;
          param_1[0x1f] = uVar1;
          uVar1 = param_1[0x1d];
          param_1[0x1d] = param_1[0x1e];
          param_1[0x1e] = uVar1;
          if (uVar3 + 0x28 <= param_2) {
            iVar4 = 0;
            iVar6 = 4;
            do {
              uVar1 = param_1[iVar4 + 0x24];
              param_1[iVar4 + 0x24] = param_1[iVar4 + 0x27];
              param_1[iVar4 + 0x27] = uVar1;
              uVar1 = param_1[iVar4 + 0x25];
              param_1[iVar4 + 0x25] = param_1[iVar4 + 0x26];
              param_1[iVar4 + 0x26] = uVar1;
              iVar4 = iVar4 + 4;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            return uVar5 + iVar4;
          }
          if (uVar5 < param_2) {
            uVar3 = F_0105dfc0(param_2 - uVar5,param_1 + 0x24);
            uVar5 = uVar5 + uVar3;
          }
        }
      }
    }
    return uVar5;
  }
  return 4;
}

/* ref: FUN_010670c0 */
uint F_010670c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10670c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar5 = uVar3 + 8;
    if (uVar3 + 0xc <= param_2) {
      uVar1 = param_1[0x17];
      param_1[0x17] = param_1[0x14];
      param_1[0x14] = uVar1;
      uVar1 = param_1[0x16];
      param_1[0x16] = param_1[0x15];
      param_1[0x15] = uVar1;
      uVar5 = uVar3 + 0xc;
      if (uVar3 + 0x10 <= param_2) {
        uVar1 = param_1[0x18];
        param_1[0x18] = param_1[0x1b];
        uVar2 = param_1[0x1a];
        param_1[0x1b] = uVar1;
        param_1[0x1a] = param_1[0x19];
        param_1[0x19] = uVar2;
        uVar5 = uVar3 + 0x10;
        if (uVar3 + 0x14 <= param_2) {
          uVar1 = param_1[0x1c];
          param_1[0x1c] = param_1[0x1f];
          uVar5 = uVar3 + 0x18;
          param_1[0x1f] = uVar1;
          uVar1 = param_1[0x1d];
          param_1[0x1d] = param_1[0x1e];
          param_1[0x1e] = uVar1;
          if (uVar3 + 0x38 <= param_2) {
            iVar4 = 0;
            iVar6 = 8;
            do {
              uVar1 = param_1[iVar4 + 0x24];
              param_1[iVar4 + 0x24] = param_1[iVar4 + 0x27];
              param_1[iVar4 + 0x27] = uVar1;
              uVar1 = param_1[iVar4 + 0x25];
              param_1[iVar4 + 0x25] = param_1[iVar4 + 0x26];
              param_1[iVar4 + 0x26] = uVar1;
              iVar4 = iVar4 + 4;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            return uVar5 + iVar4;
          }
          if (uVar5 < param_2) {
            uVar3 = F_0105dfc0(param_2 - uVar5,param_1 + 0x24);
            uVar5 = uVar5 + uVar3;
          }
        }
      }
    }
    return uVar5;
  }
  return 4;
}

/* ref: FUN_010671e0 */
uint F_010671e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10671e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  uVar4 = uVar3 + 8;
  if (uVar3 + 0xc <= param_2) {
    uVar1 = param_1[0x14];
    param_1[0x14] = param_1[0x17];
    uVar2 = param_1[0x16];
    param_1[0x17] = uVar1;
    param_1[0x16] = param_1[0x15];
    param_1[0x15] = uVar2;
    uVar4 = uVar3 + 0xd;
  }
  return uVar4;
}

/* ref: FUN_01067260 */
uint F_01067260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0xc) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010672b9;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 2;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
LAB_010672b9: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 8) {
    if (param_2 <= uVar4) goto LAB_0106730f;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0xc);
  }
  else {
    uVar2 = 0;
    iVar5 = 2;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0xc + uVar2);
      *(undefined1 *)(param_1 + 0xc + uVar2) = *(undefined1 *)(param_1 + 0xf + uVar2);
      *(undefined1 *)(param_1 + 0xf + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0xd + uVar2);
      *(undefined1 *)(param_1 + 0xd + uVar2) = *(undefined1 *)(param_1 + 0xe + uVar2);
      *(undefined1 *)(param_1 + 0xe + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_0106730f: ;
  if (uVar4 + 8 <= param_2) {
    iVar3 = 0;
    iVar5 = 2;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x14 + iVar3);
      *(undefined1 *)(param_1 + 0x14 + iVar3) = *(undefined1 *)(param_1 + 0x17 + iVar3);
      *(undefined1 *)(param_1 + 0x17 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x15 + iVar3);
      *(undefined1 *)(param_1 + 0x15 + iVar3) = *(undefined1 *)(param_1 + 0x16 + iVar3);
      *(undefined1 *)(param_1 + 0x16 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x14);
  return uVar2 + uVar4;
}

/* ref: FUN_01067370 */
uint F_01067370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 4;
  if (param_2 < 0x14) {
    if (4 < param_2) {
      uVar2 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010673c9;
    }
  }
  else {
    uVar2 = 0;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar2);
      *(undefined1 *)(param_1 + 4 + uVar2) = *(undefined1 *)(param_1 + 7 + uVar2);
      *(undefined1 *)(param_1 + 7 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar2);
      *(undefined1 *)(param_1 + 5 + uVar2) = *(undefined1 *)(param_1 + 6 + uVar2);
      *(undefined1 *)(param_1 + 6 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
LAB_010673c9: ;
    uVar5 = uVar2 + 4;
  }
  if (param_2 < uVar5 + 0x10) {
    if (param_2 <= uVar5) goto LAB_0106741f;
    uVar2 = F_0105dfc0(param_2 - uVar5,param_1 + 0x14);
  }
  else {
    uVar2 = 0;
    iVar4 = 4;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x14 + uVar2);
      *(undefined1 *)(param_1 + 0x14 + uVar2) = *(undefined1 *)(param_1 + 0x17 + uVar2);
      *(undefined1 *)(param_1 + 0x17 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x15 + uVar2);
      *(undefined1 *)(param_1 + 0x15 + uVar2) = *(undefined1 *)(param_1 + 0x16 + uVar2);
      *(undefined1 *)(param_1 + 0x16 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar5 = uVar5 + uVar2;
LAB_0106741f: ;
  if (uVar5 + 0x10 <= param_2) {
    iVar3 = 0;
    iVar4 = 4;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x24 + iVar3);
      *(undefined1 *)(param_1 + 0x24 + iVar3) = *(undefined1 *)(param_1 + 0x27 + iVar3);
      *(undefined1 *)(param_1 + 0x27 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x25 + iVar3);
      *(undefined1 *)(param_1 + 0x25 + iVar3) = *(undefined1 *)(param_1 + 0x26 + iVar3);
      *(undefined1 *)(param_1 + 0x26 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return iVar3 + uVar5;
  }
  if (param_2 <= uVar5) {
    return uVar5;
  }
  uVar2 = F_0105dfc0(param_2 - uVar5,param_1 + 0x24);
  return uVar2 + uVar5;
}

/* ref: FUN_01067480 */
uint F_01067480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x24) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010674d9;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 8;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
LAB_010674d9: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x20) {
    if (param_2 <= uVar4) goto LAB_0106752f;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x24);
  }
  else {
    uVar2 = 0;
    iVar5 = 8;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x24 + uVar2);
      *(undefined1 *)(param_1 + 0x24 + uVar2) = *(undefined1 *)(param_1 + 0x27 + uVar2);
      *(undefined1 *)(param_1 + 0x27 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x25 + uVar2);
      *(undefined1 *)(param_1 + 0x25 + uVar2) = *(undefined1 *)(param_1 + 0x26 + uVar2);
      *(undefined1 *)(param_1 + 0x26 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_0106752f: ;
  if (uVar4 + 0x20 <= param_2) {
    iVar3 = 0;
    iVar5 = 8;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x44 + iVar3);
      *(undefined1 *)(param_1 + 0x44 + iVar3) = *(undefined1 *)(param_1 + 0x47 + iVar3);
      *(undefined1 *)(param_1 + 0x47 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x45 + iVar3);
      *(undefined1 *)(param_1 + 0x45 + iVar3) = *(undefined1 *)(param_1 + 0x46 + iVar3);
      *(undefined1 *)(param_1 + 0x46 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x44);
  return uVar2 + uVar4;
}

/* ref: FUN_01067590 */
uint F_01067590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x44) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010675e9;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 0x10;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
LAB_010675e9: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x40) {
    if (param_2 <= uVar4) goto LAB_0106763f;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x44);
  }
  else {
    uVar2 = 0;
    iVar5 = 0x10;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x44 + uVar2);
      *(undefined1 *)(param_1 + 0x44 + uVar2) = *(undefined1 *)(param_1 + 0x47 + uVar2);
      *(undefined1 *)(param_1 + 0x47 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x45 + uVar2);
      *(undefined1 *)(param_1 + 0x45 + uVar2) = *(undefined1 *)(param_1 + 0x46 + uVar2);
      *(undefined1 *)(param_1 + 0x46 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_0106763f: ;
  if (uVar4 + 0x40 <= param_2) {
    iVar3 = 0;
    iVar5 = 0x10;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x84 + iVar3);
      *(undefined1 *)(param_1 + 0x84 + iVar3) = *(undefined1 *)(param_1 + 0x87 + iVar3);
      *(undefined1 *)(param_1 + 0x87 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x85 + iVar3);
      *(undefined1 *)(param_1 + 0x85 + iVar3) = *(undefined1 *)(param_1 + 0x86 + iVar3);
      *(undefined1 *)(param_1 + 0x86 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x84);
  return uVar2 + uVar4;
}

/* ref: FUN_010676c0 */
uint F_010676c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10676c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x84) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_01067719;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 0x20;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
LAB_01067719: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x80) {
    if (param_2 <= uVar4) goto LAB_0106778a;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x84);
  }
  else {
    uVar2 = 0;
    iVar5 = 0x20;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x84 + uVar2);
      *(undefined1 *)(param_1 + 0x84 + uVar2) = *(undefined1 *)(param_1 + 0x87 + uVar2);
      *(undefined1 *)(param_1 + 0x87 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x85 + uVar2);
      *(undefined1 *)(param_1 + 0x85 + uVar2) = *(undefined1 *)(param_1 + 0x86 + uVar2);
      *(undefined1 *)(param_1 + 0x86 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_0106778a: ;
  if (uVar4 + 0x80 <= param_2) {
    iVar3 = 0;
    iVar5 = 0x20;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x104 + iVar3);
      *(undefined1 *)(param_1 + 0x104 + iVar3) = *(undefined1 *)(param_1 + 0x107 + iVar3);
      *(undefined1 *)(param_1 + 0x107 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x105 + iVar3);
      *(undefined1 *)(param_1 + 0x105 + iVar3) = *(undefined1 *)(param_1 + 0x106 + iVar3);
      *(undefined1 *)(param_1 + 0x106 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x104);
  return uVar2 + uVar4;
}

/* ref: FUN_01067810 */
uint F_01067810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067810u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x104) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_01067869;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 0x40;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
LAB_01067869: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x100) {
    if (param_2 <= uVar4) goto LAB_010678da;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x104);
  }
  else {
    uVar2 = 0;
    iVar5 = 0x40;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x104 + uVar2);
      *(undefined1 *)(param_1 + 0x104 + uVar2) = *(undefined1 *)(param_1 + 0x107 + uVar2);
      *(undefined1 *)(param_1 + 0x107 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x105 + uVar2);
      *(undefined1 *)(param_1 + 0x105 + uVar2) = *(undefined1 *)(param_1 + 0x106 + uVar2);
      *(undefined1 *)(param_1 + 0x106 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_010678da: ;
  if (uVar4 + 0x100 <= param_2) {
    iVar3 = 0;
    iVar5 = 0x40;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x204 + iVar3);
      *(undefined1 *)(param_1 + 0x204 + iVar3) = *(undefined1 *)(param_1 + 0x207 + iVar3);
      *(undefined1 *)(param_1 + 0x207 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x205 + iVar3);
      *(undefined1 *)(param_1 + 0x205 + iVar3) = *(undefined1 *)(param_1 + 0x206 + iVar3);
      *(undefined1 *)(param_1 + 0x206 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x204);
  return uVar2 + uVar4;
}

/* ref: FUN_01067960 */
uint F_01067960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067960u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x204) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010679b9;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 0x80;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
LAB_010679b9: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x200) {
    if (param_2 <= uVar4) goto LAB_01067a2a;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x204);
  }
  else {
    uVar2 = 0;
    iVar5 = 0x80;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x204 + uVar2);
      *(undefined1 *)(param_1 + 0x204 + uVar2) = *(undefined1 *)(param_1 + 0x207 + uVar2);
      *(undefined1 *)(param_1 + 0x207 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x205 + uVar2);
      *(undefined1 *)(param_1 + 0x205 + uVar2) = *(undefined1 *)(param_1 + 0x206 + uVar2);
      *(undefined1 *)(param_1 + 0x206 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_01067a2a: ;
  if (uVar4 + 0x200 <= param_2) {
    iVar5 = 0;
    iVar3 = 0x80;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x404 + iVar5);
      *(undefined1 *)(param_1 + 0x404 + iVar5) = *(undefined1 *)(param_1 + 0x407 + iVar5);
      *(undefined1 *)(param_1 + 0x407 + iVar5) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x405 + iVar5);
      *(undefined1 *)(param_1 + 0x405 + iVar5) = *(undefined1 *)(param_1 + 0x406 + iVar5);
      *(undefined1 *)(param_1 + 0x406 + iVar5) = uVar1;
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return iVar5 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x404);
  return uVar2 + uVar4;
}

/* ref: FUN_01067ab0 */
uint F_01067ab0(void)
{
  GEN_ENTER(0x1067ab0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_01067ac0 */
uint F_01067ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_01067ae0 */
uint F_01067ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_01067b30 */
uint F_01067b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01067b50 */
uint F_01067b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067b50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar3 = 4;
  if (7 < param_2) {
    uVar1 = param_1[4];
    param_1[4] = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = uVar1;
    param_1[6] = param_1[5];
    param_1[5] = uVar2;
    return 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067bb0 */
uint F_01067bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_01067c10 */
uint F_01067c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067c10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0xb < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067c90 */
uint F_01067c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067c90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x13 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067d10 */
uint F_01067d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067d10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x23 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067d90 */
uint F_01067d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067d90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x43 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067e10 */
uint F_01067e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067e10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x83 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067e90 */
uint F_01067e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067e90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar3 + 4;
    iVar5 = 0;
    puVar4 = param_1 + 0x10;
    do {
      if (param_2 <= uVar3) {
        return uVar3;
      }
      uVar1 = *puVar4;
      *puVar4 = puVar4[1];
      puVar4[1] = uVar1;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 10;
      puVar4 = puVar4 + 10;
    } while (iVar5 < 0x1e);
    return uVar3;
  }
  return 4;
}

/* ref: FUN_01067f10 */
uint F_01067f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067f10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar3 + 4;
    iVar5 = 0;
    puVar4 = param_1 + 0x17;
    do {
      if (param_2 <= uVar3) {
        return uVar3;
      }
      uVar1 = puVar4[-7];
      puVar4[-7] = puVar4[-6];
      puVar4[-6] = uVar1;
      uVar1 = puVar4[-3];
      puVar4[-3] = puVar4[-2];
      puVar4[-2] = uVar1;
      uVar1 = puVar4[-1];
      puVar4[-1] = *puVar4;
      *puVar4 = uVar1;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 9;
      puVar4 = puVar4 + 10;
    } while (iVar5 < 0x10);
    return uVar3;
  }
  return 4;
}

/* ref: FUN_01067fa0 */
uint F_01067fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  uVar3 = uVar2 + 4;
  if (uVar2 + 0x14 <= param_2) {
    uVar3 = uVar2 + 0x14;
  }
  return uVar3;
}

/* ref: FUN_01068000 */
uint F_01068000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068000u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_01068030 */
uint F_01068030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068030u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 6;
}

/* ref: FUN_01068080 */
uint F_01068080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068080u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 5;
}

/* ref: FUN_010680b0 */
uint F_010680b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10680b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return (-(uint)(param_2 < 9) & 0xfffffffb) + 9;
}

/* ref: FUN_010680f0 */
uint F_010680f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10680f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_01068150 */
uint F_01068150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068150u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_010681b0 */
uint F_010681b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10681b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  if (param_2 < uVar3 + 0xc) {
    return uVar3 + 4;
  }
  uVar4 = F_0105df60(8,param_1 + 0x10);
  return uVar4 + uVar3 + 4;
}

/* ref: FUN_01068220 */
uint F_01068220(void)
{
  GEN_ENTER(0x1068220u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_01068230 */
uint F_01068230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068230u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_01068260 */
uint F_01068260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 4;
  if (0x43 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 4 + iVar4);
      *(undefined1 *)(param_1 + 4 + iVar4) = *(undefined1 *)(param_1 + 7 + iVar4);
      *(undefined1 *)(param_1 + 7 + iVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + iVar4);
      *(undefined1 *)(param_1 + 5 + iVar4) = *(undefined1 *)(param_1 + 6 + iVar4);
      *(undefined1 *)(param_1 + 6 + iVar4) = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_010682d0 */
uint F_010682d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10682d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return (-(uint)(param_2 < 0xf) & 0xfffffff3) + 0xf;
}

/* ref: FUN_01068300 */
uint F_01068300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068300u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[0xb];
  param_1[0xb] = param_1[10];
  param_1[10] = uVar1;
  uVar3 = 0xc;
  if (0x17 < param_2) {
    iVar5 = 3;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 0xc];
      param_1[iVar4 + 0xc] = param_1[iVar4 + 0xf];
      param_1[iVar4 + 0xf] = uVar1;
      uVar1 = param_1[iVar4 + 0xd];
      param_1[iVar4 + 0xd] = param_1[iVar4 + 0xe];
      param_1[iVar4 + 0xe] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0x10;
  }
  if (0xc < param_2) {
    uVar3 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar3 = uVar3 + 0xc;
  }
  return uVar3;
}

/* ref: FUN_010683e0 */
uint F_010683e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10683e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  return 0x18;
}

/* ref: FUN_010684e0 */
uint F_010684e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10684e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_01068500 */
uint F_01068500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 0x100) {
    return 0;
  }
  uVar3 = 0x100;
  if (0x109 < param_2) {
    iVar5 = 5;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 0x100 + iVar4);
      *(undefined1 *)(param_1 + 0x100 + iVar4) = *(undefined1 *)(param_1 + 0x101 + iVar4);
      *(undefined1 *)(param_1 + 0x101 + iVar4) = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 2;
    } while (iVar5 != 0);
    return iVar4 + 0x102;
  }
  if (0x100 < param_2) {
    uVar3 = F_0105e000(param_2 - 0x100,param_1 + 0x100);
    uVar3 = uVar3 + 0x100;
  }
  return uVar3;
}

/* ref: FUN_01068580 */
uint F_01068580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068580u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 9;
}

/* ref: FUN_01068650 */
uint F_01068650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar2 + uVar3;
    uVar2 = uVar3;
    if (uVar3 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar2 = uVar3 + 4;
      if (uVar3 + 6 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar2 = uVar3 + 6;
        if (uVar3 + 8 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x16);
          *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x17);
          *(undefined1 *)(param_1 + 0x17) = uVar1;
          iVar5 = 0;
          uVar2 = uVar3 + 0xc;
          iVar4 = param_1 + 0x20;
          do {
            if (param_2 <= uVar2) {
              return uVar2;
            }
            uVar3 = F_010685b0(iVar4,0x40,param_3);
            iVar5 = iVar5 + 1;
            uVar2 = uVar2 + uVar3;
            iVar4 = iVar4 + 0x40;
          } while (iVar5 < 8);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_01068710 */
uint F_01068710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068710u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar2 + uVar3;
    uVar2 = uVar3;
    if (uVar3 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar2 = uVar3 + 4;
      if (uVar3 + 6 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar2 = uVar3 + 6;
        if (uVar3 + 8 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x16);
          *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x17);
          *(undefined1 *)(param_1 + 0x17) = uVar1;
          iVar5 = 0;
          uVar2 = uVar3 + 0xc;
          iVar4 = param_1 + 0x20;
          do {
            if (param_2 <= uVar2) {
              return uVar2;
            }
            uVar3 = F_010685b0(iVar4,0x40,param_3);
            iVar5 = iVar5 + 1;
            uVar2 = uVar2 + uVar3;
            iVar4 = iVar4 + 0x40;
          } while (iVar5 < 0x10);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_010687d0 */
uint F_010687d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10687d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 2) & 0xfffffffe) + 2;
}

/* ref: FUN_010687f0 */
uint F_010687f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10687f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 0x1c) {
    return 0;
  }
  if (param_2 < 0x2e) {
    return 0x1c;
  }
  if (param_2 < 0x38) {
    return 0x2e;
  }
  if (param_2 < 0x3e) {
    return 0x38;
  }
  return (-(uint)(param_2 < 0x40) & 0xfffffffe) + 0x40;
}

/* ref: FUN_01068830 */
uint F_01068830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 0x1c) {
    return 0;
  }
  if (param_2 < 0x2e) {
    return 0x1c;
  }
  if (param_2 < 0x38) {
    return 0x2e;
  }
  if (param_2 < 0x3e) {
    return 0x38;
  }
  return (-(uint)(param_2 < 0x40) & 0xfffffffe) + 0x40;
}

/* ref: FUN_01068870 */
uint F_01068870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068870u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  return 0x10;
}

/* ref: FUN_01068920 */
uint F_01068920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x21) & 0xffffffe0) + 0x21;
}

/* ref: FUN_01068940 */
uint F_01068940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068940u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 8;
  if (0x1b < param_2) {
    iVar6 = 5;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_010689f0 */
uint F_010689f0(void)
{
  GEN_ENTER(0x10689f0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_01068a00 */
uint F_01068a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068a00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_01068a30 */
uint F_01068a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068a30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return 0x10;
}

/* ref: FUN_01068af0 */
uint F_01068af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x1b) & 0xffffffe6) + 0x1b;
}

/* ref: FUN_01068b10 */
uint F_01068b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068b10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_01068b70 */
uint F_01068b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068b70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (0xf < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    if (param_2 < 0x14) {
      return 0x10;
    }
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    param_1[0x13] = uVar1;
    uVar1 = param_1[0x11];
    param_1[0x11] = param_1[0x12];
    param_1[0x12] = uVar1;
    iVar3 = 0;
    uVar4 = 0x14;
    puVar2 = param_1 + 0x19;
    do {
      if (param_2 <= uVar4) {
        return uVar4;
      }
      uVar1 = puVar2[-5];
      puVar2[-5] = puVar2[-2];
      puVar2[-2] = uVar1;
      uVar1 = puVar2[-4];
      puVar2[-4] = puVar2[-3];
      puVar2[-3] = uVar1;
      uVar1 = puVar2[-1];
      puVar2[-1] = puVar2[2];
      puVar2[2] = uVar1;
      uVar1 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar1;
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 8;
      puVar2 = puVar2 + 8;
    } while (iVar3 < 4);
    return uVar4;
  }
  return 0xc;
}

/* ref: FUN_01068c80 */
uint F_01068c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  return param_3;
}

/* ref: FUN_01068c90 */
uint F_01068c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068c90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_01068d20 */
uint F_01068d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_01068d30 */
uint F_01068d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = *param_1;
  param_1[2] = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar3 = 4;
  if (param_2 < 0x10) {
    if (param_2 < 5) goto LAB_01068dad;
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
  }
  else {
    uVar3 = 0;
    iVar4 = 3;
    do {
      uVar1 = param_1[uVar3 + 4];
      param_1[uVar3 + 4] = param_1[uVar3 + 7];
      param_1[uVar3 + 7] = uVar1;
      uVar1 = param_1[uVar3 + 5];
      param_1[uVar3 + 5] = param_1[uVar3 + 6];
      param_1[uVar3 + 6] = uVar1;
      uVar3 = uVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar3 = uVar3 + 4;
LAB_01068dad: ;
  if (uVar3 + 4 <= param_2) {
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    uVar2 = param_1[0x12];
    param_1[0x13] = uVar1;
    param_1[0x12] = param_1[0x11];
    param_1[0x11] = uVar2;
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01068de0 */
uint F_01068de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar2 = 4;
  if (0x17 < param_2) {
    uVar2 = F_01068d30(param_1 + 4,0x14,param_3);
    return uVar2 + 4;
  }
  if (4 < param_2) {
    uVar2 = F_01068d30(param_1 + 4,param_2 - 4,param_3);
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_01068e50 */
uint F_01068e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068e50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (7 < param_2) {
    uVar1 = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = param_1[4];
    param_1[6] = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    uVar4 = 8;
    if (0xf < param_2) {
      uVar4 = F_0105df60(8,param_1 + 8);
      if (param_2 < uVar4 + 0x10) {
        return uVar4 + 8;
      }
      uVar5 = F_0105df60(8,param_1 + 0x10);
      uVar5 = uVar4 + 0xc + uVar5;
      uVar4 = uVar5;
      if (uVar5 + 4 <= param_2) {
        uVar1 = param_1[0x1f];
        param_1[0x1f] = param_1[0x1c];
        param_1[0x1c] = uVar1;
        uVar1 = param_1[0x1e];
        param_1[0x1e] = param_1[0x1d];
        param_1[0x1d] = uVar1;
        uVar4 = uVar5 + 4;
        if (uVar5 + 8 <= param_2) {
          uVar1 = param_1[0x23];
          param_1[0x23] = param_1[0x20];
          param_1[0x20] = uVar1;
          uVar1 = param_1[0x22];
          param_1[0x22] = param_1[0x21];
          uVar4 = uVar5 + 0xc;
          param_1[0x21] = uVar1;
          if (uVar5 + 0x10 <= param_2) {
            uVar1 = param_1[0x2b];
            param_1[0x2b] = param_1[0x28];
            param_1[0x28] = uVar1;
            uVar1 = param_1[0x2a];
            param_1[0x2a] = param_1[0x29];
            uVar4 = uVar5 + 0x30;
            param_1[0x29] = uVar1;
            uVar3 = uVar5 + 0x10;
            if ((param_2 < uVar4) || (uVar3 = uVar5 + 0x60, uVar5 + 0x60 <= param_2)) {
              uVar4 = uVar3;
            }
          }
        }
      }
    }
    return uVar4;
  }
  return 4;
}

/* ref: FUN_01068f60 */
uint F_01068f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = *param_1;
  param_1[2] = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar3 = 4;
  if (param_2 < 0x18) {
    if (param_2 < 5) goto LAB_01068fb8;
    iVar5 = param_2 - 4;
  }
  else {
    iVar5 = 0x14;
  }
  uVar3 = F_01068d30(param_1 + 4,iVar5,param_3);
  uVar3 = uVar3 + 4;
LAB_01068fb8: ;
  uVar4 = uVar3;
  if (uVar3 + 2 <= param_2) {
    uVar1 = param_1[0x19];
    param_1[0x19] = param_1[0x18];
    param_1[0x18] = uVar1;
    uVar4 = uVar3 + 0x402;
    if (param_2 < uVar3 + 0x402) {
      uVar4 = uVar3 + 2;
    }
  }
  return uVar4;
}

/* ref: FUN_01068fe0 */
uint F_01068fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_01069040 */
uint F_01069040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x21) & 0xffffffe0) + 0x21;
}

/* ref: FUN_01069060 */
uint F_01069060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1 + 2;
}

/* ref: FUN_01069160 */
uint F_01069160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069160u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_01069190 */
uint F_01069190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069190u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_010691c0 */
uint F_010691c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10691c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_010691e0 */
uint F_010691e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10691e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069200 */
uint F_01069200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069200u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_01069230 */
uint F_01069230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069230u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_01069260 */
uint F_01069260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_01069280 */
uint F_01069280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_010692a0 */
uint F_010692a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10692a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_010692c0 */
uint F_010692c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10692c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_010692f0 */
uint F_010692f0(void)
{
  GEN_ENTER(0x10692f0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_01069300 */
uint F_01069300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_01069330 */
uint F_01069330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069330u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2;
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (param_2 < uVar3 + 2) {
    return uVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 8);
  uVar4 = uVar3 + 4;
  *(undefined1 *)(param_1 + 8) = uVar1;
  if (param_2 < uVar4) {
    return uVar3 + 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  if (param_2 < uVar3 + 0xc) {
    return uVar4;
  }
  uVar3 = F_0105df60(8,param_1 + 0x10);
  uVar4 = uVar4 + uVar3;
  if (param_2 < uVar4 + 8) {
    return uVar4;
  }
  uVar3 = F_0105df60(8,param_1 + 0x18);
  uVar4 = uVar4 + uVar3;
  if (param_2 < uVar4 + 8) {
    return uVar4;
  }
  uVar3 = F_0105df60(8,param_1 + 0x20);
  uVar4 = uVar4 + uVar3;
  if (param_2 < uVar4 + 100) {
    if (param_2 <= uVar4) goto LAB_0106940c;
    uVar3 = F_0105e000(param_2 - uVar4,param_1 + 0x28);
  }
  else {
    uVar3 = 0;
    param_2 = 0x32;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x28 + uVar3);
      *(undefined1 *)(param_1 + 0x28 + uVar3) = *(undefined1 *)(param_1 + 0x29 + uVar3);
      *(undefined1 *)(param_1 + 0x29 + uVar3) = uVar1;
      uVar3 = uVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar4 = uVar4 + uVar3;
LAB_0106940c: ;
  if (uVar2 < uVar4 + 0x20) {
    return uVar4;
  }
  return uVar4 + 0x20;
}

/* ref: FUN_01069420 */
uint F_01069420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_01069450 */
uint F_01069450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069470 */
uint F_01069470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069530 */
uint F_01069530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069530u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_01069600 */
uint F_01069600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069620 */
uint F_01069620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return 0xc;
}

/* ref: FUN_010696b0 */
uint F_010696b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10696b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < 0xc) {
    if (param_2 != 0) {
      uVar4 = F_01069620(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = param_1[3];
    param_1[3] = *param_1;
    uVar2 = param_1[1];
    *param_1 = uVar1;
    param_1[1] = param_1[2];
    param_1[2] = uVar2;
    uVar1 = param_1[7];
    param_1[7] = param_1[4];
    uVar2 = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = param_1[6];
    param_1[6] = uVar2;
    uVar1 = param_1[8];
    param_1[8] = param_1[9];
    param_1[9] = uVar1;
    uVar1 = param_1[10];
    param_1[10] = param_1[0xb];
    param_1[0xb] = uVar1;
    uVar4 = 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0xc,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    param_1[0x13] = uVar1;
    uVar1 = param_1[0x11];
    param_1[0x11] = param_1[0x12];
    param_1[0x12] = uVar1;
    uVar1 = param_1[0x14];
    param_1[0x14] = param_1[0x15];
    param_1[0x15] = uVar1;
    uVar1 = param_1[0x16];
    param_1[0x16] = param_1[0x17];
    param_1[0x17] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0x18,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x18];
    param_1[0x18] = param_1[0x1b];
    param_1[0x1b] = uVar1;
    uVar1 = param_1[0x19];
    param_1[0x19] = param_1[0x1a];
    param_1[0x1a] = uVar1;
    uVar1 = param_1[0x1c];
    param_1[0x1c] = param_1[0x1f];
    param_1[0x1f] = uVar1;
    uVar1 = param_1[0x1d];
    param_1[0x1d] = param_1[0x1e];
    param_1[0x1e] = uVar1;
    uVar1 = param_1[0x20];
    param_1[0x20] = param_1[0x21];
    param_1[0x21] = uVar1;
    uVar1 = param_1[0x22];
    param_1[0x22] = param_1[0x23];
    param_1[0x23] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0x24,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x24];
    param_1[0x24] = param_1[0x27];
    param_1[0x27] = uVar1;
    uVar1 = param_1[0x25];
    param_1[0x25] = param_1[0x26];
    param_1[0x26] = uVar1;
    uVar1 = param_1[0x28];
    param_1[0x28] = param_1[0x2b];
    param_1[0x2b] = uVar1;
    uVar1 = param_1[0x29];
    param_1[0x29] = param_1[0x2a];
    param_1[0x2a] = uVar1;
    uVar1 = param_1[0x2c];
    param_1[0x2c] = param_1[0x2d];
    param_1[0x2d] = uVar1;
    uVar1 = param_1[0x2e];
    param_1[0x2e] = param_1[0x2f];
    param_1[0x2f] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0x30,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x30];
    param_1[0x30] = param_1[0x33];
    param_1[0x33] = uVar1;
    uVar1 = param_1[0x31];
    param_1[0x31] = param_1[0x32];
    param_1[0x32] = uVar1;
    uVar1 = param_1[0x34];
    param_1[0x34] = param_1[0x37];
    param_1[0x37] = uVar1;
    uVar1 = param_1[0x35];
    param_1[0x35] = param_1[0x36];
    param_1[0x36] = uVar1;
    uVar1 = param_1[0x38];
    param_1[0x38] = param_1[0x39];
    param_1[0x39] = uVar1;
    uVar1 = param_1[0x3a];
    param_1[0x3a] = param_1[0x3b];
    param_1[0x3b] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (uVar4 + 0xc <= param_2) {
    uVar1 = param_1[0x3c];
    param_1[0x3c] = param_1[0x3f];
    param_1[0x3f] = uVar1;
    uVar1 = param_1[0x3d];
    param_1[0x3d] = param_1[0x3e];
    param_1[0x3e] = uVar1;
    uVar1 = param_1[0x40];
    param_1[0x40] = param_1[0x43];
    param_1[0x43] = uVar1;
    uVar1 = param_1[0x41];
    param_1[0x41] = param_1[0x42];
    param_1[0x42] = uVar1;
    uVar1 = param_1[0x44];
    param_1[0x44] = param_1[0x45];
    param_1[0x45] = uVar1;
    uVar1 = param_1[0x46];
    param_1[0x46] = param_1[0x47];
    param_1[0x47] = uVar1;
    return uVar4 + 0xc;
  }
  if (uVar4 < param_2) {
    uVar3 = F_01069620(param_1 + 0x3c,param_2 - uVar4,param_3);
    return uVar3 + uVar4;
  }
  return uVar4;
}

/* ref: FUN_01069a40 */
uint F_01069a40(void)
{
  GEN_ENTER(0x1069a40u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_01069aa0 */
uint F_01069aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_01069b00 */
uint F_01069b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < 8) {
    if (param_2 != 0) {
      uVar4 = F_01069aa0(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = param_1[3];
    param_1[3] = *param_1;
    uVar2 = param_1[1];
    *param_1 = uVar1;
    param_1[1] = param_1[2];
    param_1[2] = uVar2;
    uVar1 = param_1[7];
    param_1[7] = param_1[4];
    uVar2 = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = param_1[6];
    param_1[6] = uVar2;
    uVar4 = 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 8,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    param_1[0xb] = uVar1;
    uVar1 = param_1[9];
    param_1[9] = param_1[10];
    param_1[10] = uVar1;
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 0x10,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    param_1[0x13] = uVar1;
    uVar1 = param_1[0x11];
    param_1[0x11] = param_1[0x12];
    param_1[0x12] = uVar1;
    uVar1 = param_1[0x14];
    param_1[0x14] = param_1[0x17];
    param_1[0x17] = uVar1;
    uVar1 = param_1[0x15];
    param_1[0x15] = param_1[0x16];
    param_1[0x16] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 0x18,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x18];
    param_1[0x18] = param_1[0x1b];
    param_1[0x1b] = uVar1;
    uVar1 = param_1[0x19];
    param_1[0x19] = param_1[0x1a];
    param_1[0x1a] = uVar1;
    uVar1 = param_1[0x1c];
    param_1[0x1c] = param_1[0x1f];
    param_1[0x1f] = uVar1;
    uVar1 = param_1[0x1d];
    param_1[0x1d] = param_1[0x1e];
    param_1[0x1e] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 0x20,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x20];
    param_1[0x20] = param_1[0x23];
    param_1[0x23] = uVar1;
    uVar1 = param_1[0x21];
    param_1[0x21] = param_1[0x22];
    param_1[0x22] = uVar1;
    uVar1 = param_1[0x24];
    param_1[0x24] = param_1[0x27];
    param_1[0x27] = uVar1;
    uVar1 = param_1[0x25];
    param_1[0x25] = param_1[0x26];
    param_1[0x26] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (uVar4 + 8 <= param_2) {
    uVar1 = param_1[0x28];
    param_1[0x28] = param_1[0x2b];
    param_1[0x2b] = uVar1;
    uVar1 = param_1[0x29];
    param_1[0x29] = param_1[0x2a];
    param_1[0x2a] = uVar1;
    uVar1 = param_1[0x2c];
    param_1[0x2c] = param_1[0x2f];
    param_1[0x2f] = uVar1;
    uVar1 = param_1[0x2d];
    param_1[0x2d] = param_1[0x2e];
    param_1[0x2e] = uVar1;
    return uVar4 + 8;
  }
  if (uVar4 < param_2) {
    uVar3 = F_01069aa0(param_1 + 0x28,param_2 - uVar4,param_3);
    return uVar3 + uVar4;
  }
  return uVar4;
}

/* ref: FUN_01069db0 */
uint F_01069db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069db0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 6;
}

/* ref: FUN_01069de0 */
uint F_01069de0(void)
{
  GEN_ENTER(0x1069de0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_01069df0 */
uint F_01069df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069df0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_01069e20 */
uint F_01069e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069e20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar3 = uVar2 + 4;
      if (uVar2 + 8 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x17);
        *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x16);
        *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = uVar1;
        uVar3 = uVar2 + 8;
        if (uVar2 + 0xc <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x1b);
          *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_1 + 0x18);
          *(undefined1 *)(param_1 + 0x18) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x1a);
          *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x19);
          uVar3 = uVar2 + 0x10;
          *(undefined1 *)(param_1 + 0x19) = uVar1;
          if (param_2 < uVar3) {
            return uVar2 + 0xc;
          }
          uVar1 = *(undefined1 *)(param_1 + 0x1f);
          *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_1 + 0x1c);
          *(undefined1 *)(param_1 + 0x1c) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x1e);
          *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1d);
          *(undefined1 *)(param_1 + 0x1d) = uVar1;
          if (uVar2 + 0x12 <= param_2) {
            uVar1 = *(undefined1 *)(param_1 + 0x21);
            *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_1 + 0x20);
            *(undefined1 *)(param_1 + 0x20) = uVar1;
            uVar3 = uVar2 + 0x14;
          }
        }
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_01069f10 */
uint F_01069f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069f30 */
uint F_01069f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f30u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return (-(uint)(param_2 < 0x83) & 0xffffff87) + 0x83;
}

/* ref: FUN_01069f70 */
uint F_01069f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069fe0 */
uint F_01069fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  uVar2 = uVar1 + 1;
  if (uVar1 + 0x2f <= param_2) {
    uVar2 = uVar1 + 0x2f;
  }
  return uVar2;
}

/* ref: FUN_0106a100 */
uint F_0106a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1 + 1;
}

/* ref: FUN_0106a120 */
uint F_0106a120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x10 <= param_2) {
    uVar1 = uVar1 + 0x10;
  }
  return uVar1;
}

/* ref: FUN_0106a150 */
uint F_0106a150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a150u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_0106a180 */
uint F_0106a180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_0106a1a0 */
uint F_0106a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0106a220 */
uint F_0106a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a220u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0106a250 */
uint F_0106a250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc1) & 0xffffff3f) + 0xc1;
}

/* ref: FUN_0106a270 */
uint F_0106a270(void)
{
  GEN_ENTER(0x106a270u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106a280 */
uint F_0106a280(void)
{
  GEN_ENTER(0x106a280u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106a2e0 */
uint F_0106a2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 3;
}

/* ref: FUN_0106a310 */
uint F_0106a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc1) & 0xffffff3f) + 0xc1;
}

/* ref: FUN_0106a330 */
uint F_0106a330(void)
{
  GEN_ENTER(0x106a330u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106a340 */
uint F_0106a340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a340u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0106a370 */
uint F_0106a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_0106a390 */
uint F_0106a390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a390u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0106a3c0 */
uint F_0106a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 6;
}

/* ref: FUN_0106a3f0 */
uint F_0106a3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0106a470 */
uint F_0106a470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a470u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 0x802) {
    return 2;
  }
  return (-(uint)(param_2 < 0xc02) & 0xfffffc00) + 0xc02;
}

/* ref: FUN_0106a4c0 */
uint F_0106a4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 9;
}

/* ref: FUN_0106a520 */
uint F_0106a520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a520u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  return 0x10;
}

/* ref: FUN_0106a5d0 */
uint F_0106a5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x1c) {
    return 0x14;
  }
  uVar2 = F_0105df60(8,param_1 + 0x18);
  return uVar2 + 0x14;
}

/* ref: FUN_0106a6c0 */
uint F_0106a6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 7) & 0xfffffffa) + 7;
}

/* ref: FUN_0106a6e0 */
uint F_0106a6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  return 0x10;
}

/* ref: FUN_0106a790 */
uint F_0106a790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a790u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  if (param_2 < 0x20) {
    return 0x1c;
  }
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  return 0x20;
}

/* ref: FUN_0106a8e0 */
uint F_0106a8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  if (param_2 < 0x18) {
    return 0x10;
  }
  uVar2 = F_0105df60(8,param_1 + 0x10);
  return uVar2 + 0x10;
}

/* ref: FUN_0106a990 */
uint F_0106a990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a990u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x1c) {
    return 0x14;
  }
  uVar2 = F_0105df60(8,param_1 + 0x18);
  return uVar2 + 0x14;
}

/* ref: FUN_0106aa80 */
uint F_0106aa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106aa80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return (-(uint)(param_2 < 0x34) & 0xffffffe0) + 0x34;
}

/* ref: FUN_0106ab60 */
uint F_0106ab60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106ab60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  return 0x1c;
}

/* ref: FUN_0106ac70 */
uint F_0106ac70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106ac70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x17 < param_2) {
    iVar6 = 3;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_0106ad20 */
uint F_0106ad20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106ad20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  if (0x17 < param_2) {
    uVar1 = *param_1;
    *param_1 = param_1[3];
    uVar2 = param_1[2];
    param_1[3] = uVar1;
    param_1[2] = param_1[1];
    param_1[1] = uVar2;
    uVar1 = param_1[7];
    param_1[7] = param_1[4];
    param_1[4] = uVar1;
    uVar1 = param_1[6];
    param_1[6] = param_1[5];
    param_1[5] = uVar1;
    iVar6 = 3;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (param_2 != 0) {
    uVar4 = F_0106ac70(param_1,param_2,param_3);
  }
  return uVar4;
}

/* ref: FUN_0106adc0 */
uint F_0106adc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106adc0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xd];
  param_1[0xd] = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = param_1[0xe];
  param_1[0xe] = param_1[0xf];
  param_1[0xf] = uVar1;
  return 0x10;
}

/* ref: FUN_0106ae80 */
uint F_0106ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[3];
  param_1[3] = param_1[2];
  param_1[2] = uVar1;
  uVar3 = 4;
  if (0x17 < param_2) {
    iVar5 = 5;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_0106af20 */
uint F_0106af20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106af20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x1b) & 0xffffffe6) + 0x1b;
}

/* ref: FUN_0106af40 */
uint F_0106af40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106af40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x12) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x11];
  param_1[0x11] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  if (param_2 < 0x20) {
    return 0x1c;
  }
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  if (param_2 < 0x24) {
    return 0x20;
  }
  uVar1 = param_1[0x20];
  param_1[0x20] = param_1[0x23];
  param_1[0x23] = uVar1;
  uVar1 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar1;
  if (param_2 < 0x26) {
    return 0x24;
  }
  uVar1 = param_1[0x24];
  param_1[0x24] = param_1[0x25];
  param_1[0x25] = uVar1;
  if (param_2 < 0x2c) {
    return 0x28;
  }
  uVar1 = param_1[0x28];
  param_1[0x28] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x29];
  param_1[0x29] = param_1[0x2a];
  param_1[0x2a] = uVar1;
  if (param_2 < 0x30) {
    return 0x2c;
  }
  uVar1 = param_1[0x2c];
  param_1[0x2c] = param_1[0x2f];
  param_1[0x2f] = uVar1;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = param_1[0x2e];
  param_1[0x2e] = uVar1;
  return 0x30;
}

/* ref: FUN_0106b0e0 */
uint F_0106b0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  uVar5 = 4;
  if (param_2 < 0x20) {
    if (param_2 < 5) goto LAB_0106b14a;
    uVar5 = F_0105e000(param_2 - 4,param_1 + 4);
  }
  else {
    uVar5 = 0;
    iVar6 = 0xe;
    do {
      uVar1 = param_1[uVar5 + 4];
      param_1[uVar5 + 4] = param_1[uVar5 + 5];
      param_1[uVar5 + 5] = uVar1;
      uVar5 = uVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar5 = uVar5 + 4;
LAB_0106b14a: ;
  if (param_2 < uVar5 + 0x1c) {
    if (uVar5 < param_2) {
      uVar4 = F_0105e000(param_2 - uVar5,param_1 + 0x20);
      uVar5 = uVar5 + uVar4;
    }
    return uVar5;
  }
  iVar3 = 0;
  iVar6 = 0xe;
  do {
    uVar1 = param_1[iVar3 + 0x20];
    param_1[iVar3 + 0x20] = param_1[iVar3 + 0x21];
    param_1[iVar3 + 0x21] = uVar1;
    iVar3 = iVar3 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return uVar5 + iVar3;
}

/* ref: FUN_0106b1a0 */
uint F_0106b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_0106b200 */
uint F_0106b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b200u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 5;
}

/* ref: FUN_0106b230 */
uint F_0106b230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b230u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 9;
}

/* ref: FUN_0106b290 */
uint F_0106b290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b290u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0106b360 */
uint F_0106b360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b360u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_0106b430 */
uint F_0106b430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b430u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_0106b500 */
uint F_0106b500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b500u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0106b5a0 */
uint F_0106b5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b630 */
uint F_0106b630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b630u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b6e0 */
uint F_0106b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b790 */
uint F_0106b790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b790u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b840 */
uint F_0106b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b840u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b8f0 */
uint F_0106b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b9a0 */
uint F_0106b9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106ba50 */
uint F_0106ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106ba50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bb00 */
uint F_0106bb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bb00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bbb0 */
uint F_0106bbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bc40 */
uint F_0106bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bc40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bcf0 */
uint F_0106bcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bda0 */
uint F_0106bda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bda0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106be50 */
uint F_0106be50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106be50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bf00 */
uint F_0106bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bfb0 */
uint F_0106bfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106c060 */
uint F_0106c060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c060u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106c110 */
uint F_0106c110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c110u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106c1c0 */
uint F_0106c1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 8 - (param_2 < 8);
}

/* ref: FUN_0106c210 */
uint F_0106c210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c210u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0xf) & 0xfffffff8) + 0xf;
}

/* ref: FUN_0106c270 */
uint F_0106c270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c270u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0x17) & 0xfffffff0) + 0x17;
}

/* ref: FUN_0106c2d0 */
uint F_0106c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0x27) & 0xffffffe0) + 0x27;
}

/* ref: FUN_0106c330 */
uint F_0106c330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c330u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 0x10) {
    return 8;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  uVar3 = uVar2 + 8;
  if (uVar2 + 0x28 <= param_2) {
    uVar3 = uVar2 + 0x28;
  }
  return uVar3;
}

/* ref: FUN_0106c3a0 */
uint F_0106c3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0106c3d0 */
uint F_0106c3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_0106c4a0 */
uint F_0106c4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  return 0x10;
}

/* ref: FUN_0106c550 */
uint F_0106c550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x800) & 0xfffff800) + 0x800;
}

/* ref: FUN_0106c570 */
uint F_0106c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c570u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 4;
}

/* ref: FUN_0106c5a0 */
uint F_0106c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  return uVar2 + 4;
}

/* ref: FUN_0106c5e0 */
uint F_0106c5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  return uVar2 + 4;
}

/* ref: FUN_0106c630 */
uint F_0106c630(void)
{
  GEN_ENTER(0x106c630u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c640 */
uint F_0106c640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 2;
  if (0xb < param_2) {
    iVar5 = 5;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 2 + iVar4);
      *(undefined1 *)(param_1 + 2 + iVar4) = *(undefined1 *)(param_1 + 3 + iVar4);
      *(undefined1 *)(param_1 + 3 + iVar4) = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 2;
    } while (iVar5 != 0);
    return iVar4 + 4;
  }
  if (2 < param_2) {
    iVar5 = 0;
    for (uVar3 = param_2 - 2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = *(undefined1 *)(param_1 + 2 + iVar5);
      *(undefined1 *)(param_1 + 2 + iVar5) = *(undefined1 *)(param_1 + 3 + iVar5);
      *(undefined1 *)(param_1 + 3 + iVar5) = uVar1;
      iVar5 = iVar5 + 2;
    }
    uVar3 = iVar5 + 2;
  }
  return uVar3;
}

/* ref: FUN_0106c6b0 */
uint F_0106c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0106c6e0 */
uint F_0106c6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_0106c740 */
uint F_0106c740(void)
{
  GEN_ENTER(0x106c740u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0106c750 */
uint F_0106c750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c750u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_0106c780 */
uint F_0106c780(void)
{
  GEN_ENTER(0x106c780u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c790 */
uint F_0106c790(void)
{
  GEN_ENTER(0x106c790u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c7a0 */
uint F_0106c7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c7a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 4;
  if (0x13 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 4 + iVar4);
      *(undefined1 *)(param_1 + 4 + iVar4) = *(undefined1 *)(param_1 + 7 + iVar4);
      *(undefined1 *)(param_1 + 7 + iVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + iVar4);
      *(undefined1 *)(param_1 + 5 + iVar4) = *(undefined1 *)(param_1 + 6 + iVar4);
      *(undefined1 *)(param_1 + 6 + iVar4) = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_0106c810 */
uint F_0106c810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c810u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_0106c870 */
uint F_0106c870(void)
{
  GEN_ENTER(0x106c870u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c880 */
uint F_0106c880(void)
{
  GEN_ENTER(0x106c880u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c890 */
uint F_0106c890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106c890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return param_3;
}

/* ref: FUN_0106c8a0 */
uint F_0106c8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_0106c930 */
uint F_0106c930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106c930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return param_2;
}

/* ref: RecvCallbackInterface_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf0 */
uint F_0106c970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106c9b0 */
unsigned int F_0106c9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x106c9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  return 0;
}

/* ref: FUN_0106c9c0 */
uint F_0106c9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x106c9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[249])REFP(0x12b5334));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf0 */
uint F_0106c9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf1 */
uint F_0106ca00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106ca00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_2 + 0xc) + 0x24)));
  if (*(ushort *)(uVar1 + 2) - 0x65 < 0x287) {
                    
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x106e474) + *(ushort *)(uVar1 + 2) + 3))))) {
    case 0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 10: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x10: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x11: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x12: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x13: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x14: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x15: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x16: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x17: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x18: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x19: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x20: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x21: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x22: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x23: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x24: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x25: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x26: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x27: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x28: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x29: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xac))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x30: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x31: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x32: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x33: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x34: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x35: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xdc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x36: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x37: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x38: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x39: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xec))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x40: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x41: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x42: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x43: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x114))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x44: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x45: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x46: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x120))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x47: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x124))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x48: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x128))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x49: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 300))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x130))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x134))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x138))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x13c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x144))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x50: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x148))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x51: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x52: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x150))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x53: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x154))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x54: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x158))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x55: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x56: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x160))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x57: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x164))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x58: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x168))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x59: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x16c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x170))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x174))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x178))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x17c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x180))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x184))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x60: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x188))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x61: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x62: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 400))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 99: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x194))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 100: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x198))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x65: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x19c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x66: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1a0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x67: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1a4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x68: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1a8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x69: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1ac))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1b0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1b4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1b8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1bc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x70: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x71: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1cc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x72: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1d0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x73: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1d4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x74: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1d8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x75: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1dc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x76: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x77: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1e4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x78: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1e8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x79: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1ec))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1f0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 500))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1fc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x200))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x204))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x80: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x208))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x81: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x82: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x210))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x83: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x214))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x84: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x218))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x85: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x21c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x86: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x220))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x87: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x224))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x88: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x228))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x89: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x22c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x230))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x234))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x238))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x240))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x244))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x90: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x248))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x91: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x92: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x250))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x93: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x254))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x94: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 600))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x95: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x25c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x96: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x260))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x97: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x264))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x98: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x268))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x99: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x26c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x270))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x274))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x278))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x27c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x280))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x284))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x288))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x290))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x294))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x298))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x29c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2a0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2a4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2a8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2ac))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xaa: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2b0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xab: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2b4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xac: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2b8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xad: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 700))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xae: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xaf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2cc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2d0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2d4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2d8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2dc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2e0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2e4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2e8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2ec))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xba: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2f0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2f4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbc: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2f8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbd: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2fc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbe: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x300))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x304))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x308))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x310))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x314))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x318))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x31c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 800))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 199: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x324))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 200: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x328))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x32c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xca: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x330))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x334))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcc: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x338))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcd: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x33c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xce: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x340))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x344))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x348))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x350))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x354))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x358))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x35c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x360))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x364))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x368))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x36c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xda: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x370))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x374))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdc: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x378))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdd: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x37c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xde: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x380))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 900))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x388))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x390))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x394))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x398))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x39c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3a0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3a4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3a8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3ac))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xea: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3b0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xeb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3b4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xec: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3b8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xed: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3bc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xee: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xef: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3cc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3d0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3d4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3d8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3dc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3e0))(this,param_1,param_2,uVar1 + 0x10);
    }
  }
  return uVar1;
}

/* ref: FUN_0106f8a0 */
uint F_0106f8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106f8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_01050d30(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x10) = param_1;
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf1 */
uint F_0106f8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x106f8d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf3 */
uint F_0106f8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106f8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_0106c890((uint)*(ushort *)(param_1 + 2),param_1 + 0x10,param_2 + -0x10,0);
  uVar1 = F_0106c930(param_1,0x10,0);
  return uVar1;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf2 */
unsigned int F_0106f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106f940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf3 */
unsigned int F_0106f950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106f950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: PacketBufferTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_0106f960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106f960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_0106f990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106f990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106f9d0 */
uint F_0106f9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x106f9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf2 */
uint F_0106fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106fa20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __time64_t _Var1;
  
  *param_1 = *param_1 & 0xffffff14 | 0x14;
  *(undefined2 *)((int)param_1 + 2) = *(undefined2 *)(this + 0x30);
  *(undefined1 *)((int)param_1 + 1) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  param_1[2] = (uint)_Var1;
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(this + 0x34);
  return (uint)_Var1;
}

/* ref: FUN_0106fa60 */
uint F_0106fa60(unsigned int gen_a0)
{
  GEN_ENTER(0x106fa60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  return (uint)in_ecx;
}

/* ref: FUN_0106fa90 */
unsigned int F_0106fa90(unsigned int gen_a0)
{
  GEN_ENTER(0x106fa90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  return 0;
}

/* ref: FUN_0106fab0 */
uint F_0106fab0(unsigned int gen_a0)
{
  GEN_ENTER(0x106fab0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5738));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoUpPacketBuilder::vf0 */
uint F_0106fae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106fae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106fb20 */
uint F_0106fb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x106fb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x12b574c));
  F_01050d30((undefined *)((int)this + 0x20),param_2,param_4);
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x28) = *param_3;
  *(undefined4 *)((int)this + 0x2c) = param_3[1];
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf0 */
uint F_0106fb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106fb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106fbc0 */
uint F_0106fbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x12b574c));
  F_01050d30((undefined *)((int)this + 0x20),param_2,param_3);
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined2 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: Unwind@0106fc20 */
uint F_0106fc20(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc20u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106fc28 */
uint F_0106fc28(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc28u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5cbc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc43 */
uint F_0106fc43(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc43u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106fc4b */
uint F_0106fc4b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc4bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5ce8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc66 */
uint F_0106fc66(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc66u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106fc6e */
uint F_0106fc6e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc6eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d14)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc89 */
unsigned int F_0106fc89(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc89u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00478e10(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@0106fc91 */
uint F_0106fc91(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc91u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00479860(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x18))));
  return uVar1;
}

/* ref: FUN_0106fc9c */
uint F_0106fc9c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc9cu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d48)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fcb7 */
uint F_0106fcb7(unsigned int gen_a0)
{
  GEN_ENTER(0x106fcb7u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106fcbf */
uint F_0106fcbf(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fcbfu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d74)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_0106fcda */
uint F_0106fcda(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fcdau, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f69e0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd00 */
unsigned int F_0106fd00(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd00u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp + -0x10));
  return 0;
}

/* ref: FUN_0106fd08 */
uint F_0106fd08(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fd08u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c0c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd30 */
unsigned int F_0106fd30(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd30u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: Unwind@0106fd38 */
unsigned int F_0106fd38(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd38u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: FUN_0106fd40 */
uint F_0106fd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c40)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd60 */
unsigned int F_0106fd60(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd60u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: Unwind@0106fd68 */
unsigned int F_0106fd68(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd68u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: FUN_0106fd70 */
uint F_0106fd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x28) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c74)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd90 */
unsigned int F_0106fd90(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd90u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: Unwind@0106fd98 */
unsigned int F_0106fd98(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd98u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: FUN_0106fda0 */
uint F_0106fda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x24) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ca8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fdc0 */
unsigned int F_0106fdc0(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdc0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1870(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@0106fdc8 */
unsigned int F_0106fdc8(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdc8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1a30(*(int *)(in_ebp + -0x10) + 4);
  return 0;
}

/* ref: Unwind@0106fdd3 */
unsigned int F_0106fdd3(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdd3u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x10))));
  return 0;
}

/* ref: Unwind@0106fdde */
uint F_0106fdde(unsigned int gen_a0)
{
  GEN_ENTER(0x106fddeu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3020(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x20))));
  return uVar1;
}

/* ref: Unwind@0106fde9 */
uint F_0106fde9(unsigned int gen_a0)
{
  GEN_ENTER(0x106fde9u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3070(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x3c))));
  return uVar1;
}

/* ref: Unwind@0106fdf4 */
uint F_0106fdf4(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdf4u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb30c0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x58))));
  return uVar1;
}

/* ref: Unwind@0106fdff */
uint F_0106fdff(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdffu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb30d0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x3f0))));
  return uVar1;
}

/* ref: FUN_0106fe0d */
uint F_0106fe0d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fe0du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ccc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fe30 */
unsigned int F_0106fe30(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe30u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x128));
  return 0;
}

/* ref: Unwind@0106fe3b */
unsigned int F_0106fe3b(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe3bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x128));
  return 0;
}

