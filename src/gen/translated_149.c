#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c55b31 */
ulonglong F_00c55b31(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc55b31u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 * puVar18;
  
  puVar18 = in_edi;
  if (((uint)in_esi & 0xf) != 0) {
    uVar17 = 0x10 - ((uint)in_esi & 0xf);
    in_ecx = in_ecx - uVar17;
    for (uVar15 = uVar17 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined1 *)puVar18 = *(undefined1 *)in_esi;
      in_esi = (undefined4 *)((int)in_esi + 1);
      puVar18 = (undefined4 *)((int)puVar18 + 1);
    }
    for (uVar17 = uVar17 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar18 = *in_esi;
      in_esi = in_esi + 1;
      puVar18 = puVar18 + 1;
    }
  }
  for (uVar15 = in_ecx >> 7; uVar15 != 0; uVar15 = uVar15 - 1) {
    uVar16 = in_esi[1];
    uVar1 = in_esi[2];
    uVar2 = in_esi[3];
    uVar3 = in_esi[4];
    uVar4 = in_esi[5];
    uVar5 = in_esi[6];
    uVar6 = in_esi[7];
    uVar7 = in_esi[8];
    uVar8 = in_esi[9];
    uVar9 = in_esi[10];
    uVar10 = in_esi[0xb];
    uVar11 = in_esi[0xc];
    uVar12 = in_esi[0xd];
    uVar13 = in_esi[0xe];
    uVar14 = in_esi[0xf];
    *puVar18 = *in_esi;
    puVar18[1] = uVar16;
    puVar18[2] = uVar1;
    puVar18[3] = uVar2;
    puVar18[4] = uVar3;
    puVar18[5] = uVar4;
    puVar18[6] = uVar5;
    puVar18[7] = uVar6;
    puVar18[8] = uVar7;
    puVar18[9] = uVar8;
    puVar18[10] = uVar9;
    puVar18[0xb] = uVar10;
    puVar18[0xc] = uVar11;
    puVar18[0xd] = uVar12;
    puVar18[0xe] = uVar13;
    puVar18[0xf] = uVar14;
    uVar16 = in_esi[0x11];
    uVar1 = in_esi[0x12];
    uVar2 = in_esi[0x13];
    uVar3 = in_esi[0x14];
    uVar4 = in_esi[0x15];
    uVar5 = in_esi[0x16];
    uVar6 = in_esi[0x17];
    uVar7 = in_esi[0x18];
    uVar8 = in_esi[0x19];
    uVar9 = in_esi[0x1a];
    uVar10 = in_esi[0x1b];
    uVar11 = in_esi[0x1c];
    uVar12 = in_esi[0x1d];
    uVar13 = in_esi[0x1e];
    uVar14 = in_esi[0x1f];
    puVar18[0x10] = in_esi[0x10];
    puVar18[0x11] = uVar16;
    puVar18[0x12] = uVar1;
    puVar18[0x13] = uVar2;
    puVar18[0x14] = uVar3;
    puVar18[0x15] = uVar4;
    puVar18[0x16] = uVar5;
    puVar18[0x17] = uVar6;
    puVar18[0x18] = uVar7;
    puVar18[0x19] = uVar8;
    puVar18[0x1a] = uVar9;
    puVar18[0x1b] = uVar10;
    puVar18[0x1c] = uVar11;
    puVar18[0x1d] = uVar12;
    puVar18[0x1e] = uVar13;
    puVar18[0x1f] = uVar14;
    in_esi = in_esi + 0x20;
    puVar18 = puVar18 + 0x20;
  }
  uVar16 = 0;
  if ((in_ecx & 0x7f) != 0) {
    for (uVar15 = (in_ecx & 0x7f) >> 4; uVar15 != 0; uVar15 = uVar15 - 1) {
      uVar16 = in_esi[1];
      uVar1 = in_esi[2];
      uVar2 = in_esi[3];
      *puVar18 = *in_esi;
      puVar18[1] = uVar16;
      puVar18[2] = uVar1;
      puVar18[3] = uVar2;
      in_esi = in_esi + 4;
      puVar18 = puVar18 + 4;
    }
    uVar16 = 0;
    if ((in_ecx & 0xf) != 0) {
      for (uVar15 = (in_ecx & 0xf) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        uVar16 = *in_esi;
        *puVar18 = uVar16;
        in_esi = in_esi + 1;
        puVar18 = puVar18 + 1;
      }
      for (uVar15 = in_ecx & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar18 = *(undefined1 *)in_esi;
        in_esi = (undefined4 *)((int)in_esi + 1);
        puVar18 = (undefined4 *)((int)puVar18 + 1);
      }
    }
  }
  return CONCAT44(uVar16,in_edi);
}

/* ref: FUN_00c55c34 */
uint F_00c55c34(void)
{
  GEN_ENTER(0xc55c34u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x15e42a0) = gen_imp_IsProcessorFeaturePresent(10);
  return 0;
}

/* ref: FUN_00c55c44 */
uint F_00c55c44(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55c44u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * pcVar1;
  
  pcVar1 = F_00c51220(param_1,param_2);
  return (uint)pcVar1;
}

/* ref: __forcdecpt_l */
unsigned int F_00c55c4f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55c4fu, gen_a0, gen_a1, 0u, 0u);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  iVar3 = F_00c4ef4f((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = F_00c48637((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = F_00c4ef4f((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = _Buf + 2;
  }
  bVar2 = *_Buf;
  *_Buf = *((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))));
  do {
    _Buf = _Buf + 1;
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __cropzeros_l */
unsigned int F_00c55cc3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55cc3u, gen_a0, gen_a1, 0u, 0u);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  char cVar3;
  char * pcVar2;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))))) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))))) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __positive */
int F_00c55d45(unsigned int gen_a0)
{
  GEN_ENTER(0xc55d45u, gen_a0, 0u, 0u, 0u);
  double * arg = (double *)(uintptr_t)gen_a0;
  double dVar1;
  
  dVar1 = *arg;
  if (!GEN_ISNAN(dVar1) && 0.0 < dVar1 != (dVar1 == 0.0)) {
    return 1;
  }
  return 0;
}

/* ref: __fassign_l */
unsigned int F_00c55d61(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc55d61u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((*(int *)&gen_args[0]) == 0) {
    F_00c7a984((undefined *)&(*(int *)&gen_args[0]),(*(char * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]));
    *(int *)(*(char * PTR32 *)&gen_args[1]) = (*(int *)&gen_args[0]);
  }
  else {
    F_00c7a805(&(*(undefined4 *)(gen_frame + 0x4)),(*(char * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]));
    *(float *)(*(char * PTR32 *)&gen_args[1]) = (*(float *)((char *)&((*(undefined4 *)(gen_frame + 0x4)))));
    *((undefined4 *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 4))) = (*(undefined4 *)(gen_frame + 0x8));
  }
  return 0;
}

/* ref: __fassign */
unsigned int F_00c55da3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc55da3u, gen_a0, gen_a1, gen_a2, 0u);
  int flag = (int)gen_a0;
  char * argument = (char *)(uintptr_t)gen_a1;
  char * number = (char *)(uintptr_t)gen_a2;
  F_00c55d61(flag,argument,number,(undefined *)0x0);
  return 0;
}

/* ref: __shift */
uint F_00c55dbd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55dbdu, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  gen_size32 sVar1;
  
  if (in_edi != 0) {
    sVar1 = F_00c552f0(in_eax);
    in_eax = (char *)F_00c46e20(in_eax + in_edi,in_eax,sVar1 + 1);
  }
  return (uint)in_eax;
}

/* ref: __forcdecpt */
unsigned int F_00c55ddc(unsigned int gen_a0)
{
  GEN_ENTER(0xc55ddcu, gen_a0, 0u, 0u, 0u);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  F_00c55c4f(_Buf,(undefined *)0x0);
  return 0;
}

/* ref: __cropzeros */
unsigned int F_00c55def(unsigned int gen_a0)
{
  GEN_ENTER(0xc55defu, gen_a0, 0u, 0u, 0u);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  F_00c55cc3(_Buf,(undefined *)0x0);
  return 0;
}

/* ref: FUN_00c55e02 */
uint F_00c55e02(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc55e02u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * in_eax = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int eVar2;
  int iVar3;
  int iVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  uint uVar7;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),param_7);
  if ((in_eax == (undefined1 *)0x0) || (param_2 == 0)) {
    puVar1 = (uint *)F_00c51f85();
    uVar7 = 0x16;
  }
  else {
    iVar3 = param_3;
    if (param_3 < 1) {
      iVar3 = 0;
    }
    if (iVar3 + 9U < param_2) {
      if ((char)param_6 != '\0') {
        F_00c55dbd(in_eax + (*param_5 == 0x2d),(uint)(0 < param_3));
      }
      puVar6 = in_eax;
      if (*param_5 == 0x2d) {
        *in_eax = 0x2d;
        puVar6 = in_eax + 1;
      }
      if (0 < param_3) {
        *puVar6 = puVar6[1];
        puVar6 = puVar6 + 1;
        *puVar6 = *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))));
      }
      puVar6 = puVar6 + (uint)((char)param_6 == '\0') + param_3;
      if (param_2 == 0xffffffff) {
        puVar5 = (undefined1 *)0xffffffff;
      }
      else {
        puVar5 = in_eax + (param_2 - (int)puVar6);
      }
      eVar2 = F_00c49908(puVar6,puVar5,"e+000");
      if (eVar2 == 0) {
        if (param_4 != 0) {
          *puVar6 = 0x45;
        }
        if (*(char *)param_5[3] != '0') {
          iVar3 = param_5[1] + -1;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
            puVar6[1] = 0x2d;
          }
          if (99 < iVar3) {
            iVar4 = iVar3 / 100;
            iVar3 = iVar3 % 100;
            puVar6[2] = puVar6[2] + (char)iVar4;
          }
          if (9 < iVar3) {
            iVar4 = iVar3 / 10;
            iVar3 = iVar3 % 10;
            puVar6[3] = puVar6[3] + (char)iVar4;
          }
          puVar6[4] = puVar6[4] + (char)iVar3;
        }
        if ((((byte)REFG(undefined4, 0x15d763c) & 1) != 0) && (puVar6[2] == '0')) {
          F_00c46e20(puVar6 + 2,puVar6 + 3,3);
        }
        if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
        }
        return 0;
      }
                    
      F_00c4c299(param_5,0,0,0,0,0);
    }
    puVar1 = (uint *)F_00c51f85();
    uVar7 = 0x22;
  }
  *puVar1 = uVar7;
  F_00c4c305();
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar7;
}

/* ref: __cftoe_l */
uint F_00c55f63(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc55f63u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  gen_size32 _SizeInBytes;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = 0x16;
  F_00c7abe1(*param_1,param_1[1],((undefined *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)),0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (uint)((*(int *)((char *)((undefined *)(gen_frame + 0x0)))) == 0x2d)) - (uint)(0 < param_4);
    }
    uVar2 = F_00c7aa7b(param_2 + (uint)(0 < param_4) + (uint)((*(int *)((char *)((undefined *)(gen_frame + 0x0)))) == 0x2d),_SizeInBytes,
                      param_4 + 1,((undefined *)(gen_frame + 0x0)));
    if (uVar2 == 0) {
      uVar2 = F_00c55e02(param_2,param_3,param_4,param_5,((undefined *)(gen_frame + 0x0)),0,param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: __cftoe */
int F_00c5602a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5602au, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c55f63(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}

/* ref: __cftoa_l */
uint F_00c5604a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc5604au, gen_a0, gen_a1, gen_a2, gen_a3);
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  gen_size32 param_4 = (gen_size32)gen_a3;
  int param_5 = (int)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  uint * puVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  short sVar10;
  char * pcVar11;
  char * pcVar12;
  bool bVar13;
  uint uVar14;
  
  (*(uint *)(gen_frame + 0x18)) = 0x3ff;
  (*(int *)(gen_frame + 0x28)) = 0x30;
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar5 = (uint *)F_00c51f85();
    uVar14 = 0x16;
LAB_00c56085: ;
    *puVar5 = uVar14;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return uVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    puVar5 = (uint *)F_00c51f85();
    uVar14 = 0x22;
    goto LAB_00c56085;
  }
  (*(uint *)(gen_frame + 0x20)) = (uint)*param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      iVar6 = -1;
    }
    else {
      iVar6 = param_3 - 2;
    }
    uVar14 = F_00c5602a(param_1,param_2 + 2,iVar6,param_4,0);
    if (uVar14 != 0) {
      *param_2 = 0;
      if (((byte *)(gen_frame + 0x8))[0xc] == 0) {
        return uVar14;
      }
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
      return uVar14;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar7 = F_00c51220(param_2 + 2,0x65);
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar7[3] = '\0';
    }
    goto LAB_00c563ac;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar10 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if ((*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if ((uint)*param_1 == 0 && (*param_1 & 0xfffff00000000) == 0) {
      (*(uint *)(gen_frame + 0x18)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x18)) = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar12 = param_2 + 3;
  pcVar7 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar12 = '\0';
  }
  else {
    *pcVar12 = *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xbc)))));
  }
  (*(uint *)(gen_frame + 0x24)) = *(uint *)((int)param_1 + 4) & 0xfffff;
  if (((*(uint *)(gen_frame + 0x24)) != 0) || ((uint)*param_1 != 0)) {
    (*(uint *)(gen_frame + 0x20)) = 0;
    (*(uint *)(gen_frame + 0x24)) = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar4 = (ushort)((ulonglong)(byte)(*(int *)(gen_frame + 0x28)) < 0x40) *
              (short)(CONCAT44(*(uint *)((int)param_1 + 4) & (*(uint *)(gen_frame + 0x24)),(uint)*param_1 & (*(uint *)(gen_frame + 0x20))) >>
                     (ulonglong)(byte)(*(int *)(gen_frame + 0x28))) + 0x30;
      if (0x39 < uVar4) {
        uVar4 = uVar4 + sVar10;
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + -4;
      iVar6 = (*(int *)(gen_frame + 0x28));
      *pcVar7 = (char)uVar4;
      pcVar7 = pcVar7 + 1;
      param_4 = param_4 - 1;
      bVar13 = -1 < (short)(*(int *)(gen_frame + 0x28));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) >> 4 | (*(uint *)(gen_frame + 0x24)) << 0x1c;
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) >> 4;
      (*(int *)(gen_frame + 0x28)) = iVar6;
    } while (bVar13);
    if ((-1 < (short)(*(int *)(gen_frame + 0x28))) &&
       (pcVar11 = pcVar7,
       8 < (ushort)((ushort)((ulonglong)(byte)(*(int *)(gen_frame + 0x28)) < 0x40) *
                   (short)(CONCAT44(*(uint *)((int)param_1 + 4) & (*(uint *)(gen_frame + 0x24)),(uint)*param_1 & (*(uint *)(gen_frame + 0x20)))
                          >> (ulonglong)(byte)(*(int *)(gen_frame + 0x28)))))) {
      while( true ) {
        pcVar8 = pcVar11 + -1;
        if ((*pcVar8 != 'f') && (*pcVar8 != 'F')) break;
        *pcVar8 = '0';
        pcVar11 = pcVar8;
      }
      if (pcVar8 == pcVar12) {
        pcVar11[-2] = pcVar11[-2] + '\x01';
      }
      else if (*pcVar8 == '9') {
        *pcVar8 = (char)sVar10 + ':';
      }
      else {
        *pcVar8 = *pcVar8 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    F_00c48350(pcVar7,0x30,param_4);
    pcVar7 = pcVar7 + param_4;
  }
  if (*pcVar12 == '\0') {
    pcVar7 = pcVar12;
  }
  *pcVar7 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar14 = (uint)(*param_1 >> 0x34 & 0x7ff);
  uVar9 = uVar14 - (*(uint *)(gen_frame + 0x18));
  iVar6 = -(uint)(uVar14 < (*(uint *)(gen_frame + 0x18)));
  if (iVar6 < 0) {
    pcVar7[1] = '-';
    bVar13 = uVar9 != 0;
    uVar9 = -uVar9;
    iVar6 = -(iVar6 + (uint)bVar13);
  }
  else {
    pcVar7[1] = '+';
  }
  pcVar11 = pcVar7 + 2;
  *pcVar11 = '0';
  pcVar12 = pcVar11;
  lVar2 = (longlong)CONCAT44(iVar6,uVar9);
  if ((iVar6 < 0) || ((iVar6 < 1 && (lVar2 = (longlong)CONCAT44(iVar6,uVar9), uVar9 < 1000)))) {
LAB_00c5635b: ;
    if (99 < lVar2) goto LAB_00c56366;
  }
  else {
    lVar1 = (longlong)CONCAT44(iVar6,uVar9) / 1000;
    lVar2 = (longlong)CONCAT44(iVar6,uVar9) % 1000;
    *pcVar11 = (char)lVar1 + '0';
    pcVar12 = pcVar7 + 3;
    (*(undefined4 *)(gen_frame + 0x1c)) = (int)((ulonglong)lVar1 >> 0x20);
    if (pcVar12 == pcVar11) goto LAB_00c5635b;
LAB_00c56366: ;
    lVar1 = lVar2 / 100;
    lVar2 = lVar2 % 100;
    *pcVar12 = (char)lVar1 + '0';
    (*(undefined4 *)(gen_frame + 0x1c)) = (int)((ulonglong)lVar1 >> 0x20);
    pcVar12 = pcVar12 + 1;
  }
  cVar3 = (char)lVar2;
  if ((pcVar12 != pcVar11) || (9 < lVar2)) {
    cVar3 = (char)(lVar2 % 10);
    *pcVar12 = (char)(lVar2 / 10) + '0';
    (*(undefined4 *)(gen_frame + 0x1c)) = (int)((ulonglong)(lVar2 / 10) >> 0x20);
    pcVar12 = pcVar12 + 1;
    (*(undefined4 *)(gen_frame + 0x1c)) = (int)((ulonglong)(lVar2 % 10) >> 0x20);
  }
  *pcVar12 = cVar3 + '0';
  pcVar12[1] = '\0';
LAB_00c563ac: ;
  if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __cftoa */
int F_00c563c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc563c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  double * _Value = (double *)(uintptr_t)gen_a0;
  char * _Buf = (char *)(uintptr_t)gen_a1;
  gen_size32 _SizeInBytes = (gen_size32)gen_a2;
  int _Dec = (int)gen_a3;
  int _Caps = (int)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c5604a(_Value,_Buf,_SizeInBytes,_Dec,_Caps,0);
  return uVar1;
}

/* ref: __cftof2_l */
uint F_00c563e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc563e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  gen_size32 param_4 = (gen_size32)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * _Dst;
  int iVar1;
  int iVar2;
  int * piVar3;
  gen_size32 sVar4;
  uint uVar5;
  char * _Str;
  
  iVar1 = in_eax[1];
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),param_6);
  if ((in_ecx == (char *)0x0) || (param_3 == 0)) {
    piVar3 = F_00c51f85();
    uVar5 = 0x16;
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else {
    if (((char)param_5 != '\0') && (iVar1 - 1U == param_4)) {
      iVar2 = *in_eax;
      (in_ecx + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[0] = '0';
      (in_ecx + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
    }
    if (*in_eax == 0x2d) {
      *in_ecx = '-';
      in_ecx = in_ecx + 1;
    }
    if (in_eax[1] < 1) {
      _Str = in_ecx + 1;
      sVar4 = F_00c552f0(in_ecx);
      F_00c46e20(_Str,in_ecx,sVar4 + 1);
      *in_ecx = '0';
    }
    else {
      _Str = in_ecx + in_eax[1];
    }
    if (0 < (int)param_4) {
      _Dst = _Str + 1;
      sVar4 = F_00c552f0(_Str);
      F_00c46e20(_Dst,_Str,sVar4 + 1);
      *_Str = *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xbc)))));
      if (in_eax[1] < 0) {
        sVar4 = -in_eax[1];
        if (((char)param_5 != '\0') || ((int)sVar4 <= (int)param_4)) {
          param_4 = sVar4;
        }
        F_00c55dbd(_Dst,param_4);
        F_00c48350(_Dst,0x30,param_4);
      }
    }
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    uVar5 = 0;
  }
  return uVar5;
}

/* ref: __cftof_l */
uint F_00c564e3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc564e3u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  gen_size32 _SizeInBytes;
  uint uVar2;
  undefined _Stack_30[16];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = 0x16;
  F_00c7abe1(*param_1,param_1[1],&_Stack_30,((undefined1 *)(gen_frame + 0x0)),0x16);
  if (param_2 == (undefined1 *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else if (param_3 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    _SizeInBytes = 0xffffffff;
    if (param_3 != -1) {
      _SizeInBytes = param_3 - (uint)((*(int *)((char *)&(_Stack_30))) == 0x2d);
    }
    uVar2 = F_00c7aa7b(param_2 + ((*(int *)((char *)&(_Stack_30))) == 0x2d),_SizeInBytes,(*(int *)(((char *)&(_Stack_30) + 4))) + param_4,
                      &_Stack_30);
    if (uVar2 == 0) {
      uVar2 = F_00c563e0(&_Stack_30,param_2,param_3,param_4,0,param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: __cftof */
int F_00c565a4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc565a4u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c564e3(param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: __cftog_l */
uint F_00c565c1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc565c1u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  gen_size32 _SizeInBytes;
  int iVar5;
  char * pcVar6;
  undefined _Stack_30[16];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = 0x16;
  F_00c7abe1(*param_1,param_1[1],&_Stack_30,((undefined1 *)(gen_frame + 0x0)),0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    iVar5 = (*(int *)(((char *)&(_Stack_30) + 4))) + -1;
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)((*(int *)((char *)&(_Stack_30))) == 0x2d);
    }
    uVar3 = F_00c7aa7b(param_2 + ((*(int *)((char *)&(_Stack_30))) == 0x2d),_SizeInBytes,param_4,&_Stack_30);
    if (uVar3 == 0) {
      iVar4 = (*(int *)(((char *)&(_Stack_30) + 4))) + -1;
      if ((iVar4 < -4) || (param_4 <= iVar4)) {
        uVar3 = F_00c55e02(param_2,param_3,param_4,param_5,&_Stack_30,1,param_6);
      }
      else {
        pcVar1 = param_2 + ((*(int *)((char *)&(_Stack_30))) == 0x2d);
        if (iVar5 < iVar4) {
          do {
            pcVar6 = pcVar1;
            pcVar1 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          pcVar6[-1] = '\0';
        }
        uVar3 = F_00c563e0(&_Stack_30,param_2,param_3,param_4,1,param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: __cftog */
uint F_00c566ae(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc566aeu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c565c1(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}

/* ref: __cfltcvt_l */
int F_00c566ce(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc566ceu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  if ((param_4 == 0x65) || (param_4 == 0x45)) {
    uVar1 = F_00c55f63(param_1,param_2,param_3,param_5,param_6,param_7);
  }
  else {
    if (param_4 == 0x66) {
      uVar1 = F_00c564e3(param_1,param_2,param_3,param_5,param_7);
      return uVar1;
    }
    if ((param_4 == 0x61) || (param_4 == 0x41)) {
      uVar1 = F_00c5604a(param_1,param_2,param_3,param_5,param_6,param_7);
    }
    else {
      uVar1 = F_00c565c1(param_1,param_2,param_3,param_5,param_6,param_7);
    }
  }
  return uVar1;
}

/* ref: __cfltcvt */
int F_00c56756(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc56756u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int eVar1;
  
  eVar1 = F_00c566ce(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return eVar1;
}

/* ref: __initp_misc_cfltcvt_tab */
unsigned int F_00c56779(void)
{
  GEN_ENTER(0xc56779u, 0u, 0u, 0u, 0u);
  PVOID pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    pvVar1 = gen_imp_EncodePointer(*((PVOID *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x134b120) + uVar2))));
    *((PVOID *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x134b120) + uVar2))) = pvVar1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x28);
  return 0;
}

/* ref: __setdefaultprecision */
uint F_00c5679c(void)
{
  GEN_ENTER(0xc5679cu, 0u, 0u, 0u, 0u);
  int eVar1;
  undefined4 unaff_EDI = 0;
  
  eVar1 = F_00c7ad58((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    
    F_00c4c299(unaff_EDI,0,0,0,0,0);
  }
  return 0;
}

/* ref: __flsbuf */
int F_00c567c4(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc567c4u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char * _Buf;
  char * pcVar1;
  undefined * _File_00;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * puVar5;
  longlong lVar6;
  uint local_8;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)F_00c5d07b((*(undefined * PTR32 *)&gen_args[1]));
  uVar3 = (*(int *)(((char *)(_File_00) + 12)));
  if ((uVar3 & 0x82) == 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 9;
LAB_00c567ea: ;
    (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) | 0x20;
    return -1;
  }
  if ((uVar3 & 0x40) != 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x22;
    goto LAB_00c567ea;
  }
  if ((uVar3 & 1) != 0) {
    (*(int *)(((char *)(_File_00) + 4))) = 0;
    if ((uVar3 & 0x10) == 0) {
      (*(int *)(((char *)(_File_00) + 12))) = uVar3 | 0x20;
      return -1;
    }
    (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)(((char *)(_File_00) + 8)));
    (*(int *)(((char *)(_File_00) + 12))) = uVar3 & 0xfffffffe;
  }
  uVar3 = (*(int *)(((char *)(_File_00) + 12)));
  (*(int *)(((char *)(_File_00) + 12))) = uVar3 & 0xffffffef | 2;
  (*(int *)(((char *)(_File_00) + 4))) = 0;
  local_8 = 0;
  if (((uVar3 & 0x10c) == 0) &&
     (((uVar3 = F_00c50860(), _File_00 != (undefined *)(uVar3 + 0x20) &&
       (uVar3 = F_00c50860(), _File_00 != (undefined *)(uVar3 + 0x40))) ||
      (iVar4 = F_00c7adb7((int)(*(undefined * PTR32 *)&gen_args[1])), iVar4 == 0)))) {
    F_00c6e658(_File_00);
  }
  if (((*(int *)(((char *)(_File_00) + 12))) & 0x108U) == 0) {
    uVar3 = 1;
    local_8 = F_00c5de4b((int)(*(undefined * PTR32 *)&gen_args[1]),&(*(int *)&gen_args[0]),1);
  }
  else {
    _Buf = (*(char * PTR32 *)(((char *)(_File_00) + 8)));
    pcVar1 = (*(char * PTR32 *)((char *)(_File_00)));
    (*(char * PTR32 *)((char *)(_File_00))) = _Buf + 1;
    uVar3 = (int)pcVar1 - (int)_Buf;
    (*(int *)(((char *)(_File_00) + 4))) = (*(int *)(((char *)(_File_00) + 24))) + -1;
    if ((int)uVar3 < 1) {
      if (((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0xffffffff) || ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0xfffffffe)) {
        puVar5 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar5 = ((undefined *)GEN_TOP((((uint)(*(undefined * PTR32 *)&gen_args[1]) & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(*(undefined * PTR32 *)&gen_args[1]) >> 5])));
      }
      if (((puVar5[4] & 0x20) != 0) && (lVar6 = F_00c6de26((*(undefined * PTR32 *)&gen_args[1]),0,0,2), lVar6 == -1))
      goto LAB_00c56912;
    }
    else {
      local_8 = F_00c5de4b((int)(*(undefined * PTR32 *)&gen_args[1]),_Buf,uVar3);
    }
    *(*(char * PTR32 *)(((char *)(_File_00) + 8))) = (char)(*(int *)&gen_args[0]);
  }
  if (local_8 == uVar3) {
    return (*(int *)&gen_args[0]) & 0xff;
  }
LAB_00c56912: ;
  (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) | 0x20;
  return -1;
}

/* ref: write_char_00c56928 */
uint F_00c56928(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc56928u, gen_a0, gen_a1, gen_a2, 0u);
  byte in_al = (byte)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined3 in_register_00000001;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00000001,in_al);
  if ((((*(int *)(((char *)(in_ecx) + 12))) & 0x40) == 0) || ((*(char * PTR32 *)(((char *)(in_ecx) + 8))) != (char *)0x0)) {
    piVar1 = &(*(int *)(((char *)(in_ecx) + 4)));
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = F_00c567c4((int)(char)in_al,in_ecx);
    }
    else {
      *(*(char * PTR32 *)((char *)(in_ecx))) = in_al;
      (*(char * PTR32 *)((char *)(in_ecx))) = (*(char * PTR32 *)((char *)(in_ecx))) + 1;
      uVar2 = (uint)in_al;
    }
    if (uVar2 == 0xffffffff) {
      *in_esi = -1;
      return 0xffffffff;
    }
  }
  *in_esi = *in_esi + 1;
  return uVar2;
}

/* ref: write_multi_char_00c5695b */
uint F_00c5695b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5695bu, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 + -1;
    piVar1 = (int *)F_00c56928((undefined1)param_2,param_4,in_eax);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c56981 */
uint F_00c56981(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc56981u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ebx = (int)gen_a1;
  uint * in_edi = (uint *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*(byte *)(in_ebx + 0xc) & 0x40) == 0) || (*(int *)(in_ebx + 8) != 0)) {
    *in_edi = 0;
    if (0 < (int)param_5) {
      do {
        param_5 = param_5 - 1;
        uVar1 = F_00c56928(*param_4,in_ebx,in_eax);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c56928(0x3f,in_ebx,in_eax);
        }
      } while (0 < (int)param_5);
      if (*in_edi != 0) {
        return uVar1;
      }
    }
    *in_edi = uVar2;
  }
  else {
    *in_eax = *in_eax + param_5;
    uVar2 = param_5;
  }
  return uVar2;
}

/* ref: FUN_00c569e3 */
uint F_00c569e3(unsigned int gen_a0)
{
  GEN_ENTER(0xc569e3u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *param_1 = *param_1 + 4;
  return *(uint *)(*param_1 + -4);
}

/* ref: FUN_00c569f5 */
uint F_00c569f5(unsigned int gen_a0)
{
  GEN_ENTER(0xc569f5u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *param_1 = *param_1 + 8;
  return *(uint *)(*param_1 + -8);
}

/* ref: FUN_00c56a0a */
ushort F_00c56a0a(unsigned int gen_a0)
{
  GEN_ENTER(0xc56a0au, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *param_1 = *param_1 + 4;
  return *(ushort *)(*param_1 + -4);
}

/* ref: FUN_00c56a1d */
uint F_00c56a1d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc56a1du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  wchar_t _WCh;
  short * psVar1;
  uint * puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined * in_ecx;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  code * pcVar9;
  gen_size32 sVar10;
  int eVar11;
  char cVar12;
  undefined * puVar13;
  int iVar14;
  byte * pbVar15;
  wchar_t * pwVar16;
  bool bVar17;
  undefined4 * puVar18;
  wchar_t * pwVar19;
  undefined4 uVar20;
  undefined2 uVar21;
  undefined2 uVar23;
  undefined * p_Var22;
  
  (*(uint *)(gen_frame + 0x288)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28c);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(uint *)(gen_frame + 0x7c)) = 0;
  (*(int *)(gen_frame + 0x54)) = 0;
  (*(int *)(gen_frame + 0x74)) = 0;
  (*(int *)(gen_frame + 0x58)) = 0;
  (*(int *)(gen_frame + 0x48)) = 0;
  (*(int *)(gen_frame + 0x50)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x30)),param_3);
  (*(int * PTR32 *)(gen_frame + 0x20)) = F_00c51f85();
  if (param_1 != (undefined *)0x0) {
    if (((*(int *)(((char *)(param_1) + 12))) & 0x40) == 0) {
      uVar7 = F_00c5d07b(param_1);
      if ((uVar7 == 0xffffffff) || (uVar7 == 0xfffffffe)) {
        puVar13 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar13 = ((undefined *)GEN_TOP(((uVar7 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar7 >> 5])));
      }
      if ((puVar13[0x24] & 0x7f) == 0) {
        if ((uVar7 == 0xffffffff) || (uVar7 == 0xfffffffe)) {
          puVar13 = &REFG(undefined, 0x134b280);
        }
        else {
          puVar13 = ((undefined *)GEN_TOP(((uVar7 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar7 >> 5])));
        }
        if ((puVar13[0x24] & 0x80) == 0) goto LAB_00c56b22;
      }
    }
    else {
LAB_00c56b22: ;
      if (param_2 != (byte *)0x0) {
        (*(byte *)(gen_frame + 0x7b)) = *param_2;
        (*(uint *)(gen_frame + 0x68)) = 0;
        (*(gen_size32 *)(gen_frame + 0x64)) = 0;
        (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = (wchar_t *)0x0;
        iVar14 = 0;
        uVar7 = (*(uint *)(gen_frame + 0x68));
        pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
        while ((*(uint *)(gen_frame + 0x68)) = uVar7, (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar16, (*(byte *)(gen_frame + 0x7b)) != 0) {
          pbVar15 = param_2 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar15;
          if ((int)uVar7 < 0) break;
          if ((byte)((*(byte *)(gen_frame + 0x7b)) - 0x20) < 0x59) {
            uVar7 = (int)"e+000"[(char)(*(byte *)(gen_frame + 0x7b))] & 0xf;
          }
          else {
            uVar7 = 0;
          }
          (*(int *)(gen_frame + 0x18)) = (int)(char)(&REFG(undefined, 0x1119e88))[uVar7 * 8 + iVar14] >> 4;
          switch((unsigned int)(uintptr_t)((int)(char)(&REFG(undefined, 0x1119e88))[uVar7 * 8 + iVar14] >> 4)) {
          case 0: ;
switchD_00c56b97_caseD_0: ;
            (*(int *)(gen_frame + 0x50)) = 0;
            iVar14 = F_00c6dfe8((uint)(*(byte *)(gen_frame + 0x7b)),&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x30)))));
            bVar5 = (*(byte *)(gen_frame + 0x7b));
            if (iVar14 != 0) {
              F_00c56928((*(byte *)(gen_frame + 0x7b)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
              bVar5 = *pbVar15;
              (*(byte * PTR32 *)(gen_frame + 0x4c)) = param_2 + 2;
              if (bVar5 == 0) goto LAB_00c56a93;
            }
            F_00c56928(bVar5,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
            break;
          case 1: ;
            (*(int *)(gen_frame + 0x74)) = -1;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(int *)(gen_frame + 0x48)) = 0;
            (*(int *)(gen_frame + 0x54)) = 0;
            (*(int *)(gen_frame + 0x58)) = 0;
            (*(uint *)(gen_frame + 0x7c)) = 0;
            (*(int *)(gen_frame + 0x50)) = 0;
            break;
          case 2: ;
            if ((*(byte *)(gen_frame + 0x7b)) == 0x20) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 2;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x23) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x80;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x2b) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 1;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x2d) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 4;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x30) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 8;
            }
            break;
          case 3: ;
            if ((*(byte *)(gen_frame + 0x7b)) == 0x2a) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
              (*(int *)(gen_frame + 0x54)) = *(int *)param_4;
              if ((*(int *)(gen_frame + 0x54)) < 0) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 4;
                (*(int *)(gen_frame + 0x54)) = -(*(int *)(gen_frame + 0x54));
              }
            }
            else {
              (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) * 10 + -0x30 + (int)(char)(*(byte *)(gen_frame + 0x7b));
            }
            break;
          case 4: ;
            (*(int *)(gen_frame + 0x74)) = 0;
            break;
          case 5: ;
            if ((*(byte *)(gen_frame + 0x7b)) == 0x2a) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
              (*(int *)(gen_frame + 0x74)) = *(int *)param_4;
              if (*(int *)param_4 < 0) {
                (*(int *)(gen_frame + 0x74)) = -1;
              }
            }
            else {
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) * 10 + -0x30 + (int)(char)(*(byte *)(gen_frame + 0x7b));
            }
            break;
          case 6: ;
            if ((*(byte *)(gen_frame + 0x7b)) == 0x49) {
              bVar5 = *pbVar15;
              if ((bVar5 == 0x36) && (param_2[2] == 0x34)) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x8000;
                (*(byte * PTR32 *)(gen_frame + 0x4c)) = param_2 + 3;
              }
              else if ((bVar5 == 0x33) && (param_2[2] == 0x32)) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) & 0xffff7fff;
                (*(byte * PTR32 *)(gen_frame + 0x4c)) = param_2 + 3;
              }
              else if (((((bVar5 != 100) && (bVar5 != 0x69)) && (bVar5 != 0x6f)) &&
                       ((bVar5 != 0x75 && (bVar5 != 0x78)))) && (bVar5 != 0x58)) {
                (*(int *)(gen_frame + 0x18)) = 0;
                goto switchD_00c56b97_caseD_0;
              }
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x68) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x20;
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x6c) {
              if (*pbVar15 == 0x6c) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x1000;
                (*(byte * PTR32 *)(gen_frame + 0x4c)) = param_2 + 2;
              }
              else {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x10;
              }
            }
            else if ((*(byte *)(gen_frame + 0x7b)) == 0x77) {
              (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
            }
            break;
          case 7: ;
            if ((char)(*(byte *)(gen_frame + 0x7b)) < 'e') {
              if ((*(byte *)(gen_frame + 0x7b)) == 100) {
LAB_00c57063: ;
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x40;
LAB_00c5706a: ;
                pwVar16 = param_4;
                (*(gen_size32 *)(gen_frame + 0x64)) = 10;
LAB_00c57074: ;
                if ((((*(uint *)(gen_frame + 0x7c)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x7c)) & 0x1000) == 0)) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar16 + 2;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x20) == 0) {
                    uVar7 = *(uint *)pwVar16;
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x40) == 0) {
                      iVar14 = 0;
                    }
                    else {
                      iVar14 = (int)uVar7 >> 0x1f;
                    }
                    goto LAB_00c5729f;
                  }
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x40) == 0) {
                    uVar7 = (uint)(ushort)*pwVar16;
                  }
                  else {
                    uVar7 = (uint)*pwVar16;
                  }
                  iVar14 = (int)uVar7 >> 0x1f;
                }
                else {
                  uVar7 = *(uint *)pwVar16;
                  iVar14 = *(int *)(pwVar16 + 2);
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar16 + 4;
LAB_00c5729f: ;
                }
                if (((((*(uint *)(gen_frame + 0x7c)) & 0x40) != 0) && (iVar14 < 1)) && (iVar14 < 0)) {
                  bVar17 = uVar7 != 0;
                  uVar7 = -uVar7;
                  iVar14 = -(iVar14 + (uint)bVar17);
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x100;
                }
                uVar3 = CONCAT44(iVar14,uVar7);
                if (((*(uint *)(gen_frame + 0x7c)) & 0x9000) == 0) {
                  iVar14 = 0;
                }
                if ((*(int *)(gen_frame + 0x74)) < 0) {
                  (*(int *)(gen_frame + 0x74)) = 1;
                }
                else {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) & 0xfffffff7;
                  if (0x200 < (*(int *)(gen_frame + 0x74))) {
                    (*(int *)(gen_frame + 0x74)) = 0x200;
                  }
                }
                if (uVar7 == 0 && iVar14 == 0) {
                  (*(int *)(gen_frame + 0x58)) = 0;
                }
                pwVar16 = &(*(undefined2 *)(gen_frame + 0x27f));
                while( true ) {
                  iVar8 = (*(int *)(gen_frame + 0x74));
                  (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                  if ((iVar8 < 1) && ((int)uVar3 == 0 && iVar14 == 0)) break;
                  uVar4 = CONCAT44(iVar14,(int)uVar3);
                  uVar3 = uVar4 / (*(gen_size32 *)(gen_frame + 0x64));
                  iVar14 = (int)(uVar3 >> 0x20);
                  uVar7 = (int)(uVar4 % (ulonglong)(*(gen_size32 *)(gen_frame + 0x64))) + 0x30;
                  cVar12 = (char)uVar7;
                  (*(gen_size32 *)(gen_frame + 0x2c)) = 0;
                  if (0x39 < uVar7) {
                    cVar12 = cVar12 + (char)(*(undefined4 *)(gen_frame + 0x40));
                  }
                  *(char *)pwVar16 = cVar12;
                  pwVar16 = (wchar_t *)((int)pwVar16 + -1);
                }
                (*(gen_size32 *)(gen_frame + 0x64)) = (int)&(*(undefined2 *)(gen_frame + 0x27f)) - (int)pwVar16;
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((int)pwVar16 + 1);
                if ((((*(uint *)(gen_frame + 0x7c)) & 0x200) != 0) &&
                   (((*(gen_size32 *)(gen_frame + 0x64)) == 0 || (*(char *)((int)pwVar16 + 1) != '0')))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
                  *(char *)pwVar16 = '0';
                  (*(gen_size32 *)(gen_frame + 0x64)) = (int)&(*(undefined2 *)(gen_frame + 0x27f)) - (int)pwVar16 + 1;
                  goto LAB_00c573d0;
                }
              }
              else {
                if ((char)(*(byte *)(gen_frame + 0x7b)) < 'T') {
                  if ((*(byte *)(gen_frame + 0x7b)) == 0x53) {
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x830) == 0) {
                      (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
                    }
                    goto LAB_00c56e78;
                  }
                  if ((*(byte *)(gen_frame + 0x7b)) != 0x41) {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x43) {
                      pwVar16 = param_4;
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x830) == 0) {
                        (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
                      }
                      goto LAB_00c56ef1;
                    }
                    if (((*(byte *)(gen_frame + 0x7b)) != 0x45) && ((*(byte *)(gen_frame + 0x7b)) != 0x47)) goto LAB_00c573d6;
                  }
                  (*(undefined4 *)(gen_frame + 0x14)) = 1;
                  (*(byte *)(gen_frame + 0x7b)) = (*(byte *)(gen_frame + 0x7b)) + 0x20;
LAB_00c57099: ;
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x40;
                  pwVar16 = (wchar_t *)((undefined1 *)(gen_frame + 0x80));
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
                  (*(gen_size32 *)(gen_frame + 0x2c)) = 0x200;
                  if ((*(int *)(gen_frame + 0x74)) < 0) {
                    (*(int *)(gen_frame + 0x74)) = 6;
                  }
                  else if ((*(int *)(gen_frame + 0x74)) == 0) {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x67) {
                      (*(int *)(gen_frame + 0x74)) = 1;
                    }
                  }
                  else {
                    if (0x200 < (*(int *)(gen_frame + 0x74))) {
                      (*(int *)(gen_frame + 0x74)) = 0x200;
                    }
                    if (0xa3 < (*(int *)(gen_frame + 0x74))) {
                      sVar10 = (*(int *)(gen_frame + 0x74)) + 0x15d;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = F_00c54c2e(sVar10);
                      if ((*(wchar_t * PTR32 *)(gen_frame + 0x44)) == (wchar_t *)0x0) {
                        (*(int *)(gen_frame + 0x74)) = 0xa3;
                      }
                      else {
                        (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (*(wchar_t * PTR32 *)(gen_frame + 0x44));
                        (*(gen_size32 *)(gen_frame + 0x2c)) = sVar10;
                        pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x44));
                      }
                    }
                  }
                  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)param_4;
                  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_4 + 2);
                  p_Var22 = ((undefined *)(gen_frame + 0x30));
                  iVar8 = (int)(char)(*(byte *)(gen_frame + 0x7b));
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 4;
                  puVar18 = &(*(undefined4 *)(gen_frame + 0xc));
                  pwVar19 = pwVar16;
                  sVar10 = (*(gen_size32 *)(gen_frame + 0x2c));
                  iVar14 = (*(int *)(gen_frame + 0x74));
                  uVar20 = (*(undefined4 *)(gen_frame + 0x14));
                  pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
                  (*pcVar9)(puVar18,pwVar19,sVar10,iVar8,iVar14,uVar20,p_Var22);
                  uVar7 = (*(uint *)(gen_frame + 0x7c)) & 0x80;
                  if ((uVar7 != 0) && ((*(int *)(gen_frame + 0x74)) == 0)) {
                    p_Var22 = ((undefined *)(gen_frame + 0x30));
                    pwVar19 = pwVar16;
                    pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                    (*pcVar9)(pwVar19,p_Var22);
                  }
                  if (((*(byte *)(gen_frame + 0x7b)) == 0x67) && (uVar7 == 0)) {
                    p_Var22 = ((undefined *)(gen_frame + 0x30));
                    pwVar19 = pwVar16;
                    pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                    (*pcVar9)(pwVar19,p_Var22);
                  }
                  if ((char)*pwVar16 == '-') {
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x100;
                    pwVar16 = (wchar_t *)((int)pwVar16 + 1);
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
                  }
                  uVar21 = SUB42(pwVar16,0);
                  uVar23 = (undefined2)((uint)((int)(uintptr_t)pwVar16) >> 0x10);
                }
                else {
                  if ((*(byte *)(gen_frame + 0x7b)) == 0x58) goto LAB_00c571f9;
                  if ((*(byte *)(gen_frame + 0x7b)) != 0x5a) {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x61) goto LAB_00c57099;
                    if ((*(byte *)(gen_frame + 0x7b)) != 99) goto LAB_00c573d6;
LAB_00c56ef1: ;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar16 + 2;
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x810) == 0) {
                      ((undefined1 *)(gen_frame + 0x80))[0] = (char)*pwVar16;
                      (*(gen_size32 *)(gen_frame + 0x64)) = 1;
                    }
                    else {
                      eVar11 = F_00c7af62((int *)&(*(gen_size32 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x80)),0x200,*pwVar16);
                      if (eVar11 != 0) {
                        (*(int *)(gen_frame + 0x48)) = 1;
                      }
                    }
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((undefined1 *)(gen_frame + 0x80));
                    goto LAB_00c573d6;
                  }
                  psVar1 = *(short * PTR32 *)param_4;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
                  if ((psVar1 != (short *)0x0) && (*(wchar_t * PTR32 *)(psVar1 + 2) != (wchar_t *)0x0)) {
                    (*(gen_size32 *)(gen_frame + 0x64)) = (gen_size32)*psVar1;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)(psVar1 + 2);
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x800) == 0) {
                      (*(int *)(gen_frame + 0x50)) = 0;
                    }
                    else {
                      (*(gen_size32 *)(gen_frame + 0x64)) = (int)(*(gen_size32 *)(gen_frame + 0x64)) / 2;
                      (*(int *)(gen_frame + 0x50)) = 1;
                    }
                    goto LAB_00c573d0;
                  }
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                  uVar21 = SUB42(REFG(undefined * PTR32, 0x134b148),0);
                  uVar23 = (undefined2)((uint)REFG(undefined * PTR32, 0x134b148) >> 0x10);
                }
                (*(gen_size32 *)(gen_frame + 0x64)) = F_00c552f0(((char *)GEN_TOP(CONCAT22(uVar23,uVar21))));
LAB_00c573d0: ;
              }
LAB_00c573d6: ;
              if ((*(int *)(gen_frame + 0x48)) == 0) {
                if (((*(uint *)(gen_frame + 0x7c)) & 0x40) != 0) {
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x100) == 0) {
                    if (((*(uint *)(gen_frame + 0x7c)) & 1) == 0) {
                      if (((*(uint *)(gen_frame + 0x7c)) & 2) == 0) goto LAB_00c57423;
                      (*(undefined1 *)(gen_frame + 0x60)) = 0x20;
                    }
                    else {
                      (*(undefined1 *)(gen_frame + 0x60)) = 0x2b;
                    }
                  }
                  else {
                    (*(undefined1 *)(gen_frame + 0x60)) = 0x2d;
                  }
                  (*(int *)(gen_frame + 0x58)) = 1;
                }
LAB_00c57423: ;
                sVar10 = ((*(int *)(gen_frame + 0x54)) - (*(gen_size32 *)(gen_frame + 0x64))) - (*(int *)(gen_frame + 0x58));
                (*(gen_size32 *)(gen_frame + 0x2c)) = sVar10;
                if (((*(uint *)(gen_frame + 0x7c)) & 0xc) == 0) {
                  do {
                    if ((int)sVar10 < 1) break;
                    sVar10 = sVar10 - 1;
                    F_00c56928(0x20,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                  } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                }
                in_ecx = (*(undefined * PTR32 *)(gen_frame + 0x5c));
                F_00c56981(&(*(uint *)(gen_frame + 0x68)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x20)),&(*(undefined1 *)(gen_frame + 0x60)),(*(int *)(gen_frame + 0x58)));
                if ((((*(uint *)(gen_frame + 0x7c)) & 8) != 0) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x2c)), ((*(uint *)(gen_frame + 0x7c)) & 4) == 0)) {
                  do {
                    if ((int)sVar10 < 1) break;
                    F_00c56928(0x30,in_ecx,&(*(uint *)(gen_frame + 0x68)));
                    sVar10 = sVar10 - 1;
                  } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                }
                if (((*(int *)(gen_frame + 0x50)) == 0) || ((int)(*(gen_size32 *)(gen_frame + 0x64)) < 1)) {
                  F_00c56981(&(*(uint *)(gen_frame + 0x68)),in_ecx,(*(int * PTR32 *)(gen_frame + 0x20)),(*(wchar_t * PTR32 *)(gen_frame + 0x6c)),(*(gen_size32 *)(gen_frame + 0x64)));
                }
                else {
                  (*(gen_size32 *)(gen_frame + 0x24)) = (*(gen_size32 *)(gen_frame + 0x64));
                  pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                  do {
                    _WCh = *pwVar16;
                    (*(gen_size32 *)(gen_frame + 0x24)) = (*(gen_size32 *)(gen_frame + 0x24)) - 1;
                    pwVar16 = pwVar16 + 1;
                    eVar11 = F_00c7af62(&(*(int *)(gen_frame + 0x1c)),(char *)((int)&(*(undefined2 *)(gen_frame + 0x27f)) + 1),6,_WCh);
                    if ((eVar11 != 0) || ((*(int *)(gen_frame + 0x1c)) == 0)) {
                      (*(uint *)(gen_frame + 0x68)) = 0xffffffff;
                      break;
                    }
                    F_00c56981(&(*(uint *)(gen_frame + 0x68)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x20)),(int)&(*(undefined2 *)(gen_frame + 0x27f)) + 1,(*(int *)(gen_frame + 0x1c)));
                  } while ((*(gen_size32 *)(gen_frame + 0x24)) != 0);
                }
                if ((-1 < (int)(*(uint *)(gen_frame + 0x68))) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x2c)), ((*(uint *)(gen_frame + 0x7c)) & 4) != 0)) {
                  do {
                    if ((int)sVar10 < 1) break;
                    F_00c56928(0x20,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                    sVar10 = sVar10 - 1;
                  } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                }
              }
            }
            else {
              if ('p' < (char)(*(byte *)(gen_frame + 0x7b))) {
                if ((*(byte *)(gen_frame + 0x7b)) == 0x73) {
LAB_00c56e78: ;
                  iVar14 = (*(int *)(gen_frame + 0x74));
                  if ((*(int *)(gen_frame + 0x74)) == -1) {
                    iVar14 = 0x7fffffff;
                  }
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)param_4;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x810) == 0) {
                    pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                    if ((*(wchar_t * PTR32 *)(gen_frame + 0x6c)) == (wchar_t *)0x0) {
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                      pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                    }
                    for (; (iVar14 != 0 && (iVar14 = iVar14 + -1, (char)*pwVar16 != '\0'));
                        pwVar16 = (wchar_t *)((int)pwVar16 + 1)) {
                    }
                    (*(gen_size32 *)(gen_frame + 0x64)) = (int)pwVar16 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                  }
                  else {
                    if ((*(wchar_t * PTR32 *)(gen_frame + 0x6c)) == (wchar_t *)0x0) {
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                    }
                    (*(int *)(gen_frame + 0x50)) = 1;
                    for (pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                        (iVar14 != 0 && (iVar14 = iVar14 + -1, *pwVar16 != L'\0'));
                        pwVar16 = pwVar16 + 1) {
                    }
                    (*(gen_size32 *)(gen_frame + 0x64)) = (int)pwVar16 - (int)((int)(uintptr_t)(*(wchar_t * PTR32 *)(gen_frame + 0x6c))) >> 1;
                  }
                  goto LAB_00c573d0;
                }
                if ((*(byte *)(gen_frame + 0x7b)) == 0x75) goto LAB_00c5706a;
                if ((*(byte *)(gen_frame + 0x7b)) != 0x78) goto LAB_00c573d6;
                (*(undefined4 *)(gen_frame + 0x40)) = 0x27;
LAB_00c5722b: ;
                (*(gen_size32 *)(gen_frame + 0x64)) = 0x10;
                if (((*(uint *)(gen_frame + 0x7c)) & 0x80) != 0) {
                  (*(undefined1 *)(gen_frame + 0x60)) = 0x30;
                  (*(char *)(gen_frame + 0x61)) = (char)(*(undefined4 *)(gen_frame + 0x40)) + 'Q';
                  (*(int *)(gen_frame + 0x58)) = 2;
                }
                goto LAB_00c57074;
              }
              if ((*(byte *)(gen_frame + 0x7b)) == 0x70) {
                (*(int *)(gen_frame + 0x74)) = 8;
LAB_00c571f9: ;
                (*(undefined4 *)(gen_frame + 0x40)) = 7;
                pwVar16 = param_4;
                goto LAB_00c5722b;
              }
              if ((char)(*(byte *)(gen_frame + 0x7b)) < 'e') goto LAB_00c573d6;
              param_4 = pwVar16;
              if ((char)(*(byte *)(gen_frame + 0x7b)) < 'h') goto LAB_00c57099;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x69) goto LAB_00c57063;
              if ((*(byte *)(gen_frame + 0x7b)) != 0x6e) {
                if ((*(byte *)(gen_frame + 0x7b)) != 0x6f) goto LAB_00c573d6;
                (*(gen_size32 *)(gen_frame + 0x64)) = 8;
                if (((*(uint *)(gen_frame + 0x7c)) & 0x80) != 0) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x200;
                }
                goto LAB_00c57074;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = pwVar16 + 2;
              puVar2 = *(uint * PTR32 *)pwVar16;
              uVar7 = F_00c51967();
              if (uVar7 == 0) goto LAB_00c56a93;
              if (((*(uint *)(gen_frame + 0x7c)) & 0x20) == 0) {
                *puVar2 = (*(uint *)(gen_frame + 0x68));
              }
              else {
                *(undefined2 *)puVar2 = (undefined2)(*(uint *)(gen_frame + 0x68));
              }
              (*(int *)(gen_frame + 0x48)) = 1;
            }
            if ((*(wchar_t * PTR32 *)(gen_frame + 0x44)) != (wchar_t *)0x0) {
              F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x44)));
              (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = (wchar_t *)0x0;
            }
          }
          (*(byte *)(gen_frame + 0x7b)) = *(*(byte * PTR32 *)(gen_frame + 0x4c));
          iVar14 = (*(int *)(gen_frame + 0x18));
          param_2 = (*(byte * PTR32 *)(gen_frame + 0x4c));
          param_4 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
          uVar7 = (*(uint *)(gen_frame + 0x68));
          pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
        }
        if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x30)) + 12))) != false) {
          (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) & 0xfffffffd;
        }
        goto LAB_00c575f5;
      }
    }
  }
LAB_00c56a93: ;
  piVar6 = F_00c51f85();
  *piVar6 = 0x16;
  F_00c4c305();
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x30)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x30)) + 8))) + 112))))) & 0xfffffffd;
  }
  uVar7 = 0xffffffff;
LAB_00c575f5: ;
  F_00c47745((*(uint *)(gen_frame + 0x288)) ^ (uint)(uint)(gen_frame + 0x28c));
  return uVar7;
}

/* ref: __vsprintf_l */
int F_00c57625(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc57625u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if ((_Format != (char *)0x0) && (_DstBuf != (char *)0x0)) {
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = _DstBuf;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = _DstBuf;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
    uVar2 = F_00c56a1d(((undefined *)(gen_frame + 0xc)),_Format,param_3,_ArgList);
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    if ((*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = '\0';
    }
    return uVar2;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return -1;
}

/* ref: _vsprintf */
int F_00c576a9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc576a9u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Dest = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Args = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = F_00c57625(_Dest,_Format,(undefined *)0x0,_Args);
  return iVar1;
}

/* ref: FID_conflict___vscprintf_helper_00c576c3 */
uint F_00c576c3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc576c3u, gen_a0, gen_a1, gen_a2, gen_a3);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  puVar4 = ((undefined4 *)(gen_frame + 0x10));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_2 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  ((undefined4 *)(gen_frame + 0x10))[0] = 0x7fffffff;
  ((undefined4 *)(gen_frame + 0x10))[2] = 0x42;
  ((undefined4 *)(gen_frame + 0x10))[1] = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  uVar2 = (*param_1)(&(*(undefined4 *)(gen_frame + 0xc)),param_2,param_3,param_4);
  return uVar2;
}

/* ref: FID_conflict___vscprintf_p_00c5771f */
int F_00c5771f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5771fu, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc56a1d)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c5773b */
int F_00c5773b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5773bu, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc56a1d)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_00c57758 */
int F_00c57758(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc57758u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc5867b)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c57774 */
int F_00c57774(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc57774u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc5867b)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: write_char_00c57791 */
uint F_00c57791(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc57791u, gen_a0, gen_a1, gen_a2, 0u);
  byte in_al = (byte)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined3 in_register_00000001;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00000001,in_al);
  if ((((*(int *)(((char *)(in_ecx) + 12))) & 0x40) == 0) || ((*(char * PTR32 *)(((char *)(in_ecx) + 8))) != (char *)0x0)) {
    piVar1 = &(*(int *)(((char *)(in_ecx) + 4)));
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = F_00c567c4((int)(char)in_al,in_ecx);
    }
    else {
      *(*(char * PTR32 *)((char *)(in_ecx))) = in_al;
      (*(char * PTR32 *)((char *)(in_ecx))) = (*(char * PTR32 *)((char *)(in_ecx))) + 1;
      uVar2 = (uint)in_al;
    }
    if (uVar2 == 0xffffffff) {
      *in_esi = -1;
      return 0xffffffff;
    }
  }
  *in_esi = *in_esi + 1;
  return uVar2;
}

/* ref: write_multi_char_00c577c4 */
uint F_00c577c4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc577c4u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 + -1;
    piVar1 = (int *)F_00c57791((undefined1)param_2,param_4,in_eax);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c577ea */
uint F_00c577ea(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc577eau, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ebx = (int)gen_a1;
  uint * in_edi = (uint *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*(byte *)(in_ebx + 0xc) & 0x40) == 0) || (*(int *)(in_ebx + 8) != 0)) {
    *in_edi = 0;
    if (0 < (int)param_5) {
      do {
        param_5 = param_5 - 1;
        uVar1 = F_00c57791(*param_4,in_ebx,in_eax);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c57791(0x3f,in_ebx,in_eax);
        }
      } while (0 < (int)param_5);
      if (*in_edi != 0) {
        return uVar1;
      }
    }
    *in_edi = uVar2;
  }
  else {
    *in_eax = *in_eax + param_5;
    uVar2 = param_5;
  }
  return uVar2;
}

/* ref: FUN_00c5784c */
uint F_00c5784c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5784cu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  wchar_t _WCh;
  short * psVar1;
  uint * puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined * in_ecx;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  code * pcVar9;
  gen_size32 sVar10;
  int eVar11;
  char cVar12;
  undefined * puVar13;
  int iVar14;
  byte * pbVar15;
  wchar_t * pwVar16;
  bool bVar17;
  undefined4 * puVar18;
  wchar_t * pwVar19;
  undefined4 uVar20;
  undefined2 uVar21;
  undefined2 uVar23;
  undefined * p_Var22;
  
  (*(uint *)(gen_frame + 0x288)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28c);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x7c)) = 0;
  (*(int *)(gen_frame + 0x54)) = 0;
  (*(int *)(gen_frame + 0x74)) = 0;
  (*(int *)(gen_frame + 0x58)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x50)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x38)),param_3);
  (*(int * PTR32 *)(gen_frame + 0x28)) = F_00c51f85();
  if (param_1 != (undefined *)0x0) {
    if (((*(int *)(((char *)(param_1) + 12))) & 0x40) == 0) {
      uVar7 = F_00c5d07b(param_1);
      if ((uVar7 == 0xffffffff) || (uVar7 == 0xfffffffe)) {
        puVar13 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar13 = ((undefined *)GEN_TOP(((uVar7 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar7 >> 5])));
      }
      if ((puVar13[0x24] & 0x7f) == 0) {
        if ((uVar7 == 0xffffffff) || (uVar7 == 0xfffffffe)) {
          puVar13 = &REFG(undefined, 0x134b280);
        }
        else {
          puVar13 = ((undefined *)GEN_TOP(((uVar7 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar7 >> 5])));
        }
        if ((puVar13[0x24] & 0x80) == 0) goto LAB_00c57951;
      }
    }
    else {
LAB_00c57951: ;
      if (param_2 != (byte *)0x0) {
        (*(byte *)(gen_frame + 0x7b)) = *param_2;
        (*(uint *)(gen_frame + 0x68)) = 0;
        (*(gen_size32 *)(gen_frame + 0x64)) = 0;
        (*(uint *)(gen_frame + 0x48)) = 0;
        (*(wchar_t * PTR32 *)(gen_frame + 0x2c)) = (wchar_t *)0x0;
        if ((*(byte *)(gen_frame + 0x7b)) != 0) {
          do {
            pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
            pbVar15 = param_2 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x4c)) = pbVar15;
            if ((int)(*(uint *)(gen_frame + 0x68)) < 0) break;
            if ((byte)((*(byte *)(gen_frame + 0x7b)) - 0x20) < 0x59) {
              uVar7 = (byte)(&REFG(undefined, 0x1119ec8))[(char)(*(byte *)(gen_frame + 0x7b))] & 0xf;
            }
            else {
              uVar7 = 0;
            }
            (*(uint *)(gen_frame + 0x48)) = (uint)((byte)(&REFG(undefined, 0x1119ee8))[(*(uint *)(gen_frame + 0x48)) + uVar7 * 9] >> 4);
            if ((*(uint *)(gen_frame + 0x48)) == 8) goto LAB_00c578c2;
            switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x48)))) {
            case 0: ;
switchD_00c579de_caseD_0: ;
              (*(int *)(gen_frame + 0x50)) = 0;
              iVar14 = F_00c6dfe8((uint)(*(byte *)(gen_frame + 0x7b)),&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x38)))));
              bVar5 = (*(byte *)(gen_frame + 0x7b));
              if (iVar14 != 0) {
                F_00c57791((*(byte *)(gen_frame + 0x7b)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                bVar5 = *pbVar15;
                (*(byte * PTR32 *)(gen_frame + 0x4c)) = param_2 + 2;
                if (bVar5 == 0) goto LAB_00c578c2;
              }
              F_00c57791(bVar5,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
              break;
            case 1: ;
              (*(int *)(gen_frame + 0x74)) = -1;
              (*(undefined4 *)(gen_frame + 0x18)) = 0;
              (*(int *)(gen_frame + 0x30)) = 0;
              (*(int *)(gen_frame + 0x54)) = 0;
              (*(int *)(gen_frame + 0x58)) = 0;
              (*(uint *)(gen_frame + 0x7c)) = 0;
              (*(int *)(gen_frame + 0x50)) = 0;
              break;
            case 2: ;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x20) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 2;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x23) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x80;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x2b) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 1;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x2d) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 4;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x30) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 8;
              }
              break;
            case 3: ;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x2a) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
                (*(int *)(gen_frame + 0x54)) = *(int *)param_4;
                if ((*(int *)(gen_frame + 0x54)) < 0) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 4;
                  (*(int *)(gen_frame + 0x54)) = -(*(int *)(gen_frame + 0x54));
                }
              }
              else {
                (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) * 10 + -0x30 + (int)(char)(*(byte *)(gen_frame + 0x7b));
              }
              break;
            case 4: ;
              (*(int *)(gen_frame + 0x74)) = 0;
              break;
            case 5: ;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x2a) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
                (*(int *)(gen_frame + 0x74)) = *(int *)param_4;
                if (*(int *)param_4 < 0) {
                  (*(int *)(gen_frame + 0x74)) = -1;
                }
              }
              else {
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) * 10 + -0x30 + (int)(char)(*(byte *)(gen_frame + 0x7b));
              }
              break;
            case 6: ;
              if ((*(byte *)(gen_frame + 0x7b)) == 0x49) {
                bVar5 = *pbVar15;
                if ((bVar5 == 0x36) && (param_2[2] == 0x34)) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x8000;
                  (*(byte * PTR32 *)(gen_frame + 0x4c)) = param_2 + 3;
                }
                else if ((bVar5 == 0x33) && (param_2[2] == 0x32)) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) & 0xffff7fff;
                  (*(byte * PTR32 *)(gen_frame + 0x4c)) = param_2 + 3;
                }
                else if (((((bVar5 != 100) && (bVar5 != 0x69)) && (bVar5 != 0x6f)) &&
                         ((bVar5 != 0x75 && (bVar5 != 0x78)))) && (bVar5 != 0x58)) {
                  (*(uint *)(gen_frame + 0x48)) = 0;
                  goto switchD_00c579de_caseD_0;
                }
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x68) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x20;
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x6c) {
                if (*pbVar15 == 0x6c) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x1000;
                  (*(byte * PTR32 *)(gen_frame + 0x4c)) = param_2 + 2;
                }
                else {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x10;
                }
              }
              else if ((*(byte *)(gen_frame + 0x7b)) == 0x77) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
              }
              break;
            case 7: ;
              if ((char)(*(byte *)(gen_frame + 0x7b)) < 'e') {
                if ((*(byte *)(gen_frame + 0x7b)) == 100) {
LAB_00c57eaa: ;
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x40;
LAB_00c57eb1: ;
                  (*(gen_size32 *)(gen_frame + 0x64)) = 10;
LAB_00c57ebb: ;
                  if ((((*(uint *)(gen_frame + 0x7c)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x7c)) & 0x1000) == 0)) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x20) == 0) {
                      uVar7 = *(uint *)param_4;
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x40) == 0) {
                        iVar14 = 0;
                      }
                      else {
                        iVar14 = (int)uVar7 >> 0x1f;
                      }
                      goto LAB_00c580e3;
                    }
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x40) == 0) {
                      uVar7 = (uint)(ushort)*param_4;
                    }
                    else {
                      uVar7 = (uint)*param_4;
                    }
                    iVar14 = (int)uVar7 >> 0x1f;
                  }
                  else {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 4;
                    uVar7 = *(uint *)param_4;
                    iVar14 = *(int *)(param_4 + 2);
LAB_00c580e3: ;
                  }
                  if (((((*(uint *)(gen_frame + 0x7c)) & 0x40) != 0) && (iVar14 < 1)) && (iVar14 < 0)) {
                    bVar17 = uVar7 != 0;
                    uVar7 = -uVar7;
                    iVar14 = -(iVar14 + (uint)bVar17);
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x100;
                  }
                  uVar3 = CONCAT44(iVar14,uVar7);
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x9000) == 0) {
                    iVar14 = 0;
                  }
                  if ((*(int *)(gen_frame + 0x74)) < 0) {
                    (*(int *)(gen_frame + 0x74)) = 1;
                  }
                  else {
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) & 0xfffffff7;
                    if (0x200 < (*(int *)(gen_frame + 0x74))) {
                      (*(int *)(gen_frame + 0x74)) = 0x200;
                    }
                  }
                  if (uVar7 == 0 && iVar14 == 0) {
                    (*(int *)(gen_frame + 0x58)) = 0;
                  }
                  pwVar16 = &(*(undefined2 *)(gen_frame + 0x27f));
                  while( true ) {
                    iVar8 = (*(int *)(gen_frame + 0x74));
                    (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                    if ((iVar8 < 1) && ((int)uVar3 == 0 && iVar14 == 0)) break;
                    uVar4 = CONCAT44(iVar14,(int)uVar3);
                    uVar3 = uVar4 / (*(gen_size32 *)(gen_frame + 0x64));
                    iVar14 = (int)(uVar3 >> 0x20);
                    uVar7 = (int)(uVar4 % (ulonglong)(*(gen_size32 *)(gen_frame + 0x64))) + 0x30;
                    cVar12 = (char)uVar7;
                    (*(gen_size32 *)(gen_frame + 0x24)) = 0;
                    if (0x39 < uVar7) {
                      cVar12 = cVar12 + (char)(*(undefined4 *)(gen_frame + 0x34));
                    }
                    *(char *)pwVar16 = cVar12;
                    pwVar16 = (wchar_t *)((int)pwVar16 + -1);
                  }
                  (*(gen_size32 *)(gen_frame + 0x64)) = (int)&(*(undefined2 *)(gen_frame + 0x27f)) - (int)pwVar16;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((int)pwVar16 + 1);
                  if ((((*(uint *)(gen_frame + 0x7c)) & 0x200) != 0) &&
                     (((*(gen_size32 *)(gen_frame + 0x64)) == 0 || (*(char *)((int)pwVar16 + 1) != '0')))) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
                    *(char *)pwVar16 = '0';
                    (*(gen_size32 *)(gen_frame + 0x64)) = (int)&(*(undefined2 *)(gen_frame + 0x27f)) - (int)pwVar16 + 1;
                    goto LAB_00c58217;
                  }
                }
                else {
                  if ((char)(*(byte *)(gen_frame + 0x7b)) < 'T') {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x53) {
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x830) == 0) {
                        (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
                      }
                      goto LAB_00c57cc2;
                    }
                    if ((*(byte *)(gen_frame + 0x7b)) != 0x41) {
                      if ((*(byte *)(gen_frame + 0x7b)) == 0x43) {
                        if (((*(uint *)(gen_frame + 0x7c)) & 0x830) == 0) {
                          (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x800;
                        }
                        goto LAB_00c57d3b;
                      }
                      if (((*(byte *)(gen_frame + 0x7b)) != 0x45) && ((*(byte *)(gen_frame + 0x7b)) != 0x47)) goto LAB_00c5821d;
                    }
                    (*(undefined4 *)(gen_frame + 0x18)) = 1;
                    (*(byte *)(gen_frame + 0x7b)) = (*(byte *)(gen_frame + 0x7b)) + 0x20;
LAB_00c57ee0: ;
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x40;
                    pwVar16 = ((wchar_t *)(gen_frame + 0x80));
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
                    (*(gen_size32 *)(gen_frame + 0x24)) = 0x200;
                    if ((*(int *)(gen_frame + 0x74)) < 0) {
                      (*(int *)(gen_frame + 0x74)) = 6;
                    }
                    else if ((*(int *)(gen_frame + 0x74)) == 0) {
                      if ((*(byte *)(gen_frame + 0x7b)) == 0x67) {
                        (*(int *)(gen_frame + 0x74)) = 1;
                      }
                    }
                    else {
                      if (0x200 < (*(int *)(gen_frame + 0x74))) {
                        (*(int *)(gen_frame + 0x74)) = 0x200;
                      }
                      if (0xa3 < (*(int *)(gen_frame + 0x74))) {
                        sVar10 = (*(int *)(gen_frame + 0x74)) + 0x15d;
                        (*(wchar_t * PTR32 *)(gen_frame + 0x2c)) = F_00c54c2e(sVar10);
                        if ((*(wchar_t * PTR32 *)(gen_frame + 0x2c)) == (wchar_t *)0x0) {
                          (*(int *)(gen_frame + 0x74)) = 0xa3;
                        }
                        else {
                          (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (*(wchar_t * PTR32 *)(gen_frame + 0x2c));
                          (*(gen_size32 *)(gen_frame + 0x24)) = sVar10;
                          pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x2c));
                        }
                      }
                    }
                    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)param_4;
                    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_4 + 2);
                    p_Var22 = ((undefined *)(gen_frame + 0x38));
                    iVar8 = (int)(char)(*(byte *)(gen_frame + 0x7b));
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 4;
                    puVar18 = &(*(undefined4 *)(gen_frame + 0xc));
                    pwVar19 = pwVar16;
                    sVar10 = (*(gen_size32 *)(gen_frame + 0x24));
                    iVar14 = (*(int *)(gen_frame + 0x74));
                    uVar20 = (*(undefined4 *)(gen_frame + 0x18));
                    pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
                    (*pcVar9)(puVar18,pwVar19,sVar10,iVar8,iVar14,uVar20,p_Var22);
                    uVar7 = (*(uint *)(gen_frame + 0x7c)) & 0x80;
                    if ((uVar7 != 0) && ((*(int *)(gen_frame + 0x74)) == 0)) {
                      p_Var22 = ((undefined *)(gen_frame + 0x38));
                      pwVar19 = pwVar16;
                      pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                      (*pcVar9)(pwVar19,p_Var22);
                    }
                    if (((*(byte *)(gen_frame + 0x7b)) == 0x67) && (uVar7 == 0)) {
                      p_Var22 = ((undefined *)(gen_frame + 0x38));
                      pwVar19 = pwVar16;
                      pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                      (*pcVar9)(pwVar19,p_Var22);
                    }
                    if ((char)*pwVar16 == '-') {
                      (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x100;
                      pwVar16 = (wchar_t *)((int)pwVar16 + 1);
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar16;
                    }
                    uVar21 = SUB42(pwVar16,0);
                    uVar23 = (undefined2)((uint)((int)(uintptr_t)pwVar16) >> 0x10);
                  }
                  else {
                    if ((*(byte *)(gen_frame + 0x7b)) == 0x58) goto LAB_00c5803d;
                    if ((*(byte *)(gen_frame + 0x7b)) != 0x5a) {
                      if ((*(byte *)(gen_frame + 0x7b)) == 0x61) goto LAB_00c57ee0;
                      param_4 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
                      if ((*(byte *)(gen_frame + 0x7b)) != 99) goto LAB_00c5821d;
LAB_00c57d3b: ;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x810) == 0) {
                        (*(undefined1 *)((char *)&((wchar_t *)(gen_frame + 0x80))[0] + 0)) = (char)*param_4;
                        (*(gen_size32 *)(gen_frame + 0x64)) = 1;
                      }
                      else {
                        eVar11 = F_00c7af62((int *)&(*(gen_size32 *)(gen_frame + 0x64)),(char *)((wchar_t *)(gen_frame + 0x80)),0x200,*param_4);
                        if (eVar11 != 0) {
                          (*(int *)(gen_frame + 0x30)) = 1;
                        }
                      }
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = ((wchar_t *)(gen_frame + 0x80));
                      goto LAB_00c5821d;
                    }
                    psVar1 = *(short * PTR32 *)param_4;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
                    if ((psVar1 != (short *)0x0) && (*(wchar_t * PTR32 *)(psVar1 + 2) != (wchar_t *)0x0)) {
                      (*(gen_size32 *)(gen_frame + 0x64)) = (gen_size32)*psVar1;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)(psVar1 + 2);
                      if (((*(uint *)(gen_frame + 0x7c)) & 0x800) == 0) {
                        (*(int *)(gen_frame + 0x50)) = 0;
                      }
                      else {
                        (*(gen_size32 *)(gen_frame + 0x64)) = (int)(*(gen_size32 *)(gen_frame + 0x64)) / 2;
                        (*(int *)(gen_frame + 0x50)) = 1;
                      }
                      goto LAB_00c58217;
                    }
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                    uVar21 = SUB42(REFG(undefined * PTR32, 0x134b148),0);
                    uVar23 = (undefined2)((uint)REFG(undefined * PTR32, 0x134b148) >> 0x10);
                  }
                  (*(gen_size32 *)(gen_frame + 0x64)) = F_00c552f0(((char *)GEN_TOP(CONCAT22(uVar23,uVar21))));
LAB_00c58217: ;
                }
LAB_00c5821d: ;
                if ((*(int *)(gen_frame + 0x30)) == 0) {
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x40) != 0) {
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x100) == 0) {
                      if (((*(uint *)(gen_frame + 0x7c)) & 1) == 0) {
                        if (((*(uint *)(gen_frame + 0x7c)) & 2) == 0) goto LAB_00c5826a;
                        (*(undefined1 *)(gen_frame + 0x60)) = 0x20;
                      }
                      else {
                        (*(undefined1 *)(gen_frame + 0x60)) = 0x2b;
                      }
                    }
                    else {
                      (*(undefined1 *)(gen_frame + 0x60)) = 0x2d;
                    }
                    (*(int *)(gen_frame + 0x58)) = 1;
                  }
LAB_00c5826a: ;
                  sVar10 = ((*(int *)(gen_frame + 0x54)) - (*(gen_size32 *)(gen_frame + 0x64))) - (*(int *)(gen_frame + 0x58));
                  (*(gen_size32 *)(gen_frame + 0x24)) = sVar10;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0xc) == 0) {
                    do {
                      if ((int)sVar10 < 1) break;
                      sVar10 = sVar10 - 1;
                      F_00c57791(0x20,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                    } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                  }
                  in_ecx = (*(undefined * PTR32 *)(gen_frame + 0x5c));
                  F_00c577ea(&(*(uint *)(gen_frame + 0x68)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined1 *)(gen_frame + 0x60)),(*(int *)(gen_frame + 0x58)));
                  if ((((*(uint *)(gen_frame + 0x7c)) & 8) != 0) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x24)), ((*(uint *)(gen_frame + 0x7c)) & 4) == 0)) {
                    do {
                      if ((int)sVar10 < 1) break;
                      F_00c57791(0x30,in_ecx,&(*(uint *)(gen_frame + 0x68)));
                      sVar10 = sVar10 - 1;
                    } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                  }
                  if (((*(int *)(gen_frame + 0x50)) == 0) || ((int)(*(gen_size32 *)(gen_frame + 0x64)) < 1)) {
                    F_00c577ea(&(*(uint *)(gen_frame + 0x68)),in_ecx,(*(int * PTR32 *)(gen_frame + 0x28)),(*(wchar_t * PTR32 *)(gen_frame + 0x6c)),(*(gen_size32 *)(gen_frame + 0x64)));
                  }
                  else {
                    (*(gen_size32 *)(gen_frame + 0x1c)) = (*(gen_size32 *)(gen_frame + 0x64));
                    pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                    do {
                      _WCh = *pwVar16;
                      (*(gen_size32 *)(gen_frame + 0x1c)) = (*(gen_size32 *)(gen_frame + 0x1c)) - 1;
                      pwVar16 = pwVar16 + 1;
                      eVar11 = F_00c7af62(&(*(int *)(gen_frame + 0x14)),(char *)((int)&(*(undefined2 *)(gen_frame + 0x27f)) + 1),6,_WCh);
                      if ((eVar11 != 0) || ((*(int *)(gen_frame + 0x14)) == 0)) {
                        (*(uint *)(gen_frame + 0x68)) = 0xffffffff;
                        break;
                      }
                      F_00c577ea(&(*(uint *)(gen_frame + 0x68)),(*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x28)),(int)&(*(undefined2 *)(gen_frame + 0x27f)) + 1,(*(int *)(gen_frame + 0x14)));
                    } while ((*(gen_size32 *)(gen_frame + 0x1c)) != 0);
                  }
                  if ((-1 < (int)(*(uint *)(gen_frame + 0x68))) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x24)), ((*(uint *)(gen_frame + 0x7c)) & 4) != 0)) {
                    do {
                      if ((int)sVar10 < 1) break;
                      F_00c57791(0x20,(*(undefined * PTR32 *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x68)));
                      sVar10 = sVar10 - 1;
                    } while ((*(uint *)(gen_frame + 0x68)) != 0xffffffff);
                  }
                }
              }
              else {
                if ('p' < (char)(*(byte *)(gen_frame + 0x7b))) {
                  if ((*(byte *)(gen_frame + 0x7b)) == 0x73) {
LAB_00c57cc2: ;
                    iVar14 = (*(int *)(gen_frame + 0x74));
                    if ((*(int *)(gen_frame + 0x74)) == -1) {
                      iVar14 = 0x7fffffff;
                    }
                    (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4 + 2;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)param_4;
                    if (((*(uint *)(gen_frame + 0x7c)) & 0x810) == 0) {
                      pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                      if ((*(wchar_t * PTR32 *)(gen_frame + 0x6c)) == (wchar_t *)0x0) {
                        (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                        pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                      }
                      for (; (iVar14 != 0 && (iVar14 = iVar14 + -1, (char)*pwVar16 != '\0'));
                          pwVar16 = (wchar_t *)((int)pwVar16 + 1)) {
                      }
                      (*(gen_size32 *)(gen_frame + 0x64)) = (int)pwVar16 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                    }
                    else {
                      if ((*(wchar_t * PTR32 *)(gen_frame + 0x6c)) == (wchar_t *)0x0) {
                        (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                      }
                      (*(int *)(gen_frame + 0x50)) = 1;
                      for (pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
                          (iVar14 != 0 && (iVar14 = iVar14 + -1, *pwVar16 != L'\0'));
                          pwVar16 = pwVar16 + 1) {
                      }
                      (*(gen_size32 *)(gen_frame + 0x64)) = (int)pwVar16 - (int)((int)(uintptr_t)(*(wchar_t * PTR32 *)(gen_frame + 0x6c))) >> 1;
                    }
                    goto LAB_00c58217;
                  }
                  if ((*(byte *)(gen_frame + 0x7b)) == 0x75) goto LAB_00c57eb1;
                  if ((*(byte *)(gen_frame + 0x7b)) != 0x78) goto LAB_00c5821d;
                  (*(undefined4 *)(gen_frame + 0x34)) = 0x27;
LAB_00c5806f: ;
                  (*(gen_size32 *)(gen_frame + 0x64)) = 0x10;
                  param_4 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x80) != 0) {
                    (*(undefined1 *)(gen_frame + 0x60)) = 0x30;
                    (*(char *)(gen_frame + 0x61)) = (char)(*(undefined4 *)(gen_frame + 0x34)) + 'Q';
                    (*(int *)(gen_frame + 0x58)) = 2;
                  }
                  goto LAB_00c57ebb;
                }
                if ((*(byte *)(gen_frame + 0x7b)) == 0x70) {
                  (*(int *)(gen_frame + 0x74)) = 8;
LAB_00c5803d: ;
                  (*(undefined4 *)(gen_frame + 0x34)) = 7;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = param_4;
                  goto LAB_00c5806f;
                }
                if ((char)(*(byte *)(gen_frame + 0x7b)) < 'e') goto LAB_00c5821d;
                param_4 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
                if ((char)(*(byte *)(gen_frame + 0x7b)) < 'h') goto LAB_00c57ee0;
                if ((*(byte *)(gen_frame + 0x7b)) == 0x69) goto LAB_00c57eaa;
                if ((*(byte *)(gen_frame + 0x7b)) != 0x6e) {
                  if ((*(byte *)(gen_frame + 0x7b)) != 0x6f) goto LAB_00c5821d;
                  (*(gen_size32 *)(gen_frame + 0x64)) = 8;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0x80) != 0) {
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) | 0x200;
                  }
                  goto LAB_00c57ebb;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x70)) = (*(wchar_t * PTR32 *)(gen_frame + 0x70)) + 2;
                puVar2 = *(uint * PTR32 *)pwVar16;
                uVar7 = F_00c51967();
                if (uVar7 == 0) goto LAB_00c578c2;
                if (((*(uint *)(gen_frame + 0x7c)) & 0x20) == 0) {
                  *puVar2 = (*(uint *)(gen_frame + 0x68));
                }
                else {
                  *(undefined2 *)puVar2 = (undefined2)(*(uint *)(gen_frame + 0x68));
                }
                (*(int *)(gen_frame + 0x30)) = 1;
              }
              if ((*(wchar_t * PTR32 *)(gen_frame + 0x2c)) != (wchar_t *)0x0) {
                F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x2c)));
                (*(wchar_t * PTR32 *)(gen_frame + 0x2c)) = (wchar_t *)0x0;
              }
            }
            (*(byte *)(gen_frame + 0x7b)) = *(*(byte * PTR32 *)(gen_frame + 0x4c));
            param_2 = (*(byte * PTR32 *)(gen_frame + 0x4c));
            param_4 = (*(wchar_t * PTR32 *)(gen_frame + 0x70));
          } while ((*(byte *)(gen_frame + 0x7b)) != 0);
          if (((*(uint *)(gen_frame + 0x48)) != 0) && ((*(uint *)(gen_frame + 0x48)) != 7)) goto LAB_00c578c2;
        }
        uVar7 = (*(uint *)(gen_frame + 0x68));
        if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x38)) + 12))) != false) {
          (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x38)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x38)) + 8))) + 112))))) & 0xfffffffd;
        }
        goto LAB_00c5844e;
      }
    }
  }
LAB_00c578c2: ;
  piVar6 = F_00c51f85();
  *piVar6 = 0x16;
  F_00c4c305();
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x38)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x38)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x38)) + 8))) + 112))))) & 0xfffffffd;
  }
  uVar7 = 0xffffffff;
LAB_00c5844e: ;
  F_00c47745((*(uint *)(gen_frame + 0x288)) ^ (uint)(uint)(gen_frame + 0x28c));
  return uVar7;
}

/* ref: FUN_00c58480 */
uint F_00c58480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc58480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)param_1[2];
  if ((cVar1 == 'p') || ((char)param_3 == 'p')) {
    return (uint)(cVar1 == (char)param_3);
  }
  if ((cVar1 == 's') || (cVar1 == 'S')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if (((char)param_3 == 's') || ((char)param_3 == 'S')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != iVar2) {
      return 0;
    }
    if (((param_1[3] & 0x810U) != 0) != ((param_4 & 0x810) != 0)) {
      return 0;
    }
    return 1;
  }
  if (iVar2 != 0) {
    return 0;
  }
  if (cVar1 == 'd') {
LAB_00c58524: ;
    iVar3 = 1;
  }
  else {
    if ((((((cVar1 != 'i') && (cVar1 != 'o')) && (cVar1 != 'u')) &&
         (((cVar1 != 'x' && (cVar1 != 'X')) &&
          (((char)param_3 != 'd' && (((char)param_3 != 'i' && ((char)param_3 != 'o')))))))) &&
        ((char)param_3 != 'u')) && (((char)param_3 != 'x' && ((char)param_3 != 'X'))))
    goto LAB_00c58566;
    if ((cVar1 == 'd') ||
       ((((cVar1 == 'i' || (cVar1 == 'o')) || (cVar1 == 'u')) || ((cVar1 == 'x' || (cVar1 == 'X'))))
       )) goto LAB_00c58524;
    iVar3 = 0;
  }
  if ((((char)param_3 == 'd') || ((char)param_3 == 'i')) ||
     (((char)param_3 == 'o' ||
      ((((char)param_3 == 'u' || ((char)param_3 == 'x')) || ((char)param_3 == 'X')))))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (((iVar3 != iVar2) || (((param_1[3] ^ param_4) & 0x10000) != 0)) ||
     (((param_1[3] ^ param_4) & 0x20) != 0)) {
    return 0;
  }
LAB_00c58566: ;
  return (uint)(*param_1 == param_2);
}

/* ref: write_char_00c585ab */
uint F_00c585ab(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc585abu, gen_a0, gen_a1, gen_a2, 0u);
  byte in_al = (byte)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  int * in_esi = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined3 in_register_00000001;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00000001,in_al);
  if ((((*(int *)(((char *)(in_ecx) + 12))) & 0x40) == 0) || ((*(char * PTR32 *)(((char *)(in_ecx) + 8))) != (char *)0x0)) {
    piVar1 = &(*(int *)(((char *)(in_ecx) + 4)));
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = F_00c567c4((int)(char)in_al,in_ecx);
    }
    else {
      *(*(char * PTR32 *)((char *)(in_ecx))) = in_al;
      (*(char * PTR32 *)((char *)(in_ecx))) = (*(char * PTR32 *)((char *)(in_ecx))) + 1;
      uVar2 = (uint)in_al;
    }
    if (uVar2 == 0xffffffff) {
      *in_esi = -1;
      return 0xffffffff;
    }
  }
  *in_esi = *in_esi + 1;
  return uVar2;
}

/* ref: write_multi_char_00c585de */
uint F_00c585de(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc585deu, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 + -1;
    piVar1 = (int *)F_00c585ab((undefined1)param_2,param_4,in_eax);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c58604 */
uint F_00c58604(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc58604u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ebx = (int)gen_a1;
  uint * in_edi = (uint *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*(byte *)(in_ebx + 0xc) & 0x40) == 0) || (*(int *)(in_ebx + 8) != 0)) {
    *in_edi = 0;
    if (0 < (int)param_5) {
      do {
        param_5 = param_5 - 1;
        uVar1 = F_00c585ab(*param_4,in_ebx,in_eax);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c585ab(0x3f,in_ebx,in_eax);
        }
      } while (0 < (int)param_5);
      if (*in_edi != 0) {
        return uVar1;
      }
    }
    *in_edi = uVar2;
  }
  else {
    *in_eax = *in_eax + param_5;
    uVar2 = param_5;
  }
  return uVar2;
}

/* ref: FUN_00c58666 */
uint F_00c58666(unsigned int gen_a0)
{
  GEN_ENTER(0xc58666u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *param_1 = *param_1 + 8;
  return *(uint *)(*param_1 + -8);
}

/* ref: FUN_00c5867b */
uint F_00c5867b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5867bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x8c0];
  int * piVar1;
  uint uVar2;
  long lVar3;
  undefined * puVar4;
  char * _Str;
  
  (*(uint *)(gen_frame + 0x8b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8bc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) = param_1;
  (*(undefined4 *)(gen_frame + 0x68)) = param_4;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x40)),param_3);
  (*(int *)(gen_frame + 0x5c)) = -1;
  ((byte *)(gen_frame + 0x0))[0x24] = 0;
  ((byte *)(gen_frame + 0x0))[0x25] = 0;
  ((byte *)(gen_frame + 0x0))[0x26] = 0;
  ((byte *)(gen_frame + 0x0))[0x27] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = F_00c51f85();
  if (param_1 != (undefined *)0x0) {
    if (((*(int *)(((char *)(param_1) + 12))) & 0x40) == 0) {
      uVar2 = F_00c5d07b(param_1);
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar4 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar4 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
      }
      if ((puVar4[0x24] & 0x7f) == 0) {
        if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
          puVar4 = &REFG(undefined, 0x134b280);
        }
        else {
          puVar4 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
        }
        if ((puVar4[0x24] & 0x80) == 0) goto LAB_00c58781;
      }
    }
    else {
LAB_00c58781: ;
      if (param_2 != (char *)0x0) {
        ((byte *)(gen_frame + 0x0))[0x3c] = 0;
        ((byte *)(gen_frame + 0x0))[0x3d] = 0;
        ((byte *)(gen_frame + 0x0))[0x3e] = 0;
        ((byte *)(gen_frame + 0x0))[0x3f] = 0;
        (*(int *)(gen_frame + 0x58)) = 0;
        do {
          if (((*(int *)(gen_frame + 0x58)) == 1) && ((*(int *)(gen_frame + 0x5c)) == 0)) break;
          ((byte *)(gen_frame + 0x0))[0x28] = 0xff;
          ((byte *)(gen_frame + 0x0))[0x29] = 0xff;
          ((byte *)(gen_frame + 0x0))[0x2a] = 0xff;
          ((byte *)(gen_frame + 0x0))[0x2b] = 0xff;
          (*(int *)(gen_frame + 0x50)) = -1;
          (*(int *)(gen_frame + 0x5c)) = -1;
          ((byte *)(gen_frame + 0x0))[0x34] = 0;
          ((byte *)(gen_frame + 0x0))[0x35] = 0;
          ((byte *)(gen_frame + 0x0))[0x36] = 0;
          ((byte *)(gen_frame + 0x0))[0x37] = 0;
          (*(char *)(gen_frame + 0x60)) = *param_2;
          ((byte *)(gen_frame + 0x0))[0x10] = 0;
          ((byte *)(gen_frame + 0x0))[0x11] = 0;
          ((byte *)(gen_frame + 0x0))[0x12] = 0;
          ((byte *)(gen_frame + 0x0))[0x13] = 0;
          ((byte *)(gen_frame + 0x0))[0xc] = 0;
          ((byte *)(gen_frame + 0x0))[0xd] = 0;
          ((byte *)(gen_frame + 0x0))[0xe] = 0;
          ((byte *)(gen_frame + 0x0))[0xf] = 0;
          ((byte *)(gen_frame + 0x0))[0x2c] = 0;
          ((byte *)(gen_frame + 0x0))[0x2d] = 0;
          ((byte *)(gen_frame + 0x0))[0x2e] = 0;
          ((byte *)(gen_frame + 0x0))[0x2f] = 0;
          (*(undefined4 *)(gen_frame + 0x64)) = 0;
          _Str = param_2;
          uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
          if ((*(char *)(gen_frame + 0x60)) != '\0') {
            do {
              _Str = _Str + 1;
              (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) = _Str;
              if ((byte)((*(char *)(gen_frame + 0x60)) - 0x20U) < 0x59) {
                uVar2 = (byte)(&REFG(undefined, 0x1119ec8))[(*(char *)(gen_frame + 0x60))] & 0xf;
              }
              else {
                uVar2 = 0;
              }
              uVar2 = (uint)((byte)(&REFG(undefined, 0x1119ee8))[(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) + uVar2 * 9] >> 4);
              ((byte *)(gen_frame + 0x0))[0x10] = (char)uVar2;
              ((byte *)(gen_frame + 0x0))[0x11] = (char)(uVar2 >> 8);
              ((byte *)(gen_frame + 0x0))[0x12] = (char)(uVar2 >> 0x10);
              ((byte *)(gen_frame + 0x0))[0x13] = (char)(uVar2 >> 0x18);
              if (uVar2 == 1) {
                if (*_Str != '%') {
                  lVar3 = F_00c4ab6e(_Str,(char * PTR32 *)(((byte *)(gen_frame + 0x0)) + 0x24),10);
                  if ((lVar3 < 1) || (*(char *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) != '$')) {
                    (*(int *)(gen_frame + 0x5c)) = 0;
                    (*(int *)(gen_frame + 0x5c)) = 0;
                  }
                  else {
                    if ((*(int *)(gen_frame + 0x58)) == 0) {
                      F_00c48350(((undefined1 *)(gen_frame + 0x270)),0,0x640);
                    }
                    (*(int *)(gen_frame + 0x5c)) = 1;
                    (*(int *)(gen_frame + 0x5c)) = 1;
                    lVar3 = F_00c4ab6e(_Str,(char * PTR32 *)(((byte *)(gen_frame + 0x0)) + 0x24),10);
                    (*(int *)(gen_frame + 0x50)) = lVar3 + -1;
                    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) + 1;
                    if ((*(int *)(gen_frame + 0x58)) == 0) {
                      if ((((*(int *)(gen_frame + 0x50)) < 0) || (*(char *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) != '$')) || (99 < (*(int *)(gen_frame + 0x50))))
                      goto LAB_00c586f2;
                      if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) < (*(int *)(gen_frame + 0x50))) {
                        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = (*(int *)(gen_frame + 0x50));
                      }
                    }
                  }
                }
LAB_00c58922: ;
                    
                    
                uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0xc5997f) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) * 4))();
                return uVar2;
              }
              if (uVar2 == 8) goto LAB_00c586f2;
              if (uVar2 < 8) goto LAB_00c58922;
              (*(char *)(gen_frame + 0x60)) = *_Str;
            } while ((*(char *)(gen_frame + 0x60)) != '\0');
            if ((uVar2 != 0) && (uVar2 != 7)) goto LAB_00c586f2;
          }
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = uVar2;
          (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
        } while ((*(int *)(gen_frame + 0x58)) < 2);
        uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60));
        if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x40)) + 12))) != false) {
          (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) & 0xfffffffd;
        }
        goto LAB_00c5996f;
      }
    }
  }
LAB_00c586f2: ;
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x40)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) & 0xfffffffd;
  }
  uVar2 = 0xffffffff;
LAB_00c5996f: ;
  F_00c47745((*(uint *)(gen_frame + 0x8b8)) ^ (uint)(uint)(gen_frame + 0x8bc));
  return uVar2;
}

/* ref: write_char_00c59aa5 */
uint F_00c59aa5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc59aa5u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (((*(byte *)(in_eax + 0xc) & 0x40) == 0) || (*(int *)(in_eax + 8) != 0)) {
    in_eax = F_00c7b002(param_3,in_eax);
    if ((short)in_eax == -1) {
      *in_esi = -1;
      return in_eax;
    }
  }
  *in_esi = *in_esi + 1;
  return in_eax;
}

/* ref: write_multi_char_00c59ad4 */
uint F_00c59ad4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc59ad4u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 + -1;
    piVar1 = (int *)F_00c59aa5(param_4,in_eax,param_2);
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c59afb */
uint F_00c59afb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc59afbu, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ebx = (int)gen_a1;
  uint * in_edi = (uint *)(uintptr_t)gen_a2;
  ushort * param_4 = (ushort *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*(byte *)(in_ebx + 0xc) & 0x40) == 0) || (*(int *)(in_ebx + 8) != 0)) {
    *in_edi = 0;
    if (0 < (int)param_5) {
      do {
        param_5 = param_5 - 1;
        uVar1 = F_00c59aa5(in_ebx,in_eax,(uint)*param_4);
        param_4 = param_4 + 1;
        if (*in_eax == -1) {
          if (*in_edi != 0x2a) break;
          uVar1 = F_00c59aa5(in_ebx,in_eax,0x3f);
        }
      } while (0 < (int)param_5);
      if (*in_edi != 0) {
        return uVar1;
      }
    }
    *in_edi = uVar2;
  }
  else {
    *in_eax = *in_eax + param_5;
    uVar2 = param_5;
  }
  return uVar2;
}

/* ref: FUN_00c59b62 */
uint F_00c59b62(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc59b62u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x480];
  ushort uVar1;
  wchar_t wVar2;
  short * psVar3;
  short sVar4;
  ulonglong uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  code * pcVar9;
  byte bVar10;
  uint uVar11;
  wchar_t * pwVar12;
  gen_size32 sVar13;
  bool bVar14;
  uint * puVar15;
  wchar_t * pwVar16;
  undefined4 uVar17;
  undefined * p_Var18;
  
  (*(uint *)(gen_frame + 0x478)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x47c);
  (*(int *)(gen_frame + 0x58)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(uint *)(gen_frame + 0x74)) = 0;
  (*(uint *)(gen_frame + 0x4c)) = 0;
  (*(uint *)(gen_frame + 0x70)) = 0;
  (*(int *)(gen_frame + 0x54)) = 0;
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(int *)(gen_frame + 0x50)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x24)),param_3);
  (*(int * PTR32 *)(gen_frame + 0x18)) = F_00c51f85();
  if (((*(int *)(gen_frame + 0x58)) == 0) || (param_2 == (ushort *)0x0)) {
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
LAB_00c59bf2: ;
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x24)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) & 0xfffffffd;
    }
    uVar7 = 0xffffffff;
  }
  else {
    uVar1 = *param_2;
    (*(uint *)(gen_frame + 0x60)) = (uint)uVar1;
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(gen_size32 *)(gen_frame + 0x68)) = 0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = (wchar_t *)0x0;
    iVar8 = 0;
    uVar7 = (*(uint *)(gen_frame + 0x64));
    while ((*(uint *)(gen_frame + 0x64)) = uVar7, uVar1 != 0) {
      (*(ushort * PTR32 *)(gen_frame + 0x3c)) = param_2 + 1;
      if ((int)uVar7 < 0) break;
      sVar4 = (short)(*(uint *)(gen_frame + 0x60));
      if ((ushort)(sVar4 - 0x20U) < 0x59) {
        uVar7 = (int)"e+000"[(*(uint *)(gen_frame + 0x60))] & 0xf;
      }
      else {
        uVar7 = 0;
      }
      (*(int *)(gen_frame + 0x1c)) = (int)(char)(&REFG(undefined, 0x1119e88))[uVar7 * 8 + iVar8] >> 4;
      switch((unsigned int)(uintptr_t)((int)(char)(&REFG(undefined, 0x1119e88))[uVar7 * 8 + iVar8] >> 4)) {
      case 0: ;
switchD_00c59c7e_caseD_0: ;
        (*(int *)(gen_frame + 0x50)) = 1;
        F_00c59aa5((*(int *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x60)));
        break;
      case 1: ;
        (*(uint *)(gen_frame + 0x70)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(int *)(gen_frame + 0x34)) = 0;
        (*(uint *)(gen_frame + 0x4c)) = 0;
        (*(int *)(gen_frame + 0x54)) = 0;
        (*(uint *)(gen_frame + 0x74)) = 0;
        (*(int *)(gen_frame + 0x50)) = 0;
        break;
      case 2: ;
        if ((*(uint *)(gen_frame + 0x60)) == 0x20) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 2;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x23) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x80;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x2b) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 1;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x2d) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 4;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x30) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 8;
        }
        break;
      case 3: ;
        if (sVar4 == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4 + 2;
          (*(uint *)(gen_frame + 0x4c)) = *(uint *)param_4;
          if ((int)(*(uint *)(gen_frame + 0x4c)) < 0) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 4;
            (*(uint *)(gen_frame + 0x4c)) = -(*(uint *)(gen_frame + 0x4c));
          }
        }
        else {
          (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) * 10 + -0x30 + (*(uint *)(gen_frame + 0x60));
        }
        break;
      case 4: ;
        (*(uint *)(gen_frame + 0x70)) = 0;
        break;
      case 5: ;
        if (sVar4 == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4 + 2;
          (*(uint *)(gen_frame + 0x70)) = *(uint *)param_4;
          if ((int)*(uint *)param_4 < 0) {
            (*(uint *)(gen_frame + 0x70)) = 0xffffffff;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) * 10 + -0x30 + (*(uint *)(gen_frame + 0x60));
        }
        break;
      case 6: ;
        if ((*(uint *)(gen_frame + 0x60)) == 0x49) {
          uVar1 = *(*(ushort * PTR32 *)(gen_frame + 0x3c));
          if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x8000;
            (*(ushort * PTR32 *)(gen_frame + 0x3c)) = param_2 + 3;
          }
          else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) & 0xffff7fff;
            (*(ushort * PTR32 *)(gen_frame + 0x3c)) = param_2 + 3;
          }
          else if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                   ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
            (*(int *)(gen_frame + 0x1c)) = 0;
            goto switchD_00c59c7e_caseD_0;
          }
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x68) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x20;
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x6c) {
          if (*(*(ushort * PTR32 *)(gen_frame + 0x3c)) == 0x6c) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x1000;
            (*(ushort * PTR32 *)(gen_frame + 0x3c)) = param_2 + 2;
          }
          else {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x10;
          }
        }
        else if ((*(uint *)(gen_frame + 0x60)) == 0x77) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x800;
        }
        break;
      case 7: ;
        if ((*(uint *)(gen_frame + 0x60)) < 0x65) {
          if ((*(uint *)(gen_frame + 0x60)) == 100) {
LAB_00c5a18e: ;
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x40;
LAB_00c5a195: ;
            (*(uint *)(gen_frame + 0x60)) = 10;
LAB_00c5a19f: ;
            if ((((*(uint *)(gen_frame + 0x74)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x74)) & 0x1000) == 0)) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4 + 2;
              if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
                uVar7 = *(uint *)param_4;
                if (((*(uint *)(gen_frame + 0x74)) & 0x40) == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = (int)uVar7 >> 0x1f;
                }
                goto LAB_00c5a391;
              }
              if (((*(uint *)(gen_frame + 0x74)) & 0x40) == 0) {
                uVar7 = (uint)(ushort)*param_4;
              }
              else {
                uVar7 = (uint)*param_4;
              }
              uVar11 = (int)uVar7 >> 0x1f;
            }
            else {
              uVar7 = *(uint *)param_4;
              uVar11 = *(uint *)(param_4 + 2);
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4 + 4;
LAB_00c5a391: ;
            }
            if (((((*(uint *)(gen_frame + 0x74)) & 0x40) != 0) && ((int)uVar11 < 1)) && ((int)uVar11 < 0)) {
              bVar14 = uVar7 != 0;
              uVar7 = -uVar7;
              uVar11 = -(uVar11 + bVar14);
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x100;
            }
            if (((*(uint *)(gen_frame + 0x74)) & 0x9000) == 0) {
              uVar11 = 0;
            }
            if ((int)(*(uint *)(gen_frame + 0x70)) < 0) {
              (*(uint *)(gen_frame + 0x70)) = 1;
            }
            else {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) & 0xfffffff7;
              if (0x200 < (int)(*(uint *)(gen_frame + 0x70))) {
                (*(uint *)(gen_frame + 0x70)) = 0x200;
              }
            }
            if (uVar7 == 0 && uVar11 == 0) {
              (*(int *)(gen_frame + 0x54)) = 0;
            }
            pwVar12 = &(*(undefined2 *)(gen_frame + 0x277));
            uVar5 = CONCAT44(uVar11,uVar7);
            while ((uVar7 = (*(uint *)(gen_frame + 0x70)), (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1, 0 < (int)uVar7 || (uVar5 != 0))) {
              uVar7 = (int)(uVar5 % (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x60))) + 0x30;
              bVar10 = (byte)uVar7;
              if (0x39 < uVar7) {
                bVar10 = bVar10 + (char)(*(undefined4 *)(gen_frame + 0x38));
              }
              *(byte *)pwVar12 = bVar10;
              pwVar12 = (wchar_t *)((int)pwVar12 + -1);
              uVar5 = uVar5 / (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x60));
            }
            (*(gen_size32 *)(gen_frame + 0x68)) = (int)&(*(undefined2 *)(gen_frame + 0x277)) - (int)pwVar12;
            (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)((int)pwVar12 + 1);
            if ((((*(uint *)(gen_frame + 0x74)) & 0x200) != 0) &&
               (((*(gen_size32 *)(gen_frame + 0x68)) == 0 || (*(byte *)((int)pwVar12 + 1) != 0x30)))) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar12;
              (*(gen_size32 *)(gen_frame + 0x68)) = (int)&(*(undefined2 *)(gen_frame + 0x277)) - (int)pwVar12 + 1;
              *(byte *)pwVar12 = 0x30;
            }
          }
          else {
            if ((*(uint *)(gen_frame + 0x60)) < 0x54) {
              if ((*(uint *)(gen_frame + 0x60)) == 0x53) {
                if (((*(uint *)(gen_frame + 0x74)) & 0x830) == 0) {
                  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x20;
                }
                goto LAB_00c59f6a;
              }
              if ((*(uint *)(gen_frame + 0x60)) != 0x41) {
                if ((*(uint *)(gen_frame + 0x60)) == 0x43) {
                  if (((*(uint *)(gen_frame + 0x74)) & 0x830) == 0) {
                    (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x20;
                  }
                  goto LAB_00c5a013;
                }
                if (((*(uint *)(gen_frame + 0x60)) != 0x45) && ((*(uint *)(gen_frame + 0x60)) != 0x47)) goto LAB_00c5a4cd;
              }
              (*(undefined4 *)(gen_frame + 0x14)) = 1;
              (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x60)) + 0x20;
LAB_00c59f01: ;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x40;
              pwVar12 = ((wchar_t *)(gen_frame + 0x78));
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar12;
              (*(gen_size32 *)(gen_frame + 0x68)) = 0x200;
              if ((int)(*(uint *)(gen_frame + 0x70)) < 0) {
                (*(uint *)(gen_frame + 0x70)) = 6;
              }
              else if ((*(uint *)(gen_frame + 0x70)) == 0) {
                if ((short)(*(uint *)(gen_frame + 0x60)) == 0x67) {
                  (*(uint *)(gen_frame + 0x70)) = 1;
                }
              }
              else {
                if (0x200 < (int)(*(uint *)(gen_frame + 0x70))) {
                  (*(uint *)(gen_frame + 0x70)) = 0x200;
                }
                if (0xa3 < (int)(*(uint *)(gen_frame + 0x70))) {
                  sVar13 = (*(uint *)(gen_frame + 0x70)) + 0x15d;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = F_00c54c2e(sVar13);
                  if ((*(wchar_t * PTR32 *)(gen_frame + 0x40)) == (wchar_t *)0x0) {
                    (*(uint *)(gen_frame + 0x70)) = 0xa3;
                  }
                  else {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (*(wchar_t * PTR32 *)(gen_frame + 0x40));
                    (*(gen_size32 *)(gen_frame + 0x68)) = sVar13;
                    pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x40));
                  }
                }
              }
              (*(uint *)(gen_frame + 0xc)) = *(uint *)param_4;
              (*(uint *)(gen_frame + 0x10)) = *(uint *)(param_4 + 2);
              p_Var18 = ((undefined *)(gen_frame + 0x24));
              iVar8 = (int)(char)(*(uint *)(gen_frame + 0x60));
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4 + 4;
              puVar15 = &(*(uint *)(gen_frame + 0xc));
              pwVar16 = pwVar12;
              sVar13 = (*(gen_size32 *)(gen_frame + 0x68));
              uVar17 = (*(undefined4 *)(gen_frame + 0x14));
              uVar7 = (*(uint *)(gen_frame + 0x70));
              pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
              (*pcVar9)(puVar15,pwVar16,sVar13,iVar8,uVar7,uVar17,p_Var18);
              uVar7 = (*(uint *)(gen_frame + 0x74)) & 0x80;
              if ((uVar7 != 0) && ((*(uint *)(gen_frame + 0x70)) == 0)) {
                p_Var18 = ((undefined *)(gen_frame + 0x24));
                pwVar16 = pwVar12;
                pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                (*pcVar9)(pwVar16,p_Var18);
              }
              if (((short)(*(uint *)(gen_frame + 0x60)) == 0x67) && (uVar7 == 0)) {
                p_Var18 = ((undefined *)(gen_frame + 0x24));
                pwVar16 = pwVar12;
                pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                (*pcVar9)(pwVar16,p_Var18);
              }
              if ((byte)*pwVar12 == 0x2d) {
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x100;
                pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar12;
              }
            }
            else {
              if ((*(uint *)(gen_frame + 0x60)) == 0x58) goto LAB_00c5a2f0;
              if ((*(uint *)(gen_frame + 0x60)) != 0x5a) {
                if ((*(uint *)(gen_frame + 0x60)) == 0x61) goto LAB_00c59f01;
                if ((*(uint *)(gen_frame + 0x60)) != 99) goto LAB_00c5a4cd;
LAB_00c5a013: ;
                wVar2 = *param_4;
                (*(int *)(gen_frame + 0x50)) = 1;
                (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4 + 2;
                (*(uint *)(gen_frame + 0x20)) = (uint)(ushort)wVar2;
                if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
                  ((wchar_t *)(gen_frame + 0x78))[0] = wVar2;
                }
                else {
                  (*(char *)(gen_frame + 0x44)) = (char)wVar2;
                  (*(undefined1 *)(gen_frame + 0x45)) = 0;
                  iVar8 = F_00c7b204(((wchar_t *)(gen_frame + 0x78)),&(*(char *)(gen_frame + 0x44)),
                                     (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x24)))) + 160) + (3) * 4))))),
                                     &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
                  if (iVar8 < 0) {
                    (*(int *)(gen_frame + 0x34)) = 1;
                  }
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = ((wchar_t *)(gen_frame + 0x78));
                (*(gen_size32 *)(gen_frame + 0x68)) = 1;
                goto LAB_00c5a4cd;
              }
              psVar3 = *(short * PTR32 *)param_4;
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4 + 2;
              if ((psVar3 != (short *)0x0) && (*(wchar_t * PTR32 *)(psVar3 + 2) != (wchar_t *)0x0)) {
                (*(gen_size32 *)(gen_frame + 0x68)) = (gen_size32)*psVar3;
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)(psVar3 + 2);
                if (((*(uint *)(gen_frame + 0x74)) & 0x800) != 0) {
                  iVar8 = (*(gen_size32 *)(gen_frame + 0x68)) - ((int)(*(gen_size32 *)(gen_frame + 0x68)) >> 0x1f);
                  (*(int *)(gen_frame + 0x50)) = 1;
                  goto LAB_00c5a4c5;
                }
                (*(int *)(gen_frame + 0x50)) = 0;
                goto LAB_00c5a4c7;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              pwVar12 = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
            }
            (*(gen_size32 *)(gen_frame + 0x68)) = F_00c552f0((char *)pwVar12);
LAB_00c5a4c7: ;
          }
LAB_00c5a4cd: ;
          if ((*(int *)(gen_frame + 0x34)) == 0) {
            if (((*(uint *)(gen_frame + 0x74)) & 0x40) != 0) {
              if (((*(uint *)(gen_frame + 0x74)) & 0x100) == 0) {
                if (((*(uint *)(gen_frame + 0x74)) & 1) == 0) {
                  if (((*(uint *)(gen_frame + 0x74)) & 2) == 0) goto LAB_00c5a50f;
                  (*(undefined2 *)(gen_frame + 0x48)) = 0x20;
                }
                else {
                  (*(undefined2 *)(gen_frame + 0x48)) = 0x2b;
                }
              }
              else {
                (*(undefined2 *)(gen_frame + 0x48)) = 0x2d;
              }
              (*(int *)(gen_frame + 0x54)) = 1;
            }
LAB_00c5a50f: ;
            uVar7 = ((*(uint *)(gen_frame + 0x4c)) - (*(gen_size32 *)(gen_frame + 0x68))) - (*(int *)(gen_frame + 0x54));
            (*(uint *)(gen_frame + 0x60)) = uVar7;
            if (((*(uint *)(gen_frame + 0x74)) & 0xc) == 0) {
              do {
                if ((int)uVar7 < 1) break;
                uVar7 = uVar7 - 1;
                F_00c59aa5((*(int *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x64)),0x20);
              } while ((*(uint *)(gen_frame + 0x64)) != 0xffffffff);
            }
            iVar8 = (*(int *)(gen_frame + 0x58));
            F_00c59afb(&(*(uint *)(gen_frame + 0x64)),(*(int *)(gen_frame + 0x58)),(*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined2 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x54)));
            if ((((*(uint *)(gen_frame + 0x74)) & 8) != 0) && (uVar7 = (*(uint *)(gen_frame + 0x60)), ((*(uint *)(gen_frame + 0x74)) & 4) == 0)) {
              do {
                if ((int)uVar7 < 1) break;
                F_00c59aa5(iVar8,&(*(uint *)(gen_frame + 0x64)),0x30);
                uVar7 = uVar7 - 1;
              } while ((*(uint *)(gen_frame + 0x64)) != 0xffffffff);
            }
            if (((*(int *)(gen_frame + 0x50)) == 0) && (sVar13 = (*(gen_size32 *)(gen_frame + 0x68)), pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)), 0 < (int)(*(gen_size32 *)(gen_frame + 0x68)))) {
              do {
                sVar13 = sVar13 - 1;
                iVar8 = F_00c7b204((wchar_t *)&(*(uint *)(gen_frame + 0x20)),(char *)pwVar12,
                                   (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x24)))) + 160) + (3) * 4))))),
                                   &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
                if (iVar8 < 1) {
                  (*(uint *)(gen_frame + 0x64)) = 0xffffffff;
                  break;
                }
                F_00c59aa5((*(int *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x20)));
                pwVar12 = (wchar_t *)((int)pwVar12 + iVar8);
              } while (0 < (int)sVar13);
            }
            else {
              F_00c59afb(&(*(uint *)(gen_frame + 0x64)),(*(int *)(gen_frame + 0x58)),(*(int * PTR32 *)(gen_frame + 0x18)),(*(wchar_t * PTR32 *)(gen_frame + 0x6c)),(*(gen_size32 *)(gen_frame + 0x68)));
            }
            if ((-1 < (int)(*(uint *)(gen_frame + 0x64))) && (uVar7 = (*(uint *)(gen_frame + 0x60)), ((*(uint *)(gen_frame + 0x74)) & 4) != 0)) {
              do {
                if ((int)uVar7 < 1) break;
                F_00c59aa5((*(int *)(gen_frame + 0x58)),&(*(uint *)(gen_frame + 0x64)),0x20);
                uVar7 = uVar7 - 1;
              } while ((*(uint *)(gen_frame + 0x64)) != 0xffffffff);
            }
          }
        }
        else {
          if (0x70 < (*(uint *)(gen_frame + 0x60))) {
            if ((*(uint *)(gen_frame + 0x60)) == 0x73) {
LAB_00c59f6a: ;
              uVar7 = (*(uint *)(gen_frame + 0x70));
              if ((*(uint *)(gen_frame + 0x70)) == 0xffffffff) {
                uVar7 = 0x7fffffff;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4 + 2;
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)param_4;
              if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
                if ((*(wchar_t * PTR32 *)(gen_frame + 0x6c)) == (wchar_t *)0x0) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                }
                (*(int *)(gen_frame + 0x50)) = 1;
                for (pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)); (uVar7 != 0 && (uVar7 = uVar7 - 1, *pwVar12 != L'\0'));
                    pwVar12 = pwVar12 + 1) {
                }
                iVar8 = (int)pwVar12 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x6c));
LAB_00c5a4c5: ;
                (*(int *)(gen_frame + 0x50)) = 1;
                (*(gen_size32 *)(gen_frame + 0x68)) = iVar8 >> 1;
                goto LAB_00c5a4c7;
              }
              if ((*(wchar_t * PTR32 *)(gen_frame + 0x6c)) == (wchar_t *)0x0) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              }
              (*(gen_size32 *)(gen_frame + 0x68)) = 0;
              pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
              if (0 < (int)uVar7) {
                do {
                  if ((byte)*pwVar12 == 0) break;
                  iVar8 = F_00c6dfe8((uint)(byte)*pwVar12,&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
                  if (iVar8 != 0) {
                    pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                  }
                  pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                  (*(gen_size32 *)(gen_frame + 0x68)) = (*(gen_size32 *)(gen_frame + 0x68)) + 1;
                } while ((int)(*(gen_size32 *)(gen_frame + 0x68)) < (int)uVar7);
              }
              goto LAB_00c5a4cd;
            }
            if ((*(uint *)(gen_frame + 0x60)) == 0x75) goto LAB_00c5a195;
            if ((*(uint *)(gen_frame + 0x60)) != 0x78) goto LAB_00c5a4cd;
            (*(undefined4 *)(gen_frame + 0x38)) = 0x27;
LAB_00c5a31c: ;
            (*(uint *)(gen_frame + 0x60)) = 0x10;
            if (((*(uint *)(gen_frame + 0x74)) & 0x80) != 0) {
              (*(undefined2 *)(gen_frame + 0x48)) = 0x30;
              (*(short *)(gen_frame + 0x4a)) = (short)(*(undefined4 *)(gen_frame + 0x38)) + 0x51;
              (*(int *)(gen_frame + 0x54)) = 2;
            }
            goto LAB_00c5a19f;
          }
          if ((*(uint *)(gen_frame + 0x60)) == 0x70) {
            (*(uint *)(gen_frame + 0x70)) = 8;
LAB_00c5a2f0: ;
            (*(undefined4 *)(gen_frame + 0x38)) = 7;
            goto LAB_00c5a31c;
          }
          if ((*(uint *)(gen_frame + 0x60)) < 0x65) goto LAB_00c5a4cd;
          if ((*(uint *)(gen_frame + 0x60)) < 0x68) goto LAB_00c59f01;
          if ((*(uint *)(gen_frame + 0x60)) == 0x69) goto LAB_00c5a18e;
          if ((*(uint *)(gen_frame + 0x60)) != 0x6e) {
            if ((*(uint *)(gen_frame + 0x60)) != 0x6f) goto LAB_00c5a4cd;
            (*(uint *)(gen_frame + 0x60)) = 8;
            if (((*(uint *)(gen_frame + 0x74)) & 0x80) != 0) {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) | 0x200;
            }
            goto LAB_00c5a19f;
          }
          puVar15 = *(uint * PTR32 *)param_4;
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = param_4 + 2;
          uVar7 = F_00c51967();
          if (uVar7 == 0) {
            piVar6 = F_00c51f85();
            *piVar6 = 0x16;
            F_00c4c305();
            goto LAB_00c59bf2;
          }
          if (((*(uint *)(gen_frame + 0x74)) & 0x20) == 0) {
            *puVar15 = (*(uint *)(gen_frame + 0x64));
          }
          else {
            *(undefined2 *)puVar15 = (undefined2)(*(uint *)(gen_frame + 0x64));
          }
          (*(int *)(gen_frame + 0x34)) = 1;
        }
        if ((*(wchar_t * PTR32 *)(gen_frame + 0x40)) != (wchar_t *)0x0) {
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x40)));
          (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = (wchar_t *)0x0;
        }
      }
      uVar1 = *(*(ushort * PTR32 *)(gen_frame + 0x3c));
      (*(uint *)(gen_frame + 0x60)) = (uint)uVar1;
      iVar8 = (*(int *)(gen_frame + 0x1c));
      param_2 = (*(ushort * PTR32 *)(gen_frame + 0x3c));
      param_4 = (*(wchar_t * PTR32 *)(gen_frame + 0x5c));
      uVar7 = (*(uint *)(gen_frame + 0x64));
    }
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x24)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) & 0xfffffffd;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x478)) ^ (uint)(uint)(gen_frame + 0x47c));
  return uVar7;
}

/* ref: __vswprintf_l */
int F_00c5a72a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5a72au, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * _String = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _Count = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a3;
  undefined * _Ap = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if ((_Count == 0) || (_String == (wchar_t *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else {
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = (char *)_String;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)_String;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
    uVar2 = F_00c59b62(((undefined *)(gen_frame + 0xc)),_Count,_Format,_Plocinfo);
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    if ((*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = 0;
      (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) + 1)));
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    if ((*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = 0;
    }
  }
  return uVar2;
}

/* ref: FID_conflict___vscprintf_helper_00c5a7ef */
uint F_00c5a7ef(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5a7efu, gen_a0, gen_a1, gen_a2, gen_a3);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  puVar4 = ((undefined4 *)(gen_frame + 0x10));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_2 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  ((undefined4 *)(gen_frame + 0x10))[0] = 0x7fffffff;
  ((undefined4 *)(gen_frame + 0x10))[2] = 0x42;
  ((undefined4 *)(gen_frame + 0x10))[1] = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  uVar2 = (*param_1)(&(*(undefined4 *)(gen_frame + 0xc)),param_2,param_3,param_4);
  return uVar2;
}

/* ref: FID_conflict___vscprintf_p_00c5a84b */
int F_00c5a84b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5a84bu, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc59b62)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c5a867 */
int F_00c5a867(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5a867u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc59b62)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_00c5a884 */
int F_00c5a884(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5a884u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc72530)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c5a8a0 */
int F_00c5a8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5a8a0u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc72530)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: __mtinitlocks */
int F_00c5a8bd(void)
{
  GEN_ENTER(0xc5a8bdu, 0u, 0u, 0u, 0u);
  BOOL BVar1;
  int iVar2;
  undefined * puVar3;
  
  iVar2 = 0;
  puVar3 = &REFG(undefined, 0x15d7240);
  do {
    if ((&REFG(undefined4, 0x134b154))[iVar2 * 2] == 1) {
      (&REFG(undefined4, 0x134b150))[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      BVar1 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(&REFG(undefined4, 0x134b150))[iVar2 * 2],4000);
      if (BVar1 == 0) {
        (&REFG(undefined4, 0x134b150))[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}

/* ref: __mtdeletelocks */
unsigned int F_00c5a907(void)
{
  GEN_ENTER(0xc5a907u, 0u, 0u, 0u, 0u);
  undefined * _Memory;
  undefined4 * puVar1;
  int * piVar2;
  
  puVar1 = &REFG(undefined4, 0x134b150);
  do {
    _Memory = (undefined *)*puVar1;
    if ((_Memory != (undefined *)0x0) && (puVar1[1] != 1)) {
      gen_imp_DeleteCriticalSection(_Memory);
      F_00c4c68f(_Memory);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x134b270);
  piVar2 = &REFG(undefined4, 0x134b150);
  do {
    if ((*piVar2 != 0) && (piVar2[1] == 1)) {
      gen_imp_DeleteCriticalSection(*piVar2);
    }
    piVar2 = piVar2 + 2;
  } while ((int)piVar2 < 0x134b270);
  return 0;
}

/* ref: FUN_00c5a95e */
uint F_00c5a95e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5a95eu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint extraout_EAX = 0;
  
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(&REFG(undefined4, 0x134b150))[param_1 * 2]);
  return extraout_EAX;
}

/* ref: __mtinitlocknum */
int F_00c5a98d(unsigned int gen_a0)
{
  GEN_ENTER(0xc5a98du, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  BOOL BVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f63e0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5a999;
  iVar3 = 1;
  (*(int *)(gen_frame + 0x0)) = 1;
  if (REFG(int, 0x15d74c8) != 0) {
    piVar1 = &REFG(undefined4, 0x134b150) + (*(int *)&gen_args[0]) * 2;
    if (*piVar1 == 0) {
      lpCriticalSection = F_00c54c2e(0x18);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
        piVar1 = F_00c51f85();
        *piVar1 = 0xc;
        iVar3 = 0;
      }
      else {
        F_00c5aa4f(10);
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if (*piVar1 == 0) {
          BVar2 = gen_imp_InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
          if (BVar2 == 0) {
            F_00c4c68f(lpCriticalSection);
            piVar1 = F_00c51f85();
            *piVar1 = 0xc;
            (*(int *)(gen_frame + 0x0)) = 0;
          }
          else {
            *piVar1 = (int)lpCriticalSection;
          }
        }
        else {
          F_00c4c68f(lpCriticalSection);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c5aa46();
        iVar3 = (*(int *)(gen_frame + 0x0));
      }
    }
    return iVar3;
  }
  F_00c5593d();
  F_00c5578e(0x1e);
                    
  F_00c47986(0xff);
}

/* ref: FUN_00c5aa46 */
uint F_00c5aa46(void)
{
  GEN_ENTER(0xc5aa46u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: __lock */
unsigned int F_00c5aa4f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5aa4fu, gen_a0, 0u, 0u, 0u);
  int _File = (int)gen_a0;
  int iVar1;
  
  if ((&REFG(undefined4, 0x134b150))[_File * 2] == 0) {
    iVar1 = F_00c5a98d(_File);
    if (iVar1 == 0) {
                    
      F_00c47ca5(0x11);
    }
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(&REFG(undefined4, 0x134b150))[_File * 2]);
  return 0;
}

/* ref: terminate */
unsigned int F_00c5aa82(void)
{
  GEN_ENTER(0xc5aa82u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  undefined4 unaff_ESI = 0;
  undefined4 unaff_EDI = 0;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6400);
  uStack_c = 0xc5aa8e;
  p_Var1 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 120))) != (code *)0x0) {
    local_8 = (undefined *)0x0;
    ((code *)(*(gen_code32 *)(((char *)(p_Var1) + 120))))();
    local_8 = (undefined *)0xfffffffe;
  }
                    
  F_00c4c6c9(unaff_ESI,unaff_EDI);
}

/* ref: FUN_00c5aaa2 */
uint F_00c5aaa2(void)
{
  GEN_ENTER(0xc5aaa2u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c5aabb */
unsigned int F_00c5aabb(void)
{
  GEN_ENTER(0xc5aabbu, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 124))) != (code *)0x0) {
    ((code *)(*(gen_code32 *)(((char *)(p_Var1) + 124))))();
  }
                    
  F_00c5aa82();
}

/* ref: _inconsistency */
unsigned int F_00c5aace(void)
{
  GEN_ENTER(0xc5aaceu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6420);
  uStack_c = 0xc5aada;
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7390));
  if (pcVar1 != (code *)0x0) {
    local_8 = (undefined *)0x0;
    (*pcVar1)();
    local_8 = (undefined *)0xfffffffe;
  }
                    
  F_00c5aa82();
}

/* ref: FUN_00c5aaf2 */
uint F_00c5aaf2(void)
{
  GEN_ENTER(0xc5aaf2u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c5aaf6 */
unsigned int F_00c5aaf6(unsigned int gen_a0)
{
  GEN_ENTER(0xc5aaf6u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
                    
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0xc5ab05;
  F_00c5aa82();
}

/* ref: FUN_00c5ab06 */
unsigned int F_00c5ab06(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ab06u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  REFG(undefined4, 0x15d7390) = gen_imp_EncodePointer(((code *)REFP(0xc5aa82)));
  return 0;
}

/* ref: __initp_misc_winsig */
uint F_00c5ab17(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ab17u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d7394) = param_1;
  REFG(undefined4, 0x15d7398) = param_1;
  REFG(undefined4, 0x15d739c) = param_1;
  REFG(undefined4, 0x15d73a0) = param_1;
  return param_1;
}

/* ref: FUN_00c5ab35 */
uint F_00c5ab35(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ab35u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  uint uVar1;
  uint * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6440);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc5ab41;
  F_00c5aa4f(0);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  if ((*(int *)&gen_args[0]) == 0) {
    puVar2 = (uint *)&REFG(undefined4, 0x15d7394);
    (*(gen_code32 *)(gen_frame + 0x10)) = gen_imp_DecodePointer(REFG(undefined4, 0x15d7394));
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
  }
  else {
    puVar2 = (uint *)&REFG(undefined4, 0x15d7398);
    (*(gen_code32 *)(gen_frame + 0x10)) = gen_imp_DecodePointer(REFG(undefined4, 0x15d7398));
    (*(undefined4 *)(gen_frame + 0xc)) = 0x15;
  }
  if (((*(gen_code32 *)(gen_frame + 0x10)) != (code *)0x0) && ((*(gen_code32 *)(gen_frame + 0x10)) != (code *)0x1)) {
    uVar1 = F_00c5b18d();
    *puVar2 = uVar1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
  F_00c5abaf();
  if ((*(gen_code32 *)(gen_frame + 0x10)) == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    if ((*(gen_code32 *)(gen_frame + 0x10)) != (code *)0x1) {
      ((code *)(*(gen_code32 *)(gen_frame + 0x10)))((*(undefined4 *)(gen_frame + 0xc)));
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00c5abaf */
uint F_00c5abaf(void)
{
  GEN_ENTER(0xc5abafu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0);
  return uVar1;
}

/* ref: siglookup */
uint F_00c5abd1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5abd1u, gen_a0, gen_a1, 0u, 0u);
  int in_edx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  do {
    if (*(int *)(uVar1 + 4) == in_edx) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < REFG(int, 0x111a064) * 0xc + param_2);
  if ((REFG(int, 0x111a064) * 0xc + param_2 <= uVar1) || (*(int *)(uVar1 + 4) != in_edx)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c5ac08 */
uint F_00c5ac08(void)
{
  GEN_ENTER(0xc5ac08u, 0u, 0u, 0u, 0u);
  PVOID pvVar1;
  
  pvVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d739c));
  return (uint)pvVar1;
}

/* ref: FUN_00c5ae29 */
uint F_00c5ae29(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ae29u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0);
  return uVar1;
}

/* ref: _raise */
int F_00c5ae67(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ae67u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x48];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  int in_edx;
  uint uVar1;
  int * piVar2;
  PVOID Ptr;
  uint * puVar3;
  undefined * p_Var4;
  
  in_edx = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x20;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = &REFG(undefined, 0x12f6480);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xc5ae73;
  p_Var4 = (undefined *)0x0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  if ((*(int *)&gen_args[0]) < 0xc) {
    if ((*(int *)&gen_args[0]) != 0xb) {
      if ((*(int *)&gen_args[0]) == 2) {
        puVar3 = (uint *)&REFG(undefined4, 0x15d7394);
        Ptr = REFG(undefined4, 0x15d7394);
        goto LAB_00c5af11;
      }
      if ((*(int *)&gen_args[0]) != 4) {
        if ((*(int *)&gen_args[0]) == 6) goto LAB_00c5aeef;
        if ((*(int *)&gen_args[0]) != 8) goto LAB_00c5aedd;
      }
    }
    p_Var4 = F_00c5b301();
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = p_Var4;
    if (p_Var4 == (undefined *)0x0) {
      return -1;
    }
    uVar1 = F_00c5abd1(in_edx,(*(void * PTR32 *)(((char *)(p_Var4) + 92))));
    puVar3 = (uint *)(uVar1 + 8);
    (*(gen_code32 *)(gen_frame + 0x1c)) = (code *)*puVar3;
  }
  else {
    if ((*(int *)&gen_args[0]) == 0xf) {
      puVar3 = (uint *)&REFG(undefined4, 0x15d73a0);
      Ptr = REFG(undefined4, 0x15d73a0);
    }
    else if ((*(int *)&gen_args[0]) == 0x15) {
      puVar3 = (uint *)&REFG(undefined4, 0x15d7398);
      Ptr = REFG(undefined4, 0x15d7398);
    }
    else {
      if ((*(int *)&gen_args[0]) != 0x16) {
LAB_00c5aedd: ;
        piVar2 = F_00c51f85();
        *piVar2 = 0x16;
        F_00c4c305();
        return -1;
      }
LAB_00c5aeef: ;
      puVar3 = (uint *)&REFG(undefined4, 0x15d739c);
      Ptr = REFG(undefined4, 0x15d739c);
    }
LAB_00c5af11: ;
    (*(int *)(gen_frame + 0x20)) = 1;
    (*(gen_code32 *)(gen_frame + 0x1c)) = gen_imp_DecodePointer(Ptr);
  }
  if ((*(gen_code32 *)(gen_frame + 0x1c)) == (code *)0x1) {
    return 0;
  }
  if ((*(gen_code32 *)(gen_frame + 0x1c)) == (code *)0x0) {
                    
    F_00c47c71(3);
  }
  if ((*(int *)(gen_frame + 0x20)) != 0) {
    F_00c5aa4f(0);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  if (((in_edx == 8) || (in_edx == 0xb)) || (in_edx == 4)) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(void * PTR32 *)(((char *)(p_Var4) + 96)));
    (*(void * PTR32 *)(((char *)(p_Var4) + 96))) = (undefined *)0x0;
    if (in_edx == 8) {
      (*(int *)(gen_frame + 0xc)) = (*(int *)(((char *)(p_Var4) + 100)));
      (*(int *)(((char *)(p_Var4) + 100))) = 0x8c;
      goto LAB_00c5af75;
    }
  }
  else {
LAB_00c5af75: ;
    if (in_edx == 8) {
      for ((*(int *)(gen_frame + 0x18)) = REFG(int, 0x111a058); (*(int *)(gen_frame + 0x18)) < REFG(int, 0x111a05c) + REFG(int, 0x111a058); (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1)
      {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) * 0xc + 8 + (int)(*(void * PTR32 *)(((char *)(p_Var4) + 92)))))) = 0;
      }
      goto LAB_00c5afad;
    }
  }
  uVar1 = F_00c5b18d();
  *puVar3 = uVar1;
LAB_00c5afad: ;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0xfffffffe;
  F_00c5afce((gen_frame + 0x3c));
  if (in_edx == 8) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x1c)))(8,(*(int *)(((char *)(p_Var4) + 100))));
  }
  else {
    ((code *)(*(gen_code32 *)(gen_frame + 0x1c)))(in_edx);
    if ((in_edx != 0xb) && (in_edx != 4)) {
      return 0;
    }
  }
  (*(void * PTR32 *)(((char *)(p_Var4) + 96))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  if (in_edx == 8) {
    (*(int *)(((char *)(p_Var4) + 100))) = (*(int *)(gen_frame + 0xc));
  }
  return 0;
}

/* ref: FUN_00c5afc8 */
unsigned int F_00c5afc8(unsigned int gen_a0)
{
  GEN_ENTER(0xc5afc8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  if (*(int *)(in_ebp + -0x1c) != 0) {
    F_00c5a95e(0);
  }
  return 0;
}

/* ref: FUN_00c5afce */
unsigned int F_00c5afce(unsigned int gen_a0)
{
  GEN_ENTER(0xc5afceu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  if (*(int *)(in_ebp + -0x1c) != 0) {
    F_00c5a95e(0);
  }
  return 0;
}

/* ref: FUN_00c5b00a */
uint F_00c5b00a(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b00au, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d73a8) = param_1;
  return param_1;
}

/* ref: rand_s */
uint F_00c5b019(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b019u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  FARPROC Ptr;
  int * piVar1;
  HMODULE hModule;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  PVOID Value;
  uint uVar5;
  uint * puVar6;
  
  Ptr = gen_imp_DecodePointer(REFG(undefined4, 0x15d73a8));
  if (param_1 == (undefined4 *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *param_1 = 0;
  if (Ptr == (FARPROC)0x0) {
    hModule = gen_imp_LoadLibraryW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x1119f60)));
    if (hModule == (HMODULE)0x0) {
      piVar1 = F_00c51f85();
      *piVar1 = 0x16;
      F_00c4c305();
      return 0x16;
    }
    Ptr = gen_imp_GetProcAddress(hModule,"SystemFunction036");
    if (Ptr == (FARPROC)0x0) {
      piVar1 = F_00c51f85();
      DVar2 = gen_imp_GetLastError();
      iVar3 = F_00c51f43(DVar2);
      *piVar1 = iVar3;
      F_00c4c305();
      DVar2 = gen_imp_GetLastError();
      uVar4 = F_00c51f43(DVar2);
      return uVar4;
    }
    Value = gen_imp_EncodePointer(Ptr);
    uVar4 = F_00c5b18d();
    uVar5 = gen_imp_InterlockedExchange((LONG *)&REFG(undefined4, 0x15d73a8),(LONG)Value);
    if (uVar5 != uVar4) {
      gen_imp_FreeLibrary(hModule);
    }
  }
  uVar4 = ((code *)Ptr)(param_1,4);
  if (uVar4 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
    puVar6 = (uint *)F_00c51f85();
    uVar4 = *puVar6;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00c5b109 */
uint F_00c5b109(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b109u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d73ac) = param_1;
  return param_1;
}

/* ref: _set_new_handler */
code * F_00c5b118(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b118u, gen_a0, 0u, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  code * p_Var1;
  
  F_00c5aa4f(4);
  p_Var1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73ac));
  REFG(undefined4, 0x15d73ac) = gen_imp_EncodePointer(param_1);
  F_00c5a95e(4);
  return p_Var1;
}

/* ref: __callnewh */
int F_00c5b165(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b165u, gen_a0, 0u, 0u, 0u);
  gen_size32 _Size = (gen_size32)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73ac));
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(_Size);
    if (uVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c5b18d */
uint F_00c5b18d(void)
{
  GEN_ENTER(0xc5b18du, 0u, 0u, 0u, 0u);
  PVOID pvVar1;
  
  pvVar1 = gen_imp_EncodePointer((PVOID)0x0);
  return (uint)pvVar1;
}

/* ref: FUN_00c5b196 */
unsigned int F_00c5b196(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b196u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_TlsAlloc();
  return 0;
}

/* ref: ___fls_getvalue@4 */
uint F_00c5b19f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b19fu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274));
  uVar2 = (*pcVar1)(param_1);
  return uVar2;
}

/* ref: FUN_00c5b1b9 */
uint F_00c5b1b9(void)
{
  GEN_ENTER(0xc5b1b9u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x134b270);
}

/* ref: ___set_flsgetvalue */
uint F_00c5b1bf(void)
{
  GEN_ENTER(0xc5b1bfu, 0u, 0u, 0u, 0u);
  LPVOID lpTlsValue;
  
  lpTlsValue = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274));
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b4));
    gen_imp_TlsSetValue(REFG(undefined4, 0x134b274),lpTlsValue);
  }
  return (uint)lpTlsValue;
}

/* ref: ___fls_setvalue@8 */
uint F_00c5b1f3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5b1f3u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
  uVar2 = (*pcVar1)(param_1,param_2);
  return uVar2;
}

/* ref: __mtterm */
unsigned int F_00c5b210(void)
{
  GEN_ENTER(0xc5b210u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  int iVar2;
  
  if (REFG(int, 0x134b270) != -1) {
    iVar2 = REFG(int, 0x134b270);
    pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73bc));
    (*pcVar1)(iVar2);
    REFG(int, 0x134b270) = -1;
  }
  if (REFG(undefined4, 0x134b274) != 0xffffffff) {
    gen_imp_TlsFree(REFG(undefined4, 0x134b274));
    REFG(undefined4, 0x134b274) = 0xffffffff;
  }
  F_00c5a907();
  return 0;
}

/* ref: __initptd */
unsigned int F_00c5b24d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5b24du, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x1c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * p_Var1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f64a0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc5b259;
  gen_imp_GetModuleHandleW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x1119f7c)));
  p_Var1 = (*(undefined * PTR32 *)&gen_args[0]);
  (*((void * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 92))))) = &REFG(undefined, 0x1119fc8);
  (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 8))))) = 0;
  (*((ulong *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 20))))) = 1;
  (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 112))))) = 1;
  *((undefined1 *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 156) + 28))))) + 8))) = 0x43;
  *((undefined1 *)GEN_TOP(((int)(((wchar_t *)GEN_TOP(((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 156) + 28))))) + 0x93))) = 0x43;
  (*((undefined * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 104))))) = (undefined *)&REFG(undefined, 0x134b2c0);
  F_00c5aa4f(0xd);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  gen_imp_InterlockedIncrement(&(*(int *)((char *)(*(undefined * PTR32 *)(((char *)(p_Var1) + 104))))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
  F_00c5b2ef();
  F_00c5aa4f(0xc);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  (*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    (*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) = (undefined *)REFG(undefined * PTR32, 0x134ba28);
  }
  F_00c5cb36((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
  F_00c5b2f8();
  return 0;
}

/* ref: FUN_00c5b2e9 */
uint F_00c5b2e9(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b2e9u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b2ef */
uint F_00c5b2ef(void)
{
  GEN_ENTER(0xc5b2efu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b2f8 */
uint F_00c5b2f8(void)
{
  GEN_ENTER(0xc5b2f8u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: __getptd_noexit */
undefined * F_00c5b301(void)
{
  GEN_ENTER(0xc5b301u, 0u, 0u, 0u, 0u);
  DWORD dwErrCode;
  code * pcVar1;
  undefined * _Ptd;
  uint uVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined * p_Var5;
  
  dwErrCode = gen_imp_GetLastError();
  uVar4 = REFG(undefined4, 0x134b270);
  pcVar1 = (code *)F_00c5b1bf();
  _Ptd = ((undefined *)GEN_TOP((*pcVar1)(uVar4)));
  if (_Ptd == (undefined *)0x0) {
    _Ptd = F_00c54c73(1,0x214);
    if (_Ptd != (undefined *)0x0) {
      uVar4 = REFG(undefined4, 0x134b270);
      p_Var5 = _Ptd;
      pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
      uVar2 = (*pcVar1)(uVar4,p_Var5);
      if (uVar2 == 0) {
        F_00c4c68f(_Ptd);
        _Ptd = (undefined *)0x0;
      }
      else {
        F_00c5b24d(_Ptd,(undefined *)0x0);
        DVar3 = gen_imp_GetCurrentThreadId();
        (*(uint *)(((char *)(_Ptd) + 4))) = 0xffffffff;
        (*(ulong *)((char *)(_Ptd))) = DVar3;
      }
    }
  }
  gen_imp_SetLastError(dwErrCode);
  return _Ptd;
}

/* ref: __getptd */
undefined * F_00c5b37a(void)
{
  GEN_ENTER(0xc5b37au, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == (undefined *)0x0) {
                    
    F_00c47ca5(0x10);
  }
  return p_Var1;
}

/* ref: __freefls@4 */
uint F_00c5b394(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b394u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x18];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  LONG * lpAddend;
  int * piVar1;
  undefined * _Memory;
  uint in_EAX = 0;
  LONG LVar2;
  uint extraout_EAX = 0;
  
  _Memory = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f64c8);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc5b3a0;
  if ((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != (undefined *)0x0) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x2c) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x2c));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x34) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x34));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x3c) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x3c));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x40) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x40));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x44) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x44));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x48) != (undefined *)0x0) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x48));
    }
    if (*(undefined * PTR32 *)((int)_Memory + 0x5c) != &REFG(undefined, 0x1119fc8)) {
      F_00c4c68f(*(undefined * PTR32 *)((int)_Memory + 0x5c));
    }
    F_00c5aa4f(0xd);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    lpAddend = *(LONG * PTR32 *)((int)_Memory + 0x68);
    if (lpAddend != (LONG *)0x0) {
      LVar2 = gen_imp_InterlockedDecrement(lpAddend);
      if ((LVar2 == 0) && (lpAddend != (LONG *)&REFG(undefined, 0x134b2c0))) {
        F_00c4c68f(lpAddend);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    F_00c5b4ae();
    F_00c5aa4f(0xc);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
    piVar1 = *(int * PTR32 *)((int)_Memory + 0x6c);
    if (piVar1 != (int *)0x0) {
      F_00c5cbc5(piVar1);
      if (((piVar1 != (int *)REFG(undefined * PTR32, 0x134ba28)) && (piVar1 != (int *)&REFG(undefined, 0x134b950))) &&
         (*piVar1 == 0)) {
        F_00c5cc5e(piVar1);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    F_00c5b4ba();
    F_00c4c68f(_Memory);
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}

/* ref: FUN_00c5b4ab */
uint F_00c5b4ab(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b4abu, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b4ae */
uint F_00c5b4ae(void)
{
  GEN_ENTER(0xc5b4aeu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b4b7 */
uint F_00c5b4b7(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b4b7u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c5b4ba */
uint F_00c5b4ba(void)
{
  GEN_ENTER(0xc5b4bau, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: __freeptd */
unsigned int F_00c5b4c3(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b4c3u, gen_a0, 0u, 0u, 0u);
  undefined * _Ptd = (undefined *)(uintptr_t)gen_a0;
  LPVOID pvVar1;
  code * pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (REFG(int, 0x134b270) != -1) {
    if ((_Ptd == (undefined *)0x0) && (pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274)), pvVar1 != (LPVOID)0x0)) {
      iVar3 = REFG(int, 0x134b270);
      pcVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274));
      _Ptd = ((undefined *)GEN_TOP((*pcVar2)(iVar3)));
    }
    uVar4 = 0;
    iVar3 = REFG(int, 0x134b270);
    pcVar2 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
    (*pcVar2)(iVar3,uVar4);
    F_00c5b394(_Ptd);
  }
  if (REFG(undefined4, 0x134b274) != 0xffffffff) {
    gen_imp_TlsSetValue(REFG(undefined4, 0x134b274),(LPVOID)0x0);
  }
  return 0;
}

/* ref: __mtinit */
int F_00c5b53d(void)
{
  GEN_ENTER(0xc5b53du, 0u, 0u, 0u, 0u);
  HMODULE pHVar1;
  BOOL BVar2;
  int iVar3;
  code * pcVar4;
  undefined * _Ptd;
  uint uVar5;
  DWORD DVar6;
  code * pcVar7;
  undefined * p_Var8;
  
  pHVar1 = gen_imp_GetModuleHandleW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x1119f7c)));
  if (pHVar1 == (HMODULE)0x0) {
    F_00c5b210();
    return 0;
  }
  REFG(undefined4, 0x15d73b0) = gen_imp_GetProcAddress(pHVar1,"FlsAlloc");
  REFG(undefined4, 0x15d73b4) = gen_imp_GetProcAddress(pHVar1,"FlsGetValue");
  REFG(undefined4, 0x15d73b8) = gen_imp_GetProcAddress(pHVar1,"FlsSetValue");
  REFG(undefined4, 0x15d73bc) = gen_imp_GetProcAddress(pHVar1,"FlsFree");
  if ((((REFG(undefined4, 0x15d73b0) == (FARPROC)0x0) || (REFG(undefined4, 0x15d73b4) == (FARPROC)0x0)) ||
      (REFG(undefined4, 0x15d73b8) == (FARPROC)0x0)) || (REFG(undefined4, 0x15d73bc) == (FARPROC)0x0)) {
    REFG(undefined4, 0x15d73b4) = (((code *)GEN_TOP(gen_imp_TlsGetValue)));
    REFG(undefined4, 0x15d73b0) = ((code *)REFP(0xc5b196));
    REFG(undefined4, 0x15d73b8) = (((code *)GEN_TOP(gen_imp_TlsSetValue)));
    REFG(undefined4, 0x15d73bc) = (((code *)GEN_TOP(gen_imp_TlsFree)));
  }
  REFG(undefined4, 0x134b274) = gen_imp_TlsAlloc();
  if ((REFG(undefined4, 0x134b274) != 0xffffffff) && (BVar2 = gen_imp_TlsSetValue(REFG(undefined4, 0x134b274),REFG(undefined4, 0x15d73b4)), BVar2 != 0))
  {
    F_00c479b0();
    REFG(undefined4, 0x15d73b0) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73b0));
    REFG(undefined4, 0x15d73b4) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73b4));
    REFG(undefined4, 0x15d73b8) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73b8));
    REFG(undefined4, 0x15d73bc) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73bc));
    iVar3 = F_00c5a8bd();
    if (iVar3 != 0) {
      pcVar7 = ((code *)REFP(0xc5b394));
      pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b0));
      REFG(undefined4, 0x134b270) = (*pcVar4)(pcVar7);
      if ((REFG(undefined4, 0x134b270) != 0xffffffff) && (_Ptd = F_00c54c73(1,0x214), _Ptd != (undefined *)0x0)) {
        uVar5 = REFG(undefined4, 0x134b270);
        p_Var8 = _Ptd;
        pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
        uVar5 = (*pcVar4)(uVar5,p_Var8);
        if (uVar5 != 0) {
          F_00c5b24d(_Ptd,(undefined *)0x0);
          DVar6 = gen_imp_GetCurrentThreadId();
          (*(uint *)(((char *)(_Ptd) + 4))) = 0xffffffff;
          (*(ulong *)((char *)(_Ptd))) = DVar6;
          return 1;
        }
      }
    }
    F_00c5b210();
  }
  return 0;
}

/* ref: __RTC_Initialize */
unsigned int F_00c5b6b8(void)
{
  GEN_ENTER(0xc5b6b8u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c5b6de */
unsigned int F_00c5b6de(void)
{
  GEN_ENTER(0xc5b6deu, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: __ValidateImageBase */
BOOL F_00c5b710(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b710u, gen_a0, 0u, 0u, 0u);
  GEN_LPANY pImageBase = (GEN_LPANY)gen_a0;
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*((int *)GEN_TOP((pImageBase + *(int *)(pImageBase + 0x3c)))) == 0x4550)) {
    return (uint)((short)*((int *)GEN_TOP(((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18))) == 0x10b);
  }
  return 0;
}

/* ref: __FindPESection */
GEN_LPANY F_00c5b750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5b750u, gen_a0, gen_a1, 0u, 0u);
  GEN_LPANY pImageBase = (GEN_LPANY)gen_a0;
  DWORD_PTR rva = (DWORD_PTR)gen_a1;
  int iVar1;
  GEN_LPANY p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (GEN_LPANY)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if (((*(DWORD *)(((char *)(p_Var2) + 12))) <= rva) &&
         (rva < (*(DWORD *)(((char *)(p_Var2) + 8))) + (*(DWORD *)(((char *)(p_Var2) + 12))))) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + (1) * 40;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (GEN_LPANY)0x0;
}

/* ref: __IsNonwritableInCurrentImage */
BOOL F_00c5b7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b7a0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  BOOL BVar1;
  GEN_LPANY p_Var2;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xfffffffe;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f64f0);
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)(REFG(undefined4, 0x134ab78) ^ 0x12f64f0);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (BOOL)(uintptr_t)gen_eh_resume(); }
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  BVar1 = F_00c5b710((GEN_LPANY)&(*(undefined (*)[128])REFP(0x400000)));
  if (BVar1 != 0) {
    p_Var2 = F_00c5b750((GEN_LPANY)&(*(undefined (*)[128])REFP(0x400000)),(DWORD_PTR)((*(GEN_LPANY *)&gen_args[0]) + -0x400000));
    if (p_Var2 != (GEN_LPANY)0x0) {
      (*(undefined4 *)(gen_frame + 0x28)) = 0xfffffffe;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      return ~((*(DWORD *)(((char *)(p_Var2) + 36))) >> 0x1f) & 1;
    }
  }
  (*(undefined4 *)(gen_frame + 0x28)) = 0xfffffffe;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00c5b82b */
uint F_00c5b82b(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b82bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  return (uint)(*((int *)GEN_TOP(**(undefined4 * PTR32 *)(in_ebp + -0x14))) == -0x3ffffffb);
}

/* ref: FUN_00c5b83e */
undefined4 F_00c5b83e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b83eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(in_ebp + -0x10);
  return 0;
}

/* ref: __msize */
gen_size32 F_00c5b8b9(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b8b9u, gen_a0, 0u, 0u, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  SIZE_T SVar2;
  
  if (_Memory == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  SVar2 = gen_imp_HeapSize(REFG(undefined4, 0x15d74c8),0,_Memory);
  return SVar2;
}

/* ref: __CxxUnhandledExceptionFilter */
long F_00c5b8ec(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b8ecu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  GEN_LPANY pEVar1;
  ULONG_PTR UVar2;
  
  pEVar1 = (*(undefined * PTR32 *)((char *)(param_1)));
  if ((((*(DWORD *)((char *)(pEVar1))) == 0xe06d7363) && ((*(DWORD *)(((char *)(pEVar1) + 16))) == 3)) &&
     ((UVar2 = (*((ULONG_PTR *)GEN_TOP(((((char *)(pEVar1) + 20) + (0) * 4))))), UVar2 == 0x19930520 ||
      (((UVar2 == 0x19930521 || (UVar2 == 0x19930522)) || (UVar2 == 0x1994000)))))) {
                    
    F_00c5aa82();
  }
  return 0;
}

/* ref: FUN_00c5b92e */
uint F_00c5b92e(void)
{
  GEN_ENTER(0xc5b92eu, 0u, 0u, 0u, 0u);
  gen_imp_SetUnhandledExceptionFilter(((code *)REFP(0xc5b8ec)));
  return 0;
}

/* ref: __XcptFilter */
int F_00c5b962(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5b962u, gen_a0, gen_a1, 0u, 0u);
  ulong _ExceptionNum = (ulong)gen_a0;
  undefined * _ExceptionPtr = (undefined *)(uintptr_t)gen_a1;
  ulong * puVar1;
  code * pcVar2;
  undefined * pvVar3;
  ulong uVar4;
  undefined * p_Var5;
  ulong * puVar6;
  int iVar7;
  
  p_Var5 = F_00c5b301();
  iVar7 = 0;
  if (p_Var5 != (undefined *)0x0) {
    puVar1 = (*(void * PTR32 *)(((char *)(p_Var5) + 92)));
    puVar6 = puVar1;
    do {
      if (*puVar6 == _ExceptionNum) break;
      puVar6 = puVar6 + 3;
    } while (puVar6 < puVar1 + 0x24);
    if ((puVar1 + 0x24 <= puVar6) || (*puVar6 != _ExceptionNum)) {
      puVar6 = (ulong *)0x0;
    }
    if ((puVar6 == (ulong *)0x0) || (pcVar2 = (code *)puVar6[2], pcVar2 == (code *)0x0)) {
      iVar7 = 0;
    }
    else if (pcVar2 == (code *)&REFG(undefined, 0x5)) {
      puVar6[2] = 0;
      iVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        pvVar3 = (*(void * PTR32 *)(((char *)(p_Var5) + 96)));
        (*(void * PTR32 *)(((char *)(p_Var5) + 96))) = _ExceptionPtr;
        if (puVar6[1] == 8) {
          iVar7 = 0x24;
          do {
            *((undefined4 *)GEN_TOP((iVar7 + 8 + (int)(*(void * PTR32 *)(((char *)(p_Var5) + 92)))))) = 0;
            iVar7 = iVar7 + 0xc;
          } while (iVar7 < 0x90);
          uVar4 = *puVar6;
          iVar7 = (*(int *)(((char *)(p_Var5) + 100)));
          if (uVar4 == 0xc000008e) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x83;
          }
          else if (uVar4 == 0xc0000090) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x81;
          }
          else if (uVar4 == 0xc0000091) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x84;
          }
          else if (uVar4 == 0xc0000093) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x85;
          }
          else if (uVar4 == 0xc000008d) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x82;
          }
          else if (uVar4 == 0xc000008f) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x86;
          }
          else if (uVar4 == 0xc0000092) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x8a;
          }
          else if (uVar4 == 0xc00002b5) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x8d;
          }
          else if (uVar4 == 0xc00002b4) {
            (*(int *)(((char *)(p_Var5) + 100))) = 0x8e;
          }
          (*pcVar2)(8,(*(int *)(((char *)(p_Var5) + 100))));
          (*(int *)(((char *)(p_Var5) + 100))) = iVar7;
        }
        else {
          puVar6[2] = 0;
          (*pcVar2)(puVar6[1]);
        }
        (*(void * PTR32 *)(((char *)(p_Var5) + 96))) = pvVar3;
      }
      iVar7 = -1;
    }
  }
  return iVar7;
}

/* ref: ___CppXcptFilter */
int F_00c5baac(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5baacu, gen_a0, gen_a1, 0u, 0u);
  ulong _ExceptionNum = (ulong)gen_a0;
  undefined * _ExceptionPtr = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (_ExceptionNum == 0xe06d7363) {
    iVar1 = F_00c5b962(0xe06d7363,_ExceptionPtr);
    return iVar1;
  }
  return 0;
}

/* ref: __wincmdln */
uint F_00c5bacc(void)
{
  GEN_ENTER(0xc5baccu, 0u, 0u, 0u, 0u);
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte * pbVar4;
  
  bVar2 = false;
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5cb18();
  }
  pbVar4 = REFG(undefined4, 0x15e52cc);
  if (REFG(undefined4, 0x15e52cc) == (byte *)0x0) {
    pbVar4 = &REFG(undefined1, 0x107fc63);
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return (uint)pbVar4;
      }
      if (!bVar2) {
        for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        return (uint)pbVar4;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = F_00c7b540((uint)bVar1);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}

/* ref: FUN_00c5bb2b */
uint F_00c5bb2b(void)
{
  GEN_ENTER(0xc5bb2bu, 0u, 0u, 0u, 0u);
  undefined4 * in_edi;
  gen_size32 sVar1;
  undefined * pvVar2;
  int eVar3;
  char * pcVar4;
  int iVar5;
  
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5cb18();
  }
  iVar5 = 0;
  pcVar4 = REFG(undefined4, 0x15d6864);
  if (REFG(undefined4, 0x15d6864) != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar1 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar1 = F_00c552f0(pcVar4);
    }
    in_edi = F_00c54c73(iVar5 + 1,4);
    pcVar4 = REFG(undefined4, 0x15d6864);
    REFG(undefined4, 0x15d6840) = in_edi;
    if (in_edi != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          F_00c4c68f(REFG(undefined4, 0x15d6864));
          REFG(undefined4, 0x15d6864) = (char *)0x0;
          *in_edi = 0;
          REFG(undefined4, 0x15e52d4) = 1;
          return 0;
        }
        sVar1 = F_00c552f0(pcVar4);
        sVar1 = sVar1 + 1;
        if (*pcVar4 != '=') {
          pvVar2 = F_00c54c73(sVar1,1);
          *in_edi = pvVar2;
          if (pvVar2 == (undefined *)0x0) {
            F_00c4c68f(REFG(undefined4, 0x15d6840));
            REFG(undefined4, 0x15d6840) = (undefined4 *)0x0;
            return 0xffffffff;
          }
          eVar3 = F_00c49908(pvVar2,sVar1,pcVar4);
          if (eVar3 != 0) {
                    
            F_00c4c299(in_edi,0,0,0,0,0);
          }
          in_edi = in_edi + 1;
        }
        pcVar4 = pcVar4 + sVar1;
      } while( true );
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c5bc07 */
uint F_00c5bc07(unsigned int gen_a0)
{
  GEN_ENTER(0xc5bc07u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d6850) = param_1;
  return param_1;
}

/* ref: parse_cmdline */
unsigned int F_00c5bc16(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5bc16u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * in_edx = (byte *)(uintptr_t)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  byte bVar6;
  byte * pbVar7;
  byte * pbVar8;
  
  *in_edi = 0;
  *param_5 = 1;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_4;
    param_3 = param_3 + 1;
  }
  bVar2 = false;
  pbVar5 = param_4;
  do {
    if (*in_edx == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_edx + 1;
    }
    else {
      *in_edi = *in_edi + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_edx;
        param_4 = pbVar5 + 1;
      }
      bVar6 = *in_edx;
      pbVar7 = in_edx + 1;
      iVar3 = F_00c7b540((uint)bVar6);
      if (iVar3 != 0) {
        *in_edi = *in_edi + 1;
        if (param_4 != (byte *)0x0) {
          *param_4 = *pbVar7;
          param_4 = param_4 + 1;
        }
        pbVar7 = in_edx + 2;
      }
      pbVar5 = param_4;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_00c5bcaa;
      }
    }
    in_edx = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_00c5bcaa: ;
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = pbVar5;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *in_edi = *in_edi + 1;
        param_4 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = F_00c7b540((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *in_edi = *in_edi + 1;
          }
        }
        else {
          iVar3 = F_00c7b540((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_4 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *in_edi = *in_edi + 1;
            param_4 = param_4 + 1;
          }
          *param_4 = *pbVar7;
          param_4 = param_4 + 1;
        }
        *in_edi = *in_edi + 1;
        pbVar5 = param_4;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_4 = pbVar5;
    }
    *in_edi = *in_edi + 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  *param_5 = *param_5 + 1;
  return 0;
}

/* ref: __setargv */
int F_00c5bdb0(void)
{
  GEN_ENTER(0xc5bdb0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint _Size;
  undefined * pvVar1;
  int iVar2;
  
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5cb18();
  }
  REFG(undefined4, 0x15d74c4) = 0;
  gen_imp_GetModuleFileNameA((HMODULE)0x0,&REFG(undefined, 0x15d73c0),0x104);
  REFG(undefined4, 0x15d6850) = &REFG(undefined, 0x15d73c0);
  if ((REFG(undefined4, 0x15e52cc) == (char *)0x0) || ((*(char * PTR32 *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e52cc), *REFG(int * PTR32, 0x15e52cc) == '\0')) {
    (*(char * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x15d73c0);
  }
  F_00c5bc16((*(char * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)),0,0,&(*(uint *)(gen_frame + 0x4)));
  if (((*(uint *)(gen_frame + 0x4)) < 0x3fffffff) && ((*(uint *)(gen_frame + 0x0)) != 0xffffffff)) {
    iVar2 = (*(uint *)(gen_frame + 0x4)) * 4;
    _Size = iVar2 + (*(uint *)(gen_frame + 0x0));
    if (((*(uint *)(gen_frame + 0x0)) <= _Size) && (pvVar1 = F_00c54c2e(_Size), pvVar1 != (undefined *)0x0)) {
      F_00c5bc16((*(char * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)),pvVar1,(undefined *)(iVar2 + (int)pvVar1),&(*(uint *)(gen_frame + 0x4)));
      REFG(int, 0x15d6834) = (*(uint *)(gen_frame + 0x4)) - 1;
      REFG(undefined4, 0x15d6838) = pvVar1;
      return 0;
    }
  }
  return -1;
}

/* ref: ___crtGetEnvironmentStringsA */
LPVOID F_00c5be6b(void)
{
  GEN_ENTER(0xc5be6bu, 0u, 0u, 0u, 0u);
  WCHAR WVar1;
  LPWSTR pWVar2;
  WCHAR * pWVar3;
  int iVar5;
  gen_size32 _Size;
  undefined * local_8;
  WCHAR * pWVar4;
  
  pWVar2 = gen_imp_GetEnvironmentStringsW();
  if (pWVar2 == (LPWSTR)0x0) {
    local_8 = (LPVOID)0x0;
  }
  else {
    WVar1 = *pWVar2;
    pWVar3 = pWVar2;
    while (WVar1 != L'\0') {
      do {
        pWVar4 = pWVar3;
        pWVar3 = pWVar4 + 1;
      } while (*pWVar3 != L'\0');
      pWVar3 = pWVar4 + 2;
      WVar1 = *pWVar3;
    }
    iVar5 = ((int)pWVar3 - (int)pWVar2 >> 1) + 1;
    _Size = gen_imp_WideCharToMultiByte(0,0,pWVar2,iVar5,0,0,0,0);
    if ((_Size == 0) || (local_8 = F_00c54c2e(_Size), local_8 == (undefined *)0x0)) {
      gen_imp_FreeEnvironmentStringsW(pWVar2);
      local_8 = (LPVOID)0x0;
    }
    else {
      iVar5 = gen_imp_WideCharToMultiByte(0,0,pWVar2,iVar5,local_8,_Size,0,0);
      if (iVar5 == 0) {
        F_00c4c68f(local_8);
        local_8 = (undefined *)0x0;
      }
      gen_imp_FreeEnvironmentStringsW(pWVar2);
    }
  }
  return local_8;
}

/* ref: __ioinit */
int F_00c5bf02(void)
{
  GEN_ENTER(0xc5bf02u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pvVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  UINT UVar6;
  UINT UVar7;
  undefined4 * puVar8;
  int * piVar9;
  uint uVar10;
  
  gen_imp_GetStartupInfoW((GEN_LPANY)((byte *)(gen_frame + 0x0)));
  pvVar1 = F_00c54c73(0x20,0x40);
  if (pvVar1 == (undefined *)0x0) {
    iVar2 = -1;
  }
  else {
    REFG(undefined4, 0x15e4190) = 0x20;
    REFG(undefined4, 0x15e41a0) = pvVar1;
    if (pvVar1 < (undefined *)((int)pvVar1 + 0x800U)) {
      iVar2 = (int)pvVar1 + 5;
      do {
        *(undefined4 *)(iVar2 + -5) = 0xffffffff;
        *(undefined2 *)(iVar2 + -1) = 0xa00;
        *(undefined4 *)(iVar2 + 3) = 0;
        *(undefined2 *)(iVar2 + 0x1f) = 0xa00;
        *(undefined1 *)(iVar2 + 0x21) = 10;
        *(undefined4 *)(iVar2 + 0x33) = 0;
        *(undefined1 *)(iVar2 + 0x2f) = 0;
        uVar10 = iVar2 + 0x3b;
        iVar2 = iVar2 + 0x40;
      } while (uVar10 < (int)REFG(undefined4, 0x15e41a0) + 0x800U);
    }
    if (((*(undefined2 *)((char *)((byte *)(gen_frame + 0x0)) + 50)) != 0) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) != 0)) {
      UVar6 = *(UINT *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52));
      (*(byte * PTR32 *)(gen_frame + 0x48)) = ((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) + 4)));
      (*(byte * PTR32 *)(gen_frame + 0x44)) = ((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) + 4))) + UVar6;
      if (0x7ff < (int)UVar6) {
        UVar6 = 0x800;
      }
      UVar7 = UVar6;
      if ((int)REFG(undefined4, 0x15e4190) < (int)UVar6) {
        piVar9 = &REFG(undefined4, 0x15e41a4);
        do {
          pvVar1 = F_00c54c73(0x20,0x40);
          UVar7 = REFG(undefined4, 0x15e4190);
          if (pvVar1 == (undefined *)0x0) break;
          REFG(undefined4, 0x15e4190) = REFG(undefined4, 0x15e4190) + 0x20;
          *piVar9 = (int)pvVar1;
          if (pvVar1 < (undefined *)((int)pvVar1 + 0x800U)) {
            iVar2 = (int)pvVar1 + 5;
            do {
              *(undefined4 *)(iVar2 + -5) = 0xffffffff;
              *(undefined4 *)(iVar2 + 3) = 0;
              *(byte *)(iVar2 + 0x1f) = *(byte *)(iVar2 + 0x1f) & 0x80;
              *(undefined4 *)(iVar2 + 0x33) = 0;
              *(undefined2 *)(iVar2 + -1) = 0xa00;
              *(undefined2 *)(iVar2 + 0x20) = 0xa0a;
              *(undefined1 *)(iVar2 + 0x2f) = 0;
              uVar10 = iVar2 + 0x3b;
              iVar2 = iVar2 + 0x40;
            } while (uVar10 < *piVar9 + 0x800U);
          }
          piVar9 = piVar9 + 1;
          UVar7 = UVar6;
        } while ((int)REFG(undefined4, 0x15e4190) < (int)UVar6);
      }
      uVar10 = 0;
      if (0 < (int)UVar7) {
        do {
          pvVar5 = *(HANDLE *)(*(byte * PTR32 *)(gen_frame + 0x44));
          if ((((pvVar5 != (HANDLE)0xffffffff) && (pvVar5 != (HANDLE)0xfffffffe)) &&
              ((*(*(byte * PTR32 *)(gen_frame + 0x48)) & 1) != 0)) &&
             (((*(*(byte * PTR32 *)(gen_frame + 0x48)) & 8) != 0 || (DVar3 = gen_imp_GetFileType(pvVar5), DVar3 != 0)))) {
            puVar8 = ((undefined4 *)GEN_TOP(((uVar10 & 0x1f) * 0x40 + (int)(&REFG(undefined4, 0x15e41a0))[(int)uVar10 >> 5])))
            ;
            *puVar8 = *(undefined4 *)(*(byte * PTR32 *)(gen_frame + 0x44));
            *(byte *)(puVar8 + 1) = *(*(byte * PTR32 *)(gen_frame + 0x48));
            BVar4 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar8 + 3),4000);
            if (BVar4 == 0) {
              return -1;
            }
            puVar8[2] = puVar8[2] + 1;
          }
          (*(byte * PTR32 *)(gen_frame + 0x44)) = (*(byte * PTR32 *)(gen_frame + 0x44)) + 4;
          uVar10 = uVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x48)) = (*(byte * PTR32 *)(gen_frame + 0x48)) + 1;
        } while ((int)uVar10 < (int)UVar7);
      }
    }
    iVar2 = 0;
    do {
      piVar9 = (int *)(iVar2 * 0x40 + (int)REFG(undefined4, 0x15e41a0));
      if ((*piVar9 == -1) || (*piVar9 == -2)) {
        *(undefined1 *)(piVar9 + 1) = 0x81;
        if (iVar2 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar2 != 1);
        }
        pvVar5 = gen_imp_GetStdHandle(DVar3);
        if (((pvVar5 == (HANDLE)0xffffffff) || (pvVar5 == (HANDLE)0x0)) ||
           (DVar3 = gen_imp_GetFileType(pvVar5), DVar3 == 0)) {
          *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          *piVar9 = -2;
        }
        else {
          *piVar9 = (int)pvVar5;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 8;
          }
          BVar4 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(piVar9 + 3),4000);
          if (BVar4 == 0) {
            return -1;
          }
          piVar9[2] = piVar9[2] + 1;
        }
      }
      else {
        *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x80;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    gen_imp_SetHandleCount(REFG(undefined4, 0x15e4190));
    iVar2 = 0;
  }
  return iVar2;
}

/* ref: __heap_init */
int F_00c5c19a(void)
{
  GEN_ENTER(0xc5c19au, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x15d74c8) = gen_imp_HeapCreate(0,0x1000,0);
  return (uint)(REFG(undefined4, 0x15d74c8) != (HANDLE)0x0);
}

/* ref: ___security_init_cookie */
unsigned int F_00c5c1d2(void)
{
  GEN_ENTER(0xc5c1d2u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER LStack_14;
  
  (*(_FILETIME *)(gen_frame + 0x4)).dwLowDateTime = 0;
  (*(_FILETIME *)(gen_frame + 0x4)).dwHighDateTime = 0;
  if ((REFG(undefined4, 0x134ab78) == 0xbb40e64e) || ((REFG(undefined4, 0x134ab78) & 0xffff0000) == 0)) {
    gen_imp_GetSystemTimeAsFileTime(&(*(_FILETIME *)(gen_frame + 0x4)));
    uVar4 = (*(_FILETIME *)(gen_frame + 0x4)).dwHighDateTime ^ (*(_FILETIME *)(gen_frame + 0x4)).dwLowDateTime;
    DVar1 = gen_imp_GetCurrentProcessId();
    DVar2 = gen_imp_GetCurrentThreadId();
    DVar3 = gen_imp_GetTickCount();
    gen_imp_QueryPerformanceCounter(&LStack_14);
    REFG(undefined4, 0x134ab78) = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ LStack_14.s.HighPart ^ LStack_14.s.LowPart;
    if (REFG(undefined4, 0x134ab78) == 0xbb40e64e) {
      REFG(undefined4, 0x134ab78) = 0xbb40e64f;
    }
    else if ((REFG(undefined4, 0x134ab78) & 0xffff0000) == 0) {
      REFG(undefined4, 0x134ab78) = REFG(undefined4, 0x134ab78) | (REFG(undefined4, 0x134ab78) | 0x4711) << 0x10;
    }
  }
  REFG(undefined4, 0x134ab7c) = ~REFG(undefined4, 0x134ab78);
  return 0;
}

/* ref: __is_LFH_enabled */
uint F_00c5c26d(void)
{
  GEN_ENTER(0xc5c26du, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  (*(int *)(gen_frame + 0x8)) = -1;
  BVar1 = gen_imp_HeapQueryInformation(REFG(undefined4, 0x15d74c8),HeapCompatibilityInformation,&(*(int *)(gen_frame + 0x8)),4,(GEN_LPANY)0x0);
  if ((BVar1 != 0) && ((*(int *)(gen_frame + 0x8)) == 2)) {
    return 1;
  }
  return 0;
}

/* ref: __expand */
undefined * F_00c5c2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5c2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _NewSize = (gen_size32)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  SIZE_T SVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  
  if (_Memory == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return (undefined *)0x0;
  }
  if (_NewSize < 0xffffffe1) {
    if (_NewSize == 0) {
      _NewSize = 1;
    }
    SVar3 = gen_imp_HeapSize(REFG(undefined4, 0x15d74c8),0,_Memory);
    pvVar2 = gen_imp_HeapReAlloc(REFG(undefined4, 0x15d74c8),0x10,_Memory,_NewSize);
    if (pvVar2 == (LPVOID)0x0) {
      if ((SVar3 < 0x4001) && (_NewSize <= SVar3)) {
        (*(int *)(gen_frame + 0x8)) = -1;
        BVar4 = gen_imp_HeapQueryInformation(REFG(undefined4, 0x15d74c8),HeapCompatibilityInformation,&(*(int *)(gen_frame + 0x8)),4,(GEN_LPANY)0x0);
        if ((BVar4 != 0) && ((*(int *)(gen_frame + 0x8)) == 2)) {
          return _Memory;
        }
      }
      piVar1 = F_00c51f85();
      DVar5 = gen_imp_GetLastError();
      iVar6 = F_00c51f43(DVar5);
      *piVar1 = iVar6;
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
    pvVar2 = (undefined *)0x0;
  }
  return pvVar2;
}

/* ref: __VEC_memzero */
ulonglong F_00c5c35a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5c35au, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  gen_v16 * pauVar2;
  uint uVar3;
  
  pauVar2 = param_1;
  if (((uint)param_1 & 0xf) != 0) {
    uVar3 = 0x10 - ((uint)param_1 & 0xf);
    param_2 = param_2 - uVar3;
    for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      (*pauVar2)[0] = 0;
      pauVar2 = (gen_v16 *)(*pauVar2 + 1);
    }
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)*pauVar2 = 0;
      pauVar2 = (gen_v16 *)(*pauVar2 + 4);
    }
  }
  for (uVar1 = param_2 >> 7; uVar1 != 0; uVar1 = uVar1 - 1) {
    GEN_V16_SET(*pauVar2, 0x0);
    GEN_V16_SET(pauVar2[1], 0x0);
    GEN_V16_SET(pauVar2[2], 0x0);
    GEN_V16_SET(pauVar2[3], 0x0);
    GEN_V16_SET(pauVar2[4], 0x0);
    GEN_V16_SET(pauVar2[5], 0x0);
    GEN_V16_SET(pauVar2[6], 0x0);
    GEN_V16_SET(pauVar2[7], 0x0);
    pauVar2 = pauVar2 + 8;
  }
  if ((param_2 & 0x7f) != 0) {
    for (uVar1 = (param_2 & 0x7f) >> 4; uVar1 != 0; uVar1 = uVar1 - 1) {
      GEN_V16_SET(*pauVar2, 0x0);
      pauVar2 = pauVar2 + 1;
    }
    if ((param_2 & 0xf) != 0) {
      for (uVar1 = (param_2 & 0xf) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)*pauVar2 = 0;
        pauVar2 = (gen_v16 *)(*pauVar2 + 4);
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        (*pauVar2)[0] = 0;
        pauVar2 = (gen_v16 *)(*pauVar2 + 1);
      }
    }
  }
  return ZEXT48(param_1);
}

/* ref: CPtoLCID */
int F_00c5c414(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c414u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  if (in_eax == 0x3a4) {
    return 0x411;
  }
  if (in_eax == 0x3a8) {
    return 0x804;
  }
  if (in_eax == 0x3b5) {
    return 0x412;
  }
  if (in_eax != 0x3b6) {
    return 0;
  }
  return 0x404;
}

/* ref: setSBCS */
unsigned int F_00c5c443(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c443u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined1 * puVar1;
  int iVar2;
  
  F_00c48350((undefined *)(in_eax + 0x1c),0,0x101);
  *(undefined4 *)(in_eax + 4) = 0;
  *(undefined4 *)(in_eax + 8) = 0;
  *(undefined4 *)(in_eax + 0xc) = 0;
  *(undefined4 *)(in_eax + 0x10) = 0;
  *(undefined4 *)(in_eax + 0x14) = 0;
  *(undefined4 *)(in_eax + 0x18) = 0;
  puVar1 = (undefined1 *)(in_eax + 0x1c);
  iVar2 = 0x101;
  do {
    *puVar1 = puVar1[(int)&REFG(undefined, 0x134b2c0) - in_eax];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_eax + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&REFG(undefined, 0x134b2c0) - in_eax];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: setSBUpLow */
uint F_00c5c4a7(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c4a7u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x510];
  byte * pbVar1;
  BOOL BVar2;
  uint uVar3;
  char * pcVar4;
  char cVar5;
  BYTE * pBVar6;
  undefined _Stack_51c[20];
  
  (*(uint *)(gen_frame + 0x508)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50c);
  BVar2 = gen_imp_GetCPInfo(*(UINT *)(in_esi + 4),&_Stack_51c);
  if (BVar2 == 0) {
    uVar3 = 0;
    do {
      pcVar4 = (char *)(in_esi + 0x11d + uVar3);
      if (pcVar4 + (-0x61 - (in_esi + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(in_esi + 0x1d + uVar3);
        *pbVar1 = *pbVar1 | 0x10;
        cVar5 = (char)uVar3 + ' ';
LAB_00c5c61d: ;
        *pcVar4 = cVar5;
      }
      else {
        if (pcVar4 + (-0x61 - (in_esi + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(in_esi + 0x1d + uVar3);
          *pbVar1 = *pbVar1 | 0x20;
          cVar5 = (char)uVar3 + -0x20;
          goto LAB_00c5c61d;
        }
        *pcVar4 = '\0';
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      ((CHAR *)(gen_frame + 0x408))[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    ((CHAR *)(gen_frame + 0x408))[0] = ' ';
    if ((*((BYTE *)GEN_TOP(((((char *)&(_Stack_51c) + 6) + (0) * 1))))) != 0) {
      pBVar6 = ((BYTE *)(((char *)&(_Stack_51c) + 6))) + 1;
      do {
        uVar3 = (uint)(*((BYTE *)GEN_TOP(((((char *)&(_Stack_51c) + 6) + (0) * 1)))));
        if (uVar3 <= *pBVar6) {
          F_00c48350(((CHAR *)(gen_frame + 0x408)) + uVar3,0x20,(*pBVar6 - uVar3) + 1);
        }
        (*((BYTE *)GEN_TOP(((((char *)&(_Stack_51c) + 6) + (0) * 1))))) = pBVar6[1];
        pBVar6 = pBVar6 + 2;
      } while ((*((BYTE *)GEN_TOP(((((char *)&(_Stack_51c) + 6) + (0) * 1))))) != 0);
    }
    F_00c635a3(0,1,((CHAR *)(gen_frame + 0x408)),0x100,((ushort *)(gen_frame + 0x8)),*(undefined4 *)(in_esi + 4),
               *(undefined4 *)(in_esi + 0xc),0);
    F_00c54720((undefined *)0x0,*(LPCWSTR *)(in_esi + 0xc),0x100,((CHAR *)(gen_frame + 0x408)),0x100,((CHAR *)(gen_frame + 0x308)),
                       0x100,*(int *)(in_esi + 4),0);
    F_00c54720((undefined *)0x0,*(LPCWSTR *)(in_esi + 0xc),0x200,((CHAR *)(gen_frame + 0x408)),0x100,((CHAR *)(gen_frame + 0x208)),
                       0x100,*(int *)(in_esi + 4),0);
    pcVar4 = (char *)0x0;
    do {
      if ((((ushort *)(gen_frame + 0x8))[(int)pcVar4] & 1) == 0) {
        if ((((ushort *)(gen_frame + 0x8))[(int)pcVar4] & 2) != 0) {
          pcVar4[in_esi + 0x1d] = pcVar4[in_esi + 0x1d] | 0x20;
          cVar5 = ((CHAR *)(gen_frame + 0x208))[(int)pcVar4];
          goto LAB_00c5c5c0;
        }
        pcVar4[in_esi + 0x11d] = '\0';
      }
      else {
        pcVar4[in_esi + 0x1d] = pcVar4[in_esi + 0x1d] | 0x10;
        cVar5 = ((CHAR *)(gen_frame + 0x308))[(int)pcVar4];
LAB_00c5c5c0: ;
        pcVar4[in_esi + 0x11d] = cVar5;
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < (char *)0x100);
  }
  F_00c47745((*(uint *)(gen_frame + 0x508)) ^ (uint)(uint)(gen_frame + 0x50c));
  return (uint)pcVar4;
}

/* ref: ___updatetmbcinfo */
undefined * F_00c5c637(void)
{
  GEN_ENTER(0xc5c637u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  LONG LVar2;
  undefined * lpAddend;
  undefined * local_20;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6510);
  uStack_c = 0xc5c643;
  p_Var1 = F_00c5b37a();
  if ((((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0) || ((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) == (undefined *)0x0)) {
    F_00c5aa4f(0xd);
    local_8 = (undefined *)0x0;
    lpAddend = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
    local_20 = lpAddend;
    if (lpAddend != (undefined *)REFG(undefined * PTR32, 0x134b6e8)) {
      if (lpAddend != (undefined *)0x0) {
        LVar2 = gen_imp_InterlockedDecrement(&(*(int *)((char *)(lpAddend))));
        if ((LVar2 == 0) && (lpAddend != (undefined *)&REFG(undefined, 0x134b2c0))) {
          F_00c4c68f(lpAddend);
        }
      }
      (*(undefined * PTR32 *)(((char *)(p_Var1) + 104))) = (undefined *)REFG(undefined * PTR32, 0x134b6e8);
      lpAddend = (undefined *)REFG(undefined * PTR32, 0x134b6e8);
      local_20 = (undefined *)REFG(undefined * PTR32, 0x134b6e8);
      gen_imp_InterlockedIncrement((LONG *)REFG(undefined * PTR32, 0x134b6e8));
    }
    local_8 = (undefined *)0xfffffffe;
    F_00c5c6d2();
  }
  else {
    lpAddend = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
  }
  if (lpAddend == (undefined *)0x0) {
                    
    F_00c47ca5(0x20);
  }
  return lpAddend;
}

/* ref: FUN_00c5c6cf */
uint F_00c5c6cf(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c6cfu, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5c6d2 */
uint F_00c5c6d2(void)
{
  GEN_ENTER(0xc5c6d2u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: getSystemCP */
int F_00c5c6db(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c6dbu, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  UINT UVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(undefined *)0x0);
  REFG(undefined4, 0x15d74cc) = 0;
  if (in_esi == -2) {
    REFG(undefined4, 0x15d74cc) = 1;
    UVar1 = gen_imp_GetOEMCP();
  }
  else if (in_esi == -3) {
    REFG(undefined4, 0x15d74cc) = 1;
    UVar1 = gen_imp_GetACP();
  }
  else {
    if (in_esi != -4) {
      if (((byte *)(gen_frame + 0xc))[0xc] == 0) {
        REFG(undefined4, 0x15d74cc) = 0;
        return in_esi;
      }
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      return in_esi;
    }
    UVar1 = *((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4)));
    REFG(undefined4, 0x15d74cc) = 1;
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return UVar1;
}

/* ref: __setmbcp_nolock */
uint F_00c5c757(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5c757u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 gen_out[0x4];
  BYTE * pBVar1;
  byte * pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  int iVar7;
  undefined2 * puVar8;
  byte * pbVar9;
  undefined2 * puVar10;
  int iVar11;
  BYTE * pBVar12;
  uint local_24;
  byte * local_20;
  undefined _Stack_1c[20];
  uint local_8;
  
  local_8 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  uVar4 = F_00c5c6db(param_1);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_00c5c795: ;
    if (*(uint *)((int)&REFG(undefined4, 0x134b6f0) + uVar5) != uVar4) goto code_r0x00c5c7a1;
    F_00c48350((undefined *)(param_2 + 0x1c),0,0x101);
    iVar11 = (int)((int)(uintptr_t)local_20) * 0x30;
    local_24 = 0;
    pbVar9 = &REFG(undefined, 0x134b700) + iVar11;
    local_20 = pbVar9;
    do {
      for (; (*pbVar9 != 0 && (bVar3 = pbVar9[1], bVar3 != 0)); pbVar9 = pbVar9 + 2) {
        for (uVar5 = (uint)*pbVar9; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x134b6ec);
          bVar3 = pbVar9[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar9 = local_20 + 8;
      local_20 = pbVar9;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    iVar7 = F_00c5c414(uVar4);
    *(int *)(param_2 + 0xc) = iVar7;
    puVar8 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&REFG(undefined, 0x134b6f4) + iVar11);
    iVar11 = 6;
    do {
      *puVar8 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_00c5c8c9;
  }
LAB_00c5c782: ;
  F_00c5c443(param_2);
LAB_00c5c789: ;
  uVar4 = 0;
LAB_00c5c931: ;
  F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x0));
  return uVar4;
code_r0x00c5c7a1: ;
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x00c5c7ae;
  goto LAB_00c5c795;
code_r0x00c5c7ae: ;
  if ((uVar4 != 65000) && (uVar4 != 0xfde9)) {
    BVar6 = gen_imp_IsValidCodePage(uVar4 & 0xffff);
    if (BVar6 != 0) {
      BVar6 = gen_imp_GetCPInfo(uVar4,&_Stack_1c);
      if (BVar6 != 0) {
        F_00c48350((undefined *)(param_2 + 0x1c),0,0x101);
        *(uint *)(param_2 + 4) = uVar4;
        *(undefined4 *)(param_2 + 0xc) = 0;
        if ((*(UINT *)((char *)&(_Stack_1c))) < 2) {
          *(undefined4 *)(param_2 + 8) = 0;
        }
        else {
          if ((*((BYTE *)GEN_TOP(((((char *)&(_Stack_1c) + 6) + (0) * 1))))) != '\0') {
            pBVar12 = ((BYTE *)(((char *)&(_Stack_1c) + 6))) + 1;
            do {
              bVar3 = *pBVar12;
              if (bVar3 == 0) break;
              for (uVar4 = (uint)pBVar12[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
                pbVar9 = (byte *)(param_2 + 0x1d + uVar4);
                *pbVar9 = *pbVar9 | 4;
              }
              pBVar1 = pBVar12 + 1;
              pBVar12 = pBVar12 + 2;
            } while (*pBVar1 != 0);
          }
          pbVar9 = (byte *)(param_2 + 0x1e);
          iVar11 = 0xfe;
          do {
            *pbVar9 = *pbVar9 | 8;
            pbVar9 = pbVar9 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar11 = F_00c5c414(*(undefined4 *)(param_2 + 4));
          *(int *)(param_2 + 0xc) = iVar11;
          *(undefined4 *)(param_2 + 8) = 1;
        }
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x14) = 0;
        *(undefined4 *)(param_2 + 0x18) = 0;
LAB_00c5c8c9: ;
        F_00c5c4a7(param_2);
        goto LAB_00c5c789;
      }
      if (REFG(int, 0x15d74cc) != 0) goto LAB_00c5c782;
    }
  }
  uVar4 = 0xffffffff;
  goto LAB_00c5c931;
}

/* ref: __getmbcp */
int F_00c5c940(void)
{
  GEN_ENTER(0xc5c940u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(undefined *)0x0);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 8))) == 0) {
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 4)));
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}

/* ref: __setmbcp */
int F_00c5c97e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c97eu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  undefined * p_Var1;
  undefined * ptVar2;
  LONG LVar3;
  int * piVar4;
  int iVar5;
  undefined * ptVar6;
  undefined * ptVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6530);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc5c98a;
  (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
  p_Var1 = F_00c5b37a();
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = p_Var1;
  F_00c5c637();
  ptVar2 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
  (*(int *)&gen_args[0]) = F_00c5c6db((*(int *)&gen_args[0]));
  if ((*(int *)&gen_args[0]) == (*(int *)(((char *)(ptVar2) + 4)))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  else {
    ptVar2 = F_00c54c2e(0x220);
    if (ptVar2 != (undefined *)0x0) {
      ptVar6 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
      ptVar7 = ptVar2;
      for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
        (*(int *)((char *)(ptVar7))) = (*(int *)((char *)(ptVar6)));
        ptVar6 = (undefined *)&(*(int *)(((char *)(ptVar6) + 4)));
        ptVar7 = (undefined *)&(*(int *)(((char *)(ptVar7) + 4)));
      }
      (*(int *)((char *)(ptVar2))) = 0;
      (*(uint *)(gen_frame + 0xc)) = F_00c5c757((*(int *)&gen_args[0]),ptVar2);
      p_Var1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(uint *)(gen_frame + 0xc)) == 0) {
        LVar3 = gen_imp_InterlockedDecrement(&(*(int *)((char *)(*(undefined * PTR32 *)(((char *)((*(undefined * PTR32 *)(gen_frame + 0x8))) + 104))))));
        if ((LVar3 == 0) && ((*(undefined * PTR32 *)(((char *)(p_Var1) + 104))) != (undefined *)&REFG(undefined, 0x134b2c0))) {
          F_00c4c68f((*(undefined * PTR32 *)(((char *)(p_Var1) + 104))));
        }
        (*(undefined * PTR32 *)(((char *)(p_Var1) + 104))) = ptVar2;
        gen_imp_InterlockedIncrement(ptVar2);
        if ((((*(int *)(((char *)(p_Var1) + 112))) & 2) == 0) && (((byte)REFG(undefined4, 0x134b7e0) & 1) == 0)) {
          F_00c5aa4f(0xd);
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
          *(int *)&REFG(undefined, 0x15d74dc) = (*(int *)(((char *)(ptVar2) + 4)));
          *(int *)&REFG(undefined, 0x15d74e0) = (*(int *)(((char *)(ptVar2) + 8)));
          *(undefined4 *)&REFG(undefined, 0x15d74e4) = *(undefined4 *)((ushort *)(((char *)(ptVar2) + 12)));
          for ((*(int *)(gen_frame + 0x10)) = 0; (*(int *)(gen_frame + 0x10)) < 5; (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1) {
            (&REFG(undefined2, 0x15d74d0))[(*(int *)(gen_frame + 0x10))] = (*((ushort *)GEN_TOP(((((char *)(ptVar2) + 12) + ((*(int *)(gen_frame + 0x10)) + 2) * 2)))));
          }
          for ((*(int *)(gen_frame + 0x10)) = 0; (*(int *)(gen_frame + 0x10)) < 0x101; (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1) {
            (&REFG(undefined1, 0x134b4e0))[(*(int *)(gen_frame + 0x10))] = (*((uchar *)GEN_TOP(((((char *)(ptVar2) + 24) + ((*(int *)(gen_frame + 0x10)) + 4) * 1)))));
          }
          for ((*(int *)(gen_frame + 0x10)) = 0; (*(int *)(gen_frame + 0x10)) < 0x100; (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1) {
            (&REFG(undefined1, 0x134b5e8))[(*(int *)(gen_frame + 0x10))] = (*((uchar *)GEN_TOP(((((char *)(ptVar2) + 281) + ((*(int *)(gen_frame + 0x10)) + 4) * 1)))));
          }
          LVar3 = gen_imp_InterlockedDecrement((LONG *)REFG(undefined * PTR32, 0x134b6e8));
          if ((LVar3 == 0) && (REFG(undefined * PTR32, 0x134b6e8) != &REFG(undefined, 0x134b2c0))) {
            F_00c4c68f(REFG(undefined * PTR32, 0x134b6e8));
          }
          REFG(undefined * PTR32, 0x134b6e8) = (undefined *)ptVar2;
          gen_imp_InterlockedIncrement(ptVar2);
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
          F_00c5cadf();
        }
      }
      else if ((*(uint *)(gen_frame + 0xc)) == 0xffffffff) {
        if (ptVar2 != (undefined *)&REFG(undefined, 0x134b2c0)) {
          F_00c4c68f(ptVar2);
        }
        piVar4 = F_00c51f85();
        *piVar4 = 0x16;
      }
    }
  }
  return (*(uint *)(gen_frame + 0xc));
}

/* ref: FUN_00c5cadf */
uint F_00c5cadf(void)
{
  GEN_ENTER(0xc5cadfu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: ___initmbctable */
uint F_00c5cb18(void)
{
  GEN_ENTER(0xc5cb18u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5c97e(-3);
    REFG(int, 0x15e52e0) = 1;
  }
  return 0;
}

/* ref: ___addlocaleref */
unsigned int F_00c5cb36(unsigned int gen_a0)
{
  GEN_ENTER(0xc5cb36u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1;
  gen_imp_InterlockedIncrement(param_1);
  if (*(int *)(param_1 + 0xb0) != 0) {
    gen_imp_InterlockedIncrement(*(int *)(param_1 + 0xb0));
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    gen_imp_InterlockedIncrement(*(int *)(param_1 + 0xb8));
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    gen_imp_InterlockedIncrement(*(int *)(param_1 + 0xb4));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    gen_imp_InterlockedIncrement(*(int *)(param_1 + 0xc0));
  }
  piVar2 = (int *)(param_1 + 0x50);
  param_1 = 6;
  do {
    if (((undefined *)piVar2[-2] != &REFG(undefined, 0x134b7e4)) && (*piVar2 != 0)) {
      gen_imp_InterlockedIncrement(*piVar2);
    }
    if ((piVar2[-1] != 0) && (piVar2[1] != 0)) {
      gen_imp_InterlockedIncrement(piVar2[1]);
    }
    piVar2 = piVar2 + 4;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  gen_imp_InterlockedIncrement(*(int *)(iVar1 + 0xd4) + 0xb4);
  return 0;
}

/* ref: ___removelocaleref */
uint F_00c5cbc5(unsigned int gen_a0)
{
  GEN_ENTER(0xc5cbc5u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    gen_imp_InterlockedDecrement(param_1);
    if (*(int *)(param_1 + 0xb0) != 0) {
      gen_imp_InterlockedDecrement(*(int *)(param_1 + 0xb0));
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      gen_imp_InterlockedDecrement(*(int *)(param_1 + 0xb8));
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      gen_imp_InterlockedDecrement(*(int *)(param_1 + 0xb4));
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      gen_imp_InterlockedDecrement(*(int *)(param_1 + 0xc0));
    }
    piVar2 = (int *)(param_1 + 0x50);
    param_1 = 6;
    do {
      if (((undefined *)piVar2[-2] != &REFG(undefined, 0x134b7e4)) && (*piVar2 != 0)) {
        gen_imp_InterlockedDecrement(*piVar2);
      }
      if ((piVar2[-1] != 0) && (piVar2[1] != 0)) {
        gen_imp_InterlockedDecrement(piVar2[1]);
      }
      piVar2 = piVar2 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    gen_imp_InterlockedDecrement(*(int *)(uVar1 + 0xd4) + 0xb4);
  }
  return uVar1;
}

/* ref: ___freetlocinfo */
uint F_00c5cc5e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5cc5eu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * PTR32 * ppuVar2;
  undefined * _Memory;
  uint extraout_EAX = 0;
  undefined4 * puVar3;
  
  _Memory = param_1;
  if ((((*(undefined * PTR32 * PTR32 *)((int)param_1 + 0xbc) != (undefined * PTR32 *)0x0) &&
       (*(undefined * PTR32 * PTR32 *)((int)param_1 + 0xbc) != &REFG(undefined * PTR32, 0x134b048))) &&
      (*(int * PTR32 *)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int * PTR32 *)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int * PTR32 *)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      F_00c4c68f(piVar1);
      F_00c5fe2f(*(undefined4 *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int * PTR32 *)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      F_00c4c68f(piVar1);
      F_00c5fba6(*(undefined4 *)((int)param_1 + 0xbc));
    }
    F_00c4c68f(*(undefined * PTR32 *)((int)param_1 + 0xb0));
    F_00c4c68f(*(undefined * PTR32 *)((int)param_1 + 0xbc));
  }
  if ((*(int * PTR32 *)((int)param_1 + 0xc0) != (int *)0x0) && (**(int * PTR32 *)((int)param_1 + 0xc0) == 0)) {
    F_00c4c68f(((undefined *)GEN_TOP((*(int *)((int)param_1 + 0xc4) + -0xfe))));
    F_00c4c68f(((undefined *)GEN_TOP((*(int *)((int)param_1 + 0xcc) + -0x80))));
    F_00c4c68f(((undefined *)GEN_TOP((*(int *)((int)param_1 + 0xd0) + -0x80))));
    F_00c4c68f(*(undefined * PTR32 *)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined * PTR32 * PTR32 *)((int)param_1 + 0xd4);
  if ((ppuVar2 != &REFG(undefined * PTR32, 0x134b7e8)) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    F_00c5f782(ppuVar2);
    F_00c4c68f(*(undefined * PTR32 *)((int)param_1 + 0xd4));
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x50);
  param_1 = (undefined *)0x6;
  do {
    if ((((undefined *)puVar3[-2] != &REFG(undefined, 0x134b7e4)) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      F_00c4c68f(piVar1);
    }
    if (((puVar3[-1] != 0) && (piVar1 = (int *)puVar3[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      F_00c4c68f(piVar1);
    }
    puVar3 = puVar3 + 4;
    param_1 = (undefined *)((int)param_1 + -1);
  } while (param_1 != (undefined *)0x0);
  F_00c4c68f(_Memory);
  return extraout_EAX;
}

/* ref: __updatetlocinfoEx_nolock */
uint F_00c5cda9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5cda9u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if ((param_2 == (int *)0x0) || (param_1 == (undefined4 *)0x0)) {
    param_2 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*param_1;
    if (piVar1 != param_2) {
      *param_1 = param_2;
      F_00c5cb36(param_2);
      if (((piVar1 != (int *)0x0) && (F_00c5cbc5(piVar1), *piVar1 == 0)) &&
         (piVar1 != (int *)&REFG(undefined, 0x134b950))) {
        F_00c5cc5e(piVar1);
      }
    }
  }
  return (uint)param_2;
}

/* ref: ___updatetlocinfo */
undefined * F_00c5cdf6(void)
{
  GEN_ENTER(0xc5cdf6u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  undefined * ptVar2;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6550);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5ce02;
  p_Var1 = F_00c5b37a();
  if ((((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0) || ((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) == (undefined *)0x0)) {
    F_00c5aa4f(0xc);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    ptVar2 = (undefined *)&(*(undefined * PTR32 *)(((char *)(p_Var1) + 108)));
    (*(uint *)(gen_frame + 0x0)) = F_00c5cda9(ptVar2,REFG(undefined * PTR32, 0x134ba28));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c5ce63((gen_frame + 0x1c));
  }
  else {
    p_Var1 = F_00c5b37a();
    ptVar2 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 108)));
  }
  if (ptVar2 == (undefined *)0x0) {
                    
    F_00c47ca5(0x20);
  }
  return ptVar2;
}

/* ref: FUN_00c5ce63 */
uint F_00c5ce63(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ce63u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: __isctype_l */
int F_00c5ce6f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5ce6fu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x4)),(*(undefined * PTR32 *)&gen_args[2]));
  if ((*(int *)&gen_args[0]) + 1U < 0x101) {
    ((ushort *)(gen_frame + 0x18))[0] = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 200))) + (*(int *)&gen_args[0]) * 2)));
  }
  else {
    iVar1 = F_00c6dfe8((*(int *)&gen_args[0]) >> 8 & 0xff,(undefined *)((byte *)(gen_frame + 0x4)));
    (*(undefined1 *)(gen_frame + 0x15)) = (undefined1)(*(int *)&gen_args[0]);
    if (iVar1 == 0) {
      (*(undefined1 *)(gen_frame + 0x14)) = (*(undefined1 *)(gen_frame + 0x15));
      (*(undefined1 *)(gen_frame + 0x15)) = 0;
      uVar3 = 1;
    }
    else {
      (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined1)((uint)(*(int *)&gen_args[0]) >> 8);
      (*(undefined1 *)(gen_frame + 0x14)) = (undefined1)(*(int *)&gen_args[0]);
      (*(undefined1 *)(gen_frame + 0x16)) = 0;
      uVar3 = 2;
    }
    BVar2 = F_00c635a3(((byte *)(gen_frame + 0x4)),1,&(*(undefined1 *)(gen_frame + 0x14)),uVar3,((ushort *)(gen_frame + 0x18)),*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 4))),
                       *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0x14))),1);
    if (BVar2 == 0) {
      if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return (uint)((ushort *)(gen_frame + 0x18))[0] & (*(int *)&gen_args[1]);
}

/* ref: __isctype */
int F_00c5cf27(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5cf27u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return (uint)*((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + (*(int *)&gen_args[0]) * 2))) & (*(int *)&gen_args[1]);
  }
  iVar1 = F_00c5ce6f((*(int *)&gen_args[0]),(*(int *)&gen_args[1]),(undefined *)0x0);
  return iVar1;
}

/* ref: __filbuf */
int F_00c5cf59(unsigned int gen_a0)
{
  GEN_ENTER(0xc5cf59u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined * puVar5;
  char * _DstBuf;
  
  if (_File == (undefined *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    uVar4 = (*(int *)(((char *)(_File) + 12)));
    if (((uVar4 & 0x83) != 0) && ((uVar4 & 0x40) == 0)) {
      if ((uVar4 & 2) == 0) {
        (*(int *)(((char *)(_File) + 12))) = uVar4 | 1;
        if ((uVar4 & 0x10c) == 0) {
          F_00c6e658(_File);
        }
        else {
          (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)(((char *)(_File) + 8)));
        }
        uVar4 = (*(int *)(((char *)(_File) + 24)));
        _DstBuf = (*(char * PTR32 *)(((char *)(_File) + 8)));
        iVar3 = F_00c5d07b(_File);
        iVar3 = F_00c5d658(iVar3,_DstBuf,uVar4);
        (*(int *)(((char *)(_File) + 4))) = iVar3;
        if ((iVar3 != 0) && (iVar3 != -1)) {
          if (((*(int *)(((char *)(_File) + 12))) & 0x82) == 0) {
            iVar3 = F_00c5d07b(_File);
            if ((iVar3 == -1) || (iVar3 = F_00c5d07b(_File), iVar3 == -2)) {
              puVar5 = &REFG(undefined, 0x134b280);
            }
            else {
              iVar3 = F_00c5d07b(_File);
              uVar4 = F_00c5d07b(_File);
              puVar5 = ((undefined *)GEN_TOP(((uVar4 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar3 >> 5])));
            }
            if ((puVar5[4] & 0x82) == 0x82) {
              (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x2000;
            }
          }
          if ((((*(int *)(((char *)(_File) + 24))) == 0x200) && (((*(int *)(((char *)(_File) + 12))) & 8U) != 0)) &&
             (((*(int *)(((char *)(_File) + 12))) & 0x400U) == 0)) {
            (*(int *)(((char *)(_File) + 24))) = 0x1000;
          }
          (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) + -1;
          bVar1 = *(*(char * PTR32 *)((char *)(_File)));
          (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) + 1;
          return (uint)bVar1;
        }
        (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
        (*(int *)(((char *)(_File) + 4))) = 0;
      }
      else {
        (*(int *)(((char *)(_File) + 12))) = uVar4 | 0x20;
      }
    }
  }
  return -1;
}

/* ref: __fileno */
int F_00c5d07b(unsigned int gen_a0)
{
  GEN_ENTER(0xc5d07bu, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_File == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  return (*(int *)(((char *)(_File) + 16)));
}

/* ref: __read_nolock */
int F_00c5d0a1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5d0a1u, gen_a0, gen_a1, gen_a2, 0u);
  int _FileHandle = (int)gen_a0;
  undefined * _DstBuf = (undefined *)(uintptr_t)gen_a1;
  uint _MaxCharCount = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  byte bVar2;
  short sVar3;
  ulong * puVar4;
  int * piVar5;
  uint uVar6;
  byte * pbVar7;
  BOOL BVar8;
  DWORD DVar9;
  int iVar10;
  ulong uVar11;
  byte * pbVar12;
  int cbMultiByte;
  int iVar13;
  longlong lVar14;
  undefined2 uVar15;
  
  uVar1 = _MaxCharCount;
  (*(int *)(gen_frame + 0x8)) = -2;
  if (_FileHandle == -2) {
    puVar4 = F_00c51f98();
    *puVar4 = 0;
    piVar5 = F_00c51f85();
    *piVar5 = 9;
    return -1;
  }
  if ((_FileHandle < 0) || (REFG(undefined4, 0x15e4190) <= (uint)_FileHandle)) {
    puVar4 = F_00c51f98();
    *puVar4 = 0;
    piVar5 = F_00c51f85();
    *piVar5 = 9;
    F_00c4c305();
    return -1;
  }
  piVar5 = &REFG(undefined4, 0x15e41a0) + (_FileHandle >> 5);
  iVar13 = (_FileHandle & 0x1fU) * 0x40;
  bVar2 = *(byte *)(*piVar5 + 4 + iVar13);
  if ((bVar2 & 1) == 0) {
    puVar4 = F_00c51f98();
    *puVar4 = 0;
    piVar5 = F_00c51f85();
    *piVar5 = 9;
    goto LAB_00c5d1a0;
  }
  if (_MaxCharCount < 0x80000000) {
    (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0x0;
    if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
      return 0;
    }
    if (_DstBuf != (undefined *)0x0) {
      (*(char *)(gen_frame + 0x1a)) = (char)(*(char *)(*piVar5 + 0x24 + iVar13) * '\x02') >> 1;
      if ((*(char *)(gen_frame + 0x1a)) == '\x01') {
        if ((~_MaxCharCount & 1) == 0) goto LAB_00c5d18e;
        uVar6 = _MaxCharCount >> 1;
        _MaxCharCount = 4;
        if (3 < uVar6) {
          _MaxCharCount = uVar6;
        }
        pbVar12 = F_00c54c2e(_MaxCharCount);
        (*(byte * PTR32 *)(gen_frame + 0xc)) = pbVar12;
        if (pbVar12 == (byte *)0x0) {
          piVar5 = F_00c51f85();
          *piVar5 = 0xc;
          puVar4 = F_00c51f98();
          *puVar4 = 8;
          return -1;
        }
        lVar14 = F_00c6dda1(_FileHandle,0,0,1);
        iVar10 = *piVar5;
        *(int *)(iVar13 + 0x28 + iVar10) = (int)lVar14;
        *(int *)(iVar13 + 0x2c + iVar10) = (int)((ulonglong)lVar14 >> 0x20);
      }
      else {
        if ((*(char *)(gen_frame + 0x1a)) == '\x02') {
          if ((~_MaxCharCount & 1) == 0) goto LAB_00c5d18e;
          _MaxCharCount = _MaxCharCount & 0xfffffffe;
        }
        (*(byte * PTR32 *)(gen_frame + 0xc)) = _DstBuf;
        pbVar12 = _DstBuf;
      }
      pbVar7 = pbVar12;
      uVar6 = _MaxCharCount;
      if ((((*(byte *)(*piVar5 + iVar13 + 4) & 0x48) != 0) &&
          (bVar2 = *(byte *)(*piVar5 + iVar13 + 5), bVar2 != 10)) && (_MaxCharCount != 0)) {
        uVar6 = _MaxCharCount - 1;
        *pbVar12 = bVar2;
        pbVar7 = pbVar12 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0x1;
        *(undefined1 *)(iVar13 + 5 + *piVar5) = 10;
        if ((((*(char *)(gen_frame + 0x1a)) != '\0') && (bVar2 = *(byte *)(iVar13 + 0x25 + *piVar5), bVar2 != 10)) &&
           (uVar6 != 0)) {
          *pbVar7 = bVar2;
          pbVar7 = pbVar12 + 2;
          uVar6 = _MaxCharCount - 2;
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0x2;
          *(undefined1 *)(iVar13 + 0x25 + *piVar5) = 10;
          if ((((*(char *)(gen_frame + 0x1a)) == '\x01') && (bVar2 = *(byte *)(iVar13 + 0x26 + *piVar5), bVar2 != 10)) &&
             (uVar6 != 0)) {
            *pbVar7 = bVar2;
            pbVar7 = pbVar12 + 3;
            (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)0x3;
            *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
            uVar6 = _MaxCharCount - 3;
          }
        }
      }
      _MaxCharCount = uVar6;
      BVar8 = gen_imp_ReadFile(*(HANDLE *)(iVar13 + *piVar5),pbVar7,_MaxCharCount,&(*(uint *)(gen_frame + 0x4)),
                       (GEN_LPANY)0x0);
      if (((BVar8 == 0) || ((int)(*(uint *)(gen_frame + 0x4)) < 0)) || (_MaxCharCount < (*(uint *)(gen_frame + 0x4)))) {
        uVar11 = gen_imp_GetLastError();
        if (uVar11 != 5) {
          if (uVar11 == 0x6d) {
            (*(int *)(gen_frame + 0x8)) = 0;
            goto LAB_00c5d4ad;
          }
          goto LAB_00c5d4a2;
        }
        piVar5 = F_00c51f85();
        *piVar5 = 9;
        puVar4 = F_00c51f98();
        *puVar4 = 5;
      }
      else {
        iVar10 = (int)(*(byte * PTR32 *)(gen_frame + 0x10)) + (*(uint *)(gen_frame + 0x4));
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)iVar10;
        pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
        if ((*pbVar7 & 0x80) == 0) goto LAB_00c5d4ad;
        if ((*(char *)(gen_frame + 0x1a)) == '\x02') {
          if (((*(uint *)(gen_frame + 0x4)) == 0) || (*(short *)pbVar12 != 10)) {
            *pbVar7 = *pbVar7 & 0xfb;
          }
          else {
            *pbVar7 = *pbVar7 | 4;
          }
          _MaxCharCount = (uint)(*(byte * PTR32 *)(gen_frame + 0xc));
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte * PTR32 *)(gen_frame + 0xc)) + iVar10;
          pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xc));
          if ((*(byte * PTR32 *)(gen_frame + 0xc)) < (*(byte * PTR32 *)(gen_frame + 0xc)) + iVar10) {
            do {
              sVar3 = *(short *)_MaxCharCount;
              if (sVar3 == 0x1a) {
                pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
                if ((*pbVar7 & 0x40) == 0) {
                  *pbVar7 = *pbVar7 | 2;
                }
                else {
                  *(undefined2 *)pbVar12 = *(undefined2 *)_MaxCharCount;
                  pbVar12 = pbVar12 + 2;
                }
                break;
              }
              if (sVar3 == 0xd) {
                if (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0x10)) + -2) {
                  if (*(short *)(_MaxCharCount + 2) == 10) {
                    uVar1 = _MaxCharCount + 4;
                    goto LAB_00c5d54d;
                  }
LAB_00c5d5e0: ;
                  _MaxCharCount = _MaxCharCount + 2;
                  uVar15 = 0xd;
LAB_00c5d5e2: ;
                  *(undefined2 *)pbVar12 = uVar15;
                }
                else {
                  uVar1 = _MaxCharCount + 2;
                  BVar8 = gen_imp_ReadFile(*(HANDLE *)(iVar13 + *piVar5),&(*(short *)(gen_frame + 0x14)),2,&(*(uint *)(gen_frame + 0x4)),
                                   (GEN_LPANY)0x0);
                  if (((BVar8 == 0) && (DVar9 = gen_imp_GetLastError(), DVar9 != 0)) || ((*(uint *)(gen_frame + 0x4)) == 0))
                  goto LAB_00c5d5e0;
                  if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                    if ((pbVar12 == (*(byte * PTR32 *)(gen_frame + 0xc))) && ((*(short *)(gen_frame + 0x14)) == 10)) goto LAB_00c5d54d;
                    F_00c6dda1(_FileHandle,0xfffffffe,0xffffffff,1);
                    if ((*(short *)(gen_frame + 0x14)) == 10) goto LAB_00c5d5e9;
                    goto LAB_00c5d5e0;
                  }
                  if ((*(short *)(gen_frame + 0x14)) == 10) {
LAB_00c5d54d: ;
                    _MaxCharCount = uVar1;
                    uVar15 = 10;
                    goto LAB_00c5d5e2;
                  }
                  pbVar12[0] = 0xd;
                  pbVar12[1] = 0;
                  *(undefined1 *)(iVar13 + 5 + *piVar5) = (undefined1)(*(short *)(gen_frame + 0x14));
                  *(undefined1 *)(iVar13 + 0x25 + *piVar5) = (*(undefined1 *)((char *)&(*(short *)(gen_frame + 0x14)) + 1));
                  *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
                  _MaxCharCount = uVar1;
                }
                pbVar12 = pbVar12 + 2;
                uVar1 = _MaxCharCount;
              }
              else {
                *(short *)pbVar12 = sVar3;
                pbVar12 = pbVar12 + 2;
                uVar1 = _MaxCharCount + 2;
              }
LAB_00c5d5e9: ;
              _MaxCharCount = uVar1;
            } while (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0x10)));
          }
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)((int)pbVar12 - (int)(*(byte * PTR32 *)(gen_frame + 0xc)));
          goto LAB_00c5d4ad;
        }
        if (((*(uint *)(gen_frame + 0x4)) == 0) || (*pbVar12 != 10)) {
          *pbVar7 = *pbVar7 & 0xfb;
        }
        else {
          *pbVar7 = *pbVar7 | 4;
        }
        _MaxCharCount = (uint)(*(byte * PTR32 *)(gen_frame + 0xc));
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte * PTR32 *)(gen_frame + 0xc)) + iVar10;
        pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xc));
        if ((*(byte * PTR32 *)(gen_frame + 0xc)) < (*(byte * PTR32 *)(gen_frame + 0xc)) + iVar10) {
          do {
            bVar2 = *(byte *)_MaxCharCount;
            if (bVar2 == 0x1a) {
              pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
              if ((*pbVar7 & 0x40) == 0) {
                *pbVar7 = *pbVar7 | 2;
              }
              else {
                *pbVar12 = *(byte *)_MaxCharCount;
                pbVar12 = pbVar12 + 1;
              }
              break;
            }
            if (bVar2 == 0xd) {
              if (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0x10)) + -1) {
                if (*(char *)(_MaxCharCount + 1) == '\n') {
                  uVar6 = _MaxCharCount + 2;
                  goto LAB_00c5d32d;
                }
LAB_00c5d3a4: ;
                _MaxCharCount = _MaxCharCount + 1;
                *pbVar12 = 0xd;
              }
              else {
                uVar6 = _MaxCharCount + 1;
                BVar8 = gen_imp_ReadFile(*(HANDLE *)(iVar13 + *piVar5),&(*(char *)(gen_frame + 0x1b)),1,&(*(uint *)(gen_frame + 0x4)),
                                 (GEN_LPANY)0x0);
                if (((BVar8 == 0) && (DVar9 = gen_imp_GetLastError(), DVar9 != 0)) || ((*(uint *)(gen_frame + 0x4)) == 0))
                goto LAB_00c5d3a4;
                if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                  if ((pbVar12 == (*(byte * PTR32 *)(gen_frame + 0xc))) && ((*(char *)(gen_frame + 0x1b)) == '\n')) goto LAB_00c5d32d;
                  F_00c6dda1(_FileHandle,0xffffffff,0xffffffff,1);
                  if ((*(char *)(gen_frame + 0x1b)) == '\n') goto LAB_00c5d3a8;
                  goto LAB_00c5d3a4;
                }
                if ((*(char *)(gen_frame + 0x1b)) == '\n') {
LAB_00c5d32d: ;
                  _MaxCharCount = uVar6;
                  *pbVar12 = 10;
                }
                else {
                  *pbVar12 = 0xd;
                  *(char *)(iVar13 + 5 + *piVar5) = (*(char *)(gen_frame + 0x1b));
                  _MaxCharCount = uVar6;
                }
              }
              pbVar12 = pbVar12 + 1;
              uVar6 = _MaxCharCount;
            }
            else {
              *pbVar12 = bVar2;
              pbVar12 = pbVar12 + 1;
              uVar6 = _MaxCharCount + 1;
            }
LAB_00c5d3a8: ;
            _MaxCharCount = uVar6;
          } while (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0x10)));
        }
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)((int)pbVar12 - (int)(*(byte * PTR32 *)(gen_frame + 0xc)));
        if (((*(char *)(gen_frame + 0x1a)) != '\x01') || ((int)pbVar12 - (int)(*(byte * PTR32 *)(gen_frame + 0xc)) == 0)) goto LAB_00c5d4ad;
        bVar2 = pbVar12[-1];
        if ((char)bVar2 < '\0') {
          iVar10 = 1;
          pbVar12 = pbVar12 + -1;
          while ((((&REFG(undefined, 0x134ba38))[bVar2] == '\0' && (iVar10 < 5)) && ((*(byte * PTR32 *)(gen_frame + 0xc)) <= pbVar12))) {
            pbVar12 = pbVar12 + -1;
            bVar2 = *pbVar12;
            iVar10 = iVar10 + 1;
          }
          if ((char)(&REFG(undefined, 0x134ba38))[*pbVar12] == 0) {
            piVar5 = F_00c51f85();
            *piVar5 = 0x2a;
            goto LAB_00c5d4a9;
          }
          if ((char)(&REFG(undefined, 0x134ba38))[*pbVar12] + 1 == iVar10) {
            pbVar12 = pbVar12 + iVar10;
          }
          else if ((*(byte *)(*piVar5 + 4 + iVar13) & 0x48) == 0) {
            F_00c6dda1(_FileHandle,-iVar10,-iVar10 >> 0x1f,1);
          }
          else {
            pbVar7 = pbVar12 + 1;
            *(byte *)(*piVar5 + 5 + iVar13) = *pbVar12;
            if (1 < iVar10) {
              *(byte *)(iVar13 + 0x25 + *piVar5) = *pbVar7;
              pbVar7 = pbVar12 + 2;
            }
            if (iVar10 == 3) {
              *(byte *)(iVar13 + 0x26 + *piVar5) = *pbVar7;
              pbVar7 = pbVar7 + 1;
            }
            pbVar12 = pbVar7 - iVar10;
          }
        }
        cbMultiByte = (int)pbVar12 - (int)(*(byte * PTR32 *)(gen_frame + 0xc));
        iVar10 = gen_imp_MultiByteToWideChar(0xfde9,0,(LPCSTR)(*(byte * PTR32 *)(gen_frame + 0xc)),cbMultiByte,_DstBuf,uVar1 >> 1);
        (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)iVar10;
        if (iVar10 != 0) {
          (*(byte * PTR32 *)(gen_frame + 0x10)) = (byte *)(iVar10 * 2);
          *(uint *)(iVar13 + 0x30 + *piVar5) = (uint)(iVar10 != cbMultiByte);
          goto LAB_00c5d4ad;
        }
        uVar11 = gen_imp_GetLastError();
LAB_00c5d4a2: ;
        F_00c51fab(uVar11);
      }
LAB_00c5d4a9: ;
      (*(int *)(gen_frame + 0x8)) = -1;
LAB_00c5d4ad: ;
      if ((*(byte * PTR32 *)(gen_frame + 0xc)) != _DstBuf) {
        F_00c4c68f((*(byte * PTR32 *)(gen_frame + 0xc)));
      }
      if ((*(int *)(gen_frame + 0x8)) == -2) {
        return (int)(*(byte * PTR32 *)(gen_frame + 0x10));
      }
      return (*(int *)(gen_frame + 0x8));
    }
  }
LAB_00c5d18e: ;
  puVar4 = F_00c51f98();
  *puVar4 = 0;
  piVar5 = F_00c51f85();
  *piVar5 = 0x16;
LAB_00c5d1a0: ;
  F_00c4c305();
  return -1;
}

/* ref: __read */
int F_00c5d658(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5d658u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int _FileHandle_00;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6570);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5d664;
  if ((*(int *)&gen_args[0]) == -2) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    return -1;
  }
  if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
    iVar3 = (*(int *)&gen_args[0]) >> 5;
    iVar4 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
    if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) != 0) {
      if ((*(uint *)&gen_args[2]) < 0x80000000) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(int *)(gen_frame + 0x0)) = -1;
        }
        else {
          (*(int *)(gen_frame + 0x0)) = F_00c5d0a1(_FileHandle_00,(*(undefined * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c5d746(_FileHandle_00);
        return (*(int *)(gen_frame + 0x0));
      }
      puVar1 = F_00c51f98();
      *puVar1 = 0;
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      goto LAB_00c5d6a6;
    }
  }
  puVar1 = F_00c51f98();
  *puVar1 = 0;
  piVar2 = F_00c51f85();
  *piVar2 = 9;
LAB_00c5d6a6: ;
  F_00c4c305();
  return -1;
}

/* ref: FUN_00c5d743 */
unsigned int F_00c5d743(unsigned int gen_a0)
{
  GEN_ENTER(0xc5d743u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c5d746 */
unsigned int F_00c5d746(unsigned int gen_a0)
{
  GEN_ENTER(0xc5d746u, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __write_nolock */
int F_00c5d74e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5d74eu, gen_a0, gen_a1, gen_a2, 0u);
  int _FileHandle = (int)gen_a0;
  undefined * _Buf = (undefined *)(uintptr_t)gen_a1;
  uint _MaxCharCount = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x11af0];
  char cVar1;
  WCHAR WVar2;
  wchar_t * pwVar3;
  wchar_t wVar4;
  int iVar5;
  ulong * puVar6;
  int * piVar7;
  int iVar8;
  undefined * p_Var9;
  BOOL BVar10;
  DWORD nNumberOfBytesToWrite;
  WCHAR * pWVar11;
  uint uVar12;
  WCHAR * pWVar13;
  uint uVar14;
  int iVar15;
  gen_size32 _SrcSizeInBytes;
  
  (*(uint *)(gen_frame + 0x11ae8)) = 0xc5d75d;
  (*(uint *)(gen_frame + 0x11ae8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(WCHAR * PTR32 *)(gen_frame + 0x10020)) = _Buf;
  (*(uint *)(gen_frame + 0x10024)) = 0;
  (*(int *)(gen_frame + 0x1001c)) = 0;
  if (_MaxCharCount == 0) {
    iVar5 = 0;
    goto LAB_00c5de3d;
  }
  if (_Buf == (undefined *)0x0) {
    puVar6 = F_00c51f98();
    *puVar6 = 0;
    piVar7 = F_00c51f85();
    *piVar7 = 0x16;
    F_00c4c305();
    iVar5 = -1;
    goto LAB_00c5de3d;
  }
  piVar7 = &REFG(undefined4, 0x15e41a0) + (_FileHandle >> 5);
  iVar5 = (_FileHandle & 0x1fU) * 0x40;
  (*(char *)(gen_frame + 0x1002b)) = (char)(*(char *)(*piVar7 + 0x24 + iVar5) * '\x02') >> 1;
  (*(int * PTR32 *)(gen_frame + 0x10010)) = piVar7;
  if ((((*(char *)(gen_frame + 0x1002b)) == '\x02') || ((*(char *)(gen_frame + 0x1002b)) == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar6 = F_00c51f98();
    *puVar6 = 0;
    piVar7 = F_00c51f85();
    *piVar7 = 0x16;
    F_00c4c305();
  }
  else {
    if ((*(byte *)(*piVar7 + 4 + iVar5) & 0x20) != 0) {
      F_00c6dda1(_FileHandle,0,0,2);
    }
    iVar8 = F_00c7adb7(_FileHandle);
    if ((iVar8 == 0) || ((*(byte *)(iVar5 + 4 + *piVar7) & 0x80) == 0)) {
LAB_00c5dace: ;
      if ((*(byte *)(*piVar7 + 4 + iVar5) & 0x80) == 0) {
        BVar10 = gen_imp_WriteFile(*(HANDLE *)(*piVar7 + iVar5),(*(WCHAR * PTR32 *)(gen_frame + 0x10020)),_MaxCharCount,&(*(uint *)(gen_frame + 0x10014)),
                           (GEN_LPANY)0x0);
        if (BVar10 == 0) {
LAB_00c5ddaf: ;
          (*(DWORD *)(gen_frame + 0x10030)) = gen_imp_GetLastError();
        }
        else {
          (*(DWORD *)(gen_frame + 0x10030)) = 0;
          (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10014));
        }
LAB_00c5ddbb: ;
        if ((*(uint *)(gen_frame + 0x10024)) != 0) {
          iVar5 = (*(uint *)(gen_frame + 0x10024)) - (*(int *)(gen_frame + 0x1001c));
          goto LAB_00c5de3d;
        }
        goto LAB_00c5ddc4;
      }
      (*(DWORD *)(gen_frame + 0x10030)) = 0;
      if ((*(char *)(gen_frame + 0x1002b)) == '\0') {
        pWVar13 = (*(WCHAR * PTR32 *)(gen_frame + 0x10020));
        if (_MaxCharCount == 0) goto LAB_00c5ddfa;
        do {
          uVar14 = 0;
          uVar12 = (int)pWVar13 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020));
          pWVar11 = ((WCHAR *)(gen_frame + 0x10034));
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar2 = *pWVar13;
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            uVar12 = uVar12 + 1;
            (*(WCHAR * PTR32 *)(gen_frame + 0x1000c)) = pWVar13;
            if ((char)WVar2 == '\n') {
              (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 1;
              *(char *)pWVar11 = '\r';
              pWVar11 = (WCHAR *)((int)pWVar11 + 1);
              uVar14 = uVar14 + 1;
            }
            *(char *)pWVar11 = (char)WVar2;
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            uVar14 = uVar14 + 1;
          } while (uVar14 < 0x13ff);
          BVar10 = gen_imp_WriteFile(*(HANDLE *)(iVar5 + *(*(int * PTR32 *)(gen_frame + 0x10010))),((WCHAR *)(gen_frame + 0x10034)),
                             (int)pWVar11 - (int)((WCHAR *)(gen_frame + 0x10034)),&(*(uint *)(gen_frame + 0x10014)),(GEN_LPANY)0x0);
          if (BVar10 == 0) goto LAB_00c5ddaf;
          (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + (*(uint *)(gen_frame + 0x10014));
        } while (((int)pWVar11 - (int)((WCHAR *)(gen_frame + 0x10034)) <= (int)(*(uint *)(gen_frame + 0x10014))) &&
                ((uint)((int)pWVar13 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020))) < _MaxCharCount));
        goto LAB_00c5ddbb;
      }
      if ((*(char *)(gen_frame + 0x1002b)) == '\x02') {
        pWVar13 = (*(WCHAR * PTR32 *)(gen_frame + 0x10020));
        if (_MaxCharCount != 0) {
          do {
            (*(uint *)(gen_frame + 0x1002c)) = 0;
            uVar12 = (int)pWVar13 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020));
            pWVar11 = ((WCHAR *)(gen_frame + 0x10034));
            do {
              if (_MaxCharCount <= uVar12) break;
              WVar2 = *pWVar13;
              pWVar13 = pWVar13 + 1;
              uVar12 = uVar12 + 2;
              (*(WCHAR * PTR32 *)(gen_frame + 0x1000c)) = pWVar13;
              if (WVar2 == L'\n') {
                (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 2;
                *pWVar11 = L'\r';
                pWVar11 = pWVar11 + 1;
                (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 2;
              }
              (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 2;
              *pWVar11 = WVar2;
              pWVar11 = pWVar11 + 1;
            } while ((*(uint *)(gen_frame + 0x1002c)) < 0x13fe);
            BVar10 = gen_imp_WriteFile(*(HANDLE *)(iVar5 + *(*(int * PTR32 *)(gen_frame + 0x10010))),((WCHAR *)(gen_frame + 0x10034)),
                               (int)pWVar11 - (int)((WCHAR *)(gen_frame + 0x10034)),&(*(uint *)(gen_frame + 0x10014)),(GEN_LPANY)0x0);
            if (BVar10 == 0) goto LAB_00c5ddaf;
            (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + (*(uint *)(gen_frame + 0x10014));
          } while (((int)pWVar11 - (int)((WCHAR *)(gen_frame + 0x10034)) <= (int)(*(uint *)(gen_frame + 0x10014))) &&
                  ((uint)((int)pWVar13 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020))) < _MaxCharCount));
          goto LAB_00c5ddbb;
        }
      }
      else {
        (*(WCHAR * PTR32 *)(gen_frame + 0x10018)) = (*(WCHAR * PTR32 *)(gen_frame + 0x10020));
        if (_MaxCharCount != 0) {
          do {
            (*(uint *)(gen_frame + 0x1002c)) = 0;
            uVar12 = (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020));
            pWVar13 = ((WCHAR *)(gen_frame + 0x11434));
            do {
              if (_MaxCharCount <= uVar12) break;
              WVar2 = *(*(WCHAR * PTR32 *)(gen_frame + 0x10018));
              (*(WCHAR * PTR32 *)(gen_frame + 0x10018)) = (*(WCHAR * PTR32 *)(gen_frame + 0x10018)) + 1;
              uVar12 = uVar12 + 2;
              if (WVar2 == L'\n') {
                *pWVar13 = L'\r';
                pWVar13 = pWVar13 + 1;
                (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 2;
              }
              (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 2;
              *pWVar13 = WVar2;
              pWVar13 = pWVar13 + 1;
            } while ((*(uint *)(gen_frame + 0x1002c)) < 0x6a8);
            iVar15 = 0;
            iVar8 = gen_imp_WideCharToMultiByte(0xfde9,0,((WCHAR *)(gen_frame + 0x11434)),((int)pWVar13 - (int)((WCHAR *)(gen_frame + 0x11434))) / 2,
                                        ((CHAR *)(gen_frame + 0x106dc)),0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
            if (iVar8 == 0) goto LAB_00c5ddaf;
            do {
              BVar10 = gen_imp_WriteFile(*(HANDLE *)(iVar5 + *(*(int * PTR32 *)(gen_frame + 0x10010))),((CHAR *)(gen_frame + 0x106dc)) + iVar15,iVar8 - iVar15
                                 ,&(*(uint *)(gen_frame + 0x10014)),(GEN_LPANY)0x0);
              if (BVar10 == 0) {
                (*(DWORD *)(gen_frame + 0x10030)) = gen_imp_GetLastError();
                break;
              }
              iVar15 = iVar15 + (*(uint *)(gen_frame + 0x10014));
            } while (iVar15 < iVar8);
          } while ((iVar8 <= iVar15) &&
                  ((*(uint *)(gen_frame + 0x10024)) = (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020)),
                  (uint)((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020))) < _MaxCharCount));
          goto LAB_00c5ddbb;
        }
      }
    }
    else {
      p_Var9 = F_00c5b37a();
      pwVar3 = (*((wchar_t * PTR32 *)GEN_TOP((((((char *)(*(undefined * PTR32 *)(((char *)(p_Var9) + 108))) + 16) + (0) * 16) + 4)))));
      BVar10 = gen_imp_GetConsoleMode(*(HANDLE *)(iVar5 + *piVar7),(LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x1000c)));
      if ((BVar10 == 0) || ((pwVar3 == (wchar_t *)0x0 && ((*(char *)(gen_frame + 0x1002b)) == '\0')))) goto LAB_00c5dace;
      (*(WCHAR * PTR32 *)(gen_frame + 0x1000c)) = ((WCHAR *)GEN_TOP(gen_imp_GetConsoleCP()));
      (*(WCHAR * PTR32 *)(gen_frame + 0x10018)) = (WCHAR *)0x0;
      if (_MaxCharCount != 0) {
        (*(uint *)(gen_frame + 0x1002c)) = 0;
        pWVar13 = (*(WCHAR * PTR32 *)(gen_frame + 0x10020));
        do {
          piVar7 = (*(int * PTR32 *)(gen_frame + 0x10010));
          if ((*(char *)(gen_frame + 0x1002b)) == '\0') {
            cVar1 = (char)*pWVar13;
            (*(uint *)(gen_frame + 0x10008)) = (uint)(cVar1 == '\n');
            iVar8 = *(*(int * PTR32 *)(gen_frame + 0x10010)) + iVar5;
            if (*(int *)(iVar8 + 0x38) == 0) {
              iVar8 = F_00c6e020((int)cVar1);
              if (iVar8 == 0) {
                _SrcSizeInBytes = 1;
                pWVar11 = pWVar13;
                goto LAB_00c5d935;
              }
              if (((char *)GEN_TOP(((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10020)) + (_MaxCharCount - (int)pWVar13)))) < (char *)0x2) {
                (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 1;
                *(char *)(iVar5 + 0x34 + *piVar7) = (char)*pWVar13;
                *(undefined4 *)(iVar5 + 0x38 + *piVar7) = 1;
                break;
              }
              iVar8 = F_00c7b31a((wchar_t *)&(*(DWORD *)(gen_frame + 0x10030)),(char *)pWVar13,2);
              if (iVar8 == -1) break;
              pWVar13 = (WCHAR *)((int)pWVar13 + 1);
              (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 1;
            }
            else {
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ae0)) + 0)) = *(CHAR *)(iVar8 + 0x34);
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ae0)) + 1)) = cVar1;
              *(undefined4 *)(iVar8 + 0x38) = 0;
              _SrcSizeInBytes = 2;
              pWVar11 = &(*(undefined2 *)(gen_frame + 0x11ae0));
LAB_00c5d935: ;
              iVar8 = F_00c7b31a((wchar_t *)&(*(DWORD *)(gen_frame + 0x10030)),(char *)pWVar11,_SrcSizeInBytes);
              if (iVar8 == -1) break;
            }
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 1;
            nNumberOfBytesToWrite =
                 gen_imp_WideCharToMultiByte((UINT)(*(WCHAR * PTR32 *)(gen_frame + 0x1000c)),0,(LPCWSTR)&(*(DWORD *)(gen_frame + 0x10030)),1,(LPSTR)&(*(undefined2 *)(gen_frame + 0x11ae0)),5,
                                     (LPCSTR)0x0,(LPBOOL)0x0);
            if (nNumberOfBytesToWrite == 0) break;
            BVar10 = gen_imp_WriteFile(*(HANDLE *)(iVar5 + *(*(int * PTR32 *)(gen_frame + 0x10010))),&(*(undefined2 *)(gen_frame + 0x11ae0)),nNumberOfBytesToWrite,
                               (LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x10018)),(GEN_LPANY)0x0);
            if (BVar10 == 0) goto LAB_00c5ddaf;
            (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x1002c)) + (*(int *)(gen_frame + 0x1001c));
            if ((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) < (int)nNumberOfBytesToWrite) break;
            if ((*(uint *)(gen_frame + 0x10008)) != 0) {
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ae0)) + 0)) = '\r';
              BVar10 = gen_imp_WriteFile(*(HANDLE *)(iVar5 + *(*(int * PTR32 *)(gen_frame + 0x10010))),&(*(undefined2 *)(gen_frame + 0x11ae0)),1,(LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x10018)),
                                 (GEN_LPANY)0x0);
              if (BVar10 == 0) goto LAB_00c5ddaf;
              if ((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) < 1) break;
              (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 1;
              (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 1;
            }
          }
          else {
            if (((*(char *)(gen_frame + 0x1002b)) == '\x01') || ((*(char *)(gen_frame + 0x1002b)) == '\x02')) {
              WVar2 = *pWVar13;
              (*(uint *)(gen_frame + 0x10008)) = (uint)((ushort)WVar2 == 10);
              pWVar13 = pWVar13 + 1;
              (*(uint *)(gen_frame + 0x1002c)) = (*(uint *)(gen_frame + 0x1002c)) + 2;
              (*(DWORD *)(gen_frame + 0x10030)) = (uint)(ushort)WVar2;
            }
            if (((*(char *)(gen_frame + 0x1002b)) == '\x01') || ((*(char *)(gen_frame + 0x1002b)) == '\x02')) {
              wVar4 = F_00c7b5f1((wchar_t)(*(DWORD *)(gen_frame + 0x10030)));
              if (wVar4 != (wchar_t)(*(DWORD *)(gen_frame + 0x10030))) goto LAB_00c5ddaf;
              (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 2;
              if ((*(uint *)(gen_frame + 0x10008)) != 0) {
                (*(DWORD *)(gen_frame + 0x10030)) = 0xd;
                wVar4 = F_00c7b5f1(L'\r');
                if (wVar4 != (wchar_t)(*(DWORD *)(gen_frame + 0x10030))) goto LAB_00c5ddaf;
                (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 1;
                (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 1;
              }
            }
          }
        } while ((*(uint *)(gen_frame + 0x1002c)) < _MaxCharCount);
        goto LAB_00c5ddbb;
      }
LAB_00c5ddc4: ;
      if ((*(DWORD *)(gen_frame + 0x10030)) != 0) {
        if ((*(DWORD *)(gen_frame + 0x10030)) == 5) {
          piVar7 = F_00c51f85();
          *piVar7 = 9;
          puVar6 = F_00c51f98();
          *puVar6 = 5;
        }
        else {
          F_00c51fab((*(DWORD *)(gen_frame + 0x10030)));
        }
        goto LAB_00c5de2b;
      }
    }
LAB_00c5ddfa: ;
    if (((*(byte *)(iVar5 + 4 + *(*(int * PTR32 *)(gen_frame + 0x10010))) & 0x40) != 0) && ((char)*(*(WCHAR * PTR32 *)(gen_frame + 0x10020)) == '\x1a')) {
      iVar5 = 0;
      goto LAB_00c5de3d;
    }
    piVar7 = F_00c51f85();
    *piVar7 = 0x1c;
    puVar6 = F_00c51f98();
    *puVar6 = 0;
  }
LAB_00c5de2b: ;
  iVar5 = -1;
LAB_00c5de3d: ;
  F_00c47745((*(uint *)(gen_frame + 0x11ae8)) ^ (uint)(uint)(gen_frame + 0x0));
  return iVar5;
}

/* ref: __write */
int F_00c5de4b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5de4bu, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int _FileHandle_00;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6590);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5de57;
  if ((*(int *)&gen_args[0]) == -2) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
  }
  else {
    if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
      iVar3 = (*(int *)&gen_args[0]) >> 5;
      iVar4 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) != 0) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(int *)(gen_frame + 0x0)) = -1;
        }
        else {
          (*(int *)(gen_frame + 0x0)) = F_00c5d74e(_FileHandle_00,(*(undefined * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c5df17(_FileHandle_00);
        return (*(int *)(gen_frame + 0x0));
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  return -1;
}

/* ref: FUN_00c5df14 */
unsigned int F_00c5df14(unsigned int gen_a0)
{
  GEN_ENTER(0xc5df14u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c5df17 */
unsigned int F_00c5df17(unsigned int gen_a0)
{
  GEN_ENTER(0xc5df17u, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __freebuf */
unsigned int F_00c5df1f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5df1fu, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  if ((((*(int *)(((char *)(_File) + 12))) & 0x83U) != 0) && (((*(int *)(((char *)(_File) + 12))) & 8U) != 0)) {
    F_00c4c68f((*(char * PTR32 *)(((char *)(_File) + 8))));
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xfffffbf7;
    (*(char * PTR32 *)((char *)(_File))) = (char *)0x0;
    (*(char * PTR32 *)(((char *)(_File) + 8))) = (char *)0x0;
    (*(int *)(((char *)(_File) + 4))) = 0;
  }
  return 0;
}

/* ref: __stbuf */
int F_00c5df50(unsigned int gen_a0)
{
  GEN_ENTER(0xc5df50u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  
  iVar3 = F_00c5d07b(_File);
  iVar3 = F_00c7adb7(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = F_00c50860();
  if (_File == (undefined *)(uVar4 + 0x20)) {
    iVar3 = 0;
  }
  else {
    uVar4 = F_00c50860();
    if (_File != (undefined *)(uVar4 + 0x40)) {
      return 0;
    }
    iVar3 = 1;
  }
  *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
  if (((*(int *)(((char *)(_File) + 12))) & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &REFG(undefined4, 0x15d74e8) + iVar3;
  if (*piVar1 == 0) {
    pvVar5 = F_00c54c2e(0x1000);
    *piVar1 = (int)pvVar5;
    if (pvVar5 == (undefined *)0x0) {
      (*(char * PTR32 *)(((char *)(_File) + 8))) = (char *)&(*(int *)(((char *)(_File) + 20)));
      (*(char * PTR32 *)((char *)(_File))) = (char *)&(*(int *)(((char *)(_File) + 20)));
      (*(int *)(((char *)(_File) + 24))) = 2;
      (*(int *)(((char *)(_File) + 4))) = 2;
      goto LAB_00c5dfd9;
    }
  }
  pcVar2 = (char *)*piVar1;
  (*(char * PTR32 *)(((char *)(_File) + 8))) = pcVar2;
  (*(char * PTR32 *)((char *)(_File))) = pcVar2;
  (*(int *)(((char *)(_File) + 24))) = 0x1000;
  (*(int *)(((char *)(_File) + 4))) = 0x1000;
LAB_00c5dfd9: ;
  (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x1102;
  return 1;
}

/* ref: __ftbuf */
unsigned int F_00c5dfec(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5dfecu, gen_a0, gen_a1, 0u, 0u);
  int _Flag = (int)gen_a0;
  undefined * _File = (undefined *)(uintptr_t)gen_a1;
  if ((_Flag != 0) && (((*(int *)(((char *)(_File) + 12))) & 0x1000U) != 0)) {
    F_00c50d59(_File);
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffffeeff;
    (*(int *)(((char *)(_File) + 24))) = 0;
    (*(char * PTR32 *)((char *)(_File))) = (char *)0x0;
    (*(char * PTR32 *)(((char *)(_File) + 8))) = (char *)0x0;
  }
  return 0;
}

/* ref: vfprintf_helper */
uint F_00c5e020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5e020u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * _File;
  int * piVar1;
  uint uVar2;
  int _Flag;
  undefined * puVar3;
  
  _File = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f65b0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc5e02c;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) || ((*(int *)&gen_args[2]) == 0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  F_00c50937((*(undefined * PTR32 *)&gen_args[1]));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c5e0e5;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
LAB_00c5e0e5: ;
  if ((*(uint *)(gen_frame + 0x0)) == 0) {
    _Flag = F_00c5df50(_File);
    (*(uint *)(gen_frame + 0x0)) = ((code *)(*(gen_code32 *)&gen_args[0]))(_File,(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    F_00c5dfec(_Flag,_File);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c5e121((gen_frame + 0x1c));
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c5e121 */
uint F_00c5e121(unsigned int gen_a0)
{
  GEN_ENTER(0xc5e121u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: FID_conflict:__vfprintf_l */
int F_00c5e12b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e12bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc56a1d)),_File,_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vfprintf_s_l_00c5e14b */
int F_00c5e14b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e14bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5784c)),_File,_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vfprintf_s_l_00c5e16b */
int F_00c5e16b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e16bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5867b)),_File,_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vfprintf_00c5e18b */
int F_00c5e18b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e18bu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc56a1d)),_File,_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vfprintf_00c5e1aa */
int F_00c5e1aa(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e1aau, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5784c)),_File,_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vfprintf_00c5e1c9 */
int F_00c5e1c9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e1c9u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5867b)),_File,_Format,0,_ArgList);
  return uVar1;
}

/* ref: __openfile */
undefined * F_00c5e1e8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e1e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uchar uVar6;
  int * piVar7;
  int iVar8;
  int eVar9;
  uint _OpenFlag;
  char * pcVar10;
  uchar * puVar11;
  uchar * puVar12;
  uint local_8;
  
  _OpenFlag = 0;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  for (pcVar10 = (*(char * PTR32 *)&gen_args[1]); *pcVar10 == ' '; pcVar10 = pcVar10 + 1) {
  }
  cVar1 = *pcVar10;
  if (cVar1 == 'a') {
    _OpenFlag = 0x109;
LAB_00c5e247: ;
    local_8 = REFG(undefined4, 0x15d75b4) | 2;
  }
  else {
    if (cVar1 != 'r') {
      if (cVar1 != 'w') {
        piVar7 = F_00c51f85();
        *piVar7 = 0x16;
        F_00c4c305();
        return (undefined *)0x0;
      }
      _OpenFlag = 0x301;
      goto LAB_00c5e247;
    }
    local_8 = REFG(undefined4, 0x15d75b4) | 1;
  }
  bVar2 = true;
  puVar11 = (uchar *)(pcVar10 + 1);
  uVar6 = *puVar11;
  if (uVar6 != '\0') {
    do {
      if (!bVar2) break;
      if ((char)uVar6 < 'T') {
        if (uVar6 == 'S') {
          if (bVar3) goto LAB_00c5e371;
          bVar3 = true;
          _OpenFlag = _OpenFlag | 0x20;
        }
        else if (uVar6 != ' ') {
          if (uVar6 == '+') {
            if ((_OpenFlag & 2) != 0) goto LAB_00c5e371;
            _OpenFlag = _OpenFlag & 0xfffffffe | 2;
            local_8 = local_8 & 0xfffffffc | 0x80;
          }
          else if (uVar6 == ',') {
            bVar5 = true;
LAB_00c5e371: ;
            bVar2 = false;
          }
          else if (uVar6 == 'D') {
            if ((_OpenFlag & 0x40) != 0) goto LAB_00c5e371;
            _OpenFlag = _OpenFlag | 0x40;
          }
          else if (uVar6 == 'N') {
            _OpenFlag = _OpenFlag | 0x80;
          }
          else {
            if (uVar6 != 'R') goto LAB_00c5e426;
            if (bVar3) goto LAB_00c5e371;
            bVar3 = true;
            _OpenFlag = _OpenFlag | 0x10;
          }
        }
      }
      else if (uVar6 == 'T') {
        if ((_OpenFlag & 0x1000) != 0) goto LAB_00c5e371;
        _OpenFlag = _OpenFlag | 0x1000;
      }
      else if (uVar6 == 'b') {
        if ((_OpenFlag & 0xc000) != 0) goto LAB_00c5e371;
        _OpenFlag = _OpenFlag | 0x8000;
      }
      else if (uVar6 == 'c') {
        if (bVar4) goto LAB_00c5e371;
        local_8 = local_8 | 0x4000;
        bVar4 = true;
      }
      else if (uVar6 == 'n') {
        if (bVar4) goto LAB_00c5e371;
        local_8 = local_8 & 0xffffbfff;
        bVar4 = true;
      }
      else {
        if (uVar6 != 't') goto LAB_00c5e426;
        if ((_OpenFlag & 0xc000) != 0) goto LAB_00c5e371;
        _OpenFlag = _OpenFlag | 0x4000;
      }
      puVar11 = puVar11 + 1;
      uVar6 = *puVar11;
    } while (uVar6 != '\0');
    if (bVar5) {
      for (; *puVar11 == ' '; puVar11 = puVar11 + 1) {
      }
      iVar8 = F_00c7b9e3(((uchar *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111a3b8)))),puVar11,3);
      if (iVar8 != 0) goto LAB_00c5e426;
      for (puVar11 = puVar11 + 3; *puVar11 == ' '; puVar11 = puVar11 + 1) {
      }
      if (*puVar11 != '=') goto LAB_00c5e426;
      do {
        puVar12 = puVar11;
        puVar11 = puVar12 + 1;
      } while (*puVar11 == ' ');
      iVar8 = F_00c7b87d(puVar11,(uchar *)"UTF-8",5);
      if (iVar8 == 0) {
        puVar11 = puVar12 + 6;
        _OpenFlag = _OpenFlag | 0x40000;
      }
      else {
        iVar8 = F_00c7b87d(puVar11,(uchar *)"UTF-16LE",8);
        if (iVar8 == 0) {
          puVar11 = puVar12 + 9;
          _OpenFlag = _OpenFlag | 0x20000;
        }
        else {
          iVar8 = F_00c7b87d(puVar11,(uchar *)"UNICODE",7);
          if (iVar8 != 0) goto LAB_00c5e426;
          puVar11 = puVar12 + 8;
          _OpenFlag = _OpenFlag | 0x10000;
        }
      }
    }
  }
  for (; *puVar11 == ' '; puVar11 = puVar11 + 1) {
  }
  if (*puVar11 == '\0') {
    eVar9 = F_00c71149((int *)&(*(char * PTR32 *)&gen_args[1]),(*(char * PTR32 *)&gen_args[0]),_OpenFlag,(*(int *)&gen_args[2]),0x180);
    if (eVar9 != 0) {
      return (undefined *)0x0;
    }
    *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 12))))) = local_8;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 4))))) = 0;
    (*(char * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[3])))) = (char *)0x0;
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 8))))) = (char *)0x0;
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 28))))) = (char *)0x0;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 16))))) = (int)(*(char * PTR32 *)&gen_args[1]);
    return (*(undefined * PTR32 *)&gen_args[3]);
  }
LAB_00c5e426: ;
  piVar7 = F_00c51f85();
  *piVar7 = 0x16;
  F_00c4c305();
  return (undefined *)0x0;
}

/* ref: __getstream */
undefined * F_00c5e47f(void)
{
  GEN_ENTER(0xc5e47fu, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * _File;
  int iVar3;
  undefined * pvVar4;
  BOOL BVar5;
  int _Index;
  undefined * pFVar6;
  int local_24;
  undefined * local_20;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f65d0);
  uStack_c = 0xc5e48b;
  pFVar6 = (undefined *)0x0;
  local_20 = (undefined *)0x0;
  F_00c5aa4f(1);
  local_8 = (undefined *)0x0;
  _Index = 0;
  do {
    local_24 = _Index;
    if (REFG(int, 0x15e52c0) <= _Index) {
LAB_00c5e578: ;
      if (pFVar6 != (undefined *)0x0) {
        (*(int *)(((char *)(pFVar6) + 12))) = (*(int *)(((char *)(pFVar6) + 12))) & 0x8000;
        (*(int *)(((char *)(pFVar6) + 4))) = 0;
        (*(char * PTR32 *)(((char *)(pFVar6) + 8))) = (char *)0x0;
        (*(char * PTR32 *)((char *)(pFVar6))) = (char *)0x0;
        (*(char * PTR32 *)(((char *)(pFVar6) + 28))) = (char *)0x0;
        (*(int *)(((char *)(pFVar6) + 16))) = -1;
      }
      local_8 = (undefined *)0xfffffffe;
      F_00c5e5a9();
      return pFVar6;
    }
    piVar1 = (int *)(REFG(int, 0x15e42a8) + _Index * 4);
    if (*piVar1 == 0) {
      pvVar4 = F_00c54c2e(0x38);
      *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4) = pvVar4;
      if (pvVar4 != (undefined *)0x0) {
        BVar5 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(*(int *)(REFG(int, 0x15e42a8) + _Index * 4) + 0x20),4000);
        if (BVar5 == 0) {
          F_00c4c68f(*(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4));
          *(undefined4 *)(REFG(int, 0x15e42a8) + _Index * 4) = 0;
        }
        else {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(REFG(int, 0x15e42a8) + _Index * 4) + 0x20));
          pFVar6 = *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4);
          local_20 = pFVar6;
          (*(int *)(((char *)(pFVar6) + 12))) = 0;
        }
      }
      goto LAB_00c5e578;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && ((uVar2 & 0x8000) == 0)) {
      if (_Index - 3U < 0x11) {
        iVar3 = F_00c5a98d(_Index + 0x10);
        if (iVar3 == 0) goto LAB_00c5e578;
      }
      F_00c50978(_Index,*(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4));
      _File = *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4);
      if (((*(int *)(((char *)(_File) + 12))) & 0x83) == 0) {
        local_20 = _File;
        pFVar6 = _File;
        goto LAB_00c5e578;
      }
      F_00c509e6(_Index,_File);
    }
    _Index = _Index + 1;
  } while( true );
}

/* ref: FUN_00c5e5a6 */
uint F_00c5e5a6(unsigned int gen_a0)
{
  GEN_ENTER(0xc5e5a6u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: FUN_00c5e5a9 */
uint F_00c5e5a9(void)
{
  GEN_ENTER(0xc5e5a9u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: __local_unwind4 */
unsigned int F_00c5e5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = (*(uint * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x18)) = (*(int *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)&gen_args[2]);
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xc5e650));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined * PTR32 *)(gen_frame + 0x8));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x8)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  while( true ) {
    uVar2 = *(uint *)((*(int *)&gen_args[1]) + 0xc);
    if ((uVar2 == 0xfffffffe) || (((*(uint *)&gen_args[2]) != 0xfffffffe && (uVar2 <= (*(uint *)&gen_args[2]))))) break;
    puVar1 = ((undefined4 *)GEN_TOP(((*(uint *)((*(int *)&gen_args[1]) + 8) ^ *(*(uint * PTR32 *)&gen_args[0])) + 0x10 + uVar2 * 0xc)));
    *(undefined4 *)((*(int *)&gen_args[1]) + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      F_00c6fab5(puVar1[2],0x101);
      F_00c6fad4(puVar1[2]);
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  return 0;
}

/* ref: FUN_00c5e650 */
uint F_00c5e650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e650u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    F_00c47745(*(uint *)(param_2 + 8) ^ param_2);
    F_00c5e5c0(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10),
                    *(undefined4 *)(param_2 + 0xc));
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: FUN_00c5e696 */
unsigned int F_00c5e696(unsigned int gen_a0)
{
  GEN_ENTER(0xc5e696u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  F_00c5e5c0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(param_1 + 0x1c));
  return 0;
}

/* ref: _EH4_CallFilterFunc */
uint F_00c5e6b2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5e6b2u, gen_a0, gen_a1, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (*param_1)();
  return uVar1;
}

/* ref: _EH4_TransferToHandler */
unsigned int F_00c5e6c9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5e6c9u, gen_a0, gen_a1, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00c6fab5(param_1,1);
  (*param_1)(0);
  return 0;
}

/* ref: _EH4_GlobalUnwind2 */
unsigned int F_00c5e6e2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5e6e2u, gen_a0, gen_a1, 0u, 0u);
  PVOID param_1 = (PVOID)gen_a0;
  GEN_LPANY param_2 = (GEN_LPANY)gen_a1;
  gen_imp_RtlUnwind(param_1,(PVOID)0xc5e6f6,param_2,(PVOID)0x0);
  return 0;
}

/* ref: _EH4_LocalUnwind */
unsigned int F_00c5e6fb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5e6fbu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00c5e5c0(param_4,param_1,param_2);
  return 0;
}

/* ref: FUN_00c5e712 */
uint F_00c5e712(unsigned int gen_a0)
{
  GEN_ENTER(0xc5e712u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  REFG(undefined4, 0x15e418c) = -(uint)(param_1 != 0) & REFG(undefined4, 0x15e42a0);
  return REFG(undefined4, 0x15e418c);
}

/* ref: FUN_00c5e72b */
uint F_00c5e72b(void)
{
  GEN_ENTER(0xc5e72bu, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x15e418c) = gen_imp_IsProcessorFeaturePresent(10);
  return 0;
}

/* ref: FUN_00c5e740 */
float10 F_00c5e740(double gen_a0)
{
  GEN_ENTER(0xc5e740u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  double in_xmm0;
  float10 fVar1;
  
  in_xmm0 = (double)in_st0;
  fVar1 = F_00c5e75e(in_xmm0,(int)(ulonglong)gen_d2bits(in_xmm0),
                       (int)((ulonglong)gen_d2bits(in_xmm0) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c5e75e */
float10 F_00c5e75e(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e75eu, 0u, gen_a1, gen_a2, 0u);
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  gen_args[3] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = (uint)(ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x34);
    dVar7 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) &
                       (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x111a3e0)) |
                       (ulonglong)gen_d2bits(REFG(undefined8, 0x111a450)));
    dVar8 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x111a3e8) |
                       *(ulonglong *)&REFG(undefined, 0x111a458));
    uVar1 = (ushort)(ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x111a400) + dVar7) & 0x7f0;
    dVar12 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x111a418) & (ulonglong)gen_d2bits(dVar8));
    dVar10 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x111a410) & (ulonglong)gen_d2bits(dVar7)) *
             *(double *)(&REFG(undefined, 0x111a8f0) + uVar1) - *(double *)&REFG(undefined, 0x111a3f0);
    dVar7 = (dVar7 - gen_bits2d(*(ulonglong *)&REFG(undefined, 0x111a410) & (ulonglong)gen_d2bits(dVar7))) *
            *(double *)(&REFG(undefined, 0x111a8f0) + uVar1);
    dVar9 = (dVar8 - dVar12) * *(double *)(&REFG(undefined, 0x111a8f8) + uVar1);
    dVar8 = dVar7 + dVar10;
    dVar12 = dVar9 + (dVar12 * *(double *)(&REFG(undefined, 0x111a8f8) + uVar1) - *(double *)&REFG(undefined, 0x111a3f8));
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      (*(double *)(gen_frame + 0x4)) = ((((*(double *)&REFG(undefined, 0x111a4a8) * dVar12 + *(double *)&REFG(undefined, 0x111a4b8)) * dVar12 +
                  *(double *)&REFG(undefined, 0x111a4c8)) * (dVar12 * dVar12) +
                 (((*(double *)&REFG(undefined, 0x111a4a0) * dVar8 + *(double *)&REFG(undefined, 0x111a4b0)) * dVar8 +
                  *(double *)&REFG(undefined, 0x111a4c0)) * (((dVar8 * dVar8) * (dVar8 * dVar8)) * dVar8) +
                 *(double *)&REFG(undefined, 0x111a4d0) * dVar8)) +
                ((*(double *)(&REFG(undefined, 0x111a4e8) + uVar1) + dVar11 * *(double *)&REFG(undefined, 0x111a428)) +
                gen_bits2d((ulonglong)gen_d2bits(dVar9) & *(ulonglong *)(&REFG(undefined, 0x111a438) + iVar5)))) +
                (((*(double *)(&REFG(undefined, 0x111a4e0) + uVar1) + dVar10) + dVar11 * *(double *)&REFG(undefined, 0x111a420))
                + gen_bits2d((ulonglong)gen_d2bits(dVar7) & *(ulonglong *)(&REFG(undefined, 0x111a430) + iVar5)));
      return (float10)(*(double *)(gen_frame + 0x4));
    }
    (*(double *)(gen_frame + 0x4)) = gen_bits2d(-(ulonglong)
                          (*(double *)&REFG(undefined, 0x111a460) == gen_bits2d(CONCAT44((*(uint *)&gen_args[3]),(*(int *)&gen_args[2])))));
    if ((short)(ulonglong)gen_d2bits((*(double *)(gen_frame + 0x4))) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (REFG(undefined8, 0x111a450) ==
            gen_bits2d(CONCAT44((*(uint *)&gen_args[3]),(*(int *)&gen_args[2])) & (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x111a3e0)) |
                       (ulonglong)gen_d2bits(REFG(undefined8, 0x111a450)))) {
          return (float10)*(double *)&REFG(undefined, 0x111a488);
        }
        uVar6 = 0x3e9;
        (*(double *)(gen_frame + 0x4)) = *(double *)&REFG(undefined, 0x111a3e0);
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) || ((*(int *)&gen_args[2]) == 0 && ((*(uint *)&gen_args[3]) & 0xfffff) == 0)) {
        (*(double *)(gen_frame + 0x4)) = -NAN;
        uVar6 = 9;
      }
      else {
        uVar6 = 0x3e9;
      }
      goto LAB_00c5e96a;
    }
    (*(double *)&gen_args[0]) = gen_bits2d(CONCAT44((*(uint *)&gen_args[3]),(*(int *)&gen_args[2]))) * REFG(undefined8, 0x111a470);
    iVar4 = -0x34;
  }
  uVar6 = 8;
  (*(double *)(gen_frame + 0x4)) = REFG(undefined8, 0x111a480);
LAB_00c5e96a: ;
  F_00c6bf0e(&(*(int *)&gen_args[2]),&(*(int *)&gen_args[2]),&(*(double *)(gen_frame + 0x4)),uVar6);
  return (float10)(*(double *)(gen_frame + 0x4));
}

/* ref: FUN_00c5eb11 */
unsigned int F_00c5eb11(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc5eb11u, gen_a0, 0u, 0u, 0u);
  char in_cl = (char)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  if (in_cl == '\0') {
    return 0;
  }
  return 0;
}

/* ref: __trandisp1 */
unsigned int F_00c5ebd0(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5ebd0u, gen_a0, 0u, gen_a2, 0u);
  int in_edx = (int)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  int in_ebp = (int)gen_a2;
  byte bVar1;
  float10 fVar2;
  char cVar3;
  undefined4 in_ECX = 0;
  undefined2 uVar4;
  
  if (*(char *)(in_edx + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(in_ebp + -0xa4) >> 8) & 0xfe | 2),0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(in_ebp + -0xa2) = uVar4;
  fVar2 = (float10)0;
  *(int *)(in_ebp + -0x94) = in_edx;
  *(ushort *)(in_ebp + -0xa0) =
       (ushort)GEN_ISNAN(in_st0) << 8 | (ushort)(in_st0 < fVar2) << 9 | (ushort)(in_st0 != fVar2) << 10 |
       (ushort)(in_st0 == fVar2) << 0xe;
  *(undefined1 *)(in_ebp + -0x90) = 0;
  cVar3 = (char)(*(char *)(in_ebp + -0x9f) << 1) >> 1;
  bVar1 = cVar3 << 1;
  ((code *)*((gen_code32 *)GEN_TOP((in_edx + (char)(&REFG(undefined, 0x111ad7c))[bVar1 & 0xf | cVar3 < '\0'] + 0x10))))
            (CONCAT31((int3)((uint)in_ECX >> 8),bVar1) & 0x404);
  return 0;
}

/* ref: FUN_00c5eccc */
unsigned int F_00c5eccc(void)
{
  GEN_ENTER(0xc5ecccu, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c5ecd4 */
unsigned int F_00c5ecd4(double gen_a0)
{
  GEN_ENTER(0xc5ecd4u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  return 0;
}

/* ref: FUN_00c5ecdd */
unsigned int F_00c5ecdd(double gen_a0)
{
  GEN_ENTER(0xc5ecddu, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  return 0;
}

/* ref: FUN_00c5ece2 */
unsigned int F_00c5ece2(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5ece2u, 0u, gen_a1, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  int in_ebp = (int)gen_a1;
  *(float10 *)(in_ebp + -0x9e) = in_st0;
  if ((*(byte *)(in_ebp + -0x97) & 0x40) != 0) {
    *(undefined1 *)(in_ebp + -0x90) = 7;
    return 0;
  }
  *(undefined1 *)(in_ebp + -0x90) = 1;
  return 0;
}

/* ref: FUN_00c5ed0f */
unsigned int F_00c5ed0f(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5ed0fu, 0u, gen_a1, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  int in_ebp = (int)gen_a1;
  *(float10 *)(in_ebp + -0x9e) = in_st0;
  if ((*(byte *)(in_ebp + -0x97) & 0x40) == 0) {
    *(undefined1 *)(in_ebp + -0x90) = 1;
  }
  else {
    *(undefined1 *)(in_ebp + -0x90) = 7;
  }
  return 0;
}

/* ref: FUN_00c5ed76 */
unsigned int F_00c5ed76(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5ed76u, gen_a0, 0u, gen_a2, 0u);
  undefined1 in_cl = (undefined1)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  int in_ebp = (int)gen_a2;
  if (*(char *)(in_ebp + -0x90) < '\x01') {
    *(undefined1 *)(in_ebp + -0x90) = 1;
  }
  return 0;
}

/* ref: FUN_00c5ed93 */
unsigned int F_00c5ed93(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc5ed93u, gen_a0, 0u, 0u, 0u);
  char in_cl = (char)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  return 0;
}

/* ref: FUN_00c5edcc */
uint F_00c5edcc(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc5edccu, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  if ((in_eax & 0x80000) != 0) {
    return 7;
  }
  return 1;
}

/* ref: __fload_withFB */
uint F_00c5ede5(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ede5u, gen_a0, 0u, 0u, 0u);
  int in_edx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_edx + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(in_edx + 4);
}

/* ref: FUN_00c5ee28 */
uint F_00c5ee28(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5ee28u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

/* ref: __get_lc_time */
uint F_00c5ef83(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5ef83u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_eax = (undefined *)(uintptr_t)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  LPCWSTR _LocaleName;
  
  _LocaleName = (LPCWSTR)(uint)*((ushort *)GEN_TOP(((int)&(*((char * PTR32 *)GEN_TOP(((((char *)(in_eax) + 16) + (3) * 16))))) + 2)));
  (*(LPCWSTR *)(gen_frame + 0x8)) = (LPCWSTR)(uint)*(ushort *)&(*((wchar_t * PTR32 *)GEN_TOP((((((char *)(in_eax) + 16) + (3) * 16) + 4)))));
  if (in_ecx == (undefined *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = (undefined *)0x0;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = in_eax;
    uVar2 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x31,(undefined *)((int)in_ecx + 4));
    uVar3 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x32,(undefined *)((int)in_ecx + 8));
    uVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x33,(undefined *)((int)in_ecx + 0xc));
    uVar5 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x34,(undefined *)((int)in_ecx + 0x10));
    uVar6 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x35,(undefined *)((int)in_ecx + 0x14));
    uVar7 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x36,(undefined *)((int)in_ecx + 0x18));
    uVar8 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x37,in_ecx);
    uVar9 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2a,(undefined *)((int)in_ecx + 0x20));
    uVar10 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2b,(undefined *)((int)in_ecx + 0x24));
    uVar11 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2c,(undefined *)((int)in_ecx + 0x28));
    uVar12 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2d,(undefined *)((int)in_ecx + 0x2c));
    uVar13 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2e,(undefined *)((int)in_ecx + 0x30));
    uVar14 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2f,(undefined *)((int)in_ecx + 0x34));
    uVar15 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x30,(undefined *)((int)in_ecx + 0x1c));
    uVar16 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x44,(undefined *)((int)in_ecx + 0x38));
    uVar17 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x45,(undefined *)((int)in_ecx + 0x3c));
    uVar18 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x46,(undefined *)((int)in_ecx + 0x40));
    uVar19 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x47,(undefined *)((int)in_ecx + 0x44));
    uVar20 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x48,(undefined *)((int)in_ecx + 0x48));
    uVar21 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x49,(undefined *)((int)in_ecx + 0x4c));
    uVar22 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4a,(undefined *)((int)in_ecx + 0x50));
    uVar23 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4b,(undefined *)((int)in_ecx + 0x54));
    uVar24 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4c,(undefined *)((int)in_ecx + 0x58));
    uVar25 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4d,(undefined *)((int)in_ecx + 0x5c));
    uVar26 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4e,(undefined *)((int)in_ecx + 0x60));
    uVar27 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4f,(undefined *)((int)in_ecx + 100));
    uVar28 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x38,(undefined *)((int)in_ecx + 0x68));
    uVar29 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x39,(undefined *)((int)in_ecx + 0x6c));
    uVar30 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3a,(undefined *)((int)in_ecx + 0x70));
    uVar31 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3b,(undefined *)((int)in_ecx + 0x74));
    uVar32 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3c,(undefined *)((int)in_ecx + 0x78));
    uVar33 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3d,(undefined *)((int)in_ecx + 0x7c));
    uVar34 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3e,(undefined *)((int)in_ecx + 0x80));
    uVar35 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3f,(undefined *)((int)in_ecx + 0x84));
    uVar36 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x40,(undefined *)((int)in_ecx + 0x88));
    uVar37 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x41,(undefined *)((int)in_ecx + 0x8c));
    uVar38 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x42,(undefined *)((int)in_ecx + 0x90));
    uVar39 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x43,(undefined *)((int)in_ecx + 0x94));
    uVar40 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x28,(undefined *)((int)in_ecx + 0x98));
    uVar41 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x29,(undefined *)((int)in_ecx + 0x9c));
    uVar42 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,(*(LPCWSTR *)(gen_frame + 0x8)),0x1f,(undefined *)((int)in_ecx + 0xa0));
    uVar43 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,(*(LPCWSTR *)(gen_frame + 0x8)),0x20,(undefined *)((int)in_ecx + 0xa4));
    uVar44 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,(*(LPCWSTR *)(gen_frame + 0x8)),0x1003,(undefined *)((int)in_ecx + 0xa8));
    uVar45 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,(*(LPCWSTR *)(gen_frame + 0x8)),0x1009,(undefined *)((int)in_ecx + 0xb0));
    *(LPCWSTR *)((int)in_ecx + 0xac) = (*(LPCWSTR *)(gen_frame + 0x8));
    uVar46 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x31,(undefined *)((int)in_ecx + 0xbc));
    uVar47 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x32,(undefined *)((int)in_ecx + 0xc0));
    uVar48 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x33,(undefined *)((int)in_ecx + 0xc4));
    uVar49 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x34,(undefined *)((int)in_ecx + 200));
    uVar50 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x35,(undefined *)((int)in_ecx + 0xcc));
    uVar51 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x36,(undefined *)((int)in_ecx + 0xd0));
    uVar52 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x37,(undefined *)((int)in_ecx + 0xb8));
    uVar53 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2a,(undefined *)((int)in_ecx + 0xd8));
    uVar54 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2b,(undefined *)((int)in_ecx + 0xdc));
    uVar55 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2c,(undefined *)((int)in_ecx + 0xe0));
    uVar56 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2d,(undefined *)((int)in_ecx + 0xe4));
    uVar57 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2e,(undefined *)((int)in_ecx + 0xe8));
    uVar58 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2f,(undefined *)((int)in_ecx + 0xec));
    uVar59 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x30,(undefined *)((int)in_ecx + 0xd4));
    uVar60 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x44,(undefined *)((int)in_ecx + 0xf0));
    uVar61 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x45,(undefined *)((int)in_ecx + 0xf4));
    uVar62 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x46,(undefined *)((int)in_ecx + 0xf8));
    uVar63 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x47,(undefined *)((int)in_ecx + 0xfc));
    uVar64 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x48,(undefined *)((int)in_ecx + 0x100));
    uVar65 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x49,(undefined *)((int)in_ecx + 0x104));
    uVar66 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4a,(undefined *)((int)in_ecx + 0x108));
    uVar67 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4b,(undefined *)((int)in_ecx + 0x10c));
    uVar68 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4c,(undefined *)((int)in_ecx + 0x110));
    uVar69 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4d,(undefined *)((int)in_ecx + 0x114));
    uVar70 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4e,(undefined *)((int)in_ecx + 0x118));
    uVar71 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4f,(undefined *)((int)in_ecx + 0x11c));
    uVar72 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x38,(undefined *)((int)in_ecx + 0x120));
    uVar73 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x39,(undefined *)((int)in_ecx + 0x124));
    uVar74 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3a,(undefined *)((int)in_ecx + 0x128));
    uVar75 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3b,(undefined *)((int)in_ecx + 300));
    uVar76 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3c,(undefined *)((int)in_ecx + 0x130));
    uVar77 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3d,(undefined *)((int)in_ecx + 0x134));
    uVar78 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3e,(undefined *)((int)in_ecx + 0x138));
    uVar79 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3f,(undefined *)((int)in_ecx + 0x13c));
    uVar80 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x40,(undefined *)((int)in_ecx + 0x140));
    uVar81 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x41,(undefined *)((int)in_ecx + 0x144));
    uVar82 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x42,(undefined *)((int)in_ecx + 0x148));
    uVar83 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x43,(undefined *)((int)in_ecx + 0x14c));
    uVar84 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x28,(undefined *)((int)in_ecx + 0x150));
    uVar85 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x29,(undefined *)((int)in_ecx + 0x154));
    uVar86 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,(*(LPCWSTR *)(gen_frame + 0x8)),0x1f,(undefined *)((int)in_ecx + 0x158));
    uVar87 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,(*(LPCWSTR *)(gen_frame + 0x8)),0x20,(undefined *)((int)in_ecx + 0x15c));
    uVar1 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,(*(LPCWSTR *)(gen_frame + 0x8)),0x1003,(undefined *)((int)in_ecx + 0x160));
    uVar1 = uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11
                    | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20
                    | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29
                    | uVar30 | uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38
                    | uVar39 | uVar40 | uVar41 | uVar42 | uVar43 | uVar44 | uVar45 | uVar46 | uVar47
                    | uVar48 | uVar49 | uVar50 | uVar51 | uVar52 | uVar53 | uVar54 | uVar55 | uVar56
                    | uVar57 | uVar58 | uVar59 | uVar60 | uVar61 | uVar62 | uVar63 | uVar64 | uVar65
                    | uVar66 | uVar67 | uVar68 | uVar69 | uVar70 | uVar71 | uVar72 | uVar73 | uVar74
                    | uVar75 | uVar76 | uVar77 | uVar78 | uVar79 | uVar80 | uVar81 | uVar82 | uVar83
                    | uVar84 | uVar85 | uVar86 | uVar87;
  }
  return uVar1;
}

/* ref: ___free_lc_time */
unsigned int F_00c5f782(unsigned int gen_a0)
{
  GEN_ENTER(0xc5f782u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    F_00c4c68f((undefined *)param_1[1]);
    F_00c4c68f((undefined *)param_1[2]);
    F_00c4c68f((undefined *)param_1[3]);
    F_00c4c68f((undefined *)param_1[4]);
    F_00c4c68f((undefined *)param_1[5]);
    F_00c4c68f((undefined *)param_1[6]);
    F_00c4c68f((undefined *)*param_1);
    F_00c4c68f((undefined *)param_1[8]);
    F_00c4c68f((undefined *)param_1[9]);
    F_00c4c68f((undefined *)param_1[10]);
    F_00c4c68f((undefined *)param_1[0xb]);
    F_00c4c68f((undefined *)param_1[0xc]);
    F_00c4c68f((undefined *)param_1[0xd]);
    F_00c4c68f((undefined *)param_1[7]);
    F_00c4c68f((undefined *)param_1[0xe]);
    F_00c4c68f((undefined *)param_1[0xf]);
    F_00c4c68f((undefined *)param_1[0x10]);
    F_00c4c68f((undefined *)param_1[0x11]);
    F_00c4c68f((undefined *)param_1[0x12]);
    F_00c4c68f((undefined *)param_1[0x13]);
    F_00c4c68f((undefined *)param_1[0x14]);
    F_00c4c68f((undefined *)param_1[0x15]);
    F_00c4c68f((undefined *)param_1[0x16]);
    F_00c4c68f((undefined *)param_1[0x17]);
    F_00c4c68f((undefined *)param_1[0x18]);
    F_00c4c68f((undefined *)param_1[0x19]);
    F_00c4c68f((undefined *)param_1[0x1a]);
    F_00c4c68f((undefined *)param_1[0x1b]);
    F_00c4c68f((undefined *)param_1[0x1c]);
    F_00c4c68f((undefined *)param_1[0x1d]);
    F_00c4c68f((undefined *)param_1[0x1e]);
    F_00c4c68f((undefined *)param_1[0x1f]);
    F_00c4c68f((undefined *)param_1[0x20]);
    F_00c4c68f((undefined *)param_1[0x21]);
    F_00c4c68f((undefined *)param_1[0x22]);
    F_00c4c68f((undefined *)param_1[0x23]);
    F_00c4c68f((undefined *)param_1[0x24]);
    F_00c4c68f((undefined *)param_1[0x25]);
    F_00c4c68f((undefined *)param_1[0x26]);
    F_00c4c68f((undefined *)param_1[0x27]);
    F_00c4c68f((undefined *)param_1[0x28]);
    F_00c4c68f((undefined *)param_1[0x29]);
    F_00c4c68f((undefined *)param_1[0x2a]);
    F_00c4c68f((undefined *)param_1[0x2f]);
    F_00c4c68f((undefined *)param_1[0x30]);
    F_00c4c68f((undefined *)param_1[0x31]);
    F_00c4c68f((undefined *)param_1[0x32]);
    F_00c4c68f((undefined *)param_1[0x33]);
    F_00c4c68f((undefined *)param_1[0x34]);
    F_00c4c68f((undefined *)param_1[0x2e]);
    F_00c4c68f((undefined *)param_1[0x36]);
    F_00c4c68f((undefined *)param_1[0x37]);
    F_00c4c68f((undefined *)param_1[0x38]);
    F_00c4c68f((undefined *)param_1[0x39]);
    F_00c4c68f((undefined *)param_1[0x3a]);
    F_00c4c68f((undefined *)param_1[0x3b]);
    F_00c4c68f((undefined *)param_1[0x35]);
    F_00c4c68f((undefined *)param_1[0x3c]);
    F_00c4c68f((undefined *)param_1[0x3d]);
    F_00c4c68f((undefined *)param_1[0x3e]);
    F_00c4c68f((undefined *)param_1[0x3f]);
    F_00c4c68f((undefined *)param_1[0x40]);
    F_00c4c68f((undefined *)param_1[0x41]);
    F_00c4c68f((undefined *)param_1[0x42]);
    F_00c4c68f((undefined *)param_1[0x43]);
    F_00c4c68f((undefined *)param_1[0x44]);
    F_00c4c68f((undefined *)param_1[0x45]);
    F_00c4c68f((undefined *)param_1[0x46]);
    F_00c4c68f((undefined *)param_1[0x47]);
    F_00c4c68f((undefined *)param_1[0x48]);
    F_00c4c68f((undefined *)param_1[0x49]);
    F_00c4c68f((undefined *)param_1[0x4a]);
    F_00c4c68f((undefined *)param_1[0x4b]);
    F_00c4c68f((undefined *)param_1[0x4c]);
    F_00c4c68f((undefined *)param_1[0x4d]);
    F_00c4c68f((undefined *)param_1[0x4e]);
    F_00c4c68f((undefined *)param_1[0x4f]);
    F_00c4c68f((undefined *)param_1[0x50]);
    F_00c4c68f((undefined *)param_1[0x51]);
    F_00c4c68f((undefined *)param_1[0x52]);
    F_00c4c68f((undefined *)param_1[0x53]);
    F_00c4c68f((undefined *)param_1[0x54]);
    F_00c4c68f((undefined *)param_1[0x55]);
    F_00c4c68f((undefined *)param_1[0x56]);
    F_00c4c68f((undefined *)param_1[0x57]);
    F_00c4c68f((undefined *)param_1[0x58]);
  }
  return 0;
}

/* ref: ___init_time */
int F_00c5faf9(unsigned int gen_a0)
{
  GEN_ENTER(0xc5faf9u, gen_a0, 0u, 0u, 0u);
  undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;
  undefined * PTR32 * ppuVar1;
  undefined * PTR32 * _Memory;
  int iVar2;
  uint uVar3;
  
  if ((*((char * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 16) + (1) * 16))))) == (char *)0x0) {
    _Memory = &REFG(undefined * PTR32, 0x134b7e8);
LAB_00c5fb53: ;
    ppuVar1 = (undefined * PTR32 *)(*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 12)))));
    if (ppuVar1 != &REFG(undefined * PTR32, 0x134b7e8)) {
      gen_imp_InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
    }
    (*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 12))))) = (int *)_Memory;
    iVar2 = 0;
  }
  else {
    _Memory = F_00c54c73(1,0x164);
    if (_Memory != (undefined * PTR32 *)0x0) {
      uVar3 = F_00c5ef83(_LocInfo,_Memory);
      if (uVar3 == 0) {
        _Memory[0x2d] = (undefined *)0x1;
        goto LAB_00c5fb53;
      }
      F_00c5f782(_Memory);
      F_00c4c68f(_Memory);
    }
    iVar2 = 1;
  }
  return iVar2;
}

/* ref: ___free_lconv_num */
unsigned int F_00c5fba6(unsigned int gen_a0)
{
  GEN_ENTER(0xc5fba6u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != REFG(undefined * PTR32, 0x134b048)) {
      F_00c4c68f((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != REFG(undefined * PTR32, 0x134b04c)) {
      F_00c4c68f((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != REFG(undefined * PTR32, 0x134b050)) {
      F_00c4c68f((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != REFG(undefined * PTR32, 0x134b078)) {
      F_00c4c68f((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != REFG(undefined * PTR32, 0x134b07c)) {
      F_00c4c68f((undefined *)param_1[0xd]);
    }
  }
  return 0;
}

/* ref: ___init_numeric */
int F_00c5fc0f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5fc0fu, gen_a0, 0u, 0u, 0u);
  undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char * pcVar6;
  LONG LVar7;
  int iVar8;
  undefined * PTR32 * _Address;
  undefined4 * puVar9;
  LPCWSTR _LocaleName;
  char * pcVar10;
  undefined * PTR32 * ppuVar11;
  
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xc))))) = _LocInfo;
  (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0xc))) + 4))) = (undefined *)0x0;
  if (((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 12))))) == (int *)0x0) &&
     ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 8))))) == (int *)0x0)) {
    (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = (wchar_t *)0x0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x14)) = (wchar_t *)0x0;
    _Address = &REFG(undefined * PTR32, 0x134b048);
LAB_00c5fda4: ;
    if ((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (5) * 4))))) != (wchar_t *)0x0) {
      gen_imp_InterlockedDecrement((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (5) * 4))))));
    }
    if (((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) != (wchar_t *)0x0) &&
       (LVar7 = gen_imp_InterlockedDecrement((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4)))))), LVar7 == 0)) {
      F_00c4c68f((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))));
      F_00c4c68f((undefined *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))));
    }
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (5) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x18));
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x14));
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) = (uint)_Address;
    iVar8 = 0;
  }
  else {
    _Address = F_00c54c73(1,0x50);
    if (_Address != (undefined * PTR32 *)0x0) {
      puVar9 = (undefined4 *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4)))));
      ppuVar11 = _Address;
      for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
        *ppuVar11 = (undefined *)*puVar9;
        puVar9 = puVar9 + 1;
        ppuVar11 = ppuVar11 + 1;
      }
      (*(wchar_t * PTR32 *)(gen_frame + 0x14)) = F_00c54c2e(4);
      if ((*(wchar_t * PTR32 *)(gen_frame + 0x14)) != (wchar_t *)0x0) {
        (*(wchar_t * PTR32 *)(gen_frame + 0x14))[0] = L'\0';
        (*(wchar_t * PTR32 *)(gen_frame + 0x14))[1] = L'\0';
        if ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 12))))) == (int *)0x0) {
          *_Address = REFG(undefined * PTR32, 0x134b048);
          _Address[1] = REFG(undefined * PTR32, 0x134b04c);
          _Address[2] = REFG(undefined * PTR32, 0x134b050);
          _Address[0xc] = REFG(undefined * PTR32, 0x134b078);
          (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = (wchar_t *)0x0;
          _Address[0xd] = REFG(undefined * PTR32, 0x134b07c);
        }
        else {
          (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = F_00c54c2e(4);
          if ((*(wchar_t * PTR32 *)(gen_frame + 0x18)) == (wchar_t *)0x0) {
            iVar8 = 1;
LAB_00c5fc9f: ;
            F_00c4c68f(_Address);
            F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x14)));
            return iVar8;
          }
          (*(wchar_t * PTR32 *)(gen_frame + 0x18))[0] = L'\0';
          (*(wchar_t * PTR32 *)(gen_frame + 0x18))[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*((ushort *)GEN_TOP(((int)&(*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (2) * 16) + 12))))) + 2)));
          iVar8 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0xe,_Address);
          iVar2 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0xf,_Address + 1);
          iVar3 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x10,_Address + 2);
          iVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0xe,_Address + 0xc);
          iVar5 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0xf,_Address + 0xd);
          if (iVar5 != 0 || (((iVar8 != 0 || iVar2 != 0) || iVar3 != 0) || iVar4 != 0)) {
            F_00c5fba6(_Address);
            iVar8 = -1;
            goto LAB_00c5fc9f;
          }
          pcVar6 = _Address[2];
          while (*pcVar6 != '\0') {
            cVar1 = *pcVar6;
            if ((cVar1 < '0') || ('9' < cVar1)) {
              pcVar10 = pcVar6;
              if (cVar1 != ';') goto LAB_00c5fd4a;
              do {
                *pcVar10 = pcVar10[1];
                pcVar10 = pcVar10 + 1;
              } while (*pcVar10 != '\0');
            }
            else {
              *pcVar6 = cVar1 + -0x30;
LAB_00c5fd4a: ;
              pcVar6 = pcVar6 + 1;
            }
          }
        }
        (*(wchar_t * PTR32 *)(gen_frame + 0x14))[0] = L'\x01';
        (*(wchar_t * PTR32 *)(gen_frame + 0x14))[1] = L'\0';
        if ((*(wchar_t * PTR32 *)(gen_frame + 0x18)) != (wchar_t *)0x0) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x18))[0] = L'\x01';
          (*(wchar_t * PTR32 *)(gen_frame + 0x18))[1] = L'\0';
        }
        goto LAB_00c5fda4;
      }
      F_00c4c68f(_Address);
    }
    iVar8 = 1;
  }
  return iVar8;
}

/* ref: ___free_lconv_mon */
unsigned int F_00c5fe2f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5fe2fu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    if (*(undefined * PTR32 *)(param_1 + 0xc) != REFG(undefined * PTR32, 0x134b054)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0xc));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x10) != REFG(undefined * PTR32, 0x134b058)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x10));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x14) != REFG(undefined * PTR32, 0x134b05c)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x14));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x18) != REFG(undefined * PTR32, 0x134b060)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x18));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x1c) != REFG(undefined * PTR32, 0x134b064)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x1c));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x20) != REFG(undefined * PTR32, 0x134b068)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x20));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x24) != REFG(undefined * PTR32, 0x134b06c)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x24));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x38) != REFG(undefined * PTR32, 0x134b080)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x38));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x3c) != REFG(undefined * PTR32, 0x134b084)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x3c));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x40) != REFG(undefined * PTR32, 0x134b088)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x40));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x44) != REFG(undefined * PTR32, 0x134b08c)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x44));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x48) != REFG(undefined * PTR32, 0x134b090)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x48));
    }
    if (*(undefined * PTR32 *)(param_1 + 0x4c) != REFG(undefined * PTR32, 0x134b094)) {
      F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x4c));
    }
  }
  return 0;
}

/* ref: ___init_monetary */
int F_00c5ff2d(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ff2du, gen_a0, 0u, 0u, 0u);
  undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  char * pcVar22;
  LONG LVar23;
  int iVar24;
  undefined * PTR32 * _Memory;
  LPCWSTR _LocaleName;
  char * pcVar25;
  undefined * PTR32 * ppuVar26;
  undefined * PTR32 * ppuVar27;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)0x0;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xc))))) = _LocInfo;
  (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0xc))) + 4))) = (undefined *)0x0;
  if (((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 8))))) == (int *)0x0) &&
     ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 12))))) == (int *)0x0)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)0x0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x14)) = (wchar_t *)0x0;
    _Memory = &REFG(undefined * PTR32, 0x134b048);
LAB_00c60230: ;
    if ((LONG *)(*(int *)(((char *)(_LocInfo) + (1) * 184))) != (LONG *)0x0) {
      gen_imp_InterlockedDecrement((LONG *)(*(int *)(((char *)(_LocInfo) + (1) * 184))));
    }
    if (((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) != (wchar_t *)0x0) &&
       (LVar23 = gen_imp_InterlockedDecrement((LONG *)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4)))))), LVar23 == 0)) {
      F_00c4c68f((undefined *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))));
      F_00c4c68f((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))));
    }
    (*(int *)(((char *)(_LocInfo) + (1) * 184))) = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x18));
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x14));
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) = (uint)_Memory;
    iVar24 = 0;
  }
  else {
    _Memory = F_00c54c73(1,0x50);
    if (_Memory != (undefined * PTR32 *)0x0) {
      (*(wchar_t * PTR32 *)(gen_frame + 0x14)) = F_00c54c2e(4);
      if ((*(wchar_t * PTR32 *)(gen_frame + 0x14)) == (wchar_t *)0x0) {
        F_00c4c68f(_Memory);
      }
      else {
        (*(wchar_t * PTR32 *)(gen_frame + 0x14))[0] = L'\0';
        (*(wchar_t * PTR32 *)(gen_frame + 0x14))[1] = L'\0';
        if ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 8))))) == (int *)0x0) {
          ppuVar26 = &REFG(undefined * PTR32, 0x134b048);
          ppuVar27 = _Memory;
          for (iVar24 = 0x14; iVar24 != 0; iVar24 = iVar24 + -1) {
            *ppuVar27 = *ppuVar26;
            ppuVar26 = ppuVar26 + 1;
            ppuVar27 = ppuVar27 + 1;
          }
LAB_00c601dc: ;
          *_Memory = *(undefined * PTR32 *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4)))));
          _Memory[1] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 4)));
          _Memory[2] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 8)));
          _Memory[0xc] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 0x30)));
          _Memory[0xd] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 0x34)));
          (*(wchar_t * PTR32 *)(gen_frame + 0x14))[0] = L'\x01';
          (*(wchar_t * PTR32 *)(gen_frame + 0x14))[1] = L'\0';
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0) {
            *(*(undefined4 * PTR32 *)(gen_frame + 0x18)) = 1;
          }
          goto LAB_00c60230;
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = F_00c54c2e(4);
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) == (undefined4 *)0x0) {
          F_00c4c68f(_Memory);
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x14)));
        }
        else {
          *(*(undefined4 * PTR32 *)(gen_frame + 0x18)) = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&(*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (2) * 16) + 8)))));
          iVar24 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x15,_Memory + 3);
          iVar2 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x14,_Memory + 4);
          iVar3 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x16,_Memory + 5);
          iVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x17,_Memory + 6);
          iVar5 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x18,_Memory + 7);
          iVar6 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x50,_Memory + 8);
          iVar7 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),1,_LocaleName,0x51,_Memory + 9);
          iVar8 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x1a,_Memory + 10);
          iVar9 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x19,(undefined *)((int)_Memory + 0x29));
          iVar10 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x54,(undefined *)((int)_Memory + 0x2a));
          iVar11 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x55,(undefined *)((int)_Memory + 0x2b));
          iVar12 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x56,_Memory + 0xb);
          iVar13 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x57,(undefined *)((int)_Memory + 0x2d));
          iVar14 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x52,(undefined *)((int)_Memory + 0x2e));
          iVar15 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),0,_LocaleName,0x53,(undefined *)((int)_Memory + 0x2f));
          iVar16 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x15,_Memory + 0xe);
          iVar17 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x14,_Memory + 0xf);
          iVar18 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x16,_Memory + 0x10);
          iVar19 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x17,_Memory + 0x11);
          iVar20 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x50,_Memory + 0x12);
          iVar21 = F_00c55976(&(*(undefined8 *)(gen_frame + 0xc)),2,_LocaleName,0x51,_Memory + 0x13);
          if (iVar21 == 0 &&
              (((((((((((((((((((iVar24 == 0 && iVar2 == 0) && iVar3 == 0) && iVar4 == 0) &&
                             iVar5 == 0) && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) && iVar9 == 0)
                        && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0) &&
                    iVar14 == 0) && iVar15 == 0) && iVar16 == 0) && iVar17 == 0) && iVar18 == 0) &&
               iVar19 == 0) && iVar20 == 0)) {
            pcVar22 = _Memory[7];
            while (*pcVar22 != '\0') {
              cVar1 = *pcVar22;
              if ((cVar1 < '0') || ('9' < cVar1)) {
                pcVar25 = pcVar22;
                if (cVar1 != ';') goto LAB_00c601b4;
                do {
                  *pcVar25 = pcVar25[1];
                  pcVar25 = pcVar25 + 1;
                } while (*pcVar25 != '\0');
              }
              else {
                *pcVar22 = cVar1 + -0x30;
LAB_00c601b4: ;
                pcVar22 = pcVar22 + 1;
              }
            }
            goto LAB_00c601dc;
          }
          F_00c5fe2f(_Memory);
          F_00c4c68f(_Memory);
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x14)));
          F_00c4c68f((*(undefined4 * PTR32 *)(gen_frame + 0x18)));
        }
      }
    }
    iVar24 = 1;
  }
  return iVar24;
}

/* ref: FUN_00c6028d */
uint F_00c6028d(void)
{
  GEN_ENTER(0xc6028du, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c60290 */
uint F_00c60290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc60290u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = F_00c4c468((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return (uint)(iVar2 == 0);
}

/* ref: _ProcessCodePage */
uint F_00c60306(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc60306u, gen_a0, gen_a1, 0u, 0u);
  char * in_esi = (char *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  UINT UVar2;
  
  if (((in_esi != (char *)0x0) && (*in_esi != '\0')) &&
     (iVar1 = F_00c556e0(in_esi,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b5b8))))), iVar1 != 0)) {
    iVar1 = F_00c556e0(in_esi,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b5b4)))));
    if (iVar1 != 0) {
      (*(uint *)(gen_frame + 0x8)) = F_00c4c71d(in_esi);
      return (*(uint *)(gen_frame + 0x8));
    }
    iVar1 = gen_imp_GetLocaleInfoW(*(LCID *)(in_edi + 0x1c),0x2000000b,(LPWSTR)&(*(uint *)(gen_frame + 0x8)),2);
    if (iVar1 == 0) {
      return 0;
    }
    return (*(uint *)(gen_frame + 0x8));
  }
  iVar1 = gen_imp_GetLocaleInfoW(*(LCID *)(in_edi + 0x1c),0x20001004,(LPWSTR)&(*(uint *)(gen_frame + 0x8)),2);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    return (*(uint *)(gen_frame + 0x8));
  }
  UVar2 = gen_imp_GetACP();
  return UVar2;
}

/* ref: _TestDefaultCountry */
uint F_00c6038a(unsigned int gen_a0)
{
  GEN_ENTER(0xc6038au, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((short)param_1 == *(short *)((int)&REFG(undefined2, 0x111b5a0) + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}

/* ref: _LcidFromHexString */
uint F_00c603af(unsigned int gen_a0)
{
  GEN_ENTER(0xc603afu, gen_a0, 0u, 0u, 0u);
  char * in_edx = (char *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (cVar1 = *in_edx, cVar1 != '\0') {
    in_edx = in_edx + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    uVar2 = cVar1 + -0x30 + uVar2 * 0x10;
  }
  return uVar2;
}

/* ref: _GetPrimaryLen */
uint F_00c603e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc603e0u, gen_a0, 0u, 0u, 0u);
  char * in_edx = (char *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    cVar1 = *in_edx;
    in_edx = in_edx + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: _CountryEnumProc@4 */
uint F_00c603fb(unsigned int gen_a0)
{
  GEN_ENTER(0xc603fbu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  undefined * p_Var2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  p_Var2 = F_00c5b37a();
  uVar3 = F_00c603af(param_1);
  iVar4 = gen_imp_GetLocaleInfoA(uVar3,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var2) + 156) + 20))))) != 0) & 0xfffff005) +
                               0x1002,((CHAR *)(gen_frame + 0x0)),0x78);
  if (iVar4 == 0) {
    (*((int *)GEN_TOP(((((char *)(p_Var2) + 156) + 8))))) = 0;
    uVar3 = 1;
  }
  else {
    iVar4 = F_00c4c468((char *)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(p_Var2) + 156) + 4))))),((CHAR *)(gen_frame + 0x0)));
    if (iVar4 == 0) {
      uVar5 = F_00c6038a(uVar3);
      if (uVar5 != 0) {
        piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var2) + 156) + 8)))));
        *piVar1 = *piVar1 | 4;
        *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) = uVar3;
        (*((UINT *)GEN_TOP(((((char *)(p_Var2) + 156) + 24))))) = uVar3;
      }
    }
    uVar3 = ~((uint)(*((int *)GEN_TOP(((((char *)(p_Var2) + 156) + 8))))) >> 2) & 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar3;
}

/* ref: _TestDefaultLanguage */
uint F_00c604a2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc604a2u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * _Str;
  int iVar1;
  uint uVar2;
  gen_size32 sVar3;
  
  iVar1 = gen_imp_GetLocaleInfoW(in_eax & 0x3ff | 0x400,0x20000001,(LPWSTR)&(*(uint *)(gen_frame + 0x8)),2);
  if (iVar1 == 0) {
LAB_00c604cd: ;
    uVar2 = 0;
  }
  else {
    if ((in_eax != (*(uint *)(gen_frame + 0x8))) && (param_2 != 0)) {
      _Str = (char *)*param_3;
      uVar2 = F_00c603e0(_Str);
      sVar3 = F_00c552f0(_Str);
      if (uVar2 == sVar3) goto LAB_00c604cd;
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* ref: _LangCountryEnumProc@4 */
uint F_00c604fd(unsigned int gen_a0)
{
  GEN_ENTER(0xc604fdu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  undefined * p_Var2;
  undefined * p_Var3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  gen_size32 sVar7;
  uint uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  p_Var3 = F_00c5b37a();
  p_Var2 = &(*(undefined (*)[764])(((char *)(p_Var3) + 156)));
  uVar4 = F_00c603af(param_1);
  iVar5 = gen_imp_GetLocaleInfoA(uVar4,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 20))))) != 0) & 0xfffff005) +
                               0x1002,((char *)(gen_frame + 0x0)),0x78);
  if (iVar5 != 0) {
    iVar5 = F_00c4c468((char *)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(p_Var3) + 156) + 4))))),((char *)(gen_frame + 0x0)));
    if (iVar5 != 0) goto LAB_00c60601;
    iVar5 = gen_imp_GetLocaleInfoA(uVar4,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) & 0xfffff002)
                                 + 0x1001,((char *)(gen_frame + 0x0)),0x78);
    if (iVar5 != 0) {
      iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)));
      if (iVar5 == 0) {
        piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
        *piVar1 = *piVar1 | 0x304;
        (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = uVar4;
LAB_00c605fe: ;
        *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = uVar4;
      }
      else if (((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) & 2) == 0) {
        sVar7 = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12)))));
        if (sVar7 != 0) {
          iVar5 = F_00c4c591((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)),sVar7);
          if (iVar5 == 0) {
            piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
            *piVar1 = *piVar1 | 2;
            *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = uVar4;
            sVar7 = F_00c552f0((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))));
            if (sVar7 == (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12)))))) {
              (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = uVar4;
            }
            goto LAB_00c60601;
          }
        }
        uVar8 = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
        if ((uVar8 & 1) == 0) {
          uVar6 = F_00c6038a(uVar4);
          if (uVar6 != 0) {
            (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = uVar8 | 1;
            goto LAB_00c605fe;
          }
        }
      }
LAB_00c60601: ;
      uVar8 = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) & 0x300;
      if (uVar8 != 0x300) {
        iVar5 = gen_imp_GetLocaleInfoA(uVar8,uVar4,
                               (-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) & 0xfffff002) +
                               0x1001,((char *)(gen_frame + 0x0)),0x78);
        if (iVar5 == 0) goto LAB_00c6054e;
        iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)));
        if (iVar5 == 0) {
          piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
          *piVar1 = *piVar1 | 0x200;
          if ((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) {
            if ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))) != 0) {
              sVar7 = F_00c552f0((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))));
              if (sVar7 == (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12)))))) {
                uVar9 = 1;
                goto LAB_00c60696;
              }
            }
LAB_00c606a3: ;
            piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
            *piVar1 = *piVar1 | 0x100;
          }
          else {
            (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) | 0x100;
          }
          if ((*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) == 0) {
            (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = uVar4;
          }
        }
        else if (((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) &&
                ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))) != 0)) {
          iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)));
          if (iVar5 == 0) {
            uVar9 = 0;
LAB_00c60696: ;
            uVar8 = F_00c604a2(uVar4,uVar9,p_Var2);
            if (uVar8 != 0) goto LAB_00c606a3;
          }
        }
      }
      uVar4 = ~((uint)(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) >> 2) & 1;
      goto LAB_00c606bd;
    }
  }
LAB_00c6054e: ;
  (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
  uVar4 = 1;
LAB_00c606bd: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: _LanguageEnumProc@4 */
uint F_00c606ce(unsigned int gen_a0)
{
  GEN_ENTER(0xc606ceu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  undefined * p_Var2;
  undefined * p_Var3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  p_Var3 = F_00c5b37a();
  p_Var2 = &(*(undefined (*)[764])(((char *)(p_Var3) + 156)));
  uVar4 = F_00c603af(param_1);
  iVar5 = gen_imp_GetLocaleInfoA(uVar4,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) & 0xfffff002) +
                               0x1001,((CHAR *)(gen_frame + 0x0)),0x78);
  if (iVar5 == 0) {
    (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
    uVar4 = 1;
    goto LAB_00c6077e;
  }
  iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((CHAR *)(gen_frame + 0x0)));
  if (iVar5 == 0) {
    if ((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) {
      uVar7 = 1;
LAB_00c6075c: ;
      uVar6 = F_00c604a2(uVar4,uVar7,p_Var2);
      if (uVar6 == 0) goto LAB_00c60773;
    }
    piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
    *piVar1 = *piVar1 | 4;
    (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = uVar4;
    *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = uVar4;
  }
  else if (((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) &&
          ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))) != 0)) {
    iVar5 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((CHAR *)(gen_frame + 0x0)));
    if (iVar5 == 0) {
      uVar7 = 0;
      goto LAB_00c6075c;
    }
  }
LAB_00c60773: ;
  uVar4 = ~((uint)(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) >> 2) & 1;
LAB_00c6077e: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: _GetLcidFromLangCountry */
unsigned int F_00c607ba(unsigned int gen_a0)
{
  GEN_ENTER(0xc607bau, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  gen_size32 sVar1;
  uint uVar2;
  
  sVar1 = F_00c552f0((char *)*in_esi);
  in_esi[4] = (uint)(sVar1 == 3);
  sVar1 = F_00c552f0((char *)in_esi[1]);
  in_esi[6] = 0;
  in_esi[5] = (uint)(sVar1 == 3);
  if (in_esi[4] == 0) {
    uVar2 = F_00c603e0(*in_esi);
  }
  else {
    uVar2 = 2;
  }
  in_esi[3] = uVar2;
  gen_imp_EnumSystemLocalesA(((code *)REFP(0xc604fd)),1);
  uVar2 = in_esi[2];
  if ((((uVar2 & 0x100) == 0) || ((uVar2 & 0x200) == 0)) || ((uVar2 & 7) == 0)) {
    in_esi[2] = 0;
  }
  return 0;
}

/* ref: _GetLcidFromLanguage */
unsigned int F_00c60821(unsigned int gen_a0)
{
  GEN_ENTER(0xc60821u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  gen_size32 sVar1;
  uint uVar2;
  
  sVar1 = F_00c552f0((char *)*in_esi);
  in_esi[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    uVar2 = F_00c603e0(*in_esi);
  }
  else {
    uVar2 = 2;
  }
  in_esi[3] = uVar2;
  gen_imp_EnumSystemLocalesA(((code *)REFP(0xc606ce)),1);
  if ((*(byte *)(in_esi + 2) & 4) == 0) {
    in_esi[2] = 0;
  }
  return 0;
}

/* ref: ___get_qualified_locale */
BOOL F_00c6085d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6085du, gen_a0, gen_a1, gen_a2, 0u);
  GEN_LPANY _LpInStr = (GEN_LPANY)gen_a0;
  UINT * _LpCodePage = (UINT *)(uintptr_t)gen_a1;
  GEN_LPANY _LpOutStr = (GEN_LPANY)gen_a2;
  int * piVar1;
  wchar_t * PTR32 * ppwVar2;
  undefined * in_esi;
  undefined * p_Var3;
  wchar_t * pwVar4;
  gen_size32 sVar5;
  LCID LVar6;
  uint uVar7;
  BOOL BVar8;
  int eVar9;
  int iVar10;
  
  p_Var3 = F_00c5b37a();
  in_esi = &(*(undefined (*)[764])(((char *)(p_Var3) + 156)));
  if (_LpInStr == (GEN_LPANY)0x0) {
    piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
    *piVar1 = *piVar1 | 0x104;
LAB_00c60946: ;
    LVar6 = gen_imp_GetUserDefaultLCID();
    (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = LVar6;
    *(LCID *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = LVar6;
  }
  else {
    (*(wchar_t * PTR32 *)((char *)(in_esi))) = ((wchar_t *)((char *)(_LpInStr)));
    pwVar4 = ((wchar_t *)((char *)(_LpInStr))) + 0x20;
    ppwVar2 = &(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(p_Var3) + 156) + 4)))));
    *ppwVar2 = pwVar4;
    if ((pwVar4 != (wchar_t *)0x0) && ((char)*pwVar4 != '\0')) {
      F_00c60290(&REFG(undefined * PTR32, 0x111b4e8),0x16,ppwVar2);
    }
    (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
    if (((*(wchar_t * PTR32 *)((char *)(in_esi))) == (wchar_t *)0x0) || ((char)*(*(wchar_t * PTR32 *)((char *)(in_esi))) == '\0')) {
      pwVar4 = *ppwVar2;
      if ((pwVar4 == (wchar_t *)0x0) || ((char)*pwVar4 == '\0')) {
        (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0x104;
        goto LAB_00c60946;
      }
      sVar5 = F_00c552f0((char *)pwVar4);
      (*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 20))))) = (uint)(sVar5 == 3);
      gen_imp_EnumSystemLocalesA(((code *)REFP(0xc603fb)),1);
      if (((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) & 4) == 0) {
        (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
      }
    }
    else {
      if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
        F_00c60821(in_esi);
      }
      else {
        F_00c607ba(in_esi);
      }
      if ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) != 0) goto LAB_00c6095c;
      uVar7 = F_00c60290(&REFG(undefined * PTR32, 0x111b2e0),0x40,in_esi);
      if (uVar7 != 0) {
        if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
          F_00c60821(in_esi);
        }
        else {
          F_00c607ba(in_esi);
        }
      }
    }
  }
  if ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) == 0) {
    return 0;
  }
LAB_00c6095c: ;
  uVar7 = F_00c60306(-(uint)(_LpInStr != (GEN_LPANY)0x0) & (uint)((wchar_t *)(((char *)(_LpInStr) + 128))),in_esi
                          );
  if ((((uVar7 == 0) || (uVar7 == 65000)) || (uVar7 == 0xfde9)) ||
     ((BVar8 = gen_imp_IsValidCodePage(uVar7 & 0xffff), BVar8 == 0 ||
      (BVar8 = gen_imp_IsValidLocale((*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))),1), BVar8 == 0)))) {
    return 0;
  }
  if (_LpCodePage != (UINT *)0x0) {
    *(short *)_LpCodePage = (short)(*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24)))));
    *(wchar_t *)((int)_LpCodePage + 2) = (*((wchar_t *)GEN_TOP((((((char *)(p_Var3) + 156) + 28) + (0) * 2)))));
    *(short *)(_LpCodePage + 1) = (short)uVar7;
  }
  if (_LpOutStr != (GEN_LPANY)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar9 = F_00c49908(_LpOutStr,0x40,"Norwegian-Nynorsk");
      if (eVar9 != 0) {
                    
        F_00c4c299(in_esi,0,0,0,0,0);
      }
    }
    else {
      iVar10 = gen_imp_GetLocaleInfoA((*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))),0x1001,_LpOutStr,0x40);
      if (iVar10 == 0) {
        return 0;
      }
    }
    iVar10 = gen_imp_GetLocaleInfoA(*(undefined4 *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))),0x1002,
                            ((wchar_t *)((char *)(_LpOutStr))) + 0x20,0x40);
    if (iVar10 == 0) {
      return 0;
    }
    F_00c70504(uVar7,(char *)((wchar_t *)(((char *)(_LpOutStr) + 128))),0x10,10);
  }
  return 1;
}

/* ref: _memcmp */
int F_00c61f68(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc61f68u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Buf1 = (undefined *)(uintptr_t)gen_a0;
  undefined * _Buf2 = (undefined *)(uintptr_t)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (_Size == 0) {
    return 0;
  }
  if (_Size == 1) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
LAB_00c6339b: ;
    if (uVar2 == uVar3) {
      return 0;
    }
    return (uint)(0 < (int)(uVar2 - uVar3)) * 2 + -1;
  }
  if (_Size == 2) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    goto LAB_00c6339b;
  }
  if (_Size == 3) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    goto LAB_00c6339b;
  }
  if (_Size == 4) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 3);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 3);
    goto LAB_00c6339b;
  }
  for (; 0x1f < _Size; _Size = _Size - 0x20) {
    if (*(int *)_Buf1 == *(int *)_Buf2) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)_Buf1;
      uVar2 = (uint)*(byte *)_Buf2;
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 1);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 1);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 2);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 2);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 3) != (uint)*(byte *)((int)_Buf2 + 3)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 3) - (uint)*(byte *)((int)_Buf2 + 3)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 4) == *(int *)((int)_Buf2 + 4)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 4);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 4);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 5);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 5);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 6);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 6);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 7) != (uint)*(byte *)((int)_Buf2 + 7)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 7) - (uint)*(byte *)((int)_Buf2 + 7)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 8) == *(int *)((int)_Buf2 + 8)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 8);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 8);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 9);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 9);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 10);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xb) != (uint)*(byte *)((int)_Buf2 + 0xb)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xb) -
                                (uint)*(byte *)((int)_Buf2 + 0xb))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0xc) == *(int *)((int)_Buf2 + 0xc)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xc);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xc);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xd);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xd);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xe);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xe);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xf) != (uint)*(byte *)((int)_Buf2 + 0xf)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xf) -
                                (uint)*(byte *)((int)_Buf2 + 0xf))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x10) == *(int *)((int)_Buf2 + 0x10)) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x10);
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x11);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x11);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x12);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x12);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x13) != (uint)*(byte *)((int)_Buf2 + 0x13)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x13) -
                                (uint)*(byte *)((int)_Buf2 + 0x13))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x14) == *(int *)((int)_Buf2 + 0x14)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x14);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x14);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x15);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x15);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x16);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x16);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x17) != (uint)*(byte *)((int)_Buf2 + 0x17)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x17) -
                                (uint)*(byte *)((int)_Buf2 + 0x17))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x18) == *(int *)((int)_Buf2 + 0x18)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x18);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x18);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x19);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x19);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1a);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1a);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1b) != (uint)*(byte *)((int)_Buf2 + 0x1b)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1b) -
                                (uint)*(byte *)((int)_Buf2 + 0x1b))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x1c) == *(int *)((int)_Buf2 + 0x1c)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1c);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1c);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1d);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1d);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1e);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1e);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1f) != (uint)*(byte *)((int)_Buf2 + 0x1f)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1f) -
                                (uint)*(byte *)((int)_Buf2 + 0x1f))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    _Buf1 = (undefined *)((int)_Buf1 + 0x20);
    _Buf2 = (undefined *)((int)_Buf2 + 0x20);
  }
  switch((unsigned int)(uintptr_t)(_Size)) {
  default: ;
    goto switchD_00c623ef_caseD_0;
  case 1: ;
    goto switchD_00c623ef_caseD_1;
  case 2: ;
    goto switchD_00c623ef_caseD_2;
  case 3: ;
    goto switchD_00c623ef_caseD_3;
  case 4: ;
    goto switchD_00c623ef_caseD_4;
  case 5: ;
    goto switchD_00c623ef_caseD_5;
  case 6: ;
    goto switchD_00c623ef_caseD_6;
  case 7: ;
    goto switchD_00c623ef_caseD_7;
  case 8: ;
    goto switchD_00c623ef_caseD_8;
  case 9: ;
    goto switchD_00c623ef_caseD_9;
  case 10: ;
    goto switchD_00c623ef_caseD_a;
  case 0xb: ;
    goto switchD_00c623ef_caseD_b;
  case 0xc: ;
    goto switchD_00c623ef_caseD_c;
  case 0xd: ;
    goto switchD_00c623ef_caseD_d;
  case 0xe: ;
    goto switchD_00c623ef_caseD_e;
  case 0xf: ;
    goto switchD_00c623ef_caseD_f;
  case 0x10: ;
    goto switchD_00c623ef_caseD_10;
  case 0x11: ;
    goto switchD_00c623ef_caseD_11;
  case 0x12: ;
    goto switchD_00c623ef_caseD_12;
  case 0x13: ;
    goto switchD_00c623ef_caseD_13;
  case 0x14: ;
    goto switchD_00c623ef_caseD_14;
  case 0x15: ;
    goto switchD_00c623ef_caseD_15;
  case 0x16: ;
    goto switchD_00c623ef_caseD_16;
  case 0x17: ;
    goto switchD_00c623ef_caseD_17;
  case 0x18: ;
    goto switchD_00c623ef_caseD_18;
  case 0x1a: ;
    goto switchD_00c623ef_caseD_1a;
  case 0x1b: ;
    goto switchD_00c623ef_caseD_1b;
  case 0x1c: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1c)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x1c))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1c)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1c))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1b))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1b))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1a))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1a))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x19)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x19))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x19)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x19)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_18: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x18)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x18))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x18)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x18))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x17))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x17))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x16))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x16))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x15)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x15))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x15)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x15)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_14: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x14)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x14))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x14)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x14))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x13))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x13))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x12))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x12))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x11)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x11))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x11)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x11)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_10: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x10)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x10))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x10)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x10))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xf))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xf))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xe))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xe))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xd)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xd))))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xd)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xd)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_c: ;
    if (*((int *)GEN_TOP(((int)_Buf1 + (_Size - 0xc)))) == *((int *)GEN_TOP(((int)_Buf2 + (_Size - 0xc))))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xc))));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xc))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xb))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xb))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 10))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 10))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 9)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 9))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 9)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 9)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_8: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 8)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 8))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 8)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 8))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 7))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 7))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 6))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 6))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 5)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 5))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 5)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 5)))))) * 2 + -1;
      }
    }
    if (iVar1 == 0) {
switchD_00c623ef_caseD_4: ;
      if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 4)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 4))))) {
        iVar1 = 0;
      }
      else {
        uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 4)))) & 0xff;
        uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 4))));
        if ((uVar3 == uVar2) ||
           (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
          uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 3))));
          uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 3))));
          if ((uVar3 == uVar2) ||
             (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
            uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 2))));
            uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 2))));
            if ((uVar3 == uVar2) ||
               (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
              iVar1 = 0;
              if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 1)))) !=
                  (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 1))))) {
                iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 1)))) -
                                        (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 1)))))) * 2 + -1;
              }
            }
          }
        }
      }
      if (iVar1 == 0) {
switchD_00c623ef_caseD_0: ;
        iVar1 = 0;
      }
    }
    return iVar1;
  case 0x1d: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1d)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x1d))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1d)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1d))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1c))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1c))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1b))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1b))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1a)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1a))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1a)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1a)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  case 0x19: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x19)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x19))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x19)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x19))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x18))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x18))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x17))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x17))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x16)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x16))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x16)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x16)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_15: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x15)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x15))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x15)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x15))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x14))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x14))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x13))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x13))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x12)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x12))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x12)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x12)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_11: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x11)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x11))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x11)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x11))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x10))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x10))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xf))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xf))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xe)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xe))))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xe)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xe)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_d: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0xd)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0xd))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0xd)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xd))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xc))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xc))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xb))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xb))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 10)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 10)))))
      {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 10)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 10)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_9: ;
    if (*((int *)GEN_TOP(((int)_Buf1 + (_Size - 9)))) == *((int *)GEN_TOP(((int)_Buf2 + (_Size - 9))))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 9))));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 9))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 8))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 8))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 7))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 7))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 6)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 6))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 6)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 6)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_5: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 5)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 5))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 5)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 5))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 4))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 4))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 3))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 3))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 2)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 2))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 2)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 2)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_1: ;
    if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 1)))) == (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 1))))) {
      return 0;
    }
    return (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 1)))) -
                           (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 1)))))) * 2 + -1;
  case 0x1e: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1e)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x1e))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1e)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1e))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1d))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1d))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1c))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1c))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1b)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1b))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1b)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1b)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_1a: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1a)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x1a))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1a)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1a))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x19))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x19))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x18))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x18))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x17)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x17))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x17)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x17)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_16: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x16)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x16))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x16)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x16))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x15))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x15))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x14))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x14))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x13)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x13))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x13)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x13)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_12: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x12)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x12))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x12)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x12))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x11))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x11))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x10))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x10))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xf)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xf))))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xf)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xf)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_e: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0xe)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0xe))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0xe)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xe))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xd))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xd))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xc))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xc))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xb)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xb))))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xb)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xb)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_a: ;
    if (*((int *)GEN_TOP(((int)_Buf1 + (_Size - 10)))) == *((int *)GEN_TOP(((int)_Buf2 + (_Size - 10))))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 10))));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 10))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 9))));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 9))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 8))));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 8))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 7)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 7))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 7)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 7)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_6: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 6)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 6))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 6)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 6))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 5))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 5))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 4))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 4))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 3)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 3))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 3)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 3)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_2: ;
    if (*((short *)GEN_TOP(((int)_Buf1 + (_Size - 2)))) != *((short *)GEN_TOP(((int)_Buf2 + (_Size - 2))))) {
LAB_00c62f2d: ;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 2))));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 2))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      goto switchD_00c623ef_caseD_1;
    }
    goto switchD_00c623ef_caseD_0;
  case 0x1f: ;
    if (*((int *)GEN_TOP(((int)_Buf1 + (_Size - 0x1f)))) == *((int *)GEN_TOP(((int)_Buf2 + (_Size - 0x1f))))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1f))));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1f))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1e))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1e))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1d))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1d))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1c)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1c))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1c)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1c)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_1b: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1b)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x1b))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x1b)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1b))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x1a))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x1a))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x19))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x19))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x18)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x18))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x18)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x18)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_17: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x17)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x17))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x17)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x17))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x16))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x16))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x15))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x15))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x14)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x14))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x14)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x14)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_13: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x13)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0x13))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0x13)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x13))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x12))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x12))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x11))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x11))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x10)))) !=
          (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x10))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0x10)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0x10)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_f: ;
    if (*((int *)GEN_TOP(((int)_Buf1 + (_Size - 0xf)))) == *((int *)GEN_TOP(((int)_Buf2 + (_Size - 0xf))))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xf))));
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xf))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xe))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xe))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xd))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xd))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xc)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xc))))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 0xc)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xc)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_b: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0xb)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 0xb))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 0xb)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 0xb))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 10))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 10))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 9))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 9))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 8)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 8))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 8)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 8)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_7: ;
    if (*((uint *)GEN_TOP(((int)_Buf1 + (_Size - 7)))) == *((uint *)GEN_TOP(((int)_Buf2 + (_Size - 7))))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP(((int)_Buf1 + (_Size - 7)))) & 0xff;
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 7))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 6))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 6))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 5))));
      uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 5))));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 4)))) != (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 4))))) {
        iVar1 = (uint)(0 < (int)((uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 4)))) -
                                (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 4)))))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00c623ef_caseD_3: ;
    uVar3 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + (_Size - 3))));
    uVar2 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + (_Size - 3))));
    if ((uVar3 != uVar2) &&
       (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    goto LAB_00c62f2d;
  }
}

/* ref: __crtGetStringTypeA_stat */
int F_00c634bc(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc634bcu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulong param_2 = (ulong)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10010];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  LPCWSTR lpSrcStr;
  
  (*(uint *)(gen_frame + 0x10008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  lpSrcStr = (LPCWSTR)0x0;
  (*(BOOL *)(gen_frame + 0x10004)) = 0;
  if (param_6 == 0) {
    param_6 = (*((uint *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)(param_1))) + 4)))));
  }
  uVar2 = gen_imp_MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,0,0);
  if (uVar2 != 0) {
    if ((0 < (int)uVar2) && (uVar2 < 0x7ffffff1)) {
      uVar1 = uVar2 * 2 + 8;
      if (uVar1 < 0x401) {
        puVar3 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
        lpSrcStr = (LPCWSTR)(gen_frame + 0x0);
        if (1) {
LAB_00c6354b: ;
          lpSrcStr = (LPCWSTR)(puVar3 + 2);
        }
      }
      else {
        puVar3 = F_00c51787(uVar1);
        lpSrcStr = (LPCWSTR)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0xdddd;
          goto LAB_00c6354b;
        }
      }
    }
    if (lpSrcStr != (LPCWSTR)0x0) {
      F_00c48350(lpSrcStr,0,uVar2 * 2);
      iVar4 = gen_imp_MultiByteToWideChar(param_6,1,param_3,param_4,lpSrcStr,uVar2);
      if (iVar4 != 0) {
        (*(BOOL *)(gen_frame + 0x10004)) = gen_imp_GetStringTypeW(param_2,lpSrcStr,iVar4,param_5);
      }
      F_00c4f78f(lpSrcStr);
      iVar4 = (*(BOOL *)(gen_frame + 0x10004));
      goto LAB_00c63591;
    }
  }
  iVar4 = 0;
LAB_00c63591: ;
  F_00c47745((*(uint *)(gen_frame + 0x10008)) ^ (uint)(uint)(gen_frame + 0x14));
  return iVar4;
}

/* ref: ___crtGetStringTypeA */
BOOL F_00c635a3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc635a3u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulong param_2 = (ulong)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),param_1);
  iVar1 = F_00c634bc((undefined *)((byte *)(gen_frame + 0xc)),param_2,param_3,param_4,param_5,param_6,param_8,
                     (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)));
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar1;
}

/* ref: __fltin2 */
undefined * F_00c635e3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc635e3u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Flt = (undefined *)(uintptr_t)gen_a0;
  char * _Str = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 IVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(char * PTR32 *)(gen_frame + 0xc)) = _Str;
  uVar2 = 0;
  (*(uint *)(gen_frame + 0x18)) = F_00c63c8d(((undefined *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x8)),_Str,0,0,0,0,_Locale);
  if (((*(uint *)(gen_frame + 0x18)) & 4) == 0) {
    IVar1 = F_00c7c314(((undefined *)(gen_frame + 0x1c)),&(*(undefined8 *)(gen_frame + 0x10)));
    if ((((*(uint *)(gen_frame + 0x18)) & 2) != 0) || (IVar1 == (1))) {
      uVar2 = 0x80;
    }
    if ((((*(uint *)(gen_frame + 0x18)) & 1) != 0) || (IVar1 == (2))) {
      uVar2 = uVar2 | 0x100;
    }
  }
  else {
    uVar2 = 0x200;
    (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) + 0)) = 0;
    (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) + 4)) = 0;
  }
  (*(int *)(((char *)(_Flt) + 4))) = (*(int *)(gen_frame + 0x8)) - (int)(*(char * PTR32 *)(gen_frame + 0xc));
  *(undefined4 *)&(*(double *)(((char *)(_Flt) + 16))) = (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) + 0));
  *((undefined4 *)GEN_TOP(((int)&(*(double *)(((char *)(_Flt) + 16))) + 4))) = (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) + 4));
  (*(int *)((char *)(_Flt))) = uVar2;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return _Flt;
}

/* ref: ___addl */
uint F_00c6368a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6368au, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + param_2;
  uVar2 = 0;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

/* ref: ___shl_12 */
unsigned int F_00c636ae(unsigned int gen_a0)
{
  GEN_ENTER(0xc636aeu, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] * 2 | uVar2 >> 0x1f;
  return 0;
}

/* ref: ___shr_12 */
unsigned int F_00c636e1(unsigned int gen_a0)
{
  GEN_ENTER(0xc636e1u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return 0;
}

/* ref: ___ld12mul */
uint F_00c63713(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc63713u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  ushort * puVar11;
  ushort uVar12;
  short * psVar13;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(short *)(gen_frame + 0x20)) = 0;
  iVar5 = 0;
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 0)) = 0;
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)) = 0;
  iVar6 = 0;
  (*(ushort *)(gen_frame + 0x26)) = 0;
  uVar3 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar8 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar12 = uVar10 + uVar8;
  iVar2 = 0;
  iVar4 = 0;
  if (((uVar8 < 0x7fff) && (iVar2 = 0, iVar4 = 0, uVar10 < 0x7fff)) &&
     (iVar2 = iVar5, iVar4 = iVar6, uVar12 < 0xbffe)) {
    if (0x3fbf < uVar12) {
      if (((uVar8 == 0) && (uVar12 = uVar12 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
         ((param_1[1] == 0 && (*param_1 == 0)))) {
        *(undefined2 *)((int)param_1 + 10) = 0;
        goto LAB_00c6397f;
      }
      if (((uVar10 == 0) && (uVar12 = uVar12 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
         ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_00c63794;
      (*(int *)(gen_frame + 0x10)) = 0;
      psVar13 = &(*(short *)(gen_frame + 0x20));
      (*(int *)(gen_frame + 0x14)) = 5;
      do {
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x14));
        if (0 < (*(int *)(gen_frame + 0x14))) {
          (*(ushort * PTR32 *)(gen_frame + 0x8)) = (ushort *)(param_2 + 2);
          puVar11 = (ushort *)((int)param_1 + (*(int *)(gen_frame + 0x10)) * 2);
          do {
            bVar7 = false;
            uVar1 = *(uint *)(psVar13 + -2) + (uint)*puVar11 * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x8));
            if ((uVar1 < *(uint *)(psVar13 + -2)) || (uVar1 < (uint)*puVar11 * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x8)))) {
              bVar7 = true;
            }
            *(uint *)(psVar13 + -2) = uVar1;
            if (bVar7) {
              *psVar13 = *psVar13 + 1;
            }
            (*(ushort * PTR32 *)(gen_frame + 0x8)) = (*(ushort * PTR32 *)(gen_frame + 0x8)) + -1;
            puVar11 = puVar11 + 1;
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
          } while (0 < (*(int *)(gen_frame + 0x4)));
        }
        uVar1 = CONCAT22((ushort)(*(int *)(gen_frame + 0x22)),(*(short *)(gen_frame + 0x20)));
        psVar13 = psVar13 + 1;
        (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + -1;
      } while (0 < (*(int *)(gen_frame + 0x14)));
      uVar12 = uVar12 + 0xc002;
      uVar9 = uVar1;
      if ((short)uVar12 < 1) {
LAB_00c6389f: ;
        (*(ushort *)(gen_frame + 0x1e)) = 0;
        (*(undefined1 *)(gen_frame + 0x1d)) = 0;
        (*(byte *)(gen_frame + 0x1c)) = 0;
        uVar12 = uVar12 - 1;
        uVar9 = uVar1;
        if ((short)uVar12 < 0) {
          (*(uint *)(gen_frame + 0x18)) = (uint)(ushort)-uVar12;
          uVar12 = 0;
          do {
            if (((*(byte *)(gen_frame + 0x1c)) & 1) != 0) {
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
            }
            iVar2 = CONCAT22((*(ushort *)(gen_frame + 0x26)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)));
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x26)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2))) >> 1);
            (*(ushort *)(gen_frame + 0x26)) = (*(ushort *)(gen_frame + 0x26)) >> 1;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 0)) = (ushort)(uVar1 >> 0x11) | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
            uVar9 = CONCAT22((*(ushort *)(gen_frame + 0x1e)),CONCAT11((*(undefined1 *)(gen_frame + 0x1d)),(*(byte *)(gen_frame + 0x1c)))) >> 1;
            (*(ushort *)(gen_frame + 0x1e)) = (*(ushort *)(gen_frame + 0x1e)) >> 1 | (ushort)((uVar1 << 0x1f) >> 0x10);
            (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) - 1;
            (*(short *)(gen_frame + 0x20)) = (short)(uVar1 >> 1);
            uVar1 = CONCAT22((ushort)(*(int *)(gen_frame + 0x22)),(*(short *)(gen_frame + 0x20)));
            (*(byte *)(gen_frame + 0x1c)) = (byte)uVar9;
            (*(undefined1 *)(gen_frame + 0x1d)) = (undefined1)(uVar9 >> 8);
          } while ((*(uint *)(gen_frame + 0x18)) != 0);
          uVar9 = CONCAT22((ushort)(*(int *)(gen_frame + 0x22)),(*(short *)(gen_frame + 0x20)));
          if ((*(int *)(gen_frame + 0x0)) != 0) {
            (*(byte *)(gen_frame + 0x1c)) = (*(byte *)(gen_frame + 0x1c)) | 1;
            uVar9 = uVar1;
          }
        }
      }
      else {
        do {
          uVar1 = uVar9;
          if (((*(ushort *)(gen_frame + 0x26)) & 0x8000) != 0) break;
          uVar1 = uVar9 * 2;
          iVar2 = (int)CONCAT22((*(ushort *)(gen_frame + 0x26)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2))) * 2;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)) = (ushort)iVar2 | (ushort)(uVar9 >> 0x1f);
          uVar12 = uVar12 - 1;
          (*(ushort *)(gen_frame + 0x26)) = (ushort)((uint)iVar2 >> 0x10);
          uVar9 = uVar1;
        } while (0 < (short)uVar12);
        (*(ushort *)(gen_frame + 0x1e)) = 0;
        (*(undefined1 *)(gen_frame + 0x1d)) = 0;
        (*(byte *)(gen_frame + 0x1c)) = 0;
        uVar9 = uVar1;
        if ((short)uVar12 < 1) goto LAB_00c6389f;
      }
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 0)) = (ushort)(uVar9 >> 0x10);
      (*(short *)(gen_frame + 0x20)) = (short)uVar9;
      if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x1d)),(*(byte *)(gen_frame + 0x1c)))) ||
         (iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)),(ushort)(*(int *)(gen_frame + 0x22))),
         iVar2 = (int)CONCAT22((*(short *)(gen_frame + 0x20)),(*(ushort *)(gen_frame + 0x1e))),
         (CONCAT22((*(ushort *)(gen_frame + 0x1e)),CONCAT11((*(undefined1 *)(gen_frame + 0x1d)),(*(byte *)(gen_frame + 0x1c)))) & 0x1ffff) == 0x18000)) {
        if ((int)CONCAT22((*(short *)(gen_frame + 0x20)),(*(ushort *)(gen_frame + 0x1e))) == -1) {
          iVar2 = 0;
          if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)),(ushort)(*(int *)(gen_frame + 0x22))) == -1) {
            if ((*(ushort *)(gen_frame + 0x26)) == 0xffff) {
              (*(ushort *)(gen_frame + 0x26)) = 0x8000;
              uVar12 = uVar12 + 1;
              iVar4 = 0;
              iVar2 = 0;
            }
            else {
              (*(ushort *)(gen_frame + 0x26)) = (*(ushort *)(gen_frame + 0x26)) + 1;
              iVar4 = 0;
              iVar2 = 0;
            }
          }
          else {
            iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)),(ushort)(*(int *)(gen_frame + 0x22))) + 1;
          }
        }
        else {
          iVar2 = (int)CONCAT22((*(short *)(gen_frame + 0x20)),(*(ushort *)(gen_frame + 0x1e))) + 1;
          iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)),(ushort)(*(int *)(gen_frame + 0x22)));
        }
      }
      (*(short *)(gen_frame + 0x20)) = (short)((uint)iVar2 >> 0x10);
      (*(ushort *)(gen_frame + 0x1e)) = (ushort)iVar2;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)) = (ushort)((uint)iVar4 >> 0x10);
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 0)) = (ushort)iVar4;
      if (uVar12 < 0x7fff) {
        *(ushort *)param_1 = (*(ushort *)(gen_frame + 0x1e));
        *(uint *)((int)param_1 + 2) = CONCAT22((ushort)(*(int *)(gen_frame + 0x22)),(*(short *)(gen_frame + 0x20)));
        *(uint *)((int)param_1 + 6) = CONCAT22((*(ushort *)(gen_frame + 0x26)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x22)) + 2)));
        *(ushort *)((int)param_1 + 10) = uVar12 | uVar3;
        goto LAB_00c6397f;
      }
      goto LAB_00c6395f;
    }
LAB_00c63794: ;
    param_1[2] = 0;
  }
  else {
LAB_00c6395f: ;
    param_1[2] = ((uVar3 == 0) - 1 & 0x80000000) + 0x7fff8000;
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00c6397f: ;
  (*(short *)(gen_frame + 0x20)) = (short)((uint)iVar2 >> 0x10);
  (*(int *)(gen_frame + 0x22)) = iVar4;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)param_1;
}

/* ref: ___multtenpow12 */
uint F_00c6398e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6398eu, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  ushort * puVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  short * psVar11;
  uint uVar12;
  ushort uVar13;
  
  iVar1 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)),(undefined2)(*(int *)(gen_frame + 0x32)));
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x134bea0);
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x134c000);
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
joined_r0x00c639d6: ;
    if (param_2 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x54;
      uVar12 = (int)param_2 >> 3;
      uVar6 = param_2 & 7;
      param_2 = uVar12;
      if (uVar6 != 0) {
        puVar7 = (ushort *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + uVar6 * 0xc);
        if (0x7fff < *puVar7) {
          (*(ushort *)(gen_frame + 0x30)) = (ushort)*(undefined4 *)puVar7;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 0)) = (undefined2)((uint)*(undefined4 *)((int)(uintptr_t)puVar7) >> 0x10);
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)) = (undefined2)*(undefined4 *)(puVar7 + 2);
          (*(undefined2 *)(gen_frame + 0x36)) = (undefined2)((uint)*(undefined4 *)(puVar7 + 2) >> 0x10);
          (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(puVar7 + 4);
          iVar1 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)),(undefined2)(*(int *)(gen_frame + 0x32))) + -1;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 0)) = (undefined2)iVar1;
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x32)) + 2)) = (undefined2)((uint)iVar1 >> 0x10);
          puVar7 = &(*(ushort *)(gen_frame + 0x30));
        }
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(byte *)(gen_frame + 0x3c)) = 0;
        (*(undefined1 *)(gen_frame + 0x3d)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = 0;
        (*(int *)(gen_frame + 0x3e)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = 0;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = 0;
        (*(int *)(gen_frame + 0x42)) = 0;
        (*(ushort *)(gen_frame + 0x46)) = 0;
        uVar10 = (puVar7[5] ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
        uVar5 = *(ushort *)((int)param_1 + 10) & 0x7fff;
        uVar9 = puVar7[5] & 0x7fff;
        uVar13 = uVar9 + uVar5;
        iVar2 = 0;
        iVar3 = 0;
        if (((uVar5 < 0x7fff) && (iVar2 = 0, iVar3 = 0, uVar9 < 0x7fff)) &&
           (iVar2 = (*(int *)(gen_frame + 0x3e)), iVar3 = (*(int *)(gen_frame + 0x42)), uVar13 < 0xbffe)) {
          if (0x3fbf < uVar13) {
            if (((uVar5 == 0) && (uVar13 = uVar13 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
               ((param_1[1] == 0 && (*param_1 == 0)))) {
              *(undefined2 *)((int)param_1 + 10) = 0;
            }
            else if (((uVar9 == 0) &&
                     (uVar13 = uVar13 + 1, (*(uint *)(puVar7 + 4) & 0x7fffffff) == 0)) &&
                    ((*(int *)(puVar7 + 2) == 0 && (*(int *)puVar7 == 0)))) {
              param_1[2] = 0;
              param_1[1] = 0;
              *param_1 = 0;
            }
            else {
              (*(int *)(gen_frame + 0x18)) = 0;
              psVar11 = (short *)((int)&(*(int *)(gen_frame + 0x3e)) + 2);
              (*(int *)(gen_frame + 0x2c)) = 5;
              do {
                (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x2c));
                if (0 < (*(int *)(gen_frame + 0x2c))) {
                  (*(ushort * PTR32 *)(gen_frame + 0xc)) = puVar7 + 4;
                  (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)((*(int *)(gen_frame + 0x18)) * 2 + (int)param_1);
                  do {
                    bVar4 = false;
                    uVar12 = *(uint *)(psVar11 + -2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc));
                    if ((uVar12 < *(uint *)(psVar11 + -2)) ||
                       (uVar12 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)))) {
                      bVar4 = true;
                    }
                    *(uint *)(psVar11 + -2) = uVar12;
                    if (bVar4) {
                      *psVar11 = *psVar11 + 1;
                    }
                    (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 1;
                    (*(ushort * PTR32 *)(gen_frame + 0xc)) = (*(ushort * PTR32 *)(gen_frame + 0xc)) + -1;
                    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + -1;
                  } while (0 < (*(int *)(gen_frame + 0x20)));
                }
                psVar11 = psVar11 + 1;
                (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
                (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + -1;
              } while (0 < (*(int *)(gen_frame + 0x2c)));
              uVar13 = uVar13 + 0xc002;
              if ((short)uVar13 < 1) {
LAB_00c63b90: ;
                uVar13 = uVar13 - 1;
                if ((short)uVar13 < 0) {
                  uVar12 = (uint)(ushort)-uVar13;
                  uVar13 = 0;
                  do {
                    if (((*(byte *)(gen_frame + 0x3c)) & 1) != 0) {
                      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
                    }
                    iVar3 = CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
                    uVar6 = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)));
                    iVar2 = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)));
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2))) >> 1);
                    (*(ushort *)(gen_frame + 0x46)) = (*(ushort *)(gen_frame + 0x46)) >> 1;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)(*(int *)(gen_frame + 0x42)) >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10)
                    ;
                    uVar8 = CONCAT22((ushort)(*(int *)(gen_frame + 0x3e)),CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) >> 1;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) =
                         (ushort)(*(int *)(gen_frame + 0x3e)) >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                    uVar12 = uVar12 - 1;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = (ushort)(uVar6 >> 1);
                    (*(byte *)(gen_frame + 0x3c)) = (byte)uVar8;
                    (*(undefined1 *)(gen_frame + 0x3d)) = (undefined1)(uVar8 >> 8);
                  } while (uVar12 != 0);
                  if ((*(int *)(gen_frame + 0x14)) != 0) {
                    (*(byte *)(gen_frame + 0x3c)) = (*(byte *)(gen_frame + 0x3c)) | 1;
                  }
                }
              }
              else {
                do {
                  uVar5 = (ushort)(*(int *)(gen_frame + 0x3e));
                  if (((*(ushort *)(gen_frame + 0x46)) & 0x8000) != 0) break;
                  iVar2 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x3e)),CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) << 1;
                  (*(byte *)(gen_frame + 0x3c)) = (byte)iVar2;
                  (*(undefined1 *)(gen_frame + 0x3d)) = (undefined1)((uint)iVar2 >> 8);
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) = (ushort)((uint)iVar2 >> 0x10);
                  iVar2 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2))) * 2;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = (ushort)iVar2 | uVar5 >> 0xf;
                  iVar3 = (int)CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2))) * 2;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)iVar3 | (ushort)(*(int *)(gen_frame + 0x42)) >> 0xf;
                  uVar13 = uVar13 - 1;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)((uint)iVar2 >> 0x10);
                  (*(ushort *)(gen_frame + 0x46)) = (ushort)((uint)iVar3 >> 0x10);
                } while (0 < (short)uVar13);
                if ((short)uVar13 < 1) goto LAB_00c63b90;
              }
              if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) ||
                 (iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))),
                 iVar2 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)),(ushort)(*(int *)(gen_frame + 0x3e))),
                 (CONCAT22((ushort)(*(int *)(gen_frame + 0x3e)),CONCAT11((*(undefined1 *)(gen_frame + 0x3d)),(*(byte *)(gen_frame + 0x3c)))) & 0x1ffff) == 0x18000)) {
                if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)),(ushort)(*(int *)(gen_frame + 0x3e))) == -1) {
                  iVar2 = 0;
                  if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) == -1) {
                    if ((*(ushort *)(gen_frame + 0x46)) == 0xffff) {
                      (*(ushort *)(gen_frame + 0x46)) = 0x8000;
                      uVar13 = uVar13 + 1;
                      iVar3 = 0;
                      iVar2 = 0;
                    }
                    else {
                      (*(ushort *)(gen_frame + 0x46)) = (*(ushort *)(gen_frame + 0x46)) + 1;
                      iVar3 = 0;
                      iVar2 = 0;
                    }
                  }
                  else {
                    iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) + 1;
                  }
                }
                else {
                  iVar2 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)),(ushort)(*(int *)(gen_frame + 0x3e))) + 1;
                  iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42)));
                }
              }
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)) = (ushort)((uint)iVar2 >> 0x10);
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 0)) = (ushort)iVar2;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)((uint)iVar3 >> 0x10);
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)iVar3;
              if (0x7ffe < uVar13) goto LAB_00c63c53;
              *(ushort *)param_1 = (ushort)(*(int *)(gen_frame + 0x3e));
              *(uint *)((int)param_1 + 2) = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x3e)) + 2)));
              *(uint *)((int)param_1 + 6) = CONCAT22((*(ushort *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
              *(ushort *)((int)param_1 + 10) = uVar13 | uVar10;
              (*(int *)(gen_frame + 0x3e)) = iVar2;
              (*(int *)(gen_frame + 0x42)) = iVar3;
            }
            goto joined_r0x00c639d6;
          }
          param_1[2] = 0;
        }
        else {
LAB_00c63c53: ;
          param_1[2] = ((uVar10 == 0) - 1 & 0x80000000) + 0x7fff8000;
        }
        param_1[1] = 0;
        *param_1 = 0;
        (*(int *)(gen_frame + 0x3e)) = iVar2;
        (*(int *)(gen_frame + 0x42)) = iVar3;
      }
      goto joined_r0x00c639d6;
    }
  }
  (*(int *)(gen_frame + 0x32)) = iVar1;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)param_1;
}

/* ref: ___strgtold12_l */
uint F_00c63c8d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc63c8du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  char cVar10;
  ushort uVar11;
  int * piVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  undefined * puVar17;
  char * pcVar18;
  undefined4 uVar19;
  ushort * puVar20;
  ushort uVar21;
  undefined4 uVar22;
  char * pcVar23;
  short * psVar24;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar16 = 0;
  pcVar23 = ((char *)(gen_frame + 0x4c));
  uVar9 = 0;
  (*(int *)(gen_frame + 0x4)) = 1;
  (*(uint *)(gen_frame + 0x20)) = 0;
  bVar6 = false;
  bVar8 = false;
  bVar7 = false;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_8 != (int *)0x0) {
    (*(char * PTR32 *)(gen_frame + 0x18)) = param_3;
    for (; (((cVar10 = *param_3, cVar10 == ' ' || (cVar10 == '\t')) || (cVar10 == '\n')) ||
           (cVar10 == '\r')); param_3 = param_3 + 1) {
    }
LAB_00c63d0a: ;
    cVar10 = *param_3;
    pcVar18 = param_3 + 1;
    switch((unsigned int)(uintptr_t)(iVar16)) {
    case 0: ;
      if ((byte)(cVar10 - 0x31U) < 9) {
LAB_00c63d25: ;
        iVar16 = 3;
        goto LAB_00c63d27;
      }
      if (cVar10 == *((char *)GEN_TOP(**(undefined4 * PTR32 *)(*param_8 + 0xbc)))) {
LAB_00c63d3c: ;
        iVar16 = 5;
        param_3 = pcVar18;
      }
      else if (cVar10 == '+') {
        uVar9 = 0;
        iVar16 = 2;
        param_3 = pcVar18;
      }
      else {
        if (cVar10 != '-') {
          if (cVar10 == '0') goto LAB_00c63d56;
          goto LAB_00c63ed2;
        }
        iVar16 = 2;
        uVar9 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_00c63d0a;
    case 1: ;
      bVar6 = true;
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_00c63d25;
      if (cVar10 == *((char *)GEN_TOP(**(undefined4 * PTR32 *)(*param_8 + 0xbc)))) goto LAB_00c63d8b;
      if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_00c63db5;
      if (cVar10 == '0') goto LAB_00c63d56;
      goto LAB_00c63d9b;
    case 2: ;
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_00c63d25;
      if (cVar10 == *((char *)GEN_TOP(**(undefined4 * PTR32 *)(*param_8 + 0xbc)))) goto LAB_00c63d3c;
      param_3 = (*(char * PTR32 *)(gen_frame + 0x18));
      if (cVar10 != '0') goto LAB_00c63efb;
LAB_00c63d56: ;
      iVar16 = 1;
      param_3 = pcVar18;
      goto LAB_00c63d0a;
    case 3: ;
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if ((*(uint *)(gen_frame + 0x20)) < 0x19) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
          *pcVar23 = cVar10 + -0x30;
          pcVar23 = pcVar23 + 1;
        }
        else {
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
        }
        cVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar10 != *((char *)GEN_TOP(**(undefined4 * PTR32 *)(*param_8 + 0xbc)))) goto LAB_00c63e23;
LAB_00c63d8b: ;
      bVar6 = true;
      iVar16 = 4;
      param_3 = pcVar18;
      goto LAB_00c63d0a;
    case 4: ;
      bVar8 = true;
      if ((*(uint *)(gen_frame + 0x20)) == 0) {
        while (cVar10 == '0') {
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
          cVar10 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if ((*(uint *)(gen_frame + 0x20)) < 0x19) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
          *pcVar23 = cVar10 + -0x30;
          pcVar23 = pcVar23 + 1;
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + -1;
        }
        cVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_00c63e23: ;
      if ((cVar10 == '+') || (cVar10 == '-')) {
LAB_00c63db5: ;
        bVar6 = true;
        iVar16 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_00c63d9b: ;
        bVar6 = true;
        if ((cVar10 < 'D') || (('E' < cVar10 && (1 < (byte)(cVar10 + 0x9cU))))) goto LAB_00c63ed2;
        iVar16 = 6;
        param_3 = pcVar18;
      }
      goto LAB_00c63d0a;
    case 5: ;
      bVar8 = true;
      param_3 = (*(char * PTR32 *)(gen_frame + 0x18));
      if ((byte)(cVar10 - 0x30U) < 10) {
        iVar16 = 4;
        goto LAB_00c63d27;
      }
      goto LAB_00c63efb;
    case 6: ;
      (*(char * PTR32 *)(gen_frame + 0x18)) = param_3 + -1;
      if (8 < (byte)(cVar10 - 0x31U)) {
        if (cVar10 == '+') goto LAB_00c63eb9;
        if (cVar10 == '-') goto LAB_00c63ead;
LAB_00c63ea0: ;
        param_3 = (*(char * PTR32 *)(gen_frame + 0x18));
        if (cVar10 != '0') goto LAB_00c63efb;
        iVar16 = 8;
        param_3 = pcVar18;
        goto LAB_00c63d0a;
      }
      break;
    case 7: ;
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_00c63ea0;
      break;
    case 8: ;
      bVar7 = true;
      while (cVar10 == '0') {
        cVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_00c63ed2;
      break;
    case 9: ;
      bVar7 = true;
      (*(int *)(gen_frame + 0x8)) = 0;
      goto LAB_00c63f5d;
    default: ;
      goto switchD_00c63d16_caseD_a;
    case 0xb: ;
      if (param_7 != 0) {
        (*(char * PTR32 *)(gen_frame + 0x18)) = param_3;
        if (cVar10 == '+') {
LAB_00c63eb9: ;
          iVar16 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar10 != '-') goto LAB_00c63efb;
LAB_00c63ead: ;
          (*(int *)(gen_frame + 0x4)) = -1;
          iVar16 = 7;
          param_3 = pcVar18;
        }
        goto LAB_00c63d0a;
      }
      iVar16 = 10;
      pcVar18 = param_3;
switchD_00c63d16_caseD_a: ;
      param_3 = pcVar18;
      if (iVar16 != 10) goto LAB_00c63d0a;
      goto LAB_00c63efb;
    }
    iVar16 = 9;
LAB_00c63d27: ;
    param_3 = pcVar18 + -1;
    goto LAB_00c63d0a;
  }
  piVar12 = F_00c51f85();
  *piVar12 = 0x16;
  F_00c4c305();
  iVar4 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
  uVar1 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)),(ushort)(*(uint *)(gen_frame + 0x38)));
  (*(uint *)(gen_frame + 0x0)) = 0;
  goto LAB_00c64328;
LAB_00c63f5d: ;
  if ((cVar10 < '0') || ('9' < cVar10)) goto LAB_00c63f78;
  (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) * 10 + -0x30 + (int)cVar10;
  if ((*(int *)(gen_frame + 0x8)) < 0x1451) {
    cVar10 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_00c63f5d;
  }
  (*(int *)(gen_frame + 0x8)) = 0x1451;
LAB_00c63f78: ;
  while (('/' < cVar10 && (cVar10 < ':'))) {
    cVar10 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_00c63ed2: ;
  param_3 = pcVar18 + -1;
LAB_00c63efb: ;
  *param_2 = param_3;
  if (bVar6) {
    if (0x18 < (*(uint *)(gen_frame + 0x20))) {
      if ('\x04' < (*(char *)(gen_frame + 0x63))) {
        (*(char *)(gen_frame + 0x63)) = (*(char *)(gen_frame + 0x63)) + '\x01';
      }
      pcVar23 = pcVar23 + -1;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      (*(uint *)(gen_frame + 0x20)) = 0x18;
    }
    if ((*(uint *)(gen_frame + 0x20)) == 0) goto LAB_00c64309;
    while (pcVar23 = pcVar23 + -1, *pcVar23 == '\0') {
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
    }
    F_00c7cf04(((char *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x20)),&(*(int *)(gen_frame + 0x30)));
    iVar5 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)),(undefined2)(*(int *)(gen_frame + 0x34)));
    iVar4 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
    iVar3 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46)));
    iVar2 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42)));
    uVar1 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)),(ushort)(*(uint *)(gen_frame + 0x38)));
    uVar14 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)),(ushort)(*(uint *)(gen_frame + 0x38)));
    iVar16 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 2)),(undefined2)(*(int *)(gen_frame + 0x26)));
    if ((*(int *)(gen_frame + 0x4)) < 0) {
      (*(int *)(gen_frame + 0x8)) = -(*(int *)(gen_frame + 0x8));
    }
    (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)((*(int *)(gen_frame + 0x8)) + (*(int *)(gen_frame + 0x1c)));
    if (!bVar7) {
      (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x18)) + param_5);
    }
    if (!bVar8) {
      (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x18)) - param_6);
    }
    if ((int)(*(char * PTR32 *)(gen_frame + 0x18)) < 0x1451) {
      if ((int)(*(char * PTR32 *)(gen_frame + 0x18)) < -0x1450) {
        (*(uint *)(gen_frame + 0x0)) = 1;
        goto LAB_00c64309;
      }
      puVar17 = &REFG(undefined, 0x134bea0);
      if ((*(char * PTR32 *)(gen_frame + 0x18)) != (char *)0x0) {
        if ((int)(*(char * PTR32 *)(gen_frame + 0x18)) < 0) {
          (*(char * PTR32 *)(gen_frame + 0x18)) = ((char *)GEN_TOP(-(int)(*(char * PTR32 *)(gen_frame + 0x18))));
          puVar17 = &REFG(undefined, 0x134c000);
        }
        if (param_4 == 0) {
          (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
        }
        iVar16 = (*(int *)(gen_frame + 0x26));
        uVar14 = uVar1;
        iVar2 = (*(int *)(gen_frame + 0x42));
        iVar3 = (*(int *)(gen_frame + 0x46));
        iVar4 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
        iVar5 = (*(int *)(gen_frame + 0x34));
joined_r0x00c64005: ;
        if ((*(char * PTR32 *)(gen_frame + 0x18)) != (char *)0x0) {
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = (ushort)(uVar14 >> 0x10);
          uVar1 = (int)((int)(uintptr_t)(*(char * PTR32 *)(gen_frame + 0x18))) >> 3;
          puVar17 = puVar17 + 0x54;
          uVar13 = (uint)(*(char * PTR32 *)(gen_frame + 0x18)) & 7;
          (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)uVar1;
          if (uVar13 != 0) {
            puVar20 = (ushort *)(puVar17 + uVar13 * 0xc);
            if (0x7fff < *puVar20) {
              (*(ushort *)(gen_frame + 0x24)) = (ushort)*(undefined4 *)puVar20;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 0)) = (undefined2)((uint)*(undefined4 *)((int)(uintptr_t)puVar20) >> 0x10);
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 2)) = (undefined2)*(undefined4 *)(puVar20 + 2);
              (*(undefined2 *)(gen_frame + 0x2a)) = (undefined2)((uint)*(undefined4 *)(puVar20 + 2) >> 0x10);
              (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(puVar20 + 4);
              iVar16 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 2)),(undefined2)(*(int *)(gen_frame + 0x26))) + -1;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 0)) = (undefined2)iVar16;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x26)) + 2)) = (undefined2)((uint)iVar16 >> 0x10);
              puVar20 = &(*(ushort *)(gen_frame + 0x24));
            }
            (*(int *)(gen_frame + 0x1c)) = 0;
            (*(byte *)(gen_frame + 0x40)) = 0;
            (*(undefined1 *)(gen_frame + 0x41)) = 0;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = 0;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = 0;
            iVar2 = 0;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 0)) = 0;
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)) = 0;
            iVar3 = 0;
            (*(ushort *)(gen_frame + 0x4a)) = 0;
            uVar11 = puVar20[5] & 0x7fff;
            uVar21 = (puVar20[5] ^ (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2))) & 0x8000;
            uVar15 = uVar11 + ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) & 0x7fff);
            if (((((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) & 0x7fff) < 0x7fff) && (uVar11 < 0x7fff)) && (uVar15 < 0xbffe)) {
              if (0x3fbf < uVar15) {
                if ((((uVar14 & 0x7fff0000) == 0) &&
                    (uVar15 = uVar15 + 1, (uVar14 & 0x7fffffff) == 0)) &&
                   ((iVar5 == 0 && (iVar4 == 0)))) {
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = 0;
                  uVar14 = uVar14 & 0xffff;
                  iVar2 = 0;
                  iVar3 = 0;
                }
                else if (((uVar11 == 0) &&
                         (uVar15 = uVar15 + 1, (*(uint *)(puVar20 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar20 + 2) == 0 && (*(int *)puVar20 == 0)))) {
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = 0;
                  uVar14 = 0;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
                  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
                  iVar4 = 0;
                  iVar5 = 0;
                }
                else {
                  (*(int *)(gen_frame + 0x4)) = 0;
                  psVar24 = (short *)((int)&(*(int *)(gen_frame + 0x42)) + 2);
                  (*(int *)(gen_frame + 0x14)) = 5;
                  do {
                    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x14));
                    if (0 < (*(int *)(gen_frame + 0x14))) {
                      (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)((int)&(*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x4)) * 2);
                      (*(ushort * PTR32 *)(gen_frame + 0xc)) = puVar20 + 4;
                      do {
                        bVar6 = false;
                        uVar14 = *(uint *)(psVar24 + -2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10));
                        if ((uVar14 < *(uint *)(psVar24 + -2)) ||
                           (uVar14 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)))) {
                          bVar6 = true;
                        }
                        *(uint *)(psVar24 + -2) = uVar14;
                        if (bVar6) {
                          *psVar24 = *psVar24 + 1;
                        }
                        (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 1;
                        (*(ushort * PTR32 *)(gen_frame + 0xc)) = (*(ushort * PTR32 *)(gen_frame + 0xc)) + -1;
                        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
                      } while (0 < (*(int *)(gen_frame + 0x8)));
                    }
                    psVar24 = psVar24 + 1;
                    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
                    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + -1;
                  } while (0 < (*(int *)(gen_frame + 0x14)));
                  uVar15 = uVar15 + 0xc002;
                  if ((short)uVar15 < 1) {
LAB_00c641c1: ;
                    uVar15 = uVar15 - 1;
                    if ((short)uVar15 < 0) {
                      uVar14 = (uint)(ushort)-uVar15;
                      uVar15 = 0;
                      do {
                        if (((*(byte *)(gen_frame + 0x40)) & 1) != 0) {
                          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
                        }
                        iVar3 = CONCAT22((*(ushort *)(gen_frame + 0x4a)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)));
                        uVar1 = CONCAT22((ushort)(*(int *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
                        iVar2 = CONCAT22((ushort)(*(int *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)));
                        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)) = (ushort)(CONCAT22((*(ushort *)(gen_frame + 0x4a)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2))) >> 1);
                        (*(ushort *)(gen_frame + 0x4a)) = (*(ushort *)(gen_frame + 0x4a)) >> 1;
                        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 0)) =
                             (ushort)(*(int *)(gen_frame + 0x46)) >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
                        uVar13 = CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) >> 1;
                        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) =
                             (ushort)(*(int *)(gen_frame + 0x42)) >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar14 = uVar14 - 1;
                        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)(uVar1 >> 1);
                        (*(byte *)(gen_frame + 0x40)) = (byte)uVar13;
                        (*(undefined1 *)(gen_frame + 0x41)) = (undefined1)(uVar13 >> 8);
                      } while (uVar14 != 0);
                      if ((*(int *)(gen_frame + 0x1c)) != 0) {
                        (*(byte *)(gen_frame + 0x40)) = (*(byte *)(gen_frame + 0x40)) | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar11 = (ushort)(*(int *)(gen_frame + 0x42));
                      if ((short)(*(ushort *)(gen_frame + 0x4a)) < 0) break;
                      iVar2 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) << 1;
                      (*(byte *)(gen_frame + 0x40)) = (byte)iVar2;
                      (*(undefined1 *)(gen_frame + 0x41)) = (undefined1)((uint)iVar2 >> 8);
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 0)) = (ushort)((uint)iVar2 >> 0x10);
                      iVar2 = (int)CONCAT22((ushort)(*(int *)(gen_frame + 0x46)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2))) * 2;
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)) = (ushort)iVar2 | uVar11 >> 0xf;
                      iVar3 = (int)CONCAT22((*(ushort *)(gen_frame + 0x4a)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2))) * 2;
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)) = (ushort)iVar3 | (ushort)(*(int *)(gen_frame + 0x46)) >> 0xf;
                      uVar15 = uVar15 - 1;
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 0)) = (ushort)((uint)iVar2 >> 0x10);
                      (*(ushort *)(gen_frame + 0x4a)) = (ushort)((uint)iVar3 >> 0x10);
                    } while (0 < (short)uVar15);
                    if ((short)uVar15 < 1) goto LAB_00c641c1;
                  }
                  if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) ||
                     (iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46))),
                     iVar2 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))),
                     (CONCAT22((ushort)(*(int *)(gen_frame + 0x42)),CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) & 0x1ffff) == 0x18000
                     )) {
                    if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) == -1) {
                      iVar2 = 0;
                      if ((int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46))) == -1) {
                        if ((*(ushort *)(gen_frame + 0x4a)) == 0xffff) {
                          (*(ushort *)(gen_frame + 0x4a)) = 0x8000;
                          uVar15 = uVar15 + 1;
                          iVar3 = 0;
                          iVar2 = 0;
                        }
                        else {
                          (*(ushort *)(gen_frame + 0x4a)) = (*(ushort *)(gen_frame + 0x4a)) + 1;
                          iVar3 = 0;
                          iVar2 = 0;
                        }
                      }
                      else {
                        iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46))) + 1;
                      }
                    }
                    else {
                      iVar2 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x42)) + 2)),(ushort)(*(int *)(gen_frame + 0x42))) + 1;
                      iVar3 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x46)) + 2)),(ushort)(*(int *)(gen_frame + 0x46)));
                    }
                  }
                  if (uVar15 < 0x7fff) {
                    (*(int *)(gen_frame + 0x30)) = iVar2;
                    (*(int *)(gen_frame + 0x34)) = iVar3;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = (*(ushort *)(gen_frame + 0x4a));
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = uVar15 | uVar21;
                    uVar14 = CONCAT22(uVar15 | uVar21,(*(ushort *)(gen_frame + 0x4a)));
                    iVar4 = iVar2;
                    iVar5 = iVar3;
                  }
                  else {
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
                    uVar14 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = (ushort)uVar14;
                    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = (ushort)(uVar14 >> 0x10);
                    iVar4 = 0;
                    iVar5 = 0;
                  }
                }
                goto joined_r0x00c64005;
              }
              uVar14 = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
            }
            else {
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
              uVar14 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
              (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
            }
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = (ushort)uVar14;
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = (ushort)(uVar14 >> 0x10);
            iVar2 = 0;
            iVar3 = 0;
            iVar4 = 0;
            iVar5 = 0;
          }
          goto joined_r0x00c64005;
        }
      }
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = (undefined2)((uint)iVar5 >> 0x10);
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = (undefined2)iVar5;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = (undefined2)((uint)iVar4 >> 0x10);
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = (undefined2)iVar4;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = (ushort)(uVar14 >> 0x10);
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = (ushort)uVar14;
      uVar22 = CONCAT22((undefined2)(*(int *)(gen_frame + 0x34)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)));
      uVar19 = CONCAT22((ushort)(*(uint *)(gen_frame + 0x38)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)));
      (*(int *)(gen_frame + 0x26)) = iVar16;
      uVar1 = uVar14;
      (*(int *)(gen_frame + 0x42)) = iVar2;
      (*(int *)(gen_frame + 0x46)) = iVar3;
      (*(int *)(gen_frame + 0x34)) = iVar5;
    }
    else {
      uVar22 = 0;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = 0x7fff;
      uVar19 = 0x80000000;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x0)) = 2;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = 4;
LAB_00c64309: ;
    iVar4 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
    uVar1 = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)),(ushort)(*(uint *)(gen_frame + 0x38)));
    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = 0;
    uVar19 = 0;
    uVar22 = 0;
  }
  *param_1 = (undefined2)(*(int *)(gen_frame + 0x30));
  param_1[5] = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) | uVar9;
  *(undefined4 *)(param_1 + 1) = uVar22;
  *(undefined4 *)(param_1 + 3) = uVar19;
LAB_00c64328: ;
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  (*(int *)(gen_frame + 0x30)) = iVar4;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: ___STRINGTOLD_L */
uint F_00c64369(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc64369u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * pld = (undefined *)(uintptr_t)gen_a0;
  char * PTR32 * p_end_ptr = (char * PTR32 *)(uintptr_t)gen_a1;
  char * str = (char *)(uintptr_t)gen_a2;
  int mult12 = (int)gen_a3;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 IVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = F_00c63c8d(((undefined1 *)(gen_frame + 0xc)),p_end_ptr,str,mult12,0,0,0,_Locale);
  IVar2 = F_00c7cdb6(((undefined1 *)(gen_frame + 0xc)),pld);
  if (IVar2 == (1)) {
    uVar1 = uVar1 | 2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: __aulldvrm */
ulonglong F_00c643d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc643d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}

/* ref: __mbsnbicoll_l */
int F_00c64465(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc64465u, gen_a0, gen_a1, gen_a2, gen_a3);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (_MaxCount == 0) {
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 8))) == 0) {
      iVar2 = F_00c7d0e8((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = F_00c6fdae((undefined *)((byte *)(gen_frame + 0xc)),*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 0xc))),0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 4))));
      if (iVar2 == 0) goto LAB_00c64520;
      iVar2 = iVar2 + -2;
    }
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
LAB_00c64520: ;
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

/* ref: __mbsnbicoll */
int F_00c64543(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc64543u, gen_a0, gen_a1, gen_a2, 0u);
  uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;
  uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  int iVar1;
  
  iVar1 = F_00c64465(_Str1,_Str2,_MaxCount,(undefined *)0x0);
  return iVar1;
}

/* ref: ___wtomb_environ */
int F_00c6455d(void)
{
  GEN_ENTER(0xc6455du, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  gen_size32 _Count;
  int iVar1;
  int * piVar2;
  
  (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x0;
  iVar1 = *REFG(int * PTR32, 0x15d6848);
  piVar2 = REFG(undefined4, 0x15d6848);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    _Count = gen_imp_WideCharToMultiByte(0,0,iVar1,0xffffffff,0,0,0,0);
    if (_Count == 0) {
      return -1;
    }
    (*(char * PTR32 *)(gen_frame + 0x8)) = F_00c54c73(_Count,1);
    if ((*(char * PTR32 *)(gen_frame + 0x8)) == (char *)0x0) {
      return -1;
    }
    iVar1 = gen_imp_WideCharToMultiByte(0,0,*piVar2,0xffffffff,(*(char * PTR32 *)(gen_frame + 0x8)),_Count,0,0);
    if (iVar1 == 0) break;
    iVar1 = F_00c7d2ad(&(*(char * PTR32 *)(gen_frame + 0x8)),0);
    if ((iVar1 < 0) && ((*(char * PTR32 *)(gen_frame + 0x8)) != (char *)0x0)) {
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x8)));
      (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x8)));
  return -1;
}

/* ref: _calloc */
undefined * F_00c645f4(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc645f4u, gen_a0, gen_a1, 0u, 0u);
  gen_size32 _Count = (gen_size32)gen_a0;
  gen_size32 _Size = (gen_size32)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int * piVar2;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  pvVar1 = (undefined *)F_00c73804(_Count,_Size,&(*(int *)(gen_frame + 0x8)));
  if ((pvVar1 == (undefined *)0x0) && ((*(int *)(gen_frame + 0x8)) != 0)) {
    piVar2 = F_00c51f85();
    if (piVar2 != (int *)0x0) {
      piVar2 = F_00c51f85();
      *piVar2 = (*(int *)(gen_frame + 0x8));
    }
  }
  return pvVar1;
}

/* ref: _strnlen */
gen_size32 F_00c64634(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc64634u, gen_a0, gen_a1, 0u, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (_MaxCount != 0) {
    do {
      if (*_Str == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      _Str = _Str + 1;
    } while (uVar1 < _MaxCount);
  }
  return uVar1;
}

/* ref: FUN_00c64651 */
uint F_00c64651(unsigned int gen_a0)
{
  GEN_ENTER(0xc64651u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00c650e4();
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_00c64662 */
uint F_00c64662(unsigned int gen_a0)
{
  GEN_ENTER(0xc64662u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00c650ea();
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_00c64673 */
uint F_00c64673(unsigned int gen_a0)
{
  GEN_ENTER(0xc64673u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00c650f0();
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_00c64684 */
uint F_00c64684(void)
{
  GEN_ENTER(0xc64684u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  long lVar2;
  int eVar3;
  char * _Str1;
  int iVar4;
  gen_size32 sVar5;
  DWORD DVar6;
  int * piVar7;
  long lVar8;
  char * pcVar9;
  int * unaff_EDI;
  
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x2c;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = &REFG(undefined, 0x12f65f0);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xc64690;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  ((long *)(gen_frame + 0x20))[0] = 0;
  (*(long *)(gen_frame + 0x18)) = 0;
  (*(long *)(gen_frame + 0x14)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  F_00c5aa4f(7);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)F_00c650f6();
  eVar3 = F_00c65025(((long *)(gen_frame + 0x20)));
  if (((eVar3 != 0) || (eVar3 = F_00c64fcb(&(*(long *)(gen_frame + 0x18))), eVar3 != 0)) ||
     (eVar3 = F_00c64ff8(&(*(long *)(gen_frame + 0x14))), eVar3 != 0)) goto LAB_00c64788;
  (*(UINT *)(gen_frame + 0x8)) = F_00c54b81();
  REFG(undefined4, 0x15d759c) = 0;
  unaff_EDI = (int *)0xffffffff;
  REFG(undefined4, 0x134bb5c) = 0xffffffff;
  REFG(undefined4, 0x134bb50) = 0xffffffff;
  _Str1 = F_00c4b3f6("TZ");
  (*(char * PTR32 *)(gen_frame + 0x0)) = _Str1;
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (REFG(undefined4, 0x15d75a0) != (char *)0x0) {
      F_00c4c68f(REFG(undefined4, 0x15d75a0));
      REFG(undefined4, 0x15d75a0) = (char *)0x0;
    }
    DVar6 = gen_imp_GetTimeZoneInformation((GEN_LPANY)&REFG(int, 0x15d74f0));
    if (DVar6 != 0xffffffff) {
      REFG(undefined4, 0x15d759c) = 1;
      ((long *)(gen_frame + 0x20))[0] = REFG(int, 0x15d74f0) * 0x3c;
      if (REFG(short, 0x15d7536) != 0) {
        ((long *)(gen_frame + 0x20))[0] = REFG(int, 0x15d74f0) * 0x3c + REFG(int, 0x15d7544) * 0x3c;
      }
      if ((REFG(short, 0x15d758a) == 0) || (REFG(int, 0x15d7598) == 0)) {
        (*(long *)(gen_frame + 0x18)) = 0;
        (*(long *)(gen_frame + 0x14)) = 0;
      }
      else {
        (*(long *)(gen_frame + 0x18)) = 1;
        (*(long *)(gen_frame + 0x14)) = (REFG(int, 0x15d7598) - REFG(int, 0x15d7544)) * 0x3c;
      }
      iVar4 = gen_imp_WideCharToMultiByte((*(UINT *)(gen_frame + 0x8)),0,&REFG(undefined, 0x15d74f4),0xffffffff,*(*(int * PTR32 *)(gen_frame + 0x1c)),0x3f,0,&(*(int *)(gen_frame + 0xc)));
      if ((iVar4 == 0) || ((*(int *)(gen_frame + 0xc)) != 0)) {
        *(undefined1 *)*(*(int * PTR32 *)(gen_frame + 0x1c)) = 0;
      }
      else {
        *(undefined1 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x3f) = 0;
      }
      iVar4 = gen_imp_WideCharToMultiByte((*(UINT *)(gen_frame + 0x8)),0,&REFG(undefined, 0x15d7548),0xffffffff,(*(int * PTR32 *)(gen_frame + 0x1c))[1],0x3f,0,&(*(int *)(gen_frame + 0xc)));
      if ((iVar4 == 0) || ((*(int *)(gen_frame + 0xc)) != 0)) {
        *(undefined1 *)(*(int * PTR32 *)(gen_frame + 0x1c))[1] = 0;
      }
      else {
        *(undefined1 *)((*(int * PTR32 *)(gen_frame + 0x1c))[1] + 0x3f) = 0;
      }
    }
LAB_00c6487d: ;
    (*(int *)(gen_frame + 0x10)) = 1;
  }
  else {
    if (REFG(undefined4, 0x15d75a0) != (char *)0x0) {
      iVar4 = F_00c556e0(_Str1,REFG(undefined4, 0x15d75a0));
      if (iVar4 == 0) goto LAB_00c6487d;
      if (REFG(undefined4, 0x15d75a0) != (char *)0x0) {
        F_00c4c68f(REFG(undefined4, 0x15d75a0));
      }
    }
    sVar5 = F_00c552f0(_Str1);
    REFG(undefined4, 0x15d75a0) = F_00c54c2e(sVar5 + 1);
    if (REFG(undefined4, 0x15d75a0) == (char *)0x0) goto LAB_00c6487d;
    pcVar9 = _Str1;
    sVar5 = F_00c552f0(_Str1);
    eVar3 = F_00c49908(REFG(undefined4, 0x15d75a0),sVar5 + 1,pcVar9);
    if (eVar3 != 0) goto LAB_00c64788;
  }
  lVar8 = ((long *)(gen_frame + 0x20))[0];
  piVar7 = (int *)F_00c650f0();
  lVar2 = (*(long *)(gen_frame + 0x18));
  *piVar7 = lVar8;
  piVar7 = (int *)F_00c650e4();
  lVar8 = (*(long *)(gen_frame + 0x14));
  *piVar7 = lVar2;
  piVar7 = (int *)F_00c650ea();
  *piVar7 = lVar8;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0xfffffffe;
  piVar7 = (int *)F_00c64907();
  unaff_EDI = (*(int * PTR32 *)(gen_frame + 0x1c));
  if ((*(int *)(gen_frame + 0x10)) == 0) {
    eVar3 = F_00c4d9ef(*(*(int * PTR32 *)(gen_frame + 0x1c)),0x40,_Str1,3);
    if (eVar3 != 0) {
LAB_00c64788: ;
                    
      F_00c4c299(unaff_EDI,0,0,0,0,0);
    }
    pcVar9 = _Str1 + 3;
    if (*pcVar9 == '-') {
      (*(int *)(gen_frame + 0x4)) = 1;
      pcVar9 = _Str1 + 4;
    }
    lVar8 = F_00c4c71d(pcVar9);
    ((long *)(gen_frame + 0x20))[0] = lVar8 * 0xe10;
    for (; (cVar1 = *pcVar9, cVar1 == '+' || (('/' < cVar1 && (cVar1 < ':')))); pcVar9 = pcVar9 + 1)
    {
    }
    if (*pcVar9 == ':') {
      pcVar9 = pcVar9 + 1;
      lVar8 = F_00c4c71d(pcVar9);
      ((long *)(gen_frame + 0x20))[0] = ((long *)(gen_frame + 0x20))[0] + lVar8 * 0x3c;
      for (; ('/' < *pcVar9 && (*pcVar9 < ':')); pcVar9 = pcVar9 + 1) {
      }
      if (*pcVar9 == ':') {
        pcVar9 = pcVar9 + 1;
        lVar8 = F_00c4c71d(pcVar9);
        ((long *)(gen_frame + 0x20))[0] = ((long *)(gen_frame + 0x20))[0] + lVar8;
        for (; ('/' < *pcVar9 && (*pcVar9 < ':')); pcVar9 = pcVar9 + 1) {
        }
      }
    }
    if ((*(int *)(gen_frame + 0x4)) != 0) {
      ((long *)(gen_frame + 0x20))[0] = -((long *)(gen_frame + 0x20))[0];
    }
    (*(long *)(gen_frame + 0x18)) = (int)*pcVar9;
    if (*pcVar9 == 0) {
      *(undefined1 *)unaff_EDI[1] = 0;
    }
    else {
      eVar3 = F_00c4d9ef(unaff_EDI[1],0x40,pcVar9,3);
      if (eVar3 != 0) goto LAB_00c64788;
    }
    lVar2 = ((long *)(gen_frame + 0x20))[0];
    piVar7 = (int *)F_00c650f0();
    lVar8 = (*(long *)(gen_frame + 0x18));
    *piVar7 = lVar2;
    piVar7 = (int *)F_00c650e4();
    *piVar7 = lVar8;
  }
  return (uint)piVar7;
}

/* ref: FUN_00c64902 */
uint F_00c64902(unsigned int gen_a0)
{
  GEN_ENTER(0xc64902u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c64907 */
uint F_00c64907(void)
{
  GEN_ENTER(0xc64907u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c64997 */
int F_00c64997(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xc64997u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  int param_10 = (int)gen_a9;
  int param_11 = (int)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  int eVar3;
  int iVar4;
  undefined * puVar5;
  undefined * puVar6;
  bool bVar7;
  
  (*(long *)(gen_frame + 0x8)) = 0;
  if (param_4 == 1) {
    uVar1 = param_5 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_5 % 100 != 0)) || ((int)(param_5 + 0x76c) % 400 == 0)) {
      puVar5 = (&REFG(undefined * PTR32, 0x134bbfc))[in_eax];
    }
    else {
      puVar5 = *(undefined * PTR32 *)(&REFG(undefined, 0x134bc30) + in_eax * 4);
    }
    puVar6 = puVar5 + 1;
    iVar2 = (param_6 * 7 -
            (int)(puVar6 + param_5 * 0x16d + -0x63db +
                           ((int)(param_5 + 299) / 400 - (int)(param_5 - 1) / 100) +
                           ((int)((param_5 - 1) + ((int)(param_5 - 1) >> 0x1f & 3U)) >> 2)) % 7) +
            param_7;
    if ((int)(puVar6 + param_5 * 0x16d + -0x63db +
                       ((int)(param_5 + 299) / 400 - (int)(param_5 - 1) / 100) +
                       ((int)((param_5 - 1) + ((int)(param_5 - 1) >> 0x1f & 3U)) >> 2)) % 7 <=
        param_7) {
      puVar6 = puVar5 + -6;
    }
    puVar6 = puVar6 + iVar2;
    if (param_6 == 5) {
      if (((uVar1 == 0) && ((int)param_5 % 100 != 0)) || ((int)(param_5 + 0x76c) % 400 == 0)) {
        iVar2 = (&REFG(undefined4, 0x134bc00))[in_eax];
      }
      else {
        iVar2 = (&REFG(undefined4, 0x134bc34))[in_eax];
      }
      if (iVar2 < (int)puVar6) {
        puVar6 = puVar6 + -7;
      }
    }
  }
  else {
    uVar1 = param_5 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar7) && (iVar2 = (int)param_5 / 100, (int)param_5 % 100 != 0)) ||
       (iVar2 = (int)(param_5 + 0x76c) / 400, (int)(param_5 + 0x76c) % 400 == 0)) {
      puVar6 = (&REFG(undefined * PTR32, 0x134bbfc))[in_eax];
    }
    else {
      puVar6 = *(undefined * PTR32 *)(&REFG(undefined, 0x134bc30) + in_eax * 4);
    }
    puVar6 = puVar6 + param_8;
  }
  iVar4 = ((in_ecx * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  if (param_3 == 1) {
    REFG(undefined4, 0x134bb50) = param_5;
    REFG(undefined4, 0x134bb54) = puVar6;
    REFG(int, 0x134bb58) = iVar4;
  }
  else {
    REFG(undefined4, 0x134bb60) = puVar6;
    REFG(int, 0x134bb64) = iVar4;
    eVar3 = F_00c64ff8(&(*(long *)(gen_frame + 0x8)));
    if (eVar3 != 0) {
                    
      F_00c4c299(param_5,0,0,0,0,0);
    }
    iVar2 = (*(long *)(gen_frame + 0x8)) * 1000;
    REFG(int, 0x134bb64) = REFG(int, 0x134bb64) + iVar2;
    REFG(undefined4, 0x134bb5c) = param_5;
    if (REFG(int, 0x134bb64) < 0) {
      REFG(int, 0x134bb64) = REFG(int, 0x134bb64) + 86400000;
      REFG(undefined4, 0x134bb60) = REFG(undefined4, 0x134bb60) + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < REFG(int, 0x134bb64)) {
        REFG(int, 0x134bb64) = REFG(int, 0x134bb64) + -86400000;
        REFG(undefined4, 0x134bb60) = REFG(undefined4, 0x134bb60) + 1;
      }
    }
  }
  return iVar2;
}

/* ref: FUN_00c64b8e */
uint F_00c64b8e(unsigned int gen_a0)
{
  GEN_ENTER(0xc64b8eu, gen_a0, 0u, 0u, 0u);
  int * in_edi = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  bool bVar1;
  int eVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_eax;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  (*(long *)(gen_frame + 0x8)) = 0;
  eVar2 = F_00c64fcb(&(*(long *)(gen_frame + 0x8)));
  if (eVar2 != 0) {
                    
    F_00c4c299(in_edi,0,0,0,0,0);
  }
  if ((*(long *)(gen_frame + 0x8)) == 0) {
    return 0;
  }
  iVar7 = in_edi[5];
  if ((iVar7 != REFG(int, 0x134bb50)) || (iVar7 != REFG(int, 0x134bb5c))) {
    if (REFG(int, 0x15d759c) == 0) {
      in_eax = 3;
      uVar6 = 2;
      (*(undefined4 *)(gen_frame + 0x0)) = 0xb;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      if (iVar7 < 0x6b) {
        in_eax = 4;
        uVar6 = 1;
        (*(undefined4 *)(gen_frame + 0x0)) = 10;
        (*(undefined4 *)(gen_frame + 0x4)) = 5;
      }
      F_00c64997(in_eax,2,1,1,iVar7,uVar6,0,0,0,0,0);
      F_00c64997((*(undefined4 *)(gen_frame + 0x0)),2,0,1,in_edi[5],(*(undefined4 *)(gen_frame + 0x4)),0,0,0,0,0);
    }
    else {
      if (REFG(short, 0x15d7588) != 0) {
        uVar8 = (uint)REFG(undefined2, 0x15d758e);
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)REFG(undefined2, 0x15d758c);
        uVar8 = 0;
        uVar4 = (uint)REFG(undefined2, 0x15d758e);
      }
      F_00c64997((uint)REFG(undefined2, 0x15d758a),(uint)REFG(undefined2, 0x15d7590),1,(uint)(REFG(short, 0x15d7588) == 0),iVar7,uVar4,
                   uVar3,uVar8,(uint)REFG(undefined2, 0x15d7592),(uint)REFG(undefined2, 0x15d7594),(uint)REFG(undefined2, 0x15d7596));
      if (REFG(short, 0x15d7534) != 0) {
        uVar8 = (uint)REFG(undefined2, 0x15d753a);
        uVar3 = 0;
        uVar4 = 0;
        iVar7 = in_edi[5];
      }
      else {
        uVar3 = (uint)REFG(undefined2, 0x15d7538);
        uVar8 = 0;
        uVar4 = (uint)REFG(undefined2, 0x15d753a);
        iVar7 = in_edi[5];
      }
      F_00c64997((uint)REFG(undefined2, 0x15d7536),(uint)REFG(undefined2, 0x15d753c),0,(uint)(REFG(short, 0x15d7534) == 0),iVar7,uVar4,
                   uVar3,uVar8,(uint)REFG(undefined2, 0x15d753e),(uint)REFG(undefined2, 0x15d7540),(uint)REFG(undefined2, 0x15d7542));
    }
  }
  iVar7 = in_edi[7];
  if (REFG(int, 0x134bb54) < REFG(int, 0x134bb60)) {
    if ((iVar7 < REFG(int, 0x134bb54)) || (REFG(int, 0x134bb60) < iVar7)) {
      return 0;
    }
    if ((REFG(int, 0x134bb54) < iVar7) && (iVar7 < REFG(int, 0x134bb60))) {
      return 1;
    }
  }
  else {
    if (iVar7 < REFG(int, 0x134bb60)) {
      return 1;
    }
    if (REFG(int, 0x134bb54) < iVar7) {
      return 1;
    }
    if ((REFG(int, 0x134bb60) < iVar7) && (iVar7 < REFG(int, 0x134bb54))) {
      return 0;
    }
  }
  iVar5 = ((in_edi[2] * 0x3c + in_edi[1]) * 0x3c + *in_edi) * 1000;
  if (iVar7 == REFG(int, 0x134bb54)) {
    bVar1 = REFG(int, 0x134bb58) <= iVar5;
  }
  else {
    bVar1 = iVar5 < REFG(int, 0x134bb64);
  }
  return (uint)bVar1;
}

/* ref: ___tzset */
unsigned int F_00c64d65(void)
{
  GEN_ENTER(0xc64d65u, 0u, 0u, 0u, 0u);
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6610);
  uStack_c = 0xc64d71;
  if (REFG(int, 0x15d75a4) == 0) {
    F_00c5aa4f(6);
    local_8 = (undefined *)0x0;
    if (REFG(int, 0x15d75a4) == 0) {
      F_00c64684();
      REFG(int, 0x15d75a4) = REFG(int, 0x15d75a4) + 1;
    }
    local_8 = (undefined *)0xfffffffe;
    F_00c64dab();
  }
  return 0;
}

/* ref: FUN_00c64dab */
uint F_00c64dab(void)
{
  GEN_ENTER(0xc64dabu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(6);
  return uVar1;
}

/* ref: FUN_00c64de3 */
uint F_00c64de3(void)
{
  GEN_ENTER(0xc64de3u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(6);
  return uVar1;
}

/* ref: __isindst */
int F_00c64dec(unsigned int gen_a0)
{
  GEN_ENTER(0xc64decu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6650);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc64df8;
  F_00c5aa4f(6);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  (*(uint *)(gen_frame + 0x0)) = F_00c64b8e((*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c64e24();
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c64e24 */
uint F_00c64e24(void)
{
  GEN_ENTER(0xc64e24u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(6);
  return uVar1;
}

/* ref: __gmtime32_s */
int F_00c64e2d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc64e2du, gen_a0, gen_a1, 0u, 0u);
  undefined * _Tm = (undefined *)(uintptr_t)gen_a0;
  int * _Time = (int *)(uintptr_t)gen_a1;
  bool bVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  
  bVar1 = false;
  if (_Tm == (undefined *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    F_00c48350(_Tm,0xff,0x24);
    if (_Time == (int *)0x0) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
    }
    else {
      iVar5 = *_Time;
      if (-0xa8c1 < iVar5) {
        iVar3 = iVar5 % 0x7861f80;
        iVar5 = (iVar5 / 0x7861f80) * 4;
        iVar6 = iVar5 + 0x46;
        iVar4 = iVar3;
        if (0x1e1337f < iVar3) {
          iVar4 = iVar3 + -0x1e13380;
          iVar6 = iVar5 + 0x47;
          if (0x1e1337f < iVar4) {
            iVar4 = iVar3 + -0x3c26700;
            iVar6 = iVar5 + 0x48;
            if (iVar4 < 0x1e28500) {
              bVar1 = true;
            }
            else {
              iVar6 = iVar5 + 0x49;
              iVar4 = iVar3 + -0x5a4ec00;
            }
          }
        }
        (*(int *)(((char *)(_Tm) + 20))) = iVar6;
        puVar7 = &REFG(undefined4, 0x134bc00);
        (*(int *)(((char *)(_Tm) + 28))) = iVar4 / 0x15180;
        if (!bVar1) {
          puVar7 = &REFG(undefined4, 0x134bc34);
        }
        iVar6 = 1;
        iVar5 = puVar7[1];
        while (iVar5 < (*(int *)(((char *)(_Tm) + 28)))) {
          iVar6 = iVar6 + 1;
          iVar5 = puVar7[iVar6];
        }
        (*(int *)(((char *)(_Tm) + 16))) = iVar6 + -1;
        (*(int *)(((char *)(_Tm) + 12))) = (*(int *)(((char *)(_Tm) + 28))) - puVar7[iVar6 + -1];
        iVar5 = *_Time;
        (*(int *)(((char *)(_Tm) + 32))) = 0;
        (*(int *)(((char *)(_Tm) + 24))) = (iVar5 / 0x15180 + 4) % 7;
        (*(int *)(((char *)(_Tm) + 8))) = (iVar4 % 0x15180) / 0xe10;
        iVar5 = (iVar4 % 0x15180) % 0xe10;
        (*(int *)(((char *)(_Tm) + 4))) = iVar5 / 0x3c;
        (*(int *)((char *)(_Tm))) = iVar5 % 0x3c;
        return 0;
      }
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
    }
  }
  return 0x16;
}

/* ref: ___getgmtimebuf */
undefined * F_00c64f6d(void)
{
  GEN_ENTER(0xc64f6du, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  int * piVar2;
  undefined * pvVar3;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == (undefined *)0x0) {
LAB_00c64f7b: ;
    piVar2 = F_00c51f85();
    *piVar2 = 0xc;
    return (undefined *)0x0;
  }
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 68))) == (undefined *)0x0) {
    pvVar3 = F_00c54c2e(0x24);
    (*(void * PTR32 *)(((char *)(p_Var1) + 68))) = pvVar3;
    if (pvVar3 == (undefined *)0x0) goto LAB_00c64f7b;
  }
  return (*(void * PTR32 *)(((char *)(p_Var1) + 68)));
}

/* ref: __gmtime32 */
undefined * F_00c64fa4(unsigned int gen_a0)
{
  GEN_ENTER(0xc64fa4u, gen_a0, 0u, 0u, 0u);
  int * _Time = (int *)(uintptr_t)gen_a0;
  undefined * _Tm;
  int eVar1;
  undefined * ptVar2;
  
  _Tm = F_00c64f6d();
  ptVar2 = (undefined *)0x0;
  if (_Tm != (undefined *)0x0) {
    eVar1 = F_00c64e2d(_Tm,_Time);
    ptVar2 = ((undefined *)GEN_TOP((~-(uint)(eVar1 != 0) & (uint)_Tm)));
  }
  return ptVar2;
}

/* ref: FID_conflict___get_dstbias_00c64fcb */
int F_00c64fcb(unsigned int gen_a0)
{
  GEN_ENTER(0xc64fcbu, gen_a0, 0u, 0u, 0u);
  long * _Timezone = (long *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_Timezone = REFG(int, 0x134bb6c);
  return 0;
}

/* ref: FID_conflict___get_dstbias_00c64ff8 */
int F_00c64ff8(unsigned int gen_a0)
{
  GEN_ENTER(0xc64ff8u, gen_a0, 0u, 0u, 0u);
  long * _Timezone = (long *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_Timezone = REFG(int, 0x134bb70);
  return 0;
}

/* ref: FID_conflict___get_dstbias_00c65025 */
int F_00c65025(unsigned int gen_a0)
{
  GEN_ENTER(0xc65025u, gen_a0, 0u, 0u, 0u);
  long * _Timezone = (long *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_Timezone = REFG(int, 0x134bb68);
  return 0;
}

/* ref: __get_tzname */
int F_00c65052(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc65052u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int * piVar1;
  gen_size32 sVar2;
  int eVar3;
  
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 != 0) goto LAB_00c6509a;
  }
  else if (param_3 == 0) {
LAB_00c6509a: ;
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == (uint *)0x0) || ((param_4 != 0 && (param_4 != 1)))) {
    piVar1 = F_00c51f85();
    eVar3 = 0x16;
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    sVar2 = F_00c552f0((&REFG(undefined * PTR32, 0x134bbf8))[param_4]);
    *param_1 = sVar2 + 1;
    if (param_2 == (undefined1 *)0x0) {
      eVar3 = 0;
    }
    else if (param_3 < sVar2 + 1) {
      eVar3 = 0x22;
    }
    else {
      eVar3 = F_00c49908(param_2,param_3,(&REFG(undefined * PTR32, 0x134bbf8))[param_4]);
    }
  }
  return eVar3;
}

/* ref: FUN_00c650e4 */
uint F_00c650e4(void)
{
  GEN_ENTER(0xc650e4u, 0u, 0u, 0u, 0u);
  return 0x134bb6c;
}

/* ref: FUN_00c650ea */
uint F_00c650ea(void)
{
  GEN_ENTER(0xc650eau, 0u, 0u, 0u, 0u);
  return 0x134bb70;
}

/* ref: FUN_00c650f0 */
uint F_00c650f0(void)
{
  GEN_ENTER(0xc650f0u, 0u, 0u, 0u, 0u);
  return 0x134bb68;
}

/* ref: FUN_00c650f6 */
uint F_00c650f6(void)
{
  GEN_ENTER(0xc650f6u, 0u, 0u, 0u, 0u);
  return 0x134bbf8;
}

/* ref: __lseek_nolock */
long F_00c650fc(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc650fcu, gen_a0, gen_a1, gen_a2, 0u);
  int _FileHandle = (int)gen_a0;
  long _Offset = (long)gen_a1;
  int _Origin = (int)gen_a2;
  byte * pbVar1;
  HANDLE hFile;
  int * piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)F_00c6d7ae(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    DVar3 = 0xffffffff;
  }
  else {
    DVar3 = gen_imp_SetFilePointer(hFile,_Offset,(GEN_LPANY)0x0,_Origin);
    if (DVar3 == 0xffffffff) {
      uVar4 = gen_imp_GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40)));
      *pbVar1 = *pbVar1 & 0xfd;
    }
    else {
      F_00c51fab(uVar4);
      DVar3 = 0xffffffff;
    }
  }
  return DVar3;
}

/* ref: __lseek */
long F_00c65171(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc65171u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int _FileHandle_00;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6670);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc6517d;
  if ((*(int *)&gen_args[0]) == -2) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
  }
  else {
    if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
      iVar3 = (*(int *)&gen_args[0]) >> 5;
      iVar4 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) != 0) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(long *)(gen_frame + 0x0)) = -1;
        }
        else {
          (*(long *)(gen_frame + 0x0)) = F_00c650fc(_FileHandle_00,(*(long *)&gen_args[1]),(*(int *)&gen_args[2]));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c6523d(_FileHandle_00);
        return (*(long *)(gen_frame + 0x0));
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  return -1;
}

/* ref: FUN_00c6523a */
unsigned int F_00c6523a(unsigned int gen_a0)
{
  GEN_ENTER(0xc6523au, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c6523d */
unsigned int F_00c6523d(unsigned int gen_a0)
{
  GEN_ENTER(0xc6523du, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __wopenfile */
undefined * F_00c65245(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc65245u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t wVar5;
  int * piVar6;
  int iVar7;
  int eVar8;
  uint _OpenFlag;
  wchar_t * pwVar9;
  wchar_t * pwVar10;
  uint local_8;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  for (pwVar10 = (*(wchar_t * PTR32 *)&gen_args[1]); *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
  }
  wVar5 = *pwVar10;
  if (wVar5 == L'a') {
    _OpenFlag = 0x109;
LAB_00c652ad: ;
    local_8 = REFG(undefined4, 0x15d75b4) | 2;
  }
  else {
    if (wVar5 != L'r') {
      if (wVar5 != L'w') {
        piVar6 = F_00c51f85();
        *piVar6 = 0x16;
        F_00c4c305();
        return (undefined *)0x0;
      }
      _OpenFlag = 0x301;
      goto LAB_00c652ad;
    }
    _OpenFlag = 0;
    local_8 = REFG(undefined4, 0x15d75b4) | 1;
  }
  pwVar10 = pwVar10 + 1;
  wVar5 = *pwVar10;
  bVar1 = true;
  if (wVar5 != L'\0') {
    do {
      if (!bVar1) break;
      if ((ushort)wVar5 < 0x54) {
        if (wVar5 == L'S') {
          if (bVar2) goto LAB_00c653db;
          bVar2 = true;
          _OpenFlag = _OpenFlag | 0x20;
        }
        else if (wVar5 != L' ') {
          if (wVar5 == L'+') {
            if ((_OpenFlag & 2) != 0) goto LAB_00c653db;
            _OpenFlag = _OpenFlag & 0xfffffffe | 2;
            local_8 = local_8 & 0xfffffffc | 0x80;
          }
          else if (wVar5 == L',') {
            bVar4 = true;
LAB_00c653db: ;
            bVar1 = false;
          }
          else if (wVar5 == L'D') {
            if ((_OpenFlag & 0x40) != 0) goto LAB_00c653db;
            _OpenFlag = _OpenFlag | 0x40;
          }
          else if (wVar5 == L'N') {
            _OpenFlag = _OpenFlag | 0x80;
          }
          else {
            if (wVar5 != L'R') goto LAB_00c654a7;
            if (bVar2) goto LAB_00c653db;
            bVar2 = true;
            _OpenFlag = _OpenFlag | 0x10;
          }
        }
      }
      else if (wVar5 == L'T') {
        if ((_OpenFlag & 0x1000) != 0) goto LAB_00c653db;
        _OpenFlag = _OpenFlag | 0x1000;
      }
      else if (wVar5 == L'b') {
        if ((_OpenFlag & 0xc000) != 0) goto LAB_00c653db;
        _OpenFlag = _OpenFlag | 0x8000;
      }
      else if (wVar5 == L'c') {
        if (bVar3) goto LAB_00c653db;
        local_8 = local_8 | 0x4000;
        bVar3 = true;
      }
      else if (wVar5 == L'n') {
        if (bVar3) goto LAB_00c653db;
        local_8 = local_8 & 0xffffbfff;
        bVar3 = true;
      }
      else {
        if (wVar5 != L't') goto LAB_00c654a7;
        if ((_OpenFlag & 0xc000) != 0) goto LAB_00c653db;
        _OpenFlag = _OpenFlag | 0x4000;
      }
      pwVar10 = pwVar10 + 1;
      wVar5 = *pwVar10;
    } while (wVar5 != L'\0');
    if (bVar4) {
      for (; *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
      }
      iVar7 = F_00c7d672(((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b614)))),pwVar10,3);
      if (iVar7 != 0) goto LAB_00c654a7;
      for (pwVar10 = pwVar10 + 3; *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
      }
      if (*pwVar10 != L'=') goto LAB_00c654a7;
      do {
        pwVar9 = pwVar10;
        pwVar10 = pwVar9 + 1;
      } while (*pwVar10 == L' ');
      iVar7 = F_00c7d5d4(pwVar10,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b61c)))),5);
      if (iVar7 == 0) {
        pwVar10 = pwVar9 + 6;
        _OpenFlag = _OpenFlag | 0x40000;
      }
      else {
        iVar7 = F_00c7d5d4(pwVar10,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b628)))),8);
        if (iVar7 == 0) {
          pwVar10 = pwVar9 + 9;
          _OpenFlag = _OpenFlag | 0x20000;
        }
        else {
          iVar7 = F_00c7d5d4(pwVar10,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[3])REFP(0x111b63c)))),7);
          if (iVar7 != 0) goto LAB_00c654a7;
          pwVar10 = pwVar9 + 8;
          _OpenFlag = _OpenFlag | 0x10000;
        }
      }
    }
  }
  for (; *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
  }
  if (*pwVar10 == L'\0') {
    eVar8 = F_00c4ece4((int *)&(*(wchar_t * PTR32 *)&gen_args[1]),(*(wchar_t * PTR32 *)&gen_args[0]),_OpenFlag,(*(int *)&gen_args[2]),0x180);
    if (eVar8 != 0) {
      return (undefined *)0x0;
    }
    *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 12))))) = local_8;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 4))))) = 0;
    (*(char * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[3])))) = (char *)0x0;
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 8))))) = (char *)0x0;
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 28))))) = (char *)0x0;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 16))))) = (int)(*(wchar_t * PTR32 *)&gen_args[1]);
    return (*(undefined * PTR32 *)&gen_args[3]);
  }
LAB_00c654a7: ;
  piVar6 = F_00c51f85();
  *piVar6 = 0x16;
  F_00c4c305();
  return (undefined *)0x0;
}

/* ref: __allrem */
ulonglong F_00c65500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc65500u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar4 = param_1;
  uVar3 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_00c655ad;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar7 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT14((uVar8 & 1) != 0,uVar4) >> 1);
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_00c655ad;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_00c655ad: ;
  return CONCAT44(iVar6,iVar5);
}

/* ref: FUN_00c655b2 */
unsigned int F_00c655b2(unsigned int gen_a0)
{
  GEN_ENTER(0xc655b2u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  *(undefined4 *)&REFG(undefined, 0x15e4188) = 0;
  return 0;
}

/* ref: ___ascii_strnicmp */
int F_00c655c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc655c0u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_00c65611;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00c65611: ;
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}

/* ref: ___check_float_string_00c65621 */
uint F_00c65621(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc65621u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if ((undefined *)*in_edi == param_4) {
      pvVar1 = F_00c54c73(_Count,2);
      *in_edi = pvVar1;
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi);
    }
    else {
      pvVar1 = F_00c54d0d((undefined *)*in_edi,_Count,2);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: FUN_00c65678 */
uint F_00c65678(unsigned int gen_a0)
{
  GEN_ENTER(0xc65678u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*param_1 + 0xbc);
}

/* ref: __hextodec_00c6568a */
uint F_00c6568a(unsigned int gen_a0)
{
  GEN_ENTER(0xc6568au, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c48637((uint)(byte)param_1);
  uVar2 = (uint)(char)(byte)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}

/* ref: __inc_00c656aa */
uint F_00c656aa(unsigned int gen_a0)
{
  GEN_ENTER(0xc656aau, gen_a0, 0u, 0u, 0u);
  undefined * in_edx = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &(*(int *)(((char *)(in_edx) + 4)));
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(*(char * PTR32 *)((char *)(in_edx)));
    (*(char * PTR32 *)((char *)(in_edx))) = (*(char * PTR32 *)((char *)(in_edx))) + 1;
    return (uint)bVar2;
  }
  uVar3 = F_00c5cf59(in_edx);
  return uVar3;
}

/* ref: __un_inc_00c656c0 */
unsigned int F_00c656c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc656c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != -1) {
    F_00c50c0d(param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: __whiteout_00c656d3 */
uint F_00c656d3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc656d3u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  do {
    *in_esi = *in_esi + 1;
    uVar1 = F_00c656aa(param_2);
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    iVar2 = F_00c4873c(uVar1 & 0xff);
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: __input_l */
int F_00c656fd(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc656fdu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  uchar * param_2 = (uchar *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code * pcVar8;
  int iVar9;
  undefined * puVar10;
  byte bVar11;
  uint uVar12;
  wchar_t * pwVar13;
  byte * pbVar14;
  uint uVar15;
  wchar_t * pwVar16;
  byte * pbVar17;
  undefined1 * puVar18;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = _File;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x88));
  (*(undefined4 *)(gen_frame + 0x30)) = 0x15e;
  (*(int *)(gen_frame + 0x3c)) = 0;
  ((wchar_t *)(gen_frame + 0x20))[0] = L'\0';
  ((wchar_t *)(gen_frame + 0x20))[1] = L'\0';
  (*(uint *)(gen_frame + 0x78)) = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (undefined *)0x0)) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar6 = -1;
    goto LAB_00c666f3;
  }
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar5 = F_00c5d07b(_File);
    if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
      puVar10 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar10 = ((undefined *)GEN_TOP(((uVar5 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar5 >> 5])));
    }
    if ((puVar10[0x24] & 0x7f) == 0) {
      if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
        puVar10 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar10 = ((undefined *)GEN_TOP(((uVar5 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar5 >> 5])));
      }
      if ((puVar10[0x24] & 0x80) == 0) goto LAB_00c657ec;
    }
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar6 = -1;
  }
  else {
LAB_00c657ec: ;
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x10)),_Locale);
    bVar3 = *param_2;
    (*(char *)(gen_frame + 0x67)) = '\0';
    (*(int *)(gen_frame + 0x80)) = 0;
    (*(int *)(gen_frame + 0x40)) = 0;
    if (bVar3 != 0) {
LAB_00c65819: ;
      iVar6 = F_00c4873c((uint)bVar3);
      if (iVar6 != 0) {
        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
        uVar5 = F_00c656d3(&(*(int *)(gen_frame + 0x80)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
        if (uVar5 != 0xffffffff) {
          F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x68)));
        }
        do {
          param_2 = param_2 + 1;
          iVar6 = F_00c4873c((uint)*param_2);
        } while (iVar6 != 0);
        goto LAB_00c66651;
      }
      if (*param_2 == 0x25) {
        if (param_2[1] == 0x25) {
          if (param_2[1] == 0x25) {
            param_2 = param_2 + 1;
          }
          goto LAB_00c665db;
        }
        (*(int *)(gen_frame + 0x28)) = 0;
        (*(byte *)(gen_frame + 0x3b)) = 0;
        (*(int *)(gen_frame + 0x60)) = 0;
        (*(int *)(gen_frame + 0x54)) = 0;
        (*(int *)(gen_frame + 0x70)) = 0;
        (*(byte *)(gen_frame + 0x64)) = 0;
        (*(char *)(gen_frame + 0x65)) = '\0';
        (*(char *)(gen_frame + 0x6f)) = '\0';
        (*(char *)(gen_frame + 0x7f)) = '\0';
        (*(char *)(gen_frame + 0x66)) = '\0';
        (*(char *)(gen_frame + 0x77)) = '\0';
        (*(byte *)(gen_frame + 0x87)) = 1;
        (*(int *)(gen_frame + 0x34)) = 0;
        do {
          pbVar14 = param_2 + 1;
          uVar5 = (uint)*pbVar14;
          iVar6 = F_00c48637(uVar5);
          pbVar17 = pbVar14;
          if (iVar6 == 0) {
            if (uVar5 < 0x4f) {
              if (uVar5 != 0x4e) {
                if (uVar5 == 0x2a) {
                  (*(char *)(gen_frame + 0x6f)) = (*(char *)(gen_frame + 0x6f)) + '\x01';
                }
                else if (uVar5 != 0x46) {
                  if (uVar5 == 0x49) {
                    bVar3 = param_2[2];
                    if ((bVar3 == 0x36) && (pbVar17 = param_2 + 3, *pbVar17 == 0x34))
                    goto LAB_00c6593e;
                    if ((((((bVar3 != 0x33) || (pbVar17 = param_2 + 3, *pbVar17 != 0x32)) &&
                          (pbVar17 = pbVar14, bVar3 != 100)) && ((bVar3 != 0x69 && (bVar3 != 0x6f)))
                         ) && (bVar3 != 0x78)) && (bVar3 != 0x58)) goto LAB_00c65997;
                  }
                  else if (uVar5 == 0x4c) {
                    (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) + 1;
                  }
                  else {
LAB_00c65997: ;
                    (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
                    pbVar17 = pbVar14;
                  }
                }
              }
            }
            else if (uVar5 == 0x68) {
              (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) - 1;
              (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + -1;
            }
            else {
              if (uVar5 == 0x6c) {
                pbVar17 = param_2 + 2;
                if (*pbVar17 == 0x6c) {
LAB_00c6593e: ;
                  (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 0)) = 0;
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) = 0;
                  (*(longlong *)(gen_frame + 0x44)) = 0;
                  goto LAB_00c659c1;
                }
                (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) + 1;
              }
              else if (uVar5 != 0x77) goto LAB_00c65997;
              (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
              pbVar17 = pbVar14;
            }
          }
          else {
            (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
            (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) * 10 + -0x30 + uVar5;
          }
LAB_00c659c1: ;
          param_2 = pbVar17;
        } while ((*(char *)(gen_frame + 0x7f)) == '\0');
        (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar17;
        if ((*(char *)(gen_frame + 0x6f)) == '\0') {
          (*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x24));
          (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0x24));
          (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 4;
        }
        else {
          (*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = (wchar_t *)0x0;
        }
        (*(char *)(gen_frame + 0x7f)) = '\0';
        if (((*(char *)(gen_frame + 0x77)) == '\0') && ((*pbVar17 == 0x53 || ((*(char *)(gen_frame + 0x77)) = -1, *pbVar17 == 0x43)))) {
          (*(char *)(gen_frame + 0x77)) = '\x01';
        }
        uVar12 = *pbVar17 | 0x20;
        (*(uint *)(gen_frame + 0x58)) = uVar12;
        if (uVar12 != 0x6e) {
          if ((uVar12 == 99) || (uVar12 == 0x7b)) {
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
          }
          else {
            (*(uint *)(gen_frame + 0x78)) = F_00c656d3(&(*(int *)(gen_frame + 0x80)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
          }
          if ((*(uint *)(gen_frame + 0x78)) == 0xffffffff) goto LAB_00c66691;
        }
        uVar5 = (*(uint *)(gen_frame + 0x78));
        if (((*(int *)(gen_frame + 0x54)) != 0) && ((*(int *)(gen_frame + 0x70)) == 0)) goto LAB_00c6667c;
        if (uVar12 < 0x70) {
          if (uVar12 == 0x6f) {
LAB_00c66306: ;
            if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
              (*(char *)(gen_frame + 0x65)) = '\x01';
            }
            else if ((*(uint *)(gen_frame + 0x78)) != 0x2b) goto LAB_00c6634d;
            (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
            if (((*(int *)(gen_frame + 0x70)) == 0) && ((*(int *)(gen_frame + 0x54)) != 0)) {
              (*(char *)(gen_frame + 0x7f)) = '\x01';
            }
            else {
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
LAB_00c66347: ;
            }
            goto LAB_00c6634d;
          }
          if (uVar12 == 99) {
            if ((*(int *)(gen_frame + 0x54)) == 0) {
              (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + 1;
              (*(int *)(gen_frame + 0x54)) = 1;
            }
LAB_00c65ed9: ;
            if ('\0' < (*(char *)(gen_frame + 0x77))) {
              (*(char *)(gen_frame + 0x66)) = '\x01';
            }
LAB_00c65ee9: ;
            pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x4c));
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
            pwVar16 = pwVar13;
            if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
              F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
            do {
              iVar6 = (*(int *)(gen_frame + 0x70));
              if (((*(int *)(gen_frame + 0x54)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar6 == 0)) goto LAB_00c662b4;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
              if ((*(uint *)(gen_frame + 0x78)) == 0xffffffff) goto LAB_00c6629b;
              bVar3 = (byte)(*(uint *)(gen_frame + 0x78));
              if (uVar12 != 99) {
                if (uVar12 == 0x73) {
                  if ((8 < (int)(*(uint *)(gen_frame + 0x78))) && ((int)(*(uint *)(gen_frame + 0x78)) < 0xe)) goto LAB_00c6629b;
                  if ((*(uint *)(gen_frame + 0x78)) != 0x20) goto LAB_00c65f9b;
                }
                if ((uVar12 != 0x7b) ||
                   (uVar12 = (*(uint *)(gen_frame + 0x58)),
                   ((int)(char)(((byte *)(gen_frame + 0x1e8))[(int)(*(uint *)(gen_frame + 0x78)) >> 3] ^ (*(byte *)(gen_frame + 0x64))) & 1 << (bVar3 & 7)) == 0)
                   ) goto LAB_00c6629b;
              }
LAB_00c65f9b: ;
              if ((*(char *)(gen_frame + 0x6f)) == '\0') {
                if ((*(char *)(gen_frame + 0x66)) == '\0') {
                  *(byte *)pwVar13 = bVar3;
                  pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                }
                else {
                  (*(byte *)(gen_frame + 0x2c)) = bVar3;
                  iVar6 = F_00c6e020((*(uint *)(gen_frame + 0x78)) & 0xff);
                  if (iVar6 != 0) {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
                    (*(undefined1 *)(gen_frame + 0x2d)) = (char)uVar5;
                  }
                  ((wchar_t *)(gen_frame + 0x20))[0] = L'?';
                  ((wchar_t *)(gen_frame + 0x20))[1] = L'\0';
                  F_00c7b204(((wchar_t *)(gen_frame + 0x20)),(char *)&(*(byte *)(gen_frame + 0x2c)),*((gen_size32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0)) + 0xac))),
                             (undefined *)((byte *)(gen_frame + 0x10)));
                  *pwVar13 = ((wchar_t *)(gen_frame + 0x20))[0];
                  pwVar13 = pwVar13 + 1;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = pwVar13;
              }
              else {
                pwVar16 = (wchar_t *)((int)pwVar16 + 1);
              }
            } while( true );
          }
          if (uVar12 == 100) goto LAB_00c66306;
          if (uVar12 < 0x65) {
LAB_00c6604f: ;
            if (*(*(byte * PTR32 *)(gen_frame + 0x50)) != (*(uint *)(gen_frame + 0x78))) goto LAB_00c6667c;
            (*(char *)(gen_frame + 0x67)) = (*(char *)(gen_frame + 0x67)) + -1;
            if ((*(char *)(gen_frame + 0x6f)) == '\0') {
              (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0xc));
            }
            goto LAB_00c665bc;
          }
          if (0x67 < uVar12) {
            if (uVar12 == 0x69) {
              (*(uint *)(gen_frame + 0x58)) = 100;
              goto LAB_00c65af2;
            }
            if (uVar12 != 0x6e) goto LAB_00c6604f;
            iVar6 = (*(int *)(gen_frame + 0x80));
            if ((*(char *)(gen_frame + 0x6f)) != '\0') goto LAB_00c665bc;
            goto LAB_00c66590;
          }
          iVar6 = 0;
          if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
            *(*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = 0x2d;
            iVar6 = 1;
LAB_00c65b2d: ;
            (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
          }
          else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c65b2d;
          if ((*(int *)(gen_frame + 0x54)) == 0) {
            (*(int *)(gen_frame + 0x70)) = -1;
          }
          while( true ) {
            iVar7 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
            iVar9 = (*(int *)(gen_frame + 0x70));
            if ((iVar7 == 0) || ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar9 == 0)) break;
            (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
            (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar6] = (byte)(*(uint *)(gen_frame + 0x78));
            iVar6 = iVar6 + 1;
            uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar6,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)))
            ;
            if (uVar5 == 0) goto LAB_00c66691;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
          }
          iVar9 = (*(int *)(gen_frame + 0x70));
          (*(byte *)(gen_frame + 0x64)) = *((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0)) + 0xbc)))));
          if ((*((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0)) + 0xbc))))) == (byte)(*(uint *)(gen_frame + 0x78))) &&
             ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar9 != 0)) {
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar6] = (*(byte *)(gen_frame + 0x64));
            iVar6 = iVar6 + 1;
            uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar6,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)))
            ;
            if (uVar5 == 0) goto LAB_00c66691;
            while ((iVar7 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff), iVar9 = (*(int *)(gen_frame + 0x70)), iVar7 != 0 &&
                   ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar9 != 0))) {
              (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
              (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar6] = (byte)(*(uint *)(gen_frame + 0x78));
              iVar6 = iVar6 + 1;
              uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar6,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
              if (uVar5 == 0) goto LAB_00c66691;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
          }
          iVar9 = (*(int *)(gen_frame + 0x70));
          iVar7 = iVar6;
          if (((*(int *)(gen_frame + 0x60)) != 0) &&
             ((((*(uint *)(gen_frame + 0x78)) == 0x65 || ((*(uint *)(gen_frame + 0x78)) == 0x45)) &&
              ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar9 != 0)))) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar6] = 0x65;
            iVar7 = iVar6 + 1;
            uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar7,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)))
            ;
            if (uVar5 == 0) goto LAB_00c66691;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
              (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar7] = 0x2d;
              iVar7 = iVar6 + 2;
              uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar7,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
              if (uVar5 == 0) goto LAB_00c66691;
LAB_00c65d9e: ;
              iVar6 = (*(int *)(gen_frame + 0x70));
              (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
              if (iVar6 == 0) {
                (*(int *)(gen_frame + 0x70)) = 0;
              }
              else {
                (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
              }
            }
            else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c65d9e;
            while ((iVar9 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff), iVar6 = (*(int *)(gen_frame + 0x70)), iVar9 != 0 &&
                   ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar6 != 0))) {
              (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
              (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar7] = (byte)(*(uint *)(gen_frame + 0x78));
              iVar7 = iVar7 + 1;
              uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar7,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
              if (uVar5 == 0) goto LAB_00c66691;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
          }
          (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
          if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
            F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
          }
          if ((*(int *)(gen_frame + 0x60)) != 0) {
            if ((*(char *)(gen_frame + 0x6f)) == '\0') {
              (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
              pbVar17 = ((byte *)(gen_frame + 0x10));
              (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar7] = 0;
              iVar6 = (char)(*(byte *)(gen_frame + 0x87)) + -1;
              pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x4c));
              puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x5c));
              pcVar8 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
              (*pcVar8)(iVar6,pwVar13,puVar18,pbVar17);
            }
            goto LAB_00c665bc;
          }
          goto LAB_00c66691;
        }
        if (uVar12 == 0x70) {
          (*(byte *)(gen_frame + 0x87)) = 1;
          goto LAB_00c66306;
        }
        if (uVar12 == 0x73) goto LAB_00c65ed9;
        if (uVar12 == 0x75) goto LAB_00c66306;
        if (uVar12 != 0x78) {
          if (uVar12 == 0x7b) {
            if ('\0' < (*(char *)(gen_frame + 0x77))) {
              (*(char *)(gen_frame + 0x66)) = '\x01';
            }
            pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x50)) + 1;
            if ((*(byte * PTR32 *)(gen_frame + 0x50))[1] == 0x5e) {
              pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x50)) + 2;
              (*(byte *)(gen_frame + 0x64)) = 0xff;
            }
            F_00c48350(((byte *)(gen_frame + 0x1e8)),0,0x20);
            bVar3 = (*(byte *)(gen_frame + 0x3b));
            if (*pbVar17 == 0x5d) {
              ((byte *)(gen_frame + 0x1e8))[0xb] = 0x20;
              pbVar17 = pbVar17 + 1;
              bVar3 = 0x5d;
            }
            while (bVar1 = *pbVar17, bVar1 != 0x5d) {
              if (((bVar1 == 0x2d) && (bVar3 != 0)) && (bVar11 = pbVar17[1], bVar11 != 0x5d)) {
                if (bVar3 < bVar11) {
                  (*(byte *)(gen_frame + 0x87)) = bVar11;
                  bVar11 = bVar3;
                }
                else {
                  (*(byte *)(gen_frame + 0x87)) = bVar3;
                }
                if (bVar11 < (*(byte *)(gen_frame + 0x87))) {
                  uVar15 = (uint)bVar11;
                  uVar5 = (uint)(byte)((*(byte *)(gen_frame + 0x87)) - bVar11);
                  do {
                    ((byte *)(gen_frame + 0x1e8))[uVar15 >> 3] = ((byte *)(gen_frame + 0x1e8))[uVar15 >> 3] | '\x01' << ((byte)uVar15 & 7);
                    uVar15 = uVar15 + 1;
                    uVar5 = uVar5 - 1;
                    uVar12 = (*(uint *)(gen_frame + 0x58));
                  } while (uVar5 != 0);
                }
                ((byte *)(gen_frame + 0x1e8))[(*(byte *)(gen_frame + 0x87)) >> 3] = ((byte *)(gen_frame + 0x1e8))[(*(byte *)(gen_frame + 0x87)) >> 3] | '\x01' << ((*(byte *)(gen_frame + 0x87)) & 7);
                pbVar17 = pbVar17 + 2;
                bVar3 = 0;
              }
              else {
                ((byte *)(gen_frame + 0x1e8))[bVar1 >> 3] = ((byte *)(gen_frame + 0x1e8))[bVar1 >> 3] | '\x01' << (bVar1 & 7);
                uVar12 = (*(uint *)(gen_frame + 0x58));
                pbVar17 = pbVar17 + 1;
                bVar3 = bVar1;
              }
            }
            (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar17;
            goto LAB_00c65ee9;
          }
          goto LAB_00c6604f;
        }
LAB_00c65af2: ;
        if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
          (*(char *)(gen_frame + 0x65)) = '\x01';
LAB_00c6618c: ;
          (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
          if (((*(int *)(gen_frame + 0x70)) == 0) && ((*(int *)(gen_frame + 0x54)) != 0)) {
            (*(char *)(gen_frame + 0x7f)) = '\x01';
          }
          else {
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
          }
        }
        else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c6618c;
        if ((*(uint *)(gen_frame + 0x78)) == 0x30) {
          (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
          (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
          if (((char)(*(uint *)(gen_frame + 0x78)) == 'x') || ((char)(*(uint *)(gen_frame + 0x78)) == 'X')) {
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            if (((*(int *)(gen_frame + 0x54)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -2, (*(int *)(gen_frame + 0x70)) < 1)) {
              (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
            }
            (*(uint *)(gen_frame + 0x58)) = 0x78;
          }
          else {
            (*(int *)(gen_frame + 0x60)) = 1;
            if ((*(uint *)(gen_frame + 0x58)) == 0x78) {
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
              if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
              }
              (*(uint *)(gen_frame + 0x78)) = 0x30;
              goto LAB_00c66347;
            }
            if (((*(int *)(gen_frame + 0x54)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) == 0)) {
              (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
            }
            (*(uint *)(gen_frame + 0x58)) = 0x6f;
          }
        }
LAB_00c6634d: ;
        if ((*(int *)(gen_frame + 0x34)) == 0) {
          iVar6 = (*(int *)(gen_frame + 0x28));
          if ((*(char *)(gen_frame + 0x7f)) == '\0') {
            while ((uVar5 = (*(uint *)(gen_frame + 0x78)), (*(uint *)(gen_frame + 0x58)) != 0x78 && ((*(uint *)(gen_frame + 0x58)) != 0x70))) {
              iVar9 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
              if (iVar9 == 0) goto LAB_00c6653a;
              if ((*(uint *)(gen_frame + 0x58)) == 0x6f) {
                if (0x37 < (int)uVar5) goto LAB_00c6653a;
                iVar6 = iVar6 << 3;
              }
              else {
                iVar6 = iVar6 * 10;
              }
LAB_00c66501: ;
              (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
              iVar6 = iVar6 + -0x30 + uVar5;
              if (((*(int *)(gen_frame + 0x54)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) == 0))
              goto LAB_00c66553;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
            iVar9 = F_00c486bb((*(uint *)(gen_frame + 0x78)) & 0xff);
            if (iVar9 != 0) {
              iVar6 = iVar6 << 4;
              uVar5 = F_00c6568a(uVar5);
              (*(uint *)(gen_frame + 0x78)) = uVar5;
              goto LAB_00c66501;
            }
LAB_00c6653a: ;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
            if (uVar5 != 0xffffffff) {
              F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
          }
LAB_00c66553: ;
          if ((*(char *)(gen_frame + 0x65)) != '\0') {
            iVar6 = -iVar6;
          }
        }
        else {
          if ((*(char *)(gen_frame + 0x7f)) == '\0') {
            while ((uVar5 = (*(uint *)(gen_frame + 0x78)), (*(uint *)(gen_frame + 0x58)) != 0x78 && ((*(uint *)(gen_frame + 0x58)) != 0x70))) {
              iVar6 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
              if (iVar6 == 0) goto LAB_00c66446;
              if ((*(uint *)(gen_frame + 0x58)) == 0x6f) {
                if (0x37 < (int)uVar5) goto LAB_00c66446;
                lVar2 = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) << 3 | (uint)(*(longlong *)(gen_frame + 0x44)) >> 0x1d,(uint)(*(longlong *)(gen_frame + 0x44)) << 3
                                );
              }
              else {
                lVar2 = (*(longlong *)(gen_frame + 0x44)) * 10;
              }
LAB_00c663fd: ;
              (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
              (*(longlong *)(gen_frame + 0x44)) = lVar2 + (int)(uVar5 - 0x30);
              if (((*(int *)(gen_frame + 0x54)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) == 0))
              goto LAB_00c6645f;
              (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
              (*(uint *)(gen_frame + 0x78)) = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
            iVar6 = F_00c486bb((*(uint *)(gen_frame + 0x78)) & 0xff);
            if (iVar6 != 0) {
              lVar2 = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) << 4 | (uint)(*(longlong *)(gen_frame + 0x44)) >> 0x1c,(uint)(*(longlong *)(gen_frame + 0x44)) << 4);
              uVar5 = F_00c6568a(uVar5);
              (*(uint *)(gen_frame + 0x78)) = uVar5;
              goto LAB_00c663fd;
            }
LAB_00c66446: ;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
            if (uVar5 != 0xffffffff) {
              F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
          }
LAB_00c6645f: ;
          iVar6 = (*(int *)(gen_frame + 0x28));
          if ((*(char *)(gen_frame + 0x65)) != '\0') {
            iVar9 = -(uint)(*(longlong *)(gen_frame + 0x44));
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) = -((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)) + (uint)((uint)(*(longlong *)(gen_frame + 0x44)) != 0));
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 0)) = iVar9;
            (*(longlong *)(gen_frame + 0x44)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4)),iVar9);
          }
        }
        if ((*(uint *)(gen_frame + 0x58)) == 0x46) {
          (*(int *)(gen_frame + 0x60)) = 0;
        }
        if ((*(int *)(gen_frame + 0x60)) == 0) goto LAB_00c66691;
        if ((*(char *)(gen_frame + 0x6f)) == '\0') {
          (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
LAB_00c66590: ;
          if ((*(int *)(gen_frame + 0x34)) == 0) {
            if ((*(byte *)(gen_frame + 0x87)) == 0) {
              *(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = (wchar_t)iVar6;
            }
            else {
              *(int *)(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = iVar6;
            }
          }
          else {
            *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = (uint)(*(longlong *)(gen_frame + 0x44));
            *(int *)((*(wchar_t * PTR32 *)(gen_frame + 0x4c)) + 2) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x44)) + 4));
          }
        }
LAB_00c665bc: ;
        (*(char *)(gen_frame + 0x67)) = (*(char *)(gen_frame + 0x67)) + '\x01';
        pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x50)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar17;
LAB_00c66635: ;
        param_2 = pbVar17;
        if (((*(uint *)(gen_frame + 0x78)) == 0xffffffff) &&
           ((*pbVar17 != 0x25 || (param_2 = (*(byte * PTR32 *)(gen_frame + 0x50)), (*(byte * PTR32 *)(gen_frame + 0x50))[1] != 0x6e)))) goto LAB_00c66691;
LAB_00c66651: ;
        bVar3 = *param_2;
        if (bVar3 == 0) goto LAB_00c66691;
        goto LAB_00c65819;
      }
LAB_00c665db: ;
      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
      uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
      pbVar17 = param_2 + 1;
      (*(uint *)(gen_frame + 0x78)) = uVar5;
      (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar17;
      if (*param_2 == uVar5) {
        iVar6 = F_00c6e020(uVar5 & 0xff);
        if (iVar6 != 0) {
          (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
          uVar12 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x68)));
          bVar3 = *pbVar17;
          pbVar17 = param_2 + 2;
          (*(byte * PTR32 *)(gen_frame + 0x50)) = pbVar17;
          if (bVar3 != uVar12) {
            if (uVar12 != 0xffffffff) {
              F_00c50c0d(uVar12,(*(undefined * PTR32 *)(gen_frame + 0x68)));
            }
            goto LAB_00c6667c;
          }
          (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
        }
        goto LAB_00c66635;
      }
LAB_00c6667c: ;
      if (uVar5 != 0xffffffff) {
        F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
      }
LAB_00c66691: ;
      if ((*(int *)(gen_frame + 0x3c)) == 1) {
        F_00c4c68f((*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
      }
      if ((*(uint *)(gen_frame + 0x78)) == 0xffffffff) {
        iVar6 = (*(int *)(gen_frame + 0x40));
        if (((*(int *)(gen_frame + 0x40)) == 0) && ((*(char *)(gen_frame + 0x67)) == '\0')) {
          iVar6 = -1;
        }
        if (((byte *)(gen_frame + 0x10))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c666f3;
      }
    }
    iVar6 = (*(int *)(gen_frame + 0x40));
    if (((byte *)(gen_frame + 0x10))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c666f3: ;
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return iVar6;
LAB_00c6629b: ;
  (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
  if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
    F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x68)));
  }
LAB_00c662b4: ;
  if (pwVar16 == pwVar13) goto LAB_00c66691;
  if (((*(char *)(gen_frame + 0x6f)) == '\0') && ((*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1, uVar12 != 99)) {
    if ((*(char *)(gen_frame + 0x66)) == '\0') {
      *(byte *)(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = 0;
    }
    else {
      *(*(wchar_t * PTR32 *)(gen_frame + 0x4c)) = L'\0';
    }
  }
  goto LAB_00c665bc;
}

/* ref: ___check_float_string_00c66701 */
uint F_00c66701(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc66701u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if ((undefined *)*in_edi == param_4) {
      pvVar1 = F_00c54c73(_Count,2);
      *in_edi = pvVar1;
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi);
    }
    else {
      pvVar1 = F_00c54d0d((undefined *)*in_edi,_Count,2);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: __hextodec_00c66758 */
uint F_00c66758(unsigned int gen_a0)
{
  GEN_ENTER(0xc66758u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c48637((uint)(byte)param_1);
  uVar2 = (uint)(char)(byte)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}

/* ref: __inc_00c66778 */
uint F_00c66778(unsigned int gen_a0)
{
  GEN_ENTER(0xc66778u, gen_a0, 0u, 0u, 0u);
  undefined * in_edx = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &(*(int *)(((char *)(in_edx) + 4)));
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(*(char * PTR32 *)((char *)(in_edx)));
    (*(char * PTR32 *)((char *)(in_edx))) = (*(char * PTR32 *)((char *)(in_edx))) + 1;
    return (uint)bVar2;
  }
  uVar3 = F_00c5cf59(in_edx);
  return uVar3;
}

/* ref: __un_inc_00c6678e */
unsigned int F_00c6678e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6678eu, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != -1) {
    F_00c50c0d(param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: __whiteout_00c667a1 */
uint F_00c667a1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc667a1u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  do {
    *in_esi = *in_esi + 1;
    uVar1 = F_00c66778(param_2);
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    iVar2 = F_00c4873c(uVar1 & 0xff);
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: __input_s_l */
int F_00c667cb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc667cbu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  uchar * param_2 = (uchar *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  byte bVar1;
  undefined * pcVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code * pcVar9;
  undefined * puVar10;
  byte bVar11;
  wchar_t * pwVar12;
  byte * pbVar13;
  byte * pbVar14;
  wchar_t * pwVar15;
  byte * pbVar16;
  bool bVar17;
  undefined1 * puVar18;
  uint uVar19;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = _File;
  (*(byte * PTR32 *)(gen_frame + 0x5c)) = param_2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = ((undefined1 *)(gen_frame + 0x88));
  (*(undefined4 *)(gen_frame + 0x34)) = 0x15e;
  (*(int *)(gen_frame + 0x3c)) = 0;
  ((wchar_t *)(gen_frame + 0x1c))[0] = L'\0';
  ((wchar_t *)(gen_frame + 0x1c))[1] = L'\0';
  (*(uint *)(gen_frame + 0x78)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (undefined *)0x0)) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar6 = -1;
    goto LAB_00c678e0;
  }
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar5 = F_00c5d07b(_File);
    if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
      puVar10 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar10 = ((undefined *)GEN_TOP(((uVar5 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar5 >> 5])));
    }
    if ((puVar10[0x24] & 0x7f) == 0) {
      if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
        puVar10 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar10 = ((undefined *)GEN_TOP(((uVar5 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar5 >> 5])));
      }
      if ((puVar10[0x24] & 0x80) == 0) goto LAB_00c668c6;
    }
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar6 = -1;
  }
  else {
LAB_00c668c6: ;
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),_Locale);
    bVar3 = *param_2;
    (*(char *)(gen_frame + 0x6a)) = '\0';
    (*(int *)(gen_frame + 0x80)) = 0;
    (*(int *)(gen_frame + 0x44)) = 0;
    if (bVar3 != 0) {
      do {
        iVar6 = F_00c4873c((uint)bVar3);
        if (iVar6 == 0) {
          pbVar16 = (*(byte * PTR32 *)(gen_frame + 0x5c));
          if (*(*(byte * PTR32 *)(gen_frame + 0x5c)) == 0x25) {
            if ((*(byte * PTR32 *)(gen_frame + 0x5c))[1] == 0x25) {
              if ((*(byte * PTR32 *)(gen_frame + 0x5c))[1] == 0x25) {
                pbVar16 = (*(byte * PTR32 *)(gen_frame + 0x5c)) + 1;
              }
              goto LAB_00c67734;
            }
            (*(int *)(gen_frame + 0x48)) = 0;
            (*(byte *)(gen_frame + 0x3b)) = 0;
            (*(int *)(gen_frame + 0x60)) = 0;
            (*(int *)(gen_frame + 0x4c)) = 0;
            (*(int *)(gen_frame + 0x70)) = 0;
            (*(int *)(gen_frame + 0x40)) = 0;
            (*(byte *)(gen_frame + 0x69)) = 0;
            (*(char *)(gen_frame + 0x68)) = '\0';
            (*(char *)(gen_frame + 0x76)) = '\0';
            (*(char *)(gen_frame + 0x7f)) = '\0';
            (*(char *)(gen_frame + 0x6b)) = '\0';
            (*(char *)(gen_frame + 0x77)) = '\0';
            (*(byte *)(gen_frame + 0x87)) = 1;
            (*(int *)(gen_frame + 0x30)) = 0;
            pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x5c));
            do {
              pbVar14 = pbVar13 + 1;
              uVar5 = (uint)*pbVar14;
              iVar6 = F_00c48637(uVar5);
              pbVar16 = pbVar14;
              if (iVar6 == 0) {
                if (uVar5 < 0x4f) {
                  if (uVar5 != 0x4e) {
                    if (uVar5 == 0x2a) {
                      (*(char *)(gen_frame + 0x76)) = (*(char *)(gen_frame + 0x76)) + '\x01';
                    }
                    else if (uVar5 != 0x46) {
                      if (uVar5 == 0x49) {
                        bVar3 = pbVar13[2];
                        if ((bVar3 == 0x36) && (pbVar16 = pbVar13 + 3, *pbVar16 == 0x34))
                        goto LAB_00c66a33;
                        if ((((((bVar3 != 0x33) || (pbVar16 = pbVar13 + 3, *pbVar16 != 0x32)) &&
                              (pbVar16 = pbVar14, bVar3 != 100)) &&
                             ((bVar3 != 0x69 && (bVar3 != 0x6f)))) && (bVar3 != 0x78)) &&
                           (bVar3 != 0x58)) goto LAB_00c66a8c;
                      }
                      else if (uVar5 == 0x4c) {
                        (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) + 1;
                      }
                      else {
LAB_00c66a8c: ;
                        (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
                        pbVar16 = pbVar14;
                      }
                    }
                  }
                }
                else if (uVar5 == 0x68) {
                  (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) - 1;
                  (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + -1;
                }
                else {
                  if (uVar5 == 0x6c) {
                    pbVar16 = pbVar13 + 2;
                    if (*pbVar16 == 0x6c) {
LAB_00c66a33: ;
                      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = 0;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = 0;
                      (*(longlong *)(gen_frame + 0x54)) = 0;
                      goto LAB_00c66ab6;
                    }
                    (*(byte *)(gen_frame + 0x87)) = (*(byte *)(gen_frame + 0x87)) + 1;
                  }
                  else if (uVar5 != 0x77) goto LAB_00c66a8c;
                  (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
                  pbVar16 = pbVar14;
                }
              }
              else {
                (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 1;
                (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) * 10 + -0x30 + uVar5;
              }
LAB_00c66ab6: ;
              pbVar13 = pbVar16;
            } while ((*(char *)(gen_frame + 0x7f)) == '\0');
            (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar16;
            if ((*(char *)(gen_frame + 0x76)) == '\0') {
              (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x28));
              (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x28));
              (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 4;
            }
            else {
              (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = (wchar_t *)0x0;
            }
            (*(char *)(gen_frame + 0x7f)) = '\0';
            if (((*(char *)(gen_frame + 0x77)) == '\0') && ((*pbVar16 == 0x53 || ((*(char *)(gen_frame + 0x77)) = -1, *pbVar16 == 0x43)))) {
              (*(char *)(gen_frame + 0x77)) = '\x01';
            }
            (*(uint *)(gen_frame + 0x24)) = *pbVar16 | 0x20;
            if ((*(uint *)(gen_frame + 0x24)) != 0x6e) {
              if (((*(uint *)(gen_frame + 0x24)) == 99) || ((*(uint *)(gen_frame + 0x24)) == 0x7b)) {
                (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
              }
              else {
                (*(uint *)(gen_frame + 0x78)) = F_00c667a1(&(*(int *)(gen_frame + 0x80)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
              }
              if ((*(uint *)(gen_frame + 0x78)) == 0xffffffff) break;
            }
            uVar19 = (*(uint *)(gen_frame + 0x24));
            pcVar2 = (*(undefined * PTR32 *)(gen_frame + 0x20));
            if (((*(int *)(gen_frame + 0x4c)) == 0) || (uVar5 = (*(uint *)(gen_frame + 0x78)), (*(int *)(gen_frame + 0x70)) != 0)) {
              if (((*(char *)(gen_frame + 0x76)) == '\0') &&
                 ((((*(uint *)(gen_frame + 0x24)) == 99 || ((*(uint *)(gen_frame + 0x24)) == 0x73)) || ((*(uint *)(gen_frame + 0x24)) == 0x7b)))) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x20));
                (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
                (*(undefined * PTR32 *)(gen_frame + 0x28)) = pcVar2 + 8;
                (*(int *)(gen_frame + 0x40)) = *(int *)(pcVar2 + 4);
                if ((*(int *)(gen_frame + 0x40)) == 0) {
                  if ((*(char *)(gen_frame + 0x77)) < '\x01') {
                    *(byte *)(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = 0;
                  }
                  else {
                    *(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = L'\0';
                  }
                  piVar4 = F_00c51f85();
                  *piVar4 = 0xc;
                  break;
                }
              }
              if ((int)(*(uint *)(gen_frame + 0x24)) < 0x70) {
                if ((*(uint *)(gen_frame + 0x24)) == 0x6f) {
LAB_00c67441: ;
                  if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
                    (*(char *)(gen_frame + 0x68)) = '\x01';
                  }
                  else if ((*(uint *)(gen_frame + 0x78)) != 0x2b) goto LAB_00c67488;
                  (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
                  if (((*(int *)(gen_frame + 0x70)) == 0) && ((*(int *)(gen_frame + 0x4c)) != 0)) {
                    (*(char *)(gen_frame + 0x7f)) = '\x01';
                  }
                  else {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
LAB_00c67482: ;
                  }
                  goto LAB_00c67488;
                }
                if ((*(uint *)(gen_frame + 0x24)) == 99) {
                  if ((*(int *)(gen_frame + 0x4c)) == 0) {
                    (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + 1;
                    (*(int *)(gen_frame + 0x4c)) = 1;
                  }
LAB_00c67019: ;
                  if ('\0' < (*(char *)(gen_frame + 0x77))) {
                    (*(char *)(gen_frame + 0x6b)) = '\x01';
                  }
LAB_00c67029: ;
                  pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x50));
                  uVar5 = (*(uint *)(gen_frame + 0x24));
                  (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                  if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                    F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  pwVar15 = pwVar12;
                  if (uVar5 == 99) goto LAB_00c67058;
LAB_00c67052: ;
                  (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + -1;
LAB_00c67058: ;
                  do {
                    iVar6 = (*(int *)(gen_frame + 0x70));
                    if (((*(int *)(gen_frame + 0x4c)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar6 == 0)) {
LAB_00c673eb: ;
                      if (pwVar15 == pwVar12) goto LAB_00c67865;
                      if (((*(char *)(gen_frame + 0x76)) == '\0') && ((*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1, (*(uint *)(gen_frame + 0x24)) != 99)) {
                        if ((*(char *)(gen_frame + 0x6b)) == '\0') {
                          *(byte *)(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = 0;
                        }
                        else {
                          *(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = L'\0';
                        }
                      }
                      goto LAB_00c67715;
                    }
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    if ((*(uint *)(gen_frame + 0x78)) == 0xffffffff) {
LAB_00c673d2: ;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                      if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                        F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      }
                      goto LAB_00c673eb;
                    }
                    bVar3 = (byte)(*(uint *)(gen_frame + 0x78));
                    if (uVar5 != 99) {
                      if (uVar5 == 0x73) {
                        if ((8 < (int)(*(uint *)(gen_frame + 0x78))) && ((int)(*(uint *)(gen_frame + 0x78)) < 0xe)) goto LAB_00c673d2;
                        if ((*(uint *)(gen_frame + 0x78)) != 0x20) goto LAB_00c670e6;
                      }
                      if ((uVar5 != 0x7b) ||
                         (uVar5 = (*(uint *)(gen_frame + 0x24)),
                         ((int)(char)(((byte *)(gen_frame + 0x1e8))[(int)(*(uint *)(gen_frame + 0x78)) >> 3] ^ (*(byte *)(gen_frame + 0x69))) & 1 << (bVar3 & 7))
                         == 0)) goto LAB_00c673d2;
                    }
LAB_00c670e6: ;
                    if ((*(char *)(gen_frame + 0x76)) == '\0') goto code_r0x00c670f3;
                    pwVar15 = (wchar_t *)((int)pwVar15 + 1);
                  } while( true );
                }
                if ((*(uint *)(gen_frame + 0x24)) == 100) goto LAB_00c67441;
                if (100 < (int)(*(uint *)(gen_frame + 0x24))) {
                  if (0x67 < (int)(*(uint *)(gen_frame + 0x24))) {
                    if ((*(uint *)(gen_frame + 0x24)) == 0x69) {
                      uVar19 = 100;
                      goto LAB_00c66c32;
                    }
                    if ((*(uint *)(gen_frame + 0x24)) != 0x6e) goto LAB_00c671a7;
                    iVar6 = (*(int *)(gen_frame + 0x80));
                    if ((*(char *)(gen_frame + 0x76)) != '\0') goto LAB_00c67715;
                    goto LAB_00c676e9;
                  }
                  iVar6 = 0;
                  if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
                    *(*(undefined1 * PTR32 *)(gen_frame + 0x64)) = 0x2d;
                    iVar6 = 1;
LAB_00c66c6d: ;
                    (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c66c6d;
                  if ((*(int *)(gen_frame + 0x4c)) == 0) {
                    (*(int *)(gen_frame + 0x70)) = -1;
                  }
                  while( true ) {
                    iVar7 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
                    iVar8 = (*(int *)(gen_frame + 0x70));
                    if ((iVar7 == 0) || ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar8 == 0)) break;
                    (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                    (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar6] = (byte)(*(uint *)(gen_frame + 0x78));
                    iVar6 = iVar6 + 1;
                    uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar6,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                    if (uVar5 == 0) goto LAB_00c67865;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  iVar8 = (*(int *)(gen_frame + 0x70));
                  (*(byte *)(gen_frame + 0x69)) = *((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xbc)))));
                  if ((*((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xbc))))) == (byte)(*(uint *)(gen_frame + 0x78))) &&
                     ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar8 != 0)) {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar6] = (*(byte *)(gen_frame + 0x69));
                    iVar6 = iVar6 + 1;
                    uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar6,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                    if (uVar5 == 0) break;
                    while ((iVar7 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff), iVar8 = (*(int *)(gen_frame + 0x70)), iVar7 != 0 &&
                           ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar8 != 0))) {
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar6] = (byte)(*(uint *)(gen_frame + 0x78));
                      iVar6 = iVar6 + 1;
                      uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar6,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                      if (uVar5 == 0) goto LAB_00c67865;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                      (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    }
                  }
                  iVar8 = (*(int *)(gen_frame + 0x70));
                  iVar7 = iVar6;
                  if (((*(int *)(gen_frame + 0x60)) != 0) &&
                     ((((*(uint *)(gen_frame + 0x78)) == 0x65 || ((*(uint *)(gen_frame + 0x78)) == 0x45)) &&
                      ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar8 != 0)))) {
                    (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar6] = 0x65;
                    iVar7 = iVar6 + 1;
                    uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar7,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                    if (uVar5 == 0) break;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
                      (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar7] = 0x2d;
                      iVar7 = iVar6 + 2;
                      uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar7,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                      if (uVar5 == 0) break;
LAB_00c66ede: ;
                      iVar6 = (*(int *)(gen_frame + 0x70));
                      (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
                      if (iVar6 == 0) {
                        (*(int *)(gen_frame + 0x70)) = 0;
                      }
                      else {
                        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                        (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      }
                    }
                    else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c66ede;
                    while ((iVar8 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff), iVar6 = (*(int *)(gen_frame + 0x70)), iVar8 != 0 &&
                           ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, iVar6 != 0))) {
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar7] = (byte)(*(uint *)(gen_frame + 0x78));
                      iVar7 = iVar7 + 1;
                      uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x34)),&(*(undefined1 * PTR32 *)(gen_frame + 0x64)),iVar7,((undefined1 *)(gen_frame + 0x88)),&(*(int *)(gen_frame + 0x3c)));
                      if (uVar5 == 0) goto LAB_00c67865;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                      (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    }
                  }
                  (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                  if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                    F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  if ((*(int *)(gen_frame + 0x60)) != 0) {
                    if ((*(char *)(gen_frame + 0x76)) == '\0') {
                      (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1;
                      pbVar13 = ((byte *)(gen_frame + 0x8));
                      (*(undefined1 * PTR32 *)(gen_frame + 0x64))[iVar7] = 0;
                      iVar6 = (char)(*(byte *)(gen_frame + 0x87)) + -1;
                      pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x50));
                      puVar18 = (*(undefined1 * PTR32 *)(gen_frame + 0x64));
                      pcVar9 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
                      (*pcVar9)(iVar6,pwVar12,puVar18,pbVar13);
                    }
                    goto LAB_00c67715;
                  }
                  break;
                }
LAB_00c671a7: ;
                if (*(*(byte * PTR32 *)(gen_frame + 0x5c)) != (*(uint *)(gen_frame + 0x78))) {
                  if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                    F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  (*(int *)(gen_frame + 0x18)) = 1;
                  break;
                }
                (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + -1;
                if ((*(char *)(gen_frame + 0x76)) == '\0') {
                  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x20));
                }
              }
              else {
                if ((*(uint *)(gen_frame + 0x24)) == 0x70) {
                  (*(byte *)(gen_frame + 0x87)) = 1;
                  goto LAB_00c67441;
                }
                if ((*(uint *)(gen_frame + 0x24)) == 0x73) goto LAB_00c67019;
                if ((*(uint *)(gen_frame + 0x24)) == 0x75) goto LAB_00c67441;
                if ((*(uint *)(gen_frame + 0x24)) != 0x78) {
                  if ((*(uint *)(gen_frame + 0x24)) == 0x7b) {
                    if ('\0' < (*(char *)(gen_frame + 0x77))) {
                      (*(char *)(gen_frame + 0x6b)) = '\x01';
                    }
                    pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x5c)) + 1;
                    if (*pbVar13 == 0x5e) {
                      pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x5c)) + 2;
                      (*(byte *)(gen_frame + 0x69)) = 0xff;
                    }
                    F_00c48350(((byte *)(gen_frame + 0x1e8)),0,0x20);
                    bVar3 = (*(byte *)(gen_frame + 0x3b));
                    if (*pbVar13 == 0x5d) {
                      ((byte *)(gen_frame + 0x1e8))[0xb] = 0x20;
                      pbVar13 = pbVar13 + 1;
                      bVar3 = 0x5d;
                    }
                    while (bVar1 = *pbVar13, bVar1 != 0x5d) {
                      if (((bVar1 == 0x2d) && (bVar3 != 0)) && (bVar11 = pbVar13[1], bVar11 != 0x5d)
                         ) {
                        if (bVar3 < bVar11) {
                          (*(byte *)(gen_frame + 0x87)) = bVar11;
                          bVar11 = bVar3;
                        }
                        else {
                          (*(byte *)(gen_frame + 0x87)) = bVar3;
                        }
                        if (bVar11 < (*(byte *)(gen_frame + 0x87))) {
                          uVar19 = (uint)bVar11;
                          uVar5 = (uint)(byte)((*(byte *)(gen_frame + 0x87)) - bVar11);
                          do {
                            ((byte *)(gen_frame + 0x1e8))[uVar19 >> 3] =
                                 ((byte *)(gen_frame + 0x1e8))[uVar19 >> 3] | '\x01' << ((byte)uVar19 & 7);
                            uVar19 = uVar19 + 1;
                            uVar5 = uVar5 - 1;
                          } while (uVar5 != 0);
                        }
                        ((byte *)(gen_frame + 0x1e8))[(*(byte *)(gen_frame + 0x87)) >> 3] =
                             ((byte *)(gen_frame + 0x1e8))[(*(byte *)(gen_frame + 0x87)) >> 3] | '\x01' << ((*(byte *)(gen_frame + 0x87)) & 7);
                        pbVar13 = pbVar13 + 2;
                        bVar3 = 0;
                      }
                      else {
                        ((byte *)(gen_frame + 0x1e8))[bVar1 >> 3] = ((byte *)(gen_frame + 0x1e8))[bVar1 >> 3] | '\x01' << (bVar1 & 7);
                        pbVar13 = pbVar13 + 1;
                        bVar3 = bVar1;
                      }
                    }
                    (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar13;
                    goto LAB_00c67029;
                  }
                  goto LAB_00c671a7;
                }
LAB_00c66c32: ;
                if ((*(uint *)(gen_frame + 0x78)) == 0x2d) {
                  (*(char *)(gen_frame + 0x68)) = '\x01';
LAB_00c672d9: ;
                  (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1;
                  if (((*(int *)(gen_frame + 0x70)) == 0) && ((*(int *)(gen_frame + 0x4c)) != 0)) {
                    (*(char *)(gen_frame + 0x7f)) = '\x01';
                  }
                  else {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                }
                else if ((*(uint *)(gen_frame + 0x78)) == 0x2b) goto LAB_00c672d9;
                if ((*(uint *)(gen_frame + 0x78)) == 0x30) {
                  (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                  (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  if (((char)(*(uint *)(gen_frame + 0x78)) == 'x') || ((char)(*(uint *)(gen_frame + 0x78)) == 'X')) {
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                    (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    if (((*(int *)(gen_frame + 0x4c)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -2, (*(int *)(gen_frame + 0x70)) < 1)) {
                      (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
                    }
                    uVar19 = 0x78;
                  }
                  else {
                    (*(int *)(gen_frame + 0x60)) = 1;
                    if (uVar19 == 0x78) {
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                      if ((*(uint *)(gen_frame + 0x78)) != 0xffffffff) {
                        F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      }
                      (*(uint *)(gen_frame + 0x78)) = 0x30;
                      goto LAB_00c67482;
                    }
                    if (((*(int *)(gen_frame + 0x4c)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) == 0)) {
                      (*(char *)(gen_frame + 0x7f)) = (*(char *)(gen_frame + 0x7f)) + '\x01';
                    }
                    uVar19 = 0x6f;
                  }
                }
LAB_00c67488: ;
                if ((*(int *)(gen_frame + 0x30)) == 0) {
                  if ((*(char *)(gen_frame + 0x7f)) == '\0') {
                    while ((uVar5 = (*(uint *)(gen_frame + 0x78)), uVar19 != 0x78 && (uVar19 != 0x70))) {
                      iVar6 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
                      if (iVar6 == 0) goto LAB_00c6768d;
                      if (uVar19 == 0x6f) {
                        if (0x37 < (int)uVar5) goto LAB_00c6768d;
                        (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) << 3;
                      }
                      else {
                        (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) * 10;
                      }
LAB_00c6764e: ;
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + -0x30 + uVar5;
                      if (((*(int *)(gen_frame + 0x4c)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) == 0))
                      goto LAB_00c676a6;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                      (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    }
                    iVar6 = F_00c486bb((*(uint *)(gen_frame + 0x78)) & 0xff);
                    if (iVar6 != 0) {
                      (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) << 4;
                      uVar5 = F_00c66758(uVar5);
                      (*(uint *)(gen_frame + 0x78)) = uVar5;
                      goto LAB_00c6764e;
                    }
LAB_00c6768d: ;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                    if (uVar5 != 0xffffffff) {
                      F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    }
                  }
LAB_00c676a6: ;
                  if ((*(char *)(gen_frame + 0x68)) != '\0') {
                    (*(int *)(gen_frame + 0x48)) = -(*(int *)(gen_frame + 0x48));
                  }
                }
                else {
                  if ((*(char *)(gen_frame + 0x7f)) == '\0') {
                    while ((uVar5 = (*(uint *)(gen_frame + 0x78)), uVar19 != 0x78 && (uVar19 != 0x70))) {
                      iVar6 = F_00c48637((*(uint *)(gen_frame + 0x78)) & 0xff);
                      if (iVar6 == 0) goto LAB_00c67591;
                      if (uVar19 == 0x6f) {
                        if (0x37 < (int)uVar5) goto LAB_00c67591;
                        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) << 3 | (uint)(*(longlong *)(gen_frame + 0x54)) >> 0x1d;
                        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = (uint)(*(longlong *)(gen_frame + 0x54)) << 3;
                      }
                      else {
                        (*(longlong *)(gen_frame + 0x54)) = (*(longlong *)(gen_frame + 0x54)) * 10;
                      }
LAB_00c6754c: ;
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      uVar5 = uVar5 - 0x30;
                      bVar17 = CARRY4((uint)(*(longlong *)(gen_frame + 0x54)),uVar5);
                      iVar6 = (uint)(*(longlong *)(gen_frame + 0x54)) + uVar5;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = iVar6;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) + ((int)uVar5 >> 0x1f) + (uint)bVar17;
                      (*(longlong *)(gen_frame + 0x54)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)),iVar6);
                      if (((*(int *)(gen_frame + 0x4c)) != 0) && ((*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + -1, (*(int *)(gen_frame + 0x70)) == 0))
                      goto LAB_00c675aa;
                      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                      (*(uint *)(gen_frame + 0x78)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    }
                    iVar6 = F_00c486bb((*(uint *)(gen_frame + 0x78)) & 0xff);
                    if (iVar6 != 0) {
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) << 4 | (uint)(*(longlong *)(gen_frame + 0x54)) >> 0x1c;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = (uint)(*(longlong *)(gen_frame + 0x54)) << 4;
                      uVar5 = F_00c66758(uVar5);
                      (*(uint *)(gen_frame + 0x78)) = uVar5;
                      goto LAB_00c6754c;
                    }
LAB_00c67591: ;
                    (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
                    if (uVar5 != 0xffffffff) {
                      F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    }
                  }
LAB_00c675aa: ;
                  if ((*(char *)(gen_frame + 0x68)) != '\0') {
                    iVar6 = -(uint)(*(longlong *)(gen_frame + 0x54));
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) = -((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)) + ((uint)(*(longlong *)(gen_frame + 0x54)) != 0));
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 0)) = iVar6;
                    (*(longlong *)(gen_frame + 0x54)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4)),iVar6);
                  }
                }
                if (uVar19 == 0x46) {
                  (*(int *)(gen_frame + 0x60)) = 0;
                }
                if ((*(int *)(gen_frame + 0x60)) == 0) break;
                if ((*(char *)(gen_frame + 0x76)) == '\0') {
                  (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1;
                  iVar6 = (*(int *)(gen_frame + 0x48));
LAB_00c676e9: ;
                  if ((*(int *)(gen_frame + 0x30)) == 0) {
                    if ((*(byte *)(gen_frame + 0x87)) == 0) {
                      *(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = (wchar_t)iVar6;
                    }
                    else {
                      *(int *)(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = iVar6;
                    }
                  }
                  else {
                    *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x50)) = (uint)(*(longlong *)(gen_frame + 0x54));
                    *(uint *)((*(wchar_t * PTR32 *)(gen_frame + 0x50)) + 2) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x54)) + 4));
                  }
                }
              }
LAB_00c67715: ;
              (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + '\x01';
              pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x5c)) + 1;
              (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar13;
              goto LAB_00c67796;
            }
          }
          else {
LAB_00c67734: ;
            (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
            uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
            pbVar13 = pbVar16 + 1;
            (*(uint *)(gen_frame + 0x78)) = uVar5;
            (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar13;
            if (*pbVar16 == uVar5) {
              iVar6 = F_00c6e020(uVar5 & 0xff);
              if (iVar6 != 0) {
                (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
                uVar19 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                bVar3 = *pbVar13;
                pbVar13 = pbVar16 + 2;
                (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar13;
                if (bVar3 != uVar19) {
                  if (uVar19 != 0xffffffff) {
                    F_00c50c0d(uVar19,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  }
                  goto LAB_00c67850;
                }
                (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
              }
LAB_00c67796: ;
              if (((*(uint *)(gen_frame + 0x78)) != 0xffffffff) ||
                 ((*pbVar13 == 0x25 && (pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x5c)), (*(byte * PTR32 *)(gen_frame + 0x5c))[1] == 0x6e))))
              goto LAB_00c677ba;
              break;
            }
          }
LAB_00c67850: ;
          if (uVar5 != 0xffffffff) {
            F_00c50c0d((*(uint *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
          }
          break;
        }
        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + -1;
        uVar5 = F_00c667a1(&(*(int *)(gen_frame + 0x80)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
        pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x5c));
        if (uVar5 != 0xffffffff) {
          F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x5c));
        }
        do {
          pbVar13 = pbVar13 + 1;
          iVar6 = F_00c4873c((uint)*pbVar13);
        } while (iVar6 != 0);
        (*(byte * PTR32 *)(gen_frame + 0x5c)) = pbVar13;
LAB_00c677ba: ;
        bVar3 = *pbVar13;
      } while (bVar3 != 0);
LAB_00c67865: ;
      if ((*(int *)(gen_frame + 0x3c)) == 1) {
        F_00c4c68f((*(undefined1 * PTR32 *)(gen_frame + 0x64)));
      }
      if ((*(uint *)(gen_frame + 0x78)) == 0xffffffff) {
        iVar6 = (*(int *)(gen_frame + 0x44));
        if (((*(int *)(gen_frame + 0x44)) == 0) && ((*(char *)(gen_frame + 0x6a)) == '\0')) {
          iVar6 = -1;
        }
        if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c678e0;
      }
      if ((*(int *)(gen_frame + 0x18)) == 1) {
        piVar4 = F_00c51f85();
        *piVar4 = 0x16;
        F_00c4c305();
      }
    }
    iVar6 = (*(int *)(gen_frame + 0x44));
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c678e0: ;
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return iVar6;
code_r0x00c670f3: ;
  if ((*(int *)(gen_frame + 0x40)) == 0) {
    piVar4 = F_00c51f85();
    *piVar4 = 0xc;
    if ((*(char *)(gen_frame + 0x6b)) == '\0') {
      *(byte *)pwVar15 = 0;
    }
    else {
      *pwVar15 = L'\0';
    }
    goto LAB_00c67865;
  }
  if ((*(char *)(gen_frame + 0x6b)) == '\0') {
    *(byte *)pwVar12 = bVar3;
    pwVar12 = (wchar_t *)((int)pwVar12 + 1);
  }
  else {
    (*(byte *)(gen_frame + 0x2c)) = bVar3;
    iVar6 = F_00c6e020((*(uint *)(gen_frame + 0x78)) & 0xff);
    if (iVar6 != 0) {
      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + 1;
      uVar19 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x6c)));
      (*(undefined1 *)(gen_frame + 0x2d)) = (char)uVar19;
    }
    ((wchar_t *)(gen_frame + 0x1c))[0] = L'?';
    ((wchar_t *)(gen_frame + 0x1c))[1] = L'\0';
    F_00c7b204(((wchar_t *)(gen_frame + 0x1c)),(char *)&(*(byte *)(gen_frame + 0x2c)),*((gen_size32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xac))),(undefined *)((byte *)(gen_frame + 0x8)));
    *pwVar12 = ((wchar_t *)(gen_frame + 0x1c))[0];
    pwVar12 = pwVar12 + 1;
  }
  (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar12;
  goto LAB_00c67052;
}

/* ref: FUN_00c67e68 */
float10 F_00c67e68(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc67e68u, 0u, gen_a1, gen_a2, 0u);
  double in_xmm0 = (double)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 extraout_ST0;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar14 = gen_bits2d(CONCAT44(param_3,param_2));
  uVar1 = (ushort)((uint)param_3 >> 0x10);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar9 = (REFG(undefined8, 0x111d6b0) * dVar14 + REFG(undefined8, 0x111d6b8)) - REFG(undefined8, 0x111d6b8);
    iVar3 = ((int)ROUND(REFG(undefined8, 0x111d6b0) * dVar14) + 0x1c7610U & 0x3f) * 0x20;
    dVar10 = *(double *)&REFG(undefined, 0x111d6c0) * dVar9;
    dVar4 = dVar14 - REFG(undefined8, 0x111d6d0) * dVar9;
    dVar14 = dVar14 - REFG(undefined8, 0x111d6d0) * dVar9;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - *(double *)&REFG(undefined, 0x111d6c8) * dVar9;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&REFG(undefined, 0x111ce70) + iVar3) + *(double *)(&REFG(undefined, 0x111ce88) + iVar3);
    dVar12 = *(double *)(&REFG(undefined, 0x111ce88) + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&REFG(undefined, 0x111ce70) + iVar3);
    dVar13 = dVar12 + *(double *)(&REFG(undefined, 0x111ce78) + iVar3);
    dVar17 = dVar16 + dVar13;
    return ((float10)GEN_TOD((dVar17 + ((((((dVar9 * *(double *)&REFG(undefined, 0x111d6d8) - ((dVar14 - dVar15) - dVar10))
                                   * (*(double *)(&REFG(undefined, 0x111ce78) + iVar3) * dVar15 - dVar11) +
                                  *(double *)(&REFG(undefined, 0x111ce80) + iVar3)) +
                                 ((*(double *)(&REFG(undefined, 0x111ce78) + iVar3) - dVar13) + dVar12)) +
                                ((dVar13 - dVar17) + dVar16)) +
                               ((*(double *)&REFG(undefined, 0x111d680) * dVar6 + *(double *)&REFG(undefined, 0x111d670)) +
                               ((*(double *)&REFG(undefined, 0x111d6a0) * dVar4) * dVar5 +
                               *(double *)&REFG(undefined, 0x111d690)) * (dVar6 * dVar6)) *
                               ((dVar11 * dVar15) * dVar6)) +
                              ((*(double *)&REFG(undefined, 0x111d688) * dVar8 + *(double *)&REFG(undefined, 0x111d678)) +
                              ((*(double *)&REFG(undefined, 0x111d6a8) * dVar4) * dVar7 + *(double *)&REFG(undefined, 0x111d698)
                              ) * (dVar8 * dVar8)) * (*(double *)(&REFG(undefined, 0x111ce78) + iVar3) * dVar8)))));
  }
  if ((short)uVar2 < 0x10c6) {
    return ((float10)GEN_TOD((REFG(undefined8, 0x111d700) -
                    gen_bits2d((ulonglong)gen_d2bits(dVar14) & 0xffffffffffff |
                               (ulonglong)(uVar1 & 0x7fff) << 0x30))));
  }
  F_00c4ca6f(param_2);
  return extraout_ST0;
}

/* ref: FUN_00c67e6e */
float10 F_00c67e6e(double gen_a0, double gen_a1, double gen_a2, double gen_a3, double gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc67e6eu, 0u, 0u, 0u, 0u);
  double in_xmm0 = (double)gen_a0;
  double in_xmm1 = (double)gen_a1;
  double in_xmm2 = (double)gen_a2;
  double in_xmm3 = (double)gen_a3;
  double in_xmm7 = (double)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 extraout_ST0;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = (ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar9 = (REFG(undefined8, 0x111d6b0) * in_xmm0 + REFG(undefined8, 0x111d6b8)) - REFG(undefined8, 0x111d6b8);
    iVar3 = ((int)ROUND(REFG(undefined8, 0x111d6b0) * in_xmm0) + 0x1c7610U & 0x3f) * 0x20;
    dVar10 = *(double *)&REFG(undefined, 0x111d6c0) * dVar9;
    dVar4 = in_xmm0 - REFG(undefined8, 0x111d6d0) * dVar9;
    dVar14 = in_xmm0 - REFG(undefined8, 0x111d6d0) * dVar9;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - *(double *)&REFG(undefined, 0x111d6c8) * dVar9;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&REFG(undefined, 0x111ce70) + iVar3) + *(double *)(&REFG(undefined, 0x111ce88) + iVar3);
    dVar12 = *(double *)(&REFG(undefined, 0x111ce88) + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&REFG(undefined, 0x111ce70) + iVar3);
    dVar13 = dVar12 + *(double *)(&REFG(undefined, 0x111ce78) + iVar3);
    dVar17 = dVar16 + dVar13;
    return ((float10)GEN_TOD((dVar17 + ((((((dVar9 * *(double *)&REFG(undefined, 0x111d6d8) - ((dVar14 - dVar15) - dVar10))
                                   * (*(double *)(&REFG(undefined, 0x111ce78) + iVar3) * dVar15 - dVar11) +
                                  *(double *)(&REFG(undefined, 0x111ce80) + iVar3)) +
                                 ((*(double *)(&REFG(undefined, 0x111ce78) + iVar3) - dVar13) + dVar12)) +
                                ((dVar13 - dVar17) + dVar16)) +
                               ((*(double *)&REFG(undefined, 0x111d680) * dVar6 + *(double *)&REFG(undefined, 0x111d670)) +
                               ((*(double *)&REFG(undefined, 0x111d6a0) * dVar4) * dVar5 +
                               *(double *)&REFG(undefined, 0x111d690)) * (dVar6 * dVar6)) *
                               ((dVar11 * dVar15) * dVar6)) +
                              ((*(double *)&REFG(undefined, 0x111d688) * dVar8 + *(double *)&REFG(undefined, 0x111d678)) +
                              ((*(double *)&REFG(undefined, 0x111d6a8) * dVar4) * dVar7 + *(double *)&REFG(undefined, 0x111d698)
                              ) * (dVar8 * dVar8)) * (*(double *)(&REFG(undefined, 0x111ce78) + iVar3) * dVar8)))));
  }
  if ((short)uVar2 < 0x10c6) {
    return ((float10)GEN_TOD((REFG(undefined8, 0x111d700) -
                    gen_bits2d((ulonglong)gen_d2bits(in_xmm0) & 0xffffffffffff |
                               (ulonglong)(uVar1 & 0x7fff) << 0x30))));
  }
  F_00c4ca6f(param_6);
  return extraout_ST0;
}

/* ref: __d_inttype */
uint F_00c68b60(double gen_a0)
{
  GEN_ENTER(0xc68b60u, 0u, 0u, 0u, 0u);
  double param_1 = (double)gen_a0;
  double dVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar2 = F_00c516ab(param_1);
  if ((uVar2 & 0x90) == 0) {
    fVar4 = F_00c7d6ab(param_1);
    bVar3 = GEN_ISNAN((float10)param_1) || GEN_ISNAN(fVar4);
    if (bVar3 != (bVar3 || (float10)param_1 == fVar4)) {
      dVar1 = param_1 * REFG(double, 0x1088108);
      fVar4 = F_00c7d6ab(dVar1);
      fVar5 = (float10)dVar1;
      bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
      if (bVar3 != (bVar3 || fVar5 == fVar4)) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c68bca */
uint F_00c68bca(double gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc68bcau, 0u, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  gen_args[3] = gen_a2;
  gen_args[4] = gen_a3;
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  
  dVar1 = ABS((*(double *)&gen_args[0]));
  uVar4 = 0;
  dVar2 = *(double *)&REFG(undefined, 0x134bc90);
  if ((*(int *)&gen_args[3]) == 0x7ff00000) {
    if ((*(uint *)&gen_args[2]) == 0) {
      if ((!(dVar1 <= 1.0) == GEN_ISNAN(dVar1)) &&
         (dVar2 = 1.0, dVar1 <= 1.0 && (!GEN_ISNAN(dVar1) && dVar1 != 1.0))) {
        dVar2 = 0.0;
      }
      goto LAB_00c68cee;
    }
  }
  else if (((*(int *)&gen_args[3]) == -0x100000) && ((*(uint *)&gen_args[2]) == 0)) {
    if (!(dVar1 <= 1.0) == GEN_ISNAN(dVar1)) {
      if (!(dVar1 <= 1.0) || (GEN_ISNAN(dVar1) || dVar1 == 1.0)) {
        uVar4 = 1;
        dVar2 = *(double *)&REFG(undefined, 0x134bc98);
      }
    }
    else {
      dVar2 = 0.0;
    }
    goto LAB_00c68cee;
  }
  if ((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 4)) == 0x7ff00000) {
    if ((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) != 0) {
      return 0;
    }
    if ((!(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))) <= 0.0) ==
         GEN_ISNAN(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))))) &&
       (dVar1 = gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))), dVar2 = 0.0,
       !(dVar1 <= 0.0) || (GEN_ISNAN(dVar1) || dVar1 == 0.0))) {
      dVar2 = 1.0;
    }
  }
  else {
    if ((*(double *)&gen_args[0]) != -INFINITY) {
      return 0;
    }
    uVar3 = F_00c68b60(GEN_TOD(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2])))));
    dVar2 = 0.0;
    if (!(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))) <= 0.0) ==
        GEN_ISNAN(gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2]))))) {
      dVar1 = gen_bits2d(CONCAT44((*(int *)&gen_args[3]),(*(uint *)&gen_args[2])));
      if (!(dVar1 <= 0.0) || (GEN_ISNAN(dVar1) || dVar1 == 0.0)) {
        dVar2 = 1.0;
      }
      else if (uVar3 == 1) {
        dVar2 = *(double *)&REFG(undefined, 0x134bcb0);
      }
    }
    else {
      dVar2 = *(double *)&REFG(undefined, 0x134bc90);
      if (uVar3 == 1) {
        dVar2 = -*(double *)&REFG(undefined, 0x134bc90);
      }
    }
  }
LAB_00c68cee: ;
  *(*(double * PTR32 *)&gen_args[4]) = dVar2;
  return uVar4;
}

/* ref: FUN_00c68d18 */
float10 F_00c68d18(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc68d18u, 0u, gen_a1, gen_a2, 0u);
  double in_xmm0 = (double)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  int iVar2;
  float10 extraout_ST0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar13 = gen_bits2d(CONCAT44(param_3,param_2));
  uVar1 = ((ushort)((uint)param_3 >> 0x10) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar8 = (REFG(undefined8, 0x11218a0) * dVar13 + REFG(undefined8, 0x11218a8)) - REFG(undefined8, 0x11218a8);
    iVar2 = ((int)ROUND(REFG(undefined8, 0x11218a0) * dVar13) + 0x1c7600U & 0x3f) * 0x20;
    dVar9 = *(double *)&REFG(undefined, 0x11218b0) * dVar8;
    dVar3 = dVar13 - REFG(undefined8, 0x11218c0) * dVar8;
    dVar13 = dVar13 - REFG(undefined8, 0x11218c0) * dVar8;
    dVar14 = dVar13 - dVar9;
    dVar4 = dVar3 - dVar9;
    dVar6 = dVar3 - *(double *)&REFG(undefined, 0x11218b8) * dVar8;
    dVar5 = dVar4 * dVar4;
    dVar7 = dVar6 * dVar6;
    dVar10 = *(double *)(&REFG(undefined, 0x1121060) + iVar2) + *(double *)(&REFG(undefined, 0x1121078) + iVar2);
    dVar11 = *(double *)(&REFG(undefined, 0x1121078) + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&REFG(undefined, 0x1121060) + iVar2);
    dVar12 = dVar11 + *(double *)(&REFG(undefined, 0x1121068) + iVar2);
    dVar16 = dVar15 + dVar12;
    return ((float10)GEN_TOD((dVar16 + ((((((dVar8 * *(double *)&REFG(undefined, 0x11218c8) - ((dVar13 - dVar14) - dVar9))
                                   * (*(double *)(&REFG(undefined, 0x1121068) + iVar2) * dVar14 - dVar10) +
                                  *(double *)(&REFG(undefined, 0x1121070) + iVar2)) +
                                 ((*(double *)(&REFG(undefined, 0x1121068) + iVar2) - dVar12) + dVar11)) +
                                ((dVar12 - dVar16) + dVar15)) +
                               ((*(double *)&REFG(undefined, 0x1121870) * dVar5 + *(double *)&REFG(undefined, 0x1121860)) +
                               ((*(double *)&REFG(undefined, 0x1121890) * dVar3) * dVar4 +
                               *(double *)&REFG(undefined, 0x1121880)) * (dVar5 * dVar5)) *
                               ((dVar10 * dVar14) * dVar5)) +
                              ((*(double *)&REFG(undefined, 0x1121878) * dVar7 + *(double *)&REFG(undefined, 0x1121868)) +
                              ((*(double *)&REFG(undefined, 0x1121898) * dVar3) * dVar6 + *(double *)&REFG(undefined, 0x1121888)
                              ) * (dVar7 * dVar7)) * (*(double *)(&REFG(undefined, 0x1121068) + iVar2) * dVar7)))));
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(dVar13 * *(double *)&REFG(undefined, 0x11218e0));
    }
    return (float10)dVar13;
  }
  F_00c4ce2f(param_2);
  return extraout_ST0;
}

/* ref: FUN_00c68d1e */
float10 F_00c68d1e(double gen_a0, double gen_a1, double gen_a2, double gen_a3, double gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc68d1eu, 0u, 0u, 0u, 0u);
  double in_xmm0 = (double)gen_a0;
  double in_xmm1 = (double)gen_a1;
  double in_xmm2 = (double)gen_a2;
  double in_xmm3 = (double)gen_a3;
  double in_xmm7 = (double)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  ushort uVar1;
  int iVar2;
  float10 extraout_ST0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar1 = ((ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar8 = (REFG(undefined8, 0x11218a0) * in_xmm0 + REFG(undefined8, 0x11218a8)) - REFG(undefined8, 0x11218a8);
    iVar2 = ((int)ROUND(REFG(undefined8, 0x11218a0) * in_xmm0) + 0x1c7600U & 0x3f) * 0x20;
    dVar9 = *(double *)&REFG(undefined, 0x11218b0) * dVar8;
    dVar3 = in_xmm0 - REFG(undefined8, 0x11218c0) * dVar8;
    dVar13 = in_xmm0 - REFG(undefined8, 0x11218c0) * dVar8;
    dVar14 = dVar13 - dVar9;
    dVar4 = dVar3 - dVar9;
    dVar6 = dVar3 - *(double *)&REFG(undefined, 0x11218b8) * dVar8;
    dVar5 = dVar4 * dVar4;
    dVar7 = dVar6 * dVar6;
    dVar10 = *(double *)(&REFG(undefined, 0x1121060) + iVar2) + *(double *)(&REFG(undefined, 0x1121078) + iVar2);
    dVar11 = *(double *)(&REFG(undefined, 0x1121078) + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&REFG(undefined, 0x1121060) + iVar2);
    dVar12 = dVar11 + *(double *)(&REFG(undefined, 0x1121068) + iVar2);
    dVar16 = dVar15 + dVar12;
    return ((float10)GEN_TOD((dVar16 + ((((((dVar8 * *(double *)&REFG(undefined, 0x11218c8) - ((dVar13 - dVar14) - dVar9))
                                   * (*(double *)(&REFG(undefined, 0x1121068) + iVar2) * dVar14 - dVar10) +
                                  *(double *)(&REFG(undefined, 0x1121070) + iVar2)) +
                                 ((*(double *)(&REFG(undefined, 0x1121068) + iVar2) - dVar12) + dVar11)) +
                                ((dVar12 - dVar16) + dVar15)) +
                               ((*(double *)&REFG(undefined, 0x1121870) * dVar5 + *(double *)&REFG(undefined, 0x1121860)) +
                               ((*(double *)&REFG(undefined, 0x1121890) * dVar3) * dVar4 +
                               *(double *)&REFG(undefined, 0x1121880)) * (dVar5 * dVar5)) *
                               ((dVar10 * dVar14) * dVar5)) +
                              ((*(double *)&REFG(undefined, 0x1121878) * dVar7 + *(double *)&REFG(undefined, 0x1121868)) +
                              ((*(double *)&REFG(undefined, 0x1121898) * dVar3) * dVar6 + *(double *)&REFG(undefined, 0x1121888)
                              ) * (dVar7 * dVar7)) * (*(double *)(&REFG(undefined, 0x1121068) + iVar2) * dVar7)))));
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(in_xmm0 * *(double *)&REFG(undefined, 0x11218e0));
    }
    return (float10)in_xmm0;
  }
  F_00c4ce2f(param_6);
  return extraout_ST0;
}

/* ref: _wcslen */
gen_size32 F_00c68ec8(unsigned int gen_a0)
{
  GEN_ENTER(0xc68ec8u, gen_a0, 0u, 0u, 0u);
  wchar_t * _Str = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t wVar1;
  wchar_t * pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  return ((int)pwVar2 - (int)((int)(uintptr_t)_Str) >> 1) - 1;
}

/* ref: ___check_float_string_00c68ee3 */
uint F_00c68ee3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc68ee3u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if ((undefined *)*in_edi == param_4) {
      pvVar1 = F_00c54c73(_Count,4);
      *in_edi = pvVar1;
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi * 2);
    }
    else {
      pvVar1 = F_00c54d0d((undefined *)*in_edi,_Count,4);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: __hextodec_00c68f3d */
ushort F_00c68f3d(unsigned int gen_a0)
{
  GEN_ENTER(0xc68f3du, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  
  if ((((*(uint *)&gen_args[0]) & 0xff00) != 0) || (iVar1 = F_00c48637((*(uint *)&gen_args[0]) & 0xff), iVar1 == 0)) {
    (*(undefined2 *)((char *)&(*(uint *)&gen_args[0]) + 0)) = ((ushort)(*(uint *)&gen_args[0]) & 0xffdf) - 7;
  }
  return (ushort)(*(uint *)&gen_args[0]);
}

/* ref: FUN_00c68f73 */
uint F_00c68f73(unsigned int gen_a0)
{
  GEN_ENTER(0xc68f73u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  wVar1 = F_00c7d6bf(param_1);
  return CONCAT22(extraout_var,wVar1);
}

/* ref: __un_inc_00c68f7e */
uint F_00c68f7e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc68f7eu, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  if ((ushort)param_1 != 0xffff) {
    wVar1 = F_00c7d8e0((ushort)param_1,param_2);
    return CONCAT22(extraout_var,wVar1);
  }
  return 0xffff;
}

/* ref: __whiteout_00c68f96 */
ushort F_00c68f96(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc68f96u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ushort _C;
  int iVar1;
  
  do {
    *in_esi = *in_esi + 1;
    _C = F_00c7d6bf(param_2);
    if (_C == 0xffff) {
      return 0xffff;
    }
    iVar1 = F_00c7db09(_C,8);
  } while (iVar1 != 0);
  return _C;
}

/* ref: __winput_l */
int F_00c68fc8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc68fc8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x340];
  gen_size32 _Size;
  longlong lVar1;
  undefined * pvVar2;
  ushort uVar3;
  wchar_t wVar4;
  ushort wVar5;
  wchar_t wVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  int eVar10;
  code * pcVar11;
  uint uVar12;
  int iVar13;
  wchar_t * pwVar14;
  wchar_t * pwVar15;
  uint uVar16;
  wchar_t * pwVar17;
  bool bVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  byte * pbVar21;
  undefined2 uVar22;
  
  (*(uint *)(gen_frame + 0x338)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x33c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = _File;
  (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = param_2;
  (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = ((wchar_t *)(gen_frame + 0x7c));
  (*(int *)(gen_frame + 0x28)) = 0x15e;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x70)) = 0;
  if ((param_2 == (wchar_t *)0x0) || (_File == (undefined *)0x0)) {
    piVar7 = F_00c51f85();
    *piVar7 = 0x16;
    F_00c4c305();
    iVar8 = -1;
  }
  else {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x4)),_Locale);
    wVar4 = *param_2;
    (*(char *)(gen_frame + 0x62)) = '\0';
    (*(uint *)(gen_frame + 0x74)) = 0;
    (*(int *)(gen_frame + 0x30)) = 0;
    pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x38));
    if (wVar4 != L'\0') {
LAB_00c6907e: ;
      iVar8 = F_00c7db09(wVar4,8);
      uVar19 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x64)),0);
      uVar20 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x64))) >> 0x10);
      if (iVar8 != 0) {
        (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
        uVar3 = F_00c68f96(&(*(uint *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
        F_00c68f7e((uint)uVar3,CONCAT22(uVar20,uVar19));
        do {
          pwVar15 = pwVar15 + 1;
          iVar8 = F_00c7db09(*pwVar15,8);
        } while (iVar8 != 0);
        goto LAB_00c69fdf;
      }
      if (*pwVar15 == L'%') {
        if (pwVar15[1] == L'%') {
          if (pwVar15[1] == L'%') {
            pwVar15 = pwVar15 + 1;
          }
          goto LAB_00c69f90;
        }
        (*(uint *)(gen_frame + 0x4c)) = 0;
        (*(uint *)(gen_frame + 0x14)) = 0;
        (*(int *)(gen_frame + 0x58)) = 0;
        (*(int *)(gen_frame + 0x48)) = 0;
        (*(int *)(gen_frame + 0x6c)) = 0;
        (*(uint *)(gen_frame + 0x3c)) = 0;
        (*(byte *)(gen_frame + 0x53)) = 0;
        (*(char *)(gen_frame + 0x61)) = '\0';
        (*(char *)(gen_frame + 0x69)) = '\0';
        (*(char *)(gen_frame + 0x7b)) = '\0';
        (*(char *)(gen_frame + 0x63)) = '\0';
        (*(char *)(gen_frame + 0x6b)) = '\0';
        (*(char *)(gen_frame + 0x6a)) = '\x01';
        pwVar14 = (wchar_t *)0x0;
        do {
          pwVar17 = pwVar15 + 1;
          uVar12 = (uint)(ushort)*pwVar17;
          if (((*pwVar17 & 0xff00U) == 0) && (iVar8 = F_00c48637(uVar12 & 0xff), iVar8 != 0)) {
            (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 1;
            (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) * 10 + -0x30 + uVar12;
          }
          else if (uVar12 < 0x4f) {
            if (uVar12 != 0x4e) {
              if (uVar12 == 0x2a) {
                (*(char *)(gen_frame + 0x69)) = (*(char *)(gen_frame + 0x69)) + '\x01';
              }
              else if (uVar12 != 0x46) {
                if (uVar12 == 0x49) {
                  wVar4 = pwVar15[2];
                  if ((wVar4 == L'6') && (pwVar15[3] == L'4')) {
                    pwVar17 = pwVar15 + 3;
                    goto LAB_00c691bf;
                  }
                  if ((wVar4 == L'3') && (pwVar15[3] == L'2')) {
                    pwVar17 = pwVar15 + 3;
                  }
                  else if ((wVar4 != L'd') &&
                          ((((wVar4 != L'i' && (wVar4 != L'o')) && (wVar4 != L'x')) &&
                           (wVar4 != L'X')))) goto LAB_00c69216;
                }
                else if (uVar12 == 0x4c) {
                  (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + '\x01';
                }
                else {
LAB_00c69216: ;
                  (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) + '\x01';
                }
              }
            }
          }
          else if (uVar12 == 0x68) {
            (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + -1;
            (*(char *)(gen_frame + 0x6b)) = (*(char *)(gen_frame + 0x6b)) + -1;
          }
          else {
            if (uVar12 == 0x6c) {
              if (pwVar15[2] == L'l') {
                pwVar17 = pwVar15 + 2;
LAB_00c691bf: ;
                (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
                (*(uint *)(gen_frame + 0x40)) = 0;
                (*(uint *)(gen_frame + 0x44)) = 0;
                goto LAB_00c69244;
              }
              (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + '\x01';
            }
            else if (uVar12 != 0x77) goto LAB_00c69216;
            (*(char *)(gen_frame + 0x6b)) = (*(char *)(gen_frame + 0x6b)) + '\x01';
          }
LAB_00c69244: ;
          pwVar15 = pwVar17;
        } while ((*(char *)(gen_frame + 0x7b)) == '\0');
        (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar17;
        if ((*(char *)(gen_frame + 0x69)) == '\0') {
          pwVar14 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x20));
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x20));
          (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
        }
        (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar14;
        (*(char *)(gen_frame + 0x7b)) = '\0';
        if (((*(char *)(gen_frame + 0x6b)) == '\0') && ((*pwVar17 == L'S' || ((*(char *)(gen_frame + 0x6b)) = '\x01', *pwVar17 == L'C')))) {
          (*(char *)(gen_frame + 0x6b)) = -1;
        }
        uVar12 = (ushort)*pwVar17 | 0x20;
        (*(uint *)(gen_frame + 0x54)) = uVar12;
        if (uVar12 != 0x6e) {
          if ((uVar12 == 99) || (uVar12 == 0x7b)) {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
            uVar3 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
          }
          else {
            uVar3 = F_00c68f96(&(*(uint *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
          }
          (*(uint *)(gen_frame + 0x70)) = (uint)uVar3;
          if (uVar3 == 0xffff) goto LAB_00c6a013;
        }
        if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x6c)) == 0)) goto LAB_00c6a000;
        uVar20 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x64)),0);
        uVar22 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x64))) >> 0x10);
        if (0x6f < uVar12) {
          if (uVar12 == 0x70) {
            (*(char *)(gen_frame + 0x6a)) = '\x01';
            goto LAB_00c69c71;
          }
          if (uVar12 == 0x73) goto LAB_00c69824;
          if (uVar12 == 0x75) goto LAB_00c69c71;
          if (uVar12 == 0x78) {
LAB_00c6937c: ;
            if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'-') {
              (*(char *)(gen_frame + 0x61)) = '\x01';
LAB_00c69aba: ;
              (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1;
              if (((*(int *)(gen_frame + 0x6c)) == 0) && ((*(int *)(gen_frame + 0x48)) != 0)) {
                (*(char *)(gen_frame + 0x7b)) = '\x01';
              }
              else {
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
                wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
              }
            }
            else if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'+') goto LAB_00c69aba;
            if ((short)(*(uint *)(gen_frame + 0x70)) == 0x30) {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
              wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
              (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
              if ((wVar5 == 0x78) || (wVar5 == 0x58)) {
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
                wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
                if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -2, (*(int *)(gen_frame + 0x6c)) < 1)) {
                  (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) + '\x01';
                }
                (*(uint *)(gen_frame + 0x54)) = 0x78;
              }
              else {
                (*(int *)(gen_frame + 0x58)) = 1;
                if ((*(uint *)(gen_frame + 0x54)) == 0x78) {
                  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
                  F_00c68f7e((uint)wVar5,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x70)) = 0x30;
                  goto LAB_00c69cba;
                }
                if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, (*(int *)(gen_frame + 0x6c)) == 0)) {
                  (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) + '\x01';
                }
                (*(uint *)(gen_frame + 0x54)) = 0x6f;
              }
            }
LAB_00c69cc0: ;
            if ((*(uint *)(gen_frame + 0x3c)) == 0) {
              uVar12 = (*(uint *)(gen_frame + 0x4c));
              if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                while ((uVar16 = (*(uint *)(gen_frame + 0x70)), uVar3 = (ushort)(*(uint *)(gen_frame + 0x70)), (*(uint *)(gen_frame + 0x54)) != 0x78 &&
                       ((*(uint *)(gen_frame + 0x54)) != 0x70))) {
                  if ((((*(uint *)(gen_frame + 0x70)) & 0xff00) != 0) ||
                     (iVar8 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff), iVar8 == 0)) goto LAB_00c69eee;
                  if ((*(uint *)(gen_frame + 0x54)) == 0x6f) {
                    if (0x37 < uVar3) goto LAB_00c69eee;
                    iVar8 = uVar12 << 3;
                  }
                  else {
                    iVar8 = uVar12 * 10;
                  }
LAB_00c69eb0: ;
                  (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                  uVar12 = iVar8 + -0x30 + (uVar16 & 0xffff);
                  if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, (*(int *)(gen_frame + 0x6c)) == 0))
                  goto LAB_00c69f02;
                  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
                  wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
                }
                if ((((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) && (iVar8 = F_00c486bb((*(uint *)(gen_frame + 0x70)) & 0xff), iVar8 != 0)
                   ) {
                  iVar8 = uVar12 << 4;
                  uVar3 = F_00c68f3d(uVar16);
                  uVar16 = (uint)uVar3;
                  (*(uint *)(gen_frame + 0x70)) = uVar16;
                  goto LAB_00c69eb0;
                }
LAB_00c69eee: ;
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
                F_00c68f7e(uVar16,(*(undefined * PTR32 *)(gen_frame + 0x64)));
              }
LAB_00c69f02: ;
              if ((*(char *)(gen_frame + 0x61)) != '\0') {
                uVar12 = -uVar12;
              }
            }
            else {
              if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                while ((uVar12 = (*(uint *)(gen_frame + 0x70)), uVar3 = (ushort)(*(uint *)(gen_frame + 0x70)), (*(uint *)(gen_frame + 0x54)) != 0x78 &&
                       ((*(uint *)(gen_frame + 0x54)) != 0x70))) {
                  if ((((*(uint *)(gen_frame + 0x70)) & 0xff00) != 0) ||
                     (iVar8 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff), iVar8 == 0)) goto LAB_00c69de5;
                  if ((*(uint *)(gen_frame + 0x54)) == 0x6f) {
                    if (0x37 < uVar3) goto LAB_00c69de5;
                    uVar16 = (*(uint *)(gen_frame + 0x40)) << 3;
                    (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) << 3 | (*(uint *)(gen_frame + 0x40)) >> 0x1d;
                  }
                  else {
                    lVar1 = (longlong)CONCAT44((*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x40))) * 10;
                    uVar16 = (uint)lVar1;
                    (*(uint *)(gen_frame + 0x44)) = (uint)((ulonglong)lVar1 >> 0x20);
                  }
LAB_00c69d99: ;
                  (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                  uVar12 = (uVar12 & 0xffff) - 0x30;
                  (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar16,uVar12);
                  (*(uint *)(gen_frame + 0x40)) = uVar16 + uVar12;
                  if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, (*(int *)(gen_frame + 0x6c)) == 0))
                  goto LAB_00c69df9;
                  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
                  wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
                }
                if ((((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) && (iVar8 = F_00c486bb((*(uint *)(gen_frame + 0x70)) & 0xff), iVar8 != 0)
                   ) {
                  uVar16 = (*(uint *)(gen_frame + 0x40)) << 4;
                  (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) << 4 | (*(uint *)(gen_frame + 0x40)) >> 0x1c;
                  uVar3 = F_00c68f3d(uVar12);
                  uVar12 = (uint)uVar3;
                  (*(uint *)(gen_frame + 0x70)) = uVar12;
                  goto LAB_00c69d99;
                }
LAB_00c69de5: ;
                (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
                F_00c68f7e(uVar12,(*(undefined * PTR32 *)(gen_frame + 0x64)));
              }
LAB_00c69df9: ;
              uVar12 = (*(uint *)(gen_frame + 0x4c));
              if ((*(char *)(gen_frame + 0x61)) != '\0') {
                bVar18 = (*(uint *)(gen_frame + 0x40)) != 0;
                (*(uint *)(gen_frame + 0x40)) = -(*(uint *)(gen_frame + 0x40));
                (*(uint *)(gen_frame + 0x44)) = -((*(uint *)(gen_frame + 0x44)) + bVar18);
              }
            }
            if ((*(uint *)(gen_frame + 0x54)) == 0x46) {
              (*(int *)(gen_frame + 0x58)) = 0;
            }
            if ((*(int *)(gen_frame + 0x58)) != 0) {
              if ((*(char *)(gen_frame + 0x69)) == '\0') {
                (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
LAB_00c69f3f: ;
                if ((*(uint *)(gen_frame + 0x3c)) == 0) {
                  if ((*(char *)(gen_frame + 0x6a)) == '\0') {
                    *(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = (wchar_t)uVar12;
                  }
                  else {
                    *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = uVar12;
                  }
                }
                else {
                  *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x40));
                  *(uint *)((*(wchar_t * PTR32 *)(gen_frame + 0x34)) + 2) = (*(uint *)(gen_frame + 0x44));
                }
              }
              goto LAB_00c69f6b;
            }
            goto LAB_00c6a013;
          }
          if (uVar12 != 0x7b) goto LAB_00c6993b;
          if ('\0' < (*(char *)(gen_frame + 0x6b))) {
            (*(char *)(gen_frame + 0x63)) = '\x01';
          }
          pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x38)) + 1;
          if (*pwVar15 == L'^') {
            pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x38)) + 2;
            (*(byte *)(gen_frame + 0x53)) = 0xff;
          }
          if ((*(undefined * PTR32 *)(gen_frame + 0x24)) == (undefined *)0x0) {
            (*(undefined * PTR32 *)(gen_frame + 0x24)) = F_00c54c2e(0x2000);
            if ((*(undefined * PTR32 *)(gen_frame + 0x24)) == (undefined *)0x0) goto LAB_00c6a013;
            (*(int *)(gen_frame + 0x1c)) = 1;
          }
          pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x24));
          F_00c48350((*(undefined * PTR32 *)(gen_frame + 0x24)),0,0x2000);
          uVar12 = (*(uint *)(gen_frame + 0x14));
          if (*pwVar15 == L']') {
            *(undefined1 *)((int)pvVar2 + 0xb) = 0x20;
            uVar12 = 0x5d;
            pwVar15 = pwVar15 + 1;
          }
LAB_00c69a82: ;
          do {
            wVar4 = *pwVar15;
            if (wVar4 == L']') goto code_r0x00c69a91;
            if ((wVar4 == L'-') && ((wchar_t)uVar12 != L'\0')) {
              wVar6 = pwVar15[1];
              if (wVar6 != L']') {
                (*(uint *)(gen_frame + 0x4c)) = (uint)(ushort)wVar6;
                if ((ushort)wVar6 <= (ushort)(wchar_t)uVar12) {
                  (*(uint *)(gen_frame + 0x4c)) = uVar12 & 0xffff;
                  uVar12 = (uint)(ushort)wVar6;
                }
                if ((ushort)uVar12 < (ushort)(*(uint *)(gen_frame + 0x4c))) {
                  uVar16 = uVar12 & 0xffff;
                  (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x4c)) - uVar12 & 0xffff;
                  do {
                    pbVar21 = ((byte *)GEN_TOP(((uVar16 >> 3) + (int)pvVar2)));
                    *pbVar21 = *pbVar21 | '\x01' << ((byte)uVar16 & 7);
                    uVar16 = uVar16 + 1;
                    (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) - 1;
                  } while ((*(uint *)(gen_frame + 0x3c)) != 0);
                }
                pbVar21 = ((byte *)GEN_TOP(((uint)(ushort)((ushort)(*(uint *)(gen_frame + 0x4c)) >> 3) + (int)pvVar2)));
                *pbVar21 = *pbVar21 | '\x01' << ((byte)(*(uint *)(gen_frame + 0x4c)) & 7);
                uVar12 = 0;
                pwVar15 = pwVar15 + 2;
                goto LAB_00c69a82;
              }
            }
            pbVar21 = ((byte *)GEN_TOP(((uint)((ushort)wVar4 >> 3) + (int)pvVar2)));
            *pbVar21 = *pbVar21 | '\x01' << ((byte)wVar4 & 7);
            uVar12 = (uint)(ushort)wVar4;
            pwVar15 = pwVar15 + 1;
          } while( true );
        }
        if (uVar12 == 0x6f) {
LAB_00c69c71: ;
          if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'-') {
            (*(char *)(gen_frame + 0x61)) = '\x01';
          }
          else if ((wchar_t)(*(uint *)(gen_frame + 0x70)) != L'+') goto LAB_00c69cc0;
          (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1;
          if (((*(int *)(gen_frame + 0x6c)) == 0) && ((*(int *)(gen_frame + 0x48)) != 0)) {
            (*(char *)(gen_frame + 0x7b)) = '\x01';
          }
          else {
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
            wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
            (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
LAB_00c69cba: ;
          }
          goto LAB_00c69cc0;
        }
        if (uVar12 == 99) {
          if ((*(int *)(gen_frame + 0x48)) == 0) {
            (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 1;
            (*(int *)(gen_frame + 0x48)) = 1;
          }
LAB_00c69824: ;
          if ('\0' < (*(char *)(gen_frame + 0x6b))) {
            (*(char *)(gen_frame + 0x63)) = '\x01';
          }
          goto LAB_00c69834;
        }
        if (uVar12 == 100) goto LAB_00c69c71;
        if (uVar12 < 0x65) {
LAB_00c6993b: ;
          if (*(*(wchar_t * PTR32 *)(gen_frame + 0x38)) == (wchar_t)(*(uint *)(gen_frame + 0x70))) {
            (*(char *)(gen_frame + 0x62)) = (*(char *)(gen_frame + 0x62)) + -1;
            if ((*(char *)(gen_frame + 0x69)) == '\0') {
              (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x18));
            }
            goto LAB_00c69f6b;
          }
          uVar19 = (undefined2)((*(uint *)(gen_frame + 0x70)) >> 0x10);
          goto LAB_00c6a00c;
        }
        if (0x67 < uVar12) {
          if (uVar12 == 0x69) {
            (*(uint *)(gen_frame + 0x54)) = 100;
            goto LAB_00c6937c;
          }
          if (uVar12 != 0x6e) goto LAB_00c6993b;
          uVar12 = (*(uint *)(gen_frame + 0x74));
          if ((*(char *)(gen_frame + 0x69)) != '\0') goto LAB_00c69f6b;
          goto LAB_00c69f3f;
        }
        iVar8 = 0;
        if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'-') {
          *(*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = L'-';
          iVar8 = 1;
LAB_00c693c0: ;
          (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1;
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
          wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
          (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
        }
        else if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == L'+') goto LAB_00c693c0;
        if ((*(int *)(gen_frame + 0x48)) == 0) {
          (*(int *)(gen_frame + 0x6c)) = -1;
        }
        if (((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) {
          do {
            iVar9 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff);
            iVar13 = (*(int *)(gen_frame + 0x6c));
            if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 == 0)) break;
            (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
            (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = (short)(char)(*(uint *)(gen_frame + 0x70));
            iVar8 = iVar8 + 1;
            uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar8,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
            if (uVar12 == 0) goto LAB_00c6a013;
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
            wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
            (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
          } while ((wVar5 & 0xff00) == 0);
        }
        iVar13 = (*(int *)(gen_frame + 0x6c));
        wVar4 = **((wchar_t * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xbc))) + 0x30)));
        if (((uint)(ushort)wVar4 == (int)(char)(*(uint *)(gen_frame + 0x70))) &&
           ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 != 0)) {
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
          wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
          (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = wVar4;
          iVar8 = iVar8 + 1;
          uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar8,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
          if (uVar12 == 0) goto LAB_00c6a013;
          if (((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) {
            do {
              iVar9 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff);
              iVar13 = (*(int *)(gen_frame + 0x6c));
              if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 == 0)) break;
              (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = (wchar_t)(*(uint *)(gen_frame + 0x70));
              iVar8 = iVar8 + 1;
              uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar8,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
              if (uVar12 == 0) goto LAB_00c6a013;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
              wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
              (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
            } while ((wVar5 & 0xff00) == 0);
          }
        }
        iVar13 = (*(int *)(gen_frame + 0x6c));
        if (((*(int *)(gen_frame + 0x58)) != 0) &&
           ((((wchar_t)(*(uint *)(gen_frame + 0x70)) == 0x65 || ((wchar_t)(*(uint *)(gen_frame + 0x70)) == 0x45)) &&
            ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 != 0)))) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = L'e';
          iVar13 = iVar8 + 1;
          uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar13,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)))
          ;
          if (uVar12 == 0) goto LAB_00c6a013;
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
          wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
          (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
          if (wVar5 == 0x2d) {
            (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar13] = L'-';
            iVar13 = iVar8 + 2;
            uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar13,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
            if (uVar12 == 0) goto LAB_00c6a013;
LAB_00c69682: ;
            iVar9 = (*(int *)(gen_frame + 0x6c));
            (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1;
            iVar8 = iVar13;
            if (iVar9 == 0) {
              (*(int *)(gen_frame + 0x6c)) = 0;
            }
            else {
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
              wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
              (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
            }
          }
          else {
            iVar8 = iVar13;
            if (wVar5 == 0x2b) goto LAB_00c69682;
          }
          if (((*(uint *)(gen_frame + 0x70)) & 0xff00) == 0) {
            do {
              iVar9 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff);
              iVar13 = (*(int *)(gen_frame + 0x6c));
              if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar13 == 0)) break;
              (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
              (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = (wchar_t)(*(uint *)(gen_frame + 0x70));
              iVar8 = iVar8 + 1;
              uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar8,((wchar_t *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x2c)));
              if (uVar12 == 0) goto LAB_00c6a013;
              (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
              wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
              (*(uint *)(gen_frame + 0x70)) = (uint)wVar5;
            } while ((wVar5 & 0xff00) == 0);
          }
        }
        (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
        F_00c68f7e((*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
        if ((*(int *)(gen_frame + 0x58)) == 0) goto LAB_00c6a013;
        if ((*(char *)(gen_frame + 0x69)) == '\0') {
          (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
          iVar13 = (*(int *)(gen_frame + 0x28)) * 2;
          _Size = iVar13 + 2;
          (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = L'\0';
          pwVar14 = F_00c54c2e(_Size);
          if (pwVar14 != (wchar_t *)0x0) {
            eVar10 = F_00c4b3d6((gen_size32 *)0x0,(char *)pwVar14,_Size,(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar13 + 1);
            if ((eVar10 != 0) && ((eVar10 == 0x16 || (eVar10 == 0x22)))) {
LAB_00c69ff2: ;
                    
              F_00c4c299(pwVar14,0,0,0,0,0);
            }
            pbVar21 = ((byte *)(gen_frame + 0x4));
            uVar19 = SUB42(pwVar14,0);
            uVar20 = (undefined2)((uint)((int)(uintptr_t)pwVar14) >> 0x10);
            iVar8 = (*(char *)(gen_frame + 0x6a)) + -1;
            pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x34));
            pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
            (*pcVar11)(iVar8,pwVar15,CONCAT22(uVar20,uVar19),pbVar21);
            F_00c4c68f(pwVar14);
            goto LAB_00c69f6b;
          }
          goto LAB_00c6a013;
        }
        goto LAB_00c69f6b;
      }
LAB_00c69f90: ;
      (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
      wVar4 = *pwVar15;
      pwVar15 = pwVar15 + 1;
      (*(uint *)(gen_frame + 0x70)) = (uint)(ushort)wVar6;
      (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar15;
      if (wVar4 == wVar6) goto LAB_00c69fbc;
LAB_00c6a000: ;
      uVar20 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x64)),0);
      uVar22 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x64))) >> 0x10);
      uVar19 = (undefined2)((*(uint *)(gen_frame + 0x70)) >> 0x10);
LAB_00c6a00c: ;
      F_00c68f7e(CONCAT22(uVar19,(wchar_t)(*(uint *)(gen_frame + 0x70))),CONCAT22(uVar22,uVar20));
LAB_00c6a013: ;
      if ((*(int *)(gen_frame + 0x1c)) == 1) {
        F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x24)));
      }
      if ((*(int *)(gen_frame + 0x2c)) == 1) {
        F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x5c)));
      }
      if ((wchar_t)(*(uint *)(gen_frame + 0x70)) == -1) {
        iVar8 = (*(int *)(gen_frame + 0x30));
        if (((*(int *)(gen_frame + 0x30)) == 0) && ((*(char *)(gen_frame + 0x62)) == '\0')) {
          iVar8 = -1;
        }
        if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c6a08f;
      }
    }
    iVar8 = (*(int *)(gen_frame + 0x30));
    if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c6a08f: ;
  F_00c47745((*(uint *)(gen_frame + 0x338)) ^ (uint)(uint)(gen_frame + 0x33c));
  return iVar8;
code_r0x00c69a91: ;
  if (*pwVar15 != L'\0') {
    (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar15;
    uVar12 = (*(uint *)(gen_frame + 0x54));
LAB_00c69834: ;
    pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x34));
    (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
    F_00c68f7e((*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
    pwVar14 = pwVar15;
    do {
      iVar8 = (*(int *)(gen_frame + 0x6c));
      if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + -1, iVar8 == 0)) goto LAB_00c69c1f;
      (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
      wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
      (*(uint *)(gen_frame + 0x70)) = (uint)(ushort)wVar4;
      if (wVar4 == L'\xffff') goto LAB_00c69c0b;
      if (uVar12 != 99) {
        if (uVar12 == 0x73) {
          if ((8 < (*(uint *)(gen_frame + 0x70))) && ((*(uint *)(gen_frame + 0x70)) < 0xe)) goto LAB_00c69c0b;
          if ((*(uint *)(gen_frame + 0x70)) != 0x20) goto LAB_00c698ec;
        }
        if ((uVar12 != 0x7b) ||
           (uVar12 = (*(uint *)(gen_frame + 0x54)),
           ((int)(char)(*((byte *)GEN_TOP(((uint)((ushort)wVar4 >> 3) + (int)(*(undefined * PTR32 *)(gen_frame + 0x24))))) ^ (*(byte *)(gen_frame + 0x53))) &
           1 << ((byte)wVar4 & 7)) == 0)) goto LAB_00c69c0b;
      }
LAB_00c698ec: ;
      if ((*(char *)(gen_frame + 0x69)) == '\0') {
        if ((*(char *)(gen_frame + 0x63)) == '\0') {
          (*(uint *)(gen_frame + 0x4c)) = 0;
          eVar10 = F_00c7af62((int *)&(*(uint *)(gen_frame + 0x4c)),(char *)pwVar15,5,wVar4);
          if (eVar10 == 0) {
            pwVar15 = (wchar_t *)((int)pwVar15 + (*(uint *)(gen_frame + 0x4c)));
            goto LAB_00c69bf8;
          }
          if ((eVar10 == 0x16) || (eVar10 == 0x22)) goto LAB_00c69ff2;
        }
        else {
          *pwVar15 = wVar4;
          pwVar15 = pwVar15 + 1;
LAB_00c69bf8: ;
          (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar15;
        }
      }
      else {
        pwVar14 = pwVar14 + 1;
      }
    } while( true );
  }
  goto LAB_00c6a013;
LAB_00c69c0b: ;
  (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) - 1;
  F_00c68f7e((uint)(ushort)wVar4,(*(undefined * PTR32 *)(gen_frame + 0x64)));
LAB_00c69c1f: ;
  if (pwVar14 == pwVar15) goto LAB_00c6a013;
  if (((*(char *)(gen_frame + 0x69)) == '\0') && ((*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1, uVar12 != 99)) {
    if ((*(char *)(gen_frame + 0x63)) == '\0') {
      *(undefined1 *)(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = 0;
    }
    else {
      *(*(wchar_t * PTR32 *)(gen_frame + 0x34)) = L'\0';
    }
  }
LAB_00c69f6b: ;
  (*(char *)(gen_frame + 0x62)) = (*(char *)(gen_frame + 0x62)) + '\x01';
  pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x38)) + 1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar15;
LAB_00c69fbc: ;
  (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar15;
  if (((wchar_t)(*(uint *)(gen_frame + 0x70)) == -1) && ((*pwVar15 != L'%' || (pwVar15[1] != L'n')))) goto LAB_00c6a013;
LAB_00c69fdf: ;
  wVar4 = *pwVar15;
  if (wVar4 == L'\0') goto LAB_00c6a013;
  goto LAB_00c6907e;
}

/* ref: ___check_float_string_00c6a09d */
uint F_00c6a09d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc6a09du, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if ((undefined *)*in_edi == param_4) {
      pvVar1 = F_00c54c73(_Count,4);
      *in_edi = pvVar1;
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi * 2);
    }
    else {
      pvVar1 = F_00c54d0d((undefined *)*in_edi,_Count,4);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: __hextodec_00c6a0f7 */
ushort F_00c6a0f7(unsigned int gen_a0)
{
  GEN_ENTER(0xc6a0f7u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  
  if ((((*(uint *)&gen_args[0]) & 0xff00) != 0) || (iVar1 = F_00c48637((*(uint *)&gen_args[0]) & 0xff), iVar1 == 0)) {
    (*(undefined2 *)((char *)&(*(uint *)&gen_args[0]) + 0)) = ((ushort)(*(uint *)&gen_args[0]) & 0xffdf) - 7;
  }
  return (ushort)(*(uint *)&gen_args[0]);
}

/* ref: FUN_00c6a12d */
uint F_00c6a12d(unsigned int gen_a0)
{
  GEN_ENTER(0xc6a12du, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  wVar1 = F_00c7d6bf(param_1);
  return CONCAT22(extraout_var,wVar1);
}

/* ref: __un_inc_00c6a138 */
uint F_00c6a138(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6a138u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  if ((ushort)param_1 != 0xffff) {
    wVar1 = F_00c7d8e0((ushort)param_1,param_2);
    return CONCAT22(extraout_var,wVar1);
  }
  return 0xffff;
}

/* ref: __whiteout_00c6a150 */
ushort F_00c6a150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6a150u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ushort _C;
  int iVar1;
  
  do {
    *in_esi = *in_esi + 1;
    _C = F_00c7d6bf(param_2);
    if (_C == 0xffff) {
      return 0xffff;
    }
    iVar1 = F_00c7db09(_C,8);
  } while (iVar1 != 0);
  return _C;
}

/* ref: __winput_s_l */
int F_00c6a182(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6a182u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x350];
  gen_size32 _Size;
  wchar_t wVar1;
  undefined * pcVar2;
  undefined * pvVar3;
  ushort uVar4;
  wchar_t wVar5;
  ushort wVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  char * _Dst;
  int eVar10;
  code * pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  wchar_t * pwVar15;
  wchar_t * pwVar16;
  bool bVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  byte * pbVar20;
  
  (*(uint *)(gen_frame + 0x348)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = _File;
  (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = param_2;
  (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = ((wchar_t *)(gen_frame + 0x8c));
  (*(int *)(gen_frame + 0x30)) = 0x15e;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x7c)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  if ((param_2 == (wchar_t *)0x0) || (_File == (undefined *)0x0)) {
    piVar7 = F_00c51f85();
    *piVar7 = 0x16;
    F_00c4c305();
    iVar8 = -1;
  }
  else {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),_Locale);
    wVar5 = *param_2;
    (*(char *)(gen_frame + 0x6a)) = '\0';
    (*(uint *)(gen_frame + 0x84)) = 0;
    (*(int *)(gen_frame + 0x38)) = 0;
    if (wVar5 != L'\0') {
      do {
        iVar8 = F_00c7db09(wVar5,8);
        uVar18 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x6c)),0);
        uVar19 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x6c))) >> 0x10);
        if (iVar8 == 0) {
          pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x48));
          if (*(*(wchar_t * PTR32 *)(gen_frame + 0x48)) == L'%') {
            if ((*(wchar_t * PTR32 *)(gen_frame + 0x48))[1] == L'%') {
              if ((*(wchar_t * PTR32 *)(gen_frame + 0x48))[1] == L'%') {
                pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x48)) + 1;
              }
              goto LAB_00c6b1e7;
            }
            (*(uint *)(gen_frame + 0x58)) = 0;
            (*(int *)(gen_frame + 0x60)) = 0;
            (*(int *)(gen_frame + 0x40)) = 0;
            (*(int *)(gen_frame + 0x74)) = 0;
            (*(gen_size32 *)(gen_frame + 0x3c)) = 0;
            (*(byte *)(gen_frame + 0x4f)) = 0;
            (*(char *)(gen_frame + 0x69)) = '\0';
            (*(char *)(gen_frame + 0x7b)) = '\0';
            (*(char *)(gen_frame + 0x8b)) = '\0';
            (*(char *)(gen_frame + 0x6b)) = '\0';
            (*(char *)(gen_frame + 0x83)) = '\0';
            (*(char *)(gen_frame + 0x73)) = '\x01';
            (*(uint *)(gen_frame + 0x5c)) = 0;
            do {
              pwVar16 = pwVar15 + 1;
              uVar13 = (uint)(ushort)*pwVar16;
              if (((*pwVar16 & 0xff00U) == 0) && (iVar8 = F_00c48637(uVar13 & 0xff), iVar8 != 0)) {
                (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) * 10 + -0x30 + uVar13;
              }
              else if (uVar13 < 0x4f) {
                if (uVar13 != 0x4e) {
                  if (uVar13 == 0x2a) {
                    (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) + '\x01';
                  }
                  else if (uVar13 != 0x46) {
                    if (uVar13 == 0x49) {
                      wVar5 = pwVar15[2];
                      if ((wVar5 == L'6') && (pwVar15[3] == L'4')) {
                        pwVar16 = pwVar15 + 3;
                        goto LAB_00c6a38f;
                      }
                      if ((wVar5 == L'3') && (pwVar15[3] == L'2')) {
                        pwVar16 = pwVar15 + 3;
                      }
                      else if ((wVar5 != L'd') &&
                              ((((wVar5 != L'i' && (wVar5 != L'o')) && (wVar5 != L'x')) &&
                               (wVar5 != L'X')))) goto LAB_00c6a3e6;
                    }
                    else if (uVar13 == 0x4c) {
                      (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + '\x01';
                    }
                    else {
LAB_00c6a3e6: ;
                      (*(char *)(gen_frame + 0x8b)) = (*(char *)(gen_frame + 0x8b)) + '\x01';
                    }
                  }
                }
              }
              else if (uVar13 == 0x68) {
                (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + -1;
                (*(char *)(gen_frame + 0x83)) = (*(char *)(gen_frame + 0x83)) + -1;
              }
              else {
                if (uVar13 == 0x6c) {
                  if (pwVar15[2] == L'l') {
                    pwVar16 = pwVar15 + 2;
LAB_00c6a38f: ;
                    (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x5c)) + 1;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = 0;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = 0;
                    (*(longlong *)(gen_frame + 0x50)) = 0;
                    goto LAB_00c6a414;
                  }
                  (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + '\x01';
                }
                else if (uVar13 != 0x77) goto LAB_00c6a3e6;
                (*(char *)(gen_frame + 0x83)) = (*(char *)(gen_frame + 0x83)) + '\x01';
              }
LAB_00c6a414: ;
              pwVar15 = pwVar16;
            } while ((*(char *)(gen_frame + 0x8b)) == '\0');
            (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar16;
            if ((*(char *)(gen_frame + 0x7b)) == '\0') {
              (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x24));
              (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x24));
              (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 4;
            }
            else {
              (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = (wchar_t *)0x0;
            }
            (*(char *)(gen_frame + 0x8b)) = '\0';
            if (((*(char *)(gen_frame + 0x83)) == '\0') &&
               ((*pwVar16 == L'S' || ((*(char *)(gen_frame + 0x83)) = '\x01', *pwVar16 == L'C')))) {
              (*(char *)(gen_frame + 0x83)) = -1;
            }
            uVar13 = (ushort)*pwVar16 | 0x20;
            (*(uint *)(gen_frame + 0x34)) = uVar13;
            if (uVar13 != 0x6e) {
              if ((uVar13 == 99) || (uVar13 == 0x7b)) {
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                uVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
              }
              else {
                uVar4 = F_00c6a150(&(*(uint *)(gen_frame + 0x84)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
              }
              (*(uint *)(gen_frame + 0x7c)) = (uint)uVar4;
              if (uVar4 == 0xffff) break;
            }
            pcVar2 = (*(undefined * PTR32 *)(gen_frame + 0x20));
            if (((*(int *)(gen_frame + 0x40)) != 0) && ((*(int *)(gen_frame + 0x74)) == 0)) goto LAB_00c6b2b2;
            if (((*(char *)(gen_frame + 0x7b)) == '\0') && (((uVar13 == 99 || (uVar13 == 0x73)) || (uVar13 == 0x7b)))) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x20));
              (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
              (*(undefined * PTR32 *)(gen_frame + 0x24)) = pcVar2 + 8;
              (*(gen_size32 *)(gen_frame + 0x3c)) = *(gen_size32 *)(pcVar2 + 4);
              if ((*(gen_size32 *)(gen_frame + 0x3c)) == 0) {
                if ((*(char *)(gen_frame + 0x83)) < '\x01') {
                  *(undefined1 *)(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = 0;
                }
                else {
                  *(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = L'\0';
                }
                piVar7 = F_00c51f85();
                *piVar7 = 0xc;
                break;
              }
            }
            if (uVar13 < 0x70) {
              if (uVar13 == 0x6f) {
LAB_00c6aeae: ;
                if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'-') {
                  (*(char *)(gen_frame + 0x69)) = '\x01';
                }
                else if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) != L'+') goto LAB_00c6aefd;
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                if (((*(int *)(gen_frame + 0x74)) == 0) && ((*(int *)(gen_frame + 0x40)) != 0)) {
                  (*(char *)(gen_frame + 0x8b)) = '\x01';
                }
                else {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
LAB_00c6aef7: ;
                }
                goto LAB_00c6aefd;
              }
              if (uVar13 == 99) {
                if ((*(int *)(gen_frame + 0x40)) == 0) {
                  (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                  (*(int *)(gen_frame + 0x40)) = 1;
                }
LAB_00c6aa44: ;
                if ('\0' < (*(char *)(gen_frame + 0x83))) {
                  (*(char *)(gen_frame + 0x6b)) = '\x01';
                }
                goto LAB_00c6aa54;
              }
              if (uVar13 == 100) goto LAB_00c6aeae;
              if (uVar13 < 0x65) {
LAB_00c6ab79: ;
                if (*(*(wchar_t * PTR32 *)(gen_frame + 0x48)) != (wchar_t)(*(uint *)(gen_frame + 0x7c))) {
                  F_00c6a138((*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(int *)(gen_frame + 0x18)) = 1;
                  break;
                }
                (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + -1;
                if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x20));
                }
              }
              else {
                if (0x67 < uVar13) {
                  if (uVar13 == 0x69) {
                    (*(uint *)(gen_frame + 0x34)) = 100;
                    uVar13 = 100;
                    goto LAB_00c6a59c;
                  }
                  if (uVar13 != 0x6e) goto LAB_00c6ab79;
                  uVar13 = (*(uint *)(gen_frame + 0x84));
                  if ((*(char *)(gen_frame + 0x7b)) != '\0') goto LAB_00c6b1c2;
                  goto LAB_00c6b196;
                }
                iVar8 = 0;
                if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'-') {
                  *(*(wchar_t * PTR32 *)(gen_frame + 0x64)) = L'-';
                  iVar8 = 1;
LAB_00c6a5e0: ;
                  (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                }
                else if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'+') goto LAB_00c6a5e0;
                if ((*(int *)(gen_frame + 0x40)) == 0) {
                  (*(int *)(gen_frame + 0x74)) = -1;
                }
                if (((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) {
                  do {
                    iVar9 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff);
                    iVar14 = (*(int *)(gen_frame + 0x74));
                    if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar14 == 0)) break;
                    (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = (short)(char)(*(uint *)(gen_frame + 0x7c));
                    iVar8 = iVar8 + 1;
                    uVar13 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar8,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                    if (uVar13 == 0) goto LAB_00c6b2c5;
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                    wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  } while ((wVar6 & 0xff00) == 0);
                }
                iVar14 = (*(int *)(gen_frame + 0x74));
                wVar5 = **((wchar_t * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xbc))) + 0x30)));
                if (((uint)(ushort)wVar5 == (int)(char)(*(uint *)(gen_frame + 0x7c))) &&
                   ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar14 != 0)) {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = wVar5;
                  iVar8 = iVar8 + 1;
                  uVar13 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar8,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                  if (uVar13 == 0) break;
                  if (((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) {
                    do {
                      iVar9 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff);
                      iVar14 = (*(int *)(gen_frame + 0x74));
                      if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar14 == 0)) break;
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = (wchar_t)(*(uint *)(gen_frame + 0x7c));
                      iVar8 = iVar8 + 1;
                      uVar13 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar8,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                      if (uVar13 == 0) goto LAB_00c6b2c5;
                      (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                    } while ((wVar6 & 0xff00) == 0);
                  }
                }
                iVar14 = (*(int *)(gen_frame + 0x74));
                if (((*(int *)(gen_frame + 0x60)) != 0) &&
                   ((((wchar_t)(*(uint *)(gen_frame + 0x7c)) == 0x65 || ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == 0x45)) &&
                    ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar14 != 0)))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = L'e';
                  iVar14 = iVar8 + 1;
                  uVar13 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar14,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                  if (uVar13 == 0) break;
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  if (wVar6 == 0x2d) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar14] = L'-';
                    iVar14 = iVar8 + 2;
                    uVar13 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar14,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                    if (uVar13 == 0) break;
LAB_00c6a8a2: ;
                    iVar9 = (*(int *)(gen_frame + 0x74));
                    (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                    iVar8 = iVar14;
                    if (iVar9 == 0) {
                      (*(int *)(gen_frame + 0x74)) = 0;
                    }
                    else {
                      (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                    }
                  }
                  else {
                    iVar8 = iVar14;
                    if (wVar6 == 0x2b) goto LAB_00c6a8a2;
                  }
                  if (((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) {
                    do {
                      iVar9 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff);
                      iVar14 = (*(int *)(gen_frame + 0x74));
                      if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar14 == 0)) break;
                      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = (wchar_t)(*(uint *)(gen_frame + 0x7c));
                      iVar8 = iVar8 + 1;
                      uVar13 = F_00c6a09d(&(*(int *)(gen_frame + 0x30)),&(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar8,((wchar_t *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x2c)));
                      if (uVar13 == 0) goto LAB_00c6b2c5;
                      (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                      (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                    } while ((wVar6 & 0xff00) == 0);
                  }
                }
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
                F_00c6a138((*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                if ((*(int *)(gen_frame + 0x60)) == 0) break;
                if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                  (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 1;
                  iVar14 = (*(int *)(gen_frame + 0x30)) * 2;
                  _Size = iVar14 + 2;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x64))[iVar8] = L'\0';
                  _Dst = F_00c54c2e(_Size);
                  if (_Dst != (char *)0x0) {
                    eVar10 = F_00c4b3d6((gen_size32 *)0x0,_Dst,_Size,(*(wchar_t * PTR32 *)(gen_frame + 0x64)),iVar14 + 1);
                    if ((eVar10 != 0) && ((eVar10 == 0x16 || (eVar10 == 0x22)))) {
                    
                      F_00c4c299(_Dst,0,0,0,0,0);
                    }
                    pbVar20 = ((byte *)(gen_frame + 0x8));
                    uVar18 = SUB42(_Dst,0);
                    uVar19 = (undefined2)((uint)((int)(uintptr_t)_Dst) >> 0x10);
                    iVar8 = (*(char *)(gen_frame + 0x73)) + -1;
                    pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x44));
                    pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
                    (*pcVar11)(iVar8,pwVar15,CONCAT22(uVar19,uVar18),pbVar20);
                    F_00c4c68f(_Dst);
                    goto LAB_00c6b1c2;
                  }
                  break;
                }
              }
            }
            else {
              if (uVar13 == 0x70) {
                (*(char *)(gen_frame + 0x73)) = '\x01';
                goto LAB_00c6aeae;
              }
              if (uVar13 == 0x73) goto LAB_00c6aa44;
              if (uVar13 == 0x75) goto LAB_00c6aeae;
              if (uVar13 != 0x78) {
                if (uVar13 != 0x7b) goto LAB_00c6ab79;
                if ('\0' < (*(char *)(gen_frame + 0x83))) {
                  (*(char *)(gen_frame + 0x6b)) = '\x01';
                }
                pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x48)) + 1;
                if ((*(wchar_t * PTR32 *)(gen_frame + 0x48))[1] == L'^') {
                  pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x48)) + 2;
                  (*(byte *)(gen_frame + 0x4f)) = 0xff;
                }
                if ((*(undefined * PTR32 *)(gen_frame + 0x28)) == (undefined *)0x0) {
                  (*(undefined * PTR32 *)(gen_frame + 0x28)) = F_00c54c2e(0x2000);
                  if ((*(undefined * PTR32 *)(gen_frame + 0x28)) == (undefined *)0x0) break;
                  (*(int *)(gen_frame + 0x1c)) = 1;
                }
                pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x28));
                F_00c48350((*(undefined * PTR32 *)(gen_frame + 0x28)),0,0x2000);
                if (*pwVar15 == L']') {
                  *(undefined1 *)((int)pvVar3 + 0xb) = 0x20;
                  uVar13 = 0x5d;
                  pwVar15 = pwVar15 + 1;
                }
                else {
                  uVar13 = 0;
                }
LAB_00c6acc1: ;
                do {
                  wVar5 = *pwVar15;
                  if (wVar5 == L']') goto code_r0x00c6acd0;
                  if ((wVar5 == L'-') && ((wchar_t)uVar13 != L'\0')) {
                    wVar1 = pwVar15[1];
                    uVar12 = (uint)(ushort)wVar1;
                    if (wVar1 != L']') {
                      (*(uint *)(gen_frame + 0x5c)) = uVar13;
                      if ((ushort)(wchar_t)uVar13 < (ushort)wVar1) {
                        (*(uint *)(gen_frame + 0x5c)) = uVar12;
                        uVar12 = uVar13;
                      }
                      if ((ushort)uVar12 < (ushort)(*(uint *)(gen_frame + 0x5c))) {
                        (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x5c)) - uVar12 & 0xffff;
                        do {
                          pbVar20 = ((byte *)GEN_TOP(((uVar12 >> 3) + (int)pvVar3)));
                          *pbVar20 = *pbVar20 | '\x01' << ((byte)uVar12 & 7);
                          uVar12 = uVar12 + 1;
                          (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) - 1;
                        } while ((*(uint *)(gen_frame + 0x58)) != 0);
                      }
                      pbVar20 = ((byte *)GEN_TOP(((uint)(ushort)((ushort)(*(uint *)(gen_frame + 0x5c)) >> 3) + (int)pvVar3)));
                      *pbVar20 = *pbVar20 | '\x01' << ((byte)(*(uint *)(gen_frame + 0x5c)) & 7);
                      uVar13 = 0;
                      pwVar15 = pwVar15 + 2;
                      goto LAB_00c6acc1;
                    }
                  }
                  pbVar20 = ((byte *)GEN_TOP(((uint)((ushort)wVar5 >> 3) + (int)pvVar3)));
                  *pbVar20 = *pbVar20 | '\x01' << ((byte)wVar5 & 7);
                  uVar13 = (uint)(ushort)wVar5;
                  pwVar15 = pwVar15 + 1;
                } while( true );
              }
LAB_00c6a59c: ;
              if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'-') {
                (*(char *)(gen_frame + 0x69)) = '\x01';
LAB_00c6acf9: ;
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1;
                if (((*(int *)(gen_frame + 0x74)) == 0) && ((*(int *)(gen_frame + 0x40)) != 0)) {
                  (*(char *)(gen_frame + 0x8b)) = '\x01';
                }
                else {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                }
              }
              else if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == L'+') goto LAB_00c6acf9;
              if ((short)(*(uint *)(gen_frame + 0x7c)) == 0x30) {
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                if ((wVar6 == 0x78) || (wVar6 == 0x58)) {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                  (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  if (((*(int *)(gen_frame + 0x40)) != 0) && ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -2, (*(int *)(gen_frame + 0x74)) < 1)) {
                    (*(char *)(gen_frame + 0x8b)) = (*(char *)(gen_frame + 0x8b)) + '\x01';
                  }
                  (*(uint *)(gen_frame + 0x34)) = 0x78;
                  uVar13 = (*(uint *)(gen_frame + 0x34));
                }
                else {
                  (*(int *)(gen_frame + 0x60)) = 1;
                  if (uVar13 == 0x78) {
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
                    F_00c6a138((uint)wVar6,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x7c)) = 0x30;
                    goto LAB_00c6aef7;
                  }
                  if (((*(int *)(gen_frame + 0x40)) != 0) && ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, (*(int *)(gen_frame + 0x74)) == 0)) {
                    (*(char *)(gen_frame + 0x8b)) = (*(char *)(gen_frame + 0x8b)) + '\x01';
                  }
                  (*(uint *)(gen_frame + 0x34)) = 0x6f;
                  uVar13 = (*(uint *)(gen_frame + 0x34));
                }
              }
LAB_00c6aefd: ;
              if ((*(uint *)(gen_frame + 0x5c)) == 0) {
                if ((*(char *)(gen_frame + 0x8b)) == '\0') {
                  while ((uVar12 = (*(uint *)(gen_frame + 0x7c)), uVar4 = (ushort)(*(uint *)(gen_frame + 0x7c)), uVar13 != 0x78 &&
                         (uVar13 != 0x70))) {
                    if ((((*(uint *)(gen_frame + 0x7c)) & 0xff00) != 0) ||
                       (iVar8 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff), iVar8 == 0)) goto LAB_00c6b13f;
                    if (uVar13 == 0x6f) {
                      if (0x37 < uVar4) goto LAB_00c6b13f;
                      (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) << 3;
                    }
                    else {
                      (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) * 10;
                    }
LAB_00c6b0fb: ;
                    (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                    (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) + -0x30 + (uVar12 & 0xffff);
                    if (((*(int *)(gen_frame + 0x40)) != 0) && ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, (*(int *)(gen_frame + 0x74)) == 0))
                    goto LAB_00c6b153;
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                    wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  }
                  if ((((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) &&
                     (iVar8 = F_00c486bb((*(uint *)(gen_frame + 0x7c)) & 0xff), iVar8 != 0)) {
                    (*(uint *)(gen_frame + 0x58)) = (*(uint *)(gen_frame + 0x58)) << 4;
                    uVar4 = F_00c6a0f7(uVar12);
                    uVar12 = (uint)uVar4;
                    (*(uint *)(gen_frame + 0x7c)) = uVar12;
                    goto LAB_00c6b0fb;
                  }
LAB_00c6b13f: ;
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
                  F_00c6a138(uVar12,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                }
LAB_00c6b153: ;
                if ((*(char *)(gen_frame + 0x69)) != '\0') {
                  (*(uint *)(gen_frame + 0x58)) = -(*(uint *)(gen_frame + 0x58));
                }
              }
              else {
                if ((*(char *)(gen_frame + 0x8b)) == '\0') {
                  while ((uVar12 = (*(uint *)(gen_frame + 0x7c)), uVar4 = (ushort)(*(uint *)(gen_frame + 0x7c)), uVar13 != 0x78 &&
                         (uVar13 != 0x70))) {
                    if ((((*(uint *)(gen_frame + 0x7c)) & 0xff00) != 0) ||
                       (iVar8 = F_00c48637((*(uint *)(gen_frame + 0x7c)) & 0xff), iVar8 == 0)) goto LAB_00c6b027;
                    if (uVar13 == 0x6f) {
                      if (0x37 < uVar4) goto LAB_00c6b027;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) << 3 | (uint)(*(longlong *)(gen_frame + 0x50)) >> 0x1d;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = (uint)(*(longlong *)(gen_frame + 0x50)) << 3;
                    }
                    else {
                      (*(longlong *)(gen_frame + 0x50)) = (*(longlong *)(gen_frame + 0x50)) * 10;
                    }
LAB_00c6afdd: ;
                    (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                    uVar12 = (uVar12 & 0xffff) - 0x30;
                    bVar17 = CARRY4((uint)(*(longlong *)(gen_frame + 0x50)),uVar12);
                    iVar8 = (uint)(*(longlong *)(gen_frame + 0x50)) + uVar12;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = iVar8;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) + ((int)uVar12 >> 0x1f) + (uint)bVar17;
                    (*(longlong *)(gen_frame + 0x50)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)),iVar8);
                    if (((*(int *)(gen_frame + 0x40)) != 0) && ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, (*(int *)(gen_frame + 0x74)) == 0))
                    goto LAB_00c6b03b;
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
                    wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
                    (*(uint *)(gen_frame + 0x7c)) = (uint)wVar6;
                  }
                  if ((((*(uint *)(gen_frame + 0x7c)) & 0xff00) == 0) &&
                     (iVar8 = F_00c486bb((*(uint *)(gen_frame + 0x7c)) & 0xff), iVar8 != 0)) {
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) << 4 | (uint)(*(longlong *)(gen_frame + 0x50)) >> 0x1c;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = (uint)(*(longlong *)(gen_frame + 0x50)) << 4;
                    uVar4 = F_00c6a0f7(uVar12);
                    uVar12 = (uint)uVar4;
                    (*(uint *)(gen_frame + 0x7c)) = uVar12;
                    goto LAB_00c6afdd;
                  }
LAB_00c6b027: ;
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
                  F_00c6a138(uVar12,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
                }
LAB_00c6b03b: ;
                if ((*(char *)(gen_frame + 0x69)) != '\0') {
                  iVar8 = -(uint)(*(longlong *)(gen_frame + 0x50));
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) = -((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)) + ((uint)(*(longlong *)(gen_frame + 0x50)) != 0));
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 0)) = iVar8;
                  (*(longlong *)(gen_frame + 0x50)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4)),iVar8);
                }
              }
              if (uVar13 == 0x46) {
                (*(int *)(gen_frame + 0x60)) = 0;
              }
              if ((*(int *)(gen_frame + 0x60)) == 0) break;
              if ((*(char *)(gen_frame + 0x7b)) == '\0') {
                (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 1;
                uVar13 = (*(uint *)(gen_frame + 0x58));
LAB_00c6b196: ;
                if ((*(uint *)(gen_frame + 0x5c)) == 0) {
                  if ((*(char *)(gen_frame + 0x73)) == '\0') {
                    *(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = (wchar_t)uVar13;
                  }
                  else {
                    *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = uVar13;
                  }
                }
                else {
                  *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = (uint)(*(longlong *)(gen_frame + 0x50));
                  *(uint *)((*(wchar_t * PTR32 *)(gen_frame + 0x44)) + 2) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x50)) + 4));
                }
              }
            }
LAB_00c6b1c2: ;
            (*(char *)(gen_frame + 0x6a)) = (*(char *)(gen_frame + 0x6a)) + '\x01';
            (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = (*(wchar_t * PTR32 *)(gen_frame + 0x48)) + 1;
          }
          else {
LAB_00c6b1e7: ;
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
            wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
            (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar15 + 1;
            (*(uint *)(gen_frame + 0x7c)) = (uint)(ushort)wVar5;
            if (*pwVar15 != wVar5) {
LAB_00c6b2b2: ;
              F_00c6a138((*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
              break;
            }
          }
          if (((wchar_t)(*(uint *)(gen_frame + 0x7c)) == -1) && ((*(*(wchar_t * PTR32 *)(gen_frame + 0x48)) != L'%' || ((*(wchar_t * PTR32 *)(gen_frame + 0x48))[1] != L'n')))) break;
        }
        else {
          (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
          uVar4 = F_00c6a150(&(*(uint *)(gen_frame + 0x84)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
          F_00c6a138((uint)uVar4,CONCAT22(uVar19,uVar18));
          pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x48));
          do {
            pwVar15 = pwVar15 + 1;
            iVar8 = F_00c7db09(*pwVar15,8);
          } while (iVar8 != 0);
          (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar15;
        }
        wVar5 = *(*(wchar_t * PTR32 *)(gen_frame + 0x48));
      } while (wVar5 != L'\0');
LAB_00c6b2c5: ;
      if ((*(int *)(gen_frame + 0x1c)) == 1) {
        F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x28)));
      }
      if ((*(int *)(gen_frame + 0x2c)) == 1) {
        F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x64)));
      }
      if ((wchar_t)(*(uint *)(gen_frame + 0x7c)) == -1) {
        iVar8 = (*(int *)(gen_frame + 0x38));
        if (((*(int *)(gen_frame + 0x38)) == 0) && ((*(char *)(gen_frame + 0x6a)) == '\0')) {
          iVar8 = -1;
        }
        if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c6b35a;
      }
      if ((*(int *)(gen_frame + 0x18)) == 1) {
        piVar7 = F_00c51f85();
        *piVar7 = 0x16;
        F_00c4c305();
      }
    }
    iVar8 = (*(int *)(gen_frame + 0x38));
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c6b35a: ;
  F_00c47745((*(uint *)(gen_frame + 0x348)) ^ (uint)(uint)(gen_frame + 0x34c));
  return iVar8;
code_r0x00c6acd0: ;
  if (*pwVar15 != L'\0') {
    (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar15;
    uVar13 = (*(uint *)(gen_frame + 0x34));
LAB_00c6aa54: ;
    pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x44));
    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
    F_00c6a138((*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x6c)));
    pwVar16 = pwVar15;
    if (uVar13 == 99) goto LAB_00c6aa7a;
LAB_00c6aa74: ;
    (*(gen_size32 *)(gen_frame + 0x3c)) = (*(gen_size32 *)(gen_frame + 0x3c)) - 1;
LAB_00c6aa7a: ;
    do {
      iVar8 = (*(int *)(gen_frame + 0x74));
      if (((*(int *)(gen_frame + 0x40)) != 0) && ((*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + -1, iVar8 == 0)) {
LAB_00c6ae5c: ;
        if (pwVar16 == pwVar15) break;
        if (((*(char *)(gen_frame + 0x7b)) == '\0') && ((*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 1, uVar13 != 99)) {
          if ((*(char *)(gen_frame + 0x6b)) == '\0') {
            *(undefined1 *)(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = 0;
          }
          else {
            *(*(wchar_t * PTR32 *)(gen_frame + 0x44)) = L'\0';
          }
        }
        goto LAB_00c6b1c2;
      }
      (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) + 1;
      wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x6c)));
      (*(uint *)(gen_frame + 0x7c)) = (uint)(ushort)wVar5;
      if (wVar5 == L'\xffff') {
LAB_00c6ae48: ;
        (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) - 1;
        F_00c6a138((uint)(ushort)wVar5,(*(undefined * PTR32 *)(gen_frame + 0x6c)));
        goto LAB_00c6ae5c;
      }
      if (uVar13 != 99) {
        if (uVar13 == 0x73) {
          if ((8 < (*(uint *)(gen_frame + 0x7c))) && ((*(uint *)(gen_frame + 0x7c)) < 0xe)) goto LAB_00c6ae48;
          if ((*(uint *)(gen_frame + 0x7c)) != 0x20) goto LAB_00c6ab17;
        }
        if ((uVar13 != 0x7b) ||
           (uVar13 = (*(uint *)(gen_frame + 0x34)),
           ((int)(char)(*((byte *)GEN_TOP(((uint)((ushort)wVar5 >> 3) + (int)(*(undefined * PTR32 *)(gen_frame + 0x28))))) ^ (*(byte *)(gen_frame + 0x4f))) &
           1 << ((byte)wVar5 & 7)) == 0)) goto LAB_00c6ae48;
      }
LAB_00c6ab17: ;
      if ((*(char *)(gen_frame + 0x7b)) == '\0') {
        if ((*(gen_size32 *)(gen_frame + 0x3c)) != 0) {
          if ((*(char *)(gen_frame + 0x6b)) != '\0') goto code_r0x00c6ab3e;
          (*(uint *)(gen_frame + 0x5c)) = 0;
          eVar10 = F_00c7af62((int *)&(*(uint *)(gen_frame + 0x5c)),(char *)pwVar15,(*(gen_size32 *)(gen_frame + 0x3c)),wVar5);
          if (eVar10 != 0x22) {
            if (0 < (int)(*(uint *)(gen_frame + 0x5c))) {
              pwVar15 = (wchar_t *)((int)pwVar15 + (*(uint *)(gen_frame + 0x5c)));
              (*(gen_size32 *)(gen_frame + 0x3c)) = (*(gen_size32 *)(gen_frame + 0x3c)) - (*(uint *)(gen_frame + 0x5c));
              (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = pwVar15;
            }
            goto LAB_00c6aa7a;
          }
        }
        piVar7 = F_00c51f85();
        *piVar7 = 0xc;
        if ((*(char *)(gen_frame + 0x6b)) == '\0') {
          *(undefined1 *)pwVar16 = 0;
        }
        else {
          *pwVar16 = L'\0';
        }
        break;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
  goto LAB_00c6b2c5;
code_r0x00c6ab3e: ;
  *pwVar15 = wVar5;
  pwVar15 = pwVar15 + 1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x44)) = pwVar15;
  goto LAB_00c6aa74;
}

/* ref: FUN_00c6b95c */
unsigned int F_00c6b95c(double gen_a0)
{
  GEN_ENTER(0xc6b95cu, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  return 0;
}

/* ref: __cintrindisp2 */
float10 F_00c6b9a0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc6b9a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_edx = (undefined4)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  undefined1 gen_out[0x4];
  float10 fVar1;
  
  fVar1 = (float10)F_00c5ec37(in_edx,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba63(fVar1,(gen_out + 0x0));
  return fVar1;
}

/* ref: __cintrindisp1 */
float10 F_00c6b9de(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc6b9deu, gen_a0, 0u, 0u, 0u);
  undefined4 in_edx = (undefined4)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  undefined1 gen_out[0x4];
  float10 fVar1;
  
  fVar1 = (float10)F_00c5ebd0(in_edx,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba63(fVar1,(gen_out + 0x0));
  return fVar1;
}

/* ref: __ctrandisp2 */
float F_00c6ba1b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6ba1bu, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined1 gen_out[0x4];
  undefined4 in_EDX = 0;
  float10 in_st0;
  float10 fVar1;
  
  F_00c6bbdd(param_1,param_2);
  F_00c6bbdd(param_3,param_4);
  F_00c5ec37(in_EDX,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba5c((gen_out + 0x0));
  return (float)fVar1;
}

/* ref: __ctrandisp1 */
float F_00c6bbaa(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6bbaau, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  undefined4 in_EDX = 0;
  float10 in_st0;
  float10 fVar1;
  
  F_00c6bbdd(param_1,param_2);
  F_00c5ebd0(in_EDX,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba5c((gen_out + 0x0));
  return (float)fVar1;
}

/* ref: __fload */
uint F_00c6bbdd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6bbddu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(*(undefined2 *)((char *)&(*(int *)&gen_args[1]) + 2))) & 0xffff7ff0;
  if ((short)uVar1 == 0x7ff0) {
    uVar1 = (*(int *)&gen_args[1]) << 0xb | (*(uint *)&gen_args[0]) >> 0x15;
  }
  return uVar1;
}

/* ref: FUN_00c6bc20 */
float10 F_00c6bc20(double gen_a0)
{
  GEN_ENTER(0xc6bc20u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  double in_xmm0;
  float10 fVar1;
  
  in_xmm0 = (double)in_st0;
  fVar1 = F_00c6bc3e(in_xmm0,(int)(ulonglong)gen_d2bits(in_xmm0),
                       (int)((ulonglong)gen_d2bits(in_xmm0) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c6bc3e */
float10 F_00c6bc3e(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6bc3eu, 0u, gen_a1, gen_a2, 0u);
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  gen_args[3] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = (ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar6 = *(double *)&REFG(undefined, 0x11231c0) * (*(double *)&gen_args[0]) + *(double *)&REFG(undefined, 0x11231a0);
    dVar7 = (*(double *)&REFG(undefined, 0x11231c8) * (*(double *)&gen_args[0]) + *(double *)&REFG(undefined, 0x11231a8)) -
            *(double *)&REFG(undefined, 0x11231a8);
    uVar1 = (uint)(ulonglong)gen_d2bits(dVar6);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar5 = ((*(double *)&gen_args[0]) - *(double *)&REFG(undefined, 0x11231d0) * (dVar6 - *(double *)&REFG(undefined, 0x11231a0))) -
            *(double *)&REFG(undefined, 0x11231e0) * (dVar6 - *(double *)&REFG(undefined, 0x11231a0));
    dVar7 = ((*(double *)&gen_args[0]) - *(double *)&REFG(undefined, 0x11231d8) * dVar7) - *(double *)&REFG(undefined, 0x11231e8) * dVar7;
    dVar6 = gen_bits2d(*(ulonglong *)(&REFG(undefined, 0x1123218) + iVar2) |
                       ((ulonglong)gen_d2bits(dVar6) & *(ulonglong *)&REFG(undefined, 0x1123180)) +
                       *(longlong *)&REFG(undefined, 0x1123190) << 0x2e);
    dVar5 = (dVar7 * dVar7) * (*(double *)&REFG(undefined, 0x1123208) + *(double *)&REFG(undefined, 0x11231f8) * dVar7) +
            ((dVar5 + *(double *)(&REFG(undefined, 0x1123210) + iVar2)) +
            ((dVar5 * dVar5) * (dVar5 * dVar5)) *
            (*(double *)&REFG(undefined, 0x1123200) + *(double *)&REFG(undefined, 0x11231f0) * dVar5));
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar5 * dVar6 + dVar6);
    }
    dVar7 = gen_bits2d(~*(ulonglong *)&REFG(undefined, 0x1123170) & (ulonglong)gen_d2bits(dVar6) |
                       (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    (*(undefined2 *)(gen_frame + 0xc)) = (undefined2)((ulonglong)gen_d2bits(dVar7) >> 0x30);
    fVar4 = (float10)dVar7;
    (*(double *)&gen_args[0]) = ((double)GEN_TOD((((float10)GEN_TOD(gen_bits2d((ulonglong)
                                           ((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34
                                          ))) * (fVar4 + (float10)dVar5 * fVar4))));
    if (((ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0x7ff0000000000000) != 0) goto LAB_00c6be32;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = (*(uint *)&gen_args[3]) & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)(gen_bits2d(CONCAT44((*(uint *)&gen_args[3]),(*(int *)&gen_args[2]))) + *(double *)&REFG(undefined, 0x1123610));
    }
    if (uVar1 < 0x7ff00000) {
      if ((*(uint *)&gen_args[3]) < 0x80000000) {
        (*(double *)&gen_args[0]) = REFG(undefined8, 0x1123640) * REFG(undefined8, 0x1123640);
        uVar3 = 0xe;
      }
      else {
        (*(double *)&gen_args[0]) = REFG(undefined8, 0x1123648) * REFG(undefined8, 0x1123648);
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && ((*(int *)&gen_args[2]) == 0)) {
        if ((*(uint *)&gen_args[3]) != 0x7ff00000) {
          return (float10)*(double *)&REFG(undefined, 0x1123638);
        }
        return (float10)*(double *)&REFG(undefined, 0x1123630);
      }
      uVar3 = 0x3ea;
    }
  }
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(ulonglong)gen_d2bits((*(double *)&gen_args[0]));
  (*(undefined6 *)(gen_frame + 0x6)) = (undefined6)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x10);
  F_00c6bf0e(&(*(int *)&gen_args[2]),&(*(int *)&gen_args[2]),&(*(undefined2 *)(gen_frame + 0x4)),uVar3);
  (*(double *)&gen_args[0]) = gen_bits2d(CONCAT62((*(undefined6 *)(gen_frame + 0x6)),(*(undefined2 *)(gen_frame + 0x4))));
LAB_00c6be32: ;
  return (float10)(*(double *)&gen_args[0]);
}

/* ref: FUN_00c6c2de */
float10 F_00c6c2de(double gen_a0, double gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6c2deu, 0u, 0u, gen_a2, gen_a3);
  unsigned int gen_args[6];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[2], &gen_a1, sizeof gen_a1);
  gen_args[4] = gen_a2;
  gen_args[5] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = (uint)(ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x34);
    dVar7 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) &
                       (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123720)) |
                       (ulonglong)gen_d2bits(REFG(undefined8, 0x1123780)));
    dVar8 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x1123728) |
                       (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123788)));
    uVar1 = (ushort)(ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123730) + dVar7) & 0x7f0;
    dVar12 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x1123748) & (ulonglong)gen_d2bits(dVar8));
    dVar10 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x1123740) & (ulonglong)gen_d2bits(dVar7)) *
             *(double *)(&REFG(undefined, 0x1123800) + uVar1) - REFG(undefined8, 0x1123780);
    dVar7 = (dVar7 - gen_bits2d(*(ulonglong *)&REFG(undefined, 0x1123740) & (ulonglong)gen_d2bits(dVar7))) *
            *(double *)(&REFG(undefined, 0x1123800) + uVar1);
    dVar9 = (dVar8 - dVar12) * *(double *)(&REFG(undefined, 0x1123808) + uVar1);
    dVar8 = dVar7 + dVar10;
    dVar12 = dVar9 + (dVar12 * *(double *)(&REFG(undefined, 0x1123808) + uVar1) - *(double *)&REFG(undefined, 0x1123788));
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      (*(double *)(gen_frame + 0x4)) = ((((*(double *)&REFG(undefined, 0x11237d0) * dVar8 + *(double *)&REFG(undefined, 0x11237e0)) * dVar8 +
                  *(double *)&REFG(undefined, 0x11237f0)) * (((dVar8 * dVar8) * (dVar8 * dVar8)) * dVar8) +
                 ((*(double *)&REFG(undefined, 0x11237d8) * dVar12 + *(double *)&REFG(undefined, 0x11237e8)) * dVar12 +
                 *(double *)&REFG(undefined, 0x11237f8)) * (dVar12 * dVar12)) +
                ((*(double *)(&REFG(undefined, 0x1123c18) + uVar1) + dVar11 * *(double *)&REFG(undefined, 0x1123758)) +
                gen_bits2d((ulonglong)gen_d2bits(dVar9) & *(ulonglong *)(&REFG(undefined, 0x1123768) + iVar5)))) +
                (((*(double *)(&REFG(undefined, 0x1123c10) + uVar1) + dVar10) + dVar11 * *(double *)&REFG(undefined, 0x1123750))
                + gen_bits2d((ulonglong)gen_d2bits(dVar7) & *(ulonglong *)(&REFG(undefined, 0x1123760) + iVar5)));
      return (float10)(*(double *)(gen_frame + 0x4));
    }
    (*(double *)(gen_frame + 0x4)) = gen_bits2d(-(ulonglong)
                          (*(double *)&REFG(undefined, 0x1123790) == gen_bits2d(CONCAT44((*(uint *)&gen_args[5]),(*(int *)&gen_args[4])))));
    if ((short)(ulonglong)gen_d2bits((*(double *)(gen_frame + 0x4))) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (REFG(undefined8, 0x1123780) ==
            gen_bits2d(CONCAT44((*(uint *)&gen_args[5]),(*(int *)&gen_args[4])) & (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123720)) |
                       (ulonglong)gen_d2bits(REFG(undefined8, 0x1123780)))) {
          return (float10)*(double *)&REFG(undefined, 0x11237b8);
        }
        uVar6 = 1000;
        (*(double *)(gen_frame + 0x4)) = *(double *)&REFG(undefined, 0x1123720);
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) || ((*(int *)&gen_args[4]) == 0 && ((*(uint *)&gen_args[5]) & 0xfffff) == 0)) {
        (*(double *)(gen_frame + 0x4)) = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_00c6c4d2;
    }
    (*(double *)&gen_args[0]) = gen_bits2d(CONCAT44((*(uint *)&gen_args[5]),(*(int *)&gen_args[4]))) * REFG(undefined8, 0x11237a0);
    iVar4 = -0x34;
  }
  uVar6 = 2;
  (*(double *)(gen_frame + 0x4)) = REFG(undefined8, 0x11237b0);
LAB_00c6c4d2: ;
  F_00c6bf0e(&(*(int *)&gen_args[4]),&(*(int *)&gen_args[4]),&(*(double *)(gen_frame + 0x4)),uVar6);
  return (float10)(*(double *)(gen_frame + 0x4));
}

/* ref: FUN_00c6c54e */
float10 F_00c6c54e(double gen_a0, double gen_a1, double gen_a2, double gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc6c54eu, 0u, 0u, 0u, 0u);
  double in_xmm0 = (double)gen_a0;
  double in_xmm3 = (double)gen_a1;
  double in_xmm5 = (double)gen_a2;
  double in_xmm6 = (double)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  ushort uVar2;
  float10 extraout_ST0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar2 = ((ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x30) & 0x7fff) + 0xc7e0;
  if (uVar2 < 0x8a9) {
    dVar10 = (*(double *)&REFG(undefined, 0x1125620) * in_xmm0 + *(double *)&REFG(undefined, 0x1125630)) -
             *(double *)&REFG(undefined, 0x1125630);
    dVar11 = (*(double *)&REFG(undefined, 0x1125628) * in_xmm0 + *(double *)&REFG(undefined, 0x1125638)) -
             *(double *)&REFG(undefined, 0x1125638);
    dVar3 = in_xmm0 - *(double *)&REFG(undefined, 0x1125640) * dVar10;
    dVar7 = in_xmm0 - *(double *)&REFG(undefined, 0x1125648) * dVar11;
    dVar4 = dVar3 - *(double *)&REFG(undefined, 0x1125650) * dVar10;
    dVar8 = dVar7 - *(double *)&REFG(undefined, 0x1125658) * dVar11;
    iVar1 = ((int)ROUND(*(double *)&REFG(undefined, 0x1125620) * in_xmm0) + 0x72900U & 0x1f) * 0xb0;
    dVar15 = gen_bits2d((ulonglong)gen_d2bits(REFG(undefined8, 0x1125670) * dVar10 + dVar3) &
                        *(ulonglong *)&REFG(undefined, 0x1125680));
    dVar16 = REFG(undefined8, 0x1125678) / dVar15;
    dVar5 = dVar8 * dVar8;
    dVar9 = dVar8 * dVar8;
    dVar6 = dVar5 * dVar5;
    dVar13 = dVar8 * *(double *)(&REFG(undefined, 0x11240b0) + iVar1) + dVar8 * *(double *)(&REFG(undefined, 0x11240b8) + iVar1)
    ;
    dVar12 = gen_bits2d(*(ulonglong *)(&REFG(undefined, 0x11240c8) + iVar1) & (ulonglong)gen_d2bits(dVar16)) -
             *(double *)(&REFG(undefined, 0x11240a0) + iVar1);
    dVar14 = dVar13 - dVar12;
    return ((float10)GEN_TOD(((((((dVar6 * dVar6) *
                         ((((*(double *)(&REFG(undefined, 0x1124030) + iVar1) * dVar8 +
                            *(double *)(&REFG(undefined, 0x1124020) + iVar1)) +
                           (*(double *)(&REFG(undefined, 0x1124050) + iVar1) * dVar8 +
                           *(double *)(&REFG(undefined, 0x1124040) + iVar1)) * dVar5) +
                          *(double *)(&REFG(undefined, 0x1124060) + iVar1) * dVar6) +
                         ((*(double *)(&REFG(undefined, 0x1124080) + iVar1) * dVar8 +
                          *(double *)(&REFG(undefined, 0x1124070) + iVar1)) +
                         *(double *)(&REFG(undefined, 0x1124090) + iVar1) * dVar5) * (dVar8 * dVar6)) +
                        ((((*(double *)(&REFG(undefined, 0x1124038) + iVar1) * dVar8 +
                           *(double *)(&REFG(undefined, 0x1124028) + iVar1)) +
                          (*(double *)(&REFG(undefined, 0x1124058) + iVar1) * dVar8 +
                          *(double *)(&REFG(undefined, 0x1124048) + iVar1)) * dVar9) +
                         *(double *)(&REFG(undefined, 0x1124068) + iVar1) * (dVar9 * dVar9)) +
                        ((*(double *)(&REFG(undefined, 0x1124088) + iVar1) * dVar8 +
                         *(double *)(&REFG(undefined, 0x1124078) + iVar1)) +
                        *(double *)(&REFG(undefined, 0x1124098) + iVar1) * dVar9) * (dVar8 * (dVar9 * dVar9)))) +
                       (((*(double *)(&REFG(undefined, 0x11240b0) + iVar1) + *(double *)(&REFG(undefined, 0x11240b8) + iVar1)) *
                         (((dVar7 - dVar8) - *(double *)&REFG(undefined, 0x1125658) * dVar11) -
                         dVar11 * *(double *)&REFG(undefined, 0x1125668)) + *(double *)(&REFG(undefined, 0x11240a8) + iVar1)) +
                       (dVar8 * *(double *)(&REFG(undefined, 0x11240b8) + iVar1) +
                       (dVar8 * *(double *)(&REFG(undefined, 0x11240b0) + iVar1) - dVar13)))) +
                      (dVar13 - (dVar12 + dVar14))) -
                     ((REFG(undefined8, 0x1125678) -
                      dVar15 * gen_bits2d(*(ulonglong *)(&REFG(undefined, 0x11240c8) + iVar1) &
                                          (ulonglong)gen_d2bits(dVar16))) -
                     ((((dVar3 - dVar4) - *(double *)&REFG(undefined, 0x1125650) * dVar10) -
                      dVar10 * *(double *)&REFG(undefined, 0x1125660)) + (dVar4 - dVar15)) * dVar16) *
                     (dVar16 * *(double *)(&REFG(undefined, 0x11240c0) + iVar1))) + dVar14)));
  }
  if ((short)uVar2 < 0x8a9) {
    return ((float10)GEN_TOD(((REFG(undefined8, 0x1125698) * in_xmm0 + in_xmm0) * *(double *)&REFG(undefined, 0x11256a0))));
  }
  F_00c4d5df(param_5);
  return extraout_ST0;
}

/* ref: __wfullpath */
wchar_t * F_00c6c790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6c790u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _FullPath = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Path = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 _SizeInWords = (gen_size32)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  DWORD DVar1;
  int * piVar2;
  wchar_t * pwVar3;
  
  if ((_Path == (wchar_t *)0x0) || (*_Path == L'\0')) {
    pwVar3 = F_00c7dcbc(_FullPath,_SizeInWords);
    return pwVar3;
  }
  if (_FullPath == (wchar_t *)0x0) {
    DVar1 = gen_imp_GetFullPathNameW(_Path,0,0,0);
    if (DVar1 == 0) goto LAB_00c6c7c4;
    if (_SizeInWords <= DVar1) {
      _SizeInWords = DVar1;
    }
    if (0x7fffffff < _SizeInWords) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      return (wchar_t *)0x0;
    }
    pwVar3 = F_00c645f4(_SizeInWords,2);
    if (pwVar3 == (wchar_t *)0x0) {
      piVar2 = F_00c51f85();
      *piVar2 = 0xc;
      return (wchar_t *)0x0;
    }
  }
  else {
    pwVar3 = _FullPath;
    if (_SizeInWords == 0) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
      return (wchar_t *)0x0;
    }
  }
  DVar1 = gen_imp_GetFullPathNameW(_Path,_SizeInWords,pwVar3,((undefined1 *)(gen_frame + 0x8)));
  if (_SizeInWords <= DVar1) {
    if (_FullPath == (wchar_t *)0x0) {
      F_00c4c68f(pwVar3);
    }
    piVar2 = F_00c51f85();
    *piVar2 = 0x22;
    return (wchar_t *)0x0;
  }
  if (DVar1 != 0) {
    return pwVar3;
  }
  if (_FullPath == (wchar_t *)0x0) {
    F_00c4c68f(pwVar3);
  }
LAB_00c6c7c4: ;
  DVar1 = gen_imp_GetLastError();
  F_00c51fab(DVar1);
  return (wchar_t *)0x0;
}

/* ref: ___wdtoxmode */
ushort F_00c6c88b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6c88bu, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t wVar1;
  wchar_t * pwVar2;
  int iVar3;
  uint uVar4;
  
  pwVar2 = param_2;
  if (param_2[1] == L':') {
    pwVar2 = param_2 + 2;
  }
  wVar1 = *pwVar2;
  if ((((wVar1 == L'\\') || (wVar1 == L'/')) && (pwVar2[1] == L'\0')) ||
     (((param_1 & 0x10) != 0 || (uVar4 = 0x8000, wVar1 == L'\0')))) {
    uVar4 = 0x4040;
  }
  uVar4 = uVar4 | ~((param_1 & 0xff) << 7) & 0x80 | 0x100;
  pwVar2 = F_00c7dedd(param_2,L'.');
  if (pwVar2 != (wchar_t *)0x0) {
    iVar3 = F_00c7de52(pwVar2,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x11256e4)))));
    if (iVar3 != 0) {
      iVar3 = F_00c7de52(pwVar2,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x11256d8)))));
      if (iVar3 != 0) {
        iVar3 = F_00c7de52(pwVar2,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x11256cc)))));
        if (iVar3 != 0) {
          iVar3 = F_00c7de52(pwVar2,((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x11256c0)))));
          if (iVar3 != 0) goto LAB_00c6c934;
        }
      }
    }
    uVar4 = uVar4 | 0x40;
  }
LAB_00c6c934: ;
  return (ushort)(uVar4 >> 6) & 7 | (ushort)uVar4 | (ushort)(uVar4 >> 3) & 0x38;
}

/* ref: _IsRootUNCName_00c6c94c */
uint F_00c6c94c(unsigned int gen_a0)
{
  GEN_ENTER(0xc6c94cu, gen_a0, 0u, 0u, 0u);
  wchar_t * in_esi = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 sVar1;
  wchar_t * pwVar2;
  wchar_t wVar3;
  
  sVar1 = F_00c68ec8(in_esi);
  if ((((4 < sVar1) && ((*in_esi == L'\\' || (*in_esi == L'/')))) &&
      ((in_esi[1] == L'\\' || (in_esi[1] == L'/')))) &&
     ((in_esi[2] != L'\\' && (in_esi[2] != L'/')))) {
    pwVar2 = in_esi + 3;
    wVar3 = *pwVar2;
    if (wVar3 != L'\0') {
      do {
        if ((wVar3 == L'\\') || (wVar3 == L'/')) break;
        pwVar2 = pwVar2 + 1;
        wVar3 = *pwVar2;
      } while (wVar3 != L'\0');
      if ((*pwVar2 != L'\0') && (pwVar2 = pwVar2 + 1, *pwVar2 != L'\0')) {
        wVar3 = *pwVar2;
        if (wVar3 != L'\0') {
          do {
            if ((wVar3 == L'\\') || (wVar3 == L'/')) break;
            pwVar2 = pwVar2 + 1;
            wVar3 = *pwVar2;
          } while (wVar3 != L'\0');
          if ((*pwVar2 != L'\0') && (pwVar2[1] != L'\0')) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: __wfullpath_helper_00c6c9e9 */
uint F_00c6c9e9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6c9e9u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  wchar_t * pwVar3;
  
  piVar2 = F_00c51f85();
  iVar1 = *piVar2;
  piVar2 = F_00c51f85();
  *piVar2 = 0;
  pwVar3 = F_00c6c790(param_1,param_2,param_3);
  piVar2 = F_00c51f85();
  if (pwVar3 == (wchar_t *)0x0) {
    if (*piVar2 == 0x22) {
      piVar2 = F_00c51f85();
      *piVar2 = iVar1;
      pwVar3 = F_00c6c790((wchar_t *)0x0,param_2,0);
      *param_4 = pwVar3;
    }
    else {
      pwVar3 = (wchar_t *)0x0;
    }
  }
  else {
    *piVar2 = iVar1;
  }
  return (uint)pwVar3;
}

/* ref: __wstat32 */
int F_00c6ca49(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6ca49u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Name = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Stat = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x490];
  ushort wVar1;
  ushort uVar2;
  ulong * puVar3;
  int * piVar4;
  wchar_t * pwVar5;
  int iVar6;
  gen_size32 sVar7;
  uint uVar8;
  UINT UVar9;
  int _Var10;
  int eVar11;
  BOOL BVar12;
  DWORD DVar13;
  
  (*(uint *)(gen_frame + 0x488)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48c);
  (*(_FILETIME *)(gen_frame + 0x14)).dwHighDateTime = (DWORD)_Name;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if ((_Name == (wchar_t *)0x0) || (_Stat == (undefined *)0x0)) {
    puVar3 = F_00c51f98();
    *puVar3 = 0;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
  }
  else {
    pwVar5 = F_00c6d663(_Name,L"?*");
    if (pwVar5 == (wchar_t *)0x0) {
      if (_Name[1] == L':') {
        if ((*_Name != L'\0') && (_Name[2] == L'\0')) goto LAB_00c6caaa;
        wVar1 = F_00c6d650(*_Name);
        iVar6 = wVar1 - 0x60;
      }
      else {
        iVar6 = F_00c6d446();
      }
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = gen_imp_FindFirstFileExW(_Name,FindExInfoStandard,&(*(uint *)(gen_frame + 0x20)),FindExSearchNameMatch,
                                   (LPVOID)0x0,0);
      if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) == (HANDLE)0xffffffff) {
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
        pwVar5 = F_00c6d663(_Name,L"./\\");
        if (pwVar5 != (wchar_t *)0x0) {
          pwVar5 = (wchar_t *)F_00c6c9e9(((undefined1 *)(gen_frame + 0x280)),_Name,0x104,&(*(undefined * PTR32 *)(gen_frame + 0x1c)));
          if (pwVar5 != (wchar_t *)0x0) {
            sVar7 = F_00c68ec8(pwVar5);
            if (sVar7 != 3) {
              uVar8 = F_00c6c94c(pwVar5);
              if (uVar8 == 0) goto LAB_00c6cbc7;
            }
            UVar9 = gen_imp_GetDriveTypeW(pwVar5);
            if (1 < UVar9) {
              if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0x0) {
                F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x1c)));
              }
              (*(uint *)(gen_frame + 0x20)) = 0x10;
              (*(int *)(gen_frame + 0x3c)) = 0;
              (*(long *)(gen_frame + 0x40)) = 0;
              (*(undefined2 *)(gen_frame + 0x4c)) = 0;
              _Var10 = F_00c7e237(0x7bc,1,1,0,0,0,-1);
              (*(long *)(((char *)(_Stat) + 28))) = _Var10;
              (*(long *)(((char *)(_Stat) + 24))) = _Var10;
              (*(long *)(((char *)(_Stat) + 32))) = _Var10;
              _Name = ((wchar_t *)GEN_TOP((*(_FILETIME *)(gen_frame + 0x14)).dwHighDateTime));
LAB_00c6cdf9: ;
              uVar2 = F_00c6c88b((*(uint *)(gen_frame + 0x20)),_Name);
              (*(ushort *)(((char *)(_Stat) + 6))) = uVar2;
              (*(short *)(((char *)(_Stat) + 8))) = 1;
              (*(long *)(((char *)(_Stat) + 20))) = (*(long *)(gen_frame + 0x40));
              if ((*(int *)(gen_frame + 0x3c)) != 0) {
                (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
                (*(long *)(((char *)(_Stat) + 20))) = 0;
              }
              (*(ushort *)(((char *)(_Stat) + 4))) = 0;
              (*(short *)(((char *)(_Stat) + 12))) = 0;
              (*(short *)(((char *)(_Stat) + 10))) = 0;
              (*(uint *)((char *)(_Stat))) = iVar6 - 1U;
              (*(uint *)(((char *)(_Stat) + 16))) = iVar6 - 1U;
              goto LAB_00c6ce6b;
            }
          }
LAB_00c6cbc7: ;
          if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0x0) {
            F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x1c)));
          }
        }
      }
      else {
        if ((((*(uint *)(gen_frame + 0x20)) & 0x400) == 0) || ((*(int *)(gen_frame + 0x44)) != -0x5ffffff4)) {
          if (((*(FILETIME *)(gen_frame + 0x34)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x34)).dwHighDateTime == 0)) {
            (*(long *)(((char *)(_Stat) + 28))) = 0;
LAB_00c6ccd9: ;
            if (((*(FILETIME *)(gen_frame + 0x2c)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x2c)).dwHighDateTime == 0)) {
              _Var10 = (*(long *)(((char *)(_Stat) + 28)));
LAB_00c6cd60: ;
              (*(long *)(((char *)(_Stat) + 24))) = _Var10;
              if (((*(FILETIME *)(gen_frame + 0x24)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x24)).dwHighDateTime == 0)) {
                _Var10 = (*(long *)(((char *)(_Stat) + 28)));
LAB_00c6cdea: ;
                (*(long *)(((char *)(_Stat) + 32))) = _Var10;
                gen_imp_FindClose((*(undefined * PTR32 *)(gen_frame + 0x1c)));
                goto LAB_00c6cdf9;
              }
              BVar12 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x24)),&(*(_FILETIME *)(gen_frame + 0x14)));
              if (BVar12 != 0) {
                BVar12 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x14)),&(*(_SYSTEMTIME *)(gen_frame + 0x270)));
                if (BVar12 != 0) {
                  _Var10 = F_00c7e237((uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMonth,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wDay,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wHour,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wSecond,-1);
                  goto LAB_00c6cdea;
                }
              }
            }
            else {
              BVar12 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x2c)),&(*(_FILETIME *)(gen_frame + 0x14)));
              if (BVar12 != 0) {
                BVar12 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x14)),&(*(_SYSTEMTIME *)(gen_frame + 0x270)));
                if (BVar12 != 0) {
                  _Var10 = F_00c7e237((uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMonth,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wDay,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wHour,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wSecond,-1);
                  goto LAB_00c6cd60;
                }
              }
            }
          }
          else {
            BVar12 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x34)),&(*(_FILETIME *)(gen_frame + 0x14)));
            if (BVar12 != 0) {
              BVar12 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x14)),&(*(_SYSTEMTIME *)(gen_frame + 0x270)));
              if (BVar12 != 0) {
                _Var10 = F_00c7e237((uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMonth,
                                          (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wDay,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wHour,
                                          (uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x270)).wSecond,-1);
                (*(long *)(((char *)(_Stat) + 28))) = _Var10;
                goto LAB_00c6ccd9;
              }
            }
          }
          DVar13 = gen_imp_GetLastError();
          F_00c51fab(DVar13);
          gen_imp_FindClose((*(undefined * PTR32 *)(gen_frame + 0x1c)));
          goto LAB_00c6ce68;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0xffffffff;
        eVar11 = F_00c4ece4((int *)&(*(undefined * PTR32 *)(gen_frame + 0x1c)),_Name,0,0x40,0);
        if ((eVar11 == 0) && ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0xffffffff)) {
          (*(uint *)(gen_frame + 0xc)) = F_00c7df0b((*(undefined * PTR32 *)(gen_frame + 0x1c)),_Stat);
          F_00c4e08e((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)));
          goto LAB_00c6ce6b;
        }
      }
    }
LAB_00c6caaa: ;
    piVar4 = F_00c51f85();
    *piVar4 = 2;
    puVar3 = F_00c51f98();
    *puVar3 = 2;
  }
LAB_00c6ce68: ;
  (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
LAB_00c6ce6b: ;
  F_00c47745((*(uint *)(gen_frame + 0x488)) ^ (uint)(uint)(gen_frame + 0x48c));
  return (*(uint *)(gen_frame + 0xc));
}

/* ref: __fstat64 */
uint F_00c6ce7a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6ce7au, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x8c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x84);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  ushort uVar2;
  ulong * puVar3;
  int * piVar4;
  uint uVar5;
  DWORD DVar6;
  BOOL BVar7;
  undefined2 uVar8;
  int iVar9;
  __time64_t _Var10;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  uVar5 = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x7c)) = 0x68;
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = &REFG(undefined, 0x12f6690);
  (*(undefined4 *)(gen_frame + 0x74)) = 0xc6ce86;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    puVar3 = F_00c51f98();
    *puVar3 = 0;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
  }
  else {
    F_00c48350((*(uint * PTR32 *)&gen_args[1]),0,0x38);
    if (uVar5 == 0xfffffffe) {
      puVar3 = F_00c51f98();
      *puVar3 = 0;
      piVar4 = F_00c51f85();
      *piVar4 = 9;
      goto LAB_00c6cf5a;
    }
    if ((-1 < (int)uVar5) && (uVar5 < REFG(undefined4, 0x15e4190))) {
      (*(int * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined4, 0x15e41a0) + ((int)uVar5 >> 5);
      iVar9 = (uVar5 & 0x1f) * 0x40;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)uVar5 >> 5] + 4 + iVar9))) & 1) != 0) {
        F_00c6d817((*(uint *)(gen_frame + 0x10)));
        (*(undefined * PTR32 *)(gen_frame + 0x78)) = (undefined *)0x0;
        if ((*(byte *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 4 + iVar9) & 1) == 0) {
LAB_00c6cf3c: ;
          piVar4 = F_00c51f85();
          *piVar4 = 9;
LAB_00c6cf47: ;
          (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
        }
        else {
          DVar6 = gen_imp_GetFileType(*(HANDLE *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + iVar9));
          uVar5 = DVar6 & 0xffff7fff;
          if (uVar5 == 1) {
            *(undefined2 *)((int)puVar1 + 6) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *(undefined2 *)((int)puVar1 + 10) = 0;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 2) = 1;
            BVar7 = gen_imp_GetFileInformationByHandle(*(HANDLE *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + iVar9),((undefined *)(gen_frame + 0x1c)));
            if (BVar7 == 0) {
LAB_00c6cf85: ;
              DVar6 = gen_imp_GetLastError();
              F_00c51fab(DVar6);
              goto LAB_00c6cf47;
            }
            if (((byte)(*(DWORD *)((char *)((undefined *)(gen_frame + 0x1c)))) & 1) == 0) {
              uVar2 = *(ushort *)((int)puVar1 + 6) | 0x1b6;
            }
            else {
              uVar2 = *(ushort *)((int)puVar1 + 6) | 0x124;
            }
            *(ushort *)((int)puVar1 + 6) = uVar2;
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 20))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x1c)) + 20) + 4))))) == 0)) {
              puVar1[10] = 0;
              puVar1[0xb] = 0;
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x1c)) + 20))),&(*(_FILETIME *)(gen_frame + 0x8)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),((_SYSTEMTIME *)(gen_frame + 0x50))), BVar7 == 0))
              goto LAB_00c6cf47;
              _Var10 = F_00c6d1df((uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMonth,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wHour,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wSecond,-1);
              *(__time64_t *)(puVar1 + 10) = _Var10;
            }
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 12))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x1c)) + 12) + 4))))) == 0)) {
              puVar1[8] = puVar1[10];
              puVar1[9] = puVar1[0xb];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x1c)) + 12))),&(*(_FILETIME *)(gen_frame + 0x8)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),((_SYSTEMTIME *)(gen_frame + 0x50))), BVar7 == 0))
              goto LAB_00c6cf47;
              _Var10 = F_00c6d1df((uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMonth,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wHour,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wSecond,-1);
              *(__time64_t *)(puVar1 + 8) = _Var10;
            }
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 4))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x1c)) + 4) + 4))))) == 0)) {
              puVar1[0xc] = puVar1[10];
              puVar1[0xd] = puVar1[0xb];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x1c)) + 4))),&(*(_FILETIME *)(gen_frame + 0x8)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),((_SYSTEMTIME *)(gen_frame + 0x50))), BVar7 == 0))
              goto LAB_00c6cf47;
              _Var10 = F_00c6d1df((uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMonth,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wHour,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x50))[0].wSecond,-1);
              *(__time64_t *)(puVar1 + 0xc) = _Var10;
            }
            puVar1[6] = (*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 36)));
            puVar1[7] = (*(DWORD *)(((char *)((undefined *)(gen_frame + 0x1c)) + 32)));
            *(ushort *)((int)puVar1 + 6) = *(ushort *)((int)puVar1 + 6) | 0x8000;
            *puVar1 = 0;
            puVar1[4] = 0;
          }
          else {
            if (uVar5 == 2) {
              uVar8 = 0x2000;
            }
            else {
              if (uVar5 != 3) {
                if (uVar5 != 0) goto LAB_00c6cf85;
                goto LAB_00c6cf3c;
              }
              uVar8 = 0x1000;
            }
            *(undefined2 *)((int)puVar1 + 6) = uVar8;
            *puVar1 = (*(uint *)(gen_frame + 0x10));
            puVar1[4] = (*(uint *)(gen_frame + 0x10));
            *(undefined2 *)(puVar1 + 2) = 1;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *(undefined2 *)((int)puVar1 + 10) = 0;
            puVar1[0xc] = 0;
            puVar1[0xd] = 0;
            puVar1[10] = 0;
            puVar1[0xb] = 0;
            puVar1[8] = 0;
            puVar1[9] = 0;
            if ((uVar5 == 2) ||
               (BVar7 = gen_imp_PeekNamedPipe(*(HANDLE *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + iVar9),(LPVOID)0x0,0,(LPDWORD)0x0,
                                      (LPDWORD)&(*(int * PTR32 *)(gen_frame + 0x14)),(LPDWORD)0x0), BVar7 == 0)) {
              puVar1[6] = 0;
              puVar1[7] = 0;
            }
            else {
              puVar1[6] = (uint)(*(int * PTR32 *)(gen_frame + 0x14));
              puVar1[7] = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x14))) >> 0x1f;
            }
          }
        }
        (*(undefined * PTR32 *)(gen_frame + 0x78)) = (undefined *)0xfffffffe;
        F_00c6d1d5((gen_frame + 0x7c));
        goto LAB_00c6cf5a;
      }
    }
    puVar3 = F_00c51f98();
    *puVar3 = 0;
    piVar4 = F_00c51f85();
    *piVar4 = 9;
  }
  F_00c4c305();
LAB_00c6cf5a: ;
  uVar5 = F_00c7e488((gen_frame + 0x7c));
  return uVar5;
}

/* ref: FUN_00c6d1d5 */
unsigned int F_00c6d1d5(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d1d5u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + -0x6c));
  return 0;
}

/* ref: ___loctotime64_t */
__time64_t F_00c6d1df(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc6d1dfu, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  longlong lVar1;
  uint uVar2;
  int eVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar6 = param_1 - 0x76c;
  (*(int *)(gen_frame + 0x14)) = param_2;
  (*(long *)(gen_frame + 0x18)) = 0;
  (*(long *)(gen_frame + 0x10)) = 0;
  (*(long *)(gen_frame + 0xc)) = 0;
  if ((((((int)uVar6 < 0x46) || (0x44c < (int)uVar6)) || (0xb < param_2 - 1U)) ||
      ((0x17 < (uint)param_4 || (0x3b < (uint)param_5)))) ||
     ((0x3b < (uint)param_6 || (param_3 < 1)))) {
LAB_00c6d427: ;
    piVar5 = F_00c51f85();
    *piVar5 = 0x16;
    lVar1 = -1;
  }
  else {
    if ((&REFG(undefined4, 0x134bc34))[param_2] - *(int *)(&REFG(undefined, 0x134bc30) + param_2 * 4) < param_3) {
      uVar2 = uVar6 & 0x80000003;
      bVar7 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar7 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if ((((!bVar7) || ((int)uVar6 % 100 == 0)) && (param_1 % 400 != 0)) ||
         ((param_2 != 2 || (0x1d < param_3)))) goto LAB_00c6d427;
    }
    (*(int *)(gen_frame + 0x20)) = *(int *)(&REFG(undefined, 0x134bc30) + param_2 * 4) + param_3;
    uVar2 = uVar6 & 0x80000003;
    bVar7 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar7 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((((bVar7) && ((int)uVar6 % 100 != 0)) || (param_1 % 400 == 0)) && (2 < param_2)) {
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
    }
    F_00c64d65();
    eVar3 = F_00c64fcb(&(*(long *)(gen_frame + 0x18)));
    if (((eVar3 != 0) || (eVar3 = F_00c64ff8(&(*(long *)(gen_frame + 0x10))), eVar3 != 0)) ||
       (eVar3 = F_00c65025(&(*(long *)(gen_frame + 0xc))), eVar3 != 0)) {
                    
      F_00c4c299(400,0,0,0,0,0);
    }
    iVar4 = ((param_1 + -0x641) / 400 - (param_1 + -0x76d) / 100) + -0x11 +
            ((int)(param_1 + -0x76d + (param_1 + -0x76d >> 0x1f & 3U)) >> 2);
    (*(int *)(gen_frame + 0x1c)) = iVar4 >> 0x1f;
    lVar1 = (longlong)CONCAT44(((int)uVar6 >> 0x1f) - (uint)(uVar6 < 0x46),param_1 + -0x7b2) * 0x16d
            + (longlong)iVar4;
    (*(int *)(gen_frame + 0x1c)) = (int)((ulonglong)lVar1 >> 0x20);
    lVar1 = (((lVar1 + (*(int *)(gen_frame + 0x20))) * 0x18 + (longlong)param_4) * 0x3c + (longlong)param_5) * 0x3c +
            (longlong)(*(long *)(gen_frame + 0xc)) + (longlong)param_6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 28))) = (*(int *)(gen_frame + 0x20));
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 20))) = uVar6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 16))) = (*(int *)(gen_frame + 0x14)) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) = param_4;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 4))) = param_5;
    (*(int *)((char *)((undefined *)(gen_frame + 0x24)))) = param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && ((*(long *)(gen_frame + 0x18)) != 0)) && (iVar4 = F_00c64dec(((undefined *)(gen_frame + 0x24))), iVar4 != 0)))) {
      lVar1 = lVar1 + (*(long *)(gen_frame + 0x10));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return lVar1;
}

/* ref: __getdrive */
int F_00c6d446(void)
{
  GEN_ENTER(0xc6d446u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x220];
  bool bVar1;
  DWORD DVar2;
  ushort * _Memory;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  bVar1 = false;
  _Memory = ((ushort *)(gen_frame + 0xc));
  DVar2 = gen_imp_GetCurrentDirectoryW(0x105,_Memory);
  if (0x104 < (int)DVar2) {
    _Memory = F_00c54c73(DVar2 + 1,2);
    if (_Memory == (ushort *)0x0) {
      piVar3 = F_00c51f85();
      *piVar3 = 0xc;
      DVar2 = 0;
    }
    else {
      bVar1 = true;
      if (DVar2 != 0) {
        DVar2 = gen_imp_GetCurrentDirectoryW(DVar2 + 1,_Memory);
      }
    }
  }
  iVar5 = 0;
  if (DVar2 == 0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0xc;
  }
  else if (_Memory[1] == 0x3a) {
    uVar4 = (uint)*_Memory;
    if ((0x60 < uVar4) && (uVar4 < 0x7b)) {
      uVar4 = uVar4 - 0x20;
    }
    iVar5 = uVar4 - 0x40;
  }
  if (bVar1) {
    F_00c4c68f(_Memory);
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return iVar5;
}

/* ref: FUN_00c6d5a7 */
uint F_00c6d5a7(void)
{
  GEN_ENTER(0xc6d5a7u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: __towlower_l */
ushort F_00c6d5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6d5b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  WCHAR WVar1;
  int iVar2;
  undefined2 in_stack_00000006;
  
  WVar1 = L'\xffff';
  if ((*(ushort *)&gen_args[0]) != 0xffff) {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),(*(undefined * PTR32 *)&gen_args[1]));
    if (*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0x14))) == (LPCWSTR)0x0) {
      WVar1 = (*(ushort *)&gen_args[0]);
      if ((ushort)((*(ushort *)&gen_args[0]) - 0x41) < 0x1a) {
        WVar1 = (*(ushort *)&gen_args[0]) + L' ';
      }
    }
    else if ((*(ushort *)&gen_args[0]) < 0x100) {
      iVar2 = F_00c7db09((*(ushort *)&gen_args[0]),1);
      WVar1 = (*(ushort *)&gen_args[0]);
      if (iVar2 != 0) {
        WVar1 = (ushort)*((byte *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xcc))) + (*(uint *)&(*(ushort *)&gen_args[0]) & 0xffff))));
      }
    }
    else {
      iVar2 = F_00c7e497(*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0x14))),0x100,(LPCWSTR)&(*(ushort *)&gen_args[0]),1,((WCHAR *)(gen_frame + 0x18)),1);
      WVar1 = (*(ushort *)&gen_args[0]);
      if (iVar2 != 0) {
        WVar1 = ((WCHAR *)(gen_frame + 0x18))[0];
      }
    }
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return WVar1;
}

/* ref: _towlower */
ushort F_00c6d650(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d650u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  ushort wVar1;
  
  wVar1 = F_00c6d5b0(_C,(undefined *)0x0);
  return wVar1;
}

/* ref: _wcspbrk */
wchar_t * F_00c6d663(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6d663u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Str = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Control = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t wVar1;
  wchar_t * pwVar2;
  wchar_t wVar3;
  
  wVar3 = *_Str;
  if (wVar3 != L'\0') {
    wVar1 = *_Control;
    pwVar2 = _Control;
    do {
      while (wVar1 != L'\0') {
        if (wVar1 == wVar3) {
          return _Str;
        }
        wVar1 = pwVar2[1];
        pwVar2 = pwVar2 + 1;
      }
      _Str = _Str + 1;
      wVar3 = *_Str;
      wVar1 = *_Control;
      pwVar2 = _Control;
    } while (wVar3 != L'\0');
  }
  return (wchar_t *)0x0;
}

/* ref: __set_osfhnd */
int F_00c6d6a7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6d6a7u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  ulong * puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < REFG(undefined4, 0x15e4190))) {
    iVar3 = (param_1 & 0x1fU) * 0x40;
    if (*((int *)GEN_TOP((iVar3 + (&REFG(undefined4, 0x15e41a0))[param_1 >> 5]))) == -1) {
      if (REFG(int, 0x134ab80) == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00c6d704;
          nStdHandle = 0xfffffff4;
        }
        gen_imp_SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_00c6d704: ;
      *((int *)GEN_TOP((iVar3 + (&REFG(undefined4, 0x15e41a0))[param_1 >> 5]))) = param_2;
      return 0;
    }
  }
  piVar1 = F_00c51f85();
  *piVar1 = 9;
  puVar2 = F_00c51f98();
  *puVar2 = 0;
  return -1;
}

/* ref: __free_osfhnd */
int F_00c6d728(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d728u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  ulong * puVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < REFG(undefined4, 0x15e4190))) {
    iVar1 = (&REFG(undefined4, 0x15e41a0))[param_1 >> 5];
    iVar4 = (param_1 & 0x1fU) * 0x40;
    if (((*(byte *)(iVar1 + 4 + iVar4) & 1) != 0) && (*(int *)(iVar1 + iVar4) != -1)) {
      if (REFG(int, 0x134ab80) == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00c6d78a;
          nStdHandle = 0xfffffff4;
        }
        gen_imp_SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_00c6d78a: ;
      *((undefined4 *)GEN_TOP((iVar4 + (&REFG(undefined4, 0x15e41a0))[param_1 >> 5]))) = 0xffffffff;
      return 0;
    }
  }
  piVar2 = F_00c51f85();
  *piVar2 = 9;
  puVar3 = F_00c51f98();
  *puVar3 = 0;
  return -1;
}

/* ref: __get_osfhandle */
int F_00c6d7ae(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d7aeu, gen_a0, 0u, 0u, 0u);
  int _FileHandle = (int)gen_a0;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  
  if (_FileHandle == -2) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < REFG(undefined4, 0x15e4190))) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*((byte *)GEN_TOP((iVar3 + 4 + (&REFG(undefined4, 0x15e41a0))[_FileHandle >> 5]))) & 1) != 0) {
        return *((int *)GEN_TOP((iVar3 + (&REFG(undefined4, 0x15e41a0))[_FileHandle >> 5])));
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  return -1;
}

/* ref: ___lock_fhandle */
int F_00c6d817(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d817u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  
  iVar1 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f66d0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc6d823;
  iVar2 = (*(int *)&gen_args[0]) >> 5;
  iVar4 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40 + (&REFG(undefined4, 0x15e41a0))[iVar2];
  (*(int *)(gen_frame + 0x0)) = 1;
  if (*(int *)(iVar4 + 8) == 0) {
    F_00c5aa4f(10);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    if (*(int *)(iVar4 + 8) == 0) {
      BVar3 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(iVar4 + 0xc),4000);
      if (BVar3 == 0) {
        (*(int *)(gen_frame + 0x0)) = 0;
      }
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c6d8ad();
  }
  if ((*(int *)(gen_frame + 0x0)) != 0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((&REFG(undefined4, 0x15e41a0))[iVar2] + 0xc + (iVar1 & 0x1fU) * 0x40));
  }
  return (*(int *)(gen_frame + 0x0));
}

/* ref: FUN_00c6d8a8 */
uint F_00c6d8a8(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d8a8u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: FUN_00c6d8ad */
uint F_00c6d8ad(void)
{
  GEN_ENTER(0xc6d8adu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: __unlock_fhandle */
unsigned int F_00c6d8b6(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d8b6u, gen_a0, 0u, 0u, 0u);
  int _Filehandle = (int)gen_a0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)
             ((&REFG(undefined4, 0x15e41a0))[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  return 0;
}

/* ref: __alloc_osfhnd */
int F_00c6d8dd(void)
{
  GEN_ENTER(0xc6d8ddu, 0u, 0u, 0u, 0u);
  int iVar1;
  BOOL BVar2;
  undefined4 * puVar3;
  int iVar4;
  int local_2c;
  int local_28;
  undefined4 * local_24;
  int local_20;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f66f0);
  uStack_c = 0xc6d8e9;
  local_20 = -1;
  iVar4 = 0;
  local_28 = 0;
  iVar1 = F_00c5a98d(0xb);
  if (iVar1 == 0) {
    local_20 = -1;
  }
  else {
    F_00c5aa4f(0xb);
    local_8 = (undefined *)0x0;
    for (; local_2c = iVar4, iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar3 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x15e41a0))[iVar4]));
      if (puVar3 == (undefined4 *)0x0) {
        local_24 = F_00c54c73(0x20,0x40);
        if (local_24 != (undefined4 *)0x0) {
          (&REFG(undefined4, 0x15e41a0))[iVar4] = local_24;
          REFG(int, 0x15e4190) = REFG(int, 0x15e4190) + 0x20;
          while (local_24 < ((undefined4 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar4] + 0x800)))) {
            *(undefined1 *)(local_24 + 1) = 0;
            *local_24 = 0xffffffff;
            *(undefined1 *)((int)local_24 + 5) = 10;
            local_24[2] = 0;
            local_24 = local_24 + 0x10;
          }
          local_20 = iVar4 << 5;
          *((undefined1 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[local_20 >> 5] + 4))) = 1;
          iVar1 = F_00c6d817(local_20);
          if (iVar1 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; local_24 = puVar3, puVar3 < ((undefined4 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar4] + 0x800)));
          puVar3 = puVar3 + 0x10) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            F_00c5aa4f(10);
            local_8 = (undefined *)0x1;
            if (puVar3[2] == 0) {
              BVar2 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar3 + 3),4000);
              if (BVar2 == 0) {
                local_28 = 1;
              }
              else {
                puVar3[2] = puVar3[2] + 1;
              }
            }
            local_8 = (undefined *)0x0;
            F_00c6d9af();
          }
          if (local_28 == 0) {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              if (local_28 == 0) {
                *(undefined1 *)(puVar3 + 1) = 1;
                *puVar3 = 0xffffffff;
                local_20 = ((int)puVar3 - (&REFG(undefined4, 0x15e41a0))[iVar4] >> 6) + iVar4 * 0x20;
                break;
              }
            }
            else {
              gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            }
          }
        }
      }
      if (local_20 != -1) break;
    }
    local_8 = (undefined *)0xfffffffe;
    F_00c6da6d();
  }
  return local_20;
}

/* ref: FUN_00c6d9a9 */
uint F_00c6d9a9(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d9a9u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: FUN_00c6d9af */
uint F_00c6d9af(void)
{
  GEN_ENTER(0xc6d9afu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: FUN_00c6da6d */
uint F_00c6da6d(void)
{
  GEN_ENTER(0xc6da6du, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xb);
  return uVar1;
}

/* ref: FUN_00c6db5f */
unsigned int F_00c6db5f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6db5fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  byte * pbVar1;
  uint _Filehandle;
  
  _Filehandle = *(uint *)(in_ebp + 0xc);
  if (*(int *)(in_ebp + -0x1c) == 0) {
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)_Filehandle >> 5] + 4 + (_Filehandle & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfe;
  }
  F_00c6d8b6(_Filehandle);
  return 0;
}

/* ref: __setmode_nolock */
int F_00c6db8c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6db8cu, gen_a0, gen_a1, 0u, 0u);
  int _FileHandle = (int)gen_a0;
  int _Mode = (int)gen_a1;
  int * piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte * pbVar5;
  byte bVar6;
  int iVar7;
  
  piVar1 = &REFG(undefined4, 0x15e41a0) + (_FileHandle >> 5);
  iVar7 = (_FileHandle & 0x1fU) * 0x40;
  iVar4 = *piVar1 + iVar7;
  cVar2 = *(char *)(iVar4 + 0x24);
  bVar3 = *(byte *)(iVar4 + 4);
  if (_Mode == 0x4000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
    pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
    *pbVar5 = *pbVar5 & 0x80;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0x7f;
  }
  else {
    if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x82 | 2;
    }
    else {
      if (_Mode != 0x40000) goto LAB_00c6dc29;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_00c6dc29: ;
  if ((bVar3 & 0x80) == 0) {
    return 0x8000;
  }
  return (-(uint)((char)(cVar2 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
}

/* ref: __set_fmode */
int F_00c6dc47(unsigned int gen_a0)
{
  GEN_ENTER(0xc6dc47u, gen_a0, 0u, 0u, 0u);
  int _Mode = (int)gen_a0;
  int * piVar1;
  
  if (((_Mode != 0x4000) && (_Mode != 0x8000)) && (_Mode != 0x10000)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  gen_imp_InterlockedExchange(&REFG(undefined4, 0x15d7640),_Mode);
  return 0;
}

/* ref: __get_fmode */
int F_00c6dc89(unsigned int gen_a0)
{
  GEN_ENTER(0xc6dc89u, gen_a0, 0u, 0u, 0u);
  int * _PMode = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_PMode == (int *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_PMode = REFG(int, 0x15d7640);
  return 0;
}

/* ref: FUN_00c6dd96 */
unsigned int F_00c6dd96(unsigned int gen_a0)
{
  GEN_ENTER(0xc6dd96u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: __lseeki64_nolock */
longlong F_00c6dda1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6dda1u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  LONG param_2 = (LONG)gen_a1;
  LONG param_3 = (LONG)gen_a2;
  DWORD param_4 = (DWORD)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  HANDLE hFile;
  int * piVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  (*(LONG *)(gen_frame + 0x8)) = param_3;
  hFile = (HANDLE)F_00c6d7ae(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = F_00c51f85();
    *piVar2 = 9;
LAB_00c6ddd2: ;
    DVar3 = 0xffffffff;
    (*(LONG *)(gen_frame + 0x8)) = -1;
  }
  else {
    DVar3 = gen_imp_SetFilePointer(hFile,param_2,&(*(LONG *)(gen_frame + 0x8)),param_4);
    if (DVar3 == 0xffffffff) {
      DVar4 = gen_imp_GetLastError();
      if (DVar4 != 0) {
        F_00c51fab(DVar4);
        goto LAB_00c6ddd2;
      }
    }
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return (longlong)CONCAT44((*(LONG *)(gen_frame + 0x8)),DVar3);
}

/* ref: __lseeki64 */
longlong F_00c6de26(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6de26u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x44];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x14;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6758);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc6de32;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = 0xffffffff;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = 0xffffffff;
  (*(longlong *)(gen_frame + 0x8)) = 0xffffffffffffffff;
  if ((*(uint *)&gen_args[0]) == 0xfffffffe) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
  }
  else {
    if ((-1 < (int)(*(uint *)&gen_args[0])) && ((*(uint *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
      iVar3 = (int)(*(uint *)&gen_args[0]) >> 5;
      iVar4 = ((*(uint *)&gen_args[0]) & 0x1f) * 0x40;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) != 0) {
        F_00c6d817((*(uint *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = 0xffffffff;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = 0xffffffff;
          (*(longlong *)(gen_frame + 0x8)) = -1;
        }
        else {
          (*(longlong *)(gen_frame + 0x8)) = F_00c6dda1((*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
        F_00c6df06((gen_frame + 0x2c));
        goto LAB_00c6df00;
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = 0xffffffff;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = 0xffffffff;
LAB_00c6df00: ;
  return (longlong)CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)),(undefined4)(*(longlong *)(gen_frame + 0x8)));
}

/* ref: FUN_00c6df06 */
unsigned int F_00c6df06(unsigned int gen_a0)
{
  GEN_ENTER(0xc6df06u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: __ceil_default */
float10 F_00c6df10(double gen_a0)
{
  GEN_ENTER(0xc6df10u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  double dVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  uVar2 = F_00c6f59e(REFG(undefined4, 0x134bc80),0xffff);
  uVar4 = (undefined4)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x20);
  if (((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff0) == 0x7ff0) {
    uVar3 = F_00c6ebcd((int)(ulonglong)gen_d2bits((*(double *)&gen_args[0])),uVar4);
    if (0 < (int)uVar3) {
      if ((int)uVar3 < 3) {
        F_00c6f59e(uVar2,0xffff);
        return (float10)(*(double *)&gen_args[0]);
      }
      if (uVar3 == 3) {
        fVar5 = F_00c6f323(0xc,(*(double *)&gen_args[0]),uVar2);
        return fVar5;
      }
    }
    dVar1 = (*(double *)&gen_args[0]) + REFG(double, 0x1088130);
    uVar6 = 8;
  }
  else {
    fVar5 = F_00c7d6ab((*(double *)&gen_args[0]));
    dVar1 = (double)fVar5;
    if (((GEN_ISNAN((*(double *)&gen_args[0])) || GEN_ISNAN(dVar1)) != ((GEN_ISNAN((*(double *)&gen_args[0])) || GEN_ISNAN(dVar1)) || (*(double *)&gen_args[0]) == dVar1)) ||
       ((uVar2 & 0x20) != 0)) {
      F_00c6f59e(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar6 = 0x10;
  }
  fVar5 = F_00c6f3d9(uVar4,uVar6,0xc,(*(double *)&gen_args[0]),dVar1,uVar2);
  return fVar5;
}

/* ref: __isleadbyte_l */
int F_00c6dfe8(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6dfe8u, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + (_C & 0xffU) * 2)));
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}

/* ref: _isleadbyte */
int F_00c6e020(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e020u, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  iVar1 = F_00c6dfe8(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: FID_conflict__iswalpha_00c6e033 */
int F_00c6e033(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e033u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  return iVar1;
}

/* ref: FID_conflict__iswalpha_00c6e049 */
int F_00c6e049(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e049u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  return iVar1;
}

/* ref: FID_conflict___iswupper_l_00c6e05f */
int F_00c6e05f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e05fu, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,1);
  return iVar1;
}

/* ref: FID_conflict___iswupper_l_00c6e072 */
int F_00c6e072(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e072u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,1);
  return iVar1;
}

/* ref: FID_conflict__iswlower_00c6e085 */
int F_00c6e085(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e085u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,2);
  return iVar1;
}

/* ref: FID_conflict__iswlower_00c6e098 */
int F_00c6e098(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e098u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,2);
  return iVar1;
}

/* ref: FID_conflict___iswdigit_l_00c6e0ab */
int F_00c6e0ab(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e0abu, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,4);
  return iVar1;
}

/* ref: FID_conflict___iswdigit_l_00c6e0be */
int F_00c6e0be(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e0beu, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,4);
  return iVar1;
}

/* ref: FID_conflict___iswxdigit_l_00c6e0d1 */
int F_00c6e0d1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e0d1u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x80);
  return iVar1;
}

/* ref: FID_conflict___iswxdigit_l_00c6e0e7 */
int F_00c6e0e7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e0e7u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x80);
  return iVar1;
}

/* ref: FID_conflict___iswspace_l_00c6e0fd */
int F_00c6e0fd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e0fdu, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,8);
  return iVar1;
}

/* ref: FID_conflict___iswspace_l_00c6e110 */
int F_00c6e110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e110u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,8);
  return iVar1;
}

/* ref: FID_conflict__iswpunct_00c6e123 */
int F_00c6e123(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e123u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x10);
  return iVar1;
}

/* ref: FID_conflict__iswpunct_00c6e136 */
int F_00c6e136(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e136u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x10);
  return iVar1;
}

/* ref: FID_conflict__iswalnum_00c6e149 */
int F_00c6e149(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e149u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  return iVar1;
}

/* ref: FID_conflict__iswalnum_00c6e15f */
int F_00c6e15f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e15fu, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  return iVar1;
}

/* ref: FID_conflict__iswprint_00c6e175 */
int F_00c6e175(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e175u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x157);
  return iVar1;
}

/* ref: FID_conflict__iswprint_00c6e18b */
int F_00c6e18b(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e18bu, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x157);
  return iVar1;
}

/* ref: FID_conflict___iswgraph_l_00c6e1a1 */
int F_00c6e1a1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e1a1u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x117);
  return iVar1;
}

/* ref: FID_conflict___iswgraph_l_00c6e1b7 */
int F_00c6e1b7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e1b7u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x117);
  return iVar1;
}

/* ref: FID_conflict__iswcntrl_00c6e1cd */
int F_00c6e1cd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e1cdu, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x20);
  return iVar1;
}

/* ref: FID_conflict__iswcntrl_00c6e1e0 */
int F_00c6e1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e1e0u, gen_a0, gen_a1, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x20);
  return iVar1;
}

/* ref: FUN_00c6e1f3 */
uint F_00c6e1f3(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e1f3u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (uint)((ushort)param_1 < 0x80);
}

/* ref: FID_conflict___iswcsym_l_00c6e207 */
int F_00c6e207(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e207u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict___iswcsym_l_00c6e22d */
int F_00c6e22d(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e22du, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict____iswcsymf_00c6e253 */
int F_00c6e253(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e253u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict____iswcsymf_00c6e279 */
int F_00c6e279(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e279u, gen_a0, 0u, 0u, 0u);
  ushort _C = (ushort)gen_a0;
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c6e2a0 */
float10 F_00c6e2a0(double gen_a0)
{
  GEN_ENTER(0xc6e2a0u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  double in_xmm7;
  float10 fVar1;
  
  in_xmm7 = (double)in_st0;
  fVar1 = F_00c6e2be(in_xmm7,(uint)(ulonglong)gen_d2bits(in_xmm7),
                       (int)((ulonglong)gen_d2bits(in_xmm7) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c6e2be */
float10 F_00c6e2be(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6e2beu, 0u, gen_a1, gen_a2, 0u);
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  gen_args[3] = gen_a2;
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x1125700));
  dVar3 = gen_bits2d((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x1125708));
  if (!GEN_ISNAN(dVar2) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x1125828))) {
    if (!(*(double *)&REFG(undefined, 0x1125828) <= dVar2)) {
      if ((!GEN_ISNAN(dVar2) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x1125818))) && !(dVar2 < *(double *)&REFG(undefined, 0x1125818))) {
        if (!(*(double *)&REFG(undefined, 0x1125810) <= dVar2)) {
          dVar2 = dVar2 * dVar2;
          dVar5 = dVar2 * dVar2;
          dVar3 = (dVar3 * dVar3) * (dVar3 * dVar3);
          return ((float10)GEN_TOD(((*(double *)&gen_args[0]) -
                          ((((((((*(double *)&REFG(undefined, 0x1125790) * dVar5 + *(double *)&REFG(undefined, 0x1125780)) *
                                 dVar5 + *(double *)&REFG(undefined, 0x1125770)) * dVar5 +
                               *(double *)&REFG(undefined, 0x1125760)) * dVar5 + *(double *)&REFG(undefined, 0x1125750)) * dVar5
                             + *(double *)&REFG(undefined, 0x1125740)) * dVar5 + *(double *)&REFG(undefined, 0x1125730)) * dVar5
                           + *(double *)&REFG(undefined, 0x1125720)) * dVar2 +
                          (((((((*(double *)&REFG(undefined, 0x1125798) * dVar3 + *(double *)&REFG(undefined, 0x1125788)) *
                                dVar3 + *(double *)&REFG(undefined, 0x1125778)) * dVar3 + *(double *)&REFG(undefined, 0x1125768)
                              ) * dVar3 + *(double *)&REFG(undefined, 0x1125758)) * dVar3 +
                            *(double *)&REFG(undefined, 0x1125748)) * dVar3 + *(double *)&REFG(undefined, 0x1125738)) * dVar3 +
                          *(double *)&REFG(undefined, 0x1125728))) * (*(double *)&gen_args[0]))));
        }
        if ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x1125808))) || dVar2 < *(double *)&REFG(undefined, 0x1125808)) {
          iVar4 = (uint)((ulonglong)gen_d2bits(dVar2 + REFG(undefined8, 0x1125800)) >> 0x2c) - (int)REFG(undefined8, 0x11257e0);
          iVar1 = iVar4 * 3;
          dVar3 = (dVar2 - *(double *)(&REFG(undefined, 0x11267f0) + iVar4 * 0x18)) /
                  (dVar2 * *(double *)(&REFG(undefined, 0x11267f0) + iVar4 * 0x18) + *(double *)&REFG(undefined, 0x11257f8));
        }
        else {
          iVar1 = 0x300;
          dVar3 = REFG(undefined8, 0x11257f0) / dVar2;
        }
        dVar5 = dVar3 * dVar3;
        dVar6 = dVar5 * dVar5;
        dVar7 = (dVar3 * dVar3) * (dVar3 * dVar3);
        return ((float10)GEN_TOD(gen_bits2d((ulonglong)
                                   gen_d2bits(*(double *)(&REFG(undefined, 0x11267e0) + iVar1 * 8) -
                                              ((((((*(double *)&REFG(undefined, 0x11257d0) * dVar6 +
                                                   *(double *)&REFG(undefined, 0x11257c0)) * dVar6 +
                                                  *(double *)&REFG(undefined, 0x11257b0)) * dVar6 +
                                                 *(double *)&REFG(undefined, 0x11257a0)) * dVar5 +
                                                (((*(double *)&REFG(undefined, 0x11257d8) * dVar7 +
                                                  *(double *)&REFG(undefined, 0x11257c8)) * dVar7 +
                                                 *(double *)&REFG(undefined, 0x11257b8)) * dVar7 +
                                                *(double *)&REFG(undefined, 0x11257a8))) * dVar3 -
                                               *(double *)(&REFG(undefined, 0x11267e8) + iVar1 * 8)) - dVar3)) |
                                   (ulonglong)gen_d2bits((*(double *)&gen_args[0])) ^ (ulonglong)gen_d2bits(dVar2))));
      }
      if (*(double *)&REFG(undefined, 0x1125820) <= dVar2) {
        dVar2 = dVar2 * dVar2;
        dVar5 = dVar2 * dVar2;
        dVar3 = (dVar3 * dVar3) * (dVar3 * dVar3);
        return ((float10)GEN_TOD(((*(double *)&gen_args[0]) -
                        ((((*(double *)&REFG(undefined, 0x11257d0) * dVar5 + *(double *)&REFG(undefined, 0x11257c0)) * dVar5 +
                          *(double *)&REFG(undefined, 0x11257b0)) * dVar5 + *(double *)&REFG(undefined, 0x11257a0)) * dVar2 +
                        (((*(double *)&REFG(undefined, 0x11257d8) * dVar3 + *(double *)&REFG(undefined, 0x11257c8)) * dVar3 +
                         *(double *)&REFG(undefined, 0x11257b8)) * dVar3 + *(double *)&REFG(undefined, 0x11257a8))) * (*(double *)&gen_args[0]))));
      }
      if ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x11257e8))) || dVar2 == *(double *)&REFG(undefined, 0x11257e8)) {
        return (float10)*(double *)&(*(uint *)&gen_args[2]);
      }
      if (!(*(double *)&REFG(undefined, 0x1125830) <= dVar2)) {
        return (float10)(*(double *)&REFG(undefined, 0x1125838) * *(double *)&REFG(undefined, 0x1125838)) +
               (float10)*(double *)&(*(uint *)&gen_args[2]);
      }
      return (float10)*(double *)&REFG(undefined, 0x1125838) * (float10)*(double *)&REFG(undefined, 0x1125838) +
             (float10)*(double *)&(*(uint *)&gen_args[2]);
    }
    if (!GEN_ISNAN(gen_bits2d((ulonglong)gen_d2bits(dVar2) & (ulonglong)gen_d2bits(REFG(undefined8, 0x11256f0)))) &&
        !GEN_ISNAN(REFG(undefined8, 0x11256f0))) {
      return (float10)*(double *)&REFG(undefined, 0x1125838) +
             (float10)*(double *)(&REFG(undefined, 0x1125710) + ((*(int *)&gen_args[3]) >> 0x1f) * -8);
    }
  }
  F_00c6bf0e(&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[2]),0x3eb);
  return (float10)*(double *)&(*(uint *)&gen_args[2]);
}

/* ref: __alloca_probe_16 */
uint F_00c6e590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e590u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 4 - in_eax & 0xf;
  return in_eax + uVar1 | -(uint)CARRY4(in_eax,uVar1);
}

/* ref: __alloca_probe_8 */
uint F_00c6e5a6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6e5a6u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 4 - in_eax & 7;
  return in_eax + uVar1 | -(uint)CARRY4(in_eax,uVar1);
}

/* ref: FUN_00c6e5bc */
uint F_00c6e5bc(void)
{
  GEN_ENTER(0xc6e5bcu, 0u, 0u, 0u, 0u);
  undefined * _File;
  int iVar1;
  int iVar2;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_c;
  undefined * puStack_8;
  
  puStack_8 = &REFG(undefined, 0x12f6778);
  uStack_c = 0xc6e5c8;
  uStack_20 = 0;
  F_00c5aa4f(1);
  puStack_8 = (undefined *)0x0;
  for (iVar2 = 3; iStack_24 = iVar2, iVar2 < REFG(int, 0x15e52c0); iVar2 = iVar2 + 1) {
    if (*(int *)(REFG(int, 0x15e42a8) + iVar2 * 4) != 0) {
      _File = *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + iVar2 * 4);
      if (((*(int *)(((char *)(_File) + 12))) & 0x83) != 0) {
        iVar1 = F_00c49312(_File);
        if (iVar1 != -1) {
          uStack_20 = uStack_20 + 1;
        }
      }
      if (0x13 < iVar2) {
        gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(REFG(int, 0x15e42a8) + iVar2 * 4) + 0x20));
        F_00c4c68f(*(undefined * PTR32 *)(REFG(int, 0x15e42a8) + iVar2 * 4));
        *(undefined4 *)(REFG(int, 0x15e42a8) + iVar2 * 4) = 0;
      }
    }
  }
  puStack_8 = (undefined *)0xfffffffe;
  F_00c6e64f();
  return uStack_20;
}

/* ref: FUN_00c6e64f */
uint F_00c6e64f(void)
{
  GEN_ENTER(0xc6e64fu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: __getbuf */
unsigned int F_00c6e658(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e658u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
  pcVar1 = F_00c54c2e(0x1000);
  (*(char * PTR32 *)(((char *)(_File) + 8))) = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 4;
    (*(char * PTR32 *)(((char *)(_File) + 8))) = (char *)&(*(int *)(((char *)(_File) + 20)));
    (*(int *)(((char *)(_File) + 24))) = 2;
  }
  else {
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 8;
    (*(int *)(((char *)(_File) + 24))) = 0x1000;
  }
  (*(int *)(((char *)(_File) + 4))) = 0;
  (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)(((char *)(_File) + 8)));
  return 0;
}

/* ref: __commit */
int F_00c6e6a1(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e6a1u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int _FileHandle_00;
  int * piVar1;
  int iVar2;
  HANDLE hFile;
  BOOL BVar3;
  ulong * puVar4;
  int iVar5;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6798);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc6e6ad;
  if ((*(int *)&gen_args[0]) == -2) {
    piVar1 = F_00c51f85();
    *piVar1 = 9;
  }
  else {
    if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
      iVar2 = (*(int *)&gen_args[0]) >> 5;
      iVar5 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
      if ((*((byte *)GEN_TOP((iVar5 + 4 + (&REFG(undefined4, 0x15e41a0))[iVar2]))) & 1) != 0) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP((iVar5 + 4 + (&REFG(undefined4, 0x15e41a0))[iVar2]))) & 1) != 0) {
          hFile = (HANDLE)F_00c6d7ae(_FileHandle_00);
          BVar3 = gen_imp_FlushFileBuffers(hFile);
          if (BVar3 == 0) {
            (*(DWORD *)(gen_frame + 0x0)) = gen_imp_GetLastError();
          }
          else {
            (*(DWORD *)(gen_frame + 0x0)) = 0;
          }
          if ((*(DWORD *)(gen_frame + 0x0)) == 0) goto LAB_00c6e75a;
          puVar4 = F_00c51f98();
          *puVar4 = (*(DWORD *)(gen_frame + 0x0));
        }
        piVar1 = F_00c51f85();
        *piVar1 = 9;
        (*(DWORD *)(gen_frame + 0x0)) = 0xffffffff;
LAB_00c6e75a: ;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c6e772(_FileHandle_00);
        return (*(DWORD *)(gen_frame + 0x0));
      }
    }
    piVar1 = F_00c51f85();
    *piVar1 = 9;
    F_00c4c305();
  }
  return -1;
}

/* ref: FUN_00c6e76f */
unsigned int F_00c6e76f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e76fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c6e772 */
unsigned int F_00c6e772(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e772u, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __ftelli64_nolock */
longlong F_00c6e77a(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e77au, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11020];
  uint uVar1;
  char * pcVar2;
  int iVar3;
  BOOL BVar4;
  byte * pbVar5;
  int * piVar6;
  char * pcVar7;
  int iVar8;
  char * pcVar9;
  int iVar10;
  uint uVar11;
  char * pcVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  (*(uint *)(gen_frame + 0x11018)) = 0xc6e789;
  (*(uint *)(gen_frame + 0x11018)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar1 = F_00c5d07b(_File);
  if ((*(int *)(((char *)(_File) + 4))) < 0) {
    (*(int *)(((char *)(_File) + 4))) = 0;
  }
  (*(ulonglong *)(gen_frame + 0x10008)) = F_00c6de26(uVar1,0,0,1);
  iVar8 = (int)((*(ulonglong *)(gen_frame + 0x10008)) >> 0x20);
  pcVar2 = (char *)(*(ulonglong *)(gen_frame + 0x10008));
  if ((iVar8 == 0 || (longlong)(*(ulonglong *)(gen_frame + 0x10008)) < 0) && ((longlong)(*(ulonglong *)(gen_frame + 0x10008)) < 0)) goto LAB_00c6e7d7;
  piVar6 = &REFG(undefined4, 0x15e41a0) + ((int)uVar1 >> 5);
  iVar10 = (uVar1 & 0x1f) * 0x40;
  iVar3 = *piVar6 + iVar10;
  ((byte *)(gen_frame + 0x10017))[0] = (char)(*(char *)(iVar3 + 0x24) * '\x02') >> 1;
  if (((*(int *)(((char *)(_File) + 12))) & 0x108U) == 0) {
    (*(ulonglong *)(gen_frame + 0x10008)) = (*(ulonglong *)(gen_frame + 0x10008)) - (longlong)(*(int *)(((char *)(_File) + 4)));
    goto LAB_00c6eab5;
  }
  pcVar12 = (*(char * PTR32 *)((char *)(_File)));
  (*(DWORD *)(gen_frame + 0x10010)) = (int)pcVar12 - (int)(*(char * PTR32 *)(((char *)(_File) + 8)));
  if (((*(int *)(((char *)(_File) + 12))) & 3U) == 0) {
    if ((char)(*(int *)(((char *)(_File) + 12))) < '\0') goto LAB_00c6e985;
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
  }
  else {
    if ((((byte *)(gen_frame + 0x10017))[0] != 1) || (*(int *)(iVar3 + 0x30) == 0)) {
      if ((*(byte *)(iVar3 + 4) & 0x80) != 0) {
        for (pcVar9 = (*(char * PTR32 *)(((char *)(_File) + 8))); pcVar9 < pcVar12; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            (*(DWORD *)(gen_frame + 0x10010)) = (*(DWORD *)(gen_frame + 0x10010)) + 1;
          }
        }
      }
LAB_00c6e985: ;
      if ((*(ulonglong *)(gen_frame + 0x10008)) == 0) {
        (*(ulonglong *)(gen_frame + 0x10008)) = (ulonglong)(*(DWORD *)(gen_frame + 0x10010));
        goto LAB_00c6eab5;
      }
      if (((*(int *)(((char *)(_File) + 12))) & 1) != 0) {
        if ((*(int *)(((char *)(_File) + 4))) == 0) {
          (*(DWORD *)(gen_frame + 0x10010)) = 0;
        }
        else {
          pcVar12 = pcVar12 + ((*(int *)(((char *)(_File) + 4))) - (int)(*(char * PTR32 *)(((char *)(_File) + 8))));
          if ((*(byte *)(iVar3 + 4) & 0x80) != 0) {
            uVar16 = F_00c6de26(uVar1,0,0,2);
            if (uVar16 == (*(ulonglong *)(gen_frame + 0x10008))) {
              pcVar7 = (*(char * PTR32 *)(((char *)(_File) + 8)));
              pcVar9 = pcVar7 + (int)pcVar12;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  pcVar12 = pcVar12 + 1;
                }
              }
              bVar13 = ((*(int *)(((char *)(_File) + 12))) & 0x2000U) == 0;
            }
            else {
              lVar14 = F_00c6de26(uVar1,pcVar2,iVar8,0);
              if (((int)((ulonglong)lVar14 >> 0x20) == 0 || lVar14 < 0) && (lVar14 < 0))
              goto LAB_00c6e7d7;
              if (((char *)0x200 < pcVar12) ||
                 ((((*(int *)(((char *)(_File) + 12))) & 8U) == 0 ||
                  (pcVar12 = (char *)0x200, ((*(int *)(((char *)(_File) + 12))) & 0x400U) != 0)))) {
                pcVar12 = (char *)(*(int *)(((char *)(_File) + 24)));
              }
              bVar13 = (*(byte *)(*piVar6 + 4 + iVar10) & 4) == 0;
            }
            if (!bVar13) {
              pcVar12 = pcVar12 + 1;
            }
          }
          if (((byte *)(gen_frame + 0x10017))[0] == 1) {
            pcVar12 = (char *)((uint)((int)(uintptr_t)pcVar12) >> 1);
          }
          (*(ulonglong *)(gen_frame + 0x10008)) = CONCAT44(iVar8 - (uint)(pcVar2 < pcVar12),(int)pcVar2 - (int)pcVar12);
        }
      }
      if (((byte *)(gen_frame + 0x10017))[0] == 1) {
        (*(DWORD *)(gen_frame + 0x10010)) = (*(DWORD *)(gen_frame + 0x10010)) >> 1;
      }
      (*(ulonglong *)(gen_frame + 0x10008)) = CONCAT44((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10008)) + 4)) + (uint)CARRY4((*(DWORD *)(gen_frame + 0x10010)),(uint)(*(ulonglong *)(gen_frame + 0x10008))),
                            (*(DWORD *)(gen_frame + 0x10010)) + (uint)(*(ulonglong *)(gen_frame + 0x10008)));
      goto LAB_00c6eab5;
    }
    uVar11 = (*(DWORD *)(gen_frame + 0x10010)) >> 1;
    if ((*(int *)(((char *)(_File) + 4))) == 0) goto LAB_00c6eab5;
    lVar14 = F_00c6de26(uVar1,*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x2c),0);
    iVar3 = *piVar6;
    if ((((int)lVar14 == *(int *)(iVar3 + 0x28 + iVar10)) &&
        ((int)((ulonglong)lVar14 >> 0x20) == *(int *)(iVar3 + 0x2c + iVar10))) &&
       (BVar4 = gen_imp_ReadFile(*(HANDLE *)(iVar3 + iVar10),((byte *)(gen_frame + 0x10017)) + 1,0x1000,&(*(DWORD *)(gen_frame + 0x10010)),
                         (GEN_LPANY)0x0), BVar4 != 0)) {
      lVar15 = F_00c6de26(uVar1,pcVar2,iVar8,0);
      if ((((int)((ulonglong)lVar15 >> 0x20) != 0 && -1 < lVar15) || (-1 < lVar15)) &&
         (uVar11 <= (*(DWORD *)(gen_frame + 0x10010)))) {
        pbVar5 = ((byte *)(gen_frame + 0x10017)) + 1;
        if (uVar11 != 0) {
          do {
            uVar11 = uVar11 - 1;
            if (((byte *)(gen_frame + 0x10017)) + (*(DWORD *)(gen_frame + 0x10010)) + 1 <= pbVar5) break;
            if (*pbVar5 == 0xd) {
              if ((pbVar5 < ((byte *)(gen_frame + 0x10017)) + (*(DWORD *)(gen_frame + 0x10010))) && (pbVar5[1] == 10)) {
                pbVar5 = pbVar5 + 1;
              }
            }
            else {
              pbVar5 = pbVar5 + (char)(&REFG(undefined, 0x134ba38))[*pbVar5];
            }
            pbVar5 = pbVar5 + 1;
          } while (uVar11 != 0);
        }
        (*(ulonglong *)(gen_frame + 0x10008)) = lVar14 + (ulonglong)(uint)((int)pbVar5 - (int)(((byte *)(gen_frame + 0x10017)) + 1));
        goto LAB_00c6eab5;
      }
    }
  }
LAB_00c6e7d7: ;
  (*(ulonglong *)(gen_frame + 0x10008)) = 0xffffffffffffffff;
LAB_00c6eab5: ;
  F_00c47745((*(uint *)(gen_frame + 0x11018)) ^ (uint)(uint)(gen_frame + 0x0));
  return (*(ulonglong *)(gen_frame + 0x10008));
}

/* ref: __ftelli64 */
longlong F_00c6eac4(unsigned int gen_a0)
{
  GEN_ENTER(0xc6eac4u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int * piVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f67b8);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc6ead0;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)) = 0xffffffff;
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = 0xffffffff;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    (*(longlong *)(gen_frame + 0xc)) = F_00c6e77a((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c6eb27((gen_frame + 0x2c));
  }
  return (longlong)CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)),(undefined4)(*(longlong *)(gen_frame + 0xc)));
}

/* ref: FUN_00c6eb27 */
uint F_00c6eb27(unsigned int gen_a0)
{
  GEN_ENTER(0xc6eb27u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: __set_exp */
float10 F_00c6eb31(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eb31u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  double local_c;
  
  local_c = gen_bits2d(CONCAT26(((short)(*(undefined4 *)&gen_args[2]) + 0x3fe) * 0x10 | (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x800f,
                                (int6)(ulonglong)gen_d2bits((*(double *)&gen_args[0]))));
  return (float10)local_c;
}

/* ref: FUN_00c6eb5e */
uint F_00c6eb5e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eb5eu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (int)(short)(((*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 2)) >> 4 & 0x7ff) - 0x3fe);
}

/* ref: __add_exp */
float10 F_00c6eb77(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eb77u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  float10 fVar1;
  
  fVar1 = F_00c6eb31((*(double *)&gen_args[0]),(((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) >> 4 & 0x7ff) - 0x3fe) + (*(int *)&gen_args[2]));
  return fVar1;
}

/* ref: __set_bexp */
uint F_00c6eba5(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eba5u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  return (*(int *)&gen_args[2]) << 4 | (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x800f;
}

/* ref: __sptype */
uint F_00c6ebcd(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6ebcdu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  if ((*(uint *)&gen_args[1]) == 0x7ff00000) {
    if ((*(int *)&gen_args[0]) == 0) {
      return 1;
    }
  }
  else if (((*(uint *)&gen_args[1]) == 0xfff00000) && ((*(int *)&gen_args[0]) == 0)) {
    return 2;
  }
  if (((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff8) == 0x7ff8) {
    uVar1 = 3;
  }
  else {
    if ((((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff8) != 0x7ff0) || ((((*(uint *)&gen_args[1]) & 0x7ffff) == 0 && ((*(int *)&gen_args[0]) == 0)))) {
      return 0;
    }
    uVar1 = 4;
  }
  return uVar1;
}

/* ref: FUN_00c6ec33 */
float10 F_00c6ec33(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6ec33u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  
  fVar6 = (float10)0;
  bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)(*(double *)&gen_args[0]));
  if (bVar5 == (bVar5 || fVar6 == (float10)(*(double *)&gen_args[0]))) {
    if ((((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0x7ff0000000000000) == 0) &&
       ((((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0xfffff00000000) != 0 || ((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) != 0)))) {
      fVar3 = (float10)(*(double *)&gen_args[0]);
      iVar4 = -0x3fd;
      if (!(fVar3 <= fVar6) || ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3)) || fVar6 == fVar3)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      while (((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x10) == 0) {
        iVar2 = (int)CONCAT13((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)),CONCAT12((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)),(*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)))) << 1;
        (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)) = (ushort)iVar2;
        (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)) = (byte)((uint)iVar2 >> 0x10);
        (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)) = (byte)((uint)iVar2 >> 0x18);
        if (((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) & 0x80000000) != 0) {
          (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)) = (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)) | 1;
        }
        (*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) = (*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) << 1;
        iVar4 = iVar4 + -1;
      }
      uVar1 = CONCAT11((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)),(*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6))) & 0xffef;
      (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)) = (byte)uVar1;
      (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)) = (byte)(uVar1 >> 8);
      if (bVar5) {
        (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)) = (*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)) | 0x80;
      }
      fVar6 = F_00c6eb31(GEN_TOD(gen_bits2d(CONCAT17((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 7)),
                                            CONCAT16((*(undefined1 *)((char *)&(*(double *)&gen_args[0]) + 6)),
                                                     CONCAT24((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 4)),(*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0))))))),0);
    }
    else {
      fVar6 = F_00c6eb31((*(double *)&gen_args[0]),0);
      iVar4 = ((ushort)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x34) & 0x7ff) - 0x3fe;
    }
  }
  else {
    iVar4 = 0;
  }
  *(*(int * PTR32 *)&gen_args[2]) = iVar4;
  return fVar6;
}

/* ref: __raise_exc_ex */
unsigned int F_00c6ecf6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc6ecf6u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  uint * puVar1;
  uint * puVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (*(uint *)&gen_args[2]);
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  (*(uint * PTR32 *)&gen_args[0])[1] = 0;
  (*(uint * PTR32 *)&gen_args[0])[2] = 0;
  (*(uint * PTR32 *)&gen_args[0])[3] = 0;
  if (((*(uint *)&gen_args[2]) & 0x10) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 1;
    (*(uint *)&gen_args[2]) = 0xc000008f;
  }
  if ((uVar4 & 2) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 2;
    (*(uint *)&gen_args[2]) = 0xc0000093;
  }
  if ((uVar4 & 1) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 4;
    (*(uint *)&gen_args[2]) = 0xc0000091;
  }
  if ((uVar4 & 4) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 8;
    (*(uint *)&gen_args[2]) = 0xc000008e;
  }
  if ((uVar4 & 8) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] | 0x10;
    (*(uint *)&gen_args[2]) = 0xc0000090;
  }
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) << 4) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 0x10;
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) * 2) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 8;
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) >> 1) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 4;
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) >> 3) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 2;
  (*(uint * PTR32 *)&gen_args[0])[2] = (*(uint * PTR32 *)&gen_args[0])[2] ^ (~(*(*(uint * PTR32 *)&gen_args[1]) >> 5) ^ (*(uint * PTR32 *)&gen_args[0])[2]) & 1;
  bVar3 = F_00c6f57d();
  puVar2 = (*(uint * PTR32 *)&gen_args[5]);
  if ((bVar3 & 1) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 0x10;
  }
  if ((bVar3 & 4) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 8;
  }
  if ((bVar3 & 8) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 4;
  }
  if ((bVar3 & 0x10) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 2;
  }
  if ((bVar3 & 0x20) != 0) {
    (*(uint * PTR32 *)&gen_args[0])[3] = (*(uint * PTR32 *)&gen_args[0])[3] | 1;
  }
  uVar4 = *puVar1 & 0xc00;
  if (uVar4 == 0) {
    *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) & 0xfffffffc;
  }
  else {
    if (uVar4 == 0x400) {
      uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 0xfffffffd | 1;
    }
    else {
      if (uVar4 != 0x800) {
        if (uVar4 == 0xc00) {
          *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) | 3;
        }
        goto LAB_00c6ee55;
      }
      uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 0xfffffffe | 2;
    }
    *(*(uint * PTR32 *)&gen_args[0]) = uVar4;
  }
LAB_00c6ee55: ;
  uVar4 = *puVar1 & 0x300;
  if (uVar4 == 0) {
    uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 0xffffffeb | 8;
LAB_00c6ee8b: ;
    *(*(uint * PTR32 *)&gen_args[0]) = uVar4;
  }
  else {
    if (uVar4 == 0x200) {
      uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 0xffffffe7 | 4;
      goto LAB_00c6ee8b;
    }
    if (uVar4 == 0x300) {
      *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) & 0xffffffe3;
    }
  }
  *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) ^ ((*(int *)&gen_args[3]) << 5 ^ *(*(uint * PTR32 *)&gen_args[0])) & 0x1ffe0;
  (*(uint * PTR32 *)&gen_args[0])[8] = (*(uint * PTR32 *)&gen_args[0])[8] | 1;
  if ((*(int *)&gen_args[6]) == 0) {
    (*(uint * PTR32 *)&gen_args[0])[8] = (*(uint * PTR32 *)&gen_args[0])[8] & 0xffffffe3 | 2;
    *((undefined8 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 4))) = *(undefined8 *)(*(uint * PTR32 *)&gen_args[4]);
    (*(uint * PTR32 *)&gen_args[0])[0x18] = (*(uint * PTR32 *)&gen_args[0])[0x18] | 1;
    (*(uint * PTR32 *)&gen_args[0])[0x18] = (*(uint * PTR32 *)&gen_args[0])[0x18] & 0xffffffe3 | 2;
    *((undefined8 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 0x14))) = *(undefined8 *)(*(uint * PTR32 *)&gen_args[5]);
  }
  else {
    (*(uint * PTR32 *)&gen_args[0])[8] = (*(uint * PTR32 *)&gen_args[0])[8] & 0xffffffe1;
    (*(uint * PTR32 *)&gen_args[0])[4] = *(*(uint * PTR32 *)&gen_args[4]);
    (*(uint * PTR32 *)&gen_args[0])[0x18] = (*(uint * PTR32 *)&gen_args[0])[0x18] | 1;
    (*(uint * PTR32 *)&gen_args[0])[0x18] = (*(uint * PTR32 *)&gen_args[0])[0x18] & 0xffffffe1;
    (*(uint * PTR32 *)&gen_args[0])[0x14] = *(*(uint * PTR32 *)&gen_args[5]);
  }
  F_00c6f58d();
  gen_imp_RaiseException((*(uint *)&gen_args[2]),0,1,(ULONG_PTR *)&(*(uint * PTR32 *)&gen_args[0]));
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if (((*(uint * PTR32 *)&gen_args[0])[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar4 = *(*(uint * PTR32 *)&gen_args[0]) & 3;
  if (uVar4 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar4 == 1) {
      uVar4 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar4 != 2) {
        if (uVar4 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_00c6ef90;
      }
      uVar4 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar4;
  }
LAB_00c6ef90: ;
  uVar4 = *(*(uint * PTR32 *)&gen_args[0]) >> 2 & 7;
  if (uVar4 == 0) {
    uVar4 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_00c6efbc;
    }
    uVar4 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar4;
LAB_00c6efbc: ;
  if ((*(int *)&gen_args[6]) == 0) {
    *(undefined8 *)puVar2 = *((undefined8 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 0x14)));
  }
  else {
    *puVar2 = (*(uint * PTR32 *)&gen_args[0])[0x14];
  }
  return 0;
}

/* ref: __raise_exc */
unsigned int F_00c6efd2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc6efd2u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00c6ecf6(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return 0;
}

/* ref: __raise_excf */
unsigned int F_00c6eff5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc6eff5u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00c6ecf6(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return 0;
}

/* ref: __handle_exc */
byte F_00c6f018(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6f018u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  double * param_2 = (double *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  
  uVar5 = param_1 & 0x1f;
  bVar3 = true;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    F_00c6f5c9(1);
    uVar5 = param_1 & 0x17;
    goto LAB_00c6f1da;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    F_00c6f5c9(4);
    uVar5 = param_1 & 0x1b;
    goto LAB_00c6f1da;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_00c6f1da;
    bVar6 = (param_1 & 0x10) != 0;
    dVar1 = *param_2;
    if (GEN_ISNAN(dVar1) == (GEN_ISNAN(dVar1) || dVar1 == 0.0)) {
      fVar7 = F_00c6ec33(*param_2,&(*(int *)(gen_frame + 0x14)));
      dVar1 = (double)fVar7;
      (*(uint *)(gen_frame + 0x8)) = (uint)(ulonglong)gen_d2bits(dVar1);
      (*(byte *)(gen_frame + 0xc)) = (byte)((ulonglong)gen_d2bits(dVar1) >> 0x20);
      (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)((ulonglong)gen_d2bits(dVar1) >> 0x28);
      (*(ushort *)(gen_frame + 0xe)) = (ushort)((ulonglong)gen_d2bits(dVar1) >> 0x30);
      iVar4 = (*(int *)(gen_frame + 0x14)) + -0x600;
      if (iVar4 < -0x432) {
        dVar1 = dVar1 * *(double *)&REFG(undefined, 0x108bec8);
        bVar6 = bVar3;
LAB_00c6f1ba: ;
        (*(uint *)(gen_frame + 0x8)) = (uint)(ulonglong)gen_d2bits(dVar1);
        (*(byte *)(gen_frame + 0xc)) = (byte)((ulonglong)gen_d2bits(dVar1) >> 0x20);
        (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)((ulonglong)gen_d2bits(dVar1) >> 0x28);
        (*(ushort *)(gen_frame + 0xe)) = (ushort)((ulonglong)gen_d2bits(dVar1) >> 0x30);
      }
      else {
        (*(ushort *)(gen_frame + 0xe)) = (*(ushort *)(gen_frame + 0xe)) & 0xf | 0x10;
        if (iVar4 < -0x3fd) {
          iVar4 = -0x3fd - iVar4;
          do {
            if ((((*(uint *)(gen_frame + 0x8)) & 1) != 0) && (!bVar6)) {
              bVar6 = bVar3;
            }
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) >> 1;
            if (((*(byte *)(gen_frame + 0xc)) & 1) != 0) {
              (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) | 0x80000000;
            }
            uVar5 = CONCAT22((*(ushort *)(gen_frame + 0xe)),CONCAT11((*(undefined1 *)(gen_frame + 0xd)),(*(byte *)(gen_frame + 0xc)))) >> 1;
            (*(byte *)(gen_frame + 0xc)) = (byte)uVar5;
            (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)(uVar5 >> 8);
            (*(ushort *)(gen_frame + 0xe)) = (*(ushort *)(gen_frame + 0xe)) >> 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (dVar1 <= 0.0 && (!GEN_ISNAN(dVar1) && dVar1 != 0.0)) {
          dVar1 = -gen_bits2d(CONCAT26((*(ushort *)(gen_frame + 0xe)),CONCAT15((*(undefined1 *)(gen_frame + 0xd)),CONCAT14((*(byte *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x8))))));
          goto LAB_00c6f1ba;
        }
      }
      *param_2 = gen_bits2d(CONCAT26((*(ushort *)(gen_frame + 0xe)),CONCAT15((*(undefined1 *)(gen_frame + 0xd)),CONCAT14((*(byte *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x8))))));
      bVar3 = bVar6;
    }
    if (bVar3) {
      F_00c6f5c9(0x10);
    }
    uVar5 = (*(uint *)(gen_frame + 0x18)) & 0xfffffffd;
    (*(uint *)(gen_frame + 0x18)) = uVar5;
    goto LAB_00c6f1da;
  }
  F_00c6f5c9(8);
  uVar5 = param_3 & 0xc00;
  dVar1 = *(double *)&REFG(undefined, 0x134bc90);
  dVar2 = *(double *)&REFG(undefined, 0x134bc90);
  if (uVar5 == 0) {
    if (!(*param_2 <= 0.0) == GEN_ISNAN(*param_2)) {
LAB_00c6f0f8: ;
      dVar1 = -dVar2;
    }
LAB_00c6f0fa: ;
    *param_2 = dVar1;
  }
  else {
    if (uVar5 == 0x400) {
      dVar1 = *(double *)&REFG(undefined, 0x134bca0);
      if (!(*param_2 <= 0.0) == GEN_ISNAN(*param_2)) goto LAB_00c6f0f8;
      goto LAB_00c6f0fa;
    }
    dVar2 = *(double *)&REFG(undefined, 0x134bca0);
    if (uVar5 == 0x800) {
      if (!(*param_2 <= 0.0) == GEN_ISNAN(*param_2)) goto LAB_00c6f0f8;
      goto LAB_00c6f0fa;
    }
    if (uVar5 == 0xc00) {
      dVar1 = *(double *)&REFG(undefined, 0x134bca0);
      if (!(*param_2 <= 0.0) == GEN_ISNAN(*param_2)) goto LAB_00c6f0f8;
      goto LAB_00c6f0fa;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_00c6f1da: ;
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    F_00c6f5c9(0x20);
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}

/* ref: __set_errno_from_matherr */
uint F_00c6f1fc(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f1fcu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * in_EAX;
  int * piVar1;
  
  if (param_1 == 1) {
    in_EAX = F_00c51f85();
    *in_EAX = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x22;
    return (uint)piVar1;
  }
  return (uint)in_EAX;
}

/* ref: __get_fname */
uint F_00c6f229(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f229u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x134bcb8))[iVar1 * 2] == param_1) {
      return *(uint *)(iVar1 * 8 + 0x134bcbc);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  return 0;
}

/* ref: __errcode */
uint F_00c6f24f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f24fu, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uStack_8;
  
  if (((byte)param_1 & 0x20) == 0) {
    if (((byte)param_1 & 8) != 0) {
      return 1;
    }
    if (((byte)param_1 & 4) == 0) {
      if (((byte)param_1 & 1) == 0) {
        return ((byte)param_1 & 2) * 2;
      }
      uStack_8 = 3;
    }
    else {
      uStack_8 = 2;
    }
  }
  else {
    uStack_8 = 5;
  }
  return uStack_8;
}

/* ref: __umatherr */
float10 F_00c6f283(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc6f283u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x134bcb8))[iVar1 * 2] == param_2) {
      (*(int *)(gen_frame + 0x10)) = *(int *)(iVar1 * 8 + 0x134bcbc);
      goto LAB_00c6f2a1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  (*(int *)(gen_frame + 0x10)) = 0;
LAB_00c6f2a1: ;
  if ((*(int *)(gen_frame + 0x10)) != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = param_3;
    (*(undefined4 *)(gen_frame + 0x18)) = param_4;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_5;
    (*(undefined4 *)(gen_frame + 0x20)) = param_6;
    (*(uint *)(gen_frame + 0x24)) = param_7;
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x28)) = param_8;
    F_00c6f59e(param_9,0xffff);
    uVar2 = F_00c7db7d(&(*(undefined4 *)(gen_frame + 0xc)));
    if (uVar2 == 0) {
      F_00c6f1fc(param_1);
    }
    return ((float10)GEN_TOD(gen_bits2d(CONCAT44((*(undefined4 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x24))))));
  }
  F_00c6f59e(param_9,0xffff);
  F_00c6f1fc(param_1);
  return ((float10)GEN_TOD(gen_bits2d(CONCAT44(param_8,param_7))));
}

/* ref: __handle_qnan1 */
float10 F_00c6f323(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6f323u, gen_a0, 0u, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double param_2 = (double)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  if (REFG(int, 0x134c1bc) == 0) {
    uVar3 = (undefined4)((ulonglong)gen_d2bits(param_2) >> 0x20);
    fVar2 = F_00c6f283(1,param_1,(int)(ulonglong)gen_d2bits(param_2),uVar3,0,0,
                       (int)(ulonglong)gen_d2bits(param_2),uVar3,param_3);
    return fVar2;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x21;
  F_00c6f59e(param_3,0xffff);
  return (float10)param_2;
}

