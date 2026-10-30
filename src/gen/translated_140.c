#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00bb9320 */
GEN_OWN GEN_NOFRAME uint F_00bb9320(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  *((undefined4 * PTR32 *)GEN_TOP((in_esi + 0x14))) = *((undefined4 * PTR32 *)GEN_TOP((in_esi + 0x28)));
  uVar1 = **((undefined4 * PTR32 *)GEN_TOP((in_esi + 0x28)));
  *((undefined4 *)GEN_TOP((in_esi + 0xc))) = uVar1;
  F_00c05da0(in_esi,uVar1);
  F_00bb8b00(in_esi,param_2,*((undefined4 *)GEN_TOP((in_esi + 0xc))));
  *((undefined2 *)GEN_TOP((in_esi + 0x34))) = *((undefined2 *)GEN_TOP((in_esi + 0x36)));
  *((undefined1 *)GEN_TOP((in_esi + 0x39))) = 1;
  if ((20000 < *((int *)GEN_TOP((in_esi + 0x30)))) &&
     ((*((int *)GEN_TOP((in_esi + 0x14))) - *((int *)GEN_TOP((in_esi + 0x28)))) / 0x18 + 1 < 20000)) {
    F_00bb8cd0(in_esi,20000);
  }
  *((undefined4 *)GEN_TOP((in_esi + 0x74))) = 0;
  *((undefined4 *)GEN_TOP((in_esi + 0x70))) = 0;
  return 0;
}

/* ref: FUN_00bb93a0 */
GEN_OWN GEN_NOFRAME unsigned int F_00bb93a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb93a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 0x70))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x70))) + 0x44))) = param_2;
                    
    GEN_LONGJMP(((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x70))) + 4))), 1);
  }
  *((char *)GEN_TOP((param_1 + 6))) = (char)param_2;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x58))) != 0) {
    F_00bb9320(param_1,param_2);
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x58))))(param_1,param_2);
  }
                    
  F_00c47c5b(1);
}

/* ref: FUN_00bb93f0 */
GEN_OWN GEN_NOFRAME uint F_00bb93f0(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xbb93f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  if (20000 < *((int *)GEN_TOP((in_esi + 0x30)))) {
                    
    F_00bb93a0(in_esi,5);
  }
  F_00bb8cd0(in_esi,*((int *)GEN_TOP((in_esi + 0x30))) * 2);
  if (20000 < *((int *)GEN_TOP((in_esi + 0x30)))) {
    F_00c02740(in_esi,((char *)REFP(0x13419e8)));
  }
  *((int *)GEN_TOP((in_esi + 0x14))) = *((int *)GEN_TOP((in_esi + 0x14))) + 0x18;
  return *((uint *)GEN_TOP((in_esi + 0x14)));
}

/* ref: FUN_00bb9430 */
GEN_OWN GEN_NOFRAME uint F_00bb9430(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb9430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  
  piVar2 = param_2;
  if (param_2[2] != 6) {
    piVar2 = ((int *)GEN_TOP(F_00bb8fc0(param_1,param_2)));
  }
  iVar9 = *((int *)GEN_TOP((param_1 + 0x20)));
  iVar6 = *piVar2;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  iVar8 = *((int *)GEN_TOP((param_1 + 0x1c))) - *((int *)GEN_TOP((param_1 + 8)));
  if (*((char *)GEN_TOP((iVar6 + 6))) == '\0') {
    iVar6 = *((int *)GEN_TOP((iVar6 + 0x10)));
    uVar3 = (uint)*((byte *)GEN_TOP((iVar6 + 0x4b)));
    if (iVar8 <= (int)(uVar3 * 0x10)) {
      iVar8 = *((int *)GEN_TOP((param_1 + 0x2c)));
      if (iVar8 < (int)uVar3) {
        iVar8 = iVar8 + uVar3;
      }
      else {
        iVar8 = iVar8 * 2;
      }
      F_00bb8c70(param_1,iVar8);
    }
    uVar3 = (int)piVar2 + (*((int *)GEN_TOP((param_1 + 0x20))) - iVar9);
    if (*((char *)GEN_TOP((iVar6 + 0x4a))) == '\0') {
      uVar4 = uVar3 + 0x10;
      uVar1 = (uint)*((byte *)GEN_TOP((iVar6 + 0x49))) * 0x10 + uVar4;
      if (uVar1 < *((uint *)GEN_TOP((param_1 + 8)))) {
        *((uint *)GEN_TOP((param_1 + 8))) = uVar1;
      }
    }
    else {
      uVar4 = F_00bb8e70(iVar6,param_1,((int)(*((int *)GEN_TOP((param_1 + 8))) - uVar3) >> 4) - 1);
      uVar3 = (int)piVar2 + (*((int *)GEN_TOP((param_1 + 0x20))) - iVar9);
    }
    if (*((int *)GEN_TOP((param_1 + 0x14))) == *((int *)GEN_TOP((param_1 + 0x24)))) {
      puVar5 = ((uint *)GEN_TOP(F_00bb93f0(param_1)));
    }
    else {
      puVar5 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x18)));
      *((uint * PTR32 *)GEN_TOP((param_1 + 0x14))) = puVar5;
    }
    puVar5[1] = uVar3;
    *puVar5 = uVar4;
    *((uint *)GEN_TOP((param_1 + 0xc))) = uVar4;
    puVar5[2] = (uint)*((byte *)GEN_TOP((iVar6 + 0x4b))) * 0x10 + uVar4;
    *((undefined4 *)GEN_TOP((param_1 + 0x18))) = *((undefined4 *)GEN_TOP((iVar6 + 0xc)));
    puVar5[5] = 0;
    puVar5[4] = param_3;
    uVar3 = *((uint *)GEN_TOP((param_1 + 8)));
    if (uVar3 < puVar5[2]) {
      do {
        *((undefined4 *)GEN_TOP((uVar3 + 8))) = 0;
        uVar3 = uVar3 + 0x10;
      } while (uVar3 < puVar5[2]);
    }
    *((uint *)GEN_TOP((param_1 + 8))) = puVar5[2];
    if ((*((byte *)GEN_TOP((param_1 + 0x38))) & 1) != 0) {
      *((int *)GEN_TOP((param_1 + 0x18))) = *((int *)GEN_TOP((param_1 + 0x18))) + 4;
      F_00bb8d80(param_1,0,0xffffffff);
      *((int *)GEN_TOP((param_1 + 0x18))) = *((int *)GEN_TOP((param_1 + 0x18))) - 4;
    }
    return 0;
  }
  if (iVar8 < 0x141) {
    iVar6 = *((int *)GEN_TOP((param_1 + 0x2c)));
    if (iVar6 < 0x14) {
      iVar6 = iVar6 + 0x14;
    }
    else {
      iVar6 = iVar6 * 2;
    }
    F_00bb8c70(param_1,iVar6);
  }
  if (*((int *)GEN_TOP((param_1 + 0x14))) == *((int *)GEN_TOP((param_1 + 0x24)))) {
    piVar7 = ((int *)GEN_TOP(F_00bb93f0(param_1)));
  }
  else {
    piVar7 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x18)));
    *((int * PTR32 *)GEN_TOP((param_1 + 0x14))) = piVar7;
  }
  iVar9 = (int)piVar2 + (*((int *)GEN_TOP((param_1 + 0x20))) - iVar9);
  piVar7[1] = iVar9;
  iVar9 = iVar9 + 0x10;
  *piVar7 = iVar9;
  *((int *)GEN_TOP((param_1 + 0xc))) = iVar9;
  piVar7[2] = *((int *)GEN_TOP((param_1 + 8))) + 0x140;
  piVar7[4] = param_3;
  if ((*((byte *)GEN_TOP((param_1 + 0x38))) & 1) != 0) {
    F_00bb8d80(param_1,0,0xffffffff);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 4))) + 0x10))))(param_1);
  if (-1 < (int)uVar3) {
    F_00bb90b0(param_1,*((int *)GEN_TOP((param_1 + 8))) + uVar3 * -0x10);
    return 1;
  }
  return 2;
}

/* ref: FUN_00bb9600 */
GEN_OWN GEN_NOFRAME uint F_00bb9600(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb9600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ushort uVar1;
  uint uVar2;
  
  *((short *)GEN_TOP((param_1 + 0x34))) = *((short *)GEN_TOP((param_1 + 0x34))) + 1;
  uVar1 = *((ushort *)GEN_TOP((param_1 + 0x34)));
  if (199 < uVar1) {
    if (uVar1 == 200) {
      F_00c02740(param_1,((char *)REFP(0x1341a04)));
    }
    else if (0xe0 < uVar1) {
                    
      F_00bb93a0(param_1,5);
    }
  }
  uVar2 = F_00bb9430(param_1,param_2,param_3);
  if (uVar2 == 0) {
    F_00c03850(param_1,1);
  }
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x10)));
  *((short *)GEN_TOP((param_1 + 0x34))) = *((short *)GEN_TOP((param_1 + 0x34))) - 1;
  if (*((uint *)GEN_TOP((uVar2 + 0x40))) <= *((uint *)GEN_TOP((uVar2 + 0x44)))) {
    uVar2 = F_00c01810(param_1);
  }
  return uVar2;
}

/* ref: FUN_00bb9680 */
GEN_OWN GEN_NOFRAME uint F_00bb9680(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (*((char *)GEN_TOP((param_1 + 6))) == '\0') {
    uVar1 = F_00bb9430(param_1,param_2 - 0x10,0xffffffff);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    *((undefined1 *)GEN_TOP((param_1 + 6))) = 0;
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x14))))[1])) + 6))) == '\0') {
      *((undefined4 *)GEN_TOP((param_1 + 0xc))) = **((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x14)));
    }
    else {
      uVar1 = F_00bb90b0(param_1,param_2);
      if (uVar1 != 0) {
        *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 8)));
      }
    }
  }
  uVar1 = F_00c03850(param_1,(*((int *)GEN_TOP((param_1 + 0x14))) - *((int *)GEN_TOP((param_1 + 0x28)))) / 0x18);
  return uVar1;
}

/* ref: FUN_00bb9700 */
GEN_OWN GEN_NOFRAME uint F_00bb9700(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  short sVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP((param_1 + 6))) != '\x01') &&
     ((*((char *)GEN_TOP((param_1 + 6))) != '\0' || (*((int *)GEN_TOP((param_1 + 0x14))) != *((int *)GEN_TOP((param_1 + 0x28))))))) {
    uVar2 = F_00bb9140(((char *)REFP(0x1341a18)),param_1);
    return uVar2;
  }
  if (199 < *((ushort *)GEN_TOP((param_1 + 0x34)))) {
    uVar2 = F_00bb9140(((char *)REFP(0x1341a40)),param_1);
    return uVar2;
  }
  sVar1 = *((ushort *)GEN_TOP((param_1 + 0x34))) + 1;
  *((short *)GEN_TOP((param_1 + 0x34))) = sVar1;
  *((short *)GEN_TOP((param_1 + 0x36))) = sVar1;
  uVar2 = F_00bb8b80(param_1,((code *)REFP(0xbb9680)),*((int *)GEN_TOP((param_1 + 8))) + param_2 * -0x10);
  if (uVar2 != 0) {
    *((char *)GEN_TOP((param_1 + 6))) = (char)uVar2;
    F_00bb8b00(param_1,uVar2,*((undefined4 *)GEN_TOP((param_1 + 8))));
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((short *)GEN_TOP((param_1 + 0x34))) = *((short *)GEN_TOP((param_1 + 0x34))) - 1;
    return uVar2;
  }
  *((short *)GEN_TOP((param_1 + 0x34))) = *((short *)GEN_TOP((param_1 + 0x34))) - 1;
  return (uint)*((byte *)GEN_TOP((param_1 + 6)));
}

/* ref: FUN_00bb97b0 */
GEN_OWN GEN_NOFRAME uint F_00bb97b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbb97b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined4 * puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = *((undefined2 *)GEN_TOP((param_1 + 0x34)));
  uVar2 = *((undefined1 *)GEN_TOP((param_1 + 0x39)));
  iVar4 = *((int *)GEN_TOP((param_1 + 0x14)));
  iVar5 = *((int *)GEN_TOP((param_1 + 0x28)));
  uVar6 = *((undefined4 *)GEN_TOP((param_1 + 0x74)));
  *((undefined4 *)GEN_TOP((param_1 + 0x74))) = param_5;
  uVar7 = F_00bb8b80(param_1,param_2,param_3);
  if (uVar7 == 0) {
    *((undefined4 *)GEN_TOP((param_1 + 0x74))) = uVar6;
    return 0;
  }
  iVar8 = *((int *)GEN_TOP((param_1 + 0x20))) + param_4;
  F_00c05da0(param_1,iVar8);
  F_00bb8b00(param_1,uVar7,iVar8);
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + (iVar4 - iVar5))));
  *((undefined2 *)GEN_TOP((param_1 + 0x34))) = uVar3;
  *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x14))) = puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = puVar1[3];
  *((undefined1 *)GEN_TOP((param_1 + 0x39))) = uVar2;
  if (20000 < *((int *)GEN_TOP((param_1 + 0x30)))) {
    if (((int)puVar1 - *((int *)GEN_TOP((param_1 + 0x28)))) / 0x18 + 1 < 20000) {
      F_00bb8cd0(param_1,20000);
      *((undefined4 *)GEN_TOP((param_1 + 0x74))) = uVar6;
      return uVar7;
    }
    *((undefined4 *)GEN_TOP((param_1 + 0x74))) = uVar6;
    return uVar7;
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x74))) = uVar6;
  return uVar7;
}

/* ref: FUN_00bb98b0 */
GEN_OWN GEN_NOFRAME uint F_00bb98b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb98b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x74)));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = param_2;
  (*(undefined4 *)(gen_frame + 0x10)) = param_3;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  ((byte *)(gen_frame + 0x0))[0xc] = 0;
  ((byte *)(gen_frame + 0x0))[0xd] = 0;
  ((byte *)(gen_frame + 0x0))[0xe] = 0;
  ((byte *)(gen_frame + 0x0))[0xf] = 0;
  uVar2 = F_00bb97b0(param_1,((code *)REFP(0xbb9200)),((byte *)(gen_frame + 0x0)),*((int *)GEN_TOP((param_1 + 8))) - *((int *)GEN_TOP((param_1 + 0x20))),
                       uVar1);
  F_00c11930(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)),0);
  return uVar2;
}

/* ref: FUN_00bb9920 */
GEN_OWN GEN_NOFRAME unsigned int F_00bb9920(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb9920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * PTR32 * ppuVar1;
  undefined * apuVar2 [1];
  undefined * PTR32 * ppuVar3;
  
  ppuVar3 = &REFG(undefined * PTR32, 0x1104828);
  apuVar2[0] = (*(undefined * PTR32 (*)[1])REFP(0x110482c))[0];
  while (apuVar2[0] != ((undefined *)GEN_TOP(0x0))) {
    F_00b9af30(param_1,apuVar2[0],0);
    F_00b9ae60(param_1,*ppuVar3);
    F_00b9b510(param_1,1,0);
    ppuVar1 = ppuVar3 + 3;
    ppuVar3 = ppuVar3 + 2;
    apuVar2[0] = *ppuVar1;
  }
  return 0;
}

/* ref: FUN_00bb9960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb9960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00bb9970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb9970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00bb9990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb9990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00bb99c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb99c0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb99c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  return in_ecx;
}

/* ref: FUN_00bb99d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb99d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb99d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,this);
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bb9a00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bb9a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return;
}

/* ref: FUN_00bb9a20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb9a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbb9a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 4))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,param_1,param_2,param_3);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: FUN_00bb9a40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bb9a40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1104874));
  return;
}

/* ref: FUN_00bb9a50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb9a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb9a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 0) {
    uVar1 = F_00c1e320(this GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4))) = param_2;
  }
  return;
}

/* ref: FUN_00bb9a80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb9a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb9a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x70, 0);
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar4 = param_1;
  if ((((param_1 != 0) && (*((int *)GEN_TOP(((int)this + 0x18))) != 0)) && (*((char *)GEN_TOP((param_1 + 0x12))) == '\0'))
     && (piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_FWD)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
    if (uVar4 == 0) {
      iVar2 = *((int *)GEN_TOP(((int)this + 0x18)));
      F_0054fa20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,puVar3);
      uVar4 = F_004ee9d0(&(*(undefined4 *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),((undefined1 *)(gen_frame + 0x10)));
      *((undefined4 *)GEN_TOP((iVar2 + 8))) = (*(undefined4 *)(gen_frame + 0x0));
      *((undefined4 *)GEN_TOP((iVar2 + 0xc))) = (*(undefined4 *)(gen_frame + 0x4));
      *((undefined4 *)GEN_TOP((iVar2 + 0x10))) = (*(undefined4 *)(gen_frame + 0x8));
    }
    else {
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) {
        iVar2 = *((int *)GEN_TOP(((int)this + 0x18)));
        *((undefined4 *)GEN_TOP((iVar2 + 8))) = *puVar3;
        *((undefined4 *)GEN_TOP((iVar2 + 0xc))) = puVar3[1];
        *((undefined4 *)GEN_TOP((iVar2 + 0x10))) = puVar3[2];
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00bb9b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb9b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00bb9b60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb9b60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  F_00c1e470(in_ecx GEN_EDX_FWD);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1104880));
  in_ecx[5] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00bb9b90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb9b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1104880));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    F_00a04370(*((int *)GEN_TOP(((int)this + 0xc))));
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar1 = F_00a04370(*((int *)GEN_TOP(((int)this + 0x10))));
  }
  F_00c1e490(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bb9bd0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00bb9bd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb9be0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbb9be0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  
  if (0.0 < param_2) {
    *((undefined4 *)GEN_TOP((param_1 + 0x14))) = 0;
    *((short *)GEN_TOP((param_1 + 0x18))) = (short)(int)param_2;
    *((undefined2 *)GEN_TOP((param_1 + 0x1a))) = 1;
    return;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0x10))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
  }
  *((undefined2 *)GEN_TOP((param_1 + 0x1a))) = 0;
  return;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb9c40(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbb9c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x10)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    param_1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
  }
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    param_1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  return param_1;
}

/* ref: FUN_00bb9c80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb9c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((in_ecx + 0x14))), REFG(float, 0x1087f04));
  *((undefined2 *)GEN_TOP((in_ecx + 0x18))) = 0;
  return 0;
}

/* ref: FUN_00bb9ca0 */
GEN_OWN GEN_FRAME uint F_00bb9ca0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb9ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  piVar2 = ((int *)GEN_TOP(param_1[3]));
  piVar1 = param_1;
  do {
    piVar4 = piVar2;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
    if (uVar3 == 1) {
      return (uint)piVar4;
    }
    if (uVar3 == 2) {
      piVar4 = ((int *)GEN_TOP(piVar1[4]));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
      if (uVar3 == 1) {
        return (uint)piVar4;
      }
      if (uVar3 != 0) {
        return 0;
      }
    }
    piVar2 = ((int *)GEN_TOP(piVar4[3]));
    piVar1 = piVar4;
  } while( true );
}

/* ref: FUN_00bb9d00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb9d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00bb9ca0(this);
  return uVar1;
}

/* ref: FUN_00bb9d10 */
GEN_OWN GEN_FRAME uint F_00bb9d10(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb9d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  piVar2 = ((int *)GEN_TOP(param_1[4]));
  piVar1 = param_1;
  do {
    piVar4 = piVar2;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
    if (uVar3 == 1) {
      return (uint)piVar4;
    }
    if (uVar3 == 2) {
      piVar4 = ((int *)GEN_TOP(piVar1[3]));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
      if (uVar3 == 1) {
        return (uint)piVar4;
      }
      if (uVar3 != 0) {
        return 0;
      }
    }
    piVar2 = ((int *)GEN_TOP(piVar4[4]));
    piVar1 = piVar4;
  } while( true );
}

/* ref: FUN_00bb9d70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb9d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00bb9d10(this);
  return uVar1;
}

/* ref: FUN_00bb9d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb9d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb9d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  if (param_2 != 0) {
    *((undefined * PTR32 *)GEN_TOP((param_2 + 4))) = this;
  }
  return uVar1;
}

/* ref: FUN_00bb9da0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00bb9da0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9da0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  float * pfVar1;
  float fVar2;
  short sVar3;
  int * piVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  fVar7 = REFG(float, 0x1087f04);
  fVar2 = *((float *)GEN_TOP((param_1 + 0x14)));
  pfVar1 = ((float *)GEN_TOP((param_1 + 0x14)));
  if (fVar2 < REFG(float, 0x1087f04)) {
    sVar3 = *((short *)GEN_TOP((param_1 + 0x18)));
    fVar6 = (float10)(*(float *)&gen_args[0]);
    (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
    *pfVar1 = (float)(fVar6 / (float10)(int)sVar3 + (float10)fVar2);
    pfVar5 = pfVar1;
    if ((GEN_ISNAN(fVar7) || GEN_ISNAN(*pfVar1)) || (fVar7 < *pfVar1 || fVar7 == *pfVar1)) {
      pfVar5 = &(*(float *)&gen_args[0]);
    }
    (*(float *)&gen_args[0]) = *pfVar5;
    *pfVar1 = (*(float *)&gen_args[0]);
    fVar6 = F_00bc0c10((*(float *)&gen_args[0]));
    return (float10)(float)fVar6;
  }
  *((undefined2 *)GEN_TOP((param_1 + 0x1a))) = 0;
  piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
    fVar7 = REFG(float, 0x1087f04);
  }
  return (float10)fVar7;
}

/* ref: FUN_00bb9e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb9e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb9e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  if (param_1 == *((uint *)GEN_TOP(((int)this + 0xc)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x1a))) = 0;
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
    *((int *)GEN_TOP(((int)this + 0xc))) = iVar1;
    if (iVar1 != 0) {
      *((undefined * PTR32 *)GEN_TOP((iVar1 + 4))) = this;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    return param_1;
  }
  if (param_1 == *((uint *)GEN_TOP(((int)this + 0x10)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x1a))) = 0;
    return param_1;
  }
  return 0;
}

/* ref: FUN_00bb9e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb9e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb9e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  
  piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  uVar7 = 0;
  bVar3 = false;
  bVar4 = false;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD), uVar5 == 2)) {
    bVar3 = true;
  }
  if ((piVar8 != ((int *)GEN_TOP(0x0))) && (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x10))))(piVar8 GEN_EDX_ARG), uVar5 == 2)) {
    bVar4 = true;
  }
  if (bVar3) {
    if ((piVar8 != ((int *)GEN_TOP(0x0))) && (!bVar4)) goto LAB_00bb9f1e;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    if (0 < param_2) {
      *param_1 = (int)piVar1;
      uVar7 = 1;
    }
  }
  if ((bVar4) &&
     (((piVar1 == ((int *)GEN_TOP(0x0)) || (bVar3)) &&
      (*((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0, (int)uVar7 < param_2)))) {
    param_1[uVar7] = (int)piVar8;
    uVar7 = uVar7 + 1;
  }
LAB_00bb9f1e: ;
  if ((((*((short *)GEN_TOP(((int)this + 0x1a))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) &&
      ((*((int *)GEN_TOP(((int)this + 0x10))) != 0 &&
       ((piVar6 = piVar1, bVar3 || (piVar6 = piVar8, piVar8 = piVar1, bVar4)))))) &&
     (piVar6 != ((int *)GEN_TOP(0x0)))) {
    if ((int)uVar7 < param_2) {
      param_1[uVar7] = (int)piVar6;
      uVar7 = uVar7 + 1;
    }
    F_00bb9e40(this GEN_EDX_ARG,piVar6);
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar2 != 0) {
      if (*((undefined * PTR32 *)GEN_TOP((iVar2 + 0xc))) == this) {
        *((int * PTR32 *)GEN_TOP((iVar2 + 0xc))) = piVar8;
      }
      else {
        *((int * PTR32 *)GEN_TOP((iVar2 + 0x10))) = piVar8;
      }
      if (piVar8 != ((int *)GEN_TOP(0x0))) {
        piVar8[1] = iVar2;
      }
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    }
  }
  return uVar7;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb9f90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbb9f90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 fVar3;
  float local_8;
  
  if ((*((int *)GEN_TOP((param_1 + 0xc))) == 0) && (iVar1 = *((int *)GEN_TOP((param_1 + 0x10))), iVar1 != 0)) {
    *((int *)GEN_TOP((param_1 + 0xc))) = iVar1;
    *((int *)GEN_TOP((iVar1 + 4))) = param_1;
    *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
  }
  if (((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1341b74))[(int)(*((short *)GEN_TOP((param_1 + 0x1a))))])) == ((code *)GEN_TOP(0x0))) {
    local_8 = REFG(float, 0x1087f04);
    fVar2 = 0.0;
  }
  else {
    extraout_ST0 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1341b74))[(int)(*((short *)GEN_TOP((param_1 + 0x1a))))])))
                      ((undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3)); fVar2 = extraout_ST0;
    local_8 = (float)extraout_ST0;
  }
  if (*((int *)GEN_TOP((param_1 + 0x10))) != 0) {
    fVar2 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x10))) + 4))))
                                 (*((int * PTR32 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),
                                  (undefined4)
                                  gen_fl2bits((float)((float10)local_8 * (float10)param_3))));
  }
  if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
    if (*((int *)GEN_TOP((param_1 + 0x10))) == 0) {
      fVar3 = (float10)1;
    }
    else {
      fVar3 = GEN_X87(((float10)1 - (float10)local_8) * (float10)param_3);
    }
    fVar2 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 4))))
                                 (*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),
                                  (undefined4)gen_fl2bits((float)fVar3)));
  }
  return (uint)gen_fl2bits(fVar2);
}

/* ref: Client::System::Animation::AnimationTreeNode::vf4 */
GEN_OWN GEN_NOFRAME uint F_00bba060(void)
{
  GEN_ENTER(0xbba060u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bba070(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbba070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1104880));
  if (param_1[3] != 0) {
    F_00a04370(param_1[3]);
  }
  if (param_1[4] != 0) {
    F_00a04370(param_1[4]);
  }
  F_00c1e490(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bba0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbba0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00bba0e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bba0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    F_009f6650(*((int *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,(float)(float10)0);
    F_009f7cb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,&REFG(undefined, 0x14a2434));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bba120 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bba120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && ((*((byte *)GEN_TOP(((int)this + 0x36))) & 1) == 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((ushort *)GEN_TOP(((int)this + 0x36))) = *((ushort *)GEN_TOP(((int)this + 0x36))) | 1;
  }
  return;
}

/* ref: FUN_00bba140 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba140(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbba140u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP((param_1 + 0x14)));
  iVar2 = 2;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar3));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD,param_1,param_2,(undefined4)gen_fl2bits(param_3),param_4);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return;
}

/* ref: FUN_00bba180 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bba180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = ((int *)GEN_TOP(((int)this + 0x14)));
  iVar3 = 2;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar2));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,this);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return;
}

/* ref: FUN_00bba1b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bba1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = ((int *)GEN_TOP(((int)this + 0x14)));
  iVar3 = 2;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar2));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD,this);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return;
}

/* ref: FUN_00bba1e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bba1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_009f2ed0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if (bVar1 != 0) {
      return *((byte *)GEN_TOP(((int)this + 0x2e))) >> 2 & 1;
    }
  }
  return 1;
}

/* ref: FUN_00bba210 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bba210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_009f2ed0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if (bVar1 != 0) {
      return *((byte *)GEN_TOP(((int)this + 0x2e))) >> 3 & 1;
    }
  }
  return 1;
}

/* ref: FUN_00bba240 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba240(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbba240u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((param_1 + 0x30))) = param_2;
  if (*((int *)GEN_TOP((param_1 + 0x10))) != 0) {
    F_009f6740(*((int *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00bba270 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba270(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbba270u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 0x10))) != 0) {
    F_009f66a0(*((int *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00bba290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bba290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_009f2ac0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bba2a0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_00bba2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    fVar1 = F_009f2c50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    return (double)fVar1;
  }
  return 0.0;
}

/* ref: FUN_00bba2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bba2d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbba2d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * this;
  uint uVar1;
  int * this_00;
  int * piVar2;
  
  this = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  uVar1 = 0;
  if (this != ((int *)GEN_TOP(0x0))) {
    uVar1 = F_00a03ed0();
    if (this[4] == 0) {
      F_00bb9d80(this GEN_EDX_ARG,this + 4,uVar1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 8))))(this GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
      return uVar1;
    }
    this_00 = ((int *)GEN_TOP(F_00a03e20()));
    F_00bb9d80(this_00 GEN_EDX_ARG,this_00 + 3,param_1);
    F_00bb9d80(this_00 GEN_EDX_ARG,this_00 + 4,uVar1);
    piVar2 = this + 3;
    if (*piVar2 != param_1) {
      piVar2 = this + 4;
    }
    F_00bb9d80(this GEN_EDX_ARG,piVar2,this_00);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 8))))(this_00 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  return uVar1;
}

/* ref: FUN_00bba370 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bba370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbba370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  return;
}

/* ref: FUN_00bba380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bba380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x11048b0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x11048a4));
  if (uVar2 != 0) {
    *((undefined4 *)GEN_TOP((uVar2 + 0xb4))) = 0;
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_FWD);
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && ((*((byte *)GEN_TOP(((int)this + 0x36))) & 1) == 0)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
      *((ushort *)GEN_TOP(((int)this + 0x36))) = *((ushort *)GEN_TOP(((int)this + 0x36))) | 1;
    }
  }
  piVar4 = ((int *)GEN_TOP(((int)this + 0x14)));
  iVar3 = 2;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar4));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,this);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_00c1e4a0((int)this + 0xc GEN_EDX_ARG);
  F_00c1e490(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bba400 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bba400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbba400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    F_009f6650(*((int *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,(float)(float10)0);
    F_009f7cb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,&REFG(undefined, 0x14a2434));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf3 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba440(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbba440u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this;
  byte bVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_009f2f00(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
    if (bVar1 != 0) {
      if ((((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(param_2 <= *(float *)&REFG(undefined, 0x1088114))) && (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0xc))) != 0))
         && (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10))) != 0)) {
        F_00bba2d0(param_1 GEN_EDX_ARG,param_2);
      }
      this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x10)));
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(float *)(gen_frame + 0x4)) = (float)((float10)param_2 / (float10)*(double *)&REFG(undefined, 0x1088070));
      F_009f7cb0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
      *((undefined2 *)GEN_TOP((param_1 + 0x34))) = 1;
      return;
    }
  }
  if (*(float *)&REFG(undefined, 0x1088114) < param_2) {
    if (*((int *)GEN_TOP((param_1 + 0x10))) != 0) {
      F_00bba2d0(param_1 GEN_EDX_ARG,param_2);
      return;
    }
  }
  else {
    *((undefined2 *)GEN_TOP((param_1 + 0x34))) = 1;
    if (*((int *)GEN_TOP((param_1 + 0x10))) != 0) {
      F_009f6650(*((int *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,(float)(float10)0);
    }
  }
  return;
}

/* ref: FUN_00bba510 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba510(float gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbba510u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float fVar1;
  int iVar2;
  float * pfVar3;
  
  (*(float *)(gen_frame + 0x0)) = (*(float *)&gen_args[0]);
  iVar2 = *((int *)GEN_TOP(((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x10)));
  if (iVar2 != 0) {
    (*(float *)(gen_frame + 0x0)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!((float10)0 < (float10)(*(float *)&gen_args[1]))) {
      pfVar3 = &(*(float *)(gen_frame + 0x0));
    }
    fVar1 = *pfVar3;
    (*(float *)&gen_args[1]) = fVar1;
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x0));
    }
    (*(float *)&gen_args[1]) = *pfVar3;
    F_009f6650(iVar2 GEN_EDX_FWD,(*(float *)&gen_args[1]));
  }
  return;
}

/* ref: FUN_00bba570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bba570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbba570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  undefined4 * puVar2;
  
  F_00c1e470(this GEN_EDX_FWD);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[2])REFP(0x1104898));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x11048b0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x11048a4));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = uVar1;
  for (puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x14))); puVar2 != ((undefined4 *)GEN_TOP(((int)this + 0x1c)));
      puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  return (uint)this;
}

/* ref: FUN_00bba5e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba5e0(float gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbba5e0u, gen_trace_f(gen_a0), gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float fVar1;
  int iVar2;
  float * pfVar3;
  
  (*(float *)(gen_frame + 0x0)) = (*(float *)&gen_args[0]);
  *((float *)GEN_TOP(((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x38))) = (*(float *)&gen_args[2]);
  iVar2 = *((int *)GEN_TOP(((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x10)));
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x3c))) * (float10)(*(float *)&gen_args[2]))));
  (*(float *)&gen_args[2]) = fVar1;
  if (iVar2 != 0) {
    (*(float *)(gen_frame + 0x0)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[2]);
    if (!((float10)0 < (float10)fVar1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x0));
    }
    fVar1 = *pfVar3;
    (*(float *)&gen_args[2]) = fVar1;
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)&gen_args[2]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x0));
    }
    (*(float *)&gen_args[2]) = *pfVar3;
    F_009f6650(iVar2 GEN_EDX_FWD,(*(float *)&gen_args[2]));
  }
  return;
}

/* ref: FUN_00bba650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bba650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbba650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(((int)this + 0x14)));
  piVar1 = ((int *)GEN_TOP(((int)this + 0x1c)));
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      return (uint)piVar2;
    }
  }
  uVar3 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x14)));
  do {
    if (*piVar2 == 0) {
      *((int *)GEN_TOP(((int)this + uVar3 * 4 + 0x14))) = param_1;
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 2);
  return uVar3;
}

/* ref: FUN_00bba6a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbba6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = ((int *)GEN_TOP(((int)this + 0x14)));
  piVar2 = ((int *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != piVar2) {
    do {
      if (*piVar1 == param_1) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != piVar2);
    if (piVar1 != piVar2) {
      *piVar1 = 0;
    }
  }
  return 0;
}

/* ref: FUN_00bba6d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bba6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbba6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  for (piVar1 = ((int *)GEN_TOP(((int)this + 0x14)));
      (piVar1 != ((int *)GEN_TOP(((int)this + 0x1c))) && (*piVar1 != param_1)); piVar1 = piVar1 + 1) {
  }
  return piVar1 != ((int *)GEN_TOP(((int)this + 0x1c)));
}

/* ref: FUN_00bba700 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba700(float gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbba700u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float fVar1;
  int iVar2;
  float * pfVar3;
  
  (*(float *)(gen_frame + 0x0)) = (*(float *)&gen_args[0]);
  *((float *)GEN_TOP(((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x3c))) = (*(float *)&gen_args[1]);
  iVar2 = *((int *)GEN_TOP(((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x10)));
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x38))) * (float10)(*(float *)&gen_args[1]))));
  (*(float *)&gen_args[1]) = fVar1;
  if (iVar2 != 0) {
    (*(float *)(gen_frame + 0x0)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!((float10)0 < (float10)fVar1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x0));
    }
    fVar1 = *pfVar3;
    (*(float *)&gen_args[1]) = fVar1;
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x0));
    }
    (*(float *)&gen_args[1]) = *pfVar3;
    F_009f6650(iVar2 GEN_EDX_FWD,(*(float *)&gen_args[1]));
  }
  return;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bba770(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbba770u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14c5980) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c5980) = *(uint *)&REFG(undefined, 0x14c5980) | 1;
    *(gen_code32 *)&REFG(undefined, 0x14c5970) = ((code *)REFP(0xbba5e0));
    *(undefined4 *)&REFG(undefined, 0x14c5974) = 0;
    *(gen_code32 *)&REFG(undefined, 0x14c5978) = ((code *)REFP(0xbba400));
    *(undefined4 *)&REFG(undefined, 0x14c597c) = 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14c5970) + *((short *)GEN_TOP((param_1 + 0x34))) * 8))
                    (*(int *)(&REFG(undefined, 0x14c5974) + *((short *)GEN_TOP((param_1 + 0x34))) * 8) + param_1);
  return uVar1;
}

/* ref: FUN_00bba7e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbba7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  if ((iVar2 != 0) && (piVar7 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP((iVar2 + 0x14))))), piVar7 != *((int * PTR32 *)GEN_TOP((iVar2 + 0x14)))))
  {
    do {
      iVar3 = piVar7[3];
      if (param_1 != ((int *)GEN_TOP(0x0))) {
        piVar6 = ((int *)GEN_TOP((iVar3 + 0xc)));
        for (piVar4 = piVar6; piVar4 != ((int *)GEN_TOP((iVar3 + 0x1c))); piVar4 = piVar4 + 1) {
          if (((int *)GEN_TOP(*piVar4)) == param_1) goto LAB_00bba84e;
        }
        if (((int *)GEN_TOP(*piVar4)) != param_1) {
          iVar5 = 0;
          do {
            if (*piVar6 == 0) {
              *((int * PTR32 *)GEN_TOP((iVar3 + 0xc + iVar5 * 4))) = param_1;
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_FWD,iVar3);
              break;
            }
            iVar5 = iVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar5 < 4);
        }
      }
LAB_00bba84e: ;
      if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
        piVar6 = ((int *)GEN_TOP(piVar7[2]));
        if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar6 + 0x11)));
          piVar7 = piVar6;
          piVar6 = ((int *)GEN_TOP(*piVar6));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar6 + 0x11)));
            piVar7 = piVar6;
            piVar6 = ((int *)GEN_TOP(*piVar6));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar7[1] + 0x11)));
          piVar4 = ((int *)GEN_TOP(piVar7[1]));
          piVar6 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar6 == ((int *)GEN_TOP(piVar7[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar7[1] + 0x11)));
            piVar4 = ((int *)GEN_TOP(piVar7[1]));
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != *((int * PTR32 *)GEN_TOP((iVar2 + 0x14))));
  }
  return;
}

/* ref: FUN_00bba8b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bba8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbba8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  if ((iVar2 != 0) && (piVar5 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP((iVar2 + 0x14))))), piVar5 != *((int * PTR32 *)GEN_TOP((iVar2 + 0x14)))))
  {
    do {
      if (param_1 != 0) {
        iVar4 = 0;
        piVar6 = ((int *)GEN_TOP((piVar5[3] + 0xc)));
        do {
          if (*piVar6 == param_1) {
            *((undefined4 *)GEN_TOP((piVar5[3] + 0xc + iVar4 * 4))) = 0;
            break;
          }
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < 4);
      }
      if (*((char *)GEN_TOP(((int)piVar5 + 0x11))) == '\0') {
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar6 + 0x11)));
          piVar5 = piVar6;
          piVar6 = ((int *)GEN_TOP(*piVar6));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar6 + 0x11)));
            piVar5 = piVar6;
            piVar6 = ((int *)GEN_TOP(*piVar6));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x11)));
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          piVar6 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar6 == ((int *)GEN_TOP(piVar5[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x11)));
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            piVar6 = piVar5;
          }
        }
      }
    } while (piVar5 != *((int * PTR32 *)GEN_TOP((iVar2 + 0x14))));
  }
  return;
}

/* ref: FUN_00bba950 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bba950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbba950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x14)));
    puVar2 = ((undefined4 *)GEN_TOP(F_00bbaae0(&(*(undefined * PTR32 *)(gen_frame + 0x0)),*puVar1,puVar1,&(*(undefined4 *)&gen_args[0]))));
    return ((undefined4 *)GEN_TOP(*puVar2)) != puVar1;
  }
  return 0;
}

/* ref: FUN_00bba990 */
GEN_OWN GEN_FRAME uint F_00bba990(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbba990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bba9a0 */
GEN_OWN GEN_FRAME unsigned int F_00bba9a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbba9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_00bba9c0 */
GEN_OWN GEN_FRAME unsigned int F_00bba9c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbba9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
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

/* ref: FUN_00bba9e0 */
GEN_OWN GEN_FRAME uint F_00bba9e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbba9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bba9f0 */
GEN_OWN GEN_FRAME uint F_00bba9f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbba9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbaa00 */
GEN_OWN GEN_FRAME unsigned int F_00bbaa00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbaa00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
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

/* ref: FUN_00bbaa20 */
GEN_OWN GEN_FRAME uint F_00bbaa20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbaa20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf4 */
GEN_OWN GEN_NOFRAME uint F_00bbaa30(void)
{
  GEN_ENTER(0xbbaa30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00bbaa40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbaa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbaa40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bbaab0((int)this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00bbaa50 */
GEN_OWN GEN_FRAME unsigned int F_00bbaa50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbaa50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_00bbaa70 */
GEN_OWN GEN_FRAME unsigned int F_00bbaa70(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbaa70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
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

/* ref: FUN_00bbaa90 */
GEN_OWN GEN_FRAME unsigned int F_00bbaa90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbaa90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
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

/* ref: Client::System::Animation::AnimationTreeLeaf::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbaab0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbaab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bba380(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bbaae0 */
GEN_OWN GEN_FRAME uint F_00bbaae0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbbaae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
    return (uint)param_1;
  }
  piVar4 = param_2;
  do {
    if (piVar4[3] == *param_4) break;
    if (*((char *)GEN_TOP(((int)piVar4 + 0x11))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar4[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
        piVar4 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
        piVar3 = ((int *)GEN_TOP(piVar4[1]));
        piVar2 = piVar4;
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
        }
      }
    }
  } while (piVar4 != param_3);
  *param_1 = piVar4;
  return (uint)param_1;
}

/* ref: FUN_00bbab60 */
GEN_OWN GEN_FRAME uint F_00bbab60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbbab60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00bbaae0(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_4)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bbab90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbab90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbab90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00c1e470(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x11048c8));
  return (uint)in_ecx;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bbabc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbabc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bbabd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbabd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bbabe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbabe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf4 */
GEN_OWN GEN_NOFRAME uint F_00bbabf0(void)
{
  GEN_ENTER(0xbbabf0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbac00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbac00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x11048c8));
  F_00c1e490(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bbac40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbac40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbac40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (*((char *)GEN_TOP((in_ecx + 0x10))) == '\0') {
    return 0;
  }
  return *((int *)GEN_TOP((in_ecx + 0xc))) == param_2;
}

/* ref: FUN_00bbac60 */
GEN_OWN GEN_FRAME float10 F_00bbac60(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbbac60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bbac80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbac80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbac80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0xffffffff;
  *(undefined2 *)(in_ecx + 4) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x12))) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00bbaca0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbaca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbaca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x12))) = 0;
  return 0;
}

/* ref: FUN_00bbacc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbacc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbacc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    if (*((char *)GEN_TOP(((int)this + 0x11))) != '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0xffffffff;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
      *((undefined1 *)GEN_TOP(((int)this + 0x12))) = 0;
    }
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *((undefined2 *)GEN_TOP(((int)this + 0x11))) = 1;
  }
  return 0;
}

/* ref: FUN_00bbad00 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bbad00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbad00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x12))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x10))) != '\0') {
      return 1;
    }
    if ((*((int *)GEN_TOP(((int)this + 4))) != 0) &&
       (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD),
       uVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbad30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbad30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbad30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x12))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x10))) != '\0') {
      return *((uint *)GEN_TOP(((int)this + 0xc)));
    }
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
      if (uVar1 != 0) {
        return (uint)*((ushort *)GEN_TOP((uVar1 + 0x88)));
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00bbad60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbad60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbad60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x12))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x10))) != '\0') {
      return *((uint *)GEN_TOP(((int)this + 0xc))) == param_1;
    }
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
      if (uVar1 != 0) {
        return *((ushort *)GEN_TOP((uVar1 + 0x88))) == param_1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbadb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbadb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbadb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = param_2;
  *((undefined1 *)GEN_TOP((in_ecx + 0x10))) = 1;
  *((undefined2 *)GEN_TOP((in_ecx + 0x11))) = 1;
  return 1;
}

/* ref: FUN_00bbadd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbadd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbadd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 != 0) {
    *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
    *((undefined2 *)GEN_TOP((in_ecx + 0x11))) = 1;
  }
  return param_2;
}

/* ref: FUN_00bbadf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbadf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbadf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0xc))) = param_1;
  if ((param_1 < 0x158) && ((&REFG(undefined4, 0x14a31f0))[(int)(param_1)] != 0)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
    *((undefined2 *)GEN_TOP(((int)this + 0x11))) = 1;
    return 1;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x11))) = 0x100;
  return (byte)param_1;
}

/* ref: FUN_00bbae30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbae30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbae30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x12))) == '\0') {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
      return uVar1;
    }
    if (*((char *)GEN_TOP(((int)this + 0x10))) == '\0') {
      return *((uint *)GEN_TOP(((int)this + 8)));
    }
    if ((*((uint *)GEN_TOP(((int)this + 0xc))) < 0x158) &&
       (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*((uint *)GEN_TOP(((int)this + 0xc))))])) != ((undefined *)GEN_TOP(0x0)))) {
      uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*((uint *)GEN_TOP(((int)this + 0xc))))])) GEN_EDX_ARG);
      if (uVar1 != 0) {
        return *((uint *)GEN_TOP((uVar1 + 0xec)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbaea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbaea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbaea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (((param_1 != ((undefined *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)this + 0x11))) != '\0')) &&
     (*((char *)GEN_TOP(((int)param_1 + 0x11))) != '\0')) {
    if (*((uint *)GEN_TOP(((int)this + 4))) != 0) {
      if (*((char *)GEN_TOP(((int)param_1 + 0x12))) == '\0') {
        in_EAX = *((uint *)GEN_TOP(((int)param_1 + 4)));
      }
      else {
        in_EAX = 0;
      }
      if (*((uint *)GEN_TOP(((int)this + 4))) == in_EAX) goto LAB_00bbaed2;
    }
    if (*((char *)GEN_TOP(((int)this + 0x10))) != '\0') {
      bVar1 = F_00bbad00(param_1 GEN_EDX_FWD);
      if (bVar1 != 0) {
        uVar2 = F_00bbad30(param_1 GEN_EDX_ARG);
        bVar1 = F_00bbac40(this GEN_EDX_ARG,uVar2);
        return CONCAT31(extraout_var,bVar1);
      }
    }
    uVar2 = F_00bbae30(this GEN_EDX_ARG);
    in_EAX = 0;
    if (uVar2 != 0) {
      in_EAX = F_00bbae30(param_1 GEN_EDX_ARG);
      if (uVar2 == in_EAX) {
LAB_00bbaed2: ;
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00bbaf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbaf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbaf20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bbaea0(this GEN_EDX_FWD,param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *((undefined2 *)GEN_TOP(((int)this + 0x11))) = 0x100;
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_00bbaf50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbaf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbaf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x12))) == '\0') {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
      return uVar1;
    }
    if ((*((char *)GEN_TOP(((int)this + 0x10))) != '\0') && (*((uint *)GEN_TOP(((int)this + 0xc))) < 0x158)) {
      return (&REFG(undefined4, 0x14a31f0))[(int)(*((uint *)GEN_TOP(((int)this + 0xc))))];
    }
  }
  return 0;
}

/* ref: FUN_00bbaf90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbaf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbaf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x12))) == '\0') {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
      return uVar1;
    }
    if (((*((char *)GEN_TOP(((int)this + 0x10))) != '\0') && (*((uint *)GEN_TOP(((int)this + 0xc))) < 0x158)) &&
       (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*((uint *)GEN_TOP(((int)this + 0xc))))])) != ((undefined *)GEN_TOP(0x0)))) {
      uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*((uint *)GEN_TOP(((int)this + 0xc))))])) GEN_EDX_ARG);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00bbafd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbafd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbafd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (*((char *)GEN_TOP(((int)this + 0x12))) == '\0') {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 == 0) {
      if (*((char *)GEN_TOP(((int)this + 0x10))) == '\0') {
        if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
          if (uVar3 == 3) {
            return *((uint *)GEN_TOP(((int)this + 8)));
          }
        }
      }
      else if ((*((uint *)GEN_TOP(((int)this + 0xc))) < 0x158) &&
              (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*((uint *)GEN_TOP(((int)this + 0xc))))])) != ((undefined *)GEN_TOP(0x0)))) {
        uVar3 = F_00a5f500(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*((uint *)GEN_TOP(((int)this + 0xc))))])) GEN_EDX_ARG);
        return uVar3;
      }
    }
    else if ((*((int *)GEN_TOP((iVar1 + 0x6c))) != 2) ||
            ((*((int *)GEN_TOP((iVar1 + 0x88))) != 8 && (*((int *)GEN_TOP((iVar1 + 0x88))) != 9)))) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
        if (uVar3 == 3) {
          return (uint)piVar2;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbb060 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbb060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x12))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0xffffffff;
    return;
  }
  if (*((char *)GEN_TOP((param_1 + 0x12))) != '\0') goto LAB_00bbb149;
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if (iVar1 != 0) {
    if (*((char *)GEN_TOP(((int)this + 0x11))) != '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0xffffffff;
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
      *((undefined1 *)GEN_TOP(((int)this + 0x12))) = 0;
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    *((undefined2 *)GEN_TOP(((int)this + 0x11))) = 1;
  }
  if (*((char *)GEN_TOP((param_1 + 0x12))) != '\0') goto LAB_00bbb149;
  if (*((char *)GEN_TOP((param_1 + 0x10))) == '\0') {
    if (*((int *)GEN_TOP((param_1 + 4))) == 0) goto LAB_00bbb149;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x4c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD);
    if (uVar2 == 0) goto LAB_00bbb149;
  }
  if (*((char *)GEN_TOP((param_1 + 0x12))) == '\0') {
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
    }
    if (*((char *)GEN_TOP((param_1 + 0x12))) != '\0') goto LAB_00bbb11e;
    if (*((char *)GEN_TOP((param_1 + 0x10))) == '\0') {
      if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x4c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
        if (uVar2 != 0) {
          uVar2 = (uint)*((ushort *)GEN_TOP((uVar2 + 0x88)));
          goto LAB_00bbb121;
        }
      }
      goto LAB_00bbb11e;
    }
    uVar2 = *((uint *)GEN_TOP((param_1 + 0xc)));
  }
  else {
LAB_00bbb11e: ;
    uVar2 = 0xffffffff;
  }
LAB_00bbb121: ;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  if ((uVar2 < 0x158) && ((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)] != 0)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
    *((undefined2 *)GEN_TOP(((int)this + 0x11))) = 1;
  }
  else {
    *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x11))) = 0x100;
  }
LAB_00bbb149: ;
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP((param_1 + 8)));
    *((undefined2 *)GEN_TOP(((int)this + 0x11))) = 1;
  }
  return;
}

/* ref: FUN_00bbb160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbb160(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00bbb180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbb180(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbb1d0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbb220(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbb280(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb300 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbb300(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb360 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbb360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb3c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbb3c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb420 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbb420(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbb440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbb460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbb460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbb480 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbb480(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb4c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbb4c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb500 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbb500(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb540 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbb540(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 5,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb5b0 */
GEN_OWN GEN_FRAME uint F_00bbb5b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb5c0 */
GEN_OWN GEN_FRAME uint F_00bbb5c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb5d0 */
GEN_OWN GEN_FRAME uint F_00bbb5d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb5e0 */
GEN_OWN GEN_FRAME uint F_00bbb5e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb5f0 */
GEN_OWN GEN_FRAME uint F_00bbb5f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb620 */
GEN_OWN GEN_FRAME uint F_00bbb620(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb630 */
GEN_OWN GEN_FRAME uint F_00bbb630(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb640 */
GEN_OWN GEN_FRAME uint F_00bbb640(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb650 */
GEN_OWN GEN_FRAME uint F_00bbb650(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb660 */
GEN_OWN GEN_FRAME uint F_00bbb660(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb670 */
GEN_OWN GEN_FRAME byte F_00bbb670(void)
{
  GEN_ENTER(0xbbb670u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00bbb680 */
GEN_OWN GEN_FRAME uint F_00bbb680(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbb680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bbb6b0 */
GEN_OWN GEN_FRAME uint F_00bbb6b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb6c0 */
GEN_OWN GEN_FRAME uint F_00bbb6c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb6d0 */
GEN_OWN GEN_FRAME byte F_00bbb6d0(void)
{
  GEN_ENTER(0xbbb6d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00bbb6e0 */
GEN_OWN GEN_FRAME uint F_00bbb6e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbb6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bbb710 */
GEN_OWN GEN_FRAME byte F_00bbb710(void)
{
  GEN_ENTER(0xbbb710u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00bbb740 */
GEN_OWN GEN_FRAME byte F_00bbb740(void)
{
  GEN_ENTER(0xbbb740u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00bbb750 */
GEN_OWN GEN_FRAME uint F_00bbb750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb760 */
GEN_OWN GEN_FRAME uint F_00bbb760(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb7b0 */
GEN_OWN GEN_FRAME uint F_00bbb7b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb7e0 */
GEN_OWN GEN_FRAME uint F_00bbb7e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb7f0 */
GEN_OWN GEN_FRAME uint F_00bbb7f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbb7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bbb810 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbb810(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xbbb810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  bool bVar1;
  
  if (((((short)param_2 == *((short *)GEN_TOP((param_1 + 0xc)))) && (param_3 == *((int *)GEN_TOP((param_1 + 0x20))))) &&
      (bVar1 = GEN_ISNAN((float10)*param_4) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x10)))),
      bVar1 != (bVar1 || (float10)*param_4 == (float10)*((float *)GEN_TOP((param_1 + 0x10)))))) &&
     (((bVar1 = GEN_ISNAN((float10)param_4[1]) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x14)))),
       bVar1 != (bVar1 || (float10)param_4[1] == (float10)*((float *)GEN_TOP((param_1 + 0x14)))) &&
       (bVar1 = GEN_ISNAN((float10)param_4[2]) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x18)))),
       bVar1 != (bVar1 || (float10)param_4[2] == (float10)*((float *)GEN_TOP((param_1 + 0x18)))))) &&
      (bVar1 = GEN_ISNAN((float10)param_5) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x40)))),
      bVar1 != (bVar1 || (float10)param_5 == (float10)*((float *)GEN_TOP((param_1 + 0x40)))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb880 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbb880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbb880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  bool bVar1;
  
  if (((((short)param_1 == *((short *)GEN_TOP(((int)this + 0xc)))) && (param_2 == *((int *)GEN_TOP(((int)this + 0x20)))))
      && (bVar1 = GEN_ISNAN((float10)*param_3) || GEN_ISNAN((float10)*((float *)GEN_TOP(((int)this + 0x10)))),
         bVar1 != (bVar1 || (float10)*param_3 == (float10)*((float *)GEN_TOP(((int)this + 0x10)))))) &&
     ((bVar1 = GEN_ISNAN((float10)param_3[1]) || GEN_ISNAN((float10)*((float *)GEN_TOP(((int)this + 0x14)))),
      bVar1 != (bVar1 || (float10)param_3[1] == (float10)*((float *)GEN_TOP(((int)this + 0x14)))) &&
      (bVar1 = GEN_ISNAN((float10)param_3[2]) || GEN_ISNAN((float10)*((float *)GEN_TOP(((int)this + 0x18)))),
      bVar1 != (bVar1 || (float10)param_3[2] == (float10)*((float *)GEN_TOP(((int)this + 0x18)))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb8e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbb8e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xbbb8e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  bool bVar1;
  
  if ((((param_2 == *((int *)GEN_TOP((param_1 + 0xc)))) && (param_3 == *((int *)GEN_TOP((param_1 + 0x10))))) ||
      ((param_2 == *((int *)GEN_TOP((param_1 + 0x10))) && (param_3 == *((int *)GEN_TOP((param_1 + 0xc))))))) &&
     ((bVar1 = GEN_ISNAN((float10)param_4) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x18)))),
      bVar1 != (bVar1 || (float10)param_4 == (float10)*((float *)GEN_TOP((param_1 + 0x18)))) &&
      (bVar1 = GEN_ISNAN((float10)param_5) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x1c)))),
      bVar1 != (bVar1 || (float10)param_5 == (float10)*((float *)GEN_TOP((param_1 + 0x1c)))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbb940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((ushort *)GEN_TOP(((int)this + 0xb8))) - 1;
  uVar1 = 0;
  if (0 < iVar2) {
    uVar3 = 0;
    do {
      if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 2 + uVar3 * 2))) == (short)param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      uVar3 = uVar1 & 0xffff;
    } while ((int)uVar3 < iVar2);
  }
  return 0xffff;
}

/* ref: FUN_00bbb980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbb980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbb980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (*((ushort *)GEN_TOP((in_ecx + 0xb8))) <= (ushort)param_2) {
    return 0;
  }
  return (uint)(ushort)param_2 * 0x60 + *((int *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: FUN_00bbb9b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbb9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbb9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x120, 0);
  float fVar1;
  float fVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  float10 fVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  uVar7 = (uint)(ushort)param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(float * PTR32 *)(gen_frame + 0x1c)) = param_1;
  if ((ushort)param_2 < *((ushort *)GEN_TOP(((int)this + 0xb8)))) {
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f(uVar7);
    if (uVar7 == *((ushort *)GEN_TOP(((int)this + 0xb8))) - 1) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00623320(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,
                            (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + uVar7 * 2))))));
      puVar8 = ((undefined4 *)(gen_frame + 0x80));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)))));
      pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      puVar8 = ((undefined4 *)(gen_frame + 0xc0));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      pfVar5 = ((float *)GEN_TOP(F_004ee9d0(&(*(float *)(gen_frame + 0x0)),(int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x90,((undefined4 *)(gen_frame + 0xc0)))));
      (*(float *)(gen_frame + 0x20)) = *pfVar5;
      (*(float *)(gen_frame + 0x24)) = pfVar5[1];
      (*(float *)(gen_frame + 0x28)) = pfVar5[2];
      F_0046f390(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
      fVar10 = *((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) * 0xa0 + 0x8c + *((int *)GEN_TOP(((int)pvVar3 + 0x1c))))));
      (*(float *)(gen_frame + 0x3c)) = fVar10;
      fVar9 = (float10)fVar10;
      (*(float *)(gen_frame + 0x0)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar9);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x28)));
      fVar10 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x20))))));
      (*(float *)(gen_frame + 0x20)) = fVar10;
      fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) * fVar9))));
      (*(float *)(gen_frame + 0x24)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x28))))));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      *(*(float * PTR32 *)(gen_frame + 0x1c)) = fVar10;
      (*(float * PTR32 *)(gen_frame + 0x1c))[1] = fVar1;
      (*(float * PTR32 *)(gen_frame + 0x1c))[2] = fVar2;
      return (uint)(*(float * PTR32 *)(gen_frame + 0x1c));
    }
    puVar4 = ((undefined4 *)GEN_TOP(F_00623320(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,
                          (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 2 + uVar7 * 2))))));
    puVar8 = ((undefined4 *)(gen_frame + 0x80));
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar4 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)))));
    puVar8 = ((undefined4 *)(gen_frame + 0xc0));
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    *(*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xf0));
    (*(float * PTR32 *)(gen_frame + 0x1c))[1] = (*(float *)(gen_frame + 0xf4));
    pfVar5 = (*(float * PTR32 *)(gen_frame + 0x1c));
    fVar10 = (*(float *)(gen_frame + 0xf8));
  }
  else {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
    pfVar5 = param_1;
    fVar10 = REFG(float, 0x1375ac8);
  }
  pfVar5[2] = fVar10;
  return (uint)pfVar5;
}

/* ref: FUN_00bbbbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbbd0(GEN_P(ushort * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0xbbbbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  *(undefined4 *)(param_1 + 4) = param_10;
  *(undefined4 *)(param_1 + 6) = param_11;
  *(undefined4 *)(param_1 + 8) = param_7;
  *(undefined4 *)(param_1 + 10) = param_8;
  *param_1 = (ushort)param_2;
  param_1[1] = (ushort)param_3;
  param_1[2] = (ushort)param_4;
  param_1[3] = (ushort)param_5;
  *(undefined4 *)(param_1 + 0xc) = param_9;
  *(float *)(param_1 + 0xe) = param_6;
  if ((ushort)param_3 < (ushort)param_2) {
    param_1[2] = (ushort)param_5;
    param_1[3] = (ushort)param_4;
    *param_1 = (ushort)param_3;
    param_1[1] = (ushort)param_2;
    return (uint)param_1;
  }
  if (((ushort)param_2 == (ushort)param_3) && ((ushort)param_5 < (ushort)param_4)) {
    param_1[3] = (ushort)param_4;
    param_1[2] = (ushort)param_5;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbbce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbce0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00bbbd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbd00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00bbbd10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbd10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00bbbd20 */
GEN_OWN GEN_FRAME float10 F_00bbbd20(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbbbd20u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((float10)(*(float *)&gen_args[0]) < (float10)(*(float *)&gen_args[1]))) {
    pfVar1 = &(*(float *)&gen_args[1]);
  }
  return (float10)*pfVar1;
}

/* ref: FUN_00bbbd40 */
GEN_OWN GEN_FRAME float10 F_00bbbd40(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbbbd40u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((float10)(*(float *)&gen_args[1]) < (float10)(*(float *)&gen_args[0]))) {
    pfVar1 = &(*(float *)&gen_args[1]);
  }
  return (float10)*pfVar1;
}

/* ref: FUN_00bbbde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbbe00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbe00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbbe30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00bbbe70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbe70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbe70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bbbeb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbeb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bbbef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5;
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

/* ref: FUN_00bbbf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbf20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbbf20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbf30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbf30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbbf30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbf40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbbf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbf60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbbf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbf80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbf80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbbf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbf90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbbf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbfb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbbfb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbbfb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbfc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbbfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbfe0 */
GEN_OWN GEN_FRAME uint F_00bbbfe0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbbfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_2;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbc030 */
GEN_OWN GEN_FRAME uint F_00bbc030(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbc030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bbc060 */
GEN_OWN GEN_FRAME uint F_00bbc060(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbc060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00bbc0c0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bbc0c0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbc0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00bbc0e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbc0e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbc0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbc100 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbc100(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbc100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbc120 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bbc120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbc120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00bbc140 */
GEN_OWN GEN_FRAME unsigned int F_00bbc140(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbc140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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

/* ref: _Uninitialized_move<>_00bbc170 */
GEN_OWN GEN_FRAME unsigned int F_00bbc170(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbc170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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
    puVar5 = puVar1 + 8;
    puVar3 = puVar2 + 8;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 8; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bbc1c0 */
GEN_OWN GEN_FRAME unsigned int F_00bbc1c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbc1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00bbc1e0 */
GEN_OWN GEN_FRAME uint F_00bbc1e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbc1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbc210 */
GEN_OWN GEN_FRAME uint F_00bbc210(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbc210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbc240 */
GEN_OWN GEN_FRAME uint F_00bbc240(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbc240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00bbc260 */
GEN_OWN GEN_FRAME uint F_00bbc260(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbbc260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00bbc2d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbc2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbc2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2;
  uVar2 = uVar1 & 0xffff;
  if ((short)uVar1 != 0) {
    iVar3 = 0;
    do {
      F_00bfa090(*((undefined * PTR32 *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0x74)))))) GEN_EDX_FWD);
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((uVar1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP((uVar1 + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((uVar1 + 0x18)));
  return uVar1;
}

/* ref: FUN_00bbc320 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbc320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbc320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0xe0, 0);
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined1 uVar6;
  int * piVar7;
  byte bVar8;
  double dVar10;
  undefined * pvVar11;
  float * PTR32 * ppfVar12;
  float * pfVar13;
  uint uVar14;
  uint uVar15;
  ushort * puVar16;
  float * pfVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  float10 fVar21;
  float10 fVar22;
  
  pfVar17 = *((float * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)));
  (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar17;
  iVar18 = *((int *)GEN_TOP(((int)this + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0xbc)) = this;
  (*(float * PTR32 *)(gen_frame + 0xa0)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1104968)));
  ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
  if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17))) < REFG(double, 0x1094800))) {
    ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xa0));
  }
  pfVar17 = *ppfVar12;
  bVar19 = GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar20 = bVar19 || ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17))) == *(float *)&REFG(undefined, 0x1088114);
  (*(float * PTR32 *)(gen_frame + 0xc0)) = pfVar17;
  if (bVar19 != bVar20) {
    return CONCAT22((short)((uint)((int)(uintptr_t)ppfVar12) >> 0x10),
                    CONCAT11(bVar20 << 6 | bVar19 << 2 | 2U |
                             !(*(float *)&REFG(undefined, 0x1088114) <= ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17)))),(char)ppfVar12));
  }
  (*(uint *)(gen_frame + 0xb0)) = param_1 + 0x50;
  cVar5 = *((char *)GEN_TOP(((int)this + 0xcc)));
  (*(uint *)(gen_frame + 0xb4)) = *((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2 & 0xffff;
  if (cVar5 == '\0') {
    pfVar17 = ((float *)GEN_TOP((param_1 + 0x40)));
  }
  else {
    pfVar17 = ((float *)GEN_TOP((iVar18 + 0x10)));
  }
  fVar2 = *((float *)GEN_TOP((param_1 + 0x94)));
  (*(float *)(gen_frame + 0x9c)) = *((float *)GEN_TOP((param_1 + 0x90)));
  (*(float * PTR32 *)(gen_frame + 0xa0)) = pfVar17;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094778)));
  ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
  pfVar13 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)fVar2))));
  (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar13;
  if (!((float10)(float)REFG(float, 0x1094778) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar13))))) {
    ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xc8));
  }
  (*(float * PTR32 *)(gen_frame + 0x4c)) = *ppfVar12;
  if (cVar5 != '\0') {
    F_00bbc2d0(this GEN_EDX_FWD);
    *((undefined1 *)GEN_TOP(((int)this + 0xcc))) = 0;
  }
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x20))) - (float10)*pfVar17)));
  (*(float *)(gen_frame + 0x80)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x24))) - (float10)pfVar17[1])));
  (*(float *)(gen_frame + 0x84)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x28))) - (float10)pfVar17[2])));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 0)) = fVar4;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x9c)) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0)))))))));
  fVar21 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x9c)) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0)))))));
  fVar2 = (float)(fVar21 * (float10)fVar2);
  (*(float *)(gen_frame + 0x80)) = fVar2;
  fVar3 = (float)((float10)fVar3 * fVar21);
  (*(float *)(gen_frame + 0x84)) = fVar3;
  fVar4 = (float)(fVar21 * (float10)fVar4);
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 0)) = fVar4;
  (*(longlong *)(gen_frame + 0x88)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)),(uint)gen_fl2bits(fVar4));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x40))) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x44))) + (float10)fVar3)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x48))) + (float10)fVar4)));
  F_004eebf0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0xb0)));
  F_005fe2e0(((undefined1 *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x20)));
  F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x30,(*(uint *)(gen_frame + 0xb0)));
  uVar15 = *((int *)GEN_TOP(((int)this + 0x88))) - *((int *)GEN_TOP(((int)this + 0x84))) >> 2;
  (*(uint *)(gen_frame + 0x6c)) = uVar15 & 0xffff;
  if ((short)uVar15 != 0) {
    iVar18 = 0;
    (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)GEN_TOP((uVar15 & 0xffff)));
    do {
      piVar7 = *((int * PTR32 *)GEN_TOP((iVar18 + *((int *)GEN_TOP(((int)this + 0x84))))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x10))))(piVar7 GEN_EDX_ARG);
      iVar18 = iVar18 + 4;
      pfVar17 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xcc)) - 1)));
      (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar17;
    } while (pfVar17 != ((float *)GEN_TOP(0x0)));
  }
  uVar15 = *((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2;
  if ((short)uVar15 != 0) {
    iVar18 = 0;
    (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)GEN_TOP((uVar15 & 0xffff)));
    do {
      F_00bfa370(*((undefined * PTR32 *)GEN_TOP((iVar18 + *((int *)GEN_TOP(((int)this + 0x74)))))) GEN_EDX_ARG);
      iVar18 = iVar18 + 4;
      pfVar17 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xcc)) - 1)));
      (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar17;
    } while (pfVar17 != ((float *)GEN_TOP(0x0)));
  }
  pfVar17 = *((float * PTR32 *)GEN_TOP(((int)this + 0x5c)));
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar17;
  (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)GEN_TOP(0x0));
  fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17)));
  if (fVar21 < (float10)REFG(double, 0x1094800)) {
    *((float *)GEN_TOP(((int)this + 0x5c))) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0))))) + fVar21);
  }
  fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0)))));
  if (*((char *)GEN_TOP(((int)this + 0xca))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 0xcb))) == '\0') goto LAB_00bbc606;
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x58))) + fVar21)));
    (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    *((float *)GEN_TOP(((int)this + 0x58))) = fVar2;
    fVar3 = *((float *)GEN_TOP(((int)this + 0x60)));
    (*(float *)(gen_frame + 0xc4)) = fVar3;
    if ((float10)fVar3 < (float10)fVar2) {
      *((float *)GEN_TOP(((int)this + 0x58))) = fVar3;
      (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      *((undefined1 *)GEN_TOP(((int)this + 0xcb))) = 0;
      *((undefined1 *)GEN_TOP(((int)this + 0xc4))) = 0;
      goto LAB_00bbc606;
    }
    fVar22 = GEN_X87((float10)fVar2 / (float10)fVar3);
  }
  else {
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x58))) + fVar21)));
    (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    *((float *)GEN_TOP(((int)this + 0x58))) = fVar2;
    fVar3 = *((float *)GEN_TOP(((int)this + 0x60)));
    (*(float *)(gen_frame + 0xc4)) = fVar3;
    if ((float10)fVar3 < (float10)fVar2) {
      *((float *)GEN_TOP(((int)this + 0x58))) = fVar3;
      (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)GEN_TOP(0x0));
      *((undefined1 *)GEN_TOP(((int)this + 0xca))) = 0;
      goto LAB_00bbc606;
    }
    fVar22 = GEN_X87((float10)1 - (float10)fVar2 / (float10)fVar3);
  }
  (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar22)));
  fVar22 = (float10)(float)fVar22;
  (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x10944e0) - (fVar22 + fVar22)) *
                             (fVar22 * fVar22)))))));
LAB_00bbc606: ;
  pfVar17 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar21 * (float10)*((float *)GEN_TOP(((int)this + 0x54))) - (float10)REFG(double, 0x1088108)))))))
  ;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar17;
  dVar10 = (GEN_X87MATH(((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17)))),0xe));
  pfVar17 = ((float *)(uintptr_t)gen_fl2bits((float)((float)dVar10)));
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar17;
  (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar17;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
  if (!((float10)1 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17))))) {
    ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xc8));
  }
  pfVar17 = *ppfVar12;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar17;
  (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)GEN_TOP(0x0));
  fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17)));
  (*(float *)(gen_frame + 0x44)) = *((float *)GEN_TOP(((int)this + 0x50)));
  (*(float *)(gen_frame + 0x40)) = *((float *)GEN_TOP(((int)this + 0x54)));
  (*(float *)(gen_frame + 0x54)) = *((float *)GEN_TOP(((int)this + 100)));
  (*(float *)(gen_frame + 0x48)) = *((float *)GEN_TOP(((int)this + 0x68)));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xb8)) + 2)) = gen_x87_cw;
  (*(uint *)(gen_frame + 0xb8)) = CONCAT22(gen_x87_cw,(undefined2)(*(uint *)(gen_frame + 0xb8)));
  fVar2 = (float)((float10)1 / fVar21);
  (*(float *)(gen_frame + 0x9c)) = fVar2;
  (*(float *)(gen_frame + 0xc4)) = fVar2;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)GEN_TOP((gen_x87_cw | 0xc00)));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0xc8));
  (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0xc8)) + 0)) = SUB42(((float *)GEN_TOP((gen_x87_cw | 0xc00))),0);
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0xc8)) + 0)));
  lVar1 = (longlong)TRUNC(fVar21);
  (*(longlong *)(gen_frame + 0x88)) = lVar1;
  lVar1 = (*(longlong *)(gen_frame + 0x88));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 0)) = gen_bits2f((uint)lVar1);
  pfVar13 = ((float *)GEN_TOP(((int)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x88))) + *((int *)GEN_TOP(((int)this + 0x70))))));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar17;
  if (pfVar13 != ((float *)GEN_TOP(0x0))) {
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)) = REFG(float, 0x1087f04);
    (*(longlong *)(gen_frame + 0x88)) = CONCAT44(REFG(float, 0x1087f04),(uint)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x88))));
    (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar13;
    do {
      if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
        uVar15 = (*(uint *)(gen_frame + 0xb4)) & 0xffff;
        iVar18 = 0;
        do {
          F_00bfa530(*((undefined4 *)GEN_TOP((iVar18 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74)))))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)), ((undefined1 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x44)),(*(float *)(gen_frame + 0x40)),(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0xc4)),(*(float *)(gen_frame + 0x48)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))));
          iVar18 = iVar18 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0xbc));
      if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x6c))) != 0) {
        (*(uint *)(gen_frame + 0xb0)) = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x6c)));
        do {
          if ((short)(*(uint *)(gen_frame + 0x6c)) != 0) {
            iVar18 = 0;
            (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0x6c)) & 0xffff)));
            do {
              piVar7 = *((int * PTR32 *)GEN_TOP((iVar18 + *((int *)GEN_TOP(((int)pvVar11 + 0x84))))));
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG);
              iVar18 = iVar18 + 4;
              pfVar17 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xcc)) - 1)));
              (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar17;
            } while (pfVar17 != ((float *)GEN_TOP(0x0)));
          }
          if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
            iVar18 = 0;
            (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0xb4)) & 0xffff)));
            do {
              F_00bfab80(*((undefined * PTR32 *)GEN_TOP((iVar18 + *((int *)GEN_TOP(((int)pvVar11 + 0x74)))))) GEN_EDX_ARG);
              iVar18 = iVar18 + 4;
              pfVar17 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xcc)) - 1)));
              (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar17;
            } while (pfVar17 != ((float *)GEN_TOP(0x0)));
          }
          uVar15 = (*(uint *)(gen_frame + 0xb0)) - 1;
          (*(uint *)(gen_frame + 0xb0)) = uVar15;
        } while (uVar15 != 0);
      }
      if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
        iVar18 = 0;
        (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0xb4)) & 0xffff)));
        do {
          F_00bfaf20(*((undefined * PTR32 *)GEN_TOP((iVar18 + *((int *)GEN_TOP(((int)pvVar11 + 0x74)))))) GEN_EDX_ARG);
          iVar18 = iVar18 + 4;
          pfVar17 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xcc)) - 1)));
          (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar17;
        } while (pfVar17 != ((float *)GEN_TOP(0x0)));
      }
      if (*((char *)GEN_TOP(((int)pvVar11 + 0xc6))) != '\0') {
        (*(uint *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)pvVar11 + 0xb8))) - *((int *)GEN_TOP(((int)pvVar11 + 0xb4))) >> 5 & 0xffff;
        (*(uint *)(gen_frame + 0x7c)) = *((int *)GEN_TOP(((int)pvVar11 + 0x98))) - *((int *)GEN_TOP(((int)pvVar11 + 0x94))) >> 3;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x3c)) + 0)) = *((undefined1 *)GEN_TOP(((int)pvVar11 + 200)));
        (*(undefined4 *)(gen_frame + 0x3c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3c)), 1, 3),*((undefined1 *)GEN_TOP(((int)pvVar11 + 200))));
        (*(uint *)(gen_frame + 0x58)) = *((int *)GEN_TOP(((int)pvVar11 + 0xa8))) - *((int *)GEN_TOP(((int)pvVar11 + 0xa4))) >> 3;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x50)) + 0)) = *((undefined1 *)GEN_TOP(((int)pvVar11 + 199)));
        (*(undefined4 *)(gen_frame + 0x50)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x50)), 1, 3),*((undefined1 *)GEN_TOP(((int)pvVar11 + 199))));
        if (*((ushort *)GEN_TOP(((int)pvVar11 + 0x6e))) != 0) {
          (*(float *)(gen_frame + 0xa4)) = gen_bits2f((uint)*((ushort *)GEN_TOP(((int)pvVar11 + 0x6e))));
          do {
            pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0xbc));
            if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
              iVar18 = 0;
              (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0xb4)) & 0xffff)));
              do {
                F_00bfbbe0(*((undefined4 *)GEN_TOP((iVar18 + *((int *)GEN_TOP(((int)pvVar11 + 0x74)))))) GEN_EDX_ARG,
                             (int)pvVar11 + 0x94,(*(undefined4 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x3c)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0))))),(*(float *)(gen_frame + 0xc4)));
                iVar18 = iVar18 + 4;
                pfVar17 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xcc)) - 1)));
                (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar17;
              } while (pfVar17 != ((float *)GEN_TOP(0x0)));
            }
            if ((short)(*(uint *)(gen_frame + 0x64)) != 0) {
              (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)GEN_TOP(0x0));
              (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x64)) & 0xffff;
              do {
                puVar16 = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xb4))) + (int)(*(float * PTR32 *)(gen_frame + 0xcc)))));
                (*(uint *)(gen_frame + 0x68)) = *(uint *)(puVar16 + 4);
                (*(uint *)(gen_frame + 0x60)) = *(uint *)(puVar16 + 6);
                iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74))) + (uint)*puVar16 * 4)));
                (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(puVar16 + 0xe);
                if (puVar16[2] < *((ushort *)GEN_TOP((iVar18 + 0xb8)))) {
                  (*(int *)(gen_frame + 0x98)) = (uint)puVar16[2] * 0x60 + *((int *)GEN_TOP((iVar18 + 0x18)));
                }
                else {
                  (*(int *)(gen_frame + 0x98)) = 0;
                }
                iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74))) + (uint)puVar16[1] * 4)));
                if (puVar16[3] < *((ushort *)GEN_TOP((iVar18 + 0xb8)))) {
                  (*(uint *)(gen_frame + 0xb0)) = (uint)puVar16[3] * 0x60 + *((int *)GEN_TOP((iVar18 + 0x18)));
                }
                else {
                  (*(uint *)(gen_frame + 0xb0)) = 0;
                }
                bVar19 = GEN_ISNAN(*((float *)GEN_TOP(((*(int *)(gen_frame + 0x98)) + 0x54)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
                (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x78)) + 0)) = 1;
                (*(int *)(gen_frame + 0x78)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x78)), 1, 3),1);
                if (bVar19 == (bVar19 || *((float *)GEN_TOP(((*(int *)(gen_frame + 0x98)) + 0x54))) == *(float *)&REFG(undefined, 0x1088114))) {
                  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x78)) + 0)) = 0;
                  (*(int *)(gen_frame + 0x78)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x78)), 1, 3) << 8;
                }
                (*(uint *)(gen_frame + 0x70)) = 0;
                (*(uint *)(gen_frame + 0xa8)) = 0;
                (*(uint *)(gen_frame + 0xb8)) = 1;
                if ((*(uint *)(gen_frame + 0x7c)) != 0) {
                  (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x7c));
                  do {
                    uVar15 = (*(uint *)(gen_frame + 0xb8));
                    if (((*(uint *)(gen_frame + 0x68)) & (*(uint *)(gen_frame + 0xb8))) != 0) {
                      piVar7 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x94))) + (*(uint *)(gen_frame + 0xa8)) * 8)));
                      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x20))))
                                (piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x98)),(*(uint *)(gen_frame + 0xb0)),(*(undefined4 *)(gen_frame + 0x74)),
                                 (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x94))) + (*(uint *)(gen_frame + 0xa8)) * 8 + 4))),
                                 (uint)(((*(uint *)(gen_frame + 0xb8)) & (*(uint *)(gen_frame + 0x60))) != 0),puVar16 + 8,(*(int *)(gen_frame + 0x78)),(*(float * PTR32 *)(gen_frame + 0xc0)),
                                 (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc4))));
                      uVar15 = (*(uint *)(gen_frame + 0xb8));
                    }
                    uVar14 = (*(uint *)(gen_frame + 0xa8)) + 1;
                    (*(uint *)(gen_frame + 0xb8)) = uVar15 << 1 | (uint)((int)uVar15 < 0);
                    (*(uint *)(gen_frame + 0xa8)) = uVar14;
                  } while (uVar14 < (*(uint *)(gen_frame + 0x7c)));
                }
                bVar8 = (byte)(*(uint *)(gen_frame + 0x70)) & 0x1f;
                (*(uint *)(gen_frame + 0xb8)) = 1 << bVar8 | 1U >> 0x20 - bVar8;
                (*(uint *)(gen_frame + 0xa8)) = 0;
                if ((*(uint *)(gen_frame + 0x58)) != 0) {
                  do {
                    if (((*(uint *)(gen_frame + 0x68)) & (*(uint *)(gen_frame + 0xb8))) != 0) {
                      piVar7 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xa4))) + (*(uint *)(gen_frame + 0xa8)) * 8)));
                      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x20))))
                                (piVar7 GEN_EDX_ARG,(*(int *)(gen_frame + 0x98)),(*(uint *)(gen_frame + 0xb0)),(*(undefined4 *)(gen_frame + 0x74)),
                                 (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xa4))) + (*(uint *)(gen_frame + 0xa8)) * 8 + 4))),
                                 (uint)(((*(uint *)(gen_frame + 0xb8)) & (*(uint *)(gen_frame + 0x60))) != 0),puVar16 + 8,(*(int *)(gen_frame + 0x78)));
                    }
                    uVar15 = (*(uint *)(gen_frame + 0xa8)) + 1;
                    (*(uint *)(gen_frame + 0xb8)) = (*(uint *)(gen_frame + 0xb8)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0xb8)) < 0);
                    (*(uint *)(gen_frame + 0xa8)) = uVar15;
                  } while (uVar15 < (*(uint *)(gen_frame + 0x58)));
                }
                (*(float * PTR32 *)(gen_frame + 0xcc)) = (*(float * PTR32 *)(gen_frame + 0xcc)) + 8;
                uVar15 = (*(uint *)(gen_frame + 0x5c)) - 1;
                (*(uint *)(gen_frame + 0x5c)) = uVar15;
              } while (uVar15 != 0);
            }
            fVar2 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xa4))) - 1);
            (*(float *)(gen_frame + 0xa4)) = fVar2;
          } while (fVar2 != 0.0);
        }
      }
      if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
        iVar18 = 0;
        uVar15 = (*(uint *)(gen_frame + 0xb4)) & 0xffff;
        do {
          F_00bfdb00(*((undefined * PTR32 *)GEN_TOP((iVar18 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74)))))) GEN_EDX_ARG);
          iVar18 = iVar18 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)(uintptr_t)gen_fl2bits((float)((*(float *)(gen_frame + 0xc4)))));
      pfVar17 = &(*(float *)(gen_frame + 0xa4));
      (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0xc4)) + (float10)(*(float *)(gen_frame + 0x9c)));
      if (!((float10)(float)((float10)(*(float *)(gen_frame + 0xc4)) + (float10)(*(float *)(gen_frame + 0x9c))) < (float10)1)) {
        pfVar17 = ((float *)GEN_TOP(((int)&(*(longlong *)(gen_frame + 0x88)) + 4)));
      }
      pfVar13 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xc8)) - 1)));
      (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar13;
      (*(float *)(gen_frame + 0xc4)) = *pfVar17;
      lVar1 = (*(longlong *)(gen_frame + 0x88));
    } while (pfVar13 != ((float *)GEN_TOP(0x0)));
  }
  (*(longlong *)(gen_frame + 0x88)) = lVar1;
  uVar6 = *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xc9)));
  (*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)) = uVar6;
  gen_piece_set(&(*(longlong *)(gen_frame + 0x88)), 0, 5, (unsigned long long)(CONCAT14(uVar6,(uint)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x88))))));
  if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
    uVar15 = (*(uint *)(gen_frame + 0xb4)) & 0xffff;
    iVar18 = 0;
    do {
      F_00bfe990(*((undefined4 *)GEN_TOP((iVar18 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74)))))) GEN_EDX_ARG,
                   (char)((ulonglong)(*(longlong *)(gen_frame + 0x88)) >> 0x20),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xac))))));
      iVar18 = iVar18 + 4;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x20))) = *(*(float * PTR32 *)(gen_frame + 0xa0));
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x24))) = (*(float * PTR32 *)(gen_frame + 0xa0))[1];
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x28))) = (*(float * PTR32 *)(gen_frame + 0xa0))[2];
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x70))) = 0;
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0xbc));
}

/* ref: FUN_00bbcb10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbcb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbcb10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  int * piVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_10;
  
  F_00bbc2d0(this GEN_EDX_FWD);
  uVar4 = *((int *)GEN_TOP(((int)this + 0x88))) - *((int *)GEN_TOP(((int)this + 0x84))) >> 2;
  sVar3 = (short)uVar4;
  if (sVar3 != 0) {
    iVar8 = 0;
    uVar6 = uVar4 & 0xffff;
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((iVar8 + *((int *)GEN_TOP(((int)this + 0x84))))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
      iVar8 = iVar8 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = *((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2;
  uVar7 = uVar6 & 0xffff;
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x6c)));
  local_10 = (uint)uVar1;
  sVar5 = (short)uVar6;
  if (*((char *)GEN_TOP(((int)this + 0xcd))) == '\0') {
    if (uVar1 != 0) {
      do {
        if (sVar3 != 0) {
          iVar8 = 0;
          uVar6 = uVar4 & 0xffff;
          do {
            piVar2 = *((int * PTR32 *)GEN_TOP((iVar8 + *((int *)GEN_TOP(((int)this + 0x84))))));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
            iVar8 = iVar8 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (sVar5 != 0) {
          iVar8 = 0;
          uVar6 = uVar7;
          do {
            F_00bfab80(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + iVar8))) GEN_EDX_ARG);
            iVar8 = iVar8 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else if (uVar1 != 0) {
    do {
      if (sVar3 != 0) {
        iVar8 = 0;
        uVar6 = uVar4 & 0xffff;
        do {
          piVar2 = *((int * PTR32 *)GEN_TOP((iVar8 + *((int *)GEN_TOP(((int)this + 0x84))))));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)1));
          iVar8 = iVar8 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (sVar5 != 0) {
        iVar8 = 0;
        uVar6 = uVar7;
        do {
          F_00bfab80(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + iVar8))) GEN_EDX_ARG);
          iVar8 = iVar8 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  if (sVar5 != 0) {
    iVar8 = 0;
    local_10 = uVar7;
    do {
      F_00bfdb00(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + iVar8))) GEN_EDX_ARG);
      iVar8 = iVar8 + 4;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  uVar4 = 0;
  if (sVar5 != 0) {
    iVar8 = 0;
    do {
      uVar4 = F_00bfe990(*((undefined4 *)GEN_TOP((iVar8 + *((int *)GEN_TOP(((int)this + 0x74)))))) GEN_EDX_ARG,
                           *((undefined1 *)GEN_TOP(((int)this + 0xc9))),(float)(float10)0);
      iVar8 = iVar8 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return uVar4;
}

/* ref: FUN_00bbcca0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbcca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbcca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2;
  uVar2 = uVar1 & 0xffff;
  if ((short)uVar1 != 0) {
    iVar3 = 0;
    uVar1 = uVar2;
    do {
      uVar2 = F_00bfedc0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0x74)))))) GEN_EDX_FWD);
      iVar3 = iVar3 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return uVar2;
}

/* ref: FUN_00bbcce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbcce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbbcce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((param_1 != 0) &&
     ((param_3 & 0xffff) < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2))) {
    uVar1 = F_00bff380(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + (param_3 & 0xffff) * 4))) GEN_EDX_FWD,param_1,
                         param_2,*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3,
                         param_4);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00bbcd30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbcd30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(byte param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xbbcd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(byte param_6 = (byte)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  uint uVar1;
  
  if ((param_2 != 0) &&
     ((param_4 & 0xffff) < (uint)(*((int *)GEN_TOP((param_1 + 0x78))) - *((int *)GEN_TOP((param_1 + 0x74))) >> 2))) {
    uVar1 = F_00bff3f0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + (param_4 & 0xffff) * 4))) GEN_EDX_FWD,param_2,
                         param_3,param_5,(uint)param_6,
                         *((int *)GEN_TOP((param_1 + 0x98))) - *((int *)GEN_TOP((param_1 + 0x94))) >> 3 != 0,param_7);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00bbcd90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbcd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbcd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  if (param_1 != 0) {
    if ((param_2 & 0xffff) < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2)) {
      bVar1 = F_00bff330(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + (param_2 & 0xffff) * 4))) GEN_EDX_FWD,param_1,
                           param_3);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_00bbcdd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbcdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbcdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if ((param_1 != 0) &&
     ((param_2 & 0xffff) < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2))) {
    F_00bfe7f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + (param_2 & 0xffff) * 4))) GEN_EDX_FWD,param_1,param_3);
  }
  return;
}

/* ref: FUN_00bbce10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbce10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbce10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  ushort uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4)));
  puVar3 = ((undefined4 *)GEN_TOP((iVar2 >> 5)));
  uVar1 = (ushort)puVar3;
  if (((ushort)param_1 < uVar1) &&
     (puVar3 = ((undefined4 *)GEN_TOP(CONCAT22((short)(iVar2 >> 0x15),(ushort)param_2))),
     (ushort)param_2 < uVar1)) {
    puVar3 = ((undefined4 *)GEN_TOP(((uint)(ushort)param_2 * 0x20 + *((int *)GEN_TOP(((int)this + 0xb4))))));
    puVar4 = ((undefined4 *)GEN_TOP(((uint)(ushort)param_1 * 0x20 + *((int *)GEN_TOP(((int)this + 0xb4))))));
    puVar5 = puVar4;
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar3;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    puVar4 = puVar3;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00bbce80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbce80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbce80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if ((param_1 & 0xffff) < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2)) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3;
    F_00bfbc40(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + (param_1 & 0xffff) * 4))) GEN_EDX_FWD,param_2,param_3,
                 iVar1 + param_2,iVar1 + param_3);
  }
  return;
}

/* ref: FUN_00bbced0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbced0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbced0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_c;
  
  uVar5 = -1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  uVar2 = 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  uVar3 = 0;
  local_c = 0;
  if (*((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4))) >> 5 != 0) {
    do {
      iVar4 = uVar3 * 0x20;
      uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + 8 + iVar4)));
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + 8 + iVar4))) =
           (uVar3 & uVar5) * 2 | ~uVar5 & uVar3 | uVar2;
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + 0xc + iVar4)));
      uVar3 = *puVar1;
      *puVar1 = (uVar3 & uVar5) * 2 | ~uVar5 & uVar3 | uVar2;
      local_c = local_c + 1;
      uVar3 = local_c & 0xffff;
    } while (uVar3 < (uint)(*((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4))) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbcf80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbcf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbcf80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = -1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  uVar2 = 0;
  local_8 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4))) >> 5 != 0) {
    do {
      iVar3 = uVar2 * 0x20;
      uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + 8 + iVar3)));
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + 8 + iVar3))) =
           (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb4))) + 0xc + iVar3)));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      local_8 = local_8 + 1;
      uVar2 = local_8 & 0xffff;
    } while (uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4))) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbd030 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbd030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbd030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint * puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint uVar7;
  uint local_14;
  
  puVar4 = &(*(int *)&gen_args[0]);
  if ((ushort)(*(undefined4 *)&gen_args[1]) <= (ushort)(*(int *)&gen_args[0])) {
    puVar4 = &(*(undefined4 *)&gen_args[1]);
  }
  puVar5 = &(*(int *)&gen_args[0]);
  if ((ushort)(*(int *)&gen_args[0]) <= (ushort)(*(undefined4 *)&gen_args[1])) {
    puVar5 = &(*(undefined4 *)&gen_args[1]);
  }
  uVar6 = 1 << GEN_SHC((byte)*(undefined2 *)puVar4, (byte)*(undefined2 *)puVar4);
  uVar7 = 1 << GEN_SHC((byte)*(undefined2 *)puVar5, (byte)*(undefined2 *)puVar5);
  local_14 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3 != 0) {
    bVar3 = (byte)*(undefined2 *)puVar5 - (byte)*(undefined2 *)puVar4;
    (*(int *)&gen_args[0]) = 0;
    do {
      puVar1 = ((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 8 + *((int *)GEN_TOP(((int)this + 0xb4))))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar7) >> GEN_SHC(bVar3, bVar3) | (uVar2 & uVar6) << GEN_SHC(bVar3, bVar3) |
                uVar2 & ~uVar6 & ~uVar7;
      puVar1 = ((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0xc + *((int *)GEN_TOP(((int)this + 0xb4))))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar7) >> GEN_SHC(bVar3, bVar3) | (uVar2 & uVar6) << GEN_SHC(bVar3, bVar3) |
                uVar2 & ~uVar6 & ~uVar7;
      local_14 = local_14 + 1;
      (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) + 0x20;
    } while (local_14 < (uint)(*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3));
  }
  return 0;
}

/* ref: FUN_00bbd140 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2), GEN_P(ushort * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbd140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a3;)
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = *((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2;
  uVar2 = 0;
  if (uVar6 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar3 * 4)));
      iVar4 = *((ushort *)GEN_TOP((iVar1 + 0xb8))) - 1;
      uVar5 = 0;
      if (0 < iVar4) {
        uVar3 = 0;
        do {
          if (*((short *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x14))) + 2 + uVar3 * 2))) == (short)param_1) {
            if (uVar5 != 0xffff) {
              *param_2 = uVar2;
              *param_3 = uVar5;
              return 1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          uVar3 = (uint)uVar5;
        } while ((int)uVar3 < iVar4);
      }
      uVar2 = uVar2 + 1;
      uVar3 = (uint)uVar2;
    } while (uVar3 < uVar6);
  }
  return 0;
}

/* ref: FUN_00bbd1e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbd1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00bbd240 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbbd240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a4;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 0;
  uVar2 = *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3;
  if (uVar2 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
    do {
      if ((*piVar4 == param_1) && (*(ushort *)(piVar4 + 1) == param_2)) {
        *param_4 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar2);
  }
  bVar1 = F_00bfb740(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + (param_3 & 0xffff) * 4))) GEN_EDX_FWD,param_1,
                       param_2,param_4);
  if (bVar1 != 0) {
    *param_4 = *param_4 + (*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3);
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbd2d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbd2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  uVar4 = 0;
  uVar3 = *((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3;
  if (uVar3 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xa4)));
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar1 + uVar4;
        return 1;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: FUN_00bbd360 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(ushort * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbbd360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(ushort * param_5 = (ushort *)(uintptr_t)gen_a5;)
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort * puVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort local_8;
  
  local_8 = (ushort)param_1;
  uVar1 = (ushort)param_1;
  uVar7 = (ushort)param_2;
  if (((ushort)param_2 < (ushort)param_1) ||
     ((uVar6 = (ushort)param_4, uVar1 = (ushort)param_2, uVar2 = (ushort)param_3,
      (ushort)param_1 == (ushort)param_2 &&
      (uVar7 = (ushort)param_1, (ushort)param_4 < (ushort)param_3)))) {
    local_8 = uVar7;
    uVar6 = (ushort)param_3;
    uVar2 = (ushort)param_4;
  }
  uVar7 = 0;
  uVar5 = *((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4))) >> 5;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      puVar4 = ((ushort *)GEN_TOP((uVar3 * 0x20 + *((int *)GEN_TOP(((int)this + 0xb4))))));
      if ((((*puVar4 == local_8) && (puVar4[2] == uVar2)) && (puVar4[1] == uVar1)) &&
         (puVar4[3] == uVar6)) {
        *param_5 = uVar7;
        return 1;
      }
      uVar7 = uVar7 + 1;
      uVar3 = (uint)uVar7;
    } while (uVar3 < uVar5);
  }
  return 0;
}

/* ref: FUN_00bbd420 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd420(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(ushort * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xbbd420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(ushort * param_7 = (ushort *)(uintptr_t)gen_a6;)
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  
  if ((uint)(*((int *)GEN_TOP((param_1 + 0x78))) - *((int *)GEN_TOP((param_1 + 0x74))) >> 2) <= (uint)(ushort)param_4) {
    return 0;
  }
  iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + (uint)(ushort)param_4 * 4)));
  if (((ushort)param_5 < *((ushort *)GEN_TOP((iVar5 + 0xb8)))) &&
     (iVar5 = (uint)(ushort)param_5 * 0x60 + *((int *)GEN_TOP((iVar5 + 0x18))), iVar5 != 0)) {
    uVar6 = *((int *)GEN_TOP((param_1 + 0x88))) - *((int *)GEN_TOP((param_1 + 0x84))) >> 2;
    uVar7 = 0;
    if (uVar6 != 0) {
      iVar1 = *((int *)GEN_TOP((param_1 + 0x84)));
      uVar4 = 0;
      do {
        iVar2 = *((int *)GEN_TOP((iVar1 + uVar4 * 4)));
        if (*((int *)GEN_TOP((iVar2 + 8))) == 1) {
          bVar3 = F_00bbb810(iVar2 GEN_EDX_FWD,param_2,iVar5,param_3,param_6);
          if (bVar3 != 0) {
            *param_7 = uVar7;
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
        uVar4 = (uint)uVar7;
      } while (uVar4 < uVar6);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bbd4d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(ushort * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbbd4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(ushort * param_5 = (ushort *)(uintptr_t)gen_a5;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2) <= (uint)(ushort)param_3)
  {
    return 0;
  }
  iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + (uint)(ushort)param_3 * 4)));
  if (((ushort)param_4 < *((ushort *)GEN_TOP((iVar4 + 0xb8)))) &&
     (iVar4 = (uint)(ushort)param_4 * 0x60 + *((int *)GEN_TOP((iVar4 + 0x18))), iVar4 != 0)) {
    uVar3 = *((int *)GEN_TOP(((int)this + 0x88))) - *((int *)GEN_TOP(((int)this + 0x84))) >> 2;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar2 = 0;
      do {
        iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + uVar2 * 4)));
        if ((((*((int *)GEN_TOP((iVar1 + 8))) == 2) && ((short)param_1 == *((short *)GEN_TOP((iVar1 + 0xc))))) &&
            (iVar4 == *((int *)GEN_TOP((iVar1 + 0x20))))) &&
           (((bVar6 = GEN_ISNAN((float10)*param_2) || GEN_ISNAN((float10)*((float *)GEN_TOP((iVar1 + 0x10)))),
             bVar6 != (bVar6 || (float10)*param_2 == (float10)*((float *)GEN_TOP((iVar1 + 0x10)))) &&
             (bVar6 = GEN_ISNAN((float10)param_2[1]) || GEN_ISNAN((float10)*((float *)GEN_TOP((iVar1 + 0x14)))),
             bVar6 != (bVar6 || (float10)param_2[1] == (float10)*((float *)GEN_TOP((iVar1 + 0x14)))))) &&
            (bVar6 = GEN_ISNAN((float10)param_2[2]) || GEN_ISNAN((float10)*((float *)GEN_TOP((iVar1 + 0x18)))),
            bVar6 != (bVar6 || (float10)param_2[2] == (float10)*((float *)GEN_TOP((iVar1 + 0x18)))))))) {
          *param_5 = uVar5;
          return 1;
        }
        uVar5 = uVar5 + 1;
        uVar2 = (uint)uVar5;
      } while (uVar2 < uVar3);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bbd5b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd5b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(ushort * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xbbd5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(ushort * param_8 = (ushort *)(uintptr_t)gen_a7;)
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  
  uVar4 = *((int *)GEN_TOP((param_1 + 0x78))) - *((int *)GEN_TOP((param_1 + 0x74))) >> 2;
  if ((uVar4 <= (ushort)param_2) || (uVar4 <= (ushort)param_3)) {
    return 0;
  }
  iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + (uint)(ushort)param_2 * 4)));
  if (((ushort)param_4 < *((ushort *)GEN_TOP((iVar6 + 0xb8)))) &&
     (iVar6 = (uint)(ushort)param_4 * 0x60 + *((int *)GEN_TOP((iVar6 + 0x18))), iVar6 != 0)) {
    iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + (uint)(ushort)param_3 * 4)));
    if (((ushort)param_5 < *((ushort *)GEN_TOP((iVar7 + 0xb8)))) &&
       (iVar7 = (uint)(ushort)param_5 * 0x60 + *((int *)GEN_TOP((iVar7 + 0x18))), iVar7 != 0)) {
      uVar8 = 0;
      uVar4 = *((int *)GEN_TOP((param_1 + 0x88))) - *((int *)GEN_TOP((param_1 + 0x84))) >> 2;
      if (uVar4 != 0) {
        iVar1 = *((int *)GEN_TOP((param_1 + 0x84)));
        uVar5 = 0;
        do {
          iVar2 = *((int *)GEN_TOP((iVar1 + uVar5 * 4)));
          if (*((int *)GEN_TOP((iVar2 + 8))) == 0) {
            bVar3 = F_00bbb8e0(iVar2 GEN_EDX_FWD,iVar6,iVar7,param_6,param_7);
            if (bVar3 != 0) {
              *param_8 = uVar8;
              return 1;
            }
          }
          uVar8 = uVar8 + 1;
          uVar5 = (uint)uVar8;
        } while (uVar5 < uVar4);
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bbd8e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbd8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 0;
  uVar2 = *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3;
  if (uVar2 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
    do {
      if (*piVar4 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar2);
  }
  uVar3 = 0;
  uVar2 = *((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3;
  if (uVar2 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xa4)));
    do {
      if (*piVar4 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar2);
  }
  if (*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2 != 0) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      bVar1 = F_00bfb890(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar2 * 4))) GEN_EDX_FWD,param_1);
      if (bVar1 != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0xffff;
    } while (uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2));
  }
  return 0;
}

/* ref: FUN_00bbd9a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbd9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbd9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
  F_00bbc2d0(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00bbdb70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbdb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbdb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (*(uint *)&gen_args[2]);
  uVar2 = (*(undefined4 *)&gen_args[1]);
  iVar1 = (*(uint *)&gen_args[0]);
  if (((*(uint *)&gen_args[0]) != 0) &&
     ((*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffff,
     (*(uint *)&gen_args[2]) < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2))) {
    (*(uint *)&gen_args[0]) = 0xffffffff;
    bVar3 = F_00bbd240(this GEN_EDX_FWD,iVar1,(*(undefined4 *)&gen_args[1]),uVar4,&(*(uint *)&gen_args[0]));
    if ((bVar3 != 0) &&
       (uVar4 = *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3, uVar4 <= (*(uint *)&gen_args[0]))) {
      F_00bfe8a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + (*(uint *)&gen_args[2]) * 4))) GEN_EDX_ARG,iVar1,uVar2,uVar4);
    }
  }
  return;
}

/* ref: FUN_00bbdbe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbdbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbdbe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0xa4)));
    uVar4 = 0;
    while ((*piVar3 != param_1 || (*(ushort *)(piVar3 + 1) != param_2))) {
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 2;
      if (uVar2 <= uVar4) {
        return uVar2;
      }
    }
    uVar2 = (*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3) + uVar4 & 0xffff;
    iVar1 = uVar2 * 8;
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0xa4))))));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_FWD);
      *((undefined4 *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0xa4)))))) = 0;
    }
    if (uVar4 < (*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3) - 1U) {
      do {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar4 * 8))) =
             *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + 8 + uVar4 * 8)));
        *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar4 * 8 + 4))) =
             *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + 0xc + uVar4 * 8)));
        *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar4 * 8 + 6))) =
             *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + 0xe + uVar4 * 8)));
        uVar4 = uVar4 + 1;
      } while (uVar4 < (*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3) - 1U);
    }
    F_00bbcf80(this GEN_EDX_ARG,uVar2);
    uVar4 = *((uint *)GEN_TOP(((int)this + 0xa8)));
    if (*((uint *)GEN_TOP(((int)this + 0xa4))) != uVar4) {
      uVar4 = uVar4 - 8;
      *((uint *)GEN_TOP(((int)this + 0xa8))) = uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00bbdd00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbdd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbdd00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (ushort)(*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3);
  if (((ushort)param_1 < uVar3) && ((ushort)param_2 < uVar3)) {
    iVar4 = (param_1 & 0xffff) * 8;
    iVar6 = *((int *)GEN_TOP(((int)this + 0xa4)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar6 + iVar4)));
    iVar5 = (param_2 & 0xffff) * 8;
    *((undefined4 *)GEN_TOP((iVar6 + iVar4))) = *((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    *((undefined4 *)GEN_TOP((iVar5 + *((int *)GEN_TOP(((int)this + 0xa4)))))) = uVar2;
    iVar6 = *((int *)GEN_TOP(((int)this + 0xa4)));
    uVar1 = *((undefined2 *)GEN_TOP((iVar6 + 4 + iVar4)));
    *((undefined2 *)GEN_TOP((iVar6 + 4 + iVar4))) = *((undefined2 *)GEN_TOP((iVar5 + 4 + iVar6)));
    *((undefined2 *)GEN_TOP((iVar5 + 4 + *((int *)GEN_TOP(((int)this + 0xa4)))))) = uVar1;
    iVar6 = *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3;
    F_00bbd030(this GEN_EDX_FWD,iVar6 + param_1,iVar6 + param_2);
  }
  return;
}

/* ref: FUN_00bbddb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbddb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbddb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  
  uVar5 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2 != 0) {
    uVar2 = 0;
    do {
      F_00bf96f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar2 * 4))) GEN_EDX_FWD,param_1);
      uVar5 = uVar5 + 1;
      uVar2 = uVar5 & 0xffff;
    } while (uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2));
  }
  uVar4 = -1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  uVar5 = 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  uVar2 = 0;
  local_c = 0;
  if (*((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4))) >> 5 != 0) {
    do {
      iVar3 = uVar2 * 0x20;
      uVar2 = *((uint *)GEN_TOP((iVar3 + 8 + *((int *)GEN_TOP(((int)this + 0xb4))))));
      *((uint *)GEN_TOP((iVar3 + 8 + *((int *)GEN_TOP(((int)this + 0xb4)))))) =
           (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      puVar1 = ((uint *)GEN_TOP((iVar3 + 0xc + *((int *)GEN_TOP(((int)this + 0xb4))))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      local_c = local_c + 1;
      uVar2 = local_c & 0xffff;
    } while (uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4))) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbde90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbde90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbde90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2 != 0) {
    uVar2 = 0;
    do {
      F_00bf97a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar2 * 4))) GEN_EDX_FWD,param_1);
      uVar4 = uVar4 + 1;
      uVar2 = uVar4 & 0xffff;
    } while (uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2));
  }
  uVar4 = -1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  local_8 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4))) >> 5 != 0) {
    uVar2 = 0;
    do {
      iVar3 = uVar2 * 0x20;
      uVar2 = *((uint *)GEN_TOP((iVar3 + 8 + *((int *)GEN_TOP(((int)this + 0xb4))))));
      *((uint *)GEN_TOP((iVar3 + 8 + *((int *)GEN_TOP(((int)this + 0xb4)))))) =
           (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      puVar1 = ((uint *)GEN_TOP((iVar3 + 0xc + *((int *)GEN_TOP(((int)this + 0xb4))))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      local_8 = local_8 + 1;
      uVar2 = local_8 & 0xffff;
    } while (uVar2 < (uint)(*((int *)GEN_TOP(((int)this + 0xb8))) - *((int *)GEN_TOP(((int)this + 0xb4))) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbdf70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbdf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbdf70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  byte bVar6;
  byte bVar7;
  uint * puVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2 != 0) {
    uVar4 = 0;
    do {
      F_00bfb640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar4 * 4))) GEN_EDX_FWD,(*(uint *)&gen_args[0]),(*(uint *)&gen_args[1]));
      uVar9 = uVar9 + 1;
      uVar4 = uVar9 & 0xffff;
    } while (uVar4 < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2));
  }
  uVar9 = (*(uint *)&gen_args[1]);
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)&gen_args[1]) & 0xffff;
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[0]) & 0xffff;
  puVar8 = &(*(uint *)&gen_args[1]);
  if ((ushort)uVar9 <= (ushort)(*(uint *)&gen_args[0])) {
    puVar8 = &(*(uint *)(gen_frame + 0xc));
  }
  puVar5 = &(*(uint *)&gen_args[1]);
  if ((ushort)(*(uint *)&gen_args[0]) <= (ushort)uVar9) {
    puVar5 = &(*(uint *)(gen_frame + 0xc));
  }
  bVar6 = (byte)(short)*puVar8;
  uVar9 = 1 << GEN_SHC(bVar6, bVar6);
  bVar7 = (byte)(short)*puVar5;
  uVar4 = 1 << GEN_SHC(bVar7, bVar7);
  iVar1 = *((int *)GEN_TOP(((int)this + 0xa8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xa4)));
  (*(uint *)(gen_frame + 0xc)) = uVar9;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (iVar1 - iVar2 >> 3 != 0) {
    bVar7 = bVar7 - bVar6;
    (*(uint *)&gen_args[1]) = 0;
    do {
      puVar8 = ((uint *)GEN_TOP(((*(uint *)&gen_args[1]) + 8 + *((int *)GEN_TOP(((int)this + 0xb4))))));
      uVar3 = *puVar8;
      *puVar8 = (uVar3 & uVar4) >> GEN_SHC(bVar7, bVar7) | (uVar3 & uVar9) << GEN_SHC(bVar7, bVar7) |
                uVar3 & ~uVar9 & ~uVar4;
      puVar8 = ((uint *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc + *((int *)GEN_TOP(((int)this + 0xb4))))));
      (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 0x20;
      uVar3 = *puVar8;
      *puVar8 = (uVar3 & uVar4) >> GEN_SHC(bVar7, bVar7) | (uVar3 & uVar9) << GEN_SHC(bVar7, bVar7) |
                uVar3 & ~uVar9 & ~uVar4;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < (uint)(*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3));
  }
  return 0;
}

/* ref: FUN_00bbe0d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbe0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbe0d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  int * piVar2;
  byte bVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (param_1 != 0) {
    pvVar4 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3)));
    pvVar5 = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0xffffffff));
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
      piVar6 = piVar2;
      do {
        if ((*piVar6 == param_1) && (*(ushort *)(piVar6 + 1) == param_2)) {
          (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar5;
          piVar2 = ((int *)GEN_TOP(piVar2[(int)((int)(uintptr_t)pvVar5) * 2]));
          if (piVar2 != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) * 8))) = 0;
          }
          pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x0));
          if ((*(undefined * PTR32 *)(gen_frame + 0x0)) < ((undefined *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3) - 1U
                                )))) {
            do {
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + (int)((int)(uintptr_t)pvVar4) * 8))) =
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + 8 + (int)((int)(uintptr_t)pvVar4) * 8)));
              *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + (int)((int)(uintptr_t)pvVar4) * 8 + 4))) =
                   *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + 0xc + (int)((int)(uintptr_t)pvVar4) * 8)));
              *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + (int)((int)(uintptr_t)pvVar4) * 8 + 6))) =
                   *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + 0xe + (int)((int)(uintptr_t)pvVar4) * 8)));
              pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 + 1)));
            } while (pvVar4 < ((undefined *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3
                                       ) - 1U))));
          }
          F_00bbde90(this GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x0)));
          if (*((int *)GEN_TOP(((int)this + 0x94))) == *((int *)GEN_TOP(((int)this + 0x98)))) {
            return;
          }
          *((int *)GEN_TOP(((int)this + 0x98))) = *((int *)GEN_TOP(((int)this + 0x98))) - 8;
          return;
        }
        pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 + 1)));
        piVar6 = piVar6 + 2;
      } while (pvVar5 < pvVar4);
    }
    uVar8 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2 != 0) {
      uVar7 = 0;
      do {
        bVar3 = F_00bbd240(this GEN_EDX_ARG,param_1,param_2,uVar8,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
        if (bVar3 != 0) {
          F_00bfe8a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar7 * 4))) GEN_EDX_ARG,param_1,param_2,
                       *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3);
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar8 & 0xffff;
      } while (uVar7 < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2));
    }
    uVar7 = 0;
    uVar8 = *((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3;
    if (uVar8 != 0) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xa4)));
      piVar6 = piVar2;
      while ((*piVar6 != param_1 || (*(ushort *)(piVar6 + 1) != param_2))) {
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 2;
        if (uVar8 <= uVar7) {
          return;
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3) + uVar7)));
      piVar2 = ((int *)GEN_TOP(piVar2[uVar7 * 2]));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar7 * 8))) = 0;
      }
      if (uVar7 < (*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3) - 1U) {
        do {
          puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar7 * 8)));
          *puVar1 = puVar1[2];
          *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar7 * 8 + 4))) =
               *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + 0xc + uVar7 * 8)));
          *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar7 * 8 + 6))) =
               *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + 0xe + uVar7 * 8)));
          uVar7 = uVar7 + 1;
        } while (uVar7 < (*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3) - 1U);
      }
      F_00bbcf80(this GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x0)));
      if (*((int *)GEN_TOP(((int)this + 0xa4))) != *((int *)GEN_TOP(((int)this + 0xa8)))) {
        *((int *)GEN_TOP(((int)this + 0xa8))) = *((int *)GEN_TOP(((int)this + 0xa8))) - 8;
      }
    }
  }
  return;
}

/* ref: FUN_00bbe340 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbe340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbe340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (ushort)(*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3);
  if (((ushort)param_1 < uVar4) && ((ushort)param_2 < uVar4)) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x94)));
    iVar5 = (param_1 & 0xffff) * 8;
    uVar3 = *((undefined4 *)GEN_TOP((iVar2 + iVar5)));
    iVar6 = (param_2 & 0xffff) * 8;
    *((undefined4 *)GEN_TOP((iVar2 + iVar5))) = *((undefined4 *)GEN_TOP((iVar6 + iVar2)));
    *((undefined4 *)GEN_TOP((iVar6 + *((int *)GEN_TOP(((int)this + 0x94)))))) = uVar3;
    iVar2 = *((int *)GEN_TOP(((int)this + 0x94)));
    uVar1 = *((undefined2 *)GEN_TOP((iVar2 + 4 + iVar5)));
    *((undefined2 *)GEN_TOP((iVar2 + 4 + iVar5))) = *((undefined2 *)GEN_TOP((iVar6 + 4 + iVar2)));
    *((undefined2 *)GEN_TOP((iVar6 + 4 + *((int *)GEN_TOP(((int)this + 0x94)))))) = uVar1;
    F_00bbdf70(this GEN_EDX_FWD,param_1,param_2);
  }
  return;
}

/* ref: FUN_00bbe3e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbe3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbe3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2) <= (param_1 & 0xffff)) {
    return 0;
  }
  iVar3 = (param_1 & 0xffff) * 4;
  F_00bfbba0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0x74)))))) GEN_EDX_FWD);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + iVar3))) != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + iVar3)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
    *((undefined4 *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0x74)))))) = 0;
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x74))) + iVar3;
  iVar1 = iVar3 + 4;
  F_00c46e20(iVar3,iVar1,(*((int *)GEN_TOP(((int)this + 0x78))) - iVar1 >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 0x78))) = *((int *)GEN_TOP(((int)this + 0x78))) - 4;
  return 1;
}

/* ref: FUN_00bbe460 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbe460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbe460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x88))) - *((int *)GEN_TOP(((int)this + 0x84))) >> 2) <= (param_1 & 0xffff)) {
    return 0;
  }
  iVar4 = (param_1 & 0xffff) * 4;
  piVar2 = *((int * PTR32 *)GEN_TOP((iVar4 + *((int *)GEN_TOP(((int)this + 0x84))))));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_FWD);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + iVar4))) != 0) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + iVar4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
    *((undefined4 *)GEN_TOP((iVar4 + *((int *)GEN_TOP(((int)this + 0x84)))))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 0x84))) + iVar4;
  iVar1 = iVar4 + 4;
  F_00c46e20(iVar4,iVar1,(*((int *)GEN_TOP(((int)this + 0x88))) - iVar1 >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 0x88))) = *((int *)GEN_TOP(((int)this + 0x88))) - 4;
  return 1;
}

/* ref: FUN_00bbe500 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbe500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbe500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  
  if (param_1 != 0) {
    uVar4 = *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3;
    (*(uint *)(gen_frame + 0x0)) = 0;
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    if (uVar4 != 0) {
      do {
        piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
        if (piVar2[(*(uint *)(gen_frame + 0x0)) * 2] == param_1) {
          uVar4 = (uint)*(ushort *)(piVar2 + (*(uint *)(gen_frame + 0x0)) * 2 + 1);
          uVar5 = *((int *)GEN_TOP(((int)this + 0x98))) - (int)((int)(uintptr_t)piVar2) >> 3;
          uVar6 = 0;
          (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
          piVar7 = piVar2;
          if (uVar5 != 0) {
LAB_00bbe568: ;
            if ((*piVar7 != param_1) || (*(ushort *)(piVar7 + 1) != uVar4)) goto LAB_00bbe57c;
            (*(uint *)(gen_frame + 0xc)) = uVar6;
            piVar2 = ((int *)GEN_TOP(piVar2[uVar6 * 2]));
            if (piVar2 != ((int *)GEN_TOP(0x0))) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD);
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + (*(uint *)(gen_frame + 0xc)) * 8))) = 0;
            }
            uVar4 = (*(uint *)(gen_frame + 0xc));
            if ((*(uint *)(gen_frame + 0xc)) < (*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3) - 1U) {
              do {
                puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + uVar4 * 8)));
                *puVar1 = puVar1[2];
                *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + uVar4 * 8 + 4))) =
                     *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + 0xc + uVar4 * 8)));
                *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + uVar4 * 8 + 6))) =
                     *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + 0xe + uVar4 * 8)));
                uVar4 = uVar4 + 1;
              } while (uVar4 < (*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3) - 1U);
            }
            F_00bbde90(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc)));
            if (*((int *)GEN_TOP(((int)this + 0x94))) == *((int *)GEN_TOP(((int)this + 0x98)))) goto LAB_00bbe79d;
            *((int *)GEN_TOP(((int)this + 0x98))) = *((int *)GEN_TOP(((int)this + 0x98))) - 8;
            uVar4 = (*(uint *)(gen_frame + 0x4)) - 1;
            (*(uint *)(gen_frame + 0x4)) = uVar4;
            goto LAB_00bbe7ad;
          }
LAB_00bbe584: ;
          uVar5 = 0;
          if (*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2 != 0) {
            uVar6 = 0;
            do {
              bVar3 = F_00bbd240(this GEN_EDX_ARG,param_1,uVar4,uVar5,&(*(uint *)(gen_frame + 0xc)));
              if (bVar3 != 0) {
                F_00bfe8a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar6 * 4))) GEN_EDX_ARG,param_1,uVar4,
                             *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3);
              }
              uVar5 = uVar5 + 1;
              uVar6 = uVar5 & 0xffff;
            } while (uVar6 < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2));
          }
          uVar6 = 0;
          uVar5 = *((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3;
          if (uVar5 == 0) {
LAB_00bbe79d: ;
            uVar4 = (*(uint *)(gen_frame + 0x4)) - 1;
            (*(uint *)(gen_frame + 0x4)) = uVar4;
          }
          else {
            piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xa4)));
            piVar7 = piVar2;
            do {
              if ((*piVar7 == param_1) && (*(ushort *)(piVar7 + 1) == uVar4)) {
                (*(uint *)(gen_frame + 0xc)) = (*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3) + uVar6;
                piVar2 = ((int *)GEN_TOP(piVar2[uVar6 * 2]));
                if (piVar2 != ((int *)GEN_TOP(0x0))) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
                  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar6 * 8))) = 0;
                }
                if (uVar6 < (*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3) - 1U) {
                  do {
                    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar6 * 8)));
                    *puVar1 = puVar1[2];
                    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar6 * 8 + 4))) =
                         *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + 0xc + uVar6 * 8)));
                    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar6 * 8 + 6))) =
                         *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + 0xe + uVar6 * 8)));
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < (*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3) -
                                   1U);
                }
                F_00bbcf80(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc)));
                if (*((int *)GEN_TOP(((int)this + 0xa4))) != *((int *)GEN_TOP(((int)this + 0xa8)))) {
                  *((int *)GEN_TOP(((int)this + 0xa8))) = *((int *)GEN_TOP(((int)this + 0xa8))) - 8;
                }
                goto LAB_00bbe79d;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 < uVar5);
            uVar4 = (*(uint *)(gen_frame + 0x4)) - 1;
            (*(uint *)(gen_frame + 0x4)) = uVar4;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
        }
LAB_00bbe7ad: ;
      } while ((*(uint *)(gen_frame + 0x0)) < uVar4);
    }
  }
  return;
LAB_00bbe57c: ;
  uVar6 = uVar6 + 1;
  piVar7 = piVar7 + 2;
  if (uVar5 <= uVar6) goto LAB_00bbe584;
  goto LAB_00bbe568;
}

/* ref: FUN_00bbe7c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbe7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbe7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1104970));
  iVar1 = *((int *)GEN_TOP(((int)this + 0xb4)));
  if (iVar1 != 0) {
    F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 0xbc))) - iVar1 & 0xffffffe0,200);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0xa4)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0xac))) - iVar1 >> 3) * 8,200);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x94)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x9c))) - iVar1 >> 3) * 8,200);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x84)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x8c))) - iVar1 >> 2) * 4,200);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x74)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x7c))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Physics::BoneSimulator::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbe8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbe8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(this + 0x88) - *(int *)(this + 0x84) >> 2 != 0) {
    uVar4 = 0;
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
      if (*((int *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4))) != 0) {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4)));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4))) = 0;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < (uint)(*(int *)(this + 0x88) - *(int *)(this + 0x84) >> 2));
  }
  iVar3 = *(int *)(this + 0x84);
  if (iVar3 != *(int *)(this + 0x88)) {
    F_00c46e20(iVar3,*(int *)(this + 0x88),0);
    *(int *)(this + 0x88) = iVar3;
  }
  uVar5 = 0;
  if (*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2 != 0) {
    uVar4 = 0;
    do {
      F_00bfbba0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))) GEN_EDX_ARG);
      if (*((int *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))) != 0) {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4)));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))) = 0;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < (uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2));
  }
  iVar3 = *(int *)(this + 0x74);
  if (iVar3 != *(int *)(this + 0x78)) {
    F_00c46e20(iVar3,*(int *)(this + 0x78),0);
    *(int *)(this + 0x78) = iVar3;
  }
  uVar5 = 0;
  if (*(int *)(this + 0x98) - *(int *)(this + 0x94) >> 3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + uVar5 * 8)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x94) + uVar5 * 8))) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(this + 0x98) - *(int *)(this + 0x94) >> 3));
  }
  if (*(int *)(this + 0x94) != *(int *)(this + 0x98)) {
    *(int *)(this + 0x98) = *(int *)(this + 0x94);
  }
  uVar5 = *(uint *)(this + 0xb4);
  if (uVar5 != *(uint *)(this + 0xb8)) {
    *(uint *)(this + 0xb8) = uVar5;
  }
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x14) = 0;
  }
  return uVar5;
}

/* ref: FUN_00bbeae0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bbeae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbeae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + uVar3 * 8)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x94))) + uVar3 * 8))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*((int *)GEN_TOP(((int)this + 0x94))) != *((int *)GEN_TOP(((int)this + 0x98)))) {
    *((int *)GEN_TOP(((int)this + 0x98))) = *((int *)GEN_TOP(((int)this + 0x94)));
  }
  uVar3 = 0;
  uVar2 = *((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar3 * 8)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + uVar3 * 8))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*((int *)GEN_TOP(((int)this + 0xa4))) != *((int *)GEN_TOP(((int)this + 0xa8)))) {
    *((int *)GEN_TOP(((int)this + 0xa8))) = *((int *)GEN_TOP(((int)this + 0xa4)));
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2 != 0) {
    uVar3 = 0;
    do {
      F_00bff0e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + uVar3 * 4))) GEN_EDX_ARG);
      uVar2 = uVar2 + 1;
      uVar3 = uVar2 & 0xffff;
    } while (uVar3 < (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2));
  }
  return;
}

/* ref: FUN_00bbec00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbec00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbec00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1104970));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x110497c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x20))), REFG(float, 0x1375ac0));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x24))), REFG(float, 0x1375ac4));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x28))), REFG(float, 0x1375ac8));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1375ac0));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1375ac4));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x1375ac8));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x50))), REFG(float, 0x108bee8));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1104978)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x5c))), REFG(float, 0x1104968));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x60))), REFG(float, 0x10adc54));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 100))), REFG(float, 0x1087f04));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x68))), REFG(float, 0x10abe50));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x6c))) = 2;
  *((undefined2 *)GEN_TOP(((int)this + 0x6e))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0x1010100;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0x100;
  *((undefined2 *)GEN_TOP(((int)this + 0xcc))) = 0x100;
  return (uint)this;
}

/* ref: FUN_00bbed50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbed50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0xbbed50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_FRAME_DECL(0x60, 0);
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x74)));
    uVar4 = param_2 & 0xffff;
    uVar2 = *((int *)GEN_TOP((param_1 + 0x78))) - iVar1 >> 2;
    (*(uint *)(gen_frame + 0x4c)) = uVar4;
    if ((uVar4 < uVar2) && (uVar5 = param_3 & 0xffff, uVar5 < uVar2)) {
      iVar3 = *((int *)GEN_TOP((iVar1 + uVar4 * 4)));
      if (((ushort)param_4 < *((ushort *)GEN_TOP((iVar3 + 0xb8)))) &&
         (iVar3 = (param_4 & 0xffff) * 0x60 + *((int *)GEN_TOP((iVar3 + 0x18))), (*(int *)(gen_frame + 0x40)) = iVar3, iVar3 != 0))
      {
        uVar2 = F_00bbb980(*((undefined4 *)GEN_TOP((iVar1 + uVar5 * 4))) GEN_EDX_FWD,param_5);
        (*(uint *)(gen_frame + 0x44)) = uVar2;
        if (uVar2 != 0) {
          uVar2 = F_00bbbbd0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11);
          F_00bc0590(((undefined *)GEN_TOP((param_1 + 0xb4))) GEN_EDX_ARG,uVar2);
          F_00bbb9b0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + (*(uint *)(gen_frame + 0x4c)) * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),param_4);
          F_00bbb9b0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + uVar5 * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),param_5);
          F_00bfb8d0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + (*(uint *)(gen_frame + 0x4c)) * 4))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)),((undefined1 *)(gen_frame + 0x30)),param_4
                      );
          F_00bfb8d0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + uVar5 * 4))) GEN_EDX_ARG,(*(int *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x20)),param_5);
          return ((*((int *)GEN_TOP((param_1 + 0xb8))) - *((int *)GEN_TOP((param_1 + 0xb4))) & 0xffffffe0U) - 0x20) +
                 *((int *)GEN_TOP((param_1 + 0xb4)));
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbeeb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbeeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbeeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0xc, 4);
  int iVar1;
  int iVar2;
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x98)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x94)));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)param_2;
  (*(int * PTR32 *)(gen_frame + 0x0)) = param_1;
  (*(ushort *)(gen_frame + 0x6)) = (ushort)(iVar1 - iVar2 >> 3);
  F_00bc0510(((undefined *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
  return (uint)(*(ushort *)(gen_frame + 0x6));
}

/* ref: FUN_00bbef10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbef10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbef10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0xc, 4);
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)param_2;
  (*(ushort *)(gen_frame + 0x6)) = (short)(*((int *)GEN_TOP(((int)this + 0x98))) - *((int *)GEN_TOP(((int)this + 0x94))) >> 3) +
            (short)(*((int *)GEN_TOP(((int)this + 0xa8))) - *((int *)GEN_TOP(((int)this + 0xa4))) >> 3);
  (*(int * PTR32 *)(gen_frame + 0x0)) = param_1;
  F_00bc0510(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
  return (uint)(*(ushort *)(gen_frame + 0x6));
}

/* ref: FUN_00bbef80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbef80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbef80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort * puVar5;
  uint uVar6;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar3 = (ushort)(*(undefined4 *)&gen_args[2]);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  piVar1 = ((int *)GEN_TOP(((int)param_1 + 0x94)));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(*(undefined4 *)&gen_args[1]);
  (*(ushort *)(gen_frame + 0x6)) = (ushort)(*(undefined4 *)&gen_args[2]);
  F_00bc0510(piVar1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
  iVar2 = *piVar1;
  uVar4 = *((int *)GEN_TOP(((int)param_1 + 0x98))) - iVar2 >> 3;
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((uVar4 - 1 & 0xffff)));
  puVar5 = (ushort *)&(*(undefined4 *)&gen_args[2]);
  if ((ushort)(uVar4 - 1) <= uVar3) {
    puVar5 = (ushort *)&(*(int * PTR32 *)&gen_args[0]);
  }
  uVar6 = (uint)*puVar5;
  if (uVar6 != 0) {
    puVar5 = ((ushort *)GEN_TOP((iVar2 - 2 + uVar6 * 8)));
    do {
      if (*puVar5 < uVar3) break;
      puVar5 = puVar5 - 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  while (uVar4 = uVar4 - 1, uVar6 < uVar4) {
    *((undefined4 *)GEN_TOP((*piVar1 + uVar4 * 8))) = *((undefined4 *)GEN_TOP((*piVar1 - 8 + uVar4 * 8)));
    *((undefined2 *)GEN_TOP((*piVar1 + uVar4 * 8 + 4))) = *((undefined2 *)GEN_TOP((*piVar1 - 4 + uVar4 * 8)));
    *((undefined2 *)GEN_TOP((*piVar1 + uVar4 * 8 + 6))) = *((undefined2 *)GEN_TOP((*piVar1 - 2 + uVar4 * 8)));
  }
  *((int * PTR32 *)GEN_TOP((*piVar1 + uVar6 * 8))) = (*(int * PTR32 *)(gen_frame + 0x0));
  *((undefined2 *)GEN_TOP((*piVar1 + 4 + uVar6 * 8))) = (*(undefined2 *)(gen_frame + 0x4));
  *((ushort *)GEN_TOP((*piVar1 + 6 + uVar6 * 8))) = (*(ushort *)(gen_frame + 0x6));
  if ((*(char *)&gen_args[3]) != '\0') {
    F_00bbddb0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar6);
  }
  return uVar6;
}

/* ref: FUN_00bbf070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbf070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  ushort * puVar5;
  uint uVar6;
  int iVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  (*(undefined2 *)(gen_frame + 0x6)) = (ushort)(*(uint *)&gen_args[2]);
  piVar1 = ((int *)GEN_TOP(((int)param_1 + 0xa4)));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(*(uint *)&gen_args[1]);
  F_00bc0510(piVar1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
  iVar2 = *piVar1;
  iVar7 = *((int *)GEN_TOP(((int)param_1 + 0x98))) - *((int *)GEN_TOP(((int)param_1 + 0x94))) >> 3;
  uVar3 = (*((int *)GEN_TOP(((int)param_1 + 0xa8))) - iVar2 >> 3) - 1;
  uVar6 = ((*(uint *)&gen_args[2]) & 0xffff) - iVar7;
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  (*(uint *)&gen_args[1]) = uVar3;
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(uVar6));
  puVar4 = (uint *)&(*(int * PTR32 *)&gen_args[0]);
  if (uVar3 <= uVar6) {
    puVar4 = &(*(uint *)&gen_args[1]);
  }
  uVar6 = *puVar4;
  if (uVar6 != 0) {
    puVar5 = ((ushort *)GEN_TOP((iVar2 - 2 + uVar6 * 8)));
    do {
      if (*puVar5 < (ushort)(*(uint *)&gen_args[2])) break;
      puVar5 = puVar5 - 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  for (; uVar6 < uVar3; uVar3 = uVar3 - 1) {
    *((undefined4 *)GEN_TOP((*piVar1 + uVar3 * 8))) = *((undefined4 *)GEN_TOP((*piVar1 - 8 + uVar3 * 8)));
    *((undefined2 *)GEN_TOP((*piVar1 + uVar3 * 8 + 4))) = *((undefined2 *)GEN_TOP((*piVar1 - 4 + uVar3 * 8)));
    *((undefined2 *)GEN_TOP((*piVar1 + uVar3 * 8 + 6))) = *((undefined2 *)GEN_TOP((*piVar1 - 2 + uVar3 * 8)));
    param_1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  *((int * PTR32 *)GEN_TOP((*piVar1 + uVar6 * 8))) = (*(int * PTR32 *)(gen_frame + 0x0));
  *((undefined2 *)GEN_TOP((*piVar1 + 4 + uVar6 * 8))) = (*(undefined2 *)(gen_frame + 0x4));
  uVar3 = iVar7 + uVar6;
  *((undefined2 *)GEN_TOP((*piVar1 + 6 + uVar6 * 8))) = (*(undefined2 *)(gen_frame + 0x6));
  if ((*(char *)&gen_args[3]) != '\0') {
    F_00bbced0(param_1 GEN_EDX_ARG,uVar3);
  }
  return uVar3;
}

/* ref: FUN_00bbf180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbbf180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 uVar1;
  undefined * pvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    return 0;
  }
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 8))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,0xe0,0x10)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    pvVar2 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    pvVar2 = ((undefined *)GEN_TOP(F_00bff170(pvVar2 GEN_EDX_ARG)));
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar2;
  F_00bfbd10(pvVar2 GEN_EDX_ARG,uVar1,param_1,param_2,param_3,param_4);
  F_00bc06d0(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x0));
}

/* ref: FUN_00bbf1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbbf1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  memcpy(&gen_args[4], &gen_a5, sizeof gen_a5);
  uint uVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
    if (((*(uint *)&gen_args[2]) & 0xffff) < (uint)(*((int *)GEN_TOP((param_1 + 0x78))) - *((int *)GEN_TOP((param_1 + 0x74))) >> 2)) {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + ((*(uint *)&gen_args[2]) & 0xffff) * 4)));
      if (((ushort)(*(uint *)&gen_args[3]) < *((ushort *)GEN_TOP((iVar2 + 0xb8)))) &&
         (iVar2 = ((*(uint *)&gen_args[3]) & 0xffff) * 0x60 + *((int *)GEN_TOP((iVar2 + 0x18))), iVar2 != 0)) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 8))))
                          (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,0x50,0x10);
        if (uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = F_00c1e4d0(uVar1 GEN_EDX_ARG);
        }
        F_00c1e500(uVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x14))),(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),iVar2,(*(float *)&gen_args[4]));
        (*(uint *)&gen_args[2]) = uVar1;
        F_00bc0740(((undefined *)GEN_TOP((param_1 + 0x84))) GEN_EDX_ARG,&(*(uint *)&gen_args[2]));
        return uVar1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00bbf2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbbf2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint in_ecx;
  undefined * this_00;
  int iVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    if (((uint)(*(undefined * PTR32 *)&gen_args[2]) & 0xffff) <
        (uint)(*((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x74))) >> 2)) {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x74))) + ((uint)(*(undefined * PTR32 *)&gen_args[2]) & 0xffff) * 4)));
      if (((ushort)(*(uint *)&gen_args[3]) < *((ushort *)GEN_TOP((iVar1 + 0xb8)))) &&
         (iVar1 = ((*(uint *)&gen_args[3]) & 0xffff) * 0x60 + *((int *)GEN_TOP((iVar1 + 0x18))), iVar1 != 0)) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x54))) = 0;
        in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 8))))
                           (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,0x40,0x10);
        if (in_ecx == 0) {
          this_00 = ((undefined *)GEN_TOP(0x0));
        }
        else {
          this_00 = ((undefined *)GEN_TOP(F_00c1e730(in_ecx GEN_EDX_ARG)));
        }
        F_00c1e760(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))),(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),iVar1);
        (*(undefined * PTR32 *)&gen_args[2]) = this_00;
        F_00bc0740(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[2]));
        return (uint)this_00;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00bbf360 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbf360(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xbbf360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_FRAME_DECL(0x30, 0);
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  int iVar4;
  float fVar5;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x14)));
  (*(uint *)(gen_frame + 0x14)) = param_1;
  if (iVar1 != 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x74)));
    uVar3 = *((int *)GEN_TOP((param_1 + 0x78))) - iVar1 >> 2;
    if (((param_2 & 0xffff) < uVar3) && ((param_3 & 0xffff) < uVar3)) {
      iVar4 = *((int *)GEN_TOP((iVar1 + (param_2 & 0xffff) * 4)));
      if (((ushort)param_4 < *((ushort *)GEN_TOP((iVar4 + 0xb8)))) &&
         (iVar4 = (uint)(ushort)param_4 * 0x60 + *((int *)GEN_TOP((iVar4 + 0x18))), iVar4 != 0)) {
        uVar3 = F_00bbb980(*((undefined4 *)GEN_TOP((iVar1 + (param_3 & 0xffff) * 4))) GEN_EDX_FWD,param_5);
        (*(uint *)(gen_frame + 0x18)) = uVar3;
        if (uVar3 != 0) {
          this = ((undefined *)GEN_TOP(F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),iVar4,uVar3)));
          fVar5 = F_004bd280(this GEN_EDX_ARG);
          (*(float *)(gen_frame + 0x1c)) = fVar5;
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 8))))
                            (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,0x20,0x10);
          if (uVar3 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = F_00c1e910(uVar3 GEN_EDX_ARG);
          }
          uVar2 = (*(uint *)(gen_frame + 0x14));
          F_00c1e8a0(uVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x14)) + 0x14))),iVar4,(*(uint *)(gen_frame + 0x18)),(*(float *)(gen_frame + 0x1c)),param_6,
                       param_7);
          (*(uint *)(gen_frame + 0x14)) = uVar3;
          F_00bc0740(((undefined *)GEN_TOP((uVar2 + 0x84))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x14)));
          return uVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbf4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00bbf500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00bbf530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbf530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbf530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbf580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbf580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbf580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbf5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf5c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf5d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf5e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbf5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bbf600 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbf600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bbf620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf620(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf630 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbf630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bbf650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf650(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf660 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bbf660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bbf680 */
GEN_OWN GEN_FRAME unsigned int F_00bbf680(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bbf6a0 */
GEN_OWN GEN_FRAME unsigned int F_00bbf6a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00bbf6c0 */
GEN_OWN GEN_FRAME uint F_00bbf6c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf6e0 */
GEN_OWN GEN_FRAME uint F_00bbf6e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf700 */
GEN_OWN GEN_FRAME uint F_00bbf700(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf720 */
GEN_OWN GEN_FRAME uint F_00bbf720(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf740 */
GEN_OWN GEN_FRAME unsigned int F_00bbf740(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00bbf760 */
GEN_OWN GEN_FRAME unsigned int F_00bbf760(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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

/* ref: _Uninitialized_move<>_00bbf790 */
GEN_OWN GEN_FRAME unsigned int F_00bbf790(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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
    puVar5 = puVar1 + 8;
    puVar3 = puVar2 + 8;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 8; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbf7e0 */
GEN_OWN GEN_FRAME unsigned int F_00bbf7e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00bbf810 */
GEN_OWN GEN_FRAME unsigned int F_00bbf810(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 8) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 8;
  }
  return 0;
}

/* ref: FUN_00bbf850 */
GEN_OWN GEN_FRAME unsigned int F_00bbf850(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf850u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bbf880 */
GEN_OWN GEN_FRAME unsigned int F_00bbf880(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbf880u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bbf8b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbf8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbf8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbf8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf8f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbf900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbf900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbf900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbf940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf940(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbf950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf950(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbf960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00bbf970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00bbf980 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbf980(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbf990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbf990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbf9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbf9f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbf9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00bbfa00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbfa00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbfa00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfa10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbfa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbfa10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfa70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbfa70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbfa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbfa80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbfa80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbfa80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00bbfa90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbfa90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbfa90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfab0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bbfab0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbbfab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfad0 */
GEN_OWN GEN_FRAME unsigned int F_00bbfad0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfb00 */
GEN_OWN GEN_FRAME unsigned int F_00bbfb00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfb00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 8;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfb40 */
GEN_OWN GEN_FRAME unsigned int F_00bbfb40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfb40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bbfb70 */
GEN_OWN GEN_FRAME unsigned int F_00bbfb70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfb70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bbfbb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbfbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbfbb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbfc00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbfc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbfc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbfc40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbfc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  F_00c46e20(param_2,param_2 + 4,(*((int *)GEN_TOP(((int)this + 4))) - (param_2 + 4) >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfc80 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bbfc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbfc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00bbfcb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbfcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfcb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  F_00c46e20(param_2,param_2 + 4,(*((int *)GEN_TOP(((int)this + 4))) - (param_2 + 4) >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfcf0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bbfcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbfcf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00bbfd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbfd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbfd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfd70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbfd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbfd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbfdb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bbfdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbbfdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 8;
      puVar6 = puVar2 + 8;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 8; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfe00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbfe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbfe00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1 & 0xffffffe0,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbfe40 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bbfe40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfe40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfe80 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bbfe80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfe80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 8;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfec0 */
GEN_OWN GEN_FRAME unsigned int F_00bbfec0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfec0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bbfef0 */
GEN_OWN GEN_FRAME unsigned int F_00bbfef0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbbfef0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bbff20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbff20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbff20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbff90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bbff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbff90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1 & 0xffffffe0,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bbffd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bbffd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbbffd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: FUN_00bc0020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,200);
    F_00bbfe40(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,200);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00bc00c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc00c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc00c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  puVar4 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5))) < param_1) {
    puVar2 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 0x20,0,200)));
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar2;
    for (puVar3 = *(undefined4 * PTR32 *)this; puVar3 != puVar4; puVar3 = puVar3 + 8) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar7 = puVar3;
        puVar8 = puVar6;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 8;
    }
    iVar5 = *(int *)this;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar5 != 0) {
      F_00429760(iVar5,*((int *)GEN_TOP(((int)this + 8))) - iVar5 & 0xffffffe0,200);
    }
    puVar4 = puVar2 + (int)((int)(uintptr_t)param_1) * 8;
    *(undefined4 * PTR32 *)this = puVar2;
    *((uint *)GEN_TOP(((int)this + 4))) = (iVar1 - iVar5 & 0xffffffe0U) + (int)puVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar4;
  }
  return (uint)puVar4;
}

/* ref: FUN_00bc0180 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bc0180(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc0180u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bc01b0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bc01b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc01b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bc01f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc01f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc01f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bc0240 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc0240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc0240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1 & 0xffffffe0,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bc0280 */
GEN_OWN GEN_FRAME uint F_00bc0280(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc0280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00bc02a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc02a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc02a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bc0020(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bc0020(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bc0310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 5;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bc00c0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bc00c0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bc0380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,200)));
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00bc0430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,200)));
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,200);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Client::Graphics::Physics::BoneSimulator::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc04e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc04e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bbe7c0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x1c))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bc0510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00bc02a0(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00bc02a0(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_00bc0590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar1) && (puVar3 = *(undefined4 * PTR32 *)this, puVar3 <= param_1)) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar1 = ((undefined4 *)GEN_TOP(F_00bc0310(this GEN_EDX_FWD,1)));
    }
    puVar3 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar3 & 0xffffffe0U) + *(int *)this)));
  }
  else {
    puVar3 = param_1;
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar1 = ((undefined4 *)GEN_TOP(F_00bc0310(this GEN_EDX_ARG,1)));
    }
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x20;
  return (uint)puVar1;
}

/* ref: FUN_00bc05f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc05f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc05f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bc0380(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bc0380(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bc0660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bc0430(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bc0430(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bc06d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc06d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc06d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00bc05f0(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00bc05f0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00bc0740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00bc0660(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00bc0660(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00bc07b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc07b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc07b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: FUN_00bc07e0 */
GEN_OWN GEN_FRAME uint F_00bc07e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc07e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bc07f0 */
GEN_OWN GEN_FRAME unsigned int F_00bc07f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc07f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
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

/* ref: FUN_00bc0810 */
GEN_OWN GEN_FRAME uint F_00bc0810(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Client::System::Animation::CutSceneWind::WindControllerListener::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0830(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bb9a40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00bc0860 */
GEN_OWN GEN_NOFRAME byte F_00bc0860(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc0860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  byte bVar1;
  undefined4 * puVar2;
  
  (*(byte *)(gen_frame + 0x2f)) = 0;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = 0.0;
  puVar2 = &REFG(undefined4, 0x14c598c);
  do {
    if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_00bb9a20(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_2,param_3);
      if (bVar1 != 0) {
        (*(byte *)(gen_frame + 0x2f)) = 1;
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x18)) + (float10)(*(float *)(gen_frame + 0x8)));
      }
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x14c599c);
  if ((*(byte *)(gen_frame + 0x2f)) != 0) {
    *param_1 = (*(float *)(gen_frame + 0x10));
    param_1[1] = (*(float *)(gen_frame + 0x14));
    param_1[2] = (*(float *)(gen_frame + 0x18));
  }
  return (*(byte *)(gen_frame + 0x2f));
}

/* ref: FUN_00bc0910 */
GEN_OWN GEN_FRAME uint F_00bc0910(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  undefined * this;
  uint * puVar3;
  int iVar4;
  
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x78)));
  if (this != ((undefined *)GEN_TOP(0x0))) goto LAB_00bc0952;
  iVar4 = *((int *)GEN_TOP((param_1 + 0x6c)));
  if (iVar4 == 0) {
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
    }
    iVar4 = *((int *)GEN_TOP((param_1 + 0x6c)));
    uVar2 = 0;
    if (iVar4 != 0) goto LAB_00bc0939;
  }
  else {
LAB_00bc0939: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
    *((undefined4 *)GEN_TOP((param_1 + 0x78))) = uVar1;
    uVar2 = F_00b595f0(uVar1);
  }
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x78)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    return uVar2;
  }
LAB_00bc0952: ;
  uVar2 = F_00bc40b0(this GEN_EDX_ARG,param_1,param_2);
  puVar3 = &REFG(undefined4, 0x14c598c);
  do {
    if (*puVar3 == uVar2) {
      if (puVar3 != &REFG(undefined4, 0x14c599c)) {
        return uVar2;
      }
      break;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != &REFG(undefined4, 0x14c599c));
  iVar4 = 0;
  do {
    if ((&REFG(undefined4, 0x14c598c))[(int)(iVar4)] == 0) {
      *((undefined * PTR32 * PTR32 *)GEN_TOP((uVar2 + 0x1c))) = &REFG(undefined * PTR32, 0x1341d94);
      (&REFG(undefined4, 0x14c598c))[(int)(iVar4)] = uVar2;
      return uVar2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return uVar2;
}

/* ref: FUN_00bc09b0 */
GEN_OWN GEN_FRAME uint F_00bc09b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc09b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined * this;
  
  pvVar5 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x78)));
  this = pvVar5;
  if (pvVar5 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bc09f2;
  iVar2 = *((int *)GEN_TOP((param_1 + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP((param_1 + 0x6c)));
    pvVar5 = ((undefined *)GEN_TOP(0x0));
    if (iVar2 != 0) goto LAB_00bc09dd;
  }
  else {
LAB_00bc09dd: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP((param_1 + 0x78))) = uVar1;
    pvVar5 = ((undefined *)GEN_TOP(F_00b595f0(uVar1)));
  }
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x78)));
LAB_00bc09f2: ;
  if ((this != ((undefined *)GEN_TOP(0x0))) && (iVar2 = *((int *)GEN_TOP(((int)this + 0x458))), iVar2 != 0)) {
    piVar3 = &REFG(undefined4, 0x14c598c);
    while (*piVar3 != iVar2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == &REFG(undefined4, 0x14c599c)) {
        uVar4 = F_00bc40c0(this GEN_EDX_ARG,param_1);
        return uVar4;
      }
    }
    if (piVar3 != &REFG(undefined4, 0x14c599c)) {
      *((undefined4 *)GEN_TOP((iVar2 + 0x1c))) = 0;
      *piVar3 = 0;
    }
    pvVar5 = ((undefined *)GEN_TOP(F_00bc40c0(this GEN_EDX_ARG,param_1)));
  }
  return (uint)pvVar5;
}

/* ref: FUN_00bc0a40 */
GEN_OWN GEN_FRAME unsigned int F_00bc0a40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc0a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  
  piVar1 = &REFG(undefined4, 0x14c598c);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != &REFG(undefined4, 0x14c599c)) {
        *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 0;
        *piVar1 = 0;
      }
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != &REFG(undefined4, 0x14c599c));
  return 0;
}

/* ref: FUN_00bc0a80 */
GEN_OWN GEN_FRAME unsigned int F_00bc0a80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc0a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
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

/* ref: Client::System::Animation::CutSceneWind::WindControllerListener::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc0aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = &REFG(undefined4, 0x14c598c);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != &REFG(undefined4, 0x14c599c)) {
        *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 0;
        *piVar1 = 0;
      }
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != &REFG(undefined4, 0x14c599c));
  return 0;
}

/* ref: FUN_00bc0ae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc0ae0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc0ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  return in_ecx;
}

/* ref: FUN_00bc0af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0af0(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbc0af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0.0;
  uVar1 = F_00c4f2dd();
  param_1[2] = (float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0));
  uVar1 = F_00c4f2dd();
  param_1[4] = 0.0;
  param_1[3] = (float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0));
  return uVar1;
}

/* ref: FUN_00bc0b40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc0b40(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbc0b40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = *param_1;
  if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar3 = F_00bc0c10((float)((float10)param_1[1] / (float10)fVar1));
    fVar3 = GEN_X87((float10)((float)GEN_TOF(((float10)param_1[2] +
                            (float10)(float)fVar3 * ((float10)param_1[3] - (float10)param_1[2])))));
    param_1[4] = ((float)GEN_TOF(((fVar3 + fVar3) - (float10)REFG(double, 0x1088130))));
    fVar1 = (float)((float10)param_2 / (float10)*(double *)&REFG(undefined, 0x1088070) + (float10)param_1[1]);
    param_1[1] = fVar1;
    if ((float10)*param_1 <= (float10)fVar1) {
      param_1[2] = param_1[3];
      uVar2 = F_00c4f2dd();
      param_1[3] = (float)((float10)(int)uVar2 / (float10)*(double *)&REFG(undefined, 0x10920e0));
      if ((float10)*param_1 <= (float10)param_1[1]) {
        do {
          param_1[1] = (float)((float10)param_1[1] - (float10)*param_1);
        } while ((!GEN_ISNAN((float10)param_1[1]) && !GEN_ISNAN((float10)*param_1)) &&
                 !((float10)param_1[1] < (float10)*param_1));
      }
    }
  }
  return;
}

/* ref: FUN_00bc0c10 */
GEN_OWN GEN_FRAME float10 F_00bc0c10(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbc0c10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  return GEN_X87((float10)((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x10944e0) - (fVar1 + fVar1)) * (fVar1 * fVar1)))));
}

/* ref: FUN_00bc0c30 */
GEN_OWN GEN_FRAME float10 F_00bc0c30(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbc0c30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  return GEN_X87((float10)((float)GEN_TOF(((float10)1 -
                         (float10)((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x10944e0) - (fVar1 + fVar1)) *
                                         (fVar1 * fVar1))))))));
}

/* ref: FUN_00bc0c60 */
GEN_OWN GEN_FRAME float10 F_00bc0c60(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbc0c60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float10)param_2;
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar5 = GEN_X87((float10)*((float *)GEN_TOP((param_1 + 4))) * fVar2);
  fVar3 = GEN_X87((float10)*((float *)GEN_TOP((param_1 + 8))) * fVar2);
  fVar4 = (float10)*((float *)GEN_TOP(param_1));
  return GEN_X87((float10)((float)GEN_TOF((fVar4 + (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((((fVar5 - 
                                                  fVar4) - fVar3) +
                                                  (float10)*((float *)GEN_TOP((param_1 + 0xc)))) *
                                                  (float10)((float)GEN_TOF(((float10)(float)(fVar1 * fVar1) *
                                                                  fVar1)))))) +
                                                  (float10)(float)(fVar1 * fVar1) *
                                                  ((fVar4 * fVar2 -
                                                   (float10)*((float *)GEN_TOP((param_1 + 4))) *
                                                   (float10)*(double *)&REFG(undefined, 0x10944d0)) + fVar3)))) +
                                                  (fVar5 - fVar4 * fVar2) * fVar1)))))));
}

/* ref: FUN_00bc0d20 */
GEN_OWN GEN_FRAME uint F_00bc0d20(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 << 0x10 | param_1;
}

/* ref: FUN_00bc0d30 */
GEN_OWN GEN_FRAME uint F_00bc0d30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc0d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (-1 < (int)param_1) {
    return param_1 & 0xffff;
  }
  return 0xffffffff;
}

/* ref: FUN_00bc0d60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc0d60(GEN_P(byte * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *in_ecx = *in_ecx | param_2;
  return param_2;
}

/* ref: FUN_00bc0d70 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00bc0d70(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc0d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00bba1e0(param_1 GEN_EDX_ARG);
  return bVar1 == 0;
}

/* ref: FUN_00bc0d90 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00bc0d90(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc0d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00bba210(param_1 GEN_EDX_ARG);
  return bVar1 == 0;
}

/* ref: FUN_00bc0db0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc0db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x40))) == 0) {
    uVar1 = F_00a0b6b0(param_1);
    *((uint *)GEN_TOP(((int)this + 0x40))) = uVar1;
  }
  return;
}

/* ref: FUN_00bc0dd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc0dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc0dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    uVar1 = F_00a0b6f0(*((int *)GEN_TOP(((int)this + 0x40))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc0df0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc0df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) == 0) {
    uVar1 = F_00a0c3f0(param_1);
    *((uint *)GEN_TOP(((int)this + 0x44))) = uVar1;
  }
  return;
}

/* ref: FUN_00bc0e10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc0e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc0e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    uVar1 = F_00a0c430(*((int *)GEN_TOP(((int)this + 0x44))));
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc0e30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc0e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc0e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x48))) == 0) {
    uVar1 = F_00a0b300(param_1,param_2);
    *((uint *)GEN_TOP(((int)this + 0x48))) = uVar1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x48))) != 0) {
    F_00a0b4a0(*((int *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00bc0e70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc0e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc0e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x48))) != 0) {
    uVar1 = F_00a0b310(*((int *)GEN_TOP(((int)this + 0x48))));
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc0e90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc0e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc0e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x4c))) == 0) {
    uVar1 = F_00a05020(param_1,param_2);
    *((uint *)GEN_TOP(((int)this + 0x4c))) = uVar1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    F_00a05190(*((int *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00bc0ed0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc0ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc0ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    uVar1 = F_00a04ea0(*((int *)GEN_TOP(((int)this + 0x4c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc0ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00a0c1d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1)));
  }
  return (uint)this;
}

/* ref: FUN_00bc0f10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc0f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00a0bfc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1);
    this = ((undefined *)GEN_TOP((uint)bVar1));
  }
  return (byte)this;
}

/* ref: FUN_00bc0f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00a0c200(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1)));
  }
  return (uint)this;
}

/* ref: FUN_00bc0f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    F_00a0b710(*((int *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00bc0f70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc0f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00a0b7b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1);
    this = ((undefined *)GEN_TOP((uint)bVar1));
  }
  return (byte)this;
}

/* ref: FUN_00bc0f90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc0f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00a0b930(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1,param_2)));
  }
  return (uint)this;
}

/* ref: FUN_00bc0fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc0fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00a0b950(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1,param_2)));
  }
  return (uint)this;
}

/* ref: FUN_00bc0fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc0fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint in_EAX = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    in_EAX = F_00a04f10(*((int *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_FWD,param_2,(undefined1)param_3);
  }
  return in_EAX;
}

/* ref: FUN_00bc1000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc1000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc1000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte in_AL = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    uVar1 = F_00a05080(*((int *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_FWD,param_2,(undefined1)param_3);
    in_AL = (byte)uVar1;
  }
  return in_AL;
}

/* ref: FUN_00bc1020 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) != ((undefined *)GEN_TOP(0x0))) {
    in_EAX = F_00a05870(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_FWD);
  }
  return in_EAX;
}

/* ref: FUN_00bc1030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc1030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    uVar1 = F_00a05810(param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00bc1050 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc1050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc1050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    F_00a05840(param_1,param_2);
    return;
  }
  return;
}

/* ref: FUN_00bc1070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc1070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x50))) == 0) {
    uVar1 = F_00a04070();
    *((uint *)GEN_TOP(((int)this + 0x50))) = uVar1;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00bb9a50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,param_1,param_2);
    return *((uint *)GEN_TOP(((int)this + 0x50)));
  }
  return 0;
}

/* ref: FUN_00bc10b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc10b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc10b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00bb9a00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_FWD,param_1);
    in_EAX = F_00a04540(*((undefined4 *)GEN_TOP(((int)this + 0x50))));
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bc10e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc10e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc10e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*((int *)GEN_TOP(((int)this + 4))) == param_1) {
      return (uint)this;
    }
    iVar1 = iVar1 + 1;
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  } while (iVar1 < 8);
  return 0;
}

/* ref: FUN_00bc1130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return (uint)this;
}

/* ref: FUN_00bc1180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = *((int *)GEN_TOP(((int)this + iVar3 * 8)));
    if (iVar1 != 0) {
      F_00a041f0(iVar1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    F_00a0b6f0(*((int *)GEN_TOP(((int)this + 0x40))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    F_00a0c430(*((int *)GEN_TOP(((int)this + 0x44))));
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x48))) != 0) {
    F_00a0b310(*((int *)GEN_TOP(((int)this + 0x48))));
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    F_00a04ea0(*((int *)GEN_TOP(((int)this + 0x4c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x50))) != 0) {
    uVar2 = F_00a04540(*((int *)GEN_TOP(((int)this + 0x50))));
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00bc1210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  pvVar1 = this;
  do {
    if (*((uint *)GEN_TOP(((int)pvVar1 + 4))) == param_1) {
      return (uint)pvVar1;
    }
    iVar3 = iVar3 + 1;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 + 8)));
  } while (iVar3 < 8);
  iVar3 = 0;
  do {
    if (*((uint *)GEN_TOP(((int)this + 4))) == 0xffffffff) {
      if (this != ((uint *)GEN_TOP(0x0))) {
        uVar2 = F_00a03dd0();
        *(uint *)this = uVar2;
        *((uint *)GEN_TOP(((int)this + 4))) = param_1;
      }
      return (uint)this;
    }
    iVar3 = iVar3 + 1;
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  } while (iVar3 < 8);
  return 0;
}

/* ref: FUN_00bc1270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*((int *)GEN_TOP(((int)this + 4))) == param_1) {
      uVar1 = 0;
      if (*(int *)this != 0) {
        uVar1 = F_00a041f0(*(int *)this);
        *(int *)this = 0;
      }
      *((int *)GEN_TOP(((int)this + 4))) = -1;
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  } while ((int)uVar1 < 8);
  return uVar1;
}

/* ref: FUN_00bc12c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc12c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbc12c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  byte bVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int local_8;
  
  piVar3 = param_1 + 1;
  local_8 = 8;
  do {
    if (-1 < *piVar3) {
      iVar2 = piVar3[-1];
      F_00b63990(iVar2 GEN_EDX_FWD,param_3);
      bVar1 = F_00b63680(iVar2 GEN_EDX_ARG);
      if (bVar1 != 0) {
        iVar2 = 0;
        piVar4 = param_1;
        do {
          if (piVar4[1] == *piVar3) {
            if (*piVar4 != 0) {
              F_00a041f0(*piVar4);
              *piVar4 = 0;
            }
            piVar4[1] = -1;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar2 < 8);
      }
    }
    piVar3 = piVar3 + 2;
    local_8 = local_8 - 1;
    if (local_8 == 0) {
      if (((undefined *)GEN_TOP(param_1[0x10])) != ((undefined *)GEN_TOP(0x0))) {
        F_00a0c1a0(((undefined *)GEN_TOP(param_1[0x10])) GEN_EDX_ARG,param_1,param_2,(undefined4)gen_fl2bits(param_3));
      }
      if (param_1[0x11] != 0) {
        F_00a0c870(param_1[0x11] GEN_EDX_ARG,param_1,param_2,param_3);
      }
      if (param_1[0x12] != 0) {
        F_00a0b330(param_1,param_2);
      }
      if (param_1[0x13] != 0) {
        F_00a05890(param_1[0x13] GEN_EDX_ARG,param_2,param_3);
      }
      if (((undefined *)GEN_TOP(param_1[0x14])) != ((undefined *)GEN_TOP(0x0))) {
        F_00bb9a80(((undefined *)GEN_TOP(param_1[0x14])) GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
      }
      return;
    }
  } while( true );
}

/* ref: FUN_00bc13b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc13b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc13b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int local_8;
  
  iVar3 = 0;
  do {
    if (-1 < *((int *)GEN_TOP(((int)this + iVar3 * 8 + 4)))) {
      F_00b642d0(*((undefined * PTR32 *)GEN_TOP(((int)this + iVar3 * 8))) GEN_EDX_FWD);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  piVar2 = ((int *)GEN_TOP(((int)this + 4)));
  local_8 = 8;
  do {
    if (-1 < *piVar2) {
      iVar3 = piVar2[-1];
      F_00b63990(iVar3 GEN_EDX_ARG,(float)(float10)0);
      bVar1 = F_00b63680(iVar3 GEN_EDX_ARG);
      if (bVar1 != 0) {
        iVar3 = 0;
        piVar4 = this;
        do {
          if (piVar4[1] == *piVar2) {
            if (*piVar4 != 0) {
              F_00a041f0(*piVar4);
              *piVar4 = 0;
            }
            piVar4[1] = -1;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar3 < 8);
      }
    }
    piVar2 = piVar2 + 2;
    local_8 = local_8 - 1;
    if (local_8 == 0) {
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
        F_00a0c1a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,this,0,(undefined4)gen_fl2bits((float)(float10)0))
        ;
      }
      if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
        F_00a0c870(*((int *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,this,0,(float)(float10)0);
      }
      if (*((int *)GEN_TOP(((int)this + 0x48))) != 0) {
        F_00a0b330(this,0);
      }
      if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
        F_00a05890(*((int *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,0,(float)(float10)0);
      }
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
        F_00bb9a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,0,(undefined4)gen_fl2bits((float)(float10)0));
      }
      return;
    }
  } while( true );
}

/* ref: FUN_00bc14b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc14b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc14b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 in_ecx;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60)));
  uVar3 = 0;
  iVar4 = 0;
  do {
    uVar2 = *((uint *)GEN_TOP(((int)this + iVar4 * 8 + 4)));
    if (-1 < (int)uVar2) {
      uVar2 = uVar2 & 0xffff;
      bVar1 = F_00500b00(in_ecx GEN_EDX_FWD);
      if ((uVar2 < bVar1) &&
         (uVar2 = F_00500ae0(in_ecx GEN_EDX_ARG,uVar2), (*((uint *)GEN_TOP((uVar2 + 8))) >> 1 & 1) != 0)) {
        if (param_2 <= (int)uVar3) {
          return uVar3;
        }
        *((undefined4 *)GEN_TOP((param_1 + uVar3 * 4))) = *((undefined4 *)GEN_TOP(((int)this + iVar4 * 8)));
        uVar3 = uVar3 + 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return uVar3;
}

/* ref: FUN_00bc1530 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00bc1530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  
  if (-1 < param_2) {
    bVar1 = F_00500b00(*((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60))) GEN_EDX_ARG);
    if (param_2 < (int)(uint)bVar1) {
      bVar1 = F_00a06620(param_2,param_1);
      return bVar1;
    }
  }
  return 1;
}

/* ref: FUN_00bc1570 */
GEN_OWN GEN_FRAME uint F_00bc1570(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00500af0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137129c) + 0x60))) GEN_EDX_ARG,param_1);
  if ((short)uVar1 != -1) {
    return param_2 << 0x10 | uVar1 & 0xffff;
  }
  return 0xffffffff;
}

/* ref: FUN_00bc15a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc15a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc15a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  char cVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined * this_00;
  int iVar8;
  
  if (((*((int *)GEN_TOP(((int)this + 0x40))) != 0) &&
      (bVar4 = F_00a0b720(*((int *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD), bVar4 != 0)) &&
     ((*((byte *)GEN_TOP((param_1 + 0x12))) >> 4 & 1) != 0)) {
    return 0;
  }
  cVar1 = *((char *)GEN_TOP((param_1 + 0x14)));
  uVar5 = F_00500af0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137129c) + 0x60))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x20))));
  if ((short)uVar5 == -1) {
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = uVar5 & 0xffff | (int)cVar1 << 0x10;
  }
  uVar5 = F_00a065a0();
  if ((((char)uVar5 != '\0') && (uVar5 = F_00bbafd0(param_2 GEN_EDX_ARG), uVar5 != 0)) &&
     (*((int *)GEN_TOP((uVar5 + 0x78))) != 0)) {
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x78))) + 0xa0)));
    if ((int)(*(uint *)(gen_frame + 0x0)) < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (*(uint *)(gen_frame + 0x0)) & 0xffff;
    }
    if (((-1 < (int)uVar5) &&
        (bVar4 = F_00500b00(*((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60))) GEN_EDX_ARG), (int)uVar5 < (int)(uint)bVar4))
       && (bVar4 = F_00a06620(uVar5,uVar2), bVar4 == 0)) {
      return 0;
    }
  }
  uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60)));
  if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
    bVar4 = F_00500b00(uVar2 GEN_EDX_ARG);
    if (((*(uint *)(gen_frame + 0x0)) & 0xffff) < (uint)bVar4) {
      uVar5 = F_00500ae0(uVar2 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)) & 0xffff);
      iVar8 = 0;
      do {
        uVar6 = *((uint *)GEN_TOP(((int)this + iVar8 * 8 + 4)));
        if (-1 < (int)uVar6) {
          uVar6 = uVar6 & 0xffff;
          bVar4 = F_00500b00(uVar2 GEN_EDX_ARG);
          if (uVar6 < bVar4) {
            uVar6 = F_00500ae0(uVar2 GEN_EDX_ARG,uVar6);
            pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + iVar8 * 8)));
            if ((((*((uint *)GEN_TOP((uVar6 + 8))) >> 7 & 1) != 0) && ((*((uint *)GEN_TOP((uVar5 + 8))) >> 10 & 1) != 0))
               && (bVar4 = F_00b63c90(pvVar3 GEN_EDX_ARG), bVar4 == 0)) {
              return 0;
            }
            if ((((*((uint *)GEN_TOP((uVar6 + 8))) >> 8 & 1) != 0) && ((*((uint *)GEN_TOP((uVar5 + 8))) >> 9 & 1) != 0))
               && (bVar4 = F_00b63cc0(pvVar3 GEN_EDX_ARG), bVar4 == 0)) {
              return 0;
            }
            if ((((*((uint *)GEN_TOP((uVar6 + 8))) >> 10 & 1) != 0) && ((*((uint *)GEN_TOP((uVar5 + 8))) >> 7 & 1) != 0))
               && ((*((byte *)GEN_TOP((param_1 + 0x12))) >> 6 & 1) == 0)) {
              F_00bc1af0((uint)pvVar3,param_1);
            }
            if ((((*((uint *)GEN_TOP((uVar6 + 8))) >> 9 & 1) != 0) && ((*((uint *)GEN_TOP((uVar5 + 8))) >> 8 & 1) != 0))
               && (-1 < *((char *)GEN_TOP((param_1 + 0x12))))) {
              F_00bc1b60((uint)pvVar3,param_1);
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 8);
    }
  }
  iVar8 = 0;
  puVar7 = this;
  do {
    if (puVar7[1] == (*(uint *)(gen_frame + 0x0))) goto LAB_00bc17e2;
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 2;
  } while (iVar8 < 8);
  puVar7 = ((undefined4 *)GEN_TOP(F_00bc1210(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)))));
  if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00bc17e2: ;
  pvVar3 = ((undefined *)GEN_TOP(*puVar7));
  (*(byte *)(gen_frame + 0xb)) = 0;
  uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60)));
  if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
    bVar4 = F_00500b00(uVar2 GEN_EDX_ARG);
    if (((*(uint *)(gen_frame + 0x0)) & 0xffff) < (uint)bVar4) {
      uVar5 = F_00500ae0(uVar2 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)) & 0xffff);
      cVar1 = *((char *)GEN_TOP((uVar5 + 0xf)));
      if (((-1 < cVar1) && (uVar6 = F_00b63c10(pvVar3 GEN_EDX_ARG), (int)cVar1 <= (int)uVar6)) &&
         (this_00 = ((undefined *)GEN_TOP(F_00b63670(pvVar3 GEN_EDX_ARG))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
        F_00bba140(this_00 GEN_EDX_ARG,0,(float)(float10)0,(int)*((char *)GEN_TOP((param_1 + 0x17))));
        F_00bba0e0(this_00 GEN_EDX_ARG);
      }
      if ((((*((uint *)GEN_TOP((uVar5 + 8))) >> 0xc & 1) != 0) && (*((int *)GEN_TOP(((int)this + 0x40))) != 0)) &&
         (bVar4 = F_00a0b720(*((int *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG), bVar4 != 0)) {
        F_00a0bff0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,this,param_2);
      }
      if ((*((uint *)GEN_TOP((uVar5 + 8))) >> 0xb & 1) != 0) {
        (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) | 1;
      }
      if ((*((uint *)GEN_TOP((uVar5 + 8))) >> 0xd & 1) != 0) {
        (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) | 2;
      }
    }
  }
  uVar5 = F_00b63d30(pvVar3 GEN_EDX_ARG,param_1,param_2,&(*(byte *)(gen_frame + 0xb)));
  return uVar5;
}

/* ref: FUN_00bc18e0 */
GEN_OWN GEN_FRAME uint F_00bc18e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbc18e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_4 + 0x10)));
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((param_4 + 0xc)));
  ((undefined4 *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  uVar5 = param_3;
  do {
    this = ((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (this != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
      if (uVar3 == 1) {
        bVar2 = F_00bba1e0(this GEN_EDX_ARG);
        if ((bVar2 == 0) && ((int)uVar5 < param_2)) {
          *((int * PTR32 *)GEN_TOP((param_1 + uVar5 * 4))) = this;
          uVar5 = uVar5 + 1;
        }
      }
      else if (uVar3 == 0) {
        uVar5 = F_00bc18e0(param_1,param_2,uVar5,(int)this,param_5);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return uVar5;
}

/* ref: FUN_00bc1960 */
GEN_OWN GEN_FRAME uint F_00bc1960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbc1960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_4 + 0x10)));
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((param_4 + 0xc)));
  ((undefined4 *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  uVar5 = param_3;
  do {
    this = ((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (this != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
      if (uVar3 == 1) {
        bVar2 = F_00bba210(this GEN_EDX_ARG);
        if ((bVar2 == 0) && ((int)uVar5 < param_2)) {
          *((int * PTR32 *)GEN_TOP((param_1 + uVar5 * 4))) = this;
          uVar5 = uVar5 + 1;
        }
      }
      else if (uVar3 == 0) {
        uVar5 = F_00bc1960(param_1,param_2,uVar5,(int)this,param_5);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return uVar5;
}

/* ref: FUN_00bc1a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc1a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00bc18e0(param_1,param_2,0,*((undefined4 *)GEN_TOP(((int)this + 4))),param_3);
  return uVar1;
}

/* ref: FUN_00bc1a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc1a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00bc1960(param_1,param_2,0,*((undefined4 *)GEN_TOP(((int)this + 4))),param_3);
  return uVar1;
}

/* ref: FUN_00bc1af0 */
GEN_OWN GEN_FRAME uint F_00bc1af0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00bc18e0(((int *)(gen_frame + 0x0)),8,0,*((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  iVar4 = 0;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(iVar4)]));
      uVar3 = F_00a09fe0((int)(char)piVar1[0xb],(int)*((char *)GEN_TOP(((int)piVar1 + 0x2d))));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(int)uVar3));
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return uVar3;
}

/* ref: FUN_00bc1b60 */
GEN_OWN GEN_FRAME uint F_00bc1b60(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00bc1960(((int *)(gen_frame + 0x0)),8,0,*((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  iVar4 = 0;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(iVar4)]));
      uVar3 = F_00a09fe0((int)(char)piVar1[0xb],(int)*((char *)GEN_TOP(((int)piVar1 + 0x2d))));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(int)uVar3));
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return uVar3;
}

/* ref: FUN_00bc1bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00bc1c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  param_1[3] = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  return (uint)param_1;
}

/* ref: FUN_00bc1d60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc1d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0x88))) != 2) && (*((int *)GEN_TOP((in_ecx + 0x88))) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bc1de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf22 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD,4,&REFG(undefined, 0x13056c0));
  return uVar1;
}

/* ref: FUN_00bc1e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_FWD)));
  if (this_00 != this) {
    uVar1 = F_00bc1e50(this_00 GEN_EDX_ARG,param_1);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  if (param_1 == 0) {
    return (uint)(*((int *)GEN_TOP(((int)this + 0x18))) != 0);
  }
  return (uint)((1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) & *((uint *)GEN_TOP(((int)this + 0x18)))) != 0);
}

/* ref: FUN_00bc1ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00406520()));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,param_1,0x10);
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0x8c))) = uVar2;
  return uVar2;
}

/* ref: FUN_00bc1ef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x8c))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x8c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc1f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD,5,&REFG(undefined, 0x13056c0));
  return uVar1;
}

/* ref: FUN_00bc1f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1f50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((char *)GEN_TOP((in_ecx + 0x80))) != '\0') {
    *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 3;
    return in_EAX;
  }
  if ((float10)*((float *)GEN_TOP((in_ecx + 100))) <= (float10)*((float *)GEN_TOP((in_ecx + 0x58)))) {
    *((float *)GEN_TOP((in_ecx + 0x58))) = *((float *)GEN_TOP((in_ecx + 100)));
    uVar1 = (*((char *)GEN_TOP((in_ecx + 0x81))) == '\0') + 2;
    *((uint *)GEN_TOP((in_ecx + 0x88))) = uVar1;
    return uVar1;
  }
  if ((float10)*((float *)GEN_TOP((in_ecx + 0x60))) <= (float10)*((float *)GEN_TOP((in_ecx + 0x58)))) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 1;
    return in_EAX;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 0;
  return in_EAX;
}

/* ref: FUN_00bc1fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1fd0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbc1fd0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  bool bVar1;
  bool bVar2;
  uint uVar3;
  float10 fVar4;
  
  if ((*((int *)GEN_TOP((param_1 + 0x74))) != 1) && (*((int *)GEN_TOP((param_1 + 0x7c))) != 0)) {
    if (*((int *)GEN_TOP((param_1 + 0x74))) == 0) {
      fVar4 = (float10)(*(float *)&gen_args[0]);
      bVar1 = (!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x5c))))) &&
              !(fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x5c))));
      bVar2 = fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x58)));
    }
    else {
      fVar4 = (float10)(*(float *)&gen_args[0]);
      bVar1 = (!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x5c))))) &&
              !(fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x5c))));
      bVar2 = fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x58)));
    }
    uVar3 = (uint)bVar1;
    if (bVar2) {
      uVar3 = uVar3 + 1;
    }
    return (uVar3 - 1) + *((int *)GEN_TOP((param_1 + 0x7c)));
  }
  fVar4 = (float10)(*(float *)&gen_args[0]);
  if ((*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) == '\0') {
    bVar1 = (float10)*((float *)GEN_TOP((param_1 + 0x5c))) < fVar4;
  }
  else {
    bVar1 = (float10)*((float *)GEN_TOP((param_1 + 0x5c))) <= fVar4;
  }
  if ((bVar1) && (fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x58))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc2080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc2080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  undefined * PTR32 * ppvVar2;
  undefined4 * puVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) & 0xffffffe8;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x16))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1104994));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0x100;
  *((undefined2 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) = REFG(void * PTR32, 0x14c599c);
  iVar1 = (int)REFG(void * PTR32, 0x14c599c) + 1;
  REFG(void * PTR32, 0x14c599c) = ((undefined *)GEN_TOP(iVar1));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  ppvVar2 = &REFG(void * PTR32, 0x14c599c);
  if (iVar1 < 1) {
    ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  REFG(void * PTR32, 0x14c599c) = *ppvVar2;
  iVar1 = 4;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x48)));
  do {
    iVar1 = iVar1 - 1;
    puVar3 = puVar3 - 1;
    *puVar3 = 0;
  } while (iVar1 != 0);
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc2160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
  puVar2 = ((undefined4 *)GEN_TOP(0x0));
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1c);
  while (this_00 = puVar1, this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(this_00[7]));
    F_00bec2c0(this_00 GEN_EDX_FWD);
    puVar1 = puVar2;
    if (*((char *)GEN_TOP(((int)this_00 + 0x16))) == '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_00)))(this_00 GEN_EDX_ARG,1);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x8c);
  *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) & 0xfffffffb;
  *(undefined4 * PTR32 *)(this + 0x1c) = puVar2;
  if (puVar1 != puVar2) {
    puVar1 = ((undefined4 *)GEN_TOP(F_00406810(puVar1)));
    *(undefined4 * PTR32 *)(this + 0x8c) = puVar2;
    *(undefined4 * PTR32 *)(this + 0x90) = puVar2;
  }
  return (uint)puVar1;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc21c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc21c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  bool bVar1;
  uint uVar2;
  int * piVar3;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = true;
  if (*(int *)(this + 0x24) != 0) {
    piVar3 = *(int * PTR32 *)(this + 0x1c);
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      do {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_FWD);
        if ((char)uVar2 == '\0') {
          bVar1 = false;
        }
        piVar3 = ((int *)GEN_TOP(piVar3[7]));
      } while (piVar3 != ((int *)GEN_TOP(0x0)));
      if (!bVar1) {
        return bVar1;
      }
    }
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
    return bVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf2 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc2240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (this[0xe] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] != (undefined1)0x0) {
    piVar1 = *(int * PTR32 *)(this + 0x1c);
    while( true ) {
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        this[0xe] = (undefined1)0x1;
        this[0x12] = (undefined1)0x0;
        if (*(int *)(this + 4) != 0) {
          *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
        }
        return 1;
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') break;
      piVar1 = ((int *)GEN_TOP(piVar1[7]));
    }
    this[0x12] = (undefined1)0x0;
    return 0;
  }
  return 0;
}

/* ref: FUN_00bc22a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc22a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc22a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 1;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 == '\0') break;
    piVar1 = ((int *)GEN_TOP(piVar1[7]));
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  return 0;
}

/* ref: FUN_00bc22e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc22e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc22e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 1;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 == '\0') break;
    piVar1 = ((int *)GEN_TOP(piVar1[7]));
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 0;
  return 0;
}

/* ref: FUN_00bc2320 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc2320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 9))) = 1;
  }
  *((undefined2 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x11))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  }
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) | 2;
  return 0;
}

/* ref: FUN_00bc23a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc23a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc23a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  byte bVar2;
  undefined * pvVar3;
  
  bVar2 = 1;
  if ((param_1 != 0x12) && (param_1 != 0x1a)) {
    for (pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))); pvVar3 != ((undefined *)GEN_TOP(0x0));
        pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0x1c)))) {
      bVar1 = F_00bebca0(pvVar3 GEN_EDX_FWD,param_1);
      if (bVar1 == 0) {
        bVar2 = 0;
      }
    }
    return bVar2;
  }
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) & 0xfffffff7;
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG);
    return 1;
  }
  do {
    bVar1 = F_00bebca0(pvVar3 GEN_EDX_ARG,param_1);
    if (bVar1 == 0) {
      bVar2 = 0;
LAB_00bc2417: ;
      if ((*((uint *)GEN_TOP(((int)this + 0x2c))) >> 3 & 1) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG);
        return 0;
      }
    }
    else if (bVar2 == 0) goto LAB_00bc2417;
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0x1c)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG);
      return bVar2;
    }
  } while( true );
}

/* ref: FUN_00bc2450 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00bc2450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc2450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0xa58, 8, 4);
  byte bVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa54));
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    return 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (param_1 == 0) {
    F_00bc2320(this GEN_EDX_FWD);
  }
  else {
    F_00b5c440(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    bVar1 = F_00bce490(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,this,param_2);
    if (bVar1 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x38))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36));
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40));
      *((undefined4 *)GEN_TOP(((int)this + 0x40))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44));
      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48));
      *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bc2500 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc2500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  bool bVar1;
  byte bVar2;
  undefined * this_00;
  
  bVar1 = true;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 1) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    do {
      if ((*((uint *)GEN_TOP(((int)this_00 + 0x24))) < 2) &&
         (bVar2 = F_00bec620(this_00 GEN_EDX_FWD,1,&REFG(undefined, 0x13056c0)), bVar2 == 0)) {
        bVar1 = false;
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
    } while (this_00 != ((undefined *)GEN_TOP(0x0)));
    if (!bVar1) {
      return bVar1;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 2;
  return bVar1;
}

/* ref: FUN_00bc2550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc2550(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc2550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  undefined * this;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float local_c;
  volatile float local_8;
  
  uVar4 = (uint)*((ushort *)GEN_TOP((param_1[8] + 2)));
  local_8 = (float)uVar4;
  local_c = (float)(int)(*((ushort *)GEN_TOP((param_1[8] + 4))) - uVar4);
  uVar5 = 1;
  if (param_2 != 0) {
    uVar5 = (uint)(*((char *)GEN_TOP((param_2 + 0x23))) == '\0');
    fVar1 = *((float *)GEN_TOP(param_2));
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) ||
       (fVar2 = *((float *)GEN_TOP((param_2 + 4))), GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0))) {
      fVar6 = (float10)fVar1;
      if (fVar6 < (float10)*((float *)GEN_TOP((param_2 + 4)))) {
        local_c = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 4))) - fVar6)));
      }
      goto LAB_00bc25da;
    }
  }
  fVar6 = (float10)uVar4;
LAB_00bc25da: ;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x54))))
                    (param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0),
                     (undefined4)gen_fl2bits((float)fVar6),(undefined4)gen_fl2bits(local_c),uVar5,0,
                     1);
  for (this = ((undefined *)GEN_TOP(param_1[7])); this != ((undefined *)GEN_TOP(0x0)); this = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    bVar3 = F_00bec620(this GEN_EDX_ARG,6,&REFG(undefined, 0x13056c0));
    uVar4 = CONCAT31(extraout_var,bVar3);
  }
  param_1[9] = 3;
  return uVar4;
}

/* ref: FUN_00bc2630 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc2630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  
  for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
    F_00bec620(this_00 GEN_EDX_FWD,7,&REFG(undefined, 0x13056c0));
  }
  return;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf9 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc2660(GEN_P(float param_1, float gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xbc2660u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_1;
  iVar1 = *((int *)GEN_TOP(((int)gen_fl2bits(param_1) + 0x1c)));
  (*(float *)(gen_frame + 0x0)) = 0.0;
  for (; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x1c)))) {
    F_00bebe20(iVar1 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6,&(*(float *)(gen_frame + 0x0)),param_8);
  }
  if ((float10)*param_7 < (float10)(*(float *)(gen_frame + 0x0))) {
    *param_7 = (*(float *)(gen_frame + 0x0));
  }
  return;
}

/* ref: FUN_00bc26d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc26d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc26d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
    F_00bebeb0(this_00 GEN_EDX_FWD,param_1);
  }
  if (*((char *)GEN_TOP(((int)this + 0x10))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 9))) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
    }
    if (*((char *)GEN_TOP(((int)this + 8))) != '\0') {
      if ((*((char *)GEN_TOP(((int)this + 0x12))) != '\0') &&
         (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG), (char)uVar1 != '\0')) {
        *((undefined1 *)GEN_TOP(((int)this + 0x13))) = 1;
      }
      if ((*((char *)GEN_TOP(((int)this + 0x13))) != '\0') &&
         (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG), (char)uVar1 != '\0')) {
        *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 1;
      }
      if ((*((char *)GEN_TOP(((int)this + 0xf))) != '\0') &&
         (((*((char *)GEN_TOP(((int)this + 0x14))) != '\0' || (*((int *)GEN_TOP(((int)this + 0x88))) == 2)) ||
          (*((int *)GEN_TOP(((int)this + 0x88))) == 3)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
      }
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf16 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc2770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc2770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  if (((*(uint *)(this + 0x2c) >> 2 & 1) == 0) && (*(undefined * PTR32 *)(this + 0x1c) != ((undefined *)GEN_TOP(0x0)))) {
    bVar1 = F_00bec460(*(undefined * PTR32 *)(this + 0x1c) GEN_EDX_FWD,param_1);
    return bVar1;
  }
  return (byte)(*(uint *)(this + 0x2c) >> 2);
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf17 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc27a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc27a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  bool bVar1;
  byte bVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  bVar1 = false;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    do {
      bVar2 = F_00bebfb0(this_00 GEN_EDX_FWD,param_1);
      if (bVar2 != 0) {
        bVar1 = true;
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
    } while (this_00 != ((undefined *)GEN_TOP(0x0)));
    if (bVar1) {
      *(undefined4 *)(this + 10) = 0x1010000;
    }
  }
  return;
}

/* ref: FUN_00bc27e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc27e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc27e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 10))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 10))) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,3,0);
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 9))) = 1;
  }
  *((undefined2 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x11))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  }
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) | 2;
  return 0;
}

/* ref: FUN_00bc2850 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc2850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 10))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 10))) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,5,0);
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 9))) = 1;
  }
  *((undefined2 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x11))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  }
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) | 2;
  return 0;
}

