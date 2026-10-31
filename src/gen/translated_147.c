#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Global::LuaMemGrowAux */
GEN_OWN GEN_NOFRAME uint F_00c11980(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
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

/* ref: Global::LuaLexSave */
GEN_OWN GEN_NOFRAME uint F_00c11a10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc11a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP((param_1 + 0x3c)));
  if (puVar1[2] < puVar1[1] + 1) {
    if (0x7ffffffd < puVar1[2]) {
      F_00c11b70(param_1,((char *)REFP(0x1347e24)),0);
    }
    uVar2 = puVar1[2] * 2;
    if (uVar2 + 1 < 0xfffffffe) {
      uVar3 = F_00c11930(*((undefined4 *)GEN_TOP((param_1 + 0x34))),*puVar1,puVar1[2],uVar2);
    }
    else {
      uVar3 = F_00c11910(*((undefined4 *)GEN_TOP((param_1 + 0x34))));
    }
    puVar1[2] = uVar2;
    *puVar1 = uVar3;
  }
  uVar2 = puVar1[1];
  *((undefined1 *)GEN_TOP((uVar2 + *puVar1))) = param_2;
  puVar1[1] = puVar1[1] + 1;
  return uVar2;
}

/* ref: Global::LuaLexInit */
GEN_OWN GEN_NOFRAME uint F_00c11a90(GEN_P(undefined4 param_1, unsigned int gen_a0))
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
    *((byte *)GEN_TOP((uVar3 + 5))) = *((byte *)GEN_TOP((uVar3 + 5))) | 0x20;
    cVar4 = (char)iVar5;
    iVar5 = iVar5 + 1;
    *((char *)GEN_TOP((uVar3 + 6))) = cVar4 + '\x01';
  } while (iVar5 < 0x15);
  return uVar3;
}

/* ref: Global::LuaTokenToString */
GEN_OWN GEN_NOFRAME uint F_00c11ae0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
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
    uVar2 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347e40)),param_2);
    return uVar2;
  }
  uVar2 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),&REFG(undefined, 0x1347e4c),param_2);
  return uVar2;
}

/* ref: Global::LuaLexError */
GEN_OWN_GS GEN_NOFRAME uint F_00c11b70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc11b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x54, 12, 0);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  F_00c007b0(((undefined1 *)(gen_frame + 0x0)),*((int *)GEN_TOP((param_1 + 0x40))) + 0x10,0x50);
  uVar1 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0x0)),
                           *((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  if (param_3 != 0) {
    if ((param_3 < 0x11c) || (0x11e < param_3)) {
      uVar2 = F_00c11ae0(param_1,param_3);
    }
    else {
      F_00c11a10(param_1,0);
      uVar2 = **((uint * PTR32 *)GEN_TOP((param_1 + 0x3c)));
    }
    F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347e5c)),uVar1,uVar2);
  }
                    
  F_00bb93a0(*((undefined4 *)GEN_TOP((param_1 + 0x34))),3);
}

/* ref: Global::LuaSyntaxError */
GEN_OWN GEN_NOFRAME uint F_00c11c20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc11c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c11b70(param_1,param_2,*((undefined4 *)GEN_TOP((param_1 + 0x10))));
  return uVar1;
}

/* ref: FUN_00c11c40 */
GEN_OWN GEN_NOFRAME uint F_00c11c40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc11c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  uVar2 = F_00c05a80(uVar1,param_2,param_3);
  puVar3 = ((undefined4 *)GEN_TOP(F_00c058d0(uVar1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x30))) + 4))),uVar2)));
  if (puVar3[2] == 0) {
    *puVar3 = 1;
    puVar3[2] = 1;
  }
  return uVar2;
}

/* ref: Global::LuaLexIncLineNumber */
GEN_OWN GEN_NOFRAME uint F_00c11c90(GEN_P(uint * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc11c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(in_esi[0xe]));
  uVar2 = *in_esi;
  *((int *)GEN_TOP(in_esi[0xe])) = iVar1 - 1;
  if (iVar1 == 0) {
    uVar4 = F_00c05fe0(in_esi[0xe]);
  }
  else {
    pbVar3 = *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4)));
    uVar4 = (uint)*pbVar3;
    *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4))) = pbVar3 + 1;
  }
  *in_esi = uVar4;
  if (((uVar4 == 10) || (uVar4 == 0xd)) && (uVar4 != uVar2)) {
    iVar1 = *((int *)GEN_TOP(in_esi[0xe]));
    *((int *)GEN_TOP(in_esi[0xe])) = iVar1 - 1;
    if (iVar1 == 0) {
      uVar4 = F_00c05fe0(in_esi[0xe]);
    }
    else {
      pbVar3 = *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4)));
      uVar4 = (uint)*pbVar3;
      *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4))) = pbVar3 + 1;
    }
    *in_esi = uVar4;
  }
  in_esi[1] = in_esi[1] + 1;
  if (0x7ffffffc < (int)in_esi[1]) {
    uVar4 = F_00c11b70(in_esi,((char *)REFP(0x1347e6c)),in_esi[4]);
  }
  return uVar4;
}

/* ref: Global::LuaLexSetInput */
GEN_OWN GEN_NOFRAME uint F_00c11d20(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
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
  uVar3 = F_00c11930(param_1,*((undefined4 *)GEN_TOP(param_2[0xf])),(((undefined4 *)GEN_TOP(param_2[0xf])))[2],0x20);
  *((uint *)GEN_TOP(param_2[0xf])) = uVar3;
  *((undefined4 *)GEN_TOP((param_2[0xf] + 8))) = 0x20;
  iVar2 = *((int *)GEN_TOP(param_2[0xe]));
  *((int *)GEN_TOP(param_2[0xe])) = iVar2 - 1;
  uVar3 = param_2[0xe];
  if (iVar2 != 0) {
    bVar1 = **((byte * PTR32 *)GEN_TOP((uVar3 + 4)));
    *((byte * PTR32 *)GEN_TOP((uVar3 + 4))) = *((byte * PTR32 *)GEN_TOP((uVar3 + 4))) + 1;
    *param_2 = (uint)bVar1;
    return uVar3;
  }
  uVar3 = F_00c05fe0(uVar3);
  *param_2 = uVar3;
  return uVar3;
}

/* ref: Global::LuaLexCheckNext */
GEN_OWN GEN_NOFRAME uint F_00c11db0(GEN_P(undefined4 in_ecx, unsigned int gen_a0), GEN_P(uint * in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xc11db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  
  uVar4 = F_00c51da0(in_ecx,(char)*in_esi);
  if (uVar4 == 0) {
    return 0;
  }
  F_00c11a10(in_esi,(char)*in_esi);
  iVar2 = *((int *)GEN_TOP(in_esi[0xe]));
  *((int *)GEN_TOP(in_esi[0xe])) = iVar2 - 1;
  if (iVar2 != 0) {
    pbVar3 = *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4)));
    bVar1 = *pbVar3;
    *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4))) = pbVar3 + 1;
    *in_esi = (uint)bVar1;
    return 1;
  }
  uVar4 = F_00c05fe0(in_esi[0xe]);
  *in_esi = uVar4;
  return 1;
}

/* ref: Global::LuaLexTryDecPoint */
GEN_OWN_GS GEN_NOFRAME uint F_00c11e30(GEN_P(undefined4 in_ecx, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xc11e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(int in_esi = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x54, 12, 0);
  char cVar1;
  int iVar2;
  undefined * plVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  plVar3 = F_00c527f9();
  cVar1 = *((char *)GEN_TOP((in_esi + 0x44)));
  if (plVar3 == ((undefined *)GEN_TOP(0x0))) {
    cVar6 = '.';
  }
  else {
    cVar6 = *(*(char * PTR32 *)((char *)(plVar3)));
  }
  *((char *)GEN_TOP((in_esi + 0x44))) = cVar6;
  iVar4 = (*((int * PTR32 *)GEN_TOP((in_esi + 0x3c))))[1];
  iVar2 = **((int * PTR32 *)GEN_TOP((in_esi + 0x3c)));
  while (iVar4 != 0) {
    iVar4 = iVar4 - 1;
    if (*((char *)GEN_TOP((iVar2 + iVar4))) == cVar1) {
      *((char *)GEN_TOP((iVar2 + iVar4))) = cVar6;
    }
  }
  uVar5 = F_00c00370(**((undefined4 * PTR32 *)GEN_TOP((in_esi + 0x3c))),in_ecx);
  if (uVar5 == 0) {
    iVar4 = (*((int * PTR32 *)GEN_TOP((in_esi + 0x3c))))[1];
    cVar1 = *((char *)GEN_TOP((in_esi + 0x44)));
    iVar2 = **((int * PTR32 *)GEN_TOP((in_esi + 0x3c)));
    while (iVar4 != 0) {
      iVar4 = iVar4 - 1;
      if (*((char *)GEN_TOP((iVar2 + iVar4))) == cVar1) {
        *((undefined1 *)GEN_TOP((iVar2 + iVar4))) = 0x2e;
      }
    }
    F_00c007b0(((undefined1 *)(gen_frame + 0x0)),*((int *)GEN_TOP((in_esi + 0x40))) + 0x10,0x50);
    uVar5 = F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0x0)),
                             *((undefined4 *)GEN_TOP((in_esi + 4))),((char *)REFP(0x1347e88)));
    F_00c11a10(in_esi,0);
    F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),((char *)REFP(0x1347e5c)),uVar5,
                     **((undefined4 * PTR32 *)GEN_TOP((in_esi + 0x3c))));
                    
    F_00bb93a0(*((undefined4 *)GEN_TOP((in_esi + 0x34))),3);
  }
  return uVar5;
}

/* ref: Global::LuaLexReadNumeral */
GEN_OWN GEN_NOFRAME uint F_00c11f20(GEN_P(uint * in_eax, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
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
    F_00c11a10(in_eax,(char)*in_eax);
    iVar5 = *((int *)GEN_TOP(in_eax[0xe]));
    *((int *)GEN_TOP(in_eax[0xe])) = iVar5 - 1;
    if (iVar5 == 0) {
      uVar4 = F_00c05fe0(in_eax[0xe]);
    }
    else {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((in_eax[0xe] + 4)));
      uVar4 = (uint)*pbVar2;
      *((byte * PTR32 *)GEN_TOP((in_eax[0xe] + 4))) = pbVar2 + 1;
    }
    *in_eax = uVar4;
    iVar5 = F_00c48637(uVar4);
  } while ((iVar5 != 0) || (*in_eax == 0x2e));
  uVar4 = F_00c11db0(&REFG(undefined, 0x1347e9c),in_eax);
  if (uVar4 != 0) {
    F_00c11db0(&REFG(undefined, 0x1347ea0),in_eax);
  }
  while ((iVar5 = F_00c4883f(*in_eax), iVar5 != 0 || (*in_eax == 0x5f))) {
    F_00c11a10(in_eax,(char)*in_eax);
    iVar5 = *((int *)GEN_TOP(in_eax[0xe]));
    *((int *)GEN_TOP(in_eax[0xe])) = iVar5 - 1;
    if (iVar5 == 0) {
      uVar4 = F_00c05fe0(in_eax[0xe]);
      *in_eax = uVar4;
    }
    else {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((in_eax[0xe] + 4)));
      bVar1 = *pbVar2;
      *((byte * PTR32 *)GEN_TOP((in_eax[0xe] + 4))) = pbVar2 + 1;
      *in_eax = (uint)bVar1;
    }
  }
  F_00c11a10(in_eax,0);
  iVar5 = (((int *)GEN_TOP(in_eax[0xf])))[1];
  uVar4 = in_eax[0x11];
  iVar3 = *((int *)GEN_TOP(in_eax[0xf]));
  while (iVar5 != 0) {
    iVar5 = iVar5 - 1;
    if (*((char *)GEN_TOP((iVar3 + iVar5))) == '.') {
      *((char *)GEN_TOP((iVar3 + iVar5))) = (char)uVar4;
    }
  }
  uVar4 = F_00c00370(*((undefined4 *)GEN_TOP(in_eax[0xf])),in_edi);
  if (uVar4 == 0) {
    uVar4 = F_00c11e30(in_edi,in_eax);
  }
  return uVar4;
}

/* ref: Global::LuaLexSkipSep */
GEN_OWN GEN_NOFRAME uint F_00c12020(GEN_P(uint * in_esi, unsigned int gen_a0))
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
  F_00c11a10(in_esi,(char)uVar1);
  iVar2 = *((int *)GEN_TOP(in_esi[0xe]));
  *((int *)GEN_TOP(in_esi[0xe])) = iVar2 - 1;
  if (iVar2 == 0) {
    uVar4 = F_00c05fe0(in_esi[0xe]);
  }
  else {
    pbVar3 = *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4)));
    uVar4 = (uint)*pbVar3;
    *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4))) = pbVar3 + 1;
  }
  *in_esi = uVar4;
  while (uVar4 == 0x3d) {
    F_00c11a10(in_esi,(char)*in_esi);
    iVar2 = *((int *)GEN_TOP(in_esi[0xe]));
    *((int *)GEN_TOP(in_esi[0xe])) = iVar2 - 1;
    if (iVar2 == 0) {
      uVar4 = F_00c05fe0(in_esi[0xe]);
    }
    else {
      pbVar3 = *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4)));
      uVar4 = (uint)*pbVar3;
      *((byte * PTR32 *)GEN_TOP((in_esi[0xe] + 4))) = pbVar3 + 1;
    }
    uVar5 = uVar5 + 1;
    *in_esi = uVar4;
  }
  if (*in_esi != uVar1) {
    return -uVar5 - 1;
  }
  return uVar5;
}

/* ref: Global::LuaLexReadLongString */
GEN_OWN_GS GEN_NOFRAME uint GEN_THISCALL F_00c120b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc120b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x54, 12, 0);
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  char * pcVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  F_00c11a10(this,(char)*(undefined4 *)this);
  iVar4 = **((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
  **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = iVar4 - 1;
  if (iVar4 == 0) {
    uVar3 = F_00c05fe0(*((undefined4 *)GEN_TOP(((int)this + 0x38))));
  }
  else {
    pbVar2 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4)));
    uVar3 = (uint)*pbVar2;
    *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4))) = pbVar2 + 1;
  }
  *(uint *)this = uVar3;
  if ((uVar3 == 10) || (uVar3 == 0xd)) {
    F_00c11c90(this);
  }
  do {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)this)) {
    default: ;
      if (param_1 != ((uint *)GEN_TOP(0x0))) {
        F_00c11a10(this,(char)*(undefined4 *)this);
      }
      iVar4 = **((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
      **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = iVar4 - 1;
      if (iVar4 == 0) {
        uVar3 = F_00c05fe0(*((undefined4 *)GEN_TOP(((int)this + 0x38))));
        *(uint *)this = uVar3;
      }
      else {
        pbVar2 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4)));
        bVar1 = *pbVar2;
        *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4))) = pbVar2 + 1;
        *(uint *)this = (uint)bVar1;
      }
      break;
    case 10: ;
    case 0xd: ;
      F_00c11a10(this,10);
      F_00c11c90(this);
      if (param_1 == ((uint *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 4))) = 0;
      }
      break;
    case 0x5b: ;
      uVar3 = F_00c12020(this);
      if (uVar3 == param_2) {
        F_00c11a10(this,(char)*(undefined4 *)this);
        iVar4 = **((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
        **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = iVar4 - 1;
        if (iVar4 == 0) {
          uVar3 = F_00c05fe0(*((undefined4 *)GEN_TOP(((int)this + 0x38))));
        }
        else {
          pbVar2 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4)));
          uVar3 = (uint)*pbVar2;
          *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4))) = pbVar2 + 1;
        }
        *(uint *)this = uVar3;
        if (param_2 == 0) {
          F_00c007b0(((undefined1 *)(gen_frame + 0x0)),*((int *)GEN_TOP(((int)this + 0x40))) + 0x10,0x50);
          uVar3 = F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0x0)),
                                   *((undefined4 *)GEN_TOP(((int)this + 4))),
                                   ((char *)REFP(0x1347ed4)));
          iVar4 = F_00c489cc(0x5b);
          if (iVar4 == 0) {
            uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
            pcVar8 = &REFG(undefined, 0x1347e4c);
          }
          else {
            uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
            pcVar8 = ((char *)REFP(0x1347e40));
          }
          uVar5 = F_00c00790(uVar7,pcVar8,0x5b);
          F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e5c)),uVar3,uVar5);
                    
          F_00bb93a0(*((undefined4 *)GEN_TOP(((int)this + 0x34))),3);
        }
      }
      break;
    case 0x5d: ;
      uVar3 = F_00c12020(this);
      if (uVar3 == param_2) {
        F_00c11a10(this,(char)*(undefined4 *)this);
        iVar4 = **((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
        **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = iVar4 - 1;
        if (iVar4 == 0) {
          puVar6 = ((undefined4 *)GEN_TOP(F_00c05fe0(*((undefined4 *)GEN_TOP(((int)this + 0x38))))));
        }
        else {
          pbVar2 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4)));
          puVar6 = ((undefined4 *)GEN_TOP((uint)*pbVar2));
          *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4))) = pbVar2 + 1;
        }
        *(undefined4 * PTR32 *)this = puVar6;
        if (param_1 != ((uint *)GEN_TOP(0x0))) {
          uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
          uVar3 = F_00c05a80(uVar7,**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 2 + param_2,
                               (*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))))[1] + param_2 * -2 - 4);
          puVar6 = ((undefined4 *)GEN_TOP(F_00c058d0(uVar7,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x30))) + 4))),uVar3)));
          if (puVar6[2] == 0) {
            *puVar6 = 1;
            puVar6[2] = 1;
          }
          *param_1 = uVar3;
        }
        return (uint)puVar6;
      }
      break;
    case 0xffffffff: ;
      pcVar8 = ((char *)REFP(0x1347ea4));
      if (param_1 == ((uint *)GEN_TOP(0x0))) {
        pcVar8 = ((char *)REFP(0x1347ebc));
      }
      F_00c007b0(((undefined1 *)(gen_frame + 0x0)),*((int *)GEN_TOP(((int)this + 0x40))) + 0x10,0x50);
      uVar3 = F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0x0)),
                               *((undefined4 *)GEN_TOP(((int)this + 4))),pcVar8);
      F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e5c)),uVar3,
                       REFG(undefined * PTR32, 0x110e8b8));
                    
      F_00bb93a0(*((undefined4 *)GEN_TOP(((int)this + 0x34))),3);
    }
  } while( true );
}

/* ref: Global::LuaLexReadString */
GEN_OWN_GS GEN_NOFRAME uint GEN_THISCALL F_00c123e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc123e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x58, 8, 0);
  byte * pbVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint * PTR32 *)(gen_frame + 0x0)));
  uVar4 = *(undefined4 *)this;
  (*(uint * PTR32 *)(gen_frame + 0x0)) = param_2;
  F_00c11a10(this,(char)uVar4);
  iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
  **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = iVar5 - 1;
  if (iVar5 == 0) {
    uVar3 = F_00c05fe0(*((undefined4 *)GEN_TOP(((int)this + 0x38))));
  }
  else {
    pbVar1 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4)));
    uVar3 = (uint)*pbVar1;
    *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4))) = pbVar1 + 1;
  }
  *(uint *)this = uVar3;
  do {
    if (uVar3 == param_1) {
      uVar4 = *(undefined4 *)this;
      F_00c11a10(this,(char)uVar4);
      iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
      **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = iVar5 - 1;
      if (iVar5 == 0) {
        uVar3 = F_00c05fe0(*((undefined4 *)GEN_TOP(((int)this + 0x38))));
      }
      else {
        pbVar1 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4)));
        uVar3 = (uint)*pbVar1;
        *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4))) = pbVar1 + 1;
      }
      uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
      *(uint *)this = uVar3;
      uVar3 = F_00c05a80(uVar4,**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 1,
                           (*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))))[1] - 2);
      puVar7 = ((undefined4 *)GEN_TOP(F_00c058d0(uVar4,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x30))) + 4))),uVar3)));
      if (puVar7[2] != 0) {
        *(*(uint * PTR32 *)(gen_frame + 0x0)) = uVar3;
        return (uint)puVar7;
      }
      *puVar7 = 1;
      puVar7[2] = 1;
      *(*(uint * PTR32 *)(gen_frame + 0x0)) = uVar3;
      return (uint)(*(uint * PTR32 *)(gen_frame + 0x0));
    }
    uVar4 = *(undefined4 *)this;
    switch((unsigned int)(uintptr_t)(uVar4)) {
    default: ;
      goto switchD_00c12455_caseD_0;
    case 10: ;
    case 0xd: ;
      iVar5 = *((int *)GEN_TOP(((int)this + 0x40)));
      F_00c007b0(((undefined1 *)(gen_frame + 0x4)),iVar5 + 0x10,0x50);
      uVar3 = F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0x4)),
                               *((undefined4 *)GEN_TOP(((int)this + 4))),((char *)REFP(0x1347f0c)));
      F_00c11a10(this,0);
      F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e5c)),uVar3,
                       **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3c))));
                    
      F_00bb93a0(*((undefined4 *)GEN_TOP(((int)this + 0x34))),3);
    case 0x5c: ;
      iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
      **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = iVar5 - 1;
      if (iVar5 == 0) {
        uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
        uVar3 = F_00c05fe0(uVar4);
      }
      else {
        pbVar1 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4)));
        uVar3 = (uint)*pbVar1;
        *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4))) = pbVar1 + 1;
      }
      break;
    case 0xffffffff: ;
      iVar5 = *((int *)GEN_TOP(((int)this + 0x40)));
      F_00c007b0(((undefined1 *)(gen_frame + 0x4)),iVar5 + 0x10,0x50);
      uVar3 = F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0x4)),
                               *((undefined4 *)GEN_TOP(((int)this + 4))),((char *)REFP(0x1347ef8)));
      F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e5c)),uVar3,
                       REFG(undefined * PTR32, 0x110e8b8));
                    
      F_00bb93a0(*((undefined4 *)GEN_TOP(((int)this + 0x34))),3);
    }
    *(uint *)this = uVar3;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    default: ;
      iVar5 = F_00c48637(uVar3);
      if (iVar5 != 0) {
        iVar8 = 0;
        iVar5 = 0;
        do {
          iVar5 = *(int *)this - 0x30 + iVar5 * 10;
          iVar6 = **((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
          **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = iVar6 - 1;
          if (iVar6 == 0) {
            uVar3 = F_00c05fe0(*((undefined4 *)GEN_TOP(((int)this + 0x38))));
          }
          else {
            pbVar1 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4)));
            uVar3 = (uint)*pbVar1;
            *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4))) = pbVar1 + 1;
          }
          iVar8 = iVar8 + 1;
          *(uint *)this = uVar3;
        } while ((iVar8 < 3) && (iVar6 = F_00c48637(uVar3), iVar6 != 0));
        if (0xff < iVar5) {
          F_00c007b0(((undefined1 *)(gen_frame + 0x4)),*((int *)GEN_TOP(((int)this + 0x40))) + 0x10,0x50);
          uVar3 = F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0x4)),
                                   *((undefined4 *)GEN_TOP(((int)this + 4))),
                                   ((char *)REFP(0x1347f20)));
          F_00c11a10(this,0);
          F_00c00790(*((undefined4 *)GEN_TOP(((int)this + 0x34))),((char *)REFP(0x1347e5c)),uVar3,
                           **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3c))));
                    
          F_00bb93a0(*((undefined4 *)GEN_TOP(((int)this + 0x34))),3);
        }
        F_00c11a10(this,(char)iVar5);
        goto switchD_00c12553_caseD_ffffffff;
      }
      uVar2 = (undefined1)*(undefined4 *)this;
      goto LAB_00c1258a;
    case 10: ;
    case 0xd: ;
      F_00c11a10(this,10);
      F_00c11c90(this);
      goto switchD_00c12553_caseD_ffffffff;
    case 0x61: ;
      uVar4 = 7;
      break;
    case 0x62: ;
      uVar4 = 8;
      break;
    case 0x66: ;
      uVar4 = 0xc;
      break;
    case 0x6e: ;
      uVar4 = 10;
      break;
    case 0x72: ;
      uVar4 = 0xd;
      break;
    case 0x74: ;
      uVar4 = 9;
      break;
    case 0x76: ;
      uVar4 = 0xb;
      break;
    case 0xffffffff: ;
      goto switchD_00c12553_caseD_ffffffff;
    }
switchD_00c12455_caseD_0: ;
    uVar2 = (undefined1)uVar4;
LAB_00c1258a: ;
    F_00c11a10(this,uVar2);
    iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
    **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = iVar5 - 1;
    if (iVar5 == 0) {
      uVar3 = F_00c05fe0(*((undefined4 *)GEN_TOP(((int)this + 0x38))));
    }
    else {
      pbVar1 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4)));
      uVar3 = (uint)*pbVar1;
      *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 4))) = pbVar1 + 1;
    }
    *(uint *)this = uVar3;
switchD_00c12553_caseD_ffffffff: ;
    uVar3 = *(uint *)this;
  } while( true );
}

/* ref: Global::LuaLexScan */
GEN_OWN_GS GEN_NOFRAME uint GEN_FASTCALL F_00c12870(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc12870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x54, 12, 0);
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP((param_1[0xf] + 4))) = 0;
LAB_00c12890: ;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  default: ;
    iVar3 = F_00c4873c(*param_1);
    if (iVar3 != 0) {
      iVar3 = *((int *)GEN_TOP(param_1[0xe]));
      *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = F_00c05fe0(param_1[0xe]);
        *param_1 = uVar4;
      }
      else {
        pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
        bVar1 = *pbVar2;
        *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
        *param_1 = (uint)bVar1;
      }
      goto LAB_00c12890;
    }
    iVar3 = F_00c48637(*param_1);
    if (iVar3 == 0) {
      iVar3 = F_00c484b8(*param_1);
      if ((iVar3 == 0) && (uVar4 = *param_1, uVar4 != 0x5f)) {
        iVar3 = *((int *)GEN_TOP(param_1[0xe]));
        *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
        if (iVar3 != 0) {
          pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
          bVar1 = *pbVar2;
          *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
          *param_1 = (uint)bVar1;
          return uVar4;
        }
        uVar5 = F_00c05fe0(param_1[0xe]);
        *param_1 = uVar5;
        return uVar4;
      }
      do {
        F_00c11a10(param_1,(char)*param_1);
        iVar3 = *((int *)GEN_TOP(param_1[0xe]));
        *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
        if (iVar3 == 0) {
          uVar4 = F_00c05fe0(param_1[0xe]);
        }
        else {
          pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
          uVar4 = (uint)*pbVar2;
          *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
        }
        *param_1 = uVar4;
        iVar3 = F_00c4883f(uVar4);
      } while ((iVar3 != 0) || (*param_1 == 0x5f));
      uVar4 = F_00c11c40(param_1,*((undefined4 *)GEN_TOP(param_1[0xf])),(((undefined4 *)GEN_TOP(param_1[0xf])))[1]);
      if (*((byte *)GEN_TOP((uVar4 + 6))) != 0) {
        return *((byte *)GEN_TOP((uVar4 + 6))) + 0x100;
      }
      *param_2 = uVar4;
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
    return 0x11e;
  case 0x2d: ;
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      uVar4 = (uint)*pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x2d) {
      return 0x2d;
    }
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      uVar4 = (uint)*pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 == 0x5b) {
      uVar4 = F_00c12020(param_1);
      *((undefined4 *)GEN_TOP((param_1[0xf] + 4))) = 0;
      if ((int)uVar4 < 0) goto LAB_00c1293d;
      F_00c120b0(param_1 GEN_EDX_ARG,0,uVar4);
      *((undefined4 *)GEN_TOP((param_1[0xf] + 4))) = 0;
    }
    else {
LAB_00c1293d: ;
      uVar4 = *param_1;
      while (((uVar4 != 10 && (*param_1 != 0xd)) && (*param_1 != 0xffffffff))) {
        iVar3 = *((int *)GEN_TOP(param_1[0xe]));
        *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
        if (iVar3 == 0) {
          uVar4 = F_00c05fe0(param_1[0xe]);
        }
        else {
          pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
          uVar4 = (uint)*pbVar2;
          *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
        }
        *param_1 = uVar4;
      }
    }
    goto LAB_00c12890;
  case 0x2e: ;
    F_00c11a10(param_1,(char)*param_1);
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      uVar4 = (uint)*pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    uVar4 = F_00c51da0(&REFG(undefined, 0x1347f5c),(char)uVar4);
    if (uVar4 != 0) {
      F_00c11a10(param_1,(char)*param_1);
      iVar3 = *((int *)GEN_TOP(param_1[0xe]));
      *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = F_00c05fe0(param_1[0xe]);
      }
      else {
        pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
        uVar4 = (uint)*pbVar2;
        *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
      }
      *param_1 = uVar4;
      uVar4 = F_00c11db0(&REFG(undefined, 0x1347f60),param_1);
      return (uVar4 != 0) + 0x116;
    }
    iVar3 = F_00c48637(*param_1);
    if (iVar3 == 0) {
      return 0x2e;
    }
    break;
  case 0x3c: ;
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      uVar4 = (uint)*pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      return 0x3c;
    }
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      bVar1 = *pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      return 0x11a;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    return 0x11a;
  case 0x3d: ;
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      uVar4 = (uint)*pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      return 0x3d;
    }
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      bVar1 = *pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      return 0x118;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    return 0x118;
  case 0x3e: ;
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      uVar4 = (uint)*pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      return 0x3e;
    }
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      bVar1 = *pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      return 0x119;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    return 0x119;
  case 0x5b: ;
    uVar4 = F_00c12020(param_1);
    if (-1 < (int)uVar4) {
      F_00c120b0(param_1 GEN_EDX_ARG,param_2,uVar4);
      return 0x11e;
    }
    if (uVar4 == 0xffffffff) {
      return 0x5b;
    }
    F_00c007b0(((undefined1 *)(gen_frame + 0x0)),param_1[0x10] + 0x10,0x50);
    uVar4 = F_00c00790(param_1[0xd],((char *)REFP(0x1347e50)),((undefined1 *)(gen_frame + 0x0)),param_1[1],
                             ((char *)REFP(0x1347f3c)));
    F_00c11a10(param_1,0);
    F_00c00790(param_1[0xd],((char *)REFP(0x1347e5c)),uVar4,*((undefined4 *)GEN_TOP(param_1[0xf])));
                    
    F_00bb93a0(param_1[0xd],3);
  case 0x7e: ;
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = F_00c05fe0(param_1[0xe]);
    }
    else {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      uVar4 = (uint)*pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
    }
    *param_1 = uVar4;
    if (uVar4 != 0x3d) {
      return 0x7e;
    }
    iVar3 = *((int *)GEN_TOP(param_1[0xe]));
    *((int *)GEN_TOP(param_1[0xe])) = iVar3 - 1;
    if (iVar3 != 0) {
      pbVar2 = *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4)));
      bVar1 = *pbVar2;
      *((byte * PTR32 *)GEN_TOP((param_1[0xe] + 4))) = pbVar2 + 1;
      *param_1 = (uint)bVar1;
      return 0x11b;
    }
    uVar4 = F_00c05fe0(param_1[0xe]);
    *param_1 = uVar4;
    return 0x11b;
  case 0xffffffff: ;
    return 0x11f;
  }
  F_00c11f20(param_1,param_2);
  return 0x11c;
}

/* ref: Global::LuaLexNext */
GEN_OWN GEN_NOFRAME uint F_00c13000(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc13000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  if (*((int *)GEN_TOP((param_1 + 0x20))) != 0x11f) {
    *((undefined8 *)GEN_TOP((param_1 + 0x10))) = *((undefined8 *)GEN_TOP((param_1 + 0x20)));
    *((undefined8 *)GEN_TOP((param_1 + 0x18))) = *((undefined8 *)GEN_TOP((param_1 + 0x28)));
    *((undefined4 *)GEN_TOP((param_1 + 0x20))) = 0x11f;
    return 0x11f;
  }
  uVar1 = F_00c12870(param_1,param_1 + 0x18);
  *((uint *)GEN_TOP((param_1 + 0x10))) = uVar1;
  return uVar1;
}

/* ref: Global::LuaLexLookahead */
GEN_OWN GEN_NOFRAME uint F_00c13040(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc13040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c12870(param_1,param_1 + 0x28);
  *((uint *)GEN_TOP((param_1 + 0x20))) = uVar1;
  return uVar1;
}

/* ref: Global::LuaErrorLimit */
GEN_OWN GEN_NOFRAME uint F_00c130c0(GEN_P(undefined4 in_edx, unsigned int gen_a0), GEN_P(int * in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xc130c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_edx = (undefined4)gen_a0;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((*in_esi + 0x3c))) == 0) {
    uVar1 = F_00c00790(in_esi[4],((char *)REFP(0x1347f74)),in_edx);
    uVar1 = F_00c11b70(in_esi[3],uVar1,0);
    return uVar1;
  }
  uVar1 = F_00c00790(in_esi[4],((char *)REFP(0x1347f98)),
                           *((int *)GEN_TOP((*in_esi + 0x3c))));
  uVar1 = F_00c11b70(in_esi[3],uVar1,0);
  return uVar1;
}

/* ref: Global::LuaCheckMatch */
GEN_OWN GEN_NOFRAME uint F_00c13190(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc13190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_esi = (int)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP((in_esi + 0x10))) == in_edi) {
    uVar1 = F_00c13000(in_esi);
    return uVar1;
  }
  if (in_eax == *((int *)GEN_TOP((in_esi + 4)))) {
    uVar1 = F_00c11ae0(in_esi,in_edi);
    uVar1 = F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),((char *)REFP(0x1347f64)),uVar1);
    uVar1 = F_00c11c20(in_esi,uVar1);
    return uVar1;
  }
  uVar1 = F_00c11ae0(in_esi,param_4);
  uVar2 = F_00c11ae0(in_esi,in_edi);
  uVar1 = F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),
                           ((char *)REFP(0x1347fc0)),uVar2,uVar1,in_eax);
  uVar1 = F_00c11c20(in_esi,uVar1);
  return uVar1;
}

/* ref: Global::LuaCodeString */
GEN_OWN GEN_NOFRAME uint F_00c13260(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(undefined4 * in_esi, unsigned int gen_a2))
{
  GEN_ENTER(0xc13260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c273d0(*((undefined4 *)GEN_TOP((in_ecx + 0x30))),in_eax);
  in_esi[4] = 0xffffffff;
  in_esi[5] = 0xffffffff;
  *in_esi = 4;
  in_esi[2] = uVar1;
  return uVar1;
}

/* ref: Global::LuaCheckName */
GEN_OWN GEN_NOFRAME uint F_00c13280(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc13280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP((in_esi + 0x10))) != 0x11d) {
    uVar2 = F_00c11ae0(in_esi,0x11d);
    uVar2 = F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),((char *)REFP(0x1347f64)),uVar2);
    F_00c11c20(in_esi,uVar2);
  }
  uVar1 = *((undefined4 *)GEN_TOP((in_esi + 0x18)));
  F_00c13000(in_esi);
  uVar2 = F_00c273d0(*((undefined4 *)GEN_TOP((in_esi + 0x30))),uVar1);
  in_edi[4] = 0xffffffff;
  in_edi[5] = 0xffffffff;
  *in_edi = 4;
  in_edi[2] = uVar2;
  return uVar2;
}

/* ref: Global::LuaRegisterLocalVar */
GEN_OWN GEN_NOFRAME ushort F_00c132e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
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
  
  piVar3 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30)));
  iVar4 = *piVar3;
  iVar7 = *((int *)GEN_TOP((iVar4 + 0x38)));
  piVar1 = ((int *)GEN_TOP((iVar4 + 0x38)));
  if (iVar7 < (short)piVar3[0xc] + 1) {
    uVar5 = F_00c11980(*((undefined4 *)GEN_TOP((param_1 + 0x34))),*((undefined4 *)GEN_TOP((iVar4 + 0x18))),piVar1,0xc,
                          0x7fff,((char *)REFP(0x1347fec)));
    *((uint *)GEN_TOP((iVar4 + 0x18))) = uVar5;
  }
  if (iVar7 < *piVar1) {
    iVar6 = iVar7 * 0xc;
    do {
      *((undefined4 *)GEN_TOP((iVar6 + *((int *)GEN_TOP((iVar4 + 0x18)))))) = 0;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar7 < *piVar1);
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x18))) + (short)piVar3[0xc] * 0xc))) = param_2;
  if (((*((byte *)GEN_TOP((param_2 + 5))) & 3) != 0) && ((*((byte *)GEN_TOP((iVar4 + 5))) & 4) != 0)) {
    F_00c01900(*((undefined4 *)GEN_TOP((param_1 + 0x34))),iVar4,param_2);
  }
  uVar2 = *(ushort *)(piVar3 + 0xc);
  *(ushort *)(piVar3 + 0xc) = uVar2 + 1;
  return uVar2;
}

/* ref: Global::LuaAdjustLocalVars */
GEN_OWN GEN_NOFRAME unsigned int F_00c133e0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1))
{
  GEN_ENTER(0xc133e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((in_eax + 0x30)));
  *((char *)GEN_TOP(((int)piVar1 + 0x32))) = *((char *)GEN_TOP(((int)piVar1 + 0x32))) + (char)in_edx;
  for (; in_edx != 0; in_edx = in_edx - 1) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x18))) + 4 +
            (uint)*((ushort *)GEN_TOP(((int)piVar1 + ((uint)*((byte *)GEN_TOP(((int)piVar1 + 0x32))) - in_edx) * 2 + 0xac))) * 0xc)))
         = piVar1[6];
  }
  return 0;
}

/* ref: Global::LuaRemoveVars */
GEN_OWN GEN_NOFRAME uint F_00c13420(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1))
{
  GEN_ENTER(0xc13420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  byte bVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((in_eax + 0x30)));
  bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x32)));
  while (in_edx < (int)(uint)bVar1) {
    *((char *)GEN_TOP(((int)piVar2 + 0x32))) = *((char *)GEN_TOP(((int)piVar2 + 0x32))) - 1;
    *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar2 + 0x18))) + 8 +
            (uint)*((ushort *)GEN_TOP(((int)piVar2 + (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x32))) * 2 + 0xac))) * 0xc))) =
         piVar2[6];
    bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x32)));
  }
  return (uint)piVar2;
}

/* ref: FUN_00c13460 */
GEN_OWN GEN_NOFRAME uint F_00c13460(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
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
  iVar6 = *((int *)GEN_TOP((iVar3 + 0x24)));
  piVar1 = ((int *)GEN_TOP((iVar3 + 0x24)));
  uVar4 = 0;
  if (*((char *)GEN_TOP((iVar3 + 0x48))) != '\0') {
    pbVar5 = (byte *)(param_1 + 0xd);
    do {
      if (((uint)pbVar5[-1] == *param_3) && ((uint)*pbVar5 == param_3[2])) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 2;
    } while ((int)uVar4 < (int)(uint)*((byte *)GEN_TOP((iVar3 + 0x48))));
  }
  if (0x3c < *((byte *)GEN_TOP((iVar3 + 0x48))) + 1) {
    if (*((int *)GEN_TOP((iVar3 + 0x3c))) == 0) {
      uVar4 = F_00c00790(param_1[4],((char *)REFP(0x1347f74)),0x3c,
                         ((char *)REFP(0x1348018)));
    }
    else {
      uVar4 = F_00c00790(param_1[4],((char *)REFP(0x1347f98)),
                         *((int *)GEN_TOP((iVar3 + 0x3c))));
    }
    F_00c11b70(param_1[3],uVar4,0);
  }
  if (*piVar1 < (int)(*((byte *)GEN_TOP((iVar3 + 0x48))) + 1)) {
    uVar4 = F_00c11980(param_1[4],*((undefined4 *)GEN_TOP((iVar3 + 0x1c))),piVar1,4,0x7ffffffd,&REFG(undefined, 0x14c5bf0));
    *((uint *)GEN_TOP((iVar3 + 0x1c))) = uVar4;
  }
  if (iVar6 < *piVar1) {
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x1c))) + iVar6 * 4))) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *piVar1);
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x1c))) + (uint)*((byte *)GEN_TOP((iVar3 + 0x48))) * 4))) = param_2;
  if (((*((byte *)GEN_TOP((param_2 + 5))) & 3) != 0) && ((*((byte *)GEN_TOP((iVar3 + 5))) & 4) != 0)) {
    F_00c01900(param_1[4],iVar3,param_2);
  }
  *((char *)GEN_TOP(((int)param_1 + (uint)*((byte *)GEN_TOP((iVar3 + 0x48))) * 2 + 0x33))) = (char)*param_3;
  *((char *)GEN_TOP(((int)param_1 + (uint)*((byte *)GEN_TOP((iVar3 + 0x48))) * 2 + 0x34))) = (char)param_3[2];
  bVar2 = *((byte *)GEN_TOP((iVar3 + 0x48)));
  *((byte *)GEN_TOP((iVar3 + 0x48))) = bVar2 + 1;
  return (uint)bVar2;
}

/* ref: Global::LuaSingleVarAux */
GEN_OWN GEN_NOFRAME uint F_00c135f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
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
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    param_3[4] = 0xffffffff;
    param_3[5] = 0xffffffff;
    *param_3 = 8;
    param_3[2] = 0xff;
    return 8;
  }
  iVar1 = *((byte *)GEN_TOP(((int)param_1 + 0x32))) - 1;
  if (-1 < iVar1) {
    puVar4 = ((ushort *)GEN_TOP(((int)param_1 + iVar1 * 2 + 0xac)));
    do {
      if (param_2 == *((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 0x18))) + (uint)*puVar4 * 0xc)))) {
        if (-1 < iVar1) {
          param_3[4] = 0xffffffff;
          param_3[5] = 0xffffffff;
          *param_3 = 6;
          param_3[2] = iVar1;
          if ((param_4 == 0) && (piVar3 = ((int *)GEN_TOP(param_1[5])), piVar3 != ((int *)GEN_TOP(0x0)))) {
            while (iVar1 < (int)(uint)*(byte *)(piVar3 + 2)) {
              piVar3 = ((int *)GEN_TOP(*piVar3));
              if (piVar3 == ((int *)GEN_TOP(0x0))) {
                return 6;
              }
            }
            *((undefined1 *)GEN_TOP(((int)piVar3 + 9))) = 1;
          }
          return 6;
        }
        break;
      }
      iVar1 = iVar1 - 1;
      puVar4 = puVar4 - 1;
    } while (-1 < iVar1);
  }
  uVar2 = F_00c135f0(((int *)GEN_TOP(param_1[2])),param_2,param_3,0);
  if (uVar2 != 8) {
    uVar2 = F_00c13460(param_1,param_2,param_3);
    param_3[2] = uVar2;
    *param_3 = 7;
    return 7;
  }
  return 8;
}

/* ref: Global::LuaSingleVar */
GEN_OWN GEN_NOFRAME uint F_00c136d0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc136d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x11d) {
    uVar3 = F_00c11ae0(in_eax,0x11d);
    uVar3 = F_00c00790(*((undefined4 *)GEN_TOP((in_eax + 0x34))),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(in_eax,uVar3);
  }
  uVar1 = *((undefined4 *)GEN_TOP((in_eax + 0x18)));
  F_00c13000(in_eax);
  uVar2 = *((undefined4 *)GEN_TOP((in_eax + 0x30)));
  uVar3 = F_00c135f0(uVar2,uVar1,param_2,1);
  if (uVar3 == 8) {
    uVar3 = F_00c273d0(uVar2,uVar1);
    *((uint *)GEN_TOP((param_2 + 8))) = uVar3;
  }
  return uVar3;
}

/* ref: Global::LuaAdjustAssign */
GEN_OWN GEN_NOFRAME uint F_00c13740(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int * in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
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
  iVar1 = *((int *)GEN_TOP((in_eax + 0x30)));
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
      uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
      F_00c27270(iVar1,iVar5);
      uVar4 = F_00c278f0(iVar1,uVar3,iVar5);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Global::LuaLeaveBlock */
GEN_OWN GEN_NOFRAME uint F_00c13810(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc13810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((in_esi + 0x14)));
  *((undefined4 *)GEN_TOP((in_esi + 0x14))) = *puVar1;
  F_00c13420(*((undefined4 *)GEN_TOP((in_esi + 0xc))),(uint)*(byte *)(puVar1 + 2));
  if (*((char *)GEN_TOP(((int)puVar1 + 9))) != '\0') {
    F_00c27800(in_esi,0x23,(uint)*(byte *)(puVar1 + 2),0,0);
  }
  *((uint *)GEN_TOP((in_esi + 0x24))) = (uint)*((byte *)GEN_TOP((in_esi + 0x32)));
  uVar2 = F_00c27a60(in_esi,puVar1[1]);
  return uVar2;
}

/* ref: FUN_00c13860 */
GEN_OWN GEN_NOFRAME uint F_00c13860(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
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
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30)));
  iVar4 = *piVar2;
  piVar1 = ((int *)GEN_TOP((iVar4 + 0x34)));
  iVar5 = *piVar1;
  if (iVar5 < piVar2[0xb] + 1) {
    uVar3 = F_00c11980(*((undefined4 *)GEN_TOP((param_1 + 0x34))),*((undefined4 *)GEN_TOP((iVar4 + 0x10))),piVar1,4,
                       0x3ffff,((char *)REFP(0x1348048)));
    *((uint *)GEN_TOP((iVar4 + 0x10))) = uVar3;
  }
  if (iVar5 < *piVar1) {
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + iVar5 * 4))) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar1);
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + piVar2[0xb] * 4))) = *param_2;
  piVar2[0xb] = piVar2[0xb] + 1;
  if (((*((byte *)GEN_TOP((*param_2 + 5))) & 3) != 0) && ((*((byte *)GEN_TOP((iVar4 + 5))) & 4) != 0)) {
    F_00c01900(*((undefined4 *)GEN_TOP((param_1 + 0x34))),iVar4,*param_2);
  }
  uVar3 = F_00c27830(piVar2,0x24,0,piVar2[0xb] - 1);
  param_3[4] = 0xffffffff;
  param_3[5] = 0xffffffff;
  *param_3 = 0xb;
  param_3[2] = uVar3;
  iVar4 = 0;
  if (*((char *)GEN_TOP((*param_2 + 0x48))) != '\0') {
    pcVar6 = ((char *)GEN_TOP(((int)param_2 + 0x33)));
    do {
      F_00c27800(piVar2,(*pcVar6 == '\x06') - 1 & 4,0,(uint)(byte)pcVar6[1],0);
      uVar3 = (uint)*((byte *)GEN_TOP((*param_2 + 0x48)));
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 2;
    } while (iVar4 < (int)uVar3);
  }
  return uVar3;
}

/* ref: Global::LuaParseOpenFunc */
GEN_OWN GEN_NOFRAME uint F_00c13960(GEN_P(uint * in_eax, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc13960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_eax = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar1 = *((uint *)GEN_TOP((param_2 + 0x34)));
  uVar2 = F_00c05e50(uVar1);
  *in_eax = uVar2;
  in_eax[2] = *((uint *)GEN_TOP((param_2 + 0x30)));
  in_eax[3] = param_2;
  in_eax[4] = uVar1;
  *((uint * PTR32 *)GEN_TOP((param_2 + 0x30))) = in_eax;
  in_eax[7] = 0xffffffff;
  in_eax[8] = 0xffffffff;
  in_eax[6] = 0;
  in_eax[9] = 0;
  in_eax[10] = 0;
  in_eax[0xb] = 0;
  *(undefined2 *)(in_eax + 0xc) = 0;
  *((undefined1 *)GEN_TOP(((int)in_eax + 0x32))) = 0;
  in_eax[5] = 0;
  *((undefined4 *)GEN_TOP((uVar2 + 0x20))) = *((undefined4 *)GEN_TOP((param_2 + 0x40)));
  *((undefined1 *)GEN_TOP((uVar2 + 0x4b))) = 2;
  uVar3 = F_00c05020(uVar1,0,0);
  in_eax[1] = uVar3;
  puVar4 = *((uint * PTR32 *)GEN_TOP((uVar1 + 8)));
  *puVar4 = uVar3;
  puVar4[2] = 5;
  if (*((int *)GEN_TOP((uVar1 + 0x1c))) - *((int *)GEN_TOP((uVar1 + 8))) < 0x11) {
    F_00bb8d50(uVar1,1);
  }
  *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 0x10;
  puVar4 = *((uint * PTR32 *)GEN_TOP((uVar1 + 8)));
  *puVar4 = uVar2;
  puVar4[2] = 9;
  if (*((int *)GEN_TOP((uVar1 + 0x1c))) - *((int *)GEN_TOP((uVar1 + 8))) < 0x11) {
    puVar4 = ((uint *)GEN_TOP(F_00bb8d50(uVar1,1)));
  }
  *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 0x10;
  return (uint)puVar4;
}

/* ref: Global::LuaParseCloseFunc */
GEN_OWN GEN_NOFRAME uint F_00c13a20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc13a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x34)));
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30)));
  iVar3 = *piVar2;
  F_00c13420(param_1,0);
  F_00c279d0(piVar2,((undefined4)(uint)(0)),((undefined4)(uint)(0)));
  if (piVar2[6] + 1U < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*((undefined4 *)GEN_TOP((iVar3 + 0xc))),*((int *)GEN_TOP((iVar3 + 0x2c))) * 4, piVar2[6] * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *((uint *)GEN_TOP((iVar3 + 0xc))) = uVar4;
  *((int *)GEN_TOP((iVar3 + 0x2c))) = piVar2[6];
  if (piVar2[6] + 1U < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*((undefined4 *)GEN_TOP((iVar3 + 0x14))),*((int *)GEN_TOP((iVar3 + 0x30))) * 4, piVar2[6] * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *((uint *)GEN_TOP((iVar3 + 0x14))) = uVar4;
  *((int *)GEN_TOP((iVar3 + 0x30))) = piVar2[6];
  if (piVar2[10] + 1U < 0x10000000) {
    uVar4 = F_00c11930(iVar1,*((undefined4 *)GEN_TOP((iVar3 + 8))),*((int *)GEN_TOP((iVar3 + 0x28))) << 4, piVar2[10] << 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *((uint *)GEN_TOP((iVar3 + 8))) = uVar4;
  *((int *)GEN_TOP((iVar3 + 0x28))) = piVar2[10];
  if (piVar2[0xb] + 1U < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),*((int *)GEN_TOP((iVar3 + 0x34))) * 4, piVar2[0xb] * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *((uint *)GEN_TOP((iVar3 + 0x10))) = uVar4;
  *((int *)GEN_TOP((iVar3 + 0x34))) = piVar2[0xb];
  if ((int)(short)piVar2[0xc] + 1U < 0x15555556) {
    uVar4 = F_00c11930(iVar1,*((undefined4 *)GEN_TOP((iVar3 + 0x18))),*((int *)GEN_TOP((iVar3 + 0x38))) * 0xc, (short)piVar2[0xc] * 0xc);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *((uint *)GEN_TOP((iVar3 + 0x18))) = uVar4;
  *((int *)GEN_TOP((iVar3 + 0x38))) = (int)(short)piVar2[0xc];
  if (*((byte *)GEN_TOP((iVar3 + 0x48))) + 1 < 0x40000000) {
    uVar4 = F_00c11930(iVar1,*((undefined4 *)GEN_TOP((iVar3 + 0x1c))),*((int *)GEN_TOP((iVar3 + 0x24))) * 4, (uint)*((byte *)GEN_TOP((iVar3 + 0x48))) * 4);
  }
  else {
    uVar4 = F_00c11910(iVar1);
  }
  *((uint *)GEN_TOP((iVar3 + 0x1c))) = uVar4;
  *((uint *)GEN_TOP((iVar3 + 0x24))) = (uint)*((byte *)GEN_TOP((iVar3 + 0x48)));
  *((int *)GEN_TOP((param_1 + 0x30))) = piVar2[2];
  *((int *)GEN_TOP((iVar1 + 8))) = *((int *)GEN_TOP((iVar1 + 8))) - 0x20;
  uVar4 = *((uint *)GEN_TOP((param_1 + 0x10)));
  if ((uVar4 == 0x11d) || (uVar4 == 0x11e)) {
    uVar4 = F_00c11c40(param_1,*((int *)GEN_TOP((param_1 + 0x18))) + 0x10, *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 0xc))));
  }
  return uVar4;
}

/* ref: Global::LuaParseField */
GEN_OWN GEN_NOFRAME uint F_00c13c00(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc13c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x18, 8);
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_eax + 0x30)));
  F_00c27ed0(uVar1,param_2);
  F_00c13000(in_eax);
  F_00c13280(in_eax,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = F_00c28490(uVar1,param_2,((undefined1 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: Global::LuaYIndex */
GEN_OWN GEN_NOFRAME uint F_00c13c40(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc13c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00c13000(in_esi);
  F_00c14ca0(in_esi,in_edi,0);
  F_00c27f20(*((undefined4 *)GEN_TOP((in_esi + 0x30))),in_edi);
  if (*((int *)GEN_TOP((in_esi + 0x10))) != 0x5d) {
    uVar1 = F_00c11ae0(in_esi,0x5d);
    uVar1 = F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),((char *)REFP(0x1347f64)),uVar1);
    F_00c11c20(in_esi,uVar1);
  }
  uVar1 = F_00c13000(in_esi);
  return uVar1;
}

/* ref: Global::LuaRecField */
GEN_OWN GEN_NOFRAME uint F_00c13c90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc13c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  int in_esi;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  in_esi = *((int *)GEN_TOP((param_1 + 0x30)));
  uVar1 = *((undefined4 *)GEN_TOP((in_esi + 0x24)));
  if (*((int *)GEN_TOP((param_1 + 0x10))) == 0x11d) {
    if (0x7ffffffd < *((int *)GEN_TOP((param_2 + 0x1c)))) {
      F_00c130c0(0x7ffffffd,in_esi);
    }
    F_00c13280(param_1,((undefined1 *)(gen_frame + 0x0)));
  }
  else {
    F_00c13c40(param_1,((undefined1 *)(gen_frame + 0x0)));
  }
  *((int *)GEN_TOP((param_2 + 0x1c))) = *((int *)GEN_TOP((param_2 + 0x1c))) + 1;
  if (*((int *)GEN_TOP((param_1 + 0x10))) != 0x3d) {
    uVar2 = F_00c11ae0(param_1,0x3d);
    uVar2 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347f64)),uVar2);
    F_00c11c20(param_1,uVar2);
  }
  F_00c13000(param_1);
  uVar2 = F_00c27f40(in_esi,((undefined1 *)(gen_frame + 0x0)));
  F_00c14ca0(param_1,((undefined1 *)(gen_frame + 0x18)),0);
  uVar3 = F_00c27f40(in_esi,((undefined1 *)(gen_frame + 0x18)));
  uVar2 = F_00c27800(in_esi,9,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x18))) + 8))),uVar2,uVar3);
  *((undefined4 *)GEN_TOP((in_esi + 0x24))) = uVar1;
  return uVar2;
}

/* ref: Global::LuaLastListField */
GEN_OWN GEN_NOFRAME unsigned int F_00c13da0(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
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
      F_00c27860(in_edi,*((undefined4 *)GEN_TOP((in_esi[6] + 8))),in_esi[8],in_esi[9]);
      return;
    }
    F_00c27480(in_edi,in_esi,0xffffffff);
    F_00c27860(in_edi,*((undefined4 *)GEN_TOP((in_esi[6] + 8))),in_esi[8],0xffffffff);
    in_esi[8] = in_esi[8] - 1;
  }
  return;
}

/* ref: Global::LuaConstructor */
GEN_OWN GEN_NOFRAME uint F_00c13e40(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xc13e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_FRAME_DECL(0x28, 8);
  uint * puVar1;
  int * in_edi;
  undefined4 in_eax_00;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  in_edi = *((int * PTR32 *)GEN_TOP((in_ecx + 0x30)));
  in_eax_00 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  uVar4 = F_00c27800(in_edi,10,0,0,0);
  in_eax[4] = 0xffffffff;
  in_eax[5] = 0xffffffff;
  *in_eax = 0xb;
  in_eax[2] = uVar4;
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
  (*(int *)(gen_frame + 0x24)) = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  ((byte *)(gen_frame + 0x0))[0x21] = 0;
  ((byte *)(gen_frame + 0x0))[0x22] = 0;
  ((byte *)(gen_frame + 0x0))[0x23] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = in_eax;
  ((byte *)(gen_frame + 0x0))[0x10] = 0xff;
  ((byte *)(gen_frame + 0x0))[0x11] = 0xff;
  ((byte *)(gen_frame + 0x0))[0x12] = 0xff;
  ((byte *)(gen_frame + 0x0))[0x13] = 0xff;
  ((byte *)(gen_frame + 0x0))[0x14] = 0xff;
  ((byte *)(gen_frame + 0x0))[0x15] = 0xff;
  ((byte *)(gen_frame + 0x0))[0x16] = 0xff;
  ((byte *)(gen_frame + 0x0))[0x17] = 0xff;
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  F_00c27e50(uVar2,in_eax);
  if (*((int *)GEN_TOP((in_ecx + 0x10))) != 0x7b) {
    uVar5 = F_00c11ae0(in_ecx,0x7b);
    uVar5 = F_00c00790(*((undefined4 *)GEN_TOP((in_ecx + 0x34))),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_ecx,uVar5);
  }
  F_00c13000(in_ecx);
  while (*((int *)GEN_TOP((in_ecx + 0x10))) != 0x7d) {
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) != 0) {
      F_00c27e50(in_edi,((byte *)(gen_frame + 0x0)));
      ((byte *)(gen_frame + 0x0))[0] = 0;
      ((byte *)(gen_frame + 0x0))[1] = 0;
      ((byte *)(gen_frame + 0x0))[2] = 0;
      ((byte *)(gen_frame + 0x0))[3] = 0;
      if ((*(int *)(gen_frame + 0x24)) == 0x32) {
        F_00c27860(in_edi,*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + 8))),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)),0x32);
        (*(int *)(gen_frame + 0x24)) = 0;
      }
    }
    if (*((int *)GEN_TOP((in_ecx + 0x10))) == 0x5b) {
LAB_00c1402b: ;
      F_00c13c90(in_ecx,((byte *)(gen_frame + 0x0)));
    }
    else {
      if (*((int *)GEN_TOP((in_ecx + 0x10))) == 0x11d) {
        F_00c13040(in_ecx);
        if (*((int *)GEN_TOP((in_ecx + 0x20))) == 0x3d) goto LAB_00c1402b;
        F_00c14ca0(in_ecx,((byte *)(gen_frame + 0x0)),0);
        if (0x7ffffffd < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))) {
          piVar3 = *((int * PTR32 *)GEN_TOP((in_ecx + 0x30)));
          if (*((int *)GEN_TOP((*piVar3 + 0x3c))) == 0) {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f74)),
                                     0x7ffffffd,((char *)REFP(0x1348078)));
            iVar6 = piVar3[3];
          }
          else {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f98)),
                                     *((int *)GEN_TOP((*piVar3 + 0x3c))));
            iVar6 = piVar3[3];
          }
          goto LAB_00c13f8d;
        }
      }
      else {
        F_00c14ca0(in_ecx,((byte *)(gen_frame + 0x0)),0);
        if (0x7ffffffd < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))) {
          piVar3 = *((int * PTR32 *)GEN_TOP((in_ecx + 0x30)));
          if (*((int *)GEN_TOP((*piVar3 + 0x3c))) == 0) {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f74)),
                                     0x7ffffffd,((char *)REFP(0x1348078)));
          }
          else {
            uVar5 = F_00c00790(piVar3[4],((char *)REFP(0x1347f98)),
                                     *((int *)GEN_TOP((*piVar3 + 0x3c))));
          }
          iVar6 = piVar3[3];
LAB_00c13f8d: ;
          F_00c11b70(iVar6,uVar5,0);
        }
      }
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) + 1;
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
    }
    if (*((int *)GEN_TOP((in_ecx + 0x10))) == 0x2c) {
      F_00c13000(in_ecx);
    }
    else {
      if (*((int *)GEN_TOP((in_ecx + 0x10))) != 0x3b) break;
      F_00c13000(in_ecx);
    }
  }
  F_00c13190(in_eax_00,in_ecx,0x7d,0x7b);
  F_00c13da0(((byte *)(gen_frame + 0x0)),in_edi);
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*in_edi + 0xc))) + uVar4 * 4)));
  uVar5 = F_00c00290((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)));
  *puVar1 = uVar5 << 0x17 | *puVar1 & 0x7fffff;
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*in_edi + 0xc))) + uVar4 * 4)));
  uVar4 = F_00c00290((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)));
  uVar4 = (uVar4 << 0xe ^ *puVar1) & 0x7fc000;
  *puVar1 = *puVar1 ^ uVar4;
  return uVar4;
}

/* ref: Global::LuaParList */
GEN_OWN GEN_NOFRAME uint F_00c140d0(GEN_P(int in_edi, unsigned int gen_a0))
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
  
  piVar1 = *((int * PTR32 *)GEN_TOP((in_edi + 0x30)));
  iVar2 = *piVar1;
  in_edx = 0;
  *((undefined1 *)GEN_TOP((iVar2 + 0x4a))) = 0;
  if (*((int *)GEN_TOP((in_edi + 0x10))) != 0x29) {
    while (*((int *)GEN_TOP((in_edi + 0x10))) != 0x117) {
      if (*((int *)GEN_TOP((in_edi + 0x10))) == 0x11d) {
        uVar3 = *((undefined4 *)GEN_TOP((in_edi + 0x18)));
        F_00c13000(in_edi);
        piVar4 = *((int * PTR32 *)GEN_TOP((in_edi + 0x30)));
        if (200 < (int)(*((byte *)GEN_TOP(((int)piVar4 + 0x32))) + 1 + in_edx)) {
          if (*((int *)GEN_TOP((*piVar4 + 0x3c))) == 0) {
            uVar7 = F_00c00790(piVar4[4],((char *)REFP(0x1347f74)),200,
                                     ((char *)REFP(0x1348008)));
          }
          else {
            uVar7 = F_00c00790(piVar4[4],((char *)REFP(0x1347f98)),
                                     *((int *)GEN_TOP((*piVar4 + 0x3c))));
          }
          F_00c11b70(piVar4[3],uVar7,0);
        }
        uVar5 = F_00c132e0(in_edi,uVar3);
        *((ushort *)GEN_TOP(((int)piVar4 + ((uint)*((byte *)GEN_TOP(((int)piVar4 + 0x32))) + in_edx) * 2 + 0xac))) = uVar5
        ;
        in_edx = in_edx + 1;
      }
      else {
        F_00c11c20(in_edi,((char *)REFP(0x1348094)));
      }
      if ((*((char *)GEN_TOP((iVar2 + 0x4a))) != '\0') || (*((int *)GEN_TOP((in_edi + 0x10))) != 0x2c)) goto LAB_00c14259;
      F_00c13000(in_edi);
    }
    F_00c13000(in_edi);
    uVar7 = F_00c11c40(in_edi,&REFG(undefined, 0x1348090),3);
    piVar4 = *((int * PTR32 *)GEN_TOP((in_edi + 0x30)));
    if (200 < (int)(*((byte *)GEN_TOP(((int)piVar4 + 0x32))) + 1 + in_edx)) {
      if (*((int *)GEN_TOP((*piVar4 + 0x3c))) == 0) {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f74)),200,
                                 ((char *)REFP(0x1348008)));
      }
      else {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f98)),
                                 *((int *)GEN_TOP((*piVar4 + 0x3c))));
      }
      F_00c11b70(piVar4[3],uVar6,0);
    }
    uVar5 = F_00c132e0(in_edi,uVar7);
    *((ushort *)GEN_TOP(((int)piVar4 + ((uint)*((byte *)GEN_TOP(((int)piVar4 + 0x32))) + in_edx) * 2 + 0xac))) = uVar5;
    in_edx = in_edx + 1;
    *((undefined1 *)GEN_TOP((iVar2 + 0x4a))) = 7;
  }
LAB_00c14259: ;
  F_00c133e0(in_edi,in_edx);
  *((byte *)GEN_TOP((iVar2 + 0x49))) = *((char *)GEN_TOP(((int)piVar1 + 0x32))) - (*((byte *)GEN_TOP((iVar2 + 0x4a))) & 1);
  uVar7 = F_00c27270(piVar1,(uint)*((byte *)GEN_TOP(((int)piVar1 + 0x32))));
  return uVar7;
}

/* ref: Global::LuaBody */
GEN_OWN_GS GEN_NOFRAME uint F_00c14290(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc14290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x244, 12, 0);
  int in_esi;
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x240)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  F_00c13960(((int *)(gen_frame + 0x4)),param_1);
  *((undefined4 *)GEN_TOP((((int *)(gen_frame + 0x4))[0] + 0x3c))) = param_4;
  if (*((int *)GEN_TOP((param_1 + 0x10))) != 0x28) {
    uVar3 = F_00c11ae0(param_1,0x28);
    uVar3 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(param_1,uVar3);
  }
  F_00c13000(param_1);
  if (param_3 != 0) {
    uVar3 = F_00c11c40(param_1,&REFG(undefined, 0x13480b0),4);
    in_esi = *((int *)GEN_TOP((param_1 + 0x30)));
    if (200 < *((byte *)GEN_TOP((in_esi + 0x32))) + 1) {
      F_00c130c0(200,in_esi);
    }
    uVar2 = F_00c132e0(param_1,uVar3);
    *((ushort *)GEN_TOP((in_esi + 0xac + (uint)*((byte *)GEN_TOP((in_esi + 0x32))) * 2))) = uVar2;
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30)));
    *((char *)GEN_TOP(((int)piVar1 + 0x32))) = *((char *)GEN_TOP(((int)piVar1 + 0x32))) + '\x01';
    *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x18))) + 4 +
            (uint)*((ushort *)GEN_TOP(((int)piVar1 + (uint)*((byte *)GEN_TOP(((int)piVar1 + 0x32))) * 2 + 0xaa))) * 0xc))) =
         piVar1[6];
  }
  F_00c140d0(param_1);
  if (*((int *)GEN_TOP((param_1 + 0x10))) != 0x29) {
    uVar3 = F_00c11ae0(param_1,0x29);
    uVar3 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(param_1,uVar3);
  }
  F_00c13000(param_1);
  F_00c16290(param_1);
  *((undefined4 *)GEN_TOP((((int *)(gen_frame + 0x4))[0] + 0x40))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  F_00c13190(param_4,param_1,0x106,0x109);
  F_00c13a20(param_1);
  uVar3 = F_00c13860(param_1,((int *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: Global::LuaExpList1 */
GEN_OWN GEN_NOFRAME uint F_00c14400(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc14400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 1;
  F_00c14ca0(in_esi,in_edi,0);
  while (*((int *)GEN_TOP((in_esi + 0x10))) == 0x2c) {
    F_00c13000(in_esi);
    F_00c27e50(*((undefined4 *)GEN_TOP((in_esi + 0x30))),in_edi);
    F_00c14ca0(in_esi,in_edi,0);
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: Global::LuaFuncArgs */
GEN_OWN GEN_NOFRAME uint F_00c14440(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc14440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x18, 8);
  int iVar1;
  int iVar2;
  int in_eax_00;
  uint uVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP((in_eax + 0x10)));
  iVar2 = *((int *)GEN_TOP((in_eax + 0x30)));
  in_eax_00 = *((int *)GEN_TOP((in_eax + 4)));
  if (iVar1 == 0x28) {
    if (in_eax_00 != *((int *)GEN_TOP((in_eax + 8)))) {
      F_00c11c20(in_eax,((char *)REFP(0x13480b8)));
    }
    F_00c13000(in_eax);
    if (*((int *)GEN_TOP((in_eax + 0x10))) == 0x29) {
      ((int *)(gen_frame + 0x0))[0] = 0;
    }
    else {
      F_00c14400(in_eax,((int *)(gen_frame + 0x0)));
      F_00c27480(iVar2,((int *)(gen_frame + 0x0)),0xffffffff);
    }
    F_00c13190(in_eax_00,in_eax,0x29,0x28);
  }
  else if (iVar1 == 0x7b) {
    F_00c13e40(((int *)(gen_frame + 0x0)),in_eax);
  }
  else {
    if (iVar1 != 0x11e) {
      uVar3 = F_00c11c20(in_eax,((char *)REFP(0x13480ec)));
      return uVar3;
    }
    uVar3 = F_00c273d0(iVar2,*((undefined4 *)GEN_TOP((in_eax + 0x18))));
    (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
    ((int *)(gen_frame + 0x0))[0] = 4;
    (*(uint *)(gen_frame + 0x8)) = uVar3;
    F_00c13000(in_eax);
  }
  iVar1 = param_2[2];
  if ((((int *)(gen_frame + 0x0))[0] == 0xd) || (((int *)(gen_frame + 0x0))[0] == 0xe)) {
    iVar4 = -1;
  }
  else {
    if (((int *)(gen_frame + 0x0))[0] != 0) {
      F_00c27e50(iVar2,((int *)(gen_frame + 0x0)));
    }
    iVar4 = (*((int *)GEN_TOP((iVar2 + 0x24))) - iVar1) - 1;
  }
  uVar3 = F_00c27800(iVar2,0x1c,iVar1,iVar4 + 1,2);
  param_2[4] = 0xffffffff;
  param_2[5] = 0xffffffff;
  *param_2 = 0xd;
  param_2[2] = uVar3;
  uVar3 = F_00c27740(iVar2,in_eax_00);
  *((int *)GEN_TOP((iVar2 + 0x24))) = iVar1 + 1;
  return uVar3;
}

/* ref: Global::LuaPrefixExp */
GEN_OWN GEN_NOFRAME uint F_00c14580(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc14580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 in_eax_00;
  uint uVar1;
  
  if (*((int *)GEN_TOP((in_eax + 0x10))) == 0x28) {
    in_eax_00 = *((undefined4 *)GEN_TOP((in_eax + 4)));
    F_00c13000(in_eax);
    F_00c14ca0(in_eax,param_2,0);
    F_00c13190(in_eax_00,in_eax,0x29,0x28);
    uVar1 = F_00c27a80(*((undefined4 *)GEN_TOP((in_eax + 0x30))),param_2);
    return uVar1;
  }
  if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x11d) {
    uVar1 = F_00c11c20(in_eax,((char *)REFP(0x1348108)));
    return uVar1;
  }
  uVar1 = F_00c136d0(in_eax,param_2);
  return uVar1;
}

/* ref: Global::LuaPrimaryExp */
GEN_OWN GEN_NOFRAME uint F_00c145f0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc145f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x18, 8);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_esi + 0x30)));
  F_00c14580(in_esi,in_edi);
  uVar4 = *((int *)GEN_TOP((in_esi + 0x10))) - 0x28;
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
        uVar3 = *((undefined4 *)GEN_TOP((in_esi + 0x30)));
        F_00c27ed0(uVar3,in_edi);
        F_00c13000(in_esi);
        if (*((int *)GEN_TOP((in_esi + 0x10))) != 0x11d) {
          uVar5 = F_00c11ae0(in_esi,0x11d);
          uVar5 = F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),((char *)REFP(0x1347f64)),uVar5);
          F_00c11c20(in_esi,uVar5);
        }
        uVar2 = *((undefined4 *)GEN_TOP((in_esi + 0x18)));
        F_00c13000(in_esi);
        uVar5 = F_00c273d0(*((undefined4 *)GEN_TOP((in_esi + 0x30))),uVar2);
        (*(uint *)(gen_frame + 0x8)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        ((undefined4 *)(gen_frame + 0x0))[0] = 4;
        F_00c28490(uVar3,in_edi,((undefined4 *)(gen_frame + 0x0)));
        break;
      case 0x3a: ;
        F_00c13000(in_esi);
        if (*((int *)GEN_TOP((in_esi + 0x10))) != 0x11d) {
          uVar5 = F_00c11ae0(in_esi,0x11d);
          uVar5 = F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),((char *)REFP(0x1347f64)),uVar5);
          F_00c11c20(in_esi,uVar5);
        }
        uVar3 = *((undefined4 *)GEN_TOP((in_esi + 0x18)));
        F_00c13000(in_esi);
        uVar5 = F_00c273d0(*((undefined4 *)GEN_TOP((in_esi + 0x30))),uVar3);
        (*(uint *)(gen_frame + 0x8)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        ((undefined4 *)(gen_frame + 0x0))[0] = 4;
        F_00c28130(uVar1,in_edi,((undefined4 *)(gen_frame + 0x0)));
        F_00c14440(in_esi,in_edi);
        break;
      case 0x5b: ;
        F_00c27ed0(uVar1,in_edi);
        F_00c13000(in_esi);
        F_00c14ca0(in_esi,((undefined4 *)(gen_frame + 0x0)),0);
        F_00c27f20(*((undefined4 *)GEN_TOP((in_esi + 0x30))),((undefined4 *)(gen_frame + 0x0)));
        if (*((int *)GEN_TOP((in_esi + 0x10))) != 0x5d) {
          uVar5 = F_00c11ae0(in_esi,0x5d);
          uVar5 = F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),((char *)REFP(0x1347f64)),uVar5);
          F_00c11c20(in_esi,uVar5);
        }
        F_00c13000(in_esi);
        F_00c28490(uVar1,in_edi,((undefined4 *)(gen_frame + 0x0)));
      }
      uVar4 = *((int *)GEN_TOP((in_esi + 0x10))) - 0x28;
      uVar5 = uVar4;
    } while (uVar4 < 0xf7);
switchD_00c14627_caseD_29: ;
                    
  }
  return uVar5;
}

/* ref: Global::LuaSimpleExp */
GEN_OWN GEN_NOFRAME uint F_00c148e0(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc148e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((param_2 + 0x10))))) {
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
    uVar2 = F_00c14290(param_2,in_eax,0,*((undefined4 *)GEN_TOP((param_2 + 4))));
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
    piVar1 = *((int * PTR32 *)GEN_TOP((param_2 + 0x30)));
    if (*((char *)GEN_TOP((*piVar1 + 0x4a))) == '\0') {
      F_00c11c20(param_2,((char *)REFP(0x134811c)));
    }
    *((byte *)GEN_TOP((*piVar1 + 0x4a))) = *((byte *)GEN_TOP((*piVar1 + 0x4a))) & 0xfb;
    uVar2 = F_00c27800(piVar1,0x25,0,1,0);
    *in_eax = 0xe;
    in_eax[2] = uVar2;
    break;
  case 0x11c: ;
    in_eax[2] = 0;
    in_eax[4] = 0xffffffff;
    in_eax[5] = 0xffffffff;
    *in_eax = 5;
    *(undefined8 *)(in_eax + 2) = *((undefined8 *)GEN_TOP((param_2 + 0x18)));
    uVar2 = F_00c13000(param_2);
    return uVar2;
  case 0x11e: ;
    F_00c13260(*((undefined4 *)GEN_TOP((param_2 + 0x18))),param_2,in_eax);
    uVar2 = F_00c13000(param_2);
    return uVar2;
  }
  in_eax[5] = 0xffffffff;
  in_eax[4] = 0xffffffff;
  uVar2 = F_00c13000(param_2);
  return uVar2;
}

/* ref: Global::LuaGetBinOpr */
GEN_OWN GEN_NOFRAME uint F_00c14af0(GEN_P(undefined4 in_eax, unsigned int gen_a0))
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

/* ref: Global::LuaSubExpr */
GEN_OWN GEN_NOFRAME uint F_00c14ca0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc14ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x18, 8);
  short * psVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  psVar1 = ((short *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x34)));
  *psVar1 = *psVar1 + 1;
  if (200 < *((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x34)))) {
    F_00c11b70(param_1,((char *)REFP(0x1348024)),0);
  }
  iVar2 = *((int *)GEN_TOP((param_1 + 0x10)));
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
  F_00c28640(*((undefined4 *)GEN_TOP((param_1 + 0x30))),uVar5,param_2);
LAB_00c14d03: ;
  uVar3 = F_00c14af0(*((undefined4 *)GEN_TOP((param_1 + 0x10))));
  while ((uVar3 != 0xf && (param_3 < (byte)(&REFG(undefined, 0x110e8c0))[(int)(uVar3 * 2)]))) {
    F_00c13000(param_1);
    F_00c286f0(*((undefined4 *)GEN_TOP((param_1 + 0x30))),uVar3,param_2);
    uVar4 = F_00c14ca0(param_1,((undefined1 *)(gen_frame + 0x0)),(uint)(byte)(&REFG(undefined, 0x110e8c1))[(int)(uVar3 * 2)]);
    F_00c287a0(*((undefined4 *)GEN_TOP((param_1 + 0x30))),uVar3,param_2,((undefined1 *)(gen_frame + 0x0)));
    uVar3 = uVar4;
  }
  psVar1 = ((short *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x34)));
  *psVar1 = *psVar1 - 1;
  return uVar3;
}

/* ref: Global::LuaBlock */
GEN_OWN GEN_NOFRAME uint F_00c14e20(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc14e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_FRAME_DECL(0xc, 4);
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((in_eax + 0x30)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  (*(undefined1 *)(gen_frame + 0x8)) = *((undefined1 *)GEN_TOP((iVar1 + 0x32)));
  (*(undefined1 *)(gen_frame + 0x9)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar1 + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))) = &(*(undefined4 *)(gen_frame + 0x0));
  F_00c16290(in_eax);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x14))) = *puVar2;
  F_00c13420(*((undefined4 *)GEN_TOP((iVar1 + 0xc))),(uint)*(byte *)(puVar2 + 2));
  if (*((char *)GEN_TOP(((int)puVar2 + 9))) != '\0') {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar2 + 2),0,0);
  }
  *((uint *)GEN_TOP((iVar1 + 0x24))) = (uint)*((byte *)GEN_TOP((iVar1 + 0x32)));
  uVar3 = F_00c27a60(iVar1,puVar2[1]);
  return uVar3;
}

/* ref: Global::LuaCheckConflict */
GEN_OWN GEN_NOFRAME uint F_00c14ea0(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0xc14ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x30)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x24)));
  bVar3 = false;
  uVar4 = 0;
  if (in_eax != ((int *)GEN_TOP(0x0))) {
    do {
      if (in_eax[2] == 9) {
        if (in_eax[4] == *((int *)GEN_TOP((in_edi + 8)))) {
          bVar3 = true;
          in_eax[4] = iVar2;
        }
        if (in_eax[5] == *((int *)GEN_TOP((in_edi + 8)))) {
          bVar3 = true;
          in_eax[5] = iVar2;
        }
      }
      in_eax = ((int *)GEN_TOP(*in_eax));
    } while (in_eax != ((int *)GEN_TOP(0x0)));
    uVar4 = 0;
    if (bVar3) {
      F_00c27800(iVar1,0,*((undefined4 *)GEN_TOP((iVar1 + 0x24))),*((undefined4 *)GEN_TOP((in_edi + 8))),0);
      uVar4 = F_00c27270(iVar1,1);
    }
  }
  return uVar4;
}

/* ref: Global::LuaRestAssign */
GEN_OWN GEN_NOFRAME uint F_00c14f00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc14f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x38, 8);
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = ((int *)GEN_TOP((param_2 + 8)));
  if ((*piVar1 < 6) || (9 < *piVar1)) {
    F_00c11c20(param_1,((char *)REFP(0x1348148)));
  }
  if (*((int *)GEN_TOP((param_1 + 0x10))) == 0x2c) {
    F_00c13000(param_1);
    ((int *)(gen_frame + 0x18))[0] = param_2;
    F_00c145f0(param_1,((int *)(gen_frame + 0x20)));
    if (((int *)(gen_frame + 0x20))[0] == 6) {
      F_00c14ea0(param_2,param_1,((int *)(gen_frame + 0x20)));
    }
    iVar5 = 200 - (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x34)));
    if (iVar5 < (int)param_3) {
      F_00c130c0(iVar5,*((undefined4 *)GEN_TOP((param_1 + 0x30))));
    }
    F_00c14f00(param_1,(int)((int *)(gen_frame + 0x18)),param_3 + 1);
  }
  else {
    if (*((int *)GEN_TOP((param_1 + 0x10))) != 0x3d) {
      uVar4 = F_00c11ae0(param_1,0x3d);
      uVar4 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347f64)),uVar4);
      F_00c11c20(param_1,uVar4);
    }
    F_00c13000(param_1);
    uVar4 = F_00c14400(param_1,((undefined4 *)(gen_frame + 0x0)));
    if (uVar4 == param_3) {
      F_00c27510(*((undefined4 *)GEN_TOP((param_1 + 0x30))),((undefined4 *)(gen_frame + 0x0)));
      uVar4 = F_00c28040(*((undefined4 *)GEN_TOP((param_1 + 0x30))),piVar1,((undefined4 *)(gen_frame + 0x0)));
      return uVar4;
    }
    F_00c13740(param_1,((undefined4 *)(gen_frame + 0x0)),param_3,uVar4);
    if ((int)param_3 < (int)uVar4) {
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x30))) + 0x24)));
      *piVar2 = *piVar2 + (param_3 - uVar4);
    }
  }
  iVar5 = *((int *)GEN_TOP((param_1 + 0x30)));
  iVar3 = *((int *)GEN_TOP((iVar5 + 0x24)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
  ((undefined4 *)(gen_frame + 0x0))[0] = 0xc;
  (*(int *)(gen_frame + 0x8)) = iVar3 - 1;
  uVar4 = F_00c28040(iVar5,piVar1,((undefined4 *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: Global::LuaCond */
GEN_OWN GEN_NOFRAME uint F_00c15060(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc15060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_FRAME_DECL(0x18, 8);
  uint uVar1;
  
  F_00c14ca0(in_esi,((byte *)(gen_frame + 0x0)),0);
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) == 1) {
    ((byte *)(gen_frame + 0x0))[0] = 3;
    ((byte *)(gen_frame + 0x0))[1] = 0;
    ((byte *)(gen_frame + 0x0))[2] = 0;
    ((byte *)(gen_frame + 0x0))[3] = 0;
  }
  F_00c282a0(*((undefined4 *)GEN_TOP((in_esi + 0x30))),((byte *)(gen_frame + 0x0)));
  (*(undefined1 *)((char *)&uVar1 + 0)) = ((byte *)(gen_frame + 0x0))[0x14];
  (*(undefined1 *)((char *)&uVar1 + 1)) = ((byte *)(gen_frame + 0x0))[0x15];
  (*(undefined1 *)((char *)&uVar1 + 2)) = ((byte *)(gen_frame + 0x0))[0x16];
  (*(undefined1 *)((char *)&uVar1 + 3)) = ((byte *)(gen_frame + 0x0))[0x17];
  return uVar1;
}

/* ref: Global::LuaBreakStat */
GEN_OWN GEN_NOFRAME uint F_00c150a0(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc150a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  byte bVar4;
  
  iVar1 = *((int *)GEN_TOP((in_eax + 0x30)));
  bVar4 = 0;
  for (puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))); puVar2 != ((undefined4 *)GEN_TOP(0x0));
      puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
    if (*((char *)GEN_TOP(((int)puVar2 + 10))) != '\0') goto LAB_00c150d0;
    bVar4 = bVar4 | *((byte *)GEN_TOP(((int)puVar2 + 9)));
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

/* ref: Global::LuaWhileStat */
GEN_OWN GEN_NOFRAME uint F_00c15100(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x24, 12);
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP((in_eax + 0x30)));
  F_00c13000(in_eax);
  uVar3 = F_00c26f20(iVar1);
  F_00c14ca0(in_eax,((int *)(gen_frame + 0xc)),0);
  if (((int *)(gen_frame + 0xc))[0] == 1) {
    ((int *)(gen_frame + 0xc))[0] = 3;
  }
  F_00c282a0(*((undefined4 *)GEN_TOP((in_eax + 0x30))),((int *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xa)) = 1;
  (*(undefined1 *)(gen_frame + 0x8)) = *((undefined1 *)GEN_TOP((iVar1 + 0x32)));
  (*(undefined1 *)(gen_frame + 0x9)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar1 + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))) = &(*(undefined4 *)(gen_frame + 0x0));
  if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x103) {
    uVar4 = F_00c11ae0(in_eax,0x103);
    uVar4 = F_00c00790(*((undefined4 *)GEN_TOP((in_eax + 0x34))),((char *)REFP(0x1347f64)),uVar4);
    F_00c11c20(in_eax,uVar4);
  }
  F_00c13000(in_eax);
  F_00c14e20(in_eax);
  uVar4 = F_00c27990(iVar1);
  F_00c28a30(iVar1,uVar4,uVar3);
  F_00c13190(param_2,in_eax,0x106,0x115);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x14))) = *puVar2;
  F_00c13420(*((undefined4 *)GEN_TOP((iVar1 + 0xc))),(uint)*(byte *)(puVar2 + 2));
  if (*((char *)GEN_TOP(((int)puVar2 + 9))) != '\0') {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar2 + 2),0,0);
  }
  *((uint *)GEN_TOP((iVar1 + 0x24))) = (uint)*((byte *)GEN_TOP((iVar1 + 0x32)));
  F_00c27a60(iVar1,puVar2[1]);
  uVar3 = F_00c27a60(iVar1,(*(undefined4 *)(gen_frame + 0x20)));
  return uVar3;
}

/* ref: Global::LuaRepeatStat */
GEN_OWN GEN_NOFRAME uint F_00c15230(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  int in_esi;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  in_esi = *((int *)GEN_TOP((param_1 + 0x30)));
  uVar2 = F_00c26f20(in_esi);
  (*(undefined1 *)(gen_frame + 0x16)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0x14)) = *((undefined1 *)GEN_TOP((in_esi + 0x32)));
  (*(undefined1 *)(gen_frame + 0x15)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((in_esi + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP((in_esi + 0x14))) = &(*(undefined4 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  (*(undefined1 *)(gen_frame + 0x8)) = *((undefined1 *)GEN_TOP((in_esi + 0x32)));
  (*(char *)(gen_frame + 0x9)) = '\0';
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((in_esi + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP((in_esi + 0x14))) = &(*(undefined4 *)(gen_frame + 0x0));
  F_00c13000(param_1);
  F_00c16290(param_1);
  F_00c13190(param_2,param_1,0x114,0x110);
  F_00c14ca0(param_1,((int *)(gen_frame + 0x18)),0);
  if (((int *)(gen_frame + 0x18))[0] == 1) {
    ((int *)(gen_frame + 0x18))[0] = 3;
  }
  F_00c282a0(*((undefined4 *)GEN_TOP((param_1 + 0x30))),((int *)(gen_frame + 0x18)));
  if ((*(char *)(gen_frame + 0x9)) == '\0') {
    F_00c13810(in_esi);
    uVar4 = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
    uVar3 = (*(uint *)(gen_frame + 0x2c));
  }
  else {
    F_00c150a0(param_1);
    F_00c27a60(*((undefined4 *)GEN_TOP((param_1 + 0x30))),(*(uint *)(gen_frame + 0x2c)));
    F_00c13810(in_esi);
    uVar3 = F_00c27990(in_esi);
    uVar4 = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  }
  F_00c28a30(uVar4,uVar3,uVar2);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((in_esi + 0x14)));
  *((undefined4 *)GEN_TOP((in_esi + 0x14))) = *puVar1;
  F_00c13420(*((undefined4 *)GEN_TOP((in_esi + 0xc))),(uint)*(byte *)(puVar1 + 2));
  if (*((char *)GEN_TOP(((int)puVar1 + 9))) != '\0') {
    F_00c27800(in_esi,0x23,(uint)*(byte *)(puVar1 + 2),0,0);
  }
  *((uint *)GEN_TOP((in_esi + 0x24))) = (uint)*((byte *)GEN_TOP((in_esi + 0x32)));
  uVar2 = F_00c27a60(in_esi,puVar1[1]);
  return uVar2;
}

/* ref: Global::LuaExp1 */
GEN_OWN GEN_NOFRAME uint F_00c15390(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc15390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_FRAME_DECL(0x18, 8);
  
  F_00c14ca0(in_esi,((uint *)(gen_frame + 0x0)),0);
  F_00c27e50(*((undefined4 *)GEN_TOP((in_esi + 0x30))),((uint *)(gen_frame + 0x0)));
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: Global::LuaForBody */
GEN_OWN GEN_NOFRAME uint F_00c153c0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc153c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL(0xc, 4);
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((in_eax + 0x30)));
  iVar6 = 3;
  *((char *)GEN_TOP(((int)piVar1 + 0x32))) = *((char *)GEN_TOP(((int)piVar1 + 0x32))) + '\x03';
  do {
    iVar3 = (uint)*((byte *)GEN_TOP(((int)piVar1 + 0x32))) - iVar6;
    iVar6 = iVar6 - 1;
    *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x18))) + 4 + (uint)*((ushort *)GEN_TOP(((int)piVar1 + iVar3 * 2 + 0xac))) * 0xc)))
         = piVar1[6];
  } while (iVar6 != 0);
  if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x103) {
    uVar4 = F_00c11ae0(in_eax,0x103);
    uVar4 = F_00c00790(*((undefined4 *)GEN_TOP((in_eax + 0x34))),((char *)REFP(0x1347f64)),uVar4);
    F_00c11c20(in_eax,uVar4);
  }
  F_00c13000(in_eax);
  if (param_5 == 0) {
    uVar4 = F_00c27990(piVar1);
  }
  else {
    uVar4 = F_00c27830(piVar1,0x20,param_2,0x1fffe);
  }
  ((int *)(gen_frame + 0x0))[1] = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  (*(undefined1 *)(gen_frame + 0x8)) = *((undefined1 *)GEN_TOP(((int)piVar1 + 0x32)));
  (*(undefined1 *)(gen_frame + 0x9)) = 0;
  ((int *)(gen_frame + 0x0))[0] = piVar1[5];
  piVar1[5] = (int)((int *)(gen_frame + 0x0));
  F_00c133e0(in_eax,param_4);
  F_00c27270(piVar1,param_4);
  F_00c14e20(in_eax);
  piVar2 = ((int *)GEN_TOP(piVar1[5]));
  piVar1[5] = *piVar2;
  F_00c13420(piVar1[3],(uint)*(byte *)(piVar2 + 2));
  if (*((char *)GEN_TOP(((int)piVar2 + 9))) != '\0') {
    F_00c27800(piVar1,0x23,(uint)*(byte *)(piVar2 + 2),0,0);
  }
  piVar1[9] = (uint)*((byte *)GEN_TOP(((int)piVar1 + 0x32)));
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

/* ref: Global::LuaForNum */
GEN_OWN GEN_NOFRAME uint F_00c15560(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc15560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x18, 8);
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP((in_edi + 0x30)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
  uVar5 = F_00c11c40(in_edi,((char *)REFP(0x1348184)),0xb);
  iVar3 = *((int *)GEN_TOP((in_edi + 0x30)));
  if (200 < *((byte *)GEN_TOP((iVar3 + 0x32))) + 1) {
    F_00c130c0(200,iVar3);
  }
  uVar4 = F_00c132e0(in_edi,uVar5);
  *((ushort *)GEN_TOP((iVar3 + 0xac + (uint)*((byte *)GEN_TOP((iVar3 + 0x32))) * 2))) = uVar4;
  uVar5 = F_00c11c40(in_edi,((char *)REFP(0x1348190)),0xb);
  iVar3 = *((int *)GEN_TOP((in_edi + 0x30)));
  if (200 < *((byte *)GEN_TOP((iVar3 + 0x32))) + 2) {
    F_00c130c0(200,iVar3);
  }
  uVar4 = F_00c132e0(in_edi,uVar5);
  *((ushort *)GEN_TOP((iVar3 + 0xae + (uint)*((byte *)GEN_TOP((iVar3 + 0x32))) * 2))) = uVar4;
  uVar5 = F_00c11c40(in_edi,((char *)REFP(0x134819c)),10);
  iVar3 = *((int *)GEN_TOP((in_edi + 0x30)));
  if (200 < *((byte *)GEN_TOP((iVar3 + 0x32))) + 3) {
    F_00c130c0(200,iVar3);
  }
  uVar4 = F_00c132e0(in_edi,uVar5);
  *((ushort *)GEN_TOP((iVar3 + 0xb0 + (uint)*((byte *)GEN_TOP((iVar3 + 0x32))) * 2))) = uVar4;
  iVar3 = *((int *)GEN_TOP((in_edi + 0x30)));
  if (200 < *((byte *)GEN_TOP((iVar3 + 0x32))) + 4) {
    F_00c130c0(200,iVar3);
  }
  uVar4 = F_00c132e0(in_edi,param_2);
  *((ushort *)GEN_TOP((iVar3 + 0xb2 + (uint)*((byte *)GEN_TOP((iVar3 + 0x32))) * 2))) = uVar4;
  if (*((int *)GEN_TOP((in_edi + 0x10))) != 0x3d) {
    uVar5 = F_00c11ae0(in_edi,0x3d);
    uVar5 = F_00c00790(*((undefined4 *)GEN_TOP((in_edi + 0x34))),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_edi,uVar5);
  }
  F_00c13000(in_edi);
  F_00c14ca0(in_edi,((undefined1 *)(gen_frame + 0x0)),0);
  F_00c27e50(*((undefined4 *)GEN_TOP((in_edi + 0x30))),((undefined1 *)(gen_frame + 0x0)));
  if (*((int *)GEN_TOP((in_edi + 0x10))) != 0x2c) {
    uVar5 = F_00c11ae0(in_edi,0x2c);
    uVar5 = F_00c00790(*((undefined4 *)GEN_TOP((in_edi + 0x34))),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_edi,uVar5);
  }
  F_00c13000(in_edi);
  F_00c14ca0(in_edi,((undefined1 *)(gen_frame + 0x0)),0);
  F_00c27e50(*((undefined4 *)GEN_TOP((in_edi + 0x30))),((undefined1 *)(gen_frame + 0x0)));
  if (*((int *)GEN_TOP((in_edi + 0x10))) == 0x2c) {
    F_00c13000(in_edi);
    F_00c14ca0(in_edi,((undefined1 *)(gen_frame + 0x0)),0);
    F_00c27e50(*((undefined4 *)GEN_TOP((in_edi + 0x30))),((undefined1 *)(gen_frame + 0x0)));
  }
  else {
    uVar5 = F_00c27400(iVar1,1.0);
    F_00c27830(iVar1,1,*((undefined4 *)GEN_TOP((iVar1 + 0x24))),uVar5);
    F_00c27270(iVar1,1);
  }
  uVar5 = F_00c153c0(in_edi,uVar2,param_3,1,1);
  return uVar5;
}

/* ref: Global::LuaForList */
GEN_OWN GEN_NOFRAME uint F_00c15790(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x18, 8);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x30)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
  uVar6 = F_00c11c40(param_1,((char *)REFP(0x13481a8)),0xf);
  iVar7 = *((int *)GEN_TOP((param_1 + 0x30)));
  if (200 < *((byte *)GEN_TOP((iVar7 + 0x32))) + 1) {
    F_00c130c0(200,iVar7);
  }
  uVar5 = F_00c132e0(param_1,uVar6);
  *((ushort *)GEN_TOP((iVar7 + 0xac + (uint)*((byte *)GEN_TOP((iVar7 + 0x32))) * 2))) = uVar5;
  uVar6 = F_00c11c40(param_1,((char *)REFP(0x13481b8)),0xb);
  iVar7 = *((int *)GEN_TOP((param_1 + 0x30)));
  if (200 < *((byte *)GEN_TOP((iVar7 + 0x32))) + 2) {
    F_00c130c0(200,iVar7);
  }
  uVar5 = F_00c132e0(param_1,uVar6);
  *((ushort *)GEN_TOP((iVar7 + 0xae + (uint)*((byte *)GEN_TOP((iVar7 + 0x32))) * 2))) = uVar5;
  uVar6 = F_00c11c40(param_1,((char *)REFP(0x13481c4)),0xd);
  iVar7 = *((int *)GEN_TOP((param_1 + 0x30)));
  if (200 < *((byte *)GEN_TOP((iVar7 + 0x32))) + 3) {
    F_00c130c0(200,iVar7);
  }
  uVar5 = F_00c132e0(param_1,uVar6);
  *((ushort *)GEN_TOP((iVar7 + 0xb0 + (uint)*((byte *)GEN_TOP((iVar7 + 0x32))) * 2))) = uVar5;
  iVar7 = *((int *)GEN_TOP((param_1 + 0x30)));
  if (200 < *((byte *)GEN_TOP((iVar7 + 0x32))) + 4) {
    F_00c130c0(200,iVar7);
  }
  uVar5 = F_00c132e0(param_1,param_2);
  *((ushort *)GEN_TOP((iVar7 + 0xb2 + (uint)*((byte *)GEN_TOP((iVar7 + 0x32))) * 2))) = uVar5;
  iVar7 = 4;
  while (*((int *)GEN_TOP((param_1 + 0x10))) == 0x2c) {
    F_00c13000(param_1);
    if (*((int *)GEN_TOP((param_1 + 0x10))) != 0x11d) {
      uVar6 = F_00c11ae0(param_1,0x11d);
      uVar6 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347f64)),uVar6);
      F_00c11c20(param_1,uVar6);
    }
    uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
    F_00c13000(param_1);
    piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30)));
    if (200 < (int)(*((byte *)GEN_TOP(((int)piVar4 + 0x32))) + 1 + iVar7)) {
      if (*((int *)GEN_TOP((*piVar4 + 0x3c))) == 0) {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f74)),200,
                                 ((char *)REFP(0x1348008)));
      }
      else {
        uVar6 = F_00c00790(piVar4[4],((char *)REFP(0x1347f98)),
                                 *((int *)GEN_TOP((*piVar4 + 0x3c))));
      }
      F_00c11b70(piVar4[3],uVar6,0);
    }
    uVar5 = F_00c132e0(param_1,uVar3);
    *((ushort *)GEN_TOP(((int)piVar4 + ((uint)*((byte *)GEN_TOP(((int)piVar4 + 0x32))) + iVar7) * 2 + 0xac))) = uVar5;
    iVar7 = iVar7 + 1;
  }
  if (*((int *)GEN_TOP((param_1 + 0x10))) != 0x10b) {
    uVar6 = F_00c11ae0(param_1,0x10b);
    uVar6 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347f64)),uVar6);
    F_00c11c20(param_1,uVar6);
  }
  F_00c13000(param_1);
  uVar3 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  uVar6 = F_00c14400(param_1,((undefined1 *)(gen_frame + 0x0)));
  F_00c13740(param_1,((undefined1 *)(gen_frame + 0x0)),3,uVar6);
  F_00c27230(iVar1,3);
  uVar6 = F_00c153c0(param_1,uVar2,uVar3,iVar7 - 3,0);
  return uVar6;
}

/* ref: Global::LuaForStat */
GEN_OWN GEN_NOFRAME uint F_00c15a10(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc, 4);
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP((in_eax + 0x30)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0xa)) = 1;
  (*(undefined1 *)(gen_frame + 0x8)) = *((undefined1 *)GEN_TOP((iVar1 + 0x32)));
  (*(undefined1 *)(gen_frame + 0x9)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar1 + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14))) = &(*(undefined4 *)(gen_frame + 0x0));
  F_00c13000(in_eax);
  if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x11d) {
    uVar5 = F_00c11ae0(in_eax,0x11d);
    uVar5 = F_00c00790(*((undefined4 *)GEN_TOP((in_eax + 0x34))),((char *)REFP(0x1347f64)),uVar5);
    F_00c11c20(in_eax,uVar5);
  }
  uVar2 = *((undefined4 *)GEN_TOP((in_eax + 0x18)));
  F_00c13000(in_eax);
  iVar3 = *((int *)GEN_TOP((in_eax + 0x10)));
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
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x14)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x14))) = *puVar4;
  F_00c13420(*((undefined4 *)GEN_TOP((iVar1 + 0xc))),(uint)*(byte *)(puVar4 + 2));
  if (*((char *)GEN_TOP(((int)puVar4 + 9))) != '\0') {
    F_00c27800(iVar1,0x23,(uint)*(byte *)(puVar4 + 2),0,0);
  }
  *((uint *)GEN_TOP((iVar1 + 0x24))) = (uint)*((byte *)GEN_TOP((iVar1 + 0x32)));
  uVar5 = F_00c27a60(iVar1,puVar4[1]);
  return uVar5;
}

/* ref: Global::LuaTestThenBlock */
GEN_OWN GEN_NOFRAME uint F_00c15b20(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc15b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_FRAME_DECL(0x18, 8);
  uint uVar1;
  
  F_00c13000(in_esi);
  F_00c14ca0(in_esi,((byte *)(gen_frame + 0x0)),0);
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) == 1) {
    ((byte *)(gen_frame + 0x0))[0] = 3;
    ((byte *)(gen_frame + 0x0))[1] = 0;
    ((byte *)(gen_frame + 0x0))[2] = 0;
    ((byte *)(gen_frame + 0x0))[3] = 0;
  }
  F_00c282a0(*((undefined4 *)GEN_TOP((in_esi + 0x30))),((byte *)(gen_frame + 0x0)));
  if (*((int *)GEN_TOP((in_esi + 0x10))) != 0x112) {
    uVar1 = F_00c11ae0(in_esi,0x112);
    uVar1 = F_00c00790(*((undefined4 *)GEN_TOP((in_esi + 0x34))),((char *)REFP(0x1347f64)),uVar1);
    F_00c11c20(in_esi,uVar1);
  }
  F_00c13000(in_esi);
  F_00c14e20(in_esi);
  (*(undefined1 *)((char *)&uVar1 + 0)) = ((byte *)(gen_frame + 0x0))[0x14];
  (*(undefined1 *)((char *)&uVar1 + 1)) = ((byte *)(gen_frame + 0x0))[0x15];
  (*(undefined1 *)((char *)&uVar1 + 2)) = ((byte *)(gen_frame + 0x0))[0x16];
  (*(undefined1 *)((char *)&uVar1 + 3)) = ((byte *)(gen_frame + 0x0))[0x17];
  return uVar1;
}

/* ref: Global::LuaIfStat */
GEN_OWN GEN_NOFRAME uint F_00c15ba0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x4, 12);
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_eax + 0x30)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0xffffffff;
  uVar3 = F_00c15b20(in_eax);
  iVar2 = *((int *)GEN_TOP((in_eax + 0x10)));
  while (iVar2 == 0x105) {
    uVar4 = F_00c27990(uVar1);
    F_00c271e0(uVar1,&(*(undefined4 *)(gen_frame + 0x0)),uVar4);
    F_00c27a60(uVar1,uVar3);
    uVar3 = F_00c15b20(in_eax);
    iVar2 = *((int *)GEN_TOP((in_eax + 0x10)));
  }
  if (*((int *)GEN_TOP((in_eax + 0x10))) == 0x104) {
    uVar4 = F_00c27990(uVar1);
    F_00c271e0(uVar1,&(*(undefined4 *)(gen_frame + 0x0)),uVar4);
    F_00c27a60(uVar1,uVar3);
    F_00c13000(in_eax);
    F_00c14e20(in_eax);
  }
  else {
    F_00c271e0(uVar1,&(*(undefined4 *)(gen_frame + 0x0)),uVar3);
  }
  F_00c27a60(uVar1,(*(undefined4 *)(gen_frame + 0x0)));
  uVar3 = F_00c13190(param_2,in_eax,0x106,0x10a);
  return uVar3;
}

/* ref: Global::LuaLocalFunc */
GEN_OWN GEN_NOFRAME uint F_00c15c60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc15c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL(0x30, 0);
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30)));
  if (*((int *)GEN_TOP((param_1 + 0x10))) != 0x11d) {
    uVar6 = F_00c11ae0(param_1,0x11d);
    uVar6 = F_00c00790(*((undefined4 *)GEN_TOP((param_1 + 0x34))),((char *)REFP(0x1347f64)),uVar6);
    F_00c11c20(param_1,uVar6);
  }
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  F_00c13000(param_1);
  iVar3 = *((int *)GEN_TOP((param_1 + 0x30)));
  if (200 < *((byte *)GEN_TOP((iVar3 + 0x32))) + 1) {
    F_00c130c0(200,iVar3);
  }
  uVar5 = F_00c132e0(param_1,uVar2);
  *((ushort *)GEN_TOP((iVar3 + 0xac + (uint)*((byte *)GEN_TOP((iVar3 + 0x32))) * 2))) = uVar5;
  iVar3 = piVar1[9];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
  ((undefined4 *)(gen_frame + 0x0))[0] = 6;
  (*(int *)(gen_frame + 0x8)) = iVar3;
  F_00c27270(piVar1,1);
  piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30)));
  *((char *)GEN_TOP(((int)piVar4 + 0x32))) = *((char *)GEN_TOP(((int)piVar4 + 0x32))) + '\x01';
  *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar4 + 0x18))) + 4 +
          (uint)*((ushort *)GEN_TOP(((int)piVar4 + (uint)*((byte *)GEN_TOP(((int)piVar4 + 0x32))) * 2 + 0xaa))) * 0xc))) =
       piVar4[6];
  F_00c14290(param_1,((undefined1 *)(gen_frame + 0x18)),0,*((undefined4 *)GEN_TOP((param_1 + 4))));
  F_00c28040(piVar1,((undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x18)));
  uVar6 = (uint)*((ushort *)GEN_TOP(((int)piVar1 + (uint)*((byte *)GEN_TOP(((int)piVar1 + 0x32))) * 2 + 0xaa)));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0x18))) + 4 + uVar6 * 0xc))) = piVar1[6];
  return uVar6 * 3;
}

/* ref: Global::LuaLocalStat */
GEN_OWN GEN_NOFRAME unsigned int F_00c15d70(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc15d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_FRAME_DECL(0x18, 8);
  undefined4 uVar1;
  int * piVar2;
  ushort uVar3;
  uint uVar4;
  int in_edx;
  
  in_edx = 0;
  while( true ) {
    if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x11d) {
      uVar4 = F_00c11ae0(in_eax,0x11d);
      uVar4 = F_00c00790(*((undefined4 *)GEN_TOP((in_eax + 0x34))),((char *)REFP(0x1347f64)),uVar4);
      F_00c11c20(in_eax,uVar4);
    }
    uVar1 = *((undefined4 *)GEN_TOP((in_eax + 0x18)));
    F_00c13000(in_eax);
    piVar2 = *((int * PTR32 *)GEN_TOP((in_eax + 0x30)));
    if (200 < (int)(*((byte *)GEN_TOP(((int)piVar2 + 0x32))) + 1 + in_edx)) {
      if (*((int *)GEN_TOP((*piVar2 + 0x3c))) == 0) {
        uVar4 = F_00c00790(piVar2[4],((char *)REFP(0x1347f74)),200,
                                 ((char *)REFP(0x1348008)));
      }
      else {
        uVar4 = F_00c00790(piVar2[4],((char *)REFP(0x1347f98)),
                                 *((int *)GEN_TOP((*piVar2 + 0x3c))));
      }
      F_00c11b70(piVar2[3],uVar4,0);
    }
    uVar3 = F_00c132e0(in_eax,uVar1);
    *((ushort *)GEN_TOP(((int)piVar2 + ((uint)*((byte *)GEN_TOP(((int)piVar2 + 0x32))) + in_edx) * 2 + 0xac))) = uVar3;
    in_edx = in_edx + 1;
    if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x2c) break;
    F_00c13000(in_eax);
  }
  if (*((int *)GEN_TOP((in_eax + 0x10))) == 0x3d) {
    F_00c13000(in_eax);
    uVar4 = F_00c14400(in_eax,((undefined4 *)(gen_frame + 0x0)));
  }
  else {
    uVar4 = 0;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  }
  F_00c13740(in_eax,((undefined4 *)(gen_frame + 0x0)),in_edx,uVar4);
  F_00c133e0(in_eax,in_edx);
  return;
}

/* ref: Global::LuaFuncName */
GEN_OWN GEN_NOFRAME uint F_00c15e90(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc15e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x18, 8);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  F_00c136d0(in_eax,param_2);
  iVar1 = *((int *)GEN_TOP((in_eax + 0x10)));
  while (iVar1 == 0x2e) {
    uVar2 = *((undefined4 *)GEN_TOP((in_eax + 0x30)));
    F_00c27ed0(uVar2,param_2);
    F_00c13000(in_eax);
    if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x11d) {
      uVar4 = F_00c11ae0(in_eax,0x11d);
      uVar4 = F_00c00790(*((undefined4 *)GEN_TOP((in_eax + 0x34))),((char *)REFP(0x1347f64)),uVar4);
      F_00c11c20(in_eax,uVar4);
    }
    uVar3 = *((undefined4 *)GEN_TOP((in_eax + 0x18)));
    F_00c13000(in_eax);
    uVar4 = F_00c273d0(*((undefined4 *)GEN_TOP((in_eax + 0x30))),uVar3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
    ((undefined4 *)(gen_frame + 0x0))[0] = 4;
    (*(uint *)(gen_frame + 0x8)) = uVar4;
    F_00c28490(uVar2,param_2,((undefined4 *)(gen_frame + 0x0)));
    iVar1 = *((int *)GEN_TOP((in_eax + 0x10)));
  }
  if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x3a) {
    return 0;
  }
  uVar2 = *((undefined4 *)GEN_TOP((in_eax + 0x30)));
  F_00c27ed0(uVar2,param_2);
  F_00c13000(in_eax);
  F_00c13280(in_eax,((undefined4 *)(gen_frame + 0x0)));
  F_00c28490(uVar2,param_2,((undefined4 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Global::LuaFuncStat */
GEN_OWN GEN_NOFRAME uint F_00c15f80(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc15f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  
  F_00c13000(in_esi);
  uVar1 = F_00c15e90(in_esi,((undefined1 *)(gen_frame + 0x18)));
  F_00c14290(in_esi,((undefined1 *)(gen_frame + 0x0)),uVar1,in_edi);
  F_00c28040(*((undefined4 *)GEN_TOP((in_esi + 0x30))),((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00c27740(*((undefined4 *)GEN_TOP((in_esi + 0x30))),in_edi);
  return uVar1;
}

/* ref: Global::LuaExprStat */
GEN_OWN GEN_NOFRAME uint F_00c15fd0(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc15fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_FRAME_DECL(0x20, 0);
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((in_eax + 0x30)));
  F_00c145f0(in_eax,((int *)(gen_frame + 0x8)));
  if (((int *)(gen_frame + 0x8))[0] == 0xd) {
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*piVar2 + 0xc))) + (*(int *)(gen_frame + 0x10)) * 4)));
    *puVar1 = *puVar1 & 0xff807fff | 0x4000;
    return (uint)puVar1;
  }
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  uVar3 = F_00c14f00(in_eax,((undefined4 *)(gen_frame + 0x0)),1);
  return uVar3;
}

/* ref: Global::LuaRetStat */
GEN_OWN GEN_NOFRAME uint F_00c16030(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc16030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_FRAME_DECL(0x18, 8);
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((in_eax + 0x30)));
  F_00c13000(in_eax);
  switch((unsigned int)(uintptr_t)(*((int *)GEN_TOP((in_eax + 0x10))))) {
  case 0x104: ;
  case 0x105: ;
  case 0x106: ;
  case 0x114: ;
  case 0x11f: ;
    break;
  default: ;
    if (*((int *)GEN_TOP((in_eax + 0x10))) != 0x3b) {
      uVar2 = F_00c14400(in_eax,((byte *)(gen_frame + 0x0)));
      if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) != 0xd) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) != 0xe)) {
        if (uVar2 == 1) {
          uVar2 = F_00c27ed0(piVar1,((byte *)(gen_frame + 0x0)));
          uVar2 = F_00c279d0(piVar1,uVar2,1);
          return uVar2;
        }
        F_00c27e50(piVar1,((byte *)(gen_frame + 0x0)));
        uVar2 = F_00c279d0(piVar1,(uint)*((byte *)GEN_TOP(((int)piVar1 + 0x32))),uVar2);
        return uVar2;
      }
      F_00c27480(piVar1,((byte *)(gen_frame + 0x0)),0xffffffff);
      if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) == 0xd) && (uVar2 == 1)) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0xc))) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) * 4))) =
             *((uint *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 0xc))) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) * 4))) & 0xffffffdd | 0x1d;
      }
      uVar2 = F_00c279d0(piVar1,(uint)*((byte *)GEN_TOP(((int)piVar1 + 0x32))),0xffffffff);
      return uVar2;
    }
  }
  uVar2 = F_00c279d0(piVar1,0,0);
  return uVar2;
}

/* ref: Global::LuaStatement */
GEN_OWN GEN_NOFRAME uint F_00c16150(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc16150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  undefined4 in_edi;
  
  in_edi = *((undefined4 *)GEN_TOP((in_eax + 4)));
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((in_eax + 0x10))))) {
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
  if (*((int *)GEN_TOP((in_eax + 0x10))) == 0x109) {
    F_00c13000(in_eax);
    F_00c15c60(in_eax);
    return 0;
  }
  F_00c15d70(in_eax);
  return 0;
}

/* ref: Global::LuaChunk */
GEN_OWN GEN_NOFRAME unsigned int F_00c16290(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  short * psVar1;
  uint uVar2;
  
  psVar1 = ((short *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x34)));
  *psVar1 = *psVar1 + 1;
  if (200 < *((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x34)))) {
    F_00c11b70(param_1,((char *)REFP(0x1348024)),0);
  }
  do {
    switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((param_1 + 0x10))))) {
    case 0x104: ;
    case 0x105: ;
    case 0x106: ;
    case 0x114: ;
    case 0x11f: ;
      goto switchD_00c162d4_caseD_104;
    }
    uVar2 = F_00c16150(param_1);
    if (*((int *)GEN_TOP((param_1 + 0x10))) == 0x3b) {
      F_00c13000(param_1);
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x30))) + 0x24))) = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x30))) + 0x32)));
  } while (uVar2 == 0);
switchD_00c162d4_caseD_104: ;
  psVar1 = ((short *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + 0x34)));
  *psVar1 = *psVar1 - 1;
  return 0;
}

/* ref: FUN_00c16340 */
GEN_OWN_GS GEN_NOFRAME uint F_00c16340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc16340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x288, 8, 0);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x284)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x3c)) = param_3;
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00c05a80(param_1,param_4,(int)pcVar2 - (int)(param_4 + 1));
  F_00c11d20(param_1,((undefined1 *)(gen_frame + 0x0)),param_2,uVar3);
  F_00c13960(((uint *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x0)));
  *((undefined1 *)GEN_TOP((((uint *)(gen_frame + 0x48))[0] + 0x4a))) = 2;
  F_00c13000(((undefined1 *)(gen_frame + 0x0)));
  F_00c16290(((undefined1 *)(gen_frame + 0x0)));
  if ((*(int *)(gen_frame + 0x10)) != 0x11f) {
    uVar3 = F_00c11ae0(((undefined1 *)(gen_frame + 0x0)),0x11f);
    uVar3 = F_00c00790((*(undefined4 *)(gen_frame + 0x34)),((char *)REFP(0x1347f64)),uVar3);
    F_00c11c20(((undefined1 *)(gen_frame + 0x0)),uVar3);
  }
  F_00c13a20(((undefined1 *)(gen_frame + 0x0)));
  return ((uint *)(gen_frame + 0x48))[0];
}

/* ref: FUN_00c16430 */
GEN_OWN GEN_NOFRAME uint F_00c16430(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9a910(param_1,0xffffd8f0);
  return 1;
}

/* ref: FUN_00c16450 */
GEN_OWN GEN_NOFRAME uint F_00c16450(GEN_P(undefined4 param_1, unsigned int gen_a0))
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
GEN_OWN GEN_NOFRAME uint F_00c16480(GEN_P(undefined4 param_1, unsigned int gen_a0))
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
GEN_OWN GEN_NOFRAME uint F_00c164d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc164d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9b1f0(param_1,1);
  return 1;
}

/* ref: FUN_00c164f0 */
GEN_OWN GEN_NOFRAME uint F_00c164f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
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

/* ref: Global::LuaDbTreatStackOption */
GEN_OWN GEN_NOFRAME uint F_00c165a0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
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

/* ref: FUN_00c165f0 */
GEN_OWN_GS GEN_NOFRAME uint F_00c165f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc165f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_GS(0x6c, 4, 0);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  char * pcVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x0)));
  uVar1 = F_00b9a940(param_1,1);
  uVar2 = param_1;
  if (uVar1 == 8) {
    uVar2 = F_00b9ad30(param_1,1);
  }
  uVar3 = (uint)(uVar1 == 8);
  iVar4 = uVar3 + 2;
  (*(int *)(gen_frame + 0x0)) = iVar4;
  uVar1 = F_00b9c880(param_1,iVar4,((char *)REFP(0x1348238)),0);
  iVar4 = uVar3 + 1;
  uVar3 = F_00b9a9b0(param_1,iVar4);
  if (uVar3 == 0) {
    uVar3 = F_00b9a940(param_1,iVar4);
    if (uVar3 != 6) {
      pcVar6 = ((char *)REFP(0x1348244));
      goto LAB_00c16876;
    }
    F_00b9af00(param_1,&REFG(undefined, 0x1348240),uVar1);
    uVar1 = F_00b9abf0(param_1,0xffffffff,0);
    F_00b9a910(param_1,iVar4);
    F_00b9a680(param_1,uVar2,1);
  }
  else {
    pbVar5 = ((byte *)(gen_frame + 0x4));
    uVar3 = F_00b9ab70(param_1,iVar4);
    uVar3 = F_00c01ae0(uVar2,uVar3,pbVar5);
    if (uVar3 == 0) {
      F_00b9adc0(param_1);
      return 1;
    }
  }
  uVar3 = F_00c028c0(uVar2,uVar1,((byte *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    F_00b9b150(param_1,0,2);
    uVar3 = F_00c51da0(uVar1,0x53);
    if (uVar3 != 0) {
      F_00b9ae60(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348270)));
      F_00b9ae60(param_1,((undefined1 *)(gen_frame + 0x28)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348278)));
      F_00b9ae00(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348284)));
      F_00b9ae00(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348290)));
      F_00b9ae60(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13482a0));
    }
    uVar3 = F_00c51da0(uVar1,0x6c);
    if (uVar3 != 0) {
      F_00b9ae00(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13482a8)));
    }
    uVar3 = F_00c51da0(uVar1,0x75);
    if (uVar3 != 0) {
      F_00b9ae00(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 24)));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13482b4));
    }
    uVar3 = F_00c51da0(uVar1,0x6e);
    if (uVar3 != 0) {
      F_00b9ae60(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13482bc));
      F_00b9ae60(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)));
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13482c4)));
    }
    uVar3 = F_00c51da0(uVar1,0x4c);
    if (uVar3 != 0) {
      F_00c165a0(uVar2,param_1,((char *)REFP(0x13482d0)));
    }
    uVar1 = F_00c51da0(uVar1,0x66);
    if (uVar1 != 0) {
      F_00c165a0(uVar2,param_1,&REFG(undefined, 0x13482dc));
    }
    return 1;
  }
  pcVar6 = ((char *)REFP(0x1348260));
  iVar4 = (*(int *)(gen_frame + 0x0));
LAB_00c16876: ;
  uVar2 = F_00b9c590(param_1,iVar4,pcVar6);
  return uVar2;
}

/* ref: FUN_00c168a0 */
GEN_OWN_GS GEN_NOFRAME uint F_00c168a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc168a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_GS(0x68, 8, 0);
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  uVar2 = F_00b9a940(param_1,1);
  uVar3 = param_1;
  if (uVar2 == 8) {
    uVar3 = F_00b9ad30(param_1,1);
  }
  uVar4 = (uint)(uVar2 == 8);
  puVar5 = ((undefined1 *)(gen_frame + 0x0));
  iVar1 = uVar4 + 1;
  uVar2 = F_00b9c9b0(param_1,iVar1);
  uVar2 = F_00c01ae0(uVar3,uVar2,puVar5);
  if (uVar2 != 0) {
    uVar2 = F_00b9c9b0(param_1,uVar4 + 2);
    uVar2 = F_00c01bf0(uVar3,((undefined1 *)(gen_frame + 0x0)),uVar2);
    if (uVar2 == 0) {
      F_00b9adc0(param_1);
      return 1;
    }
    F_00b9a680(uVar3,param_1,1);
    F_00b9ae60(param_1,uVar2);
    F_00b9a910(param_1,0xfffffffe);
    return 2;
  }
  uVar3 = F_00b9c590(param_1,iVar1,((char *)REFP(0x13482e4)));
  return uVar3;
}

/* ref: FUN_00c16990 */
GEN_OWN_GS GEN_NOFRAME uint F_00c16990(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_GS(0x68, 8, 0);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00b9a940(param_1,1);
  uVar2 = param_1;
  if (uVar1 == 8) {
    uVar2 = F_00b9ad30(param_1,1);
  }
  uVar3 = (uint)(uVar1 == 8);
  puVar4 = ((undefined1 *)(gen_frame + 0x0));
  uVar1 = F_00b9c9b0(param_1,uVar3 + 1);
  uVar1 = F_00c01ae0(uVar2,uVar1,puVar4);
  if (uVar1 != 0) {
    F_00b9c7f0(param_1,uVar3 + 3);
    F_00b9a760(param_1,uVar3 + 3);
    F_00b9a680(param_1,uVar2,1);
    uVar1 = F_00b9c9b0(param_1,uVar3 + 2);
    uVar2 = F_00c01c40(uVar2,((undefined1 *)(gen_frame + 0x0)),uVar1);
    F_00b9ae60(param_1,uVar2);
    return 1;
  }
  uVar2 = F_00b9c590(param_1,uVar3 + 1,((char *)REFP(0x13482f8)));
  return uVar2;
}

/* ref: FUN_00c16ae0 */
GEN_OWN GEN_NOFRAME uint F_00c16ae0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c9b0(param_1,2);
  F_00b9c7a0(param_1,1,6);
  uVar2 = F_00b9a980(param_1,1);
  if (uVar2 == 0) {
    uVar1 = F_00b9ba00(param_1,1,uVar1);
    if (uVar1 != 0) {
      F_00b9ae60(param_1,uVar1);
      F_00b9a800(param_1,0xfffffffe);
      return 2;
    }
  }
  return 0;
}

/* ref: FUN_00c16b40 */
GEN_OWN GEN_NOFRAME uint F_00c16b40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  F_00b9c7f0(param_1,3);
  uVar1 = F_00b9c9b0(param_1,2);
  F_00b9c7a0(param_1,1,6);
  uVar2 = F_00b9a980(param_1,1);
  if (uVar2 == 0) {
    uVar1 = F_00b9ba90(param_1,1,uVar1);
    if (uVar1 != 0) {
      F_00b9ae60(param_1,uVar1);
      F_00b9a800(param_1,0xffffffff);
      return 1;
    }
  }
  return 0;
}

/* ref: Global::LuaDbHookFunction */
GEN_OWN GEN_NOFRAME uint F_00c16ba0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc16ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00b9aff0(param_1,&REFG(undefined, 0x110e8e0));
  F_00b9b0d0(param_1,0xffffd8f0);
  F_00b9aff0(param_1,param_1);
  F_00b9b0d0(param_1,0xfffffffe);
  uVar1 = F_00b9a940(param_1,0xffffffff);
  if (uVar1 == 6) {
    F_00b9ae60(param_1,(&REFG(undefined * PTR32, 0x110e8e4))[(int)(*param_2)]);
    if (-1 < param_2[5]) {
      F_00b9ae00(param_1,param_2[5]);
      uVar1 = F_00b9b510(param_1,2,0);
      return uVar1;
    }
    F_00b9adc0(param_1);
    uVar1 = F_00b9b510(param_1,2,0);
  }
  return uVar1;
}

/* ref: Global::LuaDbMakeMask */
GEN_OWN GEN_NOFRAME uint F_00c16c30(GEN_P(undefined4 in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc16c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c51da0(in_edi,99);
  uVar2 = (uint)(uVar1 != 0);
  uVar1 = F_00c51da0(in_edi,0x72);
  if (uVar1 != 0) {
    uVar2 = uVar2 | 2;
  }
  uVar1 = F_00c51da0(in_edi,0x6c);
  if (uVar1 != 0) {
    uVar2 = uVar2 | 4;
  }
  if (0 < param_2) {
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}

/* ref: Global::LuaDbGetHookTable */
GEN_OWN GEN_NOFRAME uint F_00c16cb0(GEN_P(undefined4 in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc16cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9aff0(in_esi,&REFG(undefined, 0x110e8e0));
  F_00b9b0d0(in_esi,0xffffd8f0);
  uVar1 = F_00b9a940(in_esi,0xffffffff);
  if (uVar1 != 5) {
    F_00b9a760(in_esi,0xfffffffe);
    F_00b9b150(in_esi,0,1);
    F_00b9aff0(in_esi,&REFG(undefined, 0x110e8e0));
    F_00b9a910(in_esi,0xfffffffe);
    uVar1 = F_00b9b2f0(in_esi,0xffffd8f0);
  }
  return uVar1;
}

/* ref: FUN_00c16d10 */
GEN_OWN GEN_NOFRAME uint F_00c16d10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  code * local_4;
  
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 != 8) {
    local_8 = param_1;
  }
  else {
    local_8 = F_00b9ad30(param_1,1);
  }
  uVar3 = (uint)(uVar2 == 8);
  iVar1 = uVar3 + 1;
  uVar2 = F_00b9a940(param_1,iVar1);
  if ((int)uVar2 < 1) {
    F_00b9a760(param_1,iVar1);
    uVar2 = 0;
    local_4 = ((code *)GEN_TOP(0x0));
    uVar3 = 0;
  }
  else {
    uVar2 = F_00b9c820(param_1,uVar3 + 2,0);
    F_00b9c7a0(param_1,iVar1,6);
    uVar3 = F_00b9ca20(param_1,uVar3 + 3,0);
    local_4 = ((code *)REFP(0xc16ba0));
    uVar2 = F_00c16c30(uVar2,uVar3);
  }
  F_00c16cb0(param_1);
  F_00b9aff0(param_1,local_8);
  F_00b9a910(param_1,iVar1);
  F_00b9b2f0(param_1,0xfffffffd);
  F_00b9a760(param_1,0xfffffffe);
  F_00c01a80(local_8,local_4,uVar2,uVar3);
  return 0;
}

/* ref: Global::LuaDbGetHook */
GEN_OWN_GS GEN_NOFRAME uint F_00c16df0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_GS(0xc, 4, 0);
  uint uVar1;
  uint uVar2;
  code * pcVar3;
  uint uVar4;
  bool bVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00b9a940(param_1,1);
  uVar2 = param_1;
  if (uVar1 == 8) {
    uVar2 = F_00b9ad30(param_1,1);
  }
  uVar1 = F_00c01ac0(uVar2);
  pcVar3 = ((code *)GEN_TOP(F_00c01ab0(uVar2)));
  if ((pcVar3 == ((code *)GEN_TOP(0x0))) || (pcVar3 == ((code *)REFP(0xc16ba0)))) {
    F_00c16cb0(param_1);
    F_00b9aff0(param_1,uVar2);
    F_00b9b0d0(param_1,0xfffffffe);
    F_00b9a7b0(param_1,0xfffffffe);
  }
  else {
    F_00b9ae20(param_1,((char *)REFP(0x1348338)),0xd);
  }
  bVar5 = (uVar1 & 1) != 0;
  if (bVar5) {
    ((undefined1 *)(gen_frame + 0x0))[0] = 99;
  }
  uVar4 = (uint)bVar5;
  if ((uVar1 & 2) != 0) {
    ((undefined1 *)(gen_frame + 0x0))[(int)(uVar4)] = 0x72;
    uVar4 = uVar4 + 1;
  }
  if ((uVar1 & 4) != 0) {
    ((undefined1 *)(gen_frame + 0x0))[(int)(uVar4)] = 0x6c;
    uVar4 = uVar4 + 1;
  }
  ((undefined1 *)(gen_frame + 0x0))[(int)(uVar4)] = 0;
  F_00b9ae60(param_1,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = F_00c01ad0(uVar2);
  F_00b9ae00(param_1,uVar2);
  return 3;
}

/* ref: Global::LuaDbDebug */
GEN_OWN_GS GEN_NOFRAME uint F_00c16ee0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc16ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x100, 0, 0);
  byte bVar1;
  uint uVar2;
  undefined * pFVar3;
  char * pcVar4;
  byte * pbVar5;
  int iVar6;
  bool bVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x0)));
  uVar2 = F_00c50860();
  F_00c5075a(REFG(char, 0x1348348),((undefined *)GEN_TOP((uVar2 + 0x40))));
  pFVar3 = ((undefined *)GEN_TOP(F_00c50860()));
  pcVar4 = F_00c5281f((char *)((byte *)(gen_frame + 0x0)),0xfa,pFVar3);
  do {
    if (pcVar4 == ((char *)GEN_TOP(0x0))) {
      return 0;
    }
    pcVar4 = ((char *)REFP(0x1348354));
    pbVar5 = ((byte *)(gen_frame + 0x0));
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_00c16f60: ;
        iVar6 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00c16f65;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_00c16f60;
      pbVar5 = pbVar5 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00c16f65: ;
    if (iVar6 == 0) {
      return 0;
    }
    pbVar5 = ((byte *)(gen_frame + 0x0));
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    uVar2 = F_00b9c490(param_1,((byte *)(gen_frame + 0x0)),(int)pbVar5 - (int)(((byte *)(gen_frame + 0x0)) + 1),
                            ((char *)REFP(0x134835c)));
    if ((uVar2 != 0) || (uVar2 = F_00b9b570(param_1,0,0,0), uVar2 != 0)) {
      uVar2 = F_00c50860();
      pFVar3 = ((undefined *)GEN_TOP((uVar2 + 0x40)));
      pcVar4 = ((char *)GEN_TOP(F_00b9abf0(param_1,0xffffffff,0)));
      F_00c5075a(pcVar4,pFVar3);
      uVar2 = F_00c50860();
      F_00c5075a(&REFG(undefined, 0x1348370),((undefined *)GEN_TOP((uVar2 + 0x40))));
    }
    F_00b9a760(param_1,0);
    uVar2 = F_00c50860();
    F_00c5075a(REFG(char, 0x1348348),((undefined *)GEN_TOP((uVar2 + 0x40))));
    pFVar3 = ((undefined *)GEN_TOP(F_00c50860()));
    pcVar4 = F_00c5281f((char *)((byte *)(gen_frame + 0x0)),0xfa,pFVar3);
  } while( true );
}

/* ref: FUN_00c17030 */
GEN_OWN_GS GEN_NOFRAME uint F_00c17030(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_GS(0x70, 0, 0);
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * puVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint *)(gen_frame + 0x0)));
  (*(uint *)(gen_frame + 0x4)) = 1;
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 != 8) {
    (*(uint *)(gen_frame + 0x0)) = 0;
    uVar3 = param_1;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = 1;
    uVar3 = F_00b9ad30(param_1,1);
  }
  uVar2 = (uint)(uVar2 == 8);
  uVar4 = F_00b9a9b0(param_1,uVar2 + 2);
  if (uVar4 == 0) {
    uVar4 = (uint)(param_1 == uVar3);
  }
  else {
    uVar4 = F_00b9ab70(param_1,uVar2 + 2);
    F_00b9a760(param_1,0xfffffffe);
  }
  uVar5 = F_00b9a750(param_1);
  if (uVar5 == uVar2) {
    uVar8 = 0;
    puVar7 = &REFG(undefined, 0x14c5bf1);
  }
  else {
    uVar5 = F_00b9a9f0(param_1,uVar2 + 1);
    if (uVar5 == 0) {
      return 1;
    }
    uVar8 = 1;
    puVar7 = &REFG(undefined, 0x1348374);
  }
  F_00b9ae20(param_1,puVar7,uVar8);
  F_00b9ae20(param_1,((char *)REFP(0x1348378)),0x10);
  uVar5 = F_00c01ae0(uVar3,uVar4,((byte *)(gen_frame + 0x8)));
  while (uVar5 != 0) {
    uVar6 = uVar4 + 1;
    if (((int)uVar6 < 0xd) || ((*(uint *)(gen_frame + 0x4)) == 0)) {
      F_00b9ae20(param_1,&REFG(undefined, 0x1348394),2);
      F_00c028c0(uVar3,&REFG(undefined, 0x1348398),((byte *)(gen_frame + 0x8)));
      F_00b9af00(param_1,&REFG(undefined, 0x134839c),((undefined1 *)(gen_frame + 0x2c)));
      if (0 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20))) {
        F_00b9af00(param_1,&REFG(undefined, 0x13483a0),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)));
      }
      if (*((char *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12))));
        if (cVar1 == 'm') {
          F_00b9af00(param_1,((char *)REFP(0x13483b8)));
        }
        else if ((cVar1 == 'C') || (cVar1 == 't')) {
          F_00b9ae20(param_1,&REFG(undefined, 0x13483c8),2);
        }
        else {
          F_00b9af00(param_1,((char *)REFP(0x13483cc)),((undefined1 *)(gen_frame + 0x2c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)));
        }
      }
      else {
        F_00b9af00(param_1,((char *)REFP(0x13483a4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)));
      }
      uVar4 = F_00b9a750(param_1);
      F_00b9b880(param_1,uVar4 - uVar2);
    }
    else {
      uVar2 = F_00c01ae0(uVar3,uVar4 + 0xb,((byte *)(gen_frame + 0x8)));
      if (uVar2 == 0) {
        (*(uint *)(gen_frame + 0x4)) = uVar2;
        uVar6 = uVar4;
        uVar2 = (*(uint *)(gen_frame + 0x0));
      }
      else {
        F_00b9ae20(param_1,((char *)REFP(0x134838c)),5);
        uVar4 = F_00c01ae0(uVar3,uVar4 + 0xb,((byte *)(gen_frame + 0x8)));
        uVar2 = (*(uint *)(gen_frame + 0x0));
        while ((*(uint *)(gen_frame + 0x0)) = uVar2, uVar4 != 0) {
          uVar4 = F_00c01ae0(uVar3,uVar6 + 0xb,((byte *)(gen_frame + 0x8)));
          uVar6 = uVar6 + 1;
          uVar2 = (*(uint *)(gen_frame + 0x0));
        }
        (*(uint *)(gen_frame + 0x4)) = 0;
      }
    }
    uVar5 = F_00c01ae0(uVar3,uVar6,((byte *)(gen_frame + 0x8)));
    uVar4 = uVar6;
  }
  uVar3 = F_00b9a750(param_1);
  F_00b9b880(param_1,uVar3 - uVar2);
  return 1;
}

/* ref: FUN_00c17290 */
GEN_OWN GEN_NOFRAME uint F_00c17290(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9cd70(param_1,((char *)REFP(0x134847c)),&REFG(undefined * PTR32, 0x110e8f8));
  return 1;
}

/* ref: FUN_00c172b0 */
GEN_OWN GEN_NOFRAME uint F_00c172b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc172b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,GEN_TOD(ABS((double)fVar1)));
  return 1;
}

/* ref: FUN_00c172e0 */
GEN_OWN GEN_NOFRAME uint F_00c172e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc172e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar1;
  float fVar2;
  
  fVar2 = F_00b9c8e0(param_1,1);
  fVar1 = ((float10)GEN_TOD(fsin((float10)fVar2)));
  F_00b9ade0(param_1,(double)fVar1);
  return 1;
}

/* ref: FUN_00c17310 */
GEN_OWN GEN_NOFRAME uint F_00c17310(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,8)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17340 */
GEN_OWN GEN_NOFRAME uint F_00c17340(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar1;
  float fVar2;
  
  fVar2 = F_00b9c8e0(param_1,1);
  fVar1 = ((float10)GEN_TOD(fcos((float10)fVar2)));
  F_00b9ade0(param_1,(double)fVar1);
  return 1;
}

/* ref: FUN_00c17370 */
GEN_OWN GEN_NOFRAME uint F_00c17370(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,9)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: Global::LuaMathTan */
GEN_OWN GEN_NOFRAME uint F_00c173a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc173a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,4)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c173d0 */
GEN_OWN GEN_NOFRAME uint F_00c173d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc173d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,10)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: Global::LuaMathAsin */
GEN_OWN GEN_NOFRAME uint F_00c17400(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,6)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17430 */
GEN_OWN GEN_NOFRAME uint F_00c17430(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,7)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: Global::LuaMathAtan */
GEN_OWN GEN_NOFRAME uint F_00c17460(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,5)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17490 */
GEN_OWN GEN_NOFRAME uint F_00c17490(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = F_00b9c8e0(param_1,1);
  fVar3 = F_00b9c8e0(param_1,2);
  fVar1 = ((float10)GEN_TOD(atan2((float10)fVar2,(float10)fVar3)));
  F_00b9ade0(param_1,(double)fVar1);
  return 1;
}

/* ref: FUN_00c174e0 */
GEN_OWN GEN_NOFRAME uint F_00c174e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc174e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  double dVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  dVar2 = (GEN_X87MATH(((double)fVar3),0xe));
  F_00b9ade0(param_1,dVar2);
  return 1;
}

/* ref: Global::LuaMathFloor */
GEN_OWN GEN_NOFRAME uint F_00c17510(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  double dVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  dVar2 = (GEN_X87MATH(((double)fVar3),0xd));
  F_00b9ade0(param_1,dVar2);
  return 1;
}

/* ref: FUN_00c17540 */
GEN_OWN GEN_NOFRAME uint F_00c17540(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float fVar1;
  float fVar2;
  
  fVar1 = F_00b9c8e0(param_1,1);
  fVar2 = F_00b9c8e0(param_1,2);
  F_00b9ade0(param_1,((double)GEN_TOD(((float10)fVar1 -
                               (float10)(longlong)((float10)fVar1 / (float10)fVar2) * (float10)fVar2
                               ))));
  return 1;
}

/* ref: FUN_00c17590 */
GEN_OWN GEN_NOFRAME uint F_00c17590(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x10, 0);
  float10 fVar1;
  float fVar2;
  double * pdVar3;
  
  pdVar3 = &(*(double *)(gen_frame + 0x0));
  fVar2 = F_00b9c8e0(param_1,1);
  fVar1 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)fVar2),
                       (int)((ulonglong)gen_d2bits((double)fVar2) >> 0x20),pdVar3);
  (*(double *)(gen_frame + 0x8)) = (double)fVar1;
  F_00b9ade0(param_1,(*(double *)(gen_frame + 0x0)));
  F_00b9ade0(param_1,(*(double *)(gen_frame + 0x8)));
  return 2;
}

/* ref: FUN_00c175e0 */
GEN_OWN GEN_NOFRAME uint F_00c175e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc175e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,GEN_TOD(SQRT((double)fVar1)));
  return 1;
}

/* ref: FUN_00c17610 */
GEN_OWN GEN_NOFRAME uint F_00c17610(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar4 = F_00b9c8e0(param_1,2);
  fVar2 = ((float10)GEN_TOD(pow((float10)fVar3,(float10)fVar4)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17660 */
GEN_OWN GEN_NOFRAME uint F_00c17660(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,2)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c17690 */
GEN_OWN GEN_NOFRAME uint F_00c17690(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,3)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c176c0 */
GEN_OWN GEN_NOFRAME uint F_00c176c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc176c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00b9c8e0(param_1,1);
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,1)));
  F_00b9ade0(param_1,(double)fVar2);
  return 1;
}

/* ref: FUN_00c176f0 */
GEN_OWN GEN_NOFRAME uint F_00c176f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc176f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,(double)fVar1 / *(double *)&REFG(undefined, 0x110ea58));
  return 1;
}

/* ref: FUN_00c17720 */
GEN_OWN GEN_NOFRAME uint F_00c17720(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float fVar1;
  
  fVar1 = F_00b9c8e0(param_1,1);
  F_00b9ade0(param_1,(double)fVar1 * *(double *)&REFG(undefined, 0x110ea58));
  return 1;
}

/* ref: FUN_00c17750 */
GEN_OWN GEN_NOFRAME uint F_00c17750(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x4, 12);
  double dVar1;
  float fVar2;
  int * _Y;
  
  _Y = &(*(int *)(gen_frame + 0x0));
  fVar2 = F_00b9c8e0(param_1,1);
  dVar1 = F_00c52990((double)fVar2,_Y);
  F_00b9ade0(param_1,dVar1);
  F_00b9ae00(param_1,(*(int *)(gen_frame + 0x0)));
  return 2;
}

/* ref: FUN_00c17790 */
GEN_OWN GEN_NOFRAME uint F_00c17790(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint _Y;
  double dVar1;
  float fVar2;
  
  _Y = F_00b9c9b0(param_1,2);
  fVar2 = F_00b9c8e0(param_1,1);
  dVar1 = F_00c52a5e((double)fVar2,_Y);
  F_00b9ade0(param_1,dVar1);
  return 1;
}

/* ref: FUN_00c177d0 */
GEN_OWN GEN_FRAME uint F_00c177d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc177d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  int iVar2;
  float fVar3;
  double local_50;
  
  uVar1 = F_00b9a750(param_1);
  fVar3 = F_00b9c8e0(param_1,1);
  local_50 = (double)fVar3;
  iVar2 = 2;
  if (1 < (int)uVar1) {
    do {
      fVar3 = F_00b9c8e0(param_1,iVar2);
      if ((double)fVar3 < local_50) {
        local_50 = (double)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)uVar1);
  }
  F_00b9ade0(param_1,local_50);
  return 1;
}

/* ref: FUN_00c17850 */
GEN_OWN GEN_FRAME uint F_00c17850(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  int iVar2;
  float fVar3;
  double local_50;
  
  uVar1 = F_00b9a750(param_1);
  fVar3 = F_00b9c8e0(param_1,1);
  local_50 = (double)fVar3;
  iVar2 = 2;
  if (1 < (int)uVar1) {
    do {
      fVar3 = F_00b9c8e0(param_1,iVar2);
      if (local_50 < (double)fVar3) {
        local_50 = (double)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)uVar1);
  }
  F_00b9ade0(param_1,local_50);
  return 1;
}

/* ref: FUN_00c178d0 */
GEN_OWN GEN_NOFRAME uint F_00c178d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc178d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = F_00c4f2dd();
  dVar3 = (double)((int)uVar1 % 0x7fff) / *(double *)&REFG(undefined, 0x10920e0);
  uVar1 = F_00b9a750(param_1);
  if (uVar1 == 0) {
    F_00b9ade0(param_1,dVar3);
    return 1;
  }
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13484ac)));
      return uVar1;
    }
    uVar1 = F_00b9c9b0(param_1,1);
    uVar2 = F_00b9c9b0(param_1,2);
    if ((int)uVar2 < (int)uVar1) {
      F_00b9c590(param_1,2,((char *)REFP(0x1348498)));
    }
    dVar3 = (double)(int)((uVar2 - uVar1) + 1) * dVar3;
    dVar4 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar3));
    dVar4 = (dVar3 + dVar4) - dVar4;
    F_00b9ade0(param_1,GEN_TOD((dVar4 - gen_bits2d(-(ulonglong)
                                              !(dVar4 - dVar3 <=
                                               gen_bits2d(REFG(ulonglong, 0x110e628) &
                                                          (ulonglong)gen_d2bits(dVar3))) &
                                             (ulonglong)gen_d2bits(REFG(double, 0x1088130)))) +
                         (double)(int)uVar1));
    return 1;
  }
  uVar1 = F_00b9c9b0(param_1,1);
  if ((int)uVar1 < 1) {
    F_00b9c590(param_1,1,((char *)REFP(0x1348484)));
  }
  dVar3 = (double)(int)uVar1 * dVar3;
  dVar4 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar3));
  dVar4 = (dVar3 + dVar4) - dVar4;
  F_00b9ade0(param_1,GEN_TOD((dVar4 - gen_bits2d(-(ulonglong)
                                            !(dVar4 - dVar3 <=
                                             gen_bits2d(REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar3))
                                             ) & (ulonglong)gen_d2bits(REFG(double, 0x1088130)))) +
                       REFG(double, 0x1088130)));
  return 1;
}

/* ref: FUN_00c17a80 */
GEN_OWN GEN_NOFRAME uint F_00c17a80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9c9b0(param_1,1);
  F_00c4f2cb(uVar1);
  return 0;
}

/* ref: Global::LuaOpenMath */
GEN_OWN GEN_NOFRAME uint F_00c17aa0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9cd70(param_1,&REFG(undefined, 0x1348580),&REFG(undefined * PTR32, 0x110e970));
  F_00b9ade0(param_1,*(double *)&REFG(undefined, 0x110ea60));
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348588));
  F_00b9ade0(param_1,*(double *)&REFG(undefined, 0x134b0a0));
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x134858c));
  F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348594));
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x134859c));
  return 1;
}

/* ref: Global::LuaStrLen */
GEN_OWN GEN_NOFRAME uint F_00c17b20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x4, 12);
  
  F_00b9c820(param_1,1,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00b9ae00(param_1,(*(undefined4 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Global::LuaStrSub */
GEN_OWN GEN_NOFRAME uint F_00c17b70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x4, 12);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0x0)));
  uVar4 = (*(uint *)(gen_frame + 0x0));
  uVar3 = F_00b9c9b0(param_1,2);
  uVar1 = (*(uint *)(gen_frame + 0x0));
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1 + uVar4;
  }
  uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
  uVar4 = F_00b9ca20(param_1,3,0xffffffff);
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + 1 + uVar1;
  }
  uVar4 = uVar4 & ((int)uVar4 < 0) - 1;
  if ((int)uVar3 < 1) {
    uVar3 = 1;
  }
  if ((int)(*(uint *)(gen_frame + 0x0)) < (int)uVar4) {
    uVar4 = (*(uint *)(gen_frame + 0x0));
  }
  if ((int)uVar3 <= (int)uVar4) {
    F_00b9ae20(param_1,(uVar3 - 1) + uVar2,(uVar4 - uVar3) + 1);
    return 1;
  }
  F_00b9ae20(param_1,&REFG(undefined, 0x14c5bf2),0);
  return 1;
}

/* ref: Global::LuaStrReverse */
GEN_OWN GEN_NOFRAME uint F_00c17c20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x214, 12);
  int iVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x210)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x0));
  uVar2 = F_00b9c820(param_1,1,&(*(int *)(gen_frame + 0x0)));
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x4)));
  iVar1 = (*(int *)(gen_frame + 0x0));
  while (iVar1 != 0) {
    (*(int *)(gen_frame + 0x0)) = iVar1 - 1;
    if (&(*(uint *)(gen_frame + 0x210)) <= ((uint * PTR32 *)(gen_frame + 0x4))[0]) {
      F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x4)));
    }
    *(undefined1 *)((uint * PTR32 *)(gen_frame + 0x4))[0] = *((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + uVar2)));
    ((uint * PTR32 *)(gen_frame + 0x4))[0] = ((uint *)GEN_TOP(((int)((uint * PTR32 *)(gen_frame + 0x4))[0] + 1)));
    iVar1 = (*(int *)(gen_frame + 0x0));
  }
  (*(int *)(gen_frame + 0x0)) = -1;
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: Global::LuaStrLower */
GEN_OWN GEN_NOFRAME uint F_00c17ce0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x214, 12);
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x210)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint *)(gen_frame + 0x0));
  uVar1 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0x0)));
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x4)));
  uVar3 = 0;
  if ((*(uint *)(gen_frame + 0x0)) != 0) {
    do {
      if (&(*(uint *)(gen_frame + 0x210)) <= ((uint * PTR32 *)(gen_frame + 0x4))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x4)));
      }
      iVar2 = F_00c4ef4f((uint)*((byte *)GEN_TOP((uVar3 + uVar1))));
      *(char *)((uint * PTR32 *)(gen_frame + 0x4))[0] = (char)iVar2;
      ((uint * PTR32 *)(gen_frame + 0x4))[0] = ((uint *)GEN_TOP(((int)((uint * PTR32 *)(gen_frame + 0x4))[0] + 1)));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(gen_frame + 0x0)));
  }
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: Global::LuaStrUpper */
GEN_OWN GEN_NOFRAME uint F_00c17d90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x214, 12);
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x210)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(uint *)(gen_frame + 0x0));
  uVar1 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0x0)));
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x4)));
  uVar3 = 0;
  if ((*(uint *)(gen_frame + 0x0)) != 0) {
    do {
      if (&(*(uint *)(gen_frame + 0x210)) <= ((uint * PTR32 *)(gen_frame + 0x4))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x4)));
      }
      iVar2 = F_00c52d33((uint)*((byte *)GEN_TOP((uVar3 + uVar1))));
      *(char *)((uint * PTR32 *)(gen_frame + 0x4))[0] = (char)iVar2;
      ((uint * PTR32 *)(gen_frame + 0x4))[0] = ((uint *)GEN_TOP(((int)((uint * PTR32 *)(gen_frame + 0x4))[0] + 1)));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(gen_frame + 0x0)));
  }
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: Global::LuaStrRep */
GEN_OWN_GS GEN_NOFRAME uint F_00c17e40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x214, 12, 0);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x210)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_00b9c820(param_1,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = F_00b9c9b0(param_1,2);
  F_00b9c080(param_1,((undefined1 *)(gen_frame + 0x4)));
  for (; 0 < (int)uVar2; uVar2 = uVar2 - 1) {
    F_00b9bf30(((undefined1 *)(gen_frame + 0x4)),uVar1,(*(undefined4 *)(gen_frame + 0x0)));
  }
  F_00b9bfc0(((undefined1 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_00c17ee0 */
GEN_OWN GEN_NOFRAME uint F_00c17ee0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x8, 8);
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0x0)));
  uVar3 = (*(uint *)(gen_frame + 0x0));
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  uVar2 = F_00b9ca20(param_1,2,1);
  uVar4 = (*(uint *)(gen_frame + 0x0));
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 1 + uVar3;
  }
  uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
  uVar3 = F_00b9ca20(param_1,3,uVar2);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1 + uVar4;
  }
  uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  if ((*(uint *)(gen_frame + 0x0)) < uVar3) {
    uVar3 = (*(uint *)(gen_frame + 0x0));
  }
  if ((int)uVar3 < (int)uVar2) {
    return 0;
  }
  uVar4 = (uVar3 - uVar2) + 1;
  if ((int)(uVar4 + uVar2) <= (int)uVar3) {
    F_00b9bbd0(param_1,((char *)REFP(0x13485a0)));
  }
  F_00b9bc60(param_1,uVar4,((char *)REFP(0x13485b8)));
  iVar5 = 0;
  if (0 < (int)uVar4) {
    iVar1 = (uVar2 - 1) + (*(uint *)(gen_frame + 0x4));
    do {
      F_00b9ae00(param_1,(uint)*((byte *)GEN_TOP((iVar1 + iVar5))));
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar4);
  }
  return uVar4;
}

/* ref: FUN_00c17fc0 */
GEN_OWN GEN_NOFRAME uint F_00c17fc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc17fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x210, 0);
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((uint * PTR32 *)(gen_frame + 0x0));
  uVar1 = F_00b9a750(param_1);
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x0)));
  iVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      uVar2 = F_00b9c9b0(param_1,iVar3);
      if ((uVar2 & 0xff) != uVar2) {
        F_00b9c590(param_1,iVar3,((char *)REFP(0x13485d0)));
      }
      if (&(*(uint *)(gen_frame + 0x20c)) <= ((uint * PTR32 *)(gen_frame + 0x0))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x0)));
      }
      *(char *)((uint * PTR32 *)(gen_frame + 0x0))[0] = (char)uVar2;
      ((uint * PTR32 *)(gen_frame + 0x0))[0] = ((uint *)GEN_TOP(((int)((uint * PTR32 *)(gen_frame + 0x0))[0] + 1)));
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)uVar1);
  }
  F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Global::LuaStrDumpWriter */
GEN_OWN GEN_NOFRAME uint F_00c18080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc18080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_00b9bf30(param_4,param_2,param_3);
  return 0;
}

/* ref: FUN_00c180a0 */
GEN_OWN_GS GEN_NOFRAME uint F_00c180a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc180a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x210, 0, 0);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  F_00b9c7a0(param_1,1,6);
  F_00b9a760(param_1,1);
  F_00b9c080(param_1,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00b9b6d0(param_1,((code *)REFP(0xc18080)),((undefined1 *)(gen_frame + 0x0)));
  if (uVar1 != 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x13485e0)));
  }
  F_00b9bfc0(((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: FUN_00c18190 */
GEN_OWN GEN_NOFRAME uint F_00c18190(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc18190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  char * pcVar1;
  char * pcVar2;
  
  pcVar1 = in_eax + 1;
  if (*in_eax == '%') {
    if (*pcVar1 == '\0') {
      F_00b9bbd0(*((undefined4 *)GEN_TOP((in_edi + 8))),((char *)REFP(0x1348630)));
    }
    return (uint)(in_eax + 2);
  }
  if (*in_eax != '[') {
    return (uint)pcVar1;
  }
  if (*pcVar1 == '^') {
    pcVar1 = in_eax + 2;
  }
  do {
    if (*pcVar1 == '\0') {
      F_00b9bbd0(*((undefined4 *)GEN_TOP((in_edi + 8))),((char *)REFP(0x1348654)));
    }
    pcVar2 = pcVar1 + 1;
    if ((*pcVar1 == '%') && (*pcVar2 != '\0')) {
      pcVar2 = pcVar1 + 2;
    }
    pcVar1 = pcVar2;
  } while (*pcVar2 != ']');
  return (uint)(pcVar2 + 1);
}

/* ref: FUN_00c18200 */
GEN_OWN GEN_NOFRAME uint F_00c18200(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc18200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c4ef4f(in_edi);
  switch((unsigned int)(uintptr_t)(iVar1)) {
  case 0x61: ;
    uVar2 = F_00c484b8(in_eax);
    break;
  default: ;
    return (uint)(in_edi == in_eax);
  case 99: ;
    uVar2 = F_00c489cc(in_eax);
    break;
  case 100: ;
    uVar2 = F_00c48637(in_eax);
    break;
  case 0x6c: ;
    uVar2 = F_00c485b8(in_eax);
    break;
  case 0x70: ;
    uVar2 = F_00c487bb(in_eax);
    break;
  case 0x73: ;
    uVar2 = F_00c4873c(in_eax);
    break;
  case 0x75: ;
    uVar2 = F_00c48539(in_eax);
    break;
  case 0x77: ;
    uVar2 = F_00c4883f(in_eax);
    break;
  case 0x78: ;
    uVar2 = F_00c486bb(in_eax);
    break;
  case 0x7a: ;
    uVar2 = (uint)(in_eax == 0);
  }
  iVar1 = F_00c485b8(in_edi);
  if (iVar1 != 0) {
    return uVar2;
  }
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00c18310 */
GEN_OWN GEN_NOFRAME uint F_00c18310(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc18310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  byte * pbVar1;
  byte bVar2;
  uint uVar3;
  byte * pbVar4;
  byte * pbVar5;
  bool bVar6;
  uint local_4;
  
  bVar6 = *((char *)GEN_TOP((in_eax + 1))) == '^';
  if (bVar6) {
    in_eax = in_eax + 1;
  }
  local_4 = (uint)!bVar6;
  pbVar5 = ((byte *)GEN_TOP((in_eax + 1)));
  if (pbVar5 < param_3) {
    pbVar4 = ((byte *)GEN_TOP((in_eax + 3)));
    do {
      if (*pbVar5 == 0x25) {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
        uVar3 = F_00c18200(param_2,(uint)*pbVar1);
        if (uVar3 != 0) {
          return local_4;
        }
      }
      else if ((pbVar5[1] == 0x2d) && (pbVar4 < param_3)) {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
        if (((int)(uint)bVar2 <= (int)param_2) && ((int)param_2 <= (int)(uint)*pbVar5)) {
          return local_4;
        }
      }
      else if (*pbVar5 == param_2) {
        return local_4;
      }
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 < param_3);
  }
  return (uint)(local_4 == 0);
}

/* ref: FUN_00c18400 */
GEN_OWN GEN_NOFRAME uint F_00c18400(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(char * in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc18400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * in_ecx = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  char * pcVar1;
  int iVar2;
  
  if ((*in_eax == '\0') || (in_eax[1] == '\0')) {
    F_00b9bbd0(*((undefined4 *)GEN_TOP((param_3 + 8))),((char *)REFP(0x1348674)));
  }
  if (*in_ecx != *in_eax) {
    return 0;
  }
  iVar2 = 1;
  do {
    while( true ) {
      pcVar1 = in_ecx;
      in_ecx = pcVar1 + 1;
      if (*((char * PTR32 *)GEN_TOP((param_3 + 4))) <= in_ecx) {
        return 0;
      }
      if (*in_ecx == in_eax[1]) break;
      if (*in_ecx == *in_eax) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (uint)(pcVar1 + 2);
}

/* ref: FUN_00c18470 */
GEN_OWN GEN_NOFRAME uint F_00c18470(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc18470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte * pbVar4;
  
  iVar3 = 0;
  pbVar4 = param_2;
  if (param_2 < *((byte * PTR32 *)GEN_TOP((param_1 + 4)))) {
    do {
      bVar1 = *param_3;
      uVar2 = (uint)*pbVar4;
      if (bVar1 == 0x25) {
        uVar2 = F_00c18200(uVar2,(uint)param_3[1]);
LAB_00c184ca: ;
        if (uVar2 == 0) break;
      }
      else if (bVar1 != 0x2e) {
        if (bVar1 == 0x5b) {
          uVar2 = F_00c18310(param_3,uVar2,param_4 - 1);
        }
        else {
          uVar2 = (uint)(bVar1 == uVar2);
        }
        goto LAB_00c184ca;
      }
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (pbVar4 < *((byte * PTR32 *)GEN_TOP((param_1 + 4))));
    if (iVar3 < 0) {
      return 0;
    }
  }
  do {
    uVar2 = F_00c186e0(param_1,param_2 + iVar3,param_4 + 1);
    if (uVar2 != 0) {
      return uVar2;
    }
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return 0;
}

/* ref: FUN_00c18510 */
GEN_OWN GEN_NOFRAME uint F_00c18510(GEN_P(byte * in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc18510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * in_eax = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00c186e0(param_2,in_eax,param_4 + 1);
  if (uVar2 == 0) {
    while (in_eax < *((byte * PTR32 *)GEN_TOP((param_2 + 4)))) {
      bVar1 = *param_3;
      uVar2 = (uint)*in_eax;
      if (bVar1 == 0x25) {
        uVar2 = F_00c18200(uVar2,(uint)param_3[1]);
LAB_00c18579: ;
        if (uVar2 == 0) break;
      }
      else if (bVar1 != 0x2e) {
        if (bVar1 == 0x5b) {
          uVar2 = F_00c18310(param_3,uVar2,param_4 - 1);
        }
        else {
          uVar2 = (uint)(bVar1 == uVar2);
        }
        goto LAB_00c18579;
      }
      in_eax = in_eax + 1;
      uVar2 = F_00c186e0(param_2,in_eax,param_4 + 1);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c185a0 */
GEN_OWN GEN_NOFRAME uint F_00c185a0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc185a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((in_esi + 0xc)));
  if (0x1f < iVar1) {
    F_00b9bbd0(*((undefined4 *)GEN_TOP((in_esi + 8))),((char *)REFP(0x1348688)));
  }
  *((undefined4 *)GEN_TOP((in_esi + 0x10 + iVar1 * 8))) = param_2;
  *((undefined4 *)GEN_TOP((in_esi + 0x14 + iVar1 * 8))) = param_4;
  *((int *)GEN_TOP((in_esi + 0xc))) = iVar1 + 1;
  uVar2 = F_00c186e0(in_esi,param_2,param_3);
  if (uVar2 == 0) {
    *((int *)GEN_TOP((in_esi + 0xc))) = *((int *)GEN_TOP((in_esi + 0xc))) - 1;
  }
  return uVar2;
}

/* ref: FUN_00c185f0 */
GEN_OWN GEN_NOFRAME uint F_00c185f0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc185f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = *((int *)GEN_TOP((in_esi + 0xc))) - 1;
  if (-1 < (int)uVar1) {
    piVar3 = ((int *)GEN_TOP((in_esi + 0x14 + uVar1 * 8)));
    do {
      if (*piVar3 == -1) goto LAB_00c18620;
      uVar1 = uVar1 - 1;
      piVar3 = piVar3 - 2;
    } while (-1 < (int)uVar1);
  }
  uVar1 = F_00b9bbd0(*((undefined4 *)GEN_TOP((in_esi + 8))),((char *)REFP(0x1348618)));
LAB_00c18620: ;
  *((int *)GEN_TOP((in_esi + 0x14 + uVar1 * 8))) = param_2 - *((int *)GEN_TOP((in_esi + 0x10 + uVar1 * 8)));
  uVar2 = F_00c186e0(in_esi,param_2,param_3);
  if (uVar2 == 0) {
    *((undefined4 *)GEN_TOP((in_esi + 0x14 + uVar1 * 8))) = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_00c18650 */
GEN_OWN GEN_NOFRAME uint F_00c18650(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc18650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  
  uVar2 = in_eax - 0x31;
  if ((((int)uVar2 < 0) || (*((int *)GEN_TOP((in_ecx + 0xc))) <= (int)uVar2)) ||
     (*((int *)GEN_TOP((in_ecx + 0x14 + uVar2 * 8))) == -1)) {
    uVar2 = F_00b9bbd0(*((undefined4 *)GEN_TOP((in_ecx + 8))),((char *)REFP(0x1348600)));
  }
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x14 + uVar2 * 8)));
  if (uVar1 <= (uint)(*((int *)GEN_TOP((in_ecx + 4))) - (int)param_3)) {
    piVar4 = *((int * PTR32 *)GEN_TOP((in_ecx + 0x10 + uVar2 * 8)));
    piVar3 = param_3;
    for (uVar2 = uVar1; 3 < uVar2; uVar2 = uVar2 - 4) {
      if (*piVar4 != *piVar3) {
        return 0;
      }
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((uVar2 == 0) ||
       (((char)*piVar3 == (char)*piVar4 &&
        ((uVar2 < 2 ||
         ((*((char *)GEN_TOP(((int)piVar3 + 1))) == *((char *)GEN_TOP(((int)piVar4 + 1))) &&
          ((uVar2 < 3 || (*((char *)GEN_TOP(((int)piVar3 + 2))) == *((char *)GEN_TOP(((int)piVar4 + 2))))))))))))) {
      return uVar1 + (int)param_3;
    }
  }
  return 0;
}

/* ref: FUN_00c186e0 */
GEN_OWN GEN_NOFRAME uint F_00c186e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc186e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  byte * in_eax;
  byte * in_ecx;
  
  in_eax = param_3;
  in_ecx = param_2;
  do {
    switch((unsigned int)(uintptr_t)(*in_eax)) {
    case 0: ;
      return (uint)in_ecx;
    case 0x24: ;
      if (in_eax[1] == 0) {
        return (in_ecx != ((byte *)GEN_TOP(param_1[1]))) - 1 & (uint)in_ecx;
      }
    default: ;
switchD_00c18703_caseD_1: ;
      pbVar4 = ((byte *)GEN_TOP(F_00c18190(in_eax,param_1)));
      if (in_ecx < ((byte *)GEN_TOP(param_1[1]))) {
        bVar2 = *in_eax;
        uVar5 = (uint)*in_ecx;
        if (bVar2 == 0x25) {
          uVar5 = F_00c18200(uVar5,(uint)in_eax[1]);
LAB_00c1883a: ;
          if (uVar5 == 0) goto LAB_00c18845;
        }
        else if (bVar2 != 0x2e) {
          if (bVar2 == 0x5b) {
            uVar5 = F_00c18310(in_eax,uVar5,pbVar4 - 1);
          }
          else {
            uVar5 = (uint)(bVar2 == uVar5);
          }
          goto LAB_00c1883a;
        }
        bVar1 = true;
      }
      else {
LAB_00c18845: ;
        bVar1 = false;
      }
      switch((unsigned int)(uintptr_t)(*pbVar4)) {
      case 0x2a: ;
        uVar5 = F_00c18470(param_1,in_ecx,in_eax,pbVar4);
        return uVar5;
      case 0x2b: ;
        if (!bVar1) {
          return 0;
        }
        uVar5 = F_00c18470(param_1,in_ecx + 1,in_eax,pbVar4);
        return uVar5;
      default: ;
        if (!bVar1) {
          return 0;
        }
        in_ecx = in_ecx + 1;
        in_eax = pbVar4;
        break;
      case 0x2d: ;
        uVar5 = F_00c18510(in_ecx,param_1,in_eax,pbVar4);
        return uVar5;
      case 0x3f: ;
        if ((bVar1) && (uVar5 = F_00c186e0(param_1,in_ecx + 1,pbVar4 + 1), uVar5 != 0)) {
          return uVar5;
        }
        in_eax = pbVar4 + 1;
      }
      break;
    case 0x25: ;
      bVar2 = in_eax[1];
      if (bVar2 == 0x62) {
        in_ecx = ((byte *)GEN_TOP(F_00c18400(in_eax + 2,in_ecx,param_1)));
        if (in_ecx == ((byte *)GEN_TOP(0x0))) {
          return 0;
        }
        in_eax = in_eax + 4;
      }
      else if (bVar2 == 0x66) {
        pbVar4 = in_eax + 2;
        if (*pbVar4 != 0x5b) {
          F_00b9bbd0(param_1[2],((char *)REFP(0x134869c)));
        }
        in_eax = ((byte *)GEN_TOP(F_00c18190(pbVar4,param_1)));
        if (in_ecx == ((byte *)GEN_TOP(*param_1))) {
          bVar2 = 0;
        }
        else {
          bVar2 = in_ecx[-1];
        }
        uVar5 = F_00c18310(pbVar4,(uint)bVar2,in_eax - 1);
        if (uVar5 != 0) {
          return 0;
        }
        uVar5 = F_00c18310(pbVar4,(uint)*in_ecx,in_eax - 1);
        if (uVar5 == 0) {
          return 0;
        }
      }
      else {
        iVar3 = F_00c48637((uint)bVar2);
        if (iVar3 == 0) goto switchD_00c18703_caseD_1;
        in_ecx = ((byte *)GEN_TOP(F_00c18650((uint)in_eax[1],param_1,in_ecx)));
        if (in_ecx == ((byte *)GEN_TOP(0x0))) {
          return 0;
        }
        in_eax = in_eax + 2;
      }
      break;
    case 0x28: ;
      if (in_eax[1] == 0x29) {
        uVar5 = F_00c185a0(param_1,in_ecx,in_eax + 2,0xfffffffe);
        return uVar5;
      }
      uVar5 = F_00c185a0(param_1,in_ecx,in_eax + 1,0xffffffff);
      return uVar5;
    case 0x29: ;
      uVar5 = F_00c185f0(param_1,in_ecx,in_eax + 1);
      return uVar5;
    }
  } while( true );
}

/* ref: FUN_00c189b0 */
GEN_OWN GEN_NOFRAME uint F_00c189b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc189b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  char * _MaxCount;
  int * _Buf;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  if (param_4 == 0) {
    return (uint)param_1;
  }
  if (param_2 < param_4) {
    return 0;
  }
  _MaxCount = ((char *)GEN_TOP((param_2 - (param_4 - 1))));
  _Buf = param_1;
  do {
    if ((_MaxCount == ((char *)GEN_TOP(0x0))) ||
       (pvVar1 = F_00c48f80(_Buf,(int)*param_3,(gen_size32)_MaxCount), pvVar1 == ((undefined *)GEN_TOP(0x0)))) {
      return 0;
    }
    piVar5 = ((int *)GEN_TOP(((int)pvVar1 + 1)));
    piVar3 = (int *)(param_3 + 1);
    piVar4 = piVar5;
    for (uVar2 = param_4 - 1; 3 < uVar2; uVar2 = uVar2 - 4) {
      if (*piVar4 != *piVar3) goto LAB_00c18a48;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((uVar2 == 0) ||
       (((char)*piVar3 == (char)*piVar4 &&
        ((uVar2 < 2 ||
         ((*((char *)GEN_TOP(((int)piVar3 + 1))) == *((char *)GEN_TOP(((int)piVar4 + 1))) &&
          ((uVar2 < 3 || (*((char *)GEN_TOP(((int)piVar3 + 2))) == *((char *)GEN_TOP(((int)piVar4 + 2))))))))))))) {
      return (uint)pvVar1;
    }
LAB_00c18a48: ;
    _MaxCount = ((char *)GEN_TOP(((int)_Buf + ((int)_MaxCount - (int)piVar5))));
    _Buf = piVar5;
  } while( true );
}

/* ref: Global::LuaPushOneCapture */
GEN_OWN GEN_NOFRAME uint F_00c18a70(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int * in_esi, unsigned int gen_a2), GEN_P(int in_edi, unsigned int gen_a3))
{
  GEN_ENTER(0xc18a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int in_edi = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  
  if (in_edi < in_esi[3]) {
    iVar1 = in_esi[in_edi * 2 + 5];
    if (iVar1 == -1) {
      F_00b9bbd0(in_esi[2],((char *)REFP(0x13486d8)));
    }
    else if (iVar1 == -2) {
      uVar2 = F_00b9ae00(in_esi[2],(in_esi[in_edi * 2 + 4] - *in_esi) + 1);
      return uVar2;
    }
    uVar2 = F_00b9ae20(in_esi[2],in_esi[in_edi * 2 + 4],iVar1);
    return uVar2;
  }
  if (in_edi == 0) {
    uVar2 = F_00b9ae20(in_esi[2],in_ecx,in_eax - in_ecx);
    return uVar2;
  }
  uVar2 = F_00b9bbd0(in_esi[2],((char *)REFP(0x13486c0)));
  return uVar2;
}

/* ref: FUN_00c18af0 */
GEN_OWN GEN_NOFRAME uint F_00c18af0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc18af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  int in_edi;
  
  uVar1 = *((uint *)GEN_TOP((in_eax + 0xc)));
  if ((uVar1 == 0) && (param_2 != 0)) {
    uVar1 = 1;
  }
  F_00b9bc60(*((undefined4 *)GEN_TOP((in_eax + 8))),uVar1,((char *)REFP(0x13486ec)));
  in_edi = 0;
  if (0 < (int)uVar1) {
    do {
      F_00c18a70(param_3,param_2,in_eax,in_edi);
      in_edi = in_edi + 1;
    } while (in_edi < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00c18b40 */
GEN_OWN GEN_NOFRAME uint F_00c18b40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc18b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL(0x120, 0);
  char cVar1;
  uint uVar2;
  char * _Str;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  
  uVar2 = F_00b9c820(param_1,1,&(*(uint *)(gen_frame + 0x0)));
  _Str = ((char *)GEN_TOP(F_00b9c820(param_1,2,&(*(int *)(gen_frame + 0xc)))));
  uVar4 = (*(uint *)(gen_frame + 0x0));
  (*(char * PTR32 *)(gen_frame + 0x8)) = _Str;
  uVar3 = F_00b9ca20(param_1,3,1);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1 + uVar4;
  }
  uVar3 = (((int)uVar3 < 0) - 1 & uVar3) - 1;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if ((*(uint *)(gen_frame + 0x0)) < uVar3) {
    uVar3 = (*(uint *)(gen_frame + 0x0));
  }
  uVar4 = (*(uint *)(gen_frame + 0x0));
  if ((param_2 == 0) ||
     ((uVar4 = F_00b9abc0(param_1,4), uVar4 == 0 &&
      (pcVar5 = F_00c52d60(_Str,((char *)REFP(0x1348700))), uVar4 = (*(uint *)(gen_frame + 0x0)), pcVar5 != ((char *)GEN_TOP(0x0)))))) {
    cVar1 = *_Str;
    if (cVar1 != '^') {
      (*(uint *)(gen_frame + 0x4)) = 0;
    }
    else {
      _Str = _Str + 1;
      (*(char * PTR32 *)(gen_frame + 0x8)) = _Str;
      (*(uint *)(gen_frame + 0x4)) = 1;
    }
    (*(uint *)(gen_frame + 0x4)) = (uint)(cVar1 == '^');
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    (*(uint *)(gen_frame + 0x14)) = uVar4 + uVar2;
    uVar3 = uVar3 + uVar2;
    do {
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      uVar4 = F_00c186e0(&(*(uint *)(gen_frame + 0x10)),uVar3,_Str);
      if (uVar4 != 0) {
        if (param_2 == 0) {
          uVar3 = F_00c18af0(&(*(uint *)(gen_frame + 0x10)),uVar3,uVar4);
          return uVar3;
        }
        F_00b9ae00(param_1,(uVar3 - uVar2) + 1);
        F_00b9ae00(param_1,uVar4 - uVar2);
        uVar3 = F_00c18af0(&(*(uint *)(gen_frame + 0x10)),0,0);
        return uVar3 + 2;
      }
    } while ((uVar3 < (*(uint *)(gen_frame + 0x14))) && (uVar3 = uVar3 + 1, _Str = (*(char * PTR32 *)(gen_frame + 0x8)), (*(uint *)(gen_frame + 0x4)) == 0));
  }
  else {
    uVar3 = F_00c189b0(uVar3 + uVar2,(*(uint *)(gen_frame + 0x0)) - uVar3,_Str,(*(int *)(gen_frame + 0xc)));
    if (uVar3 != 0) {
      F_00b9ae00(param_1,(uVar3 - uVar2) + 1);
      F_00b9ae00(param_1,(uVar3 - uVar2) + (*(int *)(gen_frame + 0xc)));
      return 2;
    }
  }
  F_00b9adc0(param_1);
  return 1;
}

/* ref: FUN_00c18d00 */
GEN_OWN GEN_NOFRAME uint F_00c18d00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc18d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c18b40(param_1,1);
  return uVar1;
}

/* ref: FUN_00c18d10 */
GEN_OWN GEN_NOFRAME uint F_00c18d10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc18d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c18b40(param_1,0);
  return uVar1;
}

/* ref: FUN_00c18d20 */
GEN_OWN GEN_NOFRAME uint F_00c18d20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc18d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x114, 12);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = F_00b9abf0(param_1,0xffffd8ed,&(*(int *)(gen_frame + 0x0)));
  uVar2 = F_00b9abf0(param_1,0xffffd8ec,0);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  (*(uint *)(gen_frame + 0x4)) = uVar1;
  (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x0)) + uVar1;
  uVar3 = F_00b9ab70(param_1,0xffffd8eb);
  uVar3 = uVar3 + uVar1;
  if (uVar3 <= (*(uint *)(gen_frame + 0x8))) {
    do {
      (*(uint *)(gen_frame + 0x10)) = 0;
      uVar4 = F_00c186e0(&(*(uint *)(gen_frame + 0x4)),uVar3,uVar2);
      if (uVar4 != 0) {
        iVar5 = uVar4 - uVar1;
        if (uVar4 == uVar3) {
          iVar5 = iVar5 + 1;
        }
        F_00b9ae00(param_1,iVar5);
        F_00b9a850(param_1,0xffffd8eb);
        if (((*(uint *)(gen_frame + 0x10)) != 0) || (uVar1 = 1, uVar3 == 0)) {
          uVar1 = (*(uint *)(gen_frame + 0x10));
        }
        F_00b9bc60((*(undefined4 *)(gen_frame + 0xc)),uVar1,((char *)REFP(0x13486ec)));
        iVar5 = 0;
        if ((int)uVar1 < 1) {
          return uVar1;
        }
        goto LAB_00c18e00;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= (*(uint *)(gen_frame + 0x8)));
  }
  return 0;
LAB_00c18e00: ;
  if (iVar5 < (int)(*(uint *)(gen_frame + 0x10))) {
    uVar2 = ((uint *)(gen_frame + 0x14))[(int)(iVar5 * 2 + 1)];
    if (uVar2 == 0xffffffff) {
      F_00b9bbd0((*(undefined4 *)(gen_frame + 0xc)),((char *)REFP(0x13486d8)));
    }
    else if (uVar2 == 0xfffffffe) {
      F_00b9ae00((*(undefined4 *)(gen_frame + 0xc)),(((uint *)(gen_frame + 0x14))[(int)(iVar5 * 2)] - (*(uint *)(gen_frame + 0x4))) + 1);
      goto LAB_00c18e56;
    }
    uVar6 = ((uint *)(gen_frame + 0x14))[(int)(iVar5 * 2)];
LAB_00c18e49: ;
    F_00b9ae20((*(undefined4 *)(gen_frame + 0xc)),uVar6,uVar2);
  }
  else {
    if (iVar5 == 0) {
      uVar2 = uVar4 - uVar3;
      uVar6 = uVar3;
      goto LAB_00c18e49;
    }
    F_00b9bbd0((*(undefined4 *)(gen_frame + 0xc)),((char *)REFP(0x13486c0)));
  }
LAB_00c18e56: ;
  iVar5 = iVar5 + 1;
  if ((int)uVar1 <= iVar5) {
    return uVar1;
  }
  goto LAB_00c18e00;
}

/* ref: Global::LuaStrGmatch */
GEN_OWN GEN_NOFRAME uint F_00c18e90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc18e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9c820(param_1,1,0);
  F_00b9c820(param_1,2,0);
  F_00b9a760(param_1,2);
  F_00b9ae00(param_1,0);
  F_00b9af30(param_1,((code *)REFP(0xc18d20)),3);
  return 1;
}

/* ref: Global::LuaStrGfindNoDef */
GEN_OWN GEN_NOFRAME uint F_00c18ed0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc18ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x134870c)));
  return uVar1;
}

/* ref: Global::LuaStrAddS */
GEN_OWN GEN_NOFRAME uint F_00c18ef0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc18ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL(0x8, 8);
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  puVar1 = ((uint *)GEN_TOP(F_00b9abf0(*((undefined4 *)GEN_TOP((in_eax + 8))),3,&(*(uint *)(gen_frame + 0x0)))));
  uVar3 = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)puVar1;
  puVar4 = (undefined1 *)puVar1;
  if ((*(uint *)(gen_frame + 0x0)) != 0) {
    do {
      if (puVar4[uVar3] == '%') {
        iVar2 = uVar3 + 1;
        uVar3 = uVar3 + 1;
        iVar2 = F_00c48637((uint)(byte)puVar4[iVar2]);
        if (iVar2 == 0) {
          puVar1 = param_2 + 0x83;
          if (puVar1 <= ((uint *)GEN_TOP(*param_2))) {
            puVar1 = ((uint *)GEN_TOP(F_00b9bef0(param_2)));
          }
          *((undefined1 *)GEN_TOP(*param_2)) = puVar4[uVar3];
          *param_2 = *param_2 + 1;
        }
        else if (puVar4[uVar3] == '0') {
          puVar1 = ((uint *)GEN_TOP(F_00b9bf30(param_2,param_3,param_4 - param_3)));
        }
        else {
          F_00c18a70(param_4,param_3,in_eax,(char)puVar4[uVar3] - 0x31);
          puVar1 = ((uint *)GEN_TOP(F_00b9c000(param_2)));
          puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x4));
        }
      }
      else {
        if (param_2 + 0x83 <= ((uint *)GEN_TOP(*param_2))) {
          F_00b9bef0(param_2);
        }
        puVar1 = ((uint *)GEN_TOP(*param_2));
        *(undefined1 *)puVar1 = puVar4[uVar3];
        *param_2 = *param_2 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (*(uint *)(gen_frame + 0x0)));
  }
  return (uint)puVar1;
}

/* ref: Global::LuaStrAddValue */
GEN_OWN GEN_NOFRAME uint F_00c18fd0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc18fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_eax + 8)));
  uVar2 = F_00b9a940(uVar1,3);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 3: ;
  case 4: ;
    uVar2 = F_00c18ef0(in_eax,param_2,param_3,param_4);
    return uVar2;
  case 5: ;
    F_00c18a70(param_4,param_3,in_eax,0);
    F_00b9b040(uVar1,3);
    break;
  case 6: ;
    F_00b9a910(uVar1,3);
    uVar2 = F_00c18af0(in_eax,param_3,param_4);
    F_00b9b510(uVar1,uVar2,1);
  }
  uVar2 = F_00b9abc0(uVar1,0xffffffff);
  if (uVar2 != 0) {
    uVar2 = F_00b9a9f0(uVar1,0xffffffff);
    if (uVar2 == 0) {
      uVar2 = F_00b9a940(uVar1,0xffffffff);
      uVar2 = F_00b9a960(uVar1,uVar2);
      F_00b9bbd0(uVar1,((char *)REFP(0x134873c)),uVar2);
    }
    uVar2 = F_00b9c000(param_2);
    return uVar2;
  }
  F_00b9a760(uVar1,0xfffffffe);
  F_00b9ae20(uVar1,param_3,param_4 - param_3);
  uVar2 = F_00b9c000(param_2);
  return uVar2;
}

/* ref: Global::LuaStrGsub */
GEN_OWN GEN_NOFRAME uint F_00c190e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc190e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x330, 0);
  char cVar1;
  undefined1 * puVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x32c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x0));
  puVar2 = ((undefined1 *)GEN_TOP(F_00b9c820(param_1,1,&(*(int *)(gen_frame + 0xc)))));
  pcVar3 = ((char *)GEN_TOP(F_00b9c820(param_1,2,0)));
  uVar4 = F_00b9a940(param_1,3);
  uVar5 = F_00b9ca20(param_1,4,(*(int *)(gen_frame + 0xc)) + 1);
  cVar1 = *pcVar3;
  (*(uint *)(gen_frame + 0x8)) = uVar5;
  if (cVar1 != '^') {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  else {
    pcVar3 = pcVar3 + 1;
    (*(uint *)(gen_frame + 0x4)) = 1;
  }
  (*(uint *)(gen_frame + 0x4)) = (uint)(cVar1 == '^');
  (*(int *)(gen_frame + 0x0)) = 0;
  if ((((uVar4 != 3) && (uVar4 != 4)) && (uVar4 != 6)) && (uVar4 != 5)) {
    F_00b9c590(param_1,3,((char *)REFP(0x1348760)));
  }
  F_00b9c080(param_1,((uint * PTR32 *)(gen_frame + 0x120)));
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = puVar2 + (*(int *)(gen_frame + 0xc));
  puVar6 = puVar2;
  if ((int)(*(uint *)(gen_frame + 0x8)) < 1) {
LAB_00c19243: ;
    F_00b9bf30(((uint * PTR32 *)(gen_frame + 0x120)),puVar6,(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - (int)puVar6);
    F_00b9bfc0(((uint * PTR32 *)(gen_frame + 0x120)));
    F_00b9ae00(param_1,(*(int *)(gen_frame + 0x0)));
    return 2;
  }
  do {
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    puVar6 = ((undefined1 *)GEN_TOP(F_00c186e0(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),puVar2,pcVar3)));
    if (puVar6 == ((undefined1 *)GEN_TOP(0x0))) {
LAB_00c191ef: ;
      puVar6 = puVar2;
      if ((*(undefined1 * PTR32 *)(gen_frame + 0x14)) <= puVar2) goto LAB_00c19243;
      if (&(*(uint *)(gen_frame + 0x32c)) <= ((uint * PTR32 *)(gen_frame + 0x120))[0]) {
        F_00b9bef0(((uint * PTR32 *)(gen_frame + 0x120)));
      }
      *(undefined1 *)((uint * PTR32 *)(gen_frame + 0x120))[0] = *puVar2;
      ((uint * PTR32 *)(gen_frame + 0x120))[0] = ((uint *)GEN_TOP(((int)((uint * PTR32 *)(gen_frame + 0x120))[0] + 1)));
      puVar6 = puVar2 + 1;
    }
    else {
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      F_00c18fd0(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),((uint * PTR32 *)(gen_frame + 0x120)),puVar2,puVar6);
      if (puVar6 <= puVar2) goto LAB_00c191ef;
    }
    if (((*(uint *)(gen_frame + 0x4)) != 0) || (puVar2 = puVar6, (int)(*(uint *)(gen_frame + 0x8)) <= (*(int *)(gen_frame + 0x0)))) goto LAB_00c19243;
  } while( true );
}

/* ref: Global::LuaStrAddQuoted */
GEN_OWN GEN_NOFRAME uint F_00c19290(GEN_P(int in_ecx, unsigned int gen_a0), GEN_P(undefined4 in_edx, unsigned int gen_a1), GEN_P(int * in_esi, unsigned int gen_a2))
{
  GEN_ENTER(0xc19290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 in_edx = (undefined4)gen_a1;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x4, 12);
  int * piVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  char * pcVar5;
  
  (*(int *)(gen_frame + 0x0)) = in_ecx;
  pcVar3 = ((char *)GEN_TOP(F_00b9c820(in_edx,in_ecx,&(*(int *)(gen_frame + 0x0)))));
  piVar1 = in_esi + 0x83;
  if (piVar1 <= ((int *)GEN_TOP(*in_esi))) {
    F_00b9bef0(in_esi);
  }
  pcVar5 = ((char *)GEN_TOP(*in_esi));
  *pcVar5 = '\"';
  *in_esi = *in_esi + 1;
  iVar2 = (*(int *)(gen_frame + 0x0));
  do {
    if (iVar2 == 0) {
      (*(int *)(gen_frame + 0x0)) = -1;
      if (piVar1 <= ((int *)GEN_TOP(*in_esi))) {
        pcVar5 = ((char *)GEN_TOP(F_00b9bef0(in_esi)));
      }
      *((undefined1 *)GEN_TOP(*in_esi)) = 0x22;
      *in_esi = *in_esi + 1;
      return (uint)pcVar5;
    }
    (*(int *)(gen_frame + 0x0)) = iVar2 - 1;
    uVar4 = (uint)*pcVar3;
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      pcVar5 = ((char *)GEN_TOP(F_00b9bf30(in_esi,&REFG(undefined, 0x1348784),4)));
      break;
    default: ;
      if (piVar1 <= ((int *)GEN_TOP(*in_esi))) {
        uVar4 = F_00b9bef0(in_esi);
      }
      pcVar5 = ((char *)GEN_TOP(CONCAT31((int3)(uVar4 >> 8),*pcVar3)));
      *((char *)GEN_TOP(*in_esi)) = *pcVar3;
      goto LAB_00c1934a;
    case 10: ;
    case 0x22: ;
    case 0x5c: ;
      if (piVar1 <= ((int *)GEN_TOP(*in_esi))) {
        F_00b9bef0(in_esi);
      }
      *((undefined1 *)GEN_TOP(*in_esi)) = 0x5c;
      *in_esi = *in_esi + 1;
      if (piVar1 <= ((int *)GEN_TOP(*in_esi))) {
        F_00b9bef0(in_esi);
      }
      pcVar5 = ((char *)GEN_TOP(*in_esi));
      *pcVar5 = *pcVar3;
LAB_00c1934a: ;
      *in_esi = *in_esi + 1;
      break;
    case 0xd: ;
      pcVar5 = ((char *)GEN_TOP(F_00b9bf30(in_esi,&REFG(undefined, 0x1348780),2)));
    }
    pcVar3 = pcVar3 + 1;
    iVar2 = (*(int *)(gen_frame + 0x0));
  } while( true );
}

/* ref: Global::LuaStrScanFormat */
GEN_OWN GEN_NOFRAME uint F_00c193f0(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc193f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  
  bVar1 = *param_2;
  pbVar5 = param_2;
  while ((bVar1 != 0 && (uVar3 = F_00c51da0(((char *)REFP(0x134878c)),*pbVar5), uVar3 != 0))) {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  if (5 < (uint)((int)pbVar5 - (int)param_2)) {
    F_00b9bbd0(in_eax,((char *)REFP(0x1348794)));
  }
  iVar4 = F_00c48637((uint)*pbVar5);
  if (iVar4 != 0) {
    pbVar5 = pbVar5 + 1;
  }
  iVar4 = F_00c48637((uint)*pbVar5);
  if (iVar4 != 0) {
    pbVar5 = pbVar5 + 1;
  }
  if (*pbVar5 == 0x2e) {
    iVar4 = F_00c48637((uint)pbVar5[1]);
    pbVar2 = pbVar5 + 1;
    if (iVar4 != 0) {
      pbVar2 = pbVar5 + 2;
    }
    pbVar5 = pbVar2;
    iVar4 = F_00c48637((uint)*pbVar5);
    if (iVar4 != 0) {
      pbVar5 = pbVar5 + 1;
    }
  }
  iVar4 = F_00c48637((uint)*pbVar5);
  if (iVar4 != 0) {
    F_00b9bbd0(in_eax,((char *)REFP(0x13487b4)));
  }
  *param_3 = 0x25;
  F_00c52620(param_3 + 1,(char *)param_2,(gen_size32)(pbVar5 + (1 - (int)param_2)));
  (param_3 + 1)[(int)(pbVar5 + (1 - (int)param_2))] = '\0';
  return (uint)pbVar5;
}

/* ref: Global::LuaStrFormat */
GEN_OWN_GS GEN_NOFRAME uint F_00c19500(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc19500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x43c, 4, 0);
  char cVar1;
  longlong lVar2;
  char * pcVar3;
  int iVar4;
  char * pcVar5;
  uint uVar6;
  uint uVar7;
  int in_ecx;
  char * pcVar8;
  float fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x438)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  in_ecx = 1;
  pcVar3 = ((char *)GEN_TOP(F_00b9c820(param_1,1,&(*(int *)(gen_frame + 0x14)))));
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3 + (*(int *)(gen_frame + 0x14));
  F_00b9c080(param_1,((char * PTR32 *)(gen_frame + 0x18)));
  if (pcVar3 < pcVar3 + (*(int *)(gen_frame + 0x14))) {
    do {
      if (*pcVar3 != '%') {
        if (((char *)(gen_frame + 0x224)) <= ((char * PTR32 *)(gen_frame + 0x18))[0]) {
          F_00b9bef0(((char * PTR32 *)(gen_frame + 0x18)));
        }
        *((char * PTR32 *)(gen_frame + 0x18))[0] = *pcVar3;
        ((char * PTR32 *)(gen_frame + 0x18))[0] = ((char * PTR32 *)(gen_frame + 0x18))[0] + 1;
        pcVar3 = pcVar3 + 1;
        goto LAB_00c19794;
      }
      pcVar8 = pcVar3 + 1;
      if (*pcVar8 == '%') {
        if (((char *)(gen_frame + 0x224)) <= ((char * PTR32 *)(gen_frame + 0x18))[0]) {
          F_00b9bef0(((char * PTR32 *)(gen_frame + 0x18)));
        }
        *((char * PTR32 *)(gen_frame + 0x18))[0] = *pcVar8;
        ((char * PTR32 *)(gen_frame + 0x18))[0] = ((char * PTR32 *)(gen_frame + 0x18))[0] + 1;
        pcVar3 = pcVar3 + 2;
        goto LAB_00c19794;
      }
      in_ecx = in_ecx + 1;
      pcVar8 = ((char *)GEN_TOP(F_00c193f0(param_1,pcVar8,((char *)(gen_frame + 0x224)))));
      pcVar3 = pcVar8 + 1;
      switch((unsigned int)(uintptr_t)(*pcVar8)) {
      case 'E': ;
      case 'G': ;
      case 'e': ;
      case 'f': ;
      case 'g': ;
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        F_00c4720f(((char *)(gen_frame + 0x238)),((char *)(gen_frame + 0x224)),GEN_LO32((undefined8)gen_d2bits((double)fVar9)),GEN_HI32((undefined8)gen_d2bits((double)fVar9)));
        break;
      default: ;
        uVar7 = F_00b9bbd0(param_1,((char *)REFP(0x13487e8)),(int)*pcVar8);
        return uVar7;
      case 'X': ;
      case 'o': ;
      case 'u': ;
      case 'x': ;
        pcVar5 = ((char *)(gen_frame + 0x224));
        pcVar8 = ((char *)(gen_frame + 0x224)) + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        cVar1 = pcVar5[(int)((char * PTR32 *)(gen_frame + 0x18)) + (0x20b - (int)pcVar8)];
        *((undefined2 *)GEN_TOP((pcVar5 + (int)((char * PTR32 *)(gen_frame + 0x18)) + (0x20b - (int)pcVar8)))) = REFG(undefined2, 0x13487e4);
        pcVar5[(int)(((char *)(gen_frame + 0x224)) - (int)pcVar8)] = cVar1;
        pcVar5[(int)(((char *)(gen_frame + 0x224)) + (1 - (int)pcVar8))] = '\0';
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        (*(ushort *)(gen_frame + 0x2)) = gen_x87_cw;
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = gen_x87_cw | 0xc00;
        (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined2)(gen_x87_cw | 0xc00);
        gen_set_x87_cw((unsigned short)(undefined2)(*(longlong *)(gen_frame + 0xc)));
        (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((float10)fVar9);
        lVar2 = (*(longlong *)(gen_frame + 0xc));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (uint)(longlong)TRUNC((float10)fVar9);
        gen_set_x87_cw((unsigned short)gen_x87_cw);
        iVar4 = (uint)(*(longlong *)(gen_frame + 0xc));
        gen_set_x87_cw((unsigned short)((*(ushort *)(gen_frame + 0x2))));
        (*(longlong *)(gen_frame + 0xc)) = lVar2;
        goto LAB_00c195f6;
      case 'c': ;
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        iVar4 = (int)fVar9;
LAB_00c195f6: ;
        F_00c4720f(((char *)(gen_frame + 0x238)),((char *)(gen_frame + 0x224)),iVar4);
        break;
      case 'd': ;
      case 'i': ;
        pcVar5 = ((char *)(gen_frame + 0x224));
        pcVar8 = ((char *)(gen_frame + 0x224)) + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        cVar1 = pcVar5[(int)((char * PTR32 *)(gen_frame + 0x18)) + (0x20b - (int)pcVar8)];
        *((undefined2 *)GEN_TOP((pcVar5 + (int)((char * PTR32 *)(gen_frame + 0x18)) + (0x20b - (int)pcVar8)))) = REFG(undefined2, 0x13487e4);
        pcVar5[(int)(((char *)(gen_frame + 0x224)) - (int)pcVar8)] = cVar1;
        pcVar5[(int)(((char *)(gen_frame + 0x224)) + (1 - (int)pcVar8))] = '\0';
        fVar9 = F_00b9c8e0(param_1,in_ecx);
        F_00c4720f(((char *)(gen_frame + 0x238)),((char *)(gen_frame + 0x224)),(int)fVar9);
        break;
      case 'q': ;
        F_00c19290(in_ecx,param_1,((char * PTR32 *)(gen_frame + 0x18)));
        goto LAB_00c19794;
      case 's': ;
        uVar7 = F_00b9c820(param_1,in_ecx,&(*(uint *)(gen_frame + 0x4)));
        uVar6 = F_00c51da0(((char *)(gen_frame + 0x224)),0x2e);
        if ((uVar6 != 0) || ((*(uint *)(gen_frame + 0x4)) < 100)) {
          F_00c4720f(((char *)(gen_frame + 0x238)),((char *)(gen_frame + 0x224)),uVar7);
          break;
        }
        F_00b9a910(param_1,in_ecx);
        F_00b9c000(((char * PTR32 *)(gen_frame + 0x18)));
        goto LAB_00c19794;
      }
      pcVar8 = ((char *)(gen_frame + 0x238));
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      F_00b9bf30(((char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x238)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x238)) + 1));
LAB_00c19794: ;
    } while (pcVar3 < (*(char * PTR32 *)(gen_frame + 0x8)));
  }
  F_00b9bfc0(((char * PTR32 *)(gen_frame + 0x18)));
  return 1;
}

/* ref: Global::LuaStrCreateMetatable */
GEN_OWN GEN_NOFRAME uint F_00c19830(GEN_P(undefined4 in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc19830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9b150(in_esi,0,1);
  F_00b9ae20(in_esi,&REFG(undefined, 0x14c5bf3),0);
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b3d0(in_esi,0xfffffffe);
  F_00b9a760(in_esi,0xfffffffe);
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1348878)));
  uVar1 = F_00b9a760(in_esi,0xfffffffe);
  return uVar1;
}

/* ref: Global::LuaOpenString */
GEN_OWN GEN_NOFRAME uint F_00c19890(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc19890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9cd70(param_1,((char *)REFP(0x1348880)),&REFG(undefined * PTR32, 0x110ea68));
  F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348888)));
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348890)));
  F_00c19830(param_1);
  return 1;
}

/* ref: Global::LuaOsExecute */
GEN_OWN GEN_NOFRAME uint F_00c19980(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc19980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  char * _Command;
  int iVar1;
  
  _Command = ((char *)GEN_TOP(F_00b9c880(param_1,1,0,0)));
  iVar1 = F_00c5306f(_Command);
  F_00b9ae00(param_1,iVar1);
  return 1;
}

/* ref: Global::LuaOsRemove */
GEN_OWN GEN_NOFRAME uint F_00c199b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc199b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = F_00b9c820(param_1,1,0);
  uVar3 = F_00c5314c(uVar2);
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (uVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar3 = F_00c51e86(iVar1);
  F_00b9af00(param_1,((char *)REFP(0x1348898)),uVar2,uVar3);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: Global::LuaOsRename */
GEN_OWN GEN_NOFRAME uint F_00c19a30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc19a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = F_00b9c820(param_1,1,0);
  uVar3 = F_00b9c820(param_1,2,0);
  uVar3 = F_00c53187(uVar2,uVar3);
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (uVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar3 = F_00c51e86(iVar1);
  F_00b9af00(param_1,((char *)REFP(0x1348898)),uVar2,uVar3);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: Global::LuaOsTmpname */
GEN_OWN_GS GEN_NOFRAME uint F_00c19ab0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc19ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x14, 12, 0);
  char * pcVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)((char *)(gen_frame + 0x0)));
  pcVar1 = F_00c5347a(((char *)(gen_frame + 0x0)));
  if (pcVar1 == ((char *)GEN_TOP(0x0))) {
    uVar2 = F_00b9bbd0(param_1,((char *)REFP(0x13488a0)));
    return uVar2;
  }
  F_00b9ae60(param_1,((char *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Global::LuaOsGetenv */
GEN_OWN GEN_NOFRAME uint F_00c19b20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc19b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(F_00b9c820(param_1,1,0)));
  pcVar1 = F_00c4b5a4(pcVar1);
  F_00b9ae60(param_1,pcVar1);
  return 1;
}

/* ref: FUN_00c19b50 */
GEN_OWN GEN_NOFRAME uint F_00c19b50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc19b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_long cVar1;
  
  cVar1 = F_00c536c3();
  F_00b9ade0(param_1,(double)cVar1 / *(double *)&REFG(undefined, 0x10912a8));
  return 1;
}

/* ref: FUN_00c19c70 */
GEN_OWN_GS GEN_NOFRAME uint F_00c19c70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc19c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x2e4, 12, 0);
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  undefined * _Tm;
  byte * pbVar4;
  int iVar5;
  gen_size32 sVar6;
  byte * pbVar7;
  bool bVar8;
  longlong lVar9;
  float fVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2e0)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(char *)(gen_frame + 0x0)));
  pbVar2 = ((byte *)GEN_TOP(F_00b9c880(param_1,1,&REFG(undefined, 0x13488ec),0)));
  uVar3 = F_00b9a940(param_1,2);
  if ((int)uVar3 < 1) {
    lVar9 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  }
  else {
    fVar10 = F_00b9c8e0(param_1,2);
    lVar9 = (longlong)fVar10;
  }
  (*(longlong *)(gen_frame + 0x4)) = lVar9;
  if (*pbVar2 == 0x21) {
    _Tm = F_00c5301c(&(*(longlong *)(gen_frame + 0x4)));
    pbVar2 = pbVar2 + 1;
  }
  else {
    _Tm = F_00c4f752((int *)&(*(longlong *)(gen_frame + 0x4)));
  }
  if (_Tm == ((undefined *)GEN_TOP(0x0))) {
    F_00b9adc0(param_1);
  }
  else {
    pbVar7 = &REFG(undefined1, 0x13488f0);
    pbVar4 = pbVar2;
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00c19d31: ;
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00c19d36;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00c19d31;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00c19d36: ;
    if (iVar5 == 0) {
      F_00b9b150(param_1,0,9);
      F_00b9ae00(param_1,(*(int *)((char *)(_Tm))));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13488f4));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 4))));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13488f8));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 8))));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x13488fc));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 12))));
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348904));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 16))) + 1);
      F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348908)));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 20))) + 0x76c);
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348910));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 24))) + 1);
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348918));
      F_00b9ae00(param_1,(*(int *)(((char *)(_Tm) + 28))) + 1);
      F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1348920));
      if (-1 < (*(int *)(((char *)(_Tm) + 32)))) {
        F_00b9afd0(param_1,(*(int *)(((char *)(_Tm) + 32))));
        F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348928)));
      }
    }
    else {
      (*(char *)(gen_frame + 0x0)) = '%';
      (*(undefined1 *)(gen_frame + 0x2)) = 0;
      F_00b9c080(param_1,((byte * PTR32 *)(gen_frame + 0xc)));
      bVar1 = *pbVar2;
      while (bVar1 != 0) {
        if ((bVar1 == 0x25) && (pbVar2[1] != 0)) {
          pbVar4 = pbVar2 + 1;
          pbVar2 = pbVar2 + 1;
          (*(byte *)(gen_frame + 0x1)) = *pbVar4;
          sVar6 = F_00c5071b((char *)((byte *)(gen_frame + 0x218)),200,&(*(char *)(gen_frame + 0x0)),_Tm);
          F_00b9bf30(((byte * PTR32 *)(gen_frame + 0xc)),((byte *)(gen_frame + 0x218)),sVar6);
        }
        else {
          if (((byte *)(gen_frame + 0x218)) <= ((byte * PTR32 *)(gen_frame + 0xc))[0]) {
            F_00b9bef0(((byte * PTR32 *)(gen_frame + 0xc)));
          }
          *((byte * PTR32 *)(gen_frame + 0xc))[0] = *pbVar2;
          ((byte * PTR32 *)(gen_frame + 0xc))[0] = ((byte * PTR32 *)(gen_frame + 0xc))[0] + 1;
        }
        pbVar4 = pbVar2 + 1;
        pbVar2 = pbVar2 + 1;
        bVar1 = *pbVar4;
      }
      F_00b9bfc0(((byte * PTR32 *)(gen_frame + 0xc)));
    }
  }
  return 1;
}

/* ref: FUN_00c19ef0 */
GEN_OWN GEN_NOFRAME uint F_00c19ef0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc19ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x24, 12);
  uint uVar1;
  longlong lVar2;
  
  uVar1 = F_00b9a940(param_1,1);
  if ((int)uVar1 < 1) {
    lVar2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  }
  else {
    F_00b9c7a0(param_1,1,5);
    F_00b9a760(param_1,1);
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348930));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
    }
    F_00b9a760(param_1,0xfffffffe);
    (*(int *)((char *)((undefined *)(gen_frame + 0x0)))) = uVar1;
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348934));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
    }
    F_00b9a760(param_1,0xfffffffe);
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = uVar1;
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348938));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = 0xc;
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
    }
    F_00b9a760(param_1,0xfffffffe);
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = uVar1;
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x1348940));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13488c8)),&REFG(undefined, 0x1348940));
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
      F_00b9a760(param_1,0xfffffffe);
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 12))) = uVar1;
    F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348944)));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13488c8)),
                                 ((char *)REFP(0x1348944)));
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
      F_00b9a760(param_1,0xfffffffe);
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 16))) = uVar1 - 1;
    F_00b9b070(param_1,0xffffffff,&REFG(undefined, 0x134894c));
    uVar1 = F_00b9a9b0(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13488c8)),&REFG(undefined, 0x134894c));
    }
    else {
      uVar1 = F_00b9ab70(param_1,0xffffffff);
      F_00b9a760(param_1,0xfffffffe);
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 20))) = uVar1 - 0x76c;
    F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348954)));
    uVar1 = F_00b9a940(param_1,0xffffffff);
    if (uVar1 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = F_00b9abc0(param_1,0xffffffff);
    }
    F_00b9a760(param_1,0xfffffffe);
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 32))) = uVar1;
    lVar2 = F_00c4c109(((undefined *)(gen_frame + 0x0)));
  }
  if (lVar2 == -1) {
    F_00b9adc0(param_1);
    return 1;
  }
  F_00b9ade0(param_1,(double)lVar2);
  return 1;
}

/* ref: FUN_00c1a150 */
GEN_OWN GEN_NOFRAME uint F_00c1a150(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar1;
  float fVar2;
  double dVar3;
  
  fVar1 = F_00b9c960(param_1,2,0.0);
  fVar2 = F_00b9c8e0(param_1,1);
  dVar3 = F_00c52da0((longlong)fVar2,(longlong)fVar1);
  F_00b9ade0(param_1,dVar3);
  return 1;
}

/* ref: Global::LuaOsSetlocale */
GEN_OWN GEN_NOFRAME uint F_00c1a1a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  char * pcVar1;
  uint uVar2;
  
  pcVar1 = ((char *)GEN_TOP(F_00b9c880(param_1,1,0,0)));
  uVar2 = F_00b9ccc0(param_1,2,&REFG(undefined, 0x134898c),&REFG(undefined * PTR32, 0x110eb00));
  pcVar1 = F_00c4a76c(*(int *)(&REFG(undefined, 0x110eae8) + uVar2 * 4),pcVar1);
  F_00b9ae60(param_1,pcVar1);
  return 1;
}

/* ref: FUN_00c1a1f0 */
GEN_OWN GEN_NOFRAME unsigned int F_00c1a1f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint _Code;
  
  _Code = F_00b9ca20(param_1,1,0);
                    
  F_00c47c5b(_Code);
}

/* ref: Global::LuaOpenOs */
GEN_OWN GEN_NOFRAME uint F_00c1a210(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9cd70(param_1,&REFG(undefined, 0x13489f0),&REFG(undefined * PTR32, 0x110eb20));
  return 1;
}

/* ref: Global::LuaIoFileError */
GEN_OWN GEN_NOFRAME uint F_00c1a2b0(GEN_P(undefined4 in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1a2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = F_00c51f85();
  uVar2 = F_00c51e86(*piVar1);
  F_00b9af00(in_esi,((char *)REFP(0x1348a10)),param_3,uVar2);
  uVar2 = F_00b9abf0(in_esi,0xffffffff,0);
  uVar2 = F_00b9c590(in_esi,param_2,uVar2);
  return uVar2;
}

/* ref: FUN_00c1a2f0 */
GEN_OWN GEN_NOFRAME uint F_00c1a2f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  F_00b9c7f0(param_1,1);
  piVar1 = ((int *)GEN_TOP(F_00b9ad00(param_1,1)));
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a18)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = F_00b9b190(param_1,1);
    if (uVar2 != 0) {
      uVar2 = F_00b9aa50(param_1,0xfffffffe,0xffffffff);
      if (uVar2 != 0) {
        if (*piVar1 == 0) {
          F_00b9ae20(param_1,((char *)REFP(0x1348a20)),0xb);
          return 1;
        }
        F_00b9ae20(param_1,&REFG(undefined, 0x1348a2c),4);
        return 1;
      }
    }
  }
  F_00b9adc0(param_1);
  return 1;
}

/* ref: Global::LuaIoNoClose */
GEN_OWN GEN_NOFRAME uint F_00c1a3f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9adc0(param_1);
  F_00b9ae20(param_1,((char *)REFP(0x1348a64)),0x1a);
  return 2;
}

/* ref: Global::LuaIoPclose */
GEN_OWN GEN_NOFRAME uint F_00c1a420(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a80)))));
  iVar3 = F_00c53c51(((undefined *)GEN_TOP(*puVar2)));
  *puVar2 = 0;
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (iVar3 != -1) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: Global::LuaIoFclose */
GEN_OWN GEN_NOFRAME uint F_00c1a4a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a88)))));
  iVar3 = F_00c49312(((undefined *)GEN_TOP(*puVar2)));
  *puVar2 = 0;
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (iVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c1a520 */
GEN_OWN GEN_NOFRAME uint F_00c1a520(GEN_P(undefined4 in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  code * pcVar1;
  uint uVar2;
  
  F_00b9b1f0(in_esi,1);
  F_00b9b070(in_esi,0xffffffff,((char *)REFP(0x1348a90)));
  pcVar1 = ((code *)GEN_TOP(F_00b9acd0(in_esi,0xffffffff)));
  uVar2 = (*pcVar1)(in_esi);
  return uVar2;
}

/* ref: FUN_00c1a550 */
GEN_OWN GEN_NOFRAME uint F_00c1a550(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  int * piVar2;
  code * pcVar3;
  
  uVar1 = F_00b9a940(param_1,1);
  if (uVar1 == 0xffffffff) {
    F_00b9b110(param_1,0xffffd8ef,2);
  }
  piVar2 = ((int *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a34)))));
  if (*piVar2 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  F_00b9b1f0(param_1,1);
  F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348a90)));
  pcVar3 = ((code *)GEN_TOP(F_00b9acd0(param_1,0xffffffff)));
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}

/* ref: FUN_00c1a5d0 */
GEN_OWN GEN_NOFRAME uint F_00c1a5d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  code * pcVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a98)))));
  if (*piVar1 != 0) {
    F_00b9b1f0(param_1,1);
    F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348a90)));
    pcVar2 = ((code *)GEN_TOP(F_00b9acd0(param_1,0xffffffff)));
    (*pcVar2)(param_1);
  }
  return 0;
}

/* ref: Global::LuaIoToString */
GEN_OWN GEN_NOFRAME uint F_00c1a620(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348aa0)))));
  if (*piVar1 == 0) {
    F_00b9ae20(param_1,((char *)REFP(0x1348aa8)),0xd);
    return 1;
  }
  F_00b9af00(param_1,((char *)REFP(0x1348ab8)),*piVar1);
  return 1;
}

/* ref: Global::LuaIoOpen */
GEN_OWN GEN_NOFRAME uint F_00c1a670(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  char * _Filename;
  char * _Mode;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  uint uVar5;
  
  _Filename = ((char *)GEN_TOP(F_00b9c820(param_1,1,0)));
  _Mode = ((char *)GEN_TOP(F_00b9c880(param_1,2,&REFG(undefined, 0x1348ac4),0)));
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9b950(param_1,4)));
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  pFVar3 = F_00c495d8(_Filename,_Mode);
  *puVar2 = pFVar3;
  if (pFVar3 != ((undefined *)GEN_TOP(0x0))) {
    return 1;
  }
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  if (_Filename != ((char *)GEN_TOP(0x0))) {
    F_00b9af00(param_1,((char *)REFP(0x1348a04)),_Filename);
    F_00b9ae00(param_1,iVar1);
    return 3;
  }
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: Global::LuaIoPopen */
GEN_OWN GEN_NOFRAME uint F_00c1a740(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  char * _Command;
  char * _Mode;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  uint uVar5;
  
  _Command = ((char *)GEN_TOP(F_00b9c820(param_1,1,0)));
  _Mode = ((char *)GEN_TOP(F_00b9c880(param_1,2,&REFG(undefined, 0x1348ac8),0)));
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9b950(param_1,4)));
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  pFVar3 = F_00c53789(_Command,_Mode);
  *puVar2 = pFVar3;
  if (pFVar3 != ((undefined *)GEN_TOP(0x0))) {
    return 1;
  }
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  if (_Command != ((char *)GEN_TOP(0x0))) {
    F_00b9af00(param_1,((char *)REFP(0x1348a04)),_Command);
    F_00b9ae00(param_1,iVar1);
    return 3;
  }
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: Global::LuaIoTmpfile */
GEN_OWN GEN_NOFRAME uint F_00c1a810(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  uint uVar5;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9b950(param_1,4)));
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  pFVar3 = F_00c53694();
  *puVar2 = pFVar3;
  if (pFVar3 == ((undefined *)GEN_TOP(0x0))) {
    piVar4 = F_00c51f85();
    iVar1 = *piVar4;
    F_00b9adc0(param_1);
    uVar5 = F_00c51e86(iVar1);
    F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
    F_00b9ae00(param_1,iVar1);
    return 3;
  }
  return 1;
}

/* ref: Global::LuaIoGetIoFile */
GEN_OWN GEN_NOFRAME uint F_00c1a8d0(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1a8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  uint uVar1;
  char * _Filename;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  
  uVar1 = F_00b9a940(in_eax,1);
  if (0 < (int)uVar1) {
    _Filename = ((char *)GEN_TOP(F_00b9abf0(in_eax,1,0)));
    if (_Filename == ((char *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00b9c710(in_eax,1,((char *)REFP(0x1348a34)))));
      if (*piVar4 == 0) {
        F_00b9bbd0(in_eax,((char *)REFP(0x1348a3c)));
      }
      F_00b9a910(in_eax,1);
    }
    else {
      puVar2 = ((undefined4 *)GEN_TOP(F_00b9b950(in_eax,4)));
      *puVar2 = 0;
      F_00b9b070(in_eax,0xffffd8f0,((char *)REFP(0x1348a5c)));
      F_00b9b3d0(in_eax,0xfffffffe);
      pFVar3 = F_00c495d8(_Filename,param_3);
      *puVar2 = pFVar3;
      if (pFVar3 == ((undefined *)GEN_TOP(0x0))) {
        F_00c1a2b0(in_eax,1,_Filename);
      }
    }
    F_00b9b360(in_eax,0xffffd8ef,param_2);
  }
  F_00b9b110(in_eax,0xffffd8ef,param_2);
  return 1;
}

/* ref: Global::LuaIoInput */
GEN_OWN GEN_NOFRAME uint F_00c1a9a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c1a8d0(param_1,1,&REFG(undefined, 0x1348ae8));
  return uVar1;
}

/* ref: Global::LuaIoOutput */
GEN_OWN GEN_NOFRAME uint F_00c1a9c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1a9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c1a8d0(param_1,2,&REFG(undefined, 0x1348aec));
  return uVar1;
}

/* ref: FUN_00c1a9e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1a9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc1a9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x8, 8);
  int iVar1;
  
  iVar1 = F_00c53e16(this,&REFG(undefined, 0x1348af4),&(*(double *)(gen_frame + 0x0)));
  if (iVar1 == 1) {
    F_00b9ade0(param_1,(*(double *)(gen_frame + 0x0)));
    return 1;
  }
  return 0;
}

/* ref: Global::LuaIoReadLine */
GEN_OWN_GS GEN_NOFRAME uint F_00c1aa50(GEN_P(undefined * in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1aa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * in_edi = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x210, 0, 0);
  char cVar1;
  char * _Buf;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((int *)(gen_frame + 0x0)));
  F_00b9c080(param_2,((int *)(gen_frame + 0x0)));
  _Buf = ((char *)GEN_TOP(F_00b9bef0(((int *)(gen_frame + 0x0)))));
  pcVar2 = F_00c5281f(_Buf,0x200,in_edi);
  while( true ) {
    if (pcVar2 == ((char *)GEN_TOP(0x0))) {
      F_00b9bfc0(((int *)(gen_frame + 0x0)));
      uVar4 = F_00b9ac60(param_2,0xffffffff);
      return (uint)(uVar4 != 0);
    }
    pcVar2 = _Buf;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(_Buf + 1);
    if ((iVar3 != 0) && (_Buf[iVar3 - 1] == '\n')) break;
    ((int *)(gen_frame + 0x0))[0] = ((int *)(gen_frame + 0x0))[0] + iVar3;
    _Buf = ((char *)GEN_TOP(F_00b9bef0(((int *)(gen_frame + 0x0)))));
    pcVar2 = F_00c5281f(_Buf,0x200,in_edi);
  }
  ((int *)(gen_frame + 0x0))[0] = ((int *)(gen_frame + 0x0))[0] - 1 + iVar3;
  F_00b9bfc0(((int *)(gen_frame + 0x0)));
  return 1;
}

/* ref: Global::LuaIoReadChars */
GEN_OWN_GS GEN_NOFRAME uint GEN_THISCALL F_00c1ab40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc1ab40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x210, 0, 0);
  undefined * pvVar1;
  uint uVar2;
  undefined * _Count;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((int *)(gen_frame + 0x0)));
  F_00b9c080(param_1,((int *)(gen_frame + 0x0)));
  _Count = ((undefined *)GEN_TOP(0x200));
  do {
    pvVar1 = ((undefined *)GEN_TOP(F_00b9bef0(((int *)(gen_frame + 0x0)))));
    if (this < _Count) {
      _Count = this;
    }
    pvVar1 = ((undefined *)GEN_TOP(F_00c48f5e(pvVar1,1,(gen_size32)_Count,param_2)));
    ((int *)(gen_frame + 0x0))[0] = ((int *)(gen_frame + 0x0))[0] + (int)pvVar1;
    this = ((undefined *)GEN_TOP(((int)this - (int)pvVar1)));
  } while ((this != ((undefined *)GEN_TOP(0x0))) && (pvVar1 == _Count));
  F_00b9bfc0(((int *)(gen_frame + 0x0)));
  if ((this != ((undefined *)GEN_TOP(0x0))) && (uVar2 = F_00b9ac60(param_1,0xffffffff), uVar2 == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c1abf0 */
GEN_OWN GEN_NOFRAME uint F_00c1abf0(GEN_P(undefined * in_eax, unsigned int gen_a0), GEN_P(undefined4 in_esi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1abf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * in_eax = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined * this;
  char * pcVar5;
  int iVar6;
  bool bVar7;
  int local_4;
  
  uVar2 = F_00b9a750(in_esi);
  local_4 = uVar2 - 1;
  F_00c53f3c(in_eax);
  if (local_4 == 0) {
    uVar2 = F_00c1aa50(in_eax,in_esi);
    iVar6 = param_3 + 1;
  }
  else {
    F_00b9bc60(in_esi,uVar2 + 0x13,((char *)REFP(0x1348af8)));
    uVar2 = 1;
    iVar6 = param_3;
    do {
      local_4 = local_4 - 1;
      bVar7 = uVar2 == 0;
      uVar2 = 0;
      if (bVar7) break;
      uVar2 = F_00b9a940(in_esi,iVar6);
      if (uVar2 == 3) {
        this = ((undefined *)GEN_TOP(F_00b9ab70(in_esi,iVar6)));
        if (this == ((undefined *)GEN_TOP(0x0))) {
          iVar3 = F_00c48be3(in_eax);
          F_00c50cf0(iVar3,in_eax);
          F_00b9ae20(in_esi,0,0);
          uVar2 = (uint)(iVar3 != -1);
        }
        else {
          uVar2 = F_00c1ab40(this GEN_EDX_ARG,in_esi,in_eax);
        }
      }
      else {
        pcVar5 = ((char *)GEN_TOP(F_00b9abf0(in_esi,iVar6,0)));
        if ((pcVar5 == ((char *)GEN_TOP(0x0))) || (*pcVar5 != '*')) {
          F_00b9c590(in_esi,iVar6,((char *)REFP(0x1348b0c)));
        }
        cVar1 = pcVar5[1];
        if (cVar1 == 'a') {
          F_00c1ab40(((undefined *)GEN_TOP(0xffffffff)) GEN_EDX_ARG,in_esi,in_eax);
          uVar2 = 1;
        }
        else if (cVar1 == 'l') {
          uVar2 = F_00c1aa50(in_eax,in_esi);
        }
        else {
          if (cVar1 != 'n') {
            uVar2 = F_00b9c590(in_esi,iVar6,((char *)REFP(0x1348b1c)));
            return uVar2;
          }
          uVar2 = F_00c1a9e0(in_eax GEN_EDX_ARG,in_esi);
        }
      }
      iVar6 = iVar6 + 1;
    } while (local_4 != 0);
  }
  iVar3 = F_00c48ac7(in_eax);
  if (iVar3 == 0) {
    if (uVar2 == 0) {
      F_00b9a760(in_esi,0xfffffffe);
      F_00b9adc0(in_esi);
    }
    return iVar6 - param_3;
  }
  piVar4 = F_00c51f85();
  iVar6 = *piVar4;
  F_00b9adc0(in_esi);
  uVar2 = F_00c51e86(iVar6);
  F_00b9af00(in_esi,&REFG(undefined, 0x1348a0c),uVar2);
  F_00b9ae00(in_esi,iVar6);
  return 3;
}

/* ref: FUN_00c1ad90 */
GEN_OWN GEN_NOFRAME uint F_00c1ad90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1ad90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int in_eax;
  int * piVar1;
  uint uVar2;
  
  F_00b9b110(param_1,0xffffd8ef,1);
  piVar1 = ((int *)GEN_TOP(F_00b9ad00(param_1,0xffffffff)));
  in_eax = *piVar1;
  if (in_eax == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348acc)),REFG(undefined * PTR32, 0x110eb80));
  }
  uVar2 = F_00c1abf0(in_eax,param_1,1);
  return uVar2;
}

/* ref: FUN_00c1ade0 */
GEN_OWN GEN_NOFRAME uint F_00c1ade0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1ade0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a34)))));
  if (*piVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  uVar2 = F_00c1abf0(*piVar1,param_1,2);
  return uVar2;
}

/* ref: Global::LuaIoLinesIterator */
GEN_OWN GEN_NOFRAME uint F_00c1ae20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1ae20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * _File;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00b9ad00(param_1,0xffffd8ed)));
  _File = ((undefined *)GEN_TOP(*puVar1));
  if (_File == ((undefined *)GEN_TOP(0x0))) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348b2c)));
  }
  uVar2 = F_00c1aa50(_File,param_1);
  iVar3 = F_00c48ac7(_File);
  if (iVar3 != 0) {
    piVar4 = F_00c51f85();
    uVar2 = F_00c51e86(*piVar4);
    uVar2 = F_00b9bbd0(param_1,&REFG(undefined, 0x1348b44),uVar2);
    return uVar2;
  }
  if (uVar2 != 0) {
    return 1;
  }
  uVar2 = F_00b9abc0(param_1,0xffffd8ec);
  if (uVar2 != 0) {
    F_00b9a760(param_1,0);
    F_00b9a910(param_1,0xffffd8ed);
    F_00c1a520(param_1);
  }
  return 0;
}

/* ref: Global::LuaIoWrite */
GEN_OWN GEN_FRAME uint F_00c1aec0(GEN_P(undefined4 in_edi, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1aec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  bool bVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined * _Str;
  gen_size32 sVar5;
  int iVar6;
  double dVar7;
  
  uVar2 = F_00b9a750(in_edi);
  iVar3 = uVar2 - 1;
  bVar1 = true;
  iVar6 = param_3;
  do {
    if (iVar3 == 0) {
      piVar4 = F_00c51f85();
      iVar3 = *piVar4;
      if (bVar1) {
        F_00b9afd0(in_edi,1);
        return 1;
      }
      F_00b9adc0(in_edi);
      uVar2 = F_00c51e86(iVar3);
      F_00b9af00(in_edi,&REFG(undefined, 0x1348a0c),uVar2);
      F_00b9ae00(in_edi,iVar3);
      return 3;
    }
    (*(int *)(gen_frame + 0x4)) = iVar3 - 1;
    uVar2 = F_00b9a940(in_edi,iVar6);
    if (uVar2 == 3) {
      if (bVar1) {
        dVar7 = F_00b9ab30(in_edi,iVar6);
        iVar3 = F_00c49386(param_2,((char *)REFP(0x1348b48)),GEN_LO32((undefined8)gen_d2bits(dVar7)),GEN_HI32((undefined8)gen_d2bits(dVar7)));
        if (0 < iVar3) goto LAB_00c1af76;
      }
LAB_00c1af1e: ;
      bVar1 = false;
    }
    else {
      _Str = ((undefined *)GEN_TOP(F_00b9c820(in_edi,iVar6,&(*(gen_size32 *)(gen_frame + 0x0)))));
      if ((!bVar1) || (sVar5 = F_00c4922b(_Str,1,(*(gen_size32 *)(gen_frame + 0x0)),param_2), sVar5 != (*(gen_size32 *)(gen_frame + 0x0))))
      goto LAB_00c1af1e;
LAB_00c1af76: ;
      bVar1 = true;
    }
    iVar6 = iVar6 + 1;
    iVar3 = (*(int *)(gen_frame + 0x4));
  } while( true );
}

/* ref: FUN_00c1afb0 */
GEN_OWN GEN_NOFRAME uint F_00c1afb0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1afb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  F_00b9b110(param_1,0xffffd8ef,2);
  piVar2 = ((int *)GEN_TOP(F_00b9ad00(param_1,0xffffffff)));
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348acc)),REFG(undefined * PTR32, 0x110eb84));
  }
  uVar3 = F_00c1aec0(param_1,iVar1,1);
  return uVar3;
}

/* ref: Global::LuaFileWrite */
GEN_OWN GEN_NOFRAME uint F_00c1b000(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a34)))));
  if (*piVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  uVar2 = F_00c1aec0(param_1,*piVar1,2);
  return uVar2;
}

/* ref: Global::LuaFileSeek */
GEN_OWN GEN_NOFRAME uint F_00c1b040(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * _File;
  int * piVar1;
  uint uVar2;
  uint _Offset;
  int iVar3;
  gen_long lVar4;
  
  piVar1 = ((int *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a34)))));
  if (*piVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  _File = ((undefined *)GEN_TOP(*piVar1));
  uVar2 = F_00b9ccc0(param_1,2,&REFG(undefined, 0x1348b5c),&REFG(undefined * PTR32, 0x110eb94));
  _Offset = F_00b9ca20(param_1,3,0);
  iVar3 = F_00c4bbff(_File,_Offset,*(int *)(&REFG(undefined, 0x110eb88) + uVar2 * 4));
  if (iVar3 != 0) {
    piVar1 = F_00c51f85();
    iVar3 = *piVar1;
    F_00b9adc0(param_1);
    uVar2 = F_00c51e86(iVar3);
    F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar2);
    F_00b9ae00(param_1,iVar3);
    return 3;
  }
  lVar4 = F_00c51bcf(_File);
  F_00b9ae00(param_1,lVar4);
  return 1;
}

/* ref: Global::LuaFileSetvbuf */
GEN_OWN GEN_NOFRAME uint F_00c1b0f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * _File;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint _Size;
  int iVar4;
  
  piVar2 = ((int *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a34)))));
  if (*piVar2 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  _File = ((undefined *)GEN_TOP(*piVar2));
  uVar3 = F_00b9ccc0(param_1,2,0,&REFG(undefined * PTR32, 0x110ebb0));
  _Size = F_00b9ca20(param_1,3,0x200);
  iVar4 = F_00c50f3f(_File,((char *)GEN_TOP(0x0)),*(int *)(&REFG(undefined, 0x110eba4) + uVar3 * 4),_Size);
  piVar2 = F_00c51f85();
  iVar1 = *piVar2;
  if (iVar4 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar3 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar3);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: Global::LuaIoFlush */
GEN_OWN GEN_NOFRAME uint F_00c1b1a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * _File;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  
  F_00b9b110(param_1,0xffffd8ef,2);
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9ad00(param_1,0xffffffff)));
  _File = ((undefined *)GEN_TOP(*puVar2));
  if (_File == ((undefined *)GEN_TOP(0x0))) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348acc)),REFG(undefined * PTR32, 0x110eb84));
  }
  iVar3 = F_00c50ee3(_File);
  piVar4 = F_00c51f85();
  iVar1 = *piVar4;
  if (iVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar5 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar5);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: Global::LuaFileFlush */
GEN_OWN GEN_NOFRAME uint F_00c1b240(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a34)))));
  if (*piVar2 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  iVar3 = F_00c50ee3(((undefined *)GEN_TOP(*piVar2)));
  piVar2 = F_00c51f85();
  iVar1 = *piVar2;
  if (iVar3 == 0) {
    F_00b9afd0(param_1,1);
    return 1;
  }
  F_00b9adc0(param_1);
  uVar4 = F_00c51e86(iVar1);
  F_00b9af00(param_1,&REFG(undefined, 0x1348a0c),uVar4);
  F_00b9ae00(param_1,iVar1);
  return 3;
}

/* ref: FUN_00c1b3c0 */
GEN_OWN GEN_NOFRAME uint F_00c1b3c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  F_00b9bc00(param_1,((char *)REFP(0x1348c18)));
  F_00b9a910(param_1,0xffffffff);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348c20)));
  F_00b9cd70(param_1,0,&REFG(undefined * PTR32, 0x110ec20));
  F_00b9b150(param_1,0,1);
  F_00b9af30(param_1,((code *)REFP(0xc1a4a0)),0);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348c28)));
  F_00b9a850(param_1,0xffffd8ef);
  F_00b9cd70(param_1,&REFG(undefined, 0x1348c30),&REFG(undefined * PTR32, 0x110ebc0));
  F_00b9b150(param_1,0,1);
  F_00b9af30(param_1,((code *)REFP(0xc1a3f0)),0);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348c28)));
  uVar1 = F_00c50860();
  puVar2 = ((uint *)GEN_TOP(F_00b9b950(param_1,4)));
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  *puVar2 = uVar1;
  F_00b9a910(param_1,0xffffffff);
  F_00b9b360(param_1,0xffffd8ef,1);
  F_00b9a910(param_1,0xfffffffe);
  F_00b9b480(param_1,0xfffffffe);
  F_00b9b290(param_1,0xfffffffd,((char *)REFP(0x1348c34)));
  uVar1 = F_00c50860();
  piVar3 = ((int *)GEN_TOP(F_00b9b950(param_1,4)));
  *piVar3 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  *piVar3 = uVar1 + 0x20;
  F_00b9a910(param_1,0xffffffff);
  F_00b9b360(param_1,0xffffd8ef,2);
  F_00b9a910(param_1,0xfffffffe);
  F_00b9b480(param_1,0xfffffffe);
  F_00b9b290(param_1,0xfffffffd,((char *)REFP(0x1348c3c)));
  uVar1 = F_00c50860();
  piVar3 = ((int *)GEN_TOP(F_00b9b950(param_1,4)));
  *piVar3 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  *piVar3 = uVar1 + 0x40;
  F_00b9a910(param_1,0xfffffffe);
  F_00b9b480(param_1,0xfffffffe);
  F_00b9b290(param_1,0xfffffffd,((char *)REFP(0x1348c44)));
  F_00b9a760(param_1,0xfffffffe);
  F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348c4c)));
  F_00b9b150(param_1,0,1);
  F_00b9af30(param_1,((code *)REFP(0xc1a420)),0);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348c28)));
  F_00b9b480(param_1,0xfffffffe);
  F_00b9a760(param_1,0xfffffffe);
  return 1;
}

/* ref: Global::LuaFileLines */
GEN_OWN GEN_NOFRAME uint F_00c1b610(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348a34)))));
  if (*piVar1 == 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348a3c)));
  }
  F_00b9a910(param_1,1);
  F_00b9afd0(param_1,0);
  F_00b9af30(param_1,((code *)REFP(0xc1ae20)),2);
  return 1;
}

/* ref: Global::LuaIoLines */
GEN_OWN GEN_NOFRAME uint F_00c1b660(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  char * _Filename;
  undefined4 * puVar2;
  undefined * pFVar3;
  int * piVar4;
  
  uVar1 = F_00b9a940(param_1,1);
  if ((int)uVar1 < 1) {
    F_00b9b110(param_1,0xffffd8ef,1);
    uVar1 = F_00c1b610(param_1);
    return uVar1;
  }
  _Filename = ((char *)GEN_TOP(F_00b9c820(param_1,1,0)));
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9b950(param_1,4)));
  *puVar2 = 0;
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348a5c)));
  F_00b9b3d0(param_1,0xfffffffe);
  pFVar3 = F_00c495d8(_Filename,&REFG(undefined, 0x1348af0));
  *puVar2 = pFVar3;
  if (pFVar3 == ((undefined *)GEN_TOP(0x0))) {
    piVar4 = F_00c51f85();
    uVar1 = F_00c51e86(*piVar4);
    F_00b9af00(param_1,((char *)REFP(0x1348a10)),_Filename,uVar1);
    uVar1 = F_00b9abf0(param_1,0xffffffff,0);
    F_00b9c590(param_1,1,uVar1);
  }
  uVar1 = F_00b9a750(param_1);
  F_00b9a910(param_1,uVar1);
  F_00b9afd0(param_1,1);
  F_00b9af30(param_1,((code *)REFP(0xc1ae20)),2);
  return 1;
}

/* ref: FUN_00c1b740 */
GEN_OWN GEN_NOFRAME uint F_00c1b740(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  F_00b9c7a0(param_1,2,6);
  iVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      F_00b9a910(param_1,2);
      F_00b9ae00(param_1,iVar3);
      F_00b9b110(param_1,1,iVar3);
      F_00b9b510(param_1,2,1);
      uVar2 = F_00b9a940(param_1,0xffffffff);
      if (uVar2 != 0) {
        return 1;
      }
      F_00b9a760(param_1,0xfffffffe);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00c1b7d0 */
GEN_OWN GEN_NOFRAME uint F_00c1b7d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7a0(param_1,1,5);
  F_00b9c7a0(param_1,2,6);
  F_00b9adc0(param_1);
  uVar1 = F_00b9b840(param_1,1);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    F_00b9a910(param_1,2);
    F_00b9a910(param_1,0xfffffffd);
    F_00b9a910(param_1,0xfffffffd);
    F_00b9b510(param_1,2,1);
    uVar1 = F_00b9a940(param_1,0xffffffff);
    if (uVar1 != 0) break;
    F_00b9a760(param_1,0xfffffffd);
    uVar1 = F_00b9b840(param_1,1);
  }
  return 1;
}

/* ref: FUN_00c1b860 */
GEN_OWN GEN_FRAME uint F_00c1b860(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  double dVar1;
  uint uVar2;
  double dVar3;
  double local_50;
  
  local_50 = 0.0;
  F_00b9c7a0(param_1,1,5);
  F_00b9adc0(param_1);
  uVar2 = F_00b9b840(param_1,1);
  dVar1 = local_50;
  while (uVar2 != 0) {
    F_00b9a760(param_1,0xfffffffe);
    uVar2 = F_00b9a940(param_1,0xffffffff);
    local_50 = dVar1;
    if ((uVar2 == 3) && (dVar3 = F_00b9ab30(param_1,0xffffffff), dVar1 < dVar3)) {
      local_50 = dVar3;
    }
    uVar2 = F_00b9b840(param_1,1);
    dVar1 = local_50;
  }
  F_00b9ade0(param_1,dVar1);
  return 1;
}

/* ref: FUN_00c1b900 */
GEN_OWN GEN_NOFRAME uint F_00c1b900(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  F_00b9ae00(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c1b930 */
GEN_OWN GEN_NOFRAME uint F_00c1b930(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9c7a0(param_1,1,5);
  F_00b9bbd0(param_1,((char *)REFP(0x1348c54)));
  F_00b9a910(param_1,1);
  return 1;
}

/* ref: FUN_00c1b960 */
GEN_OWN GEN_NOFRAME uint F_00c1b960(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1b960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  uVar1 = uVar1 + 1;
  uVar2 = F_00b9a750(param_1);
  if (uVar2 != 2) {
    if (uVar2 != 3) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x1348c68)));
      return uVar1;
    }
    uVar3 = F_00b9c9b0(param_1,2);
    uVar2 = uVar1;
    if ((int)uVar1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    uVar1 = uVar3;
    if ((int)uVar3 < (int)uVar2) {
      do {
        uVar1 = uVar2 - 1;
        F_00b9b110(param_1,1,uVar1);
        F_00b9b360(param_1,1,uVar2);
        uVar2 = uVar1;
      } while ((int)uVar3 < (int)uVar1);
      F_00b9b360(param_1,1,uVar3);
      return 0;
    }
  }
  F_00b9b360(param_1,1,uVar1);
  return 0;
}

/* ref: FUN_00c1ba00 */
GEN_OWN GEN_NOFRAME uint F_00c1ba00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1ba00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  uVar2 = F_00b9ca20(param_1,2,uVar1);
  if ((0 < (int)uVar2) && ((int)uVar2 <= (int)uVar1)) {
    F_00b9b110(param_1,1,uVar2);
    while ((int)uVar2 < (int)uVar1) {
      F_00b9b110(param_1,1,uVar2 + 1);
      F_00b9b360(param_1,1,uVar2);
      uVar2 = uVar2 + 1;
    }
    F_00b9adc0(param_1);
    F_00b9b360(param_1,1,uVar1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00c1bad0 */
GEN_OWN_GS GEN_NOFRAME uint F_00c1bad0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1bad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x214, 12, 0);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x210)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_00b9c880(param_1,2,&REFG(undefined, 0x14c5bf4),&(*(undefined4 *)(gen_frame + 0x0)));
  F_00b9c7a0(param_1,1,5);
  uVar2 = F_00b9ca20(param_1,3,1);
  uVar3 = F_00b9a940(param_1,4);
  if ((int)uVar3 < 1) {
    uVar3 = F_00b9ac60(param_1,1);
  }
  else {
    uVar3 = F_00b9c9b0(param_1,4);
  }
  F_00b9c080(param_1,((undefined1 *)(gen_frame + 0x4)));
  for (; (int)uVar2 < (int)uVar3; uVar2 = uVar2 + 1) {
    F_00b9b110(param_1,1,uVar2);
    uVar4 = F_00b9a9f0(param_1,0xffffffff);
    if (uVar4 == 0) {
      uVar4 = F_00b9a940(param_1,0xffffffff);
      uVar4 = F_00b9a960(param_1,uVar4);
      F_00b9bbd0(param_1,((char *)REFP(0x1348c90)),uVar4);
    }
    F_00b9c000(((undefined1 *)(gen_frame + 0x4)));
    F_00b9bf30(((undefined1 *)(gen_frame + 0x4)),uVar1,(*(undefined4 *)(gen_frame + 0x0)));
  }
  if (uVar2 == uVar3) {
    F_00b9b110(param_1,1,uVar2);
    uVar2 = F_00b9a9f0(param_1,0xffffffff);
    if (uVar2 == 0) {
      uVar2 = F_00b9a940(param_1,0xffffffff);
      uVar2 = F_00b9a960(param_1,uVar2);
      F_00b9bbd0(param_1,((char *)REFP(0x1348c90)),uVar2);
    }
    F_00b9c000(((undefined1 *)(gen_frame + 0x4)));
  }
  F_00b9bfc0(((undefined1 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_00c1bcc0 */
GEN_OWN GEN_NOFRAME unsigned int F_00c1bcc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1bcc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < param_3) {
    do {
      F_00b9b110(param_1,1,param_2);
      F_00b9b110(param_1,1,param_3);
      uVar1 = F_00b9a940(param_1,2);
      if (uVar1 == 0) {
        uVar1 = F_00b9aaf0(param_1,0xffffffff,0xfffffffe);
      }
      else {
        F_00b9a910(param_1,2);
        F_00b9a910(param_1,0xfffffffe);
        F_00b9a910(param_1,0xfffffffc);
        F_00b9b510(param_1,2,1);
        uVar1 = F_00b9abc0(param_1,0xffffffff);
        F_00b9a760(param_1,0xfffffffe);
      }
      if (uVar1 == 0) {
        F_00b9a760(param_1,0xfffffffd);
      }
      else {
        F_00b9b360(param_1,1,param_2);
        F_00b9b360(param_1,1,param_3);
      }
      if (param_3 - param_2 == 1) {
        return;
      }
      iVar5 = (param_2 + param_3) / 2;
      F_00b9b110(param_1,1,iVar5);
      F_00b9b110(param_1,1,param_2);
      uVar1 = F_00b9a940(param_1,2);
      if (uVar1 == 0) {
        uVar1 = F_00b9aaf0(param_1,0xfffffffe,0xffffffff);
      }
      else {
        F_00b9a910(param_1,2);
        F_00b9a910(param_1,0xfffffffd);
        F_00b9a910(param_1,0xfffffffd);
        F_00b9b510(param_1,2,1);
        uVar1 = F_00b9abc0(param_1,0xffffffff);
        F_00b9a760(param_1,0xfffffffe);
      }
      if (uVar1 == 0) {
        F_00b9a760(param_1,0xfffffffe);
        F_00b9b110(param_1,1,param_3);
        uVar1 = F_00b9a940(param_1,2);
        if (uVar1 == 0) {
          uVar1 = F_00b9aaf0(param_1,0xffffffff,0xfffffffe);
        }
        else {
          F_00b9a910(param_1,2);
          F_00b9a910(param_1,0xfffffffe);
          F_00b9a910(param_1,0xfffffffc);
          F_00b9b510(param_1,2,1);
          uVar1 = F_00b9abc0(param_1,0xffffffff);
          F_00b9a760(param_1,0xfffffffe);
        }
        if (uVar1 == 0) {
          F_00b9a760(param_1,0xfffffffd);
        }
        else {
          F_00b9b360(param_1,1,iVar5);
          F_00b9b360(param_1,1,param_3);
        }
      }
      else {
        F_00b9b360(param_1,1,iVar5);
        F_00b9b360(param_1,1,param_2);
      }
      if (param_3 - param_2 == 2) {
        return;
      }
      F_00b9b110(param_1,1,iVar5);
      F_00b9a910(param_1,0xffffffff);
      iVar2 = param_3 - 1;
      F_00b9b110(param_1,1,iVar2);
      F_00b9b360(param_1,1,iVar5);
      F_00b9b360(param_1,1,iVar2);
      iVar5 = param_2;
      iVar4 = iVar2;
      while( true ) {
        while( true ) {
          iVar3 = iVar5 + 1;
          F_00b9b110(param_1,1,iVar3);
          uVar1 = F_00b9a940(param_1,2);
          if (uVar1 == 0) {
            uVar1 = F_00b9aaf0(param_1,0xffffffff,0xfffffffe);
          }
          else {
            F_00b9a910(param_1,2);
            F_00b9a910(param_1,0xfffffffe);
            F_00b9a910(param_1,0xfffffffc);
            F_00b9b510(param_1,2,1);
            uVar1 = F_00b9abc0(param_1,0xffffffff);
            F_00b9a760(param_1,0xfffffffe);
          }
          if (uVar1 == 0) break;
          if (param_3 < iVar3) {
            F_00b9bbd0(param_1,((char *)REFP(0x1348cc8)));
          }
          F_00b9a760(param_1,0xfffffffe);
          iVar5 = iVar3;
        }
        while( true ) {
          iVar4 = iVar4 - 1;
          F_00b9b110(param_1,1,iVar4);
          uVar1 = F_00b9a940(param_1,2);
          if (uVar1 == 0) {
            uVar1 = F_00b9aaf0(param_1,0xfffffffd,0xffffffff);
          }
          else {
            F_00b9a910(param_1,2);
            F_00b9a910(param_1,0xfffffffc);
            F_00b9a910(param_1,0xfffffffd);
            F_00b9b510(param_1,2,1);
            uVar1 = F_00b9abc0(param_1,0xffffffff);
            F_00b9a760(param_1,0xfffffffe);
          }
          if (uVar1 == 0) break;
          if (iVar4 < param_2) {
            F_00b9bbd0(param_1,((char *)REFP(0x1348cec)));
          }
          F_00b9a760(param_1,0xfffffffe);
        }
        if (iVar4 < iVar3) break;
        F_00b9b360(param_1,1,iVar3);
        F_00b9b360(param_1,1,iVar4);
        iVar5 = iVar3;
      }
      F_00b9a760(param_1,0xfffffffc);
      F_00b9b110(param_1,1,iVar2);
      F_00b9b110(param_1,1,iVar3);
      F_00b9b360(param_1,1,iVar2);
      F_00b9b360(param_1,1,iVar3);
      if (iVar3 - param_2 < param_3 - iVar3) {
        iVar2 = param_2;
        iVar4 = iVar5;
        param_2 = iVar5 + 2;
      }
      else {
        iVar2 = iVar5 + 2;
        iVar4 = param_3;
        param_3 = iVar5;
      }
      F_00c1bcc0(param_1,iVar2,iVar4);
    } while (param_2 < param_3);
  }
  return;
}

/* ref: Global::LuaTableSort */
GEN_OWN GEN_NOFRAME uint F_00c1c0c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ac60(param_1,1);
  F_00b9bc60(param_1,0x28,&REFG(undefined, 0x14c5bf5));
  uVar2 = F_00b9a940(param_1,2);
  if (0 < (int)uVar2) {
    F_00b9c7a0(param_1,2,6);
  }
  F_00b9a760(param_1,2);
  F_00c1bcc0(param_1,1,uVar1);
  return 0;
}

/* ref: Global::LuaOpenTable */
GEN_OWN GEN_NOFRAME uint F_00c1c120(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9cd70(param_1,((char *)REFP(0x1348d5c)),&REFG(undefined * PTR32, 0x110ec70));
  return 1;
}

/* ref: Global::LuaSetProgDir */
GEN_OWN_GS GEN_NOFRAME uint F_00c1c140(GEN_P(undefined4 in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x10c, 4, 0);
  DWORD DVar1;
  char * pcVar2;
  uint uVar3;
  undefined * puVar4;
  CHAR * pCVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)((CHAR *)(gen_frame + 0x0)));
  pCVar5 = ((CHAR *)(gen_frame + 0x0));
  DVar1 = gen_imp_GetModuleFileNameA((HMODULE)0x0,((CHAR *)(gen_frame + 0x0)),0x105);
  if ((DVar1 != 0) && (DVar1 != 0x105)) {
    pcVar2 = F_00c51220(((CHAR *)(gen_frame + 0x0)),0x5c);
    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
      puVar4 = &REFG(undefined, 0x1348d84);
      *pcVar2 = '\0';
      uVar3 = F_00b9abf0(in_esi,0xffffffff,0);
      F_00b9cb70(in_esi,uVar3,puVar4,pCVar5);
      uVar3 = F_00b9a7b0(in_esi,0xfffffffe);
      return uVar3;
    }
  }
  uVar3 = F_00b9bbd0(in_esi,((char *)REFP(0x1348d64)));
  return uVar3;
}

/* ref: Global::LuaLoadlibPushError */
GEN_OWN_GS GEN_NOFRAME uint F_00c1c1f0(GEN_P(undefined4 in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x84, 12, 0);
  DWORD dwMessageId;
  DWORD DVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)((CHAR *)(gen_frame + 0x0)));
  dwMessageId = gen_imp_GetLastError();
  DVar1 = gen_imp_FormatMessageA(0x1200,(LPCVOID)0x0,dwMessageId,0,((CHAR *)(gen_frame + 0x0)),0x80,((undefined * PTR32 *)GEN_TOP(0x0)));
  if (DVar1 != 0) {
    uVar2 = F_00b9ae60(in_edi,((CHAR *)(gen_frame + 0x0)));
    return uVar2;
  }
  uVar2 = F_00b9af00(in_edi,((char *)REFP(0x1348d88)),dwMessageId);
  return uVar2;
}

/* ref: Global::LuaLoadlibRegister */
GEN_OWN GEN_NOFRAME uint F_00c1c2d0(GEN_P(undefined4 in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1c2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  
  F_00b9af00(in_esi,&REFG(undefined, 0x1348da8),((char *)REFP(0x1348d9c)),param_2);
  F_00b9b040(in_esi,0xffffd8f0);
  uVar1 = F_00b9a940(in_esi,0xffffffff);
  if (uVar1 != 0) {
    uVar1 = F_00b9ad00(in_esi,0xffffffff);
    return uVar1;
  }
  F_00b9a760(in_esi,0xfffffffe);
  puVar2 = ((undefined4 *)GEN_TOP(F_00b9b950(in_esi,4)));
  *puVar2 = 0;
  F_00b9b070(in_esi,0xffffd8f0,((char *)REFP(0x1348db0)));
  F_00b9b3d0(in_esi,0xfffffffe);
  F_00b9af00(in_esi,&REFG(undefined, 0x1348dc8),((char *)REFP(0x1348dbc)),param_2);
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b260(in_esi,0xffffd8f0);
  return (uint)puVar2;
}

/* ref: Global::LuaLoadlibGc */
GEN_OWN GEN_NOFRAME uint F_00c1c370(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00b9c710(param_1,1,((char *)REFP(0x1348dd0)))));
  if ((HMODULE)*puVar1 != (HMODULE)0x0) {
    gen_imp_FreeLibrary((HMODULE)*puVar1);
  }
  *puVar1 = 0;
  return 0;
}

/* ref: Global::LuaLoadlibLoadFunc */
GEN_OWN GEN_NOFRAME uint F_00c1c3a0(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(LPCSTR param_2, unsigned int gen_a1), GEN_P(LPCSTR param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(LPCSTR param_2 = (LPCSTR)gen_a1;)
  GEN_PIN(LPCSTR param_3 = (LPCSTR)gen_a2;)
  int * piVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00c1c2d0(in_eax,param_2)));
  if (*piVar1 == 0) {
    pHVar2 = gen_imp_LoadLibraryA(param_2);
    if (pHVar2 == (HMODULE)0x0) {
      F_00c1c1f0(in_eax);
    }
    *piVar1 = (int)pHVar2;
    if (pHVar2 == (HMODULE)0x0) {
      return 1;
    }
  }
  pFVar3 = gen_imp_GetProcAddress((HMODULE)*piVar1,param_3);
  if (pFVar3 == (FARPROC)0x0) {
    F_00c1c1f0(in_eax);
    return 2;
  }
  F_00b9af30(in_eax,pFVar3,0);
  return 0;
}

/* ref: Global::LuaLoadlib */
GEN_OWN GEN_NOFRAME uint F_00c1c410(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * puVar3;
  
  uVar1 = F_00b9c820(param_1,1,0);
  uVar2 = F_00b9c820(param_1,2,0);
  uVar1 = F_00c1c3a0(param_1,uVar1,uVar2);
  if (uVar1 == 0) {
    return 1;
  }
  F_00b9adc0(param_1);
  F_00b9a800(param_1,0xfffffffe);
  puVar3 = &REFG(undefined, 0x1348ddc);
  if (uVar1 != 1) {
    puVar3 = &REFG(undefined, 0x1348de4);
  }
  F_00b9ae60(param_1,puVar3);
  return 3;
}

/* ref: Global::LuaPushNextTemplate */
GEN_OWN GEN_NOFRAME uint F_00c1c4b0(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1c4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  cVar1 = *in_eax;
  while (cVar1 == REFG(char, 0x1348df0)) {
    in_eax = in_eax + 1;
    cVar1 = *in_eax;
  }
  if (*in_eax == '\0') {
    return 0;
  }
  pcVar3 = ((char *)GEN_TOP(F_00c51da0(in_eax,REFG(undefined1, 0x1348df4))));
  pcVar2 = in_eax;
  if (pcVar3 == ((char *)GEN_TOP(0x0))) {
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  F_00b9ae20(param_2,in_eax,(int)pcVar3 - (int)in_eax);
  return (uint)pcVar3;
}

/* ref: Global::LuaFindFile */
GEN_OWN GEN_NOFRAME uint F_00c1c520(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 in_esi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1c520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char * _Filename;
  undefined * _File;
  undefined * puVar4;
  uint uVar5;
  
  uVar1 = F_00b9cb70(in_esi,in_eax,&REFG(undefined, 0x1348dfc),&REFG(undefined, 0x1348df8));
  F_00b9b070(in_esi,0xffffd8ef,param_3);
  uVar2 = F_00b9abf0(in_esi,0xffffffff,0);
  if (uVar2 == 0) {
    F_00b9bbd0(in_esi,((char *)REFP(0x1348e00)),param_3);
  }
  F_00b9ae20(in_esi,&REFG(undefined, 0x14c5bf6),0);
  uVar2 = F_00c1c4b0(uVar2,in_esi);
  while( true ) {
    if (uVar2 == 0) {
      return 0;
    }
    puVar4 = &REFG(undefined, 0x1348e20);
    uVar5 = uVar1;
    uVar3 = F_00b9abf0(in_esi,0xffffffff,0);
    _Filename = ((char *)GEN_TOP(F_00b9cb70(in_esi,uVar3,puVar4,uVar5)));
    F_00b9a7b0(in_esi,0xfffffffe);
    _File = F_00c495d8(_Filename,&REFG(undefined, 0x1348dec));
    if (_File != ((undefined *)GEN_TOP(0x0))) break;
    F_00b9af00(in_esi,((char *)REFP(0x1348e24)),_Filename);
    F_00b9a7b0(in_esi,0xfffffffe);
    F_00b9b880(in_esi,2);
    uVar2 = F_00c1c4b0(uVar2,in_esi);
  }
  F_00c49312(_File);
  return (uint)_Filename;
}

/* ref: FUN_00c1c600 */
GEN_OWN GEN_NOFRAME uint F_00c1c600(GEN_P(undefined4 in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1c600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00b9abf0(in_esi,0xffffffff,0);
  uVar1 = F_00b9abf0(in_esi,1,0);
  uVar1 = F_00b9bbd0(in_esi,((char *)REFP(0x1348e34)),uVar1);
  return uVar1;
}

/* ref: Global::LuaLoaderLua */
GEN_OWN GEN_NOFRAME uint F_00c1c630(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9c820(param_1,1,0);
  uVar1 = F_00c1c520(uVar1,param_1,&REFG(undefined, 0x1348e64));
  if (uVar1 != 0) {
    uVar1 = F_00b9c250(param_1,uVar1);
    if (uVar1 != 0) {
      F_00b9abf0(param_1,0xffffffff,0);
      uVar1 = F_00b9abf0(param_1,1,0);
      F_00b9bbd0(param_1,((char *)REFP(0x1348e34)),uVar1);
    }
  }
  return 1;
}

/* ref: FUN_00c1c6a0 */
GEN_OWN GEN_NOFRAME uint F_00c1c6a0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xc1c6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c51da0(in_eax,REFG(undefined4, 0x1348e6c));
  if (uVar1 != 0) {
    in_eax = uVar1 + 1;
  }
  uVar1 = F_00b9cb70(in_esi,in_eax,0x1348e74,0x1348e70);
  uVar1 = F_00b9af00(in_esi,((char *)REFP(0x1348e78)),uVar1);
  F_00b9a7b0(in_esi,0xfffffffe);
  return uVar1;
}

/* ref: FUN_00c1c6f0 */
GEN_OWN GEN_NOFRAME uint F_00c1c6f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00b9c820(param_1,1,0);
  uVar2 = F_00c1c520(uVar1,param_1,((char *)REFP(0x1348e84)));
  if (uVar2 != 0) {
    uVar1 = F_00c1c6a0(uVar1,param_1);
    uVar1 = F_00c1c3a0(param_1,uVar2,uVar1);
    if (uVar1 != 0) {
      uVar1 = F_00b9abf0(param_1,0xffffffff,0);
      uVar3 = F_00b9abf0(param_1,1,0);
      F_00b9bbd0(param_1,((char *)REFP(0x1348e34)),uVar3,uVar2,uVar1);
    }
  }
  return 1;
}

/* ref: FUN_00c1c770 */
GEN_OWN GEN_NOFRAME uint F_00c1c770(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint in_eax;
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  in_eax = F_00b9c820(param_1,1,0);
  uVar1 = F_00c51da0(in_eax,0x2e);
  if (uVar1 == 0) {
    return 0;
  }
  F_00b9ae20(param_1,in_eax,uVar1 - in_eax);
  pcVar3 = ((char *)REFP(0x1348e8c));
  uVar1 = F_00b9abf0(param_1,0xffffffff,0);
  uVar1 = F_00c1c520(uVar1,param_1,pcVar3);
  if (uVar1 != 0) {
    uVar2 = F_00c1c6a0(in_eax,param_1);
    uVar2 = F_00c1c3a0(param_1,uVar1,uVar2);
    if (uVar2 != 0) {
      if (uVar2 != 2) {
        F_00c1c600(param_1,uVar1);
      }
      F_00b9af00(param_1,((char *)REFP(0x1348e94)),in_eax,uVar1);
    }
  }
  return 1;
}

/* ref: Global::lua_loader_preload */
GEN_OWN GEN_NOFRAME uint F_00c1c800(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c820(param_1,1,0);
  F_00b9b070(param_1,0xffffd8ef,((char *)REFP(0x1348eb4)));
  uVar2 = F_00b9a940(param_1,0xffffffff);
  if (uVar2 != 5) {
    F_00b9bbd0(param_1,((char *)REFP(0x1348ebc)));
  }
  F_00b9b070(param_1,0xffffffff,uVar1);
  uVar2 = F_00b9a940(param_1,0xffffffff);
  if (uVar2 == 0) {
    F_00b9af00(param_1,((char *)REFP(0x1348ee0)),uVar1);
  }
  return 1;
}

/* ref: Global::lua_ll_require */
GEN_OWN GEN_NOFRAME uint F_00c1c870(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1c870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * puVar3;
  int iVar4;
  
  uVar1 = F_00b9c820(param_1,1,0);
  F_00b9a760(param_1,1);
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348f04)));
  F_00b9b070(param_1,2,uVar1);
  uVar2 = F_00b9abc0(param_1,0xffffffff);
  if (uVar2 == 0) {
    F_00b9b070(param_1,0xffffd8ef,((char *)REFP(0x1348f38)));
    uVar2 = F_00b9a940(param_1,0xffffffff);
    if (uVar2 != 5) {
      F_00b9bbd0(param_1,((char *)REFP(0x1348f40)));
    }
    F_00b9ae20(param_1,&REFG(undefined, 0x14c5bf7),0);
    iVar4 = 1;
    while( true ) {
      F_00b9b110(param_1,0xfffffffe,iVar4);
      uVar2 = F_00b9a940(param_1,0xffffffff);
      if (uVar2 == 0) {
        uVar2 = F_00b9abf0(param_1,0xfffffffe,0);
        F_00b9bbd0(param_1,((char *)REFP(0x1348f64)),uVar1,uVar2);
      }
      F_00b9ae60(param_1,uVar1);
      F_00b9b510(param_1,1,1);
      uVar2 = F_00b9a940(param_1,0xffffffff);
      if (uVar2 == 6) break;
      uVar2 = F_00b9a9f0(param_1,0xffffffff);
      if (uVar2 == 0) {
        F_00b9a760(param_1,0xfffffffe);
        iVar4 = iVar4 + 1;
      }
      else {
        F_00b9b880(param_1,2);
        iVar4 = iVar4 + 1;
      }
    }
    F_00b9aff0(param_1,&REFG(undefined, 0x110ecc0));
    F_00b9b290(param_1,2,uVar1);
    F_00b9ae60(param_1,uVar1);
    F_00b9b510(param_1,1,1);
    uVar2 = F_00b9a940(param_1,0xffffffff);
    if (uVar2 != 0) {
      F_00b9b290(param_1,2,uVar1);
    }
    F_00b9b070(param_1,2,uVar1);
    puVar3 = ((undefined *)GEN_TOP(F_00b9ad00(param_1,0xffffffff)));
    if (puVar3 == &REFG(undefined, 0x110ecc0)) {
      F_00b9afd0(param_1,1);
      F_00b9a910(param_1,0xffffffff);
      F_00b9b290(param_1,2,uVar1);
    }
  }
  else {
    puVar3 = ((undefined *)GEN_TOP(F_00b9ad00(param_1,0xffffffff)));
    if (puVar3 == &REFG(undefined, 0x110ecc0)) {
      F_00b9bbd0(param_1,((char *)REFP(0x1348f0c)),uVar1);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00c1ca20 */
GEN_OWN_GS GEN_NOFRAME uint F_00c1ca20(GEN_P(undefined4 in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc1ca20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x68, 8, 0);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00c01ae0(in_esi,1,((undefined1 *)(gen_frame + 0x0)));
  if (uVar1 != 0) {
    uVar1 = F_00c028c0(in_esi,&REFG(undefined, 0x1348f80),((undefined1 *)(gen_frame + 0x0)));
    if (uVar1 != 0) {
      uVar1 = F_00b9a980(in_esi,0xffffffff);
      if (uVar1 == 0) goto LAB_00c1ca74;
    }
  }
  F_00b9bbd0(in_esi,((char *)REFP(0x1348f84)));
LAB_00c1ca74: ;
  F_00b9a910(in_esi,0xfffffffe);
  F_00b9b480(in_esi,0xfffffffe);
  uVar1 = F_00b9a760(in_esi,0xfffffffe);
  return uVar1;
}

/* ref: Global::lua_dooptions */
GEN_OWN GEN_NOFRAME unsigned int F_00c1caa0(GEN_P(undefined4 in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1caa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = 2;
  if (1 < param_2) {
    do {
      F_00b9a910(in_edi,iVar1);
      F_00b9a910(in_edi,0xfffffffe);
      F_00b9b510(in_edi,1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 <= param_2);
  }
  return;
}

/* ref: Global::lua_modinit */
GEN_OWN GEN_NOFRAME uint F_00c1cae0(GEN_P(undefined4 in_esi, unsigned int gen_a0), GEN_P(char * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc1cae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_PIN(char * in_edi = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  char * pcVar2;
  uint uVar3;
  
  F_00b9a910(in_esi,0xffffffff);
  F_00b9b290(in_esi,0xfffffffe,&REFG(undefined, 0x1348fac));
  F_00b9ae60(in_esi,in_edi);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1348fb0)));
  pcVar1 = F_00c51220(in_edi,0x2e);
  pcVar2 = in_edi;
  if (pcVar1 != ((char *)GEN_TOP(0x0))) {
    pcVar2 = pcVar1 + 1;
  }
  F_00b9ae20(in_esi,in_edi,(int)pcVar2 - (int)in_edi);
  uVar3 = F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1348fb8)));
  return uVar3;
}

/* ref: Global::lua_ll_module */
GEN_OWN GEN_NOFRAME uint F_00c1cb40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1cb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00b9c820(param_1,1,0);
  uVar2 = F_00b9a750(param_1);
  F_00b9b070(param_1,0xffffd8f0,((char *)REFP(0x1348fc4)));
  F_00b9b070(param_1,uVar2 + 1,uVar1);
  uVar3 = F_00b9a940(param_1,0xffffffff);
  if (uVar3 != 5) {
    F_00b9a760(param_1,0xfffffffe);
    uVar3 = F_00b9bd60(param_1,0xffffd8ee,uVar1,1);
    if (uVar3 != 0) {
      uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x1348fcc)),uVar1);
      return uVar1;
    }
    F_00b9a910(param_1,0xffffffff);
    F_00b9b290(param_1,uVar2 + 1,uVar1);
  }
  F_00b9b070(param_1,0xffffffff,((char *)REFP(0x1348fec)));
  uVar3 = F_00b9a940(param_1,0xffffffff);
  if (uVar3 == 0) {
    F_00b9a760(param_1,0xfffffffe);
    F_00c1cae0(param_1,uVar1);
  }
  else {
    F_00b9a760(param_1,0xfffffffe);
  }
  F_00b9a910(param_1,0xffffffff);
  F_00c1ca20(param_1);
  F_00c1caa0(param_1,uVar2);
  return 0;
}

/* ref: Global::lua_ll_seeall */
GEN_OWN GEN_NOFRAME uint F_00c1cc20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1cc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9b190(param_1,1);
  if (uVar1 == 0) {
    F_00b9b150(param_1,0,1);
    F_00b9a910(param_1,0xffffffff);
    F_00b9b3d0(param_1,1);
  }
  F_00b9a910(param_1,0xffffd8ee);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1348ff4)));
  return 0;
}

/* ref: Global::lua_luaopen_package */
GEN_OWN GEN_NOFRAME uint F_00c1cce0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1cce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * puVar1;
  char * pcVar2;
  uint uVar3;
  int iVar4;
  
  F_00b9bc00(param_1,((char *)REFP(0x1349028)));
  F_00b9af30(param_1,((code *)REFP(0xc1c370)),0);
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1349034));
  F_00b9cd70(param_1,((char *)REFP(0x134903c)),&REFG(undefined * PTR32, 0x110ecc4));
  F_00b9a910(param_1,0xffffffff);
  F_00b9a850(param_1,0xffffd8ef);
  F_00b9b150(param_1,0,4);
  iVar4 = 0;
  puVar1 = (*(undefined * PTR32 (*)[4])REFP(0x110ecf4))[0];
  while (puVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00b9af30(param_1,puVar1,0);
    iVar4 = iVar4 + 1;
    F_00b9b360(param_1,0xfffffffe,iVar4);
    puVar1 = (*(undefined * PTR32 (*)[4])REFP(0x110ecf4))[iVar4];
  }
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x1349044)));
  pcVar2 = F_00c4b5a4(((char *)REFP(0x1349088)));
  if (pcVar2 == ((char *)GEN_TOP(0x0))) {
    F_00b9ae60(param_1,((char *)REFP(0x134904c)));
  }
  else {
    uVar3 = F_00b9cb70(param_1,pcVar2,&REFG(undefined, 0x1349000),&REFG(undefined, 0x1348ffc));
    F_00b9cb70(param_1,uVar3,&REFG(undefined, 0x1349004),((char *)REFP(0x134904c)));
    F_00b9a7b0(param_1,0xfffffffe);
  }
  F_00c1c140(param_1);
  F_00b9b290(param_1,0xfffffffe,&REFG(undefined, 0x1349094));
  pcVar2 = F_00c4b5a4(((char *)REFP(0x13490bc)));
  if (pcVar2 == ((char *)GEN_TOP(0x0))) {
    F_00b9ae60(param_1,((char *)REFP(0x134909c)));
  }
  else {
    uVar3 = F_00b9cb70(param_1,pcVar2,&REFG(undefined, 0x1349000),&REFG(undefined, 0x1348ffc));
    F_00b9cb70(param_1,uVar3,&REFG(undefined, 0x1349004),((char *)REFP(0x134909c)));
    F_00b9a7b0(param_1,0xfffffffe);
  }
  F_00c1c140(param_1);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13490c8)));
  F_00b9ae20(param_1,((char *)REFP(0x13490d0)),9);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13490dc)));
  F_00b9bd60(param_1,0xffffd8f0,((char *)REFP(0x13490e4)),2);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13490ec)));
  F_00b9b150(param_1,0,0);
  F_00b9b290(param_1,0xfffffffe,((char *)REFP(0x13490f4)));
  F_00b9a910(param_1,0xffffd8ee);
  F_00b9cd70(param_1,0,&REFG(undefined * PTR32, 0x110ecdc));
  F_00b9a760(param_1,0xfffffffe);
  return 1;
}

/* ref: Global::lua_luaB_print */
GEN_OWN GEN_NOFRAME uint F_00c1cec0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1cec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  char * _Str;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00b9a750(param_1);
  F_00b9b070(param_1,0xffffd8ee,((char *)REFP(0x13490fc)));
  iVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      F_00b9a910(param_1,0xffffffff);
      F_00b9a910(param_1,iVar3);
      F_00b9b510(param_1,1,1);
      _Str = ((char *)GEN_TOP(F_00b9abf0(param_1,0xffffffff,0)));
      if (_Str == ((char *)GEN_TOP(0x0))) {
        uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x1349108)));
        return uVar1;
      }
      if (1 < iVar3) {
        uVar2 = F_00c50860();
        F_00c5075a(&REFG(undefined, 0x1349134),((undefined *)GEN_TOP((uVar2 + 0x20))));
      }
      uVar2 = F_00c50860();
      F_00c5075a(_Str,((undefined *)GEN_TOP((uVar2 + 0x20))));
      F_00b9a760(param_1,0xfffffffe);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)uVar1);
  }
  uVar1 = F_00c50860();
  F_00c5075a(&REFG(undefined, 0x1349138),((undefined *)GEN_TOP((uVar1 + 0x20))));
  return 0;
}

/* ref: FUN_00c1cf90 */
GEN_OWN GEN_NOFRAME uint F_00c1cf90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1cf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x8, 8);
  uint uVar1;
  byte * pbVar2;
  ulong uVar3;
  int iVar4;
  double dVar5;
  
  uVar1 = F_00b9ca20(param_1,2,10);
  if (uVar1 == 10) {
    F_00b9c7f0(param_1,1);
    uVar1 = F_00b9a9b0(param_1,1);
    if (uVar1 != 0) {
      dVar5 = F_00b9ab30(param_1,1);
      F_00b9ade0(param_1,dVar5);
      return 1;
    }
  }
  else {
    pbVar2 = ((byte *)GEN_TOP(F_00b9c820(param_1,1,0)));
    if (((int)uVar1 < 2) || (0x24 < (int)uVar1)) {
      F_00b9c590(param_1,2,((char *)REFP(0x134913c)));
    }
    uVar3 = F_00c4abb6((char *)pbVar2,(char * PTR32 *)&(*(byte * PTR32 *)(gen_frame + 0x0)),uVar1);
    if (pbVar2 != (*(byte * PTR32 *)(gen_frame + 0x0))) {
      iVar4 = F_00c4873c((uint)*(*(byte * PTR32 *)(gen_frame + 0x0)));
      while (iVar4 != 0) {
        pbVar2 = (*(byte * PTR32 *)(gen_frame + 0x0)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x0)) = pbVar2;
        iVar4 = F_00c4873c((uint)*pbVar2);
      }
      if (*(*(byte * PTR32 *)(gen_frame + 0x0)) == 0) {
        (*(ulong *)(gen_frame + 0x4)) = uVar3;
        dVar5 = (double)(int)uVar3;
        if ((int)uVar3 < 0) {
          dVar5 = GEN_X87(dVar5 + *(double *)&REFG(double, 0x10b8de8));
        }
        F_00b9ade0(param_1,dVar5);
        return 1;
      }
    }
  }
  F_00b9adc0(param_1);
  return 1;
}

/* ref: FUN_00c1d0b0 */
GEN_OWN GEN_NOFRAME uint F_00c1d0b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9ca20(param_1,2,1);
  F_00b9a760(param_1,1);
  uVar2 = F_00b9a9f0(param_1,1);
  if ((uVar2 != 0) && (0 < (int)uVar1)) {
    F_00b9bb40(param_1,uVar1);
    F_00b9a910(param_1,1);
    F_00b9b880(param_1,2);
  }
  uVar1 = F_00b9b830(param_1);
  return uVar1;
}

/* ref: FUN_00c1d110 */
GEN_OWN GEN_NOFRAME uint F_00c1d110(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9b190(param_1,1);
  if (uVar1 == 0) {
    F_00b9adc0(param_1);
    return 1;
  }
  F_00b9bc90(param_1,1,((char *)REFP(0x1349150)));
  return 1;
}

/* ref: FUN_00c1d160 */
GEN_OWN GEN_NOFRAME uint F_00c1d160(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9a940(param_1,2);
  F_00b9c7a0(param_1,1,5);
  if ((uVar1 != 0) && (uVar1 != 5)) {
    F_00b9c590(param_1,2,((char *)REFP(0x134915c)));
  }
  uVar1 = F_00b9bc90(param_1,1,((char *)REFP(0x1349174)));
  if (uVar1 != 0) {
    F_00b9bbd0(param_1,((char *)REFP(0x1349180)));
  }
  F_00b9a760(param_1,2);
  F_00b9b3d0(param_1,1);
  return 1;
}

/* ref: FUN_00c1d1e0 */
GEN_OWN_GS GEN_NOFRAME uint F_00c1d1e0(GEN_P(undefined4 in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1d1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x68, 8, 0);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00b9a940(in_esi,1);
  if (uVar1 == 6) {
    uVar1 = F_00b9a910(in_esi,1);
    return uVar1;
  }
  if (param_2 == 0) {
    uVar1 = F_00b9c9b0(in_esi,1);
  }
  else {
    uVar1 = F_00b9ca20(in_esi,1,1);
  }
  if ((int)uVar1 < 0) {
    F_00b9c590(in_esi,1,((char *)REFP(0x13491a4)));
  }
  uVar2 = F_00c01ae0(in_esi,uVar1,((undefined1 *)(gen_frame + 0x0)));
  if (uVar2 == 0) {
    F_00b9c590(in_esi,1,((char *)REFP(0x13491c0)));
  }
  F_00c028c0(in_esi,&REFG(undefined, 0x13491d0),((undefined1 *)(gen_frame + 0x0)));
  uVar2 = F_00b9a940(in_esi,0xffffffff);
  if (uVar2 == 0) {
    uVar2 = F_00b9bbd0(in_esi,((char *)REFP(0x13491d4)),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00c1d2b0 */
GEN_OWN GEN_NOFRAME uint F_00c1d2b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00c1d1e0(param_1,1);
  uVar1 = F_00b9a980(param_1,0xffffffff);
  if (uVar1 != 0) {
    F_00b9a910(param_1,0xffffd8ee);
    return 1;
  }
  F_00b9b1f0(param_1,0xffffffff);
  return 1;
}

/* ref: FUN_00c1d300 */
GEN_OWN GEN_NOFRAME uint F_00c1d300(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  double dVar2;
  
  F_00b9c7a0(param_1,2,5);
  F_00c1d1e0(param_1,0);
  F_00b9a910(param_1,2);
  uVar1 = F_00b9a9b0(param_1,1);
  if ((uVar1 != 0) && (dVar2 = F_00b9ab30(param_1,1), GEN_ISNAN(dVar2) != (GEN_ISNAN(dVar2) || dVar2 == 0.0)))
  {
    F_00b9b010(param_1);
    F_00b9a800(param_1,0xfffffffe);
    F_00b9b480(param_1,0xfffffffe);
    return 0;
  }
  uVar1 = F_00b9a980(param_1,0xfffffffe);
  if ((uVar1 == 0) && (uVar1 = F_00b9b480(param_1,0xfffffffe), uVar1 != 0)) {
    return 1;
  }
  F_00b9bbd0(param_1,((char *)REFP(0x1349208)));
  return 1;
}

/* ref: FUN_00c1d3a0 */
GEN_OWN GEN_NOFRAME uint F_00c1d3a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  F_00b9c7f0(param_1,2);
  uVar1 = F_00b9aa50(param_1,1,2);
  F_00b9afd0(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c1d3d0 */
GEN_OWN GEN_NOFRAME uint F_00c1d3d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9c7a0(param_1,1,5);
  F_00b9c7f0(param_1,2);
  F_00b9a760(param_1,2);
  F_00b9b0d0(param_1,1);
  return 1;
}

/* ref: FUN_00c1d410 */
GEN_OWN GEN_NOFRAME uint F_00c1d410(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9c7a0(param_1,1,5);
  F_00b9c7f0(param_1,2);
  F_00b9c7f0(param_1,3);
  F_00b9a760(param_1,3);
  F_00b9b2f0(param_1,1);
  return 1;
}

/* ref: FUN_00c1d450 */
GEN_OWN GEN_NOFRAME uint F_00c1d450(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9b730(param_1,3,0);
  F_00b9ae00(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c1d470 */
GEN_OWN GEN_NOFRAME uint F_00c1d470(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  uVar1 = F_00b9ccc0(param_1,1,((char *)REFP(0x134927c)),&REFG(undefined * PTR32, 0x110ed08));
  uVar2 = F_00b9ca20(param_1,2,0);
  uVar2 = F_00b9b730(param_1,*(undefined4 *)(&REFG(undefined, 0x110ed28) + uVar1 * 4),uVar2);
  if (*(int *)(&REFG(undefined, 0x110ed28) + uVar1 * 4) == 3) {
    uVar1 = F_00b9b730(param_1,4,0);
    dVar3 = (double)(int)uVar1 * *(double *)&REFG(undefined, 0x10ac178) + (double)(int)uVar2;
  }
  else {
    if (*(int *)(&REFG(undefined, 0x110ed28) + uVar1 * 4) == 5) {
      F_00b9afd0(param_1,uVar2);
      return 1;
    }
    dVar3 = (double)(int)uVar2;
  }
  F_00b9ade0(param_1,dVar3);
  return 1;
}

/* ref: FUN_00c1d510 */
GEN_OWN GEN_NOFRAME uint F_00c1d510(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9a940(param_1,1);
  uVar1 = F_00b9a960(param_1,uVar1);
  F_00b9ae60(param_1,uVar1);
  return 1;
}

/* ref: FUN_00c1d540 */
GEN_OWN GEN_NOFRAME uint F_00c1d540(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7a0(param_1,1,5);
  F_00b9a760(param_1,2);
  uVar1 = F_00b9b840(param_1,1);
  if (uVar1 != 0) {
    return 2;
  }
  F_00b9adc0(param_1);
  return 1;
}

/* ref: FUN_00c1d580 */
GEN_OWN GEN_NOFRAME uint F_00c1d580(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9c7a0(param_1,1,5);
  F_00b9a910(param_1,0xffffd8ed);
  F_00b9a910(param_1,1);
  F_00b9adc0(param_1);
  return 3;
}

/* ref: FUN_00c1d5c0 */
GEN_OWN GEN_NOFRAME uint F_00c1d5c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9c9b0(param_1,2);
  F_00b9c7a0(param_1,1,5);
  F_00b9ae00(param_1,uVar1 + 1);
  F_00b9b110(param_1,1,uVar1 + 1);
  uVar1 = F_00b9a940(param_1,0xffffffff);
  return -(uint)(uVar1 != 0) & 2;
}

/* ref: FUN_00c1d600 */
GEN_OWN GEN_NOFRAME uint F_00c1d600(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00b9c7a0(param_1,1,5);
  F_00b9a910(param_1,0xffffd8ed);
  F_00b9a910(param_1,1);
  F_00b9ae00(param_1,0);
  return 3;
}

/* ref: Global::lua_luaB_loadstring */
GEN_OWN GEN_NOFRAME uint F_00c1d670(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x4, 12);
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c820(param_1,1,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = F_00b9c880(param_1,2,uVar1,0);
  uVar1 = F_00b9c490(param_1,uVar1,(*(undefined4 *)(gen_frame + 0x0)),uVar2);
  if (uVar1 == 0) {
    return 1;
  }
  F_00b9adc0(param_1);
  F_00b9a800(param_1,0xfffffffe);
  return 2;
}

/* ref: Global::lua_luaB_loadfile */
GEN_OWN GEN_NOFRAME uint F_00c1d6d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9c880(param_1,1,0,0);
  uVar1 = F_00b9c250(param_1,uVar1);
  if (uVar1 == 0) {
    return 1;
  }
  F_00b9adc0(param_1);
  F_00b9a800(param_1,0xfffffffe);
  return 2;
}

/* ref: Global::lua_generic_reader */
GEN_OWN GEN_NOFRAME uint F_00c1d710(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1d710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  F_00b9bc60(param_1,2,((char *)REFP(0x1349284)));
  F_00b9a910(param_1,1);
  F_00b9b510(param_1,0,1);
  uVar1 = F_00b9a940(param_1,0xffffffff);
  if (uVar1 == 0) {
    *param_3 = 0;
    return 0;
  }
  uVar1 = F_00b9a9f0(param_1,0xffffffff);
  if (uVar1 != 0) {
    F_00b9a850(param_1,3);
    uVar1 = F_00b9abf0(param_1,3,param_3);
    return uVar1;
  }
  F_00b9bbd0(param_1,((char *)REFP(0x13492a0)));
  return 0;
}

/* ref: Global::lua_luaB_load */
GEN_OWN GEN_NOFRAME uint F_00c1d790(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9c880(param_1,2,((char *)REFP(0x13492c8)),0);
  F_00b9c7a0(param_1,1,6);
  F_00b9a760(param_1,3);
  uVar1 = F_00b9b690(param_1,((code *)REFP(0xc1d710)),0,uVar1);
  if (uVar1 == 0) {
    return 1;
  }
  F_00b9adc0(param_1);
  F_00b9a800(param_1,0xfffffffe);
  return 2;
}

/* ref: Global::lua_luaB_dofile */
GEN_OWN GEN_NOFRAME uint F_00c1d7f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9c880(param_1,1,0,0);
  uVar2 = F_00b9a750(param_1);
  uVar1 = F_00b9c250(param_1,uVar1);
  if (uVar1 != 0) {
    F_00b9b830(param_1);
  }
  F_00b9b510(param_1,0,0xffffffff);
  uVar1 = F_00b9a750(param_1);
  return uVar1 - uVar2;
}

/* ref: FUN_00c1d840 */
GEN_OWN GEN_NOFRAME uint F_00c1d840(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9abc0(param_1,1);
  if (uVar1 == 0) {
    uVar1 = F_00b9c880(param_1,2,((char *)REFP(0x13492d0)),0);
    uVar1 = F_00b9bbd0(param_1,&REFG(undefined, 0x13492e4),uVar1);
    return uVar1;
  }
  uVar1 = F_00b9a750(param_1);
  return uVar1;
}

/* ref: FUN_00c1d890 */
GEN_OWN GEN_NOFRAME uint F_00c1d890(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  F_00b9c7a0(param_1,1,5);
  uVar1 = F_00b9ca20(param_1,2,1);
  uVar2 = F_00b9a940(param_1,3);
  if ((int)uVar2 < 1) {
    uVar2 = F_00b9ac60(param_1,1);
  }
  else {
    uVar2 = F_00b9c9b0(param_1,3);
  }
  if ((int)uVar1 <= (int)uVar2) {
    uVar4 = (uVar2 - uVar1) + 1;
    if ((0 < (int)uVar4) && (uVar3 = F_00b9a610(param_1,uVar4), uVar3 != 0)) {
      F_00b9b110(param_1,1,uVar1);
      while ((int)uVar1 < (int)uVar2) {
        uVar1 = uVar1 + 1;
        F_00b9b110(param_1,1,uVar1);
      }
      return uVar4;
    }
    uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x13492e8)));
    return uVar1;
  }
  return 0;
}

/* ref: Global::lua_luaB_select */
GEN_OWN GEN_NOFRAME uint F_00c1d930(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = F_00b9a750(param_1);
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 == 4) {
    pcVar3 = ((char *)GEN_TOP(F_00b9abf0(param_1,1,0)));
    if (*pcVar3 == '#') {
      F_00b9ae00(param_1,uVar1 - 1);
      return 1;
    }
  }
  uVar2 = F_00b9c9b0(param_1,1);
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + uVar1;
  }
  else if ((int)uVar1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  if ((int)uVar2 < 1) {
    F_00b9c590(param_1,1,((char *)REFP(0x1349304)));
  }
  return uVar1 - uVar2;
}

/* ref: Global::lua_luaB_pcall */
GEN_OWN GEN_NOFRAME uint F_00c1d9b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1d9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  F_00b9c7f0(param_1,1);
  uVar3 = 0;
  uVar2 = 0xffffffff;
  uVar1 = F_00b9a750(param_1);
  uVar1 = F_00b9b570(param_1,uVar1 - 1,uVar2,uVar3);
  F_00b9afd0(param_1,(uint)(uVar1 == 0));
  F_00b9a800(param_1,1);
  uVar1 = F_00b9a750(param_1);
  return uVar1;
}

/* ref: FUN_00c1da00 */
GEN_OWN GEN_NOFRAME uint F_00c1da00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1da00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9c7f0(param_1,2);
  F_00b9a760(param_1,2);
  F_00b9a800(param_1,1);
  uVar1 = F_00b9b570(param_1,0,0xffffffff,1);
  F_00b9afd0(param_1,(uint)(uVar1 == 0));
  F_00b9a850(param_1,1);
  uVar1 = F_00b9a750(param_1);
  return uVar1;
}

/* ref: Global::lua_luaB_tostring */
GEN_OWN GEN_NOFRAME uint F_00c1da50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1da50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  char * pcVar2;
  
  F_00b9c7f0(param_1,1);
  uVar1 = F_00b9bcf0(param_1,1,((char *)REFP(0x1349318)));
  if (uVar1 == 0) {
    uVar1 = F_00b9a940(param_1,1);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      F_00b9ae20(param_1,&REFG(undefined, 0x1349334),3);
      return 1;
    case 1: ;
      uVar1 = F_00b9abc0(param_1,1);
      pcVar2 = &REFG(undefined, 0x1349324);
      if (uVar1 == 0) {
        pcVar2 = ((char *)REFP(0x134932c));
      }
      F_00b9ae60(param_1,pcVar2);
      return 1;
    default: ;
      F_00b9ad50(param_1,1);
      uVar1 = F_00b9a940(param_1,1);
      uVar1 = F_00b9a960(param_1,uVar1);
      F_00b9af00(param_1,((char *)REFP(0x1349338)),uVar1);
      break;
    case 3: ;
      uVar1 = F_00b9abf0(param_1,1,0);
      F_00b9ae60(param_1,uVar1);
      return 1;
    case 4: ;
      F_00b9a910(param_1,1);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00c1db50 */
GEN_OWN GEN_NOFRAME uint F_00c1db50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1db50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9a760(param_1,1);
  F_00b9b950(param_1,0);
  uVar1 = F_00b9abc0(param_1,1);
  if (uVar1 == 0) {
    return 1;
  }
  uVar1 = F_00b9a940(param_1,1);
  if (uVar1 == 1) {
    F_00b9b150(param_1,0,0);
    F_00b9a910(param_1,0xffffffff);
    F_00b9afd0(param_1,1);
    F_00b9b2f0(param_1,0xffffd8ed);
    F_00b9b3d0(param_1,2);
    return 1;
  }
  uVar1 = F_00b9b190(param_1,1);
  if (uVar1 != 0) {
    F_00b9b0d0(param_1,0xffffd8ed);
    uVar1 = F_00b9abc0(param_1,0xffffffff);
    F_00b9a760(param_1,0xfffffffe);
    if (uVar1 != 0) goto LAB_00c1dc07;
  }
  F_00b9c590(param_1,1,((char *)REFP(0x1349340)));
LAB_00c1dc07: ;
  F_00b9b190(param_1,1);
  F_00b9b3d0(param_1,2);
  return 1;
}

/* ref: FUN_00c1dc30 */
GEN_OWN_GS GEN_NOFRAME uint F_00c1dc30(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1dc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x68, 8, 0);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  if (param_2 == in_esi) {
    return 0;
  }
  uVar1 = F_00b9b720(in_esi);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      return 3;
    }
    return 1;
  }
  uVar1 = F_00c01ae0(in_esi,0,((undefined1 *)(gen_frame + 0x0)));
  if (0 < (int)uVar1) {
    return 2;
  }
  uVar1 = F_00b9a750(in_esi);
  return (-(uint)(uVar1 != 0) & 0xfffffffe) + 3;
}

/* ref: FUN_00c1dce0 */
GEN_OWN GEN_NOFRAME uint F_00c1dce0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1dce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9ad30(param_1,1);
  if (uVar1 == 0) {
    F_00b9c590(param_1,1,((char *)REFP(0x134946c)));
  }
  uVar1 = F_00c1dc30(uVar1,param_1);
  F_00b9ae60(param_1,(&REFG(undefined * PTR32, 0x110ee10))[(int)(uVar1)]);
  return 1;
}

/* ref: FUN_00c1dd30 */
GEN_OWN GEN_NOFRAME uint F_00c1dd30(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1dd30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c1dc30(in_eax,in_edi);
  uVar2 = F_00b9a610(in_eax,param_3);
  if (uVar2 == 0) {
    F_00b9bbd0(in_edi,((char *)REFP(0x1349480)));
  }
  if (uVar1 != 1) {
    F_00b9af00(in_edi,((char *)REFP(0x13494a0)),(&REFG(undefined * PTR32, 0x110ee10))[(int)(uVar1)]);
    return 0xffffffff;
  }
  F_00b9a680(in_edi,in_eax,param_3);
  F_00b9a6d0(in_edi,in_eax);
  uVar1 = F_00bb9700(in_eax,param_3);
  if ((uVar1 != 0) && (uVar1 != 1)) {
    F_00b9a680(in_eax,in_edi,1);
    return 0xffffffff;
  }
  uVar1 = F_00b9a750(in_eax);
  uVar2 = F_00b9a610(in_edi,uVar1 + 1);
  if (uVar2 == 0) {
    F_00b9bbd0(in_edi,((char *)REFP(0x13494bc)));
  }
  F_00b9a680(in_eax,in_edi,uVar1);
  return uVar1;
}

/* ref: FUN_00c1ddf0 */
GEN_OWN GEN_NOFRAME uint F_00c1ddf0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1ddf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9ad30(param_1,1);
  if (uVar1 == 0) {
    F_00b9c590(param_1,1,((char *)REFP(0x13494d8)));
  }
  uVar2 = F_00b9a750(param_1);
  uVar1 = F_00c1dd30(uVar1,param_1,uVar2 - 1);
  if ((int)uVar1 < 0) {
    F_00b9afd0(param_1,0);
    F_00b9a800(param_1,0xfffffffe);
    return 2;
  }
  F_00b9afd0(param_1,1);
  F_00b9a800(param_1,-1 - uVar1);
  return uVar1 + 1;
}

/* ref: Global::lua_luaB_auxwrap */
GEN_OWN GEN_NOFRAME uint F_00c1de70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1de70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9ad30(param_1,0xffffd8ed);
  uVar2 = F_00b9a750(param_1);
  uVar1 = F_00c1dd30(uVar1,param_1,uVar2);
  if ((int)uVar1 < 0) {
    uVar2 = F_00b9a9f0(param_1,0xffffffff);
    if (uVar2 != 0) {
      F_00b9bb40(param_1,1);
      F_00b9a800(param_1,0xfffffffe);
      F_00b9b880(param_1,2);
    }
    F_00b9b830(param_1);
  }
  return uVar1;
}

/* ref: FUN_00c1dee0 */
GEN_OWN GEN_NOFRAME uint F_00c1dee0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1dee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a710(param_1);
  uVar2 = F_00b9a940(param_1,1);
  if (uVar2 == 6) {
    uVar2 = F_00b9a980(param_1,1);
    if (uVar2 == 0) goto LAB_00c1df1d;
  }
  F_00b9c590(param_1,1,((char *)REFP(0x13494ec)));
LAB_00c1df1d: ;
  F_00b9a910(param_1,1);
  F_00b9a680(param_1,uVar1,1);
  return 1;
}

/* ref: Global::lua_luaB_cowrap */
GEN_OWN GEN_NOFRAME uint F_00c1df40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1df40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00c1dee0(param_1);
  F_00b9af30(param_1,((code *)REFP(0xc1de70)),1);
  return 1;
}

/* ref: Global::lua_luaB_yield */
GEN_OWN GEN_NOFRAME uint F_00c1df70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1df70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9a750(param_1);
  uVar1 = F_00bb91c0(param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00c1df90 */
GEN_OWN GEN_NOFRAME uint F_00c1df90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1df90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9b010(param_1);
  if (uVar1 != 0) {
    F_00b9adc0(param_1);
  }
  return 1;
}

/* ref: Global::LuaBaseOpen */
GEN_OWN GEN_NOFRAME uint F_00c1dff0(GEN_P(undefined4 in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc1dff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  uint uVar1;
  
  F_00b9a910(in_esi,0xffffd8ee);
  F_00b9b290(in_esi,0xffffd8ee,&REFG(undefined, 0x1349534));
  F_00b9cd70(in_esi,&REFG(undefined, 0x1349538),&REFG(undefined * PTR32, 0x110ed48));
  F_00b9ae20(in_esi,((char *)REFP(0x134953c)),7);
  F_00b9b290(in_esi,0xffffd8ee,((char *)REFP(0x1349544)));
  F_00b9af30(in_esi,((code *)REFP(0xc1d5c0)),0);
  F_00b9af30(in_esi,((code *)REFP(0xc1d600)),1);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1349550)));
  F_00b9af30(in_esi,((code *)REFP(0xc1d540)),0);
  F_00b9af30(in_esi,((code *)REFP(0xc1d580)),1);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1349558)));
  F_00b9b150(in_esi,0,1);
  F_00b9a910(in_esi,0xffffffff);
  F_00b9b3d0(in_esi,0xfffffffe);
  F_00b9ae20(in_esi,&REFG(undefined, 0x1349560),2);
  F_00b9b290(in_esi,0xfffffffe,((char *)REFP(0x1349564)));
  F_00b9af30(in_esi,((code *)REFP(0xc1db50)),1);
  uVar1 = F_00b9b290(in_esi,0xffffd8ee,((char *)REFP(0x134956c)));
  return uVar1;
}

/* ref: Global::LuaOpenBase */
GEN_OWN GEN_NOFRAME uint F_00c1e0f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1e0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00c1dff0(param_1);
  F_00b9cd70(param_1,((char *)REFP(0x1349578)),&REFG(undefined * PTR32, 0x110ee20));
  return 2;
}

/* ref: Client::System::Animation::Wind_Directional::GetForce */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00c1e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc1e150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  
  if (-1 < *(int *)(this + 4)) {
    fVar4 = F_00a08680(*(int *)(this + 4),param_3);
    fVar1 = *(float *)(this + 0xc);
    fVar2 = *(float *)(this + 0x10);
    fVar3 = (float10)fVar4;
    *param_1 = ((float)GEN_TOF((fVar3 * (float10)*(float *)(this + 8))));
    param_1[1] = (float)((float10)fVar1 * fVar3);
    param_1[2] = (float)(fVar3 * (float10)fVar2);
    return 1;
  }
  return 0;
}

/* ref: Global::GetRadialForce */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00c1e1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc1e1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x14, 12);
  float * pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  if (-1 < iVar4) {
    pfVar1 = ((float *)GEN_TOP(((int)this + 0x14)));
    if ((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 0x14)))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        !(*((float *)GEN_TOP(((int)this + 0x14))) <= *(float *)&REFG(undefined, 0x1088114))) {
      fVar2 = ((float)GEN_TOF(((float10)*param_2 - (float10)*((float *)GEN_TOP(((int)this + 8))))));
      fVar9 = ((float)GEN_TOF(((float10)param_2[1] - (float10)*((float *)GEN_TOP(((int)this + 0xc))))));
      fVar3 = ((float)GEN_TOF(((float10)param_2[2] - (float10)*((float *)GEN_TOP(((int)this + 0x10))))));
      fVar6 = (float10)fVar2;
      *param_1 = fVar2;
      fVar7 = (float10)fVar9;
      param_1[1] = fVar9;
      fVar8 = (float10)fVar3;
      param_1[2] = fVar3;
      fVar2 = ((float)GEN_TOF(((fVar6 * fVar6 + fVar7 * fVar7) + fVar8 * fVar8)));
      (*(float *)(gen_frame + 0x0)) = fVar2;
      fVar2 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar2))));
      (*(float *)(gen_frame + 0x0)) = fVar2;
      pfVar5 = &(*(float *)(gen_frame + 0x0));
      if (!((float10)fVar2 < (float10)*pfVar1)) {
        pfVar5 = pfVar1;
      }
      fVar2 = *pfVar5;
      fVar9 = *pfVar1;
      (*(float *)(gen_frame + 0x0)) = fVar9;
      fVar6 = (float10)fVar9;
      fVar9 = F_00a08680(iVar4,param_3);
      F_0046f390(param_1 GEN_EDX_ARG);
      fVar6 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar9 *
                              (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar6 - (float10)fVar2) *
                                                               (fVar6 - (float10)fVar2)))) /
                                              (float10)(float)(fVar6 * fVar6))))))));
      *param_1 = (float)(fVar6 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar6);
      param_1[2] = (float)(fVar6 * (float10)param_1[2]);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Animation::Wind_Directional::Wind_Directional */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pWVar1;
  
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110ee6c));
  for (pWVar1 = this + 8; pWVar1 != this + 0x14; pWVar1 = pWVar1 + 4) {
    *(undefined4 *)pWVar1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c1e380 */
GEN_OWN GEN_FRAME uint F_00c1e380(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1e380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::FillDwordRange */
GEN_OWN GEN_FRAME unsigned int F_00c1e390(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1e390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: Global::FillDwordRange2 */
GEN_OWN GEN_FRAME unsigned int F_00c1e3b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1e3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: Client::System::Animation::Wind_Directional::vf2 */
GEN_OWN GEN_NOFRAME uint F_00c1e3d0(void)
{
  GEN_ENTER(0xc1e3d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Animation::Wind_Directional::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1e3f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1e3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x110ee5c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c1e420 */
GEN_OWN GEN_NOFRAME uint F_00c1e420(void)
{
  GEN_ENTER(0xc1e420u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Animation::Wind::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1e440(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1e440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x110ee5c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Animation::AnimationTreeElement::AnimationTreeElement */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e470(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110ee8c));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c1e490 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e490(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110ee8c));
  return;
}

/* ref: FUN_00c1e4a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e4a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1104898));
  return;
}

/* ref: Client::Graphics::Physics::ConstraintBase::vf4 */
GEN_OWN GEN_NOFRAME unsigned int F_00c1e4c0(void)
{
  GEN_ENTER(0xc1e4c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::ConstraintAttract */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e4d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00c28a70(in_ecx GEN_EDX_FWD,1);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eebc));
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c1e500(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xc1e500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  byte bVar1;
  
  bVar1 = F_00c28a90(param_1 GEN_EDX_FWD,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0xc) = (undefined2)param_3;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)(param_1 + 0x14) = param_4[1];
  *(undefined4 *)(param_1 + 0x18) = param_4[2];
  *(undefined4 *)(param_1 + 0x20) = param_5;
  *(float *)(param_1 + 0x40) = param_6;
  return 1;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::Apply */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  
  pfVar3 = *((float * PTR32 *)GEN_TOP((in_ecx + 0x20)));
  fVar1 = *((float *)GEN_TOP((in_ecx + 0x34)));
  fVar2 = *((float *)GEN_TOP((in_ecx + 0x38)));
  fVar4 = (float10)*((float *)GEN_TOP((in_ecx + 0x40)));
  *pfVar3 = ((float)GEN_TOF(((float10)*pfVar3 +
                   (float10)((float)GEN_TOF((fVar4 * (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x30))) -
                                                            (float10)*pfVar3)))))))));
  pfVar3[1] = ((float)GEN_TOF(((float10)pfVar3[1] +
                     (float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)pfVar3[1]) * fVar4)))
                     )));
  pfVar3[2] = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar4 * (float10)(float)((float10)fVar2 - (float10)pfVar3[2])
                                      ))) + (float10)pfVar3[2])));
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::ApplyWeighted */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e5d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc1e5d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  
  pfVar3 = *((float * PTR32 *)GEN_TOP((in_ecx + 0x20)));
  fVar1 = *((float *)GEN_TOP((in_ecx + 0x34)));
  fVar2 = *((float *)GEN_TOP((in_ecx + 0x38)));
  fVar4 = (float10)param_2;
  *pfVar3 = ((float)GEN_TOF(((float10)*pfVar3 +
                   (float10)((float)GEN_TOF((fVar4 * (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x30))) -
                                                            (float10)*pfVar3)))))))));
  pfVar3[1] = ((float)GEN_TOF(((float10)pfVar3[1] +
                     (float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)pfVar3[1]) * fVar4)))
                     )));
  pfVar3[2] = ((float)GEN_TOF(((float10)pfVar3[2] +
                     (float10)((float)GEN_TOF((fVar4 * (float10)(float)((float10)fVar2 - (float10)pfVar3[2]))))
                     )));
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::UpdateGoal */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x60, 0);
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_0063a290(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(this + 0xc));
  uVar1 = F_004ee970(this + 0x30,this + 0x10,((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: Global::FreeConstraint */
GEN_OWN GEN_FRAME uint F_00c1e6b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc1e6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Physics::ConstraintBase::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1e6d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1e6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Physics::ConstraintAttract::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1e700(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1e700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Physics::ConstraintPin::ConstraintPin */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e730(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00c28a70(in_ecx GEN_EDX_FWD,2);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eed4));
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::ConstraintPin::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c1e760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc1e760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  
  bVar1 = F_00c28a90((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(this + 0xc) = (undefined2)param_2;
  *(undefined4 *)(this + 0x10) = *param_3;
  *(undefined4 *)(this + 0x14) = param_3[1];
  *(undefined4 *)(this + 0x18) = param_3[2];
  *(undefined4 *)(this + 0x20) = param_4;
  return 1;
}

/* ref: Client::Graphics::Physics::ConstraintPin::Apply */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e7b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x20)));
  *puVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
  puVar1[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x34)));
  puVar1[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x38)));
  return (uint)puVar1;
}

/* ref: Client::Graphics::Physics::ConstraintPin::ApplyWeighted */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e7d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1e7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x20)));
  *puVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
  puVar1[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x34)));
  puVar1[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x38)));
  return (uint)puVar1;
}

/* ref: Client::Graphics::Physics::ConstraintPin::UpdateGoal */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x70, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_0063a290(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(this + 0xc));
  puVar3 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),this + 0x10,((undefined1 *)(gen_frame + 0x10)))));
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *(undefined4 *)(this + 0x30) = *puVar3;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  return (uint)puVar3;
}

/* ref: Client::Graphics::Physics::ConstraintPin::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1e870(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1e870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c1e8a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xc1e8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  byte bVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    bVar1 = F_00c28a90(param_1 GEN_EDX_FWD,param_2);
    if (bVar1 != 0) {
      *(float *)(param_1 + 0x14) = param_5;
      *(int *)(param_1 + 0x10) = param_4;
      *(float *)(param_1 + 0x18) = param_6;
      *(int *)(param_1 + 0xc) = param_3;
      *(float *)(param_1 + 0x1c) = param_7;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::ApplyWeighted */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc1e900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::ConstraintSpring */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1e910(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  F_00c28a70(in_ecx GEN_EDX_FWD,0);
  in_ecx[5] = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eeec));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = uVar1;
  in_ecx[7] = uVar1;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::Apply */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1e960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1e960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  pfVar4 = *(float * PTR32 *)(this + 0xc);
  fVar1 = pfVar4[0x15];
  pfVar5 = *(float * PTR32 *)(this + 0x10);
  fVar2 = pfVar5[0x15];
  if ((GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) && (GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0)))
  {
    return 0;
  }
  fVar7 = GEN_X87((float10)(float)((float10)pfVar4[1] - (float10)pfVar5[1]));
  fVar8 = GEN_X87((float10)(float)((float10)*pfVar4 - (float10)*pfVar5));
  fVar9 = GEN_X87((float10)(float)((float10)pfVar4[2] - (float10)pfVar5[2]));
  fVar7 = (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar9 * fVar9 + (fVar8 * fVar8 + fVar7 * fVar7))))))));
  fVar3 = ((float)GEN_TOF(((((float10)*(float *)(this + 0x14) - fVar7) / fVar7) *
                 (float10)((float)GEN_TOF(((float10)1 / ((float10)fVar1 + (float10)fVar2)))))));
  fVar7 = (float10)fVar3;
  if (fVar7 < (float10)0) {
    fVar3 = *(float *)(this + 0x18);
  }
  else {
    if (!(*(float *)&REFG(undefined, 0x1088114) < fVar3)) goto LAB_00c1ea4b;
    fVar3 = *(float *)(this + 0x1c);
  }
  fVar7 = GEN_X87((float10)((float)GEN_TOF((((float10)fVar3 * (float10)REFG(double, 0x1094800)) * fVar7))));
LAB_00c1ea4b: ;
  iVar6 = *(int *)(this + 0xc);
  fVar8 = GEN_X87((float10)(float)((float10)*pfVar4 - (float10)*pfVar5));
  fVar9 = GEN_X87((float10)(float)(fVar7 * (float10)fVar1));
  fVar10 = GEN_X87((float10)(float)((float10)pfVar4[1] - (float10)pfVar5[1]));
  fVar11 = GEN_X87((float10)(float)((float10)pfVar4[2] - (float10)pfVar5[2]));
  *((float *)GEN_TOP((iVar6 + 0x30))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar6 + 0x30))) + (float10)(float)(fVar9 * fVar8))));
  *((float *)GEN_TOP((iVar6 + 0x34))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar6 + 0x34))) + (float10)(float)(fVar10 * fVar9))));
  *((float *)GEN_TOP((iVar6 + 0x38))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar6 + 0x38))) + (float10)(float)(fVar11 * fVar9))));
  iVar6 = *(int *)(this + 0x10);
  fVar7 = GEN_X87((float10)(float)(fVar7 * (float10)fVar2));
  *((float *)GEN_TOP((iVar6 + 0x30))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar6 + 0x30))) - (float10)(float)(fVar7 * fVar8))));
  *((float *)GEN_TOP((iVar6 + 0x34))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar6 + 0x34))) - (float10)(float)(fVar7 * fVar10))));
  *((float *)GEN_TOP((iVar6 + 0x38))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar6 + 0x38))) - (float10)(float)(fVar7 * fVar11))));
  return 0;
}

/* ref: Client::Graphics::Physics::ConstraintSpring::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1eaf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1eaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Object::CharacterPapList::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00c1eb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1eb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0xc);
  iVar3 = *(int *)(this + 0x18);
  while( true ) {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 - 1;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_FWD);
    if ((char)uVar1 == '\0') break;
    piVar2 = piVar2 + 0x16;
  }
  return 0;
}

/* ref: FUN_00c1eba0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1eba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1eba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x18)));
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      *((undefined1 *)GEN_TOP(((int)piVar2 + 0x51))) = 1;
    }
    piVar2 = piVar2 + 0x16;
  }
  return;
}

/* ref: FUN_00c1ebd0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00c1ebd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1ebd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  char * pcVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  if (iVar1 != 0) {
    pcVar2 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x51)));
    do {
      iVar1 = iVar1 - 1;
      if (*pcVar2 != '\0') {
        return 1;
      }
      pcVar2 = pcVar2 + 0x58;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00c1ec00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1ec00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1ec00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  int iVar2;
  int in_ecx_00;
  
  iVar2 = *((int *)GEN_TOP((in_ecx + 0x18)));
  in_ecx_00 = *((int *)GEN_TOP((in_ecx + 0xc)));
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = iVar2 - 1;
    uVar1 = F_00c28bb0(in_ecx_00 GEN_EDX_FWD);
    if (uVar1 != 0) break;
    in_ecx_00 = in_ecx_00 + 0x58;
  }
  return uVar1;
}

/* ref: FUN_00c1ec30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c1ec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc1ec30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 1) {
    return 0;
  }
  bVar1 = F_00c28bc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,param_2,param_3);
  return bVar1 != 0;
}

/* ref: FUN_00c1ec60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c1ec60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1ec60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x10))) == param_2;
}

/* ref: FUN_00c1ec70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1ec70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc1ec70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  undefined * this_00;
  undefined * this_01;
  int local_8;
  
  iVar2 = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110ef04));
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = ((undefined *)GEN_TOP(((int)this + 0x24)));
  local_8 = 0;
  if (0 < *((int *)GEN_TOP((param_2 + 8)))) {
    param_2 = 0;
    this_00 = ((undefined *)GEN_TOP(((int)this + 0x24)));
    do {
      iVar1 = *((int *)GEN_TOP((iVar2 + 4)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        this_01 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        this_01 = ((undefined *)GEN_TOP(F_00c28c80(this_00 GEN_EDX_FWD,param_1)));
      }
      F_00c28ce0(this_01 GEN_EDX_ARG,iVar1 + param_2 + iVar2);
      param_2 = param_2 + 0xc;
      local_8 = local_8 + 1;
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)));
    } while (local_8 < *((int *)GEN_TOP((iVar2 + 8))));
  }
  return (uint)this;
}

/* ref: FUN_00c1ed00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1ed00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc1ed00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * this_00;
  undefined * this_01;
  
  this_01 = ((undefined *)GEN_TOP(0x0));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x24)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110ef04));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = this_00;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    this_01 = ((undefined *)GEN_TOP(F_00c28c80(this_00 GEN_EDX_FWD,param_1)));
  }
  F_00c28fa0(this_01 GEN_EDX_ARG,param_2,param_3,param_4);
  return (uint)this;
}

/* ref: FUN_00c1ed60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1ed60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc1ed60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Object::CharacterPapList::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1ed80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1ed80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * this;
  int iVar1;
  
  this = ((undefined4 *)GEN_TOP(param_1[3]));
  iVar1 = param_1[6];
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x110ef04));
  for (; iVar1 != 0; iVar1 = iVar1 - 1) {
    F_00c28b70(this GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this)))(this GEN_EDX_ARG,0);
    this = this + 0x16;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c1ee60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1ee60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1ee60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_00c1ee70 */
GEN_OWN GEN_FRAME float10 F_00c1ee70(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xc1ee70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00c1ee90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1ee90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1ee90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_00c1eeb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c1eeb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xc1eeb0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  int * this;
  ushort uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined * this_00;
  int * piVar7;
  undefined * pvVar8;
  bool bVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  double dVar10;
  float fVar11;
  
  this = *((int * PTR32 *)GEN_TOP((param_1 + 0x48)));
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = param_3;
  if (this == ((int *)GEN_TOP(0x0))) {
    return;
  }
  uVar5 = F_00bd3040(this GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x34)) = uVar5;
  (*(int *)(gen_frame + 0x2c)) = this[0x23];
  uVar5 = F_00a0a270(this[0x23]);
  (*(uint *)(gen_frame + 0x30)) = uVar5;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = 0;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = 0;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0xff000000;
  (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  bVar9 = ((*(uint *)(gen_frame + 0x34)) & 0x100) != 0;
  if (bVar9) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = 1;
  }
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (ushort)bVar9;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = 0;
  if (((*(uint *)(gen_frame + 0x34)) & 0x200) != 0) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) | 2;
  }
  uVar5 = F_00be5a80(this GEN_EDX_ARG);
  if (uVar5 == 1) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) | 4;
  }
  if (((*(uint *)(gen_frame + 0x34)) & 0x8000000) != 0) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) | 8;
  }
  if ((*(uint *)(gen_frame + 0x30)) != 0) {
    if (*((char *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + 6))) != '\0') {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) | 0x40;
    }
    if (*((char *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + 7))) != '\0') {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) | 0x80;
    }
  }
  if (((*(uint *)(gen_frame + 0x34)) & 0x800) != 0) {
    F_00bc4070(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x4c))) GEN_EDX_ARG,0xffffffff);
  }
  if (((*(uint *)(gen_frame + 0x34)) & 0x1000) != 0) {
    F_00bc4090(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x4c))) GEN_EDX_ARG,0xffffffff);
  }
  iVar6 = this[0x1d];
  if (iVar6 != 0) goto LAB_00c1efe8;
  piVar7 = ((int *)GEN_TOP(this[0x1c]));
  if (piVar7 == ((int *)GEN_TOP(0x0))) {
    iVar6 = this[0x1b];
    if (iVar6 == 0) {
      if (this[1] != 0) {
        this[0x1b] = *((int *)GEN_TOP((this[1] + 4)));
      }
      iVar6 = this[0x1b];
      if (iVar6 != 0) goto LAB_00c1efce;
    }
    else {
LAB_00c1efce: ;
      this[0x1c] = *((int *)GEN_TOP((iVar6 + 4)));
    }
    piVar7 = ((int *)GEN_TOP(this[0x1c]));
    if (piVar7 != ((int *)GEN_TOP(0x0))) goto LAB_00c1efdb;
  }
  else {
LAB_00c1efdb: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 100))))(piVar7 GEN_EDX_ARG);
    this[0x1d] = uVar5;
  }
  iVar6 = this[0x1d];
LAB_00c1efe8: ;
  iVar6 = *((int *)GEN_TOP((iVar6 + 0x244)));
  if (iVar6 == 0x1e) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) | 0x100;
  }
  else if (iVar6 == 0x20) {
    pvVar8 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x4c)));
    if ((pvVar8 != ((undefined *)GEN_TOP(0x0))) && (((byte *)GEN_TOP(((int)pvVar8 + 0x30))) != ((byte *)GEN_TOP(0x0)))) {
      if ((*((byte *)GEN_TOP(((int)pvVar8 + 0x30))) & 0x80) != 0) {
        F_00bc4070(pvVar8 GEN_EDX_ARG,0xffffffff);
      }
      if ((*((uint *)GEN_TOP(((int)pvVar8 + 0x30))) & 0x100) != 0) {
        F_00bc4090(pvVar8 GEN_EDX_ARG,0xffffffff);
      }
    }
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) | 0x10;
  }
  else if (iVar6 == 0x4a) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) | 0x28;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*this + 0xa8))))(this);
  (*(float *)(gen_frame + 0x0)) = (float)extraout_ST0;
  fVar11 = F_00be5160(this GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x4)) = fVar11;
  (*(float *)(gen_frame + 0x8)) = param_4;
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*this + 0xb4))))(this);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = (short)(int)extraout_ST0_00;
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)),(short)(int)extraout_ST0_00);
  fVar11 = F_00be50e0(this GEN_EDX_ARG);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = (short)(int)fVar11;
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT22((short)(int)fVar11,(undefined2)(*(undefined4 *)(gen_frame + 0xc)));
  (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x2c));
  bVar4 = (byte)((int)(*(uint *)(gen_frame + 0x34)) >> 0x1c);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = bVar4 & 0xf;
  (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),bVar4) & 0xffffff0f;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = (undefined2)param_2;
  (*(uint *)(gen_frame + 0x10)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)),(undefined2)param_2);
  (*(int * PTR32 *)(gen_frame + 0x18)) = this;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if ((*(uint *)(gen_frame + 0x30)) == 0) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 1)) = 0;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = (ushort)(byte)(*(uint *)(gen_frame + 0x14));
    uVar1 = (ushort)(*(uint *)(gen_frame + 0x14));
  }
  else {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 1)) = *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + 4)));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = CONCAT11(*((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + 4))),(byte)(*(uint *)(gen_frame + 0x14)));
    uVar1 = (ushort)(*(uint *)(gen_frame + 0x14));
  }
  (*(uint *)(gen_frame + 0x14)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)),uVar1);
  uVar5 = F_00bc3c20(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x4c))) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (char)uVar5;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = (undefined1)param_3;
  (*(uint *)(gen_frame + 0x14)) = CONCAT13((undefined1)param_3,CONCAT12((char)uVar5,(ushort)(*(uint *)(gen_frame + 0x14))));
  pvVar8 = ((undefined *)GEN_TOP(this[0x1b]));
  if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
    if (this[1] != 0) {
      this[0x1b] = *((int *)GEN_TOP((this[1] + 4)));
    }
    pvVar8 = ((undefined *)GEN_TOP(this[0x1b]));
  }
  uVar5 = F_00beb6d0(pvVar8 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x24)) = uVar5;
  uVar5 = F_00beb700(pvVar8 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x28)) = uVar5;
  this_00 = ((undefined *)GEN_TOP(F_00bc15a0(((undefined *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) + 0x408))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),
                         *((int *)GEN_TOP((param_1 + 0x4c))))));
  *((undefined * PTR32 *)GEN_TOP((param_1 + 0x58))) = this_00;
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    *((undefined1 *)GEN_TOP((param_1 + 0x22))) = 1;
  }
  else {
    F_00bba650(this_00 GEN_EDX_ARG,param_1);
  }
  *((uint *)GEN_TOP((param_1 + 0x1c))) =
       *((uint *)GEN_TOP((param_1 + 0x1c))) ^ (((*(uint *)(gen_frame + 0x10)) >> 0x10) * 4 ^ *((uint *)GEN_TOP((param_1 + 0x1c)))) & 8;
  *((short *)GEN_TOP((param_1 + 0x32))) = (short)(char)(byte)(*(uint *)(gen_frame + 0x14));
  uVar5 = F_00be5a80(this GEN_EDX_ARG);
  *((uint *)GEN_TOP((param_1 + 0x2c))) = uVar5;
  uVar5 = F_00be5a40(this GEN_EDX_ARG);
  *((uint *)GEN_TOP((param_1 + 0x50))) = uVar5;
  uVar5 = F_00be5a60(this GEN_EDX_ARG);
  *((uint *)GEN_TOP((param_1 + 0x54))) = uVar5;
  dVar10 = F_00be5520(this GEN_EDX_ARG);
  *((float *)GEN_TOP((param_1 + 0x34))) = (float)dVar10;
  *((int *)GEN_TOP((param_1 + 0x28))) = (int)(short)(*(uint *)(gen_frame + 0x10));
  *((undefined1 *)GEN_TOP((param_1 + 0x30))) = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 1));
  if ((*(uint *)(gen_frame + 0x30)) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + 5)));
  }
  *((uint *)GEN_TOP((param_1 + 0x1c))) = *((uint *)GEN_TOP((param_1 + 0x1c))) & 0xffffffef;
  *((undefined1 *)GEN_TOP((param_1 + 0x20))) = uVar3;
  if ((*((int *)GEN_TOP((param_1 + 0x58))) != 0) &&
     (pvVar8 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x58))) + 0x10))), pvVar8 != ((undefined *)GEN_TOP(0x0)))) {
    bVar4 = F_009f2f30(pvVar8 GEN_EDX_ARG);
    *((uint *)GEN_TOP((param_1 + 0x1c))) =
         *((uint *)GEN_TOP((param_1 + 0x1c))) ^ ((uint)bVar4 << 4 ^ *((uint *)GEN_TOP((param_1 + 0x1c)))) & 0x10;
  }
  *((uint *)GEN_TOP((param_1 + 0x1c))) = *((uint *)GEN_TOP((param_1 + 0x1c))) & 0xfffffffe;
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 3;
  if (*((int *)GEN_TOP((param_1 + 0x58))) != 0) {
    F_00bba240(*((int *)GEN_TOP((param_1 + 0x58))) GEN_EDX_ARG,(float)(float10)0);
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *((uint *)GEN_TOP((param_1 + 0x1c))) = *((uint *)GEN_TOP((param_1 + 0x1c))) | 0x20;
    *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = uVar2;
  }
  return;
}

/* ref: FUN_00c1f1f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c1f1f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1f1f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  
  if ((*((byte *)GEN_TOP((param_1 + 0x1c))) & 1) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x58)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
      F_00bba6a0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x58))) GEN_EDX_ARG,param_1);
      *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 0;
    }
    *((uint *)GEN_TOP((param_1 + 0x1c))) = *((uint *)GEN_TOP((param_1 + 0x1c))) | 1;
    *((undefined4 *)GEN_TOP((param_1 + 0x40))) = 0;
    *((float *)GEN_TOP((param_1 + 0x44))) = param_2;
    *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 4;
  }
  return;
}

/* ref: FUN_00c1f250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1f250(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc1f250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined4 in_EAX = 0;
  undefined4 extraout_EAX = 0;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  if ((*((byte *)GEN_TOP((param_1 + 0x1c))) & 0x20) != 0) {
    if (*((int *)GEN_TOP((param_1 + 0x58))) != 0) {
      F_00bba240(*((int *)GEN_TOP((param_1 + 0x58))) GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x3c)))));
      in_EAX = extraout_EAX;
    }
    *((uint *)GEN_TOP((param_1 + 0x1c))) = *((uint *)GEN_TOP((param_1 + 0x1c))) & 0xffffffdf;
  }
  fVar1 = *((float *)GEN_TOP((param_1 + 0x44)));
  fVar6 = (float10)param_2;
  if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x40))) + fVar6)));
    *((float *)GEN_TOP((param_1 + 0x40))) = fVar2;
    if ((float10)fVar1 <= (float10)fVar2) {
      *((undefined4 *)GEN_TOP((param_1 + 0x44))) = 0;
    }
  }
  fVar1 = *((float *)GEN_TOP((param_1 + 0x38)));
  bVar3 = GEN_ISNAN(fVar1);
  bVar5 = bVar3 || fVar1 == 0.0;
  uVar4 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar5 << 6 | bVar3 << 2 | 2U | !(0.0 <= fVar1),(char)in_EAX));
  if (bVar3 == bVar5) {
    if (!((float10)fVar1 <= fVar6)) {
      *((float *)GEN_TOP((param_1 + 0x38))) = (float)((float10)fVar1 - fVar6);
      return uVar4;
    }
    *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0;
  }
  return uVar4;
}

/* ref: FUN_00c1f2f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c1f2f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xc1f2f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int * piVar1;
  float fVar2;
  
  *((undefined1 *)GEN_TOP((param_1 + 0x23))) = 1;
  *((uint *)GEN_TOP((param_1 + 0x1c))) =
       *((uint *)GEN_TOP((param_1 + 0x1c))) ^ ((uint)param_2 * 2 ^ *((uint *)GEN_TOP((param_1 + 0x1c)))) & 2;
  fVar2 = param_3;
  if (param_2 != 0) {
    fVar2 = 0.0;
  }
  *((float *)GEN_TOP((param_1 + 0x38))) = fVar2;
  if ((*((byte *)GEN_TOP((param_1 + 0x1c))) & 1) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x58)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_3));
      F_00bba6a0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x58))) GEN_EDX_ARG,param_1);
      *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 0;
    }
    *((uint *)GEN_TOP((param_1 + 0x1c))) = *((uint *)GEN_TOP((param_1 + 0x1c))) | 1;
    *((undefined4 *)GEN_TOP((param_1 + 0x40))) = 0;
    *((float *)GEN_TOP((param_1 + 0x44))) = param_3;
    *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 4;
  }
  return;
}

/* ref: FUN_00c1f3a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c1f3a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc1f3a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((param_1 + 0x3c))) = param_2;
  if (((*((byte *)GEN_TOP((param_1 + 0x1c))) & 0x20) == 0) && (*((int *)GEN_TOP((param_1 + 0x58))) != 0)) {
    F_00bba240(*((int *)GEN_TOP((param_1 + 0x58))) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00c1f3e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c1f3e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc1f3e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 0x58))) != 0) {
    if ((float10)*((float *)GEN_TOP((REFG(int, 0x1375b00) + 0x34))) <= (float10)param_2) {
      param_2 = ((float)GEN_TOF(((float10)param_2 - (float10)*((float *)GEN_TOP((REFG(int, 0x1375b00) + 0x34))))));
    }
    else {
      param_2 = 0.0;
    }
    F_00bba270(*((int *)GEN_TOP((param_1 + 0x58))) GEN_EDX_FWD,
                 (float)((float10)param_2 / (float10)*(double *)&REFG(undefined, 0x1088070)));
  }
  return;
}

/* ref: FUN_00c1f440 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c1f440(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xc1f440u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 0x58))) != 0) {
    F_00bba700(GEN_ARGF(*((int *)GEN_TOP((param_1 + 0x58)))) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00c1f460 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00c1f460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x58))) != 0) {
    return (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x58))) + 0x3c)));
  }
  return (float10)0;
}

/* ref: FUN_00c1f470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1f470(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x48))) + 0x8c)));
}

/* ref: FUN_00c1f480 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00c1f480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  double dVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) != ((undefined *)GEN_TOP(0x0))) {
    dVar1 = F_00bba2a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD);
    return GEN_X87((float)((float10)dVar1 * (float10)*(double *)&REFG(undefined, 0x1088070)));
  }
  return (float)(float10)0;
}

/* ref: FUN_00c1f4d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c1f4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * this_00;
  float10 extraout_ST0;
  float fVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x28))) == 0) {
    return 0;
  }
  if (*((char *)GEN_TOP(((int)this + 0x22))) == '\0') {
    this_00 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
    fVar1 = F_00bd2390(this_00 GEN_EDX_FWD);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*this_00 + 0xa4))))(this_00);
    if (!(extraout_ST0 <= (float10)fVar1)) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c1f520 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c1f520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc1f520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  double dVar1;
  float local_8;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) == ((undefined *)GEN_TOP(0x0))) {
    local_8 = 0.0;
  }
  else {
    dVar1 = F_00bba2a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD);
    local_8 = (float)((float10)dVar1 * (float10)*(double *)&REFG(undefined, 0x1088070));
  }
  if ((float10)local_8 < ((float10)GEN_TOD((*((int *)GEN_TOP(((int)this + 0x2c))) - param_1)))) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1f570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1f570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  return;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1f580(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc1f580u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  uint uVar1;
  float fVar2;
  
  uVar1 = param_5;
  if ((-1 < (int)param_5) && (param_5 == *((uint *)GEN_TOP((param_1 + 0x24))))) {
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x58))) != ((undefined *)GEN_TOP(0x0))) {
      F_00bba6a0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x58))) GEN_EDX_FWD,param_1);
      *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 0;
    }
    *((undefined1 *)GEN_TOP((param_1 + 0x23))) = 1;
    *((uint *)GEN_TOP((param_1 + 0x1c))) =
         *((uint *)GEN_TOP((param_1 + 0x1c))) ^ ((uint)param_3 * 2 ^ *((uint *)GEN_TOP((param_1 + 0x1c)))) & 2;
    fVar2 = param_4;
    if (param_3 != 0) {
      fVar2 = 0.0;
    }
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x1c))) | 1;
    *((float *)GEN_TOP((param_1 + 0x38))) = fVar2;
    *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 4;
    *((uint *)GEN_TOP((param_1 + 0x1c))) = uVar1;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1f5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc1f5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00bbaf90(*(undefined * PTR32 *)(this + 0x4c) GEN_EDX_FWD);
  if (uVar1 != 0) {
    F_00aa0740(param_2,param_3);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf4 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1f620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1f620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x21))) = 1;
  return;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1f630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1f630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x21))) = 0;
  return;
}

/* ref: FUN_00c1f640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1f640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc1f640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x48)));
  piVar4 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x74)));
  piVar6 = ((int *)GEN_TOP(0x0));
  piVar5 = piVar4;
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    piVar5 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x70)));
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      piVar4 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x6c)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        if (*((int *)GEN_TOP((iVar1 + 4))) != 0) {
          *((undefined4 *)GEN_TOP((iVar1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) + 4)));
        }
        piVar4 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x6c)));
        if (piVar4 != ((int *)GEN_TOP(0x0))) goto LAB_00c1f678;
      }
      else {
LAB_00c1f678: ;
        *((int *)GEN_TOP((iVar1 + 0x70))) = piVar4[1];
      }
      piVar5 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x70)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) goto LAB_00c1f685;
    }
    else {
LAB_00c1f685: ;
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 100))))(piVar5 GEN_EDX_FWD)));
      *((int * PTR32 *)GEN_TOP((iVar1 + 0x74))) = piVar4;
    }
    piVar5 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x74)));
  }
  piVar7 = piVar5;
  if (piVar5[0x37] == 0) goto LAB_00c1f6e7;
  piVar4 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x70)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 0x70))) == ((int *)GEN_TOP(0x0))) {
    iVar2 = *((int *)GEN_TOP((iVar1 + 0x6c)));
    if (iVar2 == 0) {
      if (*((int *)GEN_TOP((iVar1 + 4))) != 0) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) + 4)));
      }
      iVar2 = *((int *)GEN_TOP((iVar1 + 0x6c)));
      if (iVar2 != 0) goto LAB_00c1f6bc;
    }
    else {
LAB_00c1f6bc: ;
      *((undefined4 *)GEN_TOP((iVar1 + 0x70))) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
    }
    piVar4 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x70)));
    if (*((int * PTR32 *)GEN_TOP((iVar1 + 0x70))) == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  do {
    piVar3 = piVar4;
    piVar4 = piVar3;
    piVar7 = piVar6;
    if (piVar3 == piVar5) break;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x68))))(piVar3 GEN_EDX_ARG)));
    piVar6 = piVar3;
    piVar7 = piVar3;
  } while (piVar4 != ((int *)GEN_TOP(0x0)));
LAB_00c1f6e7: ;
  if (piVar7 != ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)GEN_TOP(F_00bc3440(piVar7 GEN_EDX_ARG,4,(undefined1)param_1,0)));
  }
  return (uint)piVar4;
}

/* ref: FUN_00c1f710 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00c1f710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc1f710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) & 0xfffffffe;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    F_00bc5400(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x10))));
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  iVar1 = 0;
  piVar2 = ((int *)GEN_TOP((param_1 + 0xc)));
  do {
    if (((undefined *)GEN_TOP(*piVar2)) == this) {
      *((undefined4 *)GEN_TOP((param_1 + 0xc + iVar1 * 4))) = 0;
      return 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 4);
  return 0;
}

/* ref: FUN_00c1f760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1f760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc1f760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110ef94));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0xffffffc0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0xffffffff;
  *((undefined2 *)GEN_TOP(((int)this + 0x32))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  return (uint)this;
}

/* ref: FUN_00c1f7e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00c1f7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110ef94));
  if ((*((int *)GEN_TOP(((int)this + 0x18))) == 3) && ((*((byte *)GEN_TOP(((int)this + 0x1c))) & 1) == 0)) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x58)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
      F_00bba6a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,this);
      *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
    }
    *((uint *)GEN_TOP(((int)this + 0x1c))) = *((uint *)GEN_TOP(((int)this + 0x1c))) | 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 4;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
  return;
}

/* ref: Client::System::Scheduler::Control::MotionControl::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1f850(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1f850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x110ef94));
  if ((param_1[6] == 3) && ((*(byte *)(param_1 + 7) & 1) == 0)) {
    piVar1 = ((int *)GEN_TOP(param_1[0x16]));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
      F_00bba6a0(((undefined *)GEN_TOP(param_1[0x16])) GEN_EDX_ARG,param_1);
      param_1[0x16] = 0;
    }
    param_1[7] = param_1[7] | 1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[6] = 4;
  }
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c1f8c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1f8c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00bc89b0(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110efdc));
  return (uint)in_ecx;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::vf3 */
GEN_OWN GEN_NOFRAME byte F_00c1f8f0(void)
{
  GEN_ENTER(0xc1f8f0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::CreateRequest */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1f900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc1f900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  undefined * pHVar2;
  
  pHVar2 = ((undefined *)GEN_TOP(F_00406b90(0x668,0,0)));
  if (pHVar2 != ((undefined *)GEN_TOP(0x0))) {
    pHVar2 = ((undefined *)GEN_TOP(F_00c29330(pHVar2 GEN_EDX_ARG)));
    if (pHVar2 != ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_00c29aa0(pHVar2 GEN_EDX_ARG,*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4);
      if (bVar1 == 0) {
        (*((code *)GEN_TOP(**(undefined4 * PTR32 *)pHVar2)))(pHVar2,1);
        pHVar2 = ((undefined *)GEN_TOP(0x0));
      }
      return (uint)pHVar2;
    }
  }
  return 0;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::OpenSession */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00c1f9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = gen_imp_WinHttpOpen((*(undefined * PTR32 (*)[1])REFP(0x110efc0)),0,0,0,0x10000000);
  *(undefined4 *)(this + 4) = uVar1;
  return 1;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::CloseSession */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00c1f9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc1f9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_WinHttpCloseHandle(*(undefined4 *)(this + 4));
  return 1;
}

/* ref: Client::SupportDesk::HttpConnectionImpl::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1f9d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc1f9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x110efdc));
  F_00bc89c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c1fa10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1fa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc1fa10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  float * pfVar1;
  float * pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  uint uVar11;
  int * piVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  
  memcpy(&(auVar14), ((undefined1 *)(gen_frame + 0x10)), sizeof(((undefined1 *)(gen_frame + 0x10))) < sizeof(auVar14) ? sizeof(((undefined1 *)(gen_frame + 0x10))) : sizeof(auVar14));
  memcpy(&(auVar16), ((undefined1 *)(gen_frame + 0x0)), sizeof(((undefined1 *)(gen_frame + 0x0))) < sizeof(auVar16) ? sizeof(((undefined1 *)(gen_frame + 0x0))) : sizeof(auVar16));
  piVar12 = *(int * PTR32 *)this;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 12)) = (*(undefined4 *)((char *)&auVar14 + 12));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 12)) = (*(undefined4 *)((char *)&auVar16 + 12));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8)) = REFG(float, 0x1097b10);
  memcpy(&(auVar16), ((undefined1 *)(gen_frame + 0x0)), sizeof(((undefined1 *)(gen_frame + 0x0))) < sizeof(auVar16) ? sizeof(((undefined1 *)(gen_frame + 0x0))) : sizeof(auVar16));
  memcpy(&(auVar14), ((undefined1 *)(gen_frame + 0x10)), sizeof(((undefined1 *)(gen_frame + 0x10))) < sizeof(auVar14) ? sizeof(((undefined1 *)(gen_frame + 0x10))) : sizeof(auVar14));
  for (iVar10 = *((int *)GEN_TOP(((int)this + 4))) - (int)((int)(uintptr_t)piVar12) >> 2; iVar10 != 0; iVar10 = iVar10 - 1) {
    iVar3 = *piVar12;
    uVar11 = 0;
    if (*((ushort *)GEN_TOP((iVar3 + 0xff0))) != 0) {
      do {
        pfVar1 = ((float *)GEN_TOP((iVar3 + (uVar11 & 0xffff) * 0x10)));
        pfVar2 = ((float *)GEN_TOP((iVar3 + ((uVar11 & 0xffff) + 0x78) * 0x10)));
        uVar11 = uVar11 + 1;
        (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - pfVar2[1]);
        (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - *pfVar2);
        (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - pfVar2[2]);
        (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - pfVar2[3]);
        gen_minps(&(auVar14), &(auVar14), &(auVar7));
        (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits(pfVar2[1] + pfVar1[1]);
        (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits(*pfVar2 + *pfVar1);
        (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits(pfVar2[2] + pfVar1[2]);
        (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits(pfVar2[3] + pfVar1[3]);
        gen_maxps(&(auVar16), &(auVar16), &(auVar4));
      } while (uVar11 < *((ushort *)GEN_TOP((iVar3 + 0xff0))));
    }
    piVar12 = piVar12 + 1;
  }
  piVar12 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  for (iVar10 = *((int *)GEN_TOP(((int)this + 0x14))) - (int)((int)(uintptr_t)piVar12) >> 2; iVar10 != 0; iVar10 = iVar10 - 1) {
    iVar3 = *piVar12;
    uVar11 = 0;
    if (*((ushort *)GEN_TOP((iVar3 + 0xff0))) != 0) {
      do {
        pfVar1 = ((float *)GEN_TOP((iVar3 + (uVar11 & 0xffff) * 0x10)));
        pfVar2 = ((float *)GEN_TOP((iVar3 + ((uVar11 & 0xffff) + 0x78) * 0x10)));
        uVar11 = uVar11 + 1;
        (*(undefined4 *)((char *)&auVar8 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - pfVar2[1]);
        (*(undefined4 *)((char *)&auVar8 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - *pfVar2);
        (*(undefined4 *)((char *)&auVar8 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - pfVar2[2]);
        (*(undefined4 *)((char *)&auVar8 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - pfVar2[3]);
        gen_minps(&(auVar14), &(auVar14), &(auVar8));
        (*(undefined4 *)((char *)&auVar5 + 4)) = (undefined4)gen_fl2bits(pfVar2[1] + pfVar1[1]);
        (*(undefined4 *)((char *)&auVar5 + 0)) = (undefined4)gen_fl2bits(*pfVar2 + *pfVar1);
        (*(undefined4 *)((char *)&auVar5 + 8)) = (undefined4)gen_fl2bits(pfVar2[2] + pfVar1[2]);
        (*(undefined4 *)((char *)&auVar5 + 12)) = (undefined4)gen_fl2bits(pfVar2[3] + pfVar1[3]);
        gen_maxps(&(auVar16), &(auVar16), &(auVar5));
      } while (uVar11 < *((ushort *)GEN_TOP((iVar3 + 0xff0))));
    }
    piVar12 = piVar12 + 1;
  }
  gen_vset(auVar15, 12, ((unsigned char *)(auVar16) + 0), 12);
  gen_vset(auVar13, 12, ((unsigned char *)(auVar14) + 0), 12);
  piVar12 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
  for (iVar10 = *((int *)GEN_TOP(((int)this + 0x24))) - (int)((int)(uintptr_t)piVar12) >> 2; iVar10 != 0; iVar10 = iVar10 - 1) {
    iVar3 = *piVar12;
    uVar11 = 0;
    if (*((ushort *)GEN_TOP((iVar3 + 0xff0))) != 0) {
      do {
        pfVar1 = ((float *)GEN_TOP((iVar3 + (uVar11 & 0xffff) * 0x10)));
        pfVar2 = ((float *)GEN_TOP((iVar3 + ((uVar11 & 0xffff) + 0x78) * 0x10)));
        uVar11 = uVar11 + 1;
        (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - pfVar2[1]);
        (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - *pfVar2);
        (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - pfVar2[2]);
        (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - pfVar2[3]);
        gen_minps(&(auVar14), &(auVar14), &(auVar9));
        (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits(pfVar2[1] + pfVar1[1]);
        (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits(*pfVar2 + *pfVar1);
        (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits(pfVar2[2] + pfVar1[2]);
        (*(undefined4 *)((char *)&auVar6 + 12)) = (undefined4)gen_fl2bits(pfVar2[3] + pfVar1[3]);
        gen_maxps(&(auVar16), &(auVar16), &(auVar6));
      } while (uVar11 < *((ushort *)GEN_TOP((iVar3 + 0xff0))));
    }
    gen_vset(auVar15, 12, ((unsigned char *)(auVar16) + 0), 12);
    gen_vset(auVar13, 12, ((unsigned char *)(auVar14) + 0), 12);
    piVar12 = piVar12 + 1;
  }
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0)) = (*(undefined4 *)((char *)&auVar13 + 0));
  *param_1 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4)) = (*(undefined4 *)((char *)&auVar13 + 4));
  param_1[1] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8)) = (*(undefined4 *)((char *)&auVar13 + 8));
  param_1[2] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (*(undefined4 *)((char *)&auVar15 + 0));
  param_1[4] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (*(undefined4 *)((char *)&auVar15 + 4));
  param_1[5] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8)) = (*(undefined4 *)((char *)&auVar15 + 8));
  param_1[6] = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
  return (uint)param_1;
}

/* ref: Global::ComputeBounds */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c1fbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc1fbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  float * pfVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  
  this_00 = REFG(void * PTR32, 0x1370c1c);
  uVar11 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8)) = REFG(float, 0x1090998);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 12)) = (*(undefined4 *)(gen_frame + 0x3c));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8)) = REFG(float, 0x1097b10);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 12)) = (*(undefined4 *)(gen_frame + 0x2c));
  (*(uint *)(gen_frame + 0x4c)) = 0;
  uVar13 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  uVar14 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  uVar15 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  uVar16 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  uVar17 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  uVar18 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  if (uVar11 != 0) {
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)this + (*(uint *)(gen_frame + 0x4c)) * 4)));
      uVar3 = *((ushort *)GEN_TOP((iVar4 + 0xff0)));
      uVar12 = 0;
      if (uVar3 != 0) {
        do {
          dVar19 = F_00b137d0(this_00 GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (uVar12 & 0xffff) * 2))));
          pfVar1 = ((float *)GEN_TOP((iVar4 + (uVar12 & 0xffff) * 0x10)));
          fVar2 = (float)((float10)dVar19 + (float10)*(double *)&REFG(undefined, 0x10947f0));
          uVar12 = uVar12 + 1;
          (*(undefined4 *)((char *)&auVar8 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - fVar2);
          (*(undefined4 *)((char *)&auVar8 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - fVar2);
          (*(undefined4 *)((char *)&auVar8 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - fVar2);
          (*(undefined4 *)((char *)&auVar8 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - fVar2);
          gen_minps(((undefined1 *)(gen_frame + 0x10)), ((undefined1 *)(gen_frame + 0x10)), &(auVar8));
          (*(undefined4 *)((char *)&auVar5 + 4)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[1]);
          (*(undefined4 *)((char *)&auVar5 + 0)) = (undefined4)gen_fl2bits(fVar2 + *pfVar1);
          (*(undefined4 *)((char *)&auVar5 + 8)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[2]);
          (*(undefined4 *)((char *)&auVar5 + 12)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[3]);
          gen_maxps(((undefined1 *)(gen_frame + 0x0)), ((undefined1 *)(gen_frame + 0x0)), &(auVar5));
          uVar16 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
          uVar17 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
          uVar18 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
          uVar13 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
          uVar14 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
          uVar15 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
        } while (uVar12 < uVar3);
      }
      (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) + 1;
    } while ((*(uint *)(gen_frame + 0x4c)) < uVar11);
  }
  uVar11 = *((int *)GEN_TOP(((int)this + 0x14))) - *((int *)GEN_TOP(((int)this + 0x10))) >> 2;
  (*(uint *)(gen_frame + 0x54)) = 0;
  if (uVar11 != 0) {
    do {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (*(uint *)(gen_frame + 0x54)) * 4)));
      uVar3 = *((ushort *)GEN_TOP((iVar4 + 0xff0)));
      uVar12 = 0;
      if (uVar3 != 0) {
        do {
          dVar19 = F_00b137d0(this_00 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (uVar12 & 0xffff) * 2))));
          pfVar1 = ((float *)GEN_TOP((iVar4 + (uVar12 & 0xffff) * 0x10)));
          fVar2 = (float)((float10)dVar19 + (float10)*(double *)&REFG(undefined, 0x10947f0));
          uVar12 = uVar12 + 1;
          (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - fVar2);
          (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - fVar2);
          (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - fVar2);
          (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - fVar2);
          gen_minps(((undefined1 *)(gen_frame + 0x10)), ((undefined1 *)(gen_frame + 0x10)), &(auVar9));
          (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[1]);
          (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits(fVar2 + *pfVar1);
          (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[2]);
          (*(undefined4 *)((char *)&auVar6 + 12)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[3]);
          gen_maxps(((undefined1 *)(gen_frame + 0x0)), ((undefined1 *)(gen_frame + 0x0)), &(auVar6));
          uVar16 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
          uVar17 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
          uVar18 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
          uVar13 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
          uVar14 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
          uVar15 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
        } while (uVar12 < uVar3);
      }
      (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x54)) + 1;
    } while ((*(uint *)(gen_frame + 0x54)) < uVar11);
  }
  uVar11 = *((int *)GEN_TOP(((int)this + 0x24))) - *((int *)GEN_TOP(((int)this + 0x20))) >> 2;
  (*(uint *)(gen_frame + 0x50)) = 0;
  if (uVar11 != 0) {
    do {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + (*(uint *)(gen_frame + 0x50)) * 4)));
      uVar3 = *((ushort *)GEN_TOP((iVar4 + 0xff0)));
      uVar12 = 0;
      if (uVar3 != 0) {
        do {
          dVar19 = F_00b137d0(this_00 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar4 + 0xf00 + (uVar12 & 0xffff) * 2))));
          pfVar1 = ((float *)GEN_TOP((iVar4 + (uVar12 & 0xffff) * 0x10)));
          fVar2 = (float)((float10)dVar19 + (float10)*(double *)&REFG(undefined, 0x10947f0));
          uVar12 = uVar12 + 1;
          (*(undefined4 *)((char *)&auVar10 + 4)) = (undefined4)gen_fl2bits(pfVar1[1] - fVar2);
          (*(undefined4 *)((char *)&auVar10 + 0)) = (undefined4)gen_fl2bits(*pfVar1 - fVar2);
          (*(undefined4 *)((char *)&auVar10 + 8)) = (undefined4)gen_fl2bits(pfVar1[2] - fVar2);
          (*(undefined4 *)((char *)&auVar10 + 12)) = (undefined4)gen_fl2bits(pfVar1[3] - fVar2);
          gen_minps(((undefined1 *)(gen_frame + 0x10)), ((undefined1 *)(gen_frame + 0x10)), &(auVar10));
          (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[1]);
          (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits(fVar2 + *pfVar1);
          (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[2]);
          (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits(fVar2 + pfVar1[3]);
          gen_maxps(((undefined1 *)(gen_frame + 0x0)), ((undefined1 *)(gen_frame + 0x0)), &(auVar7));
          uVar16 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
          uVar17 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
          uVar18 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
          uVar13 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
          uVar14 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
          uVar15 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
        } while (uVar12 < uVar3);
      }
      (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) + 1;
    } while ((*(uint *)(gen_frame + 0x50)) < uVar11);
  }
  *param_1 = uVar16;
  param_1[1] = uVar17;
  param_1[2] = uVar18;
  param_1[4] = uVar13;
  param_1[5] = uVar14;
  param_1[6] = uVar15;
  return (uint)param_1;
}

/* ref: Global::SetEntry */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c1fea0(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc1fea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = *((byte *)GEN_TOP(((int)param_1 + 3)));
  iVar2 = (uint)*param_1 * 0x1000 + 0x80 + *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930)));
  puVar4 = ((undefined4 *)GEN_TOP(((uint)bVar3 * 0x10 + iVar2)));
  *puVar4 = *param_3;
  puVar4[1] = param_3[1];
  puVar4[2] = param_3[2];
  puVar4[3] = param_3[3];
  iVar1 = bVar3 + 0x78;
  *((undefined4 *)GEN_TOP((iVar2 + iVar1 * 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP((iVar2 + 4 + iVar1 * 0x10))) = param_2[1];
  *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar1 * 0x10))) = param_2[2];
  return iVar1 * 2;
}

/* ref: Global::RemoveEntryList0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c1ff10(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc1ff10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  short * psVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 * puVar14;
  int * piVar15;
  int iVar16;
  undefined2 * puVar17;
  
  uVar12 = *param_1;
  iVar11 = (int)(param_1[1] - uVar12) >> 2;
  iVar16 = *((int *)GEN_TOP(((uVar12 - 4) + iVar11 * 4)));
  uVar12 = *((uint *)GEN_TOP(((uVar12 - 4) + iVar11 * 4)));
  if (param_2 == *((ushort *)GEN_TOP((iVar16 + 0xefe + (uint)*((ushort *)GEN_TOP((iVar16 + 0xff0))) * 2)))) {
    psVar1 = ((short *)GEN_TOP((uVar12 + 0xff0)));
    *psVar1 = *psVar1 - 1;
    sVar2 = *psVar1;
  }
  else {
    uVar13 = (uint)(byte)(*((char *)GEN_TOP((uVar12 + 0xff0))) - 1);
    uVar10 = *((ushort *)GEN_TOP((uVar12 + 0xf00 + uVar13 * 2)));
    iVar16 = uVar13 + 0x78;
    iVar11 = uVar13 * 0x10;
    uVar3 = *((undefined4 *)GEN_TOP((iVar11 + uVar12)));
    uVar4 = *((undefined4 *)GEN_TOP((iVar11 + 4 + uVar12)));
    uVar5 = *((undefined4 *)GEN_TOP((iVar11 + 8 + uVar12)));
    uVar6 = *((undefined4 *)GEN_TOP((iVar11 + 0xc + uVar12)));
    uVar7 = *((undefined4 *)GEN_TOP((uVar12 + iVar16 * 0x10)));
    uVar8 = *((undefined4 *)GEN_TOP((uVar12 + 4 + iVar16 * 0x10)));
    uVar9 = *((undefined4 *)GEN_TOP((uVar12 + 8 + iVar16 * 0x10)));
    *((short *)GEN_TOP((uVar12 + 0xff0))) = *((short *)GEN_TOP((uVar12 + 0xff0))) - 1;
    piVar15 = ((int *)GEN_TOP(*param_1));
    uVar13 = (int)(param_1[1] - (int)piVar15) >> 2;
    param_2 = 0;
    if (uVar13 != 0) {
      do {
        iVar16 = *piVar15;
        if ((short)param_3 == *((short *)GEN_TOP((iVar16 + 0xff4)))) goto LAB_00c1ffe6;
        param_2 = param_2 + 1;
        piVar15 = piVar15 + 1;
      } while (param_2 < uVar13);
    }
    iVar16 = 0;
LAB_00c1ffe6: ;
    uVar13 = (uint)param_4;
    *((ushort *)GEN_TOP((iVar16 + 0xf00 + uVar13 * 2))) = uVar10;
    puVar14 = ((undefined4 *)GEN_TOP((uVar13 * 0x10 + iVar16)));
    *puVar14 = uVar3;
    puVar14[1] = uVar4;
    puVar14[2] = uVar5;
    puVar14[3] = uVar6;
    iVar11 = uVar13 + 0x78;
    *((undefined4 *)GEN_TOP((iVar16 + iVar11 * 0x10))) = uVar7;
    *((undefined4 *)GEN_TOP((iVar16 + 4 + iVar11 * 0x10))) = uVar8;
    *((undefined4 *)GEN_TOP((iVar16 + 8 + iVar11 * 0x10))) = uVar9;
    puVar17 = ((undefined2 *)GEN_TOP(((uint)uVar10 * 0x10 + *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 8))))));
    *puVar17 = *((undefined2 *)GEN_TOP((iVar16 + 0xff4)));
    *((byte *)GEN_TOP(((int)puVar17 + 3))) = param_4;
    sVar2 = *((short *)GEN_TOP((uVar12 + 0xff0)));
  }
  if (sVar2 == 0) {
    F_00bca970(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930))) GEN_EDX_FWD,uVar12);
    uVar12 = param_1[1];
    if (*param_1 != uVar12) {
      uVar12 = uVar12 - 4;
      param_1[1] = uVar12;
    }
  }
  param_1[0xc] = param_1[0xc] - 1;
  return uVar12;
}

/* ref: Global::RemoveEntryList1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c20080(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc20080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  short * psVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 * puVar14;
  int iVar15;
  undefined2 * puVar16;
  int * piVar17;
  
  iVar11 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10))) >> 2;
  iVar15 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) - 4 + iVar11 * 4)));
  uVar12 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) - 4 + iVar11 * 4)));
  if (param_2 == *((ushort *)GEN_TOP((iVar15 + 0xefe + (uint)*((ushort *)GEN_TOP((iVar15 + 0xff0))) * 2)))) {
    psVar1 = ((short *)GEN_TOP((uVar12 + 0xff0)));
    *psVar1 = *psVar1 - 1;
    sVar2 = *psVar1;
  }
  else {
    uVar13 = (uint)(byte)(*((char *)GEN_TOP((uVar12 + 0xff0))) - 1);
    uVar10 = *((ushort *)GEN_TOP((uVar12 + 0xf00 + uVar13 * 2)));
    iVar15 = uVar13 + 0x78;
    iVar11 = uVar13 * 0x10;
    uVar3 = *((undefined4 *)GEN_TOP((iVar11 + uVar12)));
    uVar4 = *((undefined4 *)GEN_TOP((iVar11 + 4 + uVar12)));
    uVar5 = *((undefined4 *)GEN_TOP((iVar11 + 8 + uVar12)));
    uVar6 = *((undefined4 *)GEN_TOP((iVar11 + 0xc + uVar12)));
    uVar7 = *((undefined4 *)GEN_TOP((uVar12 + iVar15 * 0x10)));
    uVar8 = *((undefined4 *)GEN_TOP((uVar12 + 4 + iVar15 * 0x10)));
    uVar9 = *((undefined4 *)GEN_TOP((uVar12 + 8 + iVar15 * 0x10)));
    *((short *)GEN_TOP((uVar12 + 0xff0))) = *((short *)GEN_TOP((uVar12 + 0xff0))) - 1;
    param_2 = 0;
    uVar13 = *((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x10))) >> 2;
    if (uVar13 != 0) {
      piVar17 = *((int * PTR32 *)GEN_TOP((param_1 + 0x10)));
      do {
        iVar15 = *piVar17;
        if ((short)param_3 == *((short *)GEN_TOP((iVar15 + 0xff4)))) goto LAB_00c2015a;
        param_2 = param_2 + 1;
        piVar17 = piVar17 + 1;
      } while (param_2 < uVar13);
    }
    iVar15 = 0;
LAB_00c2015a: ;
    uVar13 = (uint)param_4;
    *((ushort *)GEN_TOP((iVar15 + 0xf00 + uVar13 * 2))) = uVar10;
    puVar14 = ((undefined4 *)GEN_TOP((uVar13 * 0x10 + iVar15)));
    *puVar14 = uVar3;
    puVar14[1] = uVar4;
    puVar14[2] = uVar5;
    puVar14[3] = uVar6;
    iVar11 = uVar13 + 0x78;
    *((undefined4 *)GEN_TOP((iVar15 + iVar11 * 0x10))) = uVar7;
    *((undefined4 *)GEN_TOP((iVar15 + 4 + iVar11 * 0x10))) = uVar8;
    *((undefined4 *)GEN_TOP((iVar15 + 8 + iVar11 * 0x10))) = uVar9;
    puVar16 = ((undefined2 *)GEN_TOP(((uint)uVar10 * 0x10 + *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 8))))));
    *puVar16 = *((undefined2 *)GEN_TOP((iVar15 + 0xff4)));
    *((byte *)GEN_TOP(((int)puVar16 + 3))) = param_4;
    sVar2 = *((short *)GEN_TOP((uVar12 + 0xff0)));
  }
  if (sVar2 == 0) {
    F_00bca970(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930))) GEN_EDX_FWD,uVar12);
    uVar12 = *((uint *)GEN_TOP((param_1 + 0x14)));
    if (*((uint *)GEN_TOP((param_1 + 0x10))) != uVar12) {
      uVar12 = uVar12 - 4;
      *((uint *)GEN_TOP((param_1 + 0x14))) = uVar12;
    }
  }
  *((int *)GEN_TOP((param_1 + 0x34))) = *((int *)GEN_TOP((param_1 + 0x34))) - 1;
  return uVar12;
}

/* ref: Global::RemoveEntryList2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c20200(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc20200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  short * psVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 * puVar14;
  int iVar15;
  undefined2 * puVar16;
  int * piVar17;
  
  iVar11 = *((int *)GEN_TOP((param_1 + 0x24))) - *((int *)GEN_TOP((param_1 + 0x20))) >> 2;
  iVar15 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) - 4 + iVar11 * 4)));
  uVar12 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) - 4 + iVar11 * 4)));
  if (param_2 == *((ushort *)GEN_TOP((iVar15 + 0xefe + (uint)*((ushort *)GEN_TOP((iVar15 + 0xff0))) * 2)))) {
    psVar1 = ((short *)GEN_TOP((uVar12 + 0xff0)));
    *psVar1 = *psVar1 - 1;
    sVar2 = *psVar1;
  }
  else {
    uVar13 = (uint)(byte)(*((char *)GEN_TOP((uVar12 + 0xff0))) - 1);
    uVar10 = *((ushort *)GEN_TOP((uVar12 + 0xf00 + uVar13 * 2)));
    iVar15 = uVar13 + 0x78;
    iVar11 = uVar13 * 0x10;
    uVar3 = *((undefined4 *)GEN_TOP((iVar11 + uVar12)));
    uVar4 = *((undefined4 *)GEN_TOP((iVar11 + 4 + uVar12)));
    uVar5 = *((undefined4 *)GEN_TOP((iVar11 + 8 + uVar12)));
    uVar6 = *((undefined4 *)GEN_TOP((iVar11 + 0xc + uVar12)));
    uVar7 = *((undefined4 *)GEN_TOP((uVar12 + iVar15 * 0x10)));
    uVar8 = *((undefined4 *)GEN_TOP((uVar12 + 4 + iVar15 * 0x10)));
    uVar9 = *((undefined4 *)GEN_TOP((uVar12 + 8 + iVar15 * 0x10)));
    *((short *)GEN_TOP((uVar12 + 0xff0))) = *((short *)GEN_TOP((uVar12 + 0xff0))) - 1;
    param_2 = 0;
    uVar13 = *((int *)GEN_TOP((param_1 + 0x24))) - *((int *)GEN_TOP((param_1 + 0x20))) >> 2;
    if (uVar13 != 0) {
      piVar17 = *((int * PTR32 *)GEN_TOP((param_1 + 0x20)));
      do {
        iVar15 = *piVar17;
        if ((short)param_3 == *((short *)GEN_TOP((iVar15 + 0xff4)))) goto LAB_00c202da;
        param_2 = param_2 + 1;
        piVar17 = piVar17 + 1;
      } while (param_2 < uVar13);
    }
    iVar15 = 0;
LAB_00c202da: ;
    uVar13 = (uint)param_4;
    *((ushort *)GEN_TOP((iVar15 + 0xf00 + uVar13 * 2))) = uVar10;
    puVar14 = ((undefined4 *)GEN_TOP((uVar13 * 0x10 + iVar15)));
    *puVar14 = uVar3;
    puVar14[1] = uVar4;
    puVar14[2] = uVar5;
    puVar14[3] = uVar6;
    iVar11 = uVar13 + 0x78;
    *((undefined4 *)GEN_TOP((iVar15 + iVar11 * 0x10))) = uVar7;
    *((undefined4 *)GEN_TOP((iVar15 + 4 + iVar11 * 0x10))) = uVar8;
    *((undefined4 *)GEN_TOP((iVar15 + 8 + iVar11 * 0x10))) = uVar9;
    puVar16 = ((undefined2 *)GEN_TOP(((uint)uVar10 * 0x10 + *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 8))))));
    *puVar16 = *((undefined2 *)GEN_TOP((iVar15 + 0xff4)));
    *((byte *)GEN_TOP(((int)puVar16 + 3))) = param_4;
    sVar2 = *((short *)GEN_TOP((uVar12 + 0xff0)));
  }
  if (sVar2 == 0) {
    F_00bca970(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930))) GEN_EDX_FWD,uVar12);
    uVar12 = *((uint *)GEN_TOP((param_1 + 0x24)));
    if (*((uint *)GEN_TOP((param_1 + 0x20))) != uVar12) {
      uVar12 = uVar12 - 4;
      *((uint *)GEN_TOP((param_1 + 0x24))) = uVar12;
    }
  }
  *((int *)GEN_TOP((param_1 + 0x38))) = *((int *)GEN_TOP((param_1 + 0x38))) - 1;
  return uVar12;
}

/* ref: Global::ExpandBoundsByBox */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c20380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc20380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  (*(float *)((char *)&auVar5 + 0)) = *param_2 - *param_3;
  (*(float *)((char *)&auVar5 + 4)) = param_2[1] - param_3[1];
  (*(float *)((char *)&auVar5 + 8)) = param_2[2] - param_3[2];
  (*(float *)((char *)&auVar5 + 12)) = param_2[3] - param_3[3];
  fVar2 = *param_3 + *param_2;
  fVar3 = param_3[1] + param_2[1];
  fVar4 = param_3[2] + param_2[2];
  if ((*((int *)GEN_TOP(((int)this + 0x24))) - *((int *)GEN_TOP(((int)this + 0x20))) >> 2) +
      (*((int *)GEN_TOP(((int)this + 0x14))) - *((int *)GEN_TOP(((int)this + 0x10))) >> 2) +
      (*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) == 0) {
    *((float *)GEN_TOP(*param_1)) = (*(float *)((char *)&auVar5 + 0));
    *((float *)GEN_TOP((*param_1 + 4))) = (*(float *)((char *)&auVar5 + 4));
    *((float *)GEN_TOP((*param_1 + 8))) = (*(float *)((char *)&auVar5 + 8));
    *((float *)GEN_TOP(param_1[1])) = fVar2;
    *((float *)GEN_TOP((param_1[1] + 4))) = fVar3;
    *((float *)GEN_TOP((param_1[1] + 8))) = fVar4;
    return (uint)param_1;
  }
  gen_minps(&(auVar6), &(*param_1), &(auVar5));
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(param_3[3] + param_2[3]);
  gen_maxps(&(auVar5), &(param_1[1]), &(auVar1));
  local_30 = (*(undefined4 *)((char *)&auVar6 + 0));
  *((undefined4 *)GEN_TOP(*param_1)) = local_30;
  uStack_2c = (*(undefined4 *)((char *)&auVar6 + 4));
  *((undefined4 *)GEN_TOP((*param_1 + 4))) = uStack_2c;
  uStack_28 = (*(undefined4 *)((char *)&auVar6 + 8));
  *((undefined4 *)GEN_TOP((*param_1 + 8))) = uStack_28;
  local_20 = (*(undefined4 *)((char *)&auVar5 + 0));
  *((undefined4 *)GEN_TOP(param_1[1])) = local_20;
  uStack_1c = (*(undefined4 *)((char *)&auVar5 + 4));
  *((undefined4 *)GEN_TOP((param_1[1] + 4))) = uStack_1c;
  uStack_18 = (*(undefined4 *)((char *)&auVar5 + 8));
  *((undefined4 *)GEN_TOP((param_1[1] + 8))) = uStack_18;
  return (uint)param_1;
}

/* ref: Global::MergeBounds */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c20480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_1, unsigned int gen_a1), GEN_P(gen_v16 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc20480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((*((int *)GEN_TOP(((int)this + 0x24))) - *((int *)GEN_TOP(((int)this + 0x20))) >> 2) +
      (*((int *)GEN_TOP(((int)this + 0x14))) - *((int *)GEN_TOP(((int)this + 0x10))) >> 2) +
      (*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) == 0) {
    *((undefined4 *)GEN_TOP(*param_1)) = *((undefined4 *)GEN_TOP(*param_2));
    *((undefined4 *)GEN_TOP((*param_1 + 4))) = *((undefined4 *)GEN_TOP((*param_2 + 4)));
    *((undefined4 *)GEN_TOP((*param_1 + 8))) = *((undefined4 *)GEN_TOP((*param_2 + 8)));
    *((undefined4 *)GEN_TOP(param_1[1])) = *((undefined4 *)GEN_TOP(param_2[1]));
    *((undefined4 *)GEN_TOP((param_1[1] + 4))) = *((undefined4 *)GEN_TOP((param_2[1] + 4)));
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = *((undefined4 *)GEN_TOP((param_2[1] + 8)));
    return (uint)param_2;
  }
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  gen_maxps(&(auVar2), &(param_1[1]), &(param_2[1]));
  local_20 = (*(undefined4 *)((char *)&auVar1 + 0));
  *((undefined4 *)GEN_TOP(*param_1)) = local_20;
  uStack_1c = (*(undefined4 *)((char *)&auVar1 + 4));
  *((undefined4 *)GEN_TOP((*param_1 + 4))) = uStack_1c;
  uStack_18 = (*(undefined4 *)((char *)&auVar1 + 8));
  *((undefined4 *)GEN_TOP((*param_1 + 8))) = uStack_18;
  local_30 = (*(undefined4 *)((char *)&auVar2 + 0));
  *((undefined4 *)GEN_TOP(param_1[1])) = local_30;
  uStack_2c = (*(undefined4 *)((char *)&auVar2 + 4));
  *((undefined4 *)GEN_TOP((param_1[1] + 4))) = uStack_2c;
  uStack_28 = (*(undefined4 *)((char *)&auVar2 + 8));
  *((undefined4 *)GEN_TOP((param_1[1] + 8))) = uStack_28;
  return (uint)param_1;
}

/* ref: Global::SetEntrySphere */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c20550(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc20550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  uVar3 = param_2[3];
  bVar4 = *((byte *)GEN_TOP(((int)param_1 + 3)));
  iVar2 = (uint)*param_1 * 0x1000 + 0x80 + *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930)));
  puVar5 = ((undefined4 *)GEN_TOP(((uint)bVar4 * 0x10 + iVar2)));
  *puVar5 = *param_2;
  puVar5[1] = param_2[1];
  puVar5[2] = param_2[2];
  puVar5[3] = param_2[3];
  iVar1 = bVar4 + 0x78;
  *((undefined4 *)GEN_TOP((iVar2 + iVar1 * 0x10))) = uVar3;
  *((undefined4 *)GEN_TOP((iVar2 + 4 + iVar1 * 0x10))) = uVar3;
  *((undefined4 *)GEN_TOP((iVar2 + 8 + iVar1 * 0x10))) = uVar3;
  return iVar1 * 2;
}

/* ref: Global::SetEntryFromAabb */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00c205c0(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc205c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  float * pfVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  fVar3 = param_2[4];
  fVar4 = *param_2;
  fVar14 = (float10)fVar4;
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar15 = (float10)REFG(double, 0x1088108);
  fVar7 = ((float)GEN_TOF(((float10)(float)(fVar14 + (float10)fVar3) * fVar15)));
  fVar8 = ((float)GEN_TOF(((float10)(float)((float10)param_2[1] + (float10)fVar5) * fVar15)));
  fVar9 = ((float)GEN_TOF((fVar15 * (float10)(float)((float10)param_2[2] + (float10)fVar6))));
  fVar15 = GEN_X87((float10)(float)((float10)fVar8 - (float10)param_2[1]));
  fVar14 = GEN_X87((float10)(float)((float10)fVar7 - fVar14));
  fVar16 = GEN_X87((float10)(float)((float10)fVar9 - (float10)param_2[2]));
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar17 = (float10)REFG(double, 0x1088108);
  bVar12 = *((byte *)GEN_TOP(((int)param_1 + 3)));
  iVar2 = (uint)*param_1 * 0x1000 + 0x80 + *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930)));
  pfVar13 = ((float *)GEN_TOP(((uint)bVar12 * 0x10 + iVar2)));
  *pfVar13 = fVar7;
  pfVar13[1] = fVar8;
  pfVar13[2] = fVar9;
  pfVar13[3] = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar16 * fVar16 + (fVar14 * fVar14 + fVar15 * fVar15))))))));
  iVar1 = bVar12 + 0x78;
  *((float *)GEN_TOP((iVar2 + iVar1 * 0x10))) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar3 - (float10)fVar4) * fVar17)));
  *((float *)GEN_TOP((iVar2 + 4 + iVar1 * 0x10))) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar5 - (float10)fVar10) * fVar17)));
  *((float *)GEN_TOP((iVar2 + 8 + iVar1 * 0x10))) =
       ((float)GEN_TOF((fVar17 * (float10)(float)((float10)fVar6 - (float10)fVar11))));
  return iVar1 * 2;
}

/* ref: FUN_00c20740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c20740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc20740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = F_00c1ff10(this GEN_EDX_FWD,param_2,param_3,(undefined1)param_4);
    return uVar1;
  }
  if (param_1 == 2) {
    uVar1 = F_00c20080(this GEN_EDX_ARG,param_2,param_3,(undefined1)param_4);
    return uVar1;
  }
  uVar1 = F_00c20200(this GEN_EDX_ARG,param_2,param_3,(undefined1)param_4);
  return uVar1;
}

/* ref: FUN_00c20790 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c20790(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc20790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0x10] = 0xffffffff;
  in_ecx[0x11] = 0x3ffff;
  return (uint)in_ecx;
}

/* ref: Global::FreeVectors */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c207d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc207d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x28))) - iVar1 >> 2) * 4,0xd7);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x18))) - iVar1 >> 2) * 4,0xd7);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd7);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::Clear_00c20860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c20860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc20860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x1370c1c) + 0x3930)));
  uVar3 = 0;
  uVar4 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  uVar2 = REFG(undefined4, 0x1370c1c);
  if (uVar4 != 0) {
    do {
      uVar2 = F_00bca970(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)this + uVar3 * 4))));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    uVar2 = F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  uVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0x14))) - *((int *)GEN_TOP(((int)this + 0x10))) >> 2;
  if (uVar3 != 0) {
    do {
      uVar2 = F_00bca970(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar4 * 4))));
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar1 != *((int *)GEN_TOP(((int)this + 0x14)))) {
    uVar2 = F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 0x14))),0);
    *((int *)GEN_TOP(((int)this + 0x14))) = iVar1;
  }
  uVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0x24))) - *((int *)GEN_TOP(((int)this + 0x20))) >> 2;
  if (uVar3 != 0) {
    do {
      uVar2 = F_00bca970(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + uVar4 * 4))));
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (iVar1 != *((int *)GEN_TOP(((int)this + 0x24)))) {
    uVar2 = F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 0x24))),0);
    *((int *)GEN_TOP(((int)this + 0x24))) = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  return uVar2;
}

/* ref: Global::AddToList0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c20970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc20970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x14, 12);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  float * pfVar9;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  
  pvVar7 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930)));
  iVar11 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar7;
  if ((iVar11 == 0) || (*((uint *)GEN_TOP(((int)this + 0x30))) % 0x78 == 0)) {
    pvVar7 = ((undefined *)GEN_TOP(F_00bca990(pvVar7 GEN_EDX_FWD,param_1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar7;
    F_00c21900(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  else {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)this - 4 + iVar11 * 4)));
  }
  uVar5 = *((ushort *)GEN_TOP(((int)pvVar7 + 0xff0)));
  uVar10 = (uint)uVar5;
  puVar8 = ((undefined4 *)GEN_TOP((uVar10 * 0x10 + (int)pvVar7)));
  *puVar8 = *param_4;
  puVar8[1] = param_4[1];
  puVar8[2] = param_4[2];
  puVar8[3] = param_4[3];
  fVar1 = param_3[5];
  fVar2 = param_3[1];
  fVar3 = param_3[6];
  fVar4 = param_3[2];
  pfVar9 = ((float *)GEN_TOP(((uVar10 + 0x78) * 0x10 + (int)pvVar7)));
  fVar12 = (float10)REFG(double, 0x1088108);
  *pfVar9 = ((float)GEN_TOF(((float10)(float)((float10)param_3[4] - (float10)*param_3) * fVar12)));
  pfVar9[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2) * fVar12)));
  pfVar9[2] = ((float)GEN_TOF((fVar12 * (float10)(float)((float10)fVar3 - (float10)fVar4))));
  *((short *)GEN_TOP(((int)pvVar7 + uVar10 * 2 + 0xf00))) =
       (short)((int)param_2 - *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 8))) >> 4);
  fVar12 = (float10)*(double *)&REFG(undefined, 0x10a1b58);
  *pfVar9 = (float)((float10)*pfVar9 + fVar12);
  pfVar9[1] = (float)((float10)pfVar9[1] + fVar12);
  pfVar9[2] = (float)(fVar12 + (float10)pfVar9[2]);
  uVar6 = *((undefined2 *)GEN_TOP(((int)pvVar7 + 0xff4)));
  *((char *)GEN_TOP(((int)param_2 + 3))) = (char)uVar5;
  *param_2 = uVar6;
  *((short *)GEN_TOP(((int)pvVar7 + 0xff0U))) = *((short *)GEN_TOP(((int)pvVar7 + 0xff0U))) + 1;
  *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) + 1;
  return (uint)this;
}

/* ref: Global::AddToList1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c20ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc20ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x14, 12);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  
  pvVar7 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930)));
  iVar10 = *((int *)GEN_TOP(((int)this + 0x14))) - *((int *)GEN_TOP(((int)this + 0x10))) >> 2;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar7;
  if ((iVar10 == 0) || (*((uint *)GEN_TOP(((int)this + 0x34))) % 0x78 == 0)) {
    pvVar7 = ((undefined *)GEN_TOP(F_00bca990(pvVar7 GEN_EDX_FWD,param_1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar7;
    F_00c21900(((int *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  else {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) - 4 + iVar10 * 4)));
  }
  uVar5 = *((ushort *)GEN_TOP(((int)pvVar7 + 0xff0)));
  uVar9 = (uint)uVar5;
  puVar8 = ((undefined4 *)GEN_TOP((uVar9 * 0x10 + (int)pvVar7)));
  *puVar8 = *param_4;
  puVar8[1] = param_4[1];
  puVar8[2] = param_4[2];
  puVar8[3] = param_4[3];
  fVar1 = param_3[5];
  fVar2 = param_3[1];
  fVar3 = param_3[6];
  fVar4 = param_3[2];
  iVar10 = uVar9 + 0x78;
  fVar11 = (float10)REFG(double, 0x1088108);
  *((float *)GEN_TOP(((int)pvVar7 + iVar10 * 0x10))) =
       ((float)GEN_TOF(((float10)(float)((float10)param_3[4] - (float10)*param_3) * fVar11)));
  *((float *)GEN_TOP(((int)pvVar7 + iVar10 * 0x10 + 4))) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2) * fVar11)));
  *((float *)GEN_TOP(((int)pvVar7 + iVar10 * 0x10 + 8))) =
       ((float)GEN_TOF((fVar11 * (float10)(float)((float10)fVar3 - (float10)fVar4))));
  *((short *)GEN_TOP(((int)pvVar7 + uVar9 * 2 + 0xf00))) =
       (short)((int)param_2 - *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 8))) >> 4);
  uVar6 = *((undefined2 *)GEN_TOP(((int)pvVar7 + 0xff4)));
  *((char *)GEN_TOP(((int)param_2 + 3))) = (char)uVar5;
  *param_2 = uVar6;
  *((short *)GEN_TOP(((int)pvVar7 + 0xff0U))) = *((short *)GEN_TOP(((int)pvVar7 + 0xff0U))) + 1;
  *((int *)GEN_TOP(((int)this + 0x34))) = *((int *)GEN_TOP(((int)this + 0x34))) + 1;
  return (uint)this;
}

/* ref: Global::AddToList2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c20c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc20c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x14, 12);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  
  pvVar7 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370c1c) + 0x3930)));
  iVar10 = *((int *)GEN_TOP(((int)this + 0x24))) - *((int *)GEN_TOP(((int)this + 0x20))) >> 2;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar7;
  if ((iVar10 == 0) || (*((uint *)GEN_TOP(((int)this + 0x38))) % 0x78 == 0)) {
    pvVar7 = ((undefined *)GEN_TOP(F_00bca990(pvVar7 GEN_EDX_FWD,param_1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar7;
    F_00c21900(((int *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  else {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) - 4 + iVar10 * 4)));
  }
  uVar5 = *((ushort *)GEN_TOP(((int)pvVar7 + 0xff0)));
  uVar9 = (uint)uVar5;
  puVar8 = ((undefined4 *)GEN_TOP((uVar9 * 0x10 + (int)pvVar7)));
  *puVar8 = *param_4;
  puVar8[1] = param_4[1];
  puVar8[2] = param_4[2];
  puVar8[3] = param_4[3];
  fVar1 = param_3[5];
  fVar2 = param_3[1];
  fVar3 = param_3[6];
  fVar4 = param_3[2];
  iVar10 = uVar9 + 0x78;
  fVar11 = (float10)REFG(double, 0x1088108);
  *((float *)GEN_TOP(((int)pvVar7 + iVar10 * 0x10))) =
       ((float)GEN_TOF(((float10)(float)((float10)param_3[4] - (float10)*param_3) * fVar11)));
  *((float *)GEN_TOP(((int)pvVar7 + iVar10 * 0x10 + 4))) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2) * fVar11)));
  *((float *)GEN_TOP(((int)pvVar7 + iVar10 * 0x10 + 8))) =
       ((float)GEN_TOF((fVar11 * (float10)(float)((float10)fVar3 - (float10)fVar4))));
  *((short *)GEN_TOP(((int)pvVar7 + uVar9 * 2 + 0xf00))) =
       (short)((int)param_2 - *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 8))) >> 4);
  uVar6 = *((undefined2 *)GEN_TOP(((int)pvVar7 + 0xff4)));
  *((char *)GEN_TOP(((int)param_2 + 3))) = (char)uVar5;
  *param_2 = uVar6;
  *((short *)GEN_TOP(((int)pvVar7 + 0xff0U))) = *((short *)GEN_TOP(((int)pvVar7 + 0xff0U))) + 1;
  *((int *)GEN_TOP(((int)this + 0x38))) = *((int *)GEN_TOP(((int)this + 0x38))) + 1;
  return (uint)this;
}

/* ref: Global::AddByType */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c20d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xc20d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00b133e0(*((undefined1 *)GEN_TOP((param_2 + 2))));
  if (bVar1 == 1) {
    uVar2 = F_00c20970(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (bVar1 == 2) {
    uVar2 = F_00c20ad0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  uVar2 = F_00c20c10(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar2;
}

/* ref: Global::AddSphere */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c20db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc20db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(float *)(gen_frame + 0x30)) = *param_3;
  (*(float *)(gen_frame + 0x34)) = param_3[1];
  uVar4 = *((undefined1 *)GEN_TOP((param_2 + 2)));
  fVar1 = param_3[2];
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar2 = param_3[3];
  (*(float *)(gen_frame + 0x4c)) = fVar2;
  fVar7 = (float10)*param_3;
  fVar8 = (float10)fVar2;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x4c)) + 0)) = uVar4;
  (*(float *)(gen_frame + 0x4c)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar2) >> 8),uVar4));
  fVar2 = (float)(fVar7 - fVar8);
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar9 = (float10)param_3[1];
  (*(float *)(gen_frame + 0x0)) = fVar2;
  fVar2 = (float)(fVar9 - fVar8);
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar10 = (float10)fVar1;
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar1 = (float)(fVar10 - fVar8);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  fVar1 = (float)(fVar8 + fVar7);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar2 = (float)(fVar9 + fVar8);
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = (float)(fVar8 + fVar10);
  (*(float *)(gen_frame + 0x38)) = fVar3;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar3;
  bVar5 = F_00b133e0(uVar4);
  if (bVar5 == 1) {
    uVar6 = F_00c20970(this GEN_EDX_ARG,param_1,param_2,&(*(float *)(gen_frame + 0x0)),param_3);
    return uVar6;
  }
  if (bVar5 == 2) {
    uVar6 = F_00c20ad0(this GEN_EDX_ARG,param_1,param_2,&(*(float *)(gen_frame + 0x0)),param_3);
    return uVar6;
  }
  uVar6 = F_00c20c10(this GEN_EDX_ARG,param_1,param_2,&(*(float *)(gen_frame + 0x0)),param_3);
  return uVar6;
}

/* ref: Global::AddBox */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c20ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc20ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(float *)(gen_frame + 0x2c)) = *param_3;
  fVar7 = (float10)*param_3;
  fVar1 = (float)(fVar7 + (float10)param_3[4]);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x2c)) = param_3[1];
  fVar8 = (float10)param_3[1];
  fVar2 = (float)(fVar8 + (float10)param_3[5]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  (*(float *)(gen_frame + 0x2c)) = param_3[2];
  fVar9 = (float10)param_3[2];
  fVar3 = (float)(fVar9 + (float10)param_3[6]);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  fVar10 = (float10)REFG(double, 0x1088108);
  fVar1 = (float)((float10)fVar1 * fVar10);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar10);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)(fVar10 * (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  (*(float *)(gen_frame + 0x8)) = fVar3;
  fVar8 = GEN_X87((float10)(float)((float10)fVar2 - fVar8));
  fVar7 = GEN_X87((float10)(float)((float10)fVar1 - fVar7));
  fVar9 = GEN_X87((float10)(float)((float10)fVar3 - fVar9));
  fVar1 = ((float)GEN_TOF((fVar9 * fVar9 + (fVar7 * fVar7 + fVar8 * fVar8))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  uVar4 = *((undefined1 *)GEN_TOP((param_2 + 2)));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 0)) = uVar4;
  (*(float *)(gen_frame + 0x2c)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar1) >> 8),uVar4));
  bVar5 = F_00b133e0(uVar4);
  if (bVar5 == 1) {
    uVar6 = F_00c20970(this GEN_EDX_ARG,param_1,param_2,param_3,&(*(float *)(gen_frame + 0x0)));
    return uVar6;
  }
  if (bVar5 == 2) {
    uVar6 = F_00c20ad0(this GEN_EDX_ARG,param_1,param_2,param_3,&(*(float *)(gen_frame + 0x0)));
    return uVar6;
  }
  uVar6 = F_00c20c10(this GEN_EDX_ARG,param_1,param_2,param_3,&(*(float *)(gen_frame + 0x0)));
  return uVar6;
}

/* ref: Global::ElementAt */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c21010(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc21010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::IsInRange_00c21030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c21030(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc21030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: Global::DeallocatePointers_00c210b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c210b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc210b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd7);
  return (uint)uVar1;
}

/* ref: Global::AllocatePointers_00c210e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c210e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc210e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd7);
  return uVar1;
}

/* ref: FUN_00c21130 */
GEN_OWN GEN_FRAME uint F_00c21130(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc21130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c21150 */
GEN_OWN GEN_FRAME uint F_00c21150(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc21150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c21160 */
GEN_OWN GEN_FRAME uint F_00c21160(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc21160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00c21170 */
GEN_OWN GEN_FRAME byte F_00c21170(void)
{
  GEN_ENTER(0xc21170u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: Global::CopyPointerRange_00c21180 */
GEN_OWN GEN_FRAME uint F_00c21180(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc21180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00c211d0 */
GEN_OWN GEN_FRAME uint F_00c211d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc211d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::SetBlockBounds */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c21200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc21200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((uint)(ushort)param_2 * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  return (uint)puVar1;
}

/* ref: Global::SetBlockExtent */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c21230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc21230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((((ushort)param_2 + 0x78) * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: FUN_00c21270 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00c21270(GEN_P(ushort * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc21270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00c21280 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c21280(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc21280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 3))) = param_2;
  return param_2;
}

/* ref: Global::VectorGrowCapacity_00c212c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c212c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc212c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: Global::IteratorInit_00c212f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c212f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc212f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorEquals_00c21300 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c21300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc21300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::CopyPointerRange_00c21330 */
GEN_OWN GEN_FRAME uint F_00c21330(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc21330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: Global::ConstructPointer_00c21370 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c21370(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc21370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: Global::ConstructPointerAlloc */
GEN_OWN GEN_FRAME uint F_00c21390(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc21390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c213b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c213b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xc213b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = (uint)(byte)(*((char *)GEN_TOP(((int)this + 0xff0))) - 1);
  *param_1 = (uint)*((ushort *)GEN_TOP(((int)this + uVar2 * 2 + 0xf00)));
  iVar1 = uVar2 + 0x78;
  puVar3 = ((undefined4 *)GEN_TOP((uVar2 * 0x10 + (int)this)));
  *param_2 = *((undefined4 *)GEN_TOP(((int)this + iVar1 * 0x10)));
  param_2[1] = *((undefined4 *)GEN_TOP(((int)this + iVar1 * 0x10 + 4)));
  param_2[2] = *((undefined4 *)GEN_TOP(((int)this + iVar1 * 0x10 + 8)));
  *param_3 = *puVar3;
  param_3[1] = puVar3[1];
  param_3[2] = puVar3[2];
  param_3[3] = puVar3[3];
  *((short *)GEN_TOP(((int)this + 0xff0))) = *((short *)GEN_TOP(((int)this + 0xff0))) - 1;
  return 0xffff;
}

/* ref: Global::FindById */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c21420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc21420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  puVar3 = *(uint * PTR32 *)this;
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - (int)((int)(uintptr_t)puVar3) >> 2;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if ((short)param_1 == *((short *)GEN_TOP((*puVar3 + 0xff4)))) {
        return *puVar3;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: Global::FindByIdInList1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c21460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc21460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x14))) - *((int *)GEN_TOP(((int)this + 0x10))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    puVar1 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x10)));
    do {
      if ((short)param_1 == *((short *)GEN_TOP((*puVar1 + 0xff4)))) {
        return *puVar1;
      }
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: Global::FindByIdInList2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c214a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc214a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x24))) - *((int *)GEN_TOP(((int)this + 0x20))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    puVar1 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x20)));
    do {
      if ((short)param_1 == *((short *)GEN_TOP((*puVar1 + 0xff4)))) {
        return *puVar1;
      }
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: Global::IteratorInit2_00c21570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c21570(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc21570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorNotEquals_00c21580 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00c21580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc21580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::ConstructPointerAlloc2 */
GEN_OWN GEN_FRAME uint F_00c215a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc215a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::ConstructPointerAlloc3 */
GEN_OWN GEN_FRAME uint F_00c215c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc215c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::UninitializedCopyPointers_00c215e0 */
GEN_OWN GEN_FRAME unsigned int F_00c215e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc215e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::GetBegin_00c21610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c21610(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc21610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::GetEnd_00c21620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00c21620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc21620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::VectorTidy_00c21630 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00c21630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc21630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0xd7);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00c21670 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00c21670(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc21670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::UninitializedCopyPointers2_00c21680 */
GEN_OWN GEN_FRAME unsigned int F_00c21680(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc21680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

