#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a200d0 */
byte F_00a200d0(float gen_a0)
{
  GEN_ENTER(0xa200d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  double dVar1;
  
  dVar1 = (double)param_1;
  if (((REFG(double, 0x10909a8) <= dVar1) && (dVar1 <= REFG(double, 0x10909a0))) && (!GEN_ISNAN(dVar1))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a20110 */
uint F_00a20110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)*(float *)param_2)));
  fVar2 = ((float10)GEN_TOD(fcos((float10)*(float *)param_2)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[5] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = (undefined4)gen_fl2bits((float)fVar1);
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = (undefined4)gen_fl2bits(((float)GEN_TOF(-(float10)(float)fVar1)));
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[0xe] = 0;
  F_0065ed60(param_1,*(float *)(param_2 + 4));
  F_0065ee80(param_1,*(float *)(param_2 + 8));
  return (uint)param_1;
}

/* ref: FUN_00a201b0 */
uint F_00a201b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa201b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)*(float *)(param_2 + 8))));
  fVar3 = ((float10)GEN_TOD(fcos((float10)*(float *)(param_2 + 8))));
  param_1[2] = 0.0;
  *param_1 = (float)fVar3;
  param_1[6] = 0.0;
  param_1[8] = 0.0;
  param_1[1] = (float)fVar2;
  param_1[9] = 0.0;
  param_1[10] = fVar1;
  param_1[4] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[5] = (float)fVar3;
  param_1[0xe] = 0.0;
  F_0065ed60(param_1,*(float *)(param_2 + 4));
  F_0065ec40(param_1,*(float *)param_2);
  return (uint)param_1;
}

/* ref: FUN_00a20250 */
uint F_00a20250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa20250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float * pfVar2;
  
  iVar1 = *(int *)(in_ecx + 0x70);
  (*(float *)(gen_frame + 0x8)) = param_2;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  pfVar2 = &(*(float *)(gen_frame + 0x8));
  if (!((float10)1 < (float10)param_2)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)(iVar1 + 0x70) = *pfVar2;
  return (uint)pfVar2;
}

/* ref: FUN_00a20290 */
ushort F_00a20290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') << 4 | *(ushort *)((int)this + 8) & 0xffef;
  *(ushort *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_00a202c0 */
uint F_00a202c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa202c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x70);
  *(ushort *)(uVar1 + 8) = (ushort)((char)param_1 != '\0') << 4 | *(ushort *)(uVar1 + 8) & 0xffef;
  return uVar1;
}

/* ref: FUN_00a202f0 */
uint F_00a202f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa202f0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 0xf0) {
    if (0xec < bVar1) {
      return 0;
    }
    if (bVar1 < 0xe8) {
      return 0;
    }
    if (1 < (byte)(bVar1 + 0x16)) {
      return 0;
    }
  }
  else if (bVar1 != 0xff) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a20320 */
byte F_00a20320(unsigned int gen_a0)
{
  GEN_ENTER(0xa20320u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  return *param_1 == -0x14;
}

/* ref: FUN_00a20340 */
uint F_00a20340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20340u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0042d160(param_1,2);
  F_0042d160(param_1,param_2);
  F_0042d160(param_1,1);
  uVar1 = F_0042d160(param_1,3);
  return uVar1;
}

/* ref: FUN_00a20380 */
uint F_00a20380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa20380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0042d160(param_1,2);
  F_0042d160(param_1,param_2);
  F_0042d160(param_1,2);
  F_0042d160(param_1,param_3);
  uVar1 = F_0042d160(param_1,3);
  return uVar1;
}

/* ref: FUN_00a203c0 */
uint F_00a203c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa203c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  char * pcVar2;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((char)param_3 == 'n') {
    uVar1 = F_0042a990(param_2);
    pcVar2 = "ERROR: mismatch parameter type (\'%s\' is not numeric)";
  }
  else {
    if ((char)param_3 != 's') goto LAB_00a2041c;
    uVar1 = F_0042a990(param_2);
    pcVar2 = "ERROR: mismatch parameter type (\'%s\' is not string)";
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,pcVar2,uVar1);
LAB_00a2041c: ;
  F_0042e430((undefined *)((int)this + 0x18),((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0xfffffff8;
}

/* ref: FUN_00a20450 */
uint F_00a20450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20450u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  bool bVar1;
  bool bVar2;
  char * pcVar3;
  char cVar4;
  char * pcVar5;
  int local_c;
  
  pcVar3 = (*(char * PTR32 *)&gen_args[1]);
  cVar4 = *(*(char * PTR32 *)&gen_args[1]);
  bVar2 = false;
  local_c = 1;
  bVar1 = false;
  pcVar5 = (*(char * PTR32 *)&gen_args[1]);
  if (cVar4 != '\0') {
    do {
      if (bVar1) break;
      (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[1]), 1, 3),cVar4)));
      pcVar5 = pcVar5 + 1;
      F_0042d160((*(undefined * PTR32 *)&gen_args[0]),(*(char * PTR32 *)&gen_args[1]));
      switch((unsigned int)(uintptr_t)(cVar4)) {
      case '<': ;
        if (!bVar2) {
          local_c = local_c + 1;
        }
        break;
      case '>': ;
        if ((!bVar2) && (local_c = local_c + -1, local_c == 0)) {
          bVar1 = true;
        }
        break;
      case '[': ;
        bVar2 = true;
        break;
      case ']': ;
        bVar2 = false;
      }
      cVar4 = *pcVar5;
    } while (cVar4 != '\0');
    if ((local_c == 0) && (!bVar2)) {
      return (int)pcVar5 - (int)pcVar3;
    }
  }
  return 0xfffffff9;
}

/* ref: FUN_00a20540 */
uint F_00a20540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20540u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  byte * pbVar1;
  int iVar2;
  
  pbVar1 = param_1 + 1;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 0xf0: ;
    *param_2 = (uint)*pbVar1;
    return 2;
  case 0xf1: ;
    *param_2 = (uint)*pbVar1 << 8;
    return 2;
  case 0xf2: ;
    *param_2 = (uint)CONCAT11(*pbVar1,param_1[2]);
    return 3;
  case 0xf3: ;
    *param_2 = (uint)*pbVar1 << 0x10;
    return 2;
  case 0xf4: ;
    *param_2 = (uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[2];
    return 3;
  case 0xf5: ;
    *param_2 = (uint)CONCAT11(*pbVar1,param_1[2]) << 8;
    return 3;
  case 0xf6: ;
    iVar2 = (uint)*pbVar1 << 8;
    break;
  case 0xf7: ;
    *param_2 = (uint)*pbVar1 << 0x18;
    return 2;
  case 0xf8: ;
    *param_2 = (uint)*pbVar1 * 0x1000000 + (uint)(byte)param_1[2];
    return 3;
  case 0xf9: ;
    *param_2 = ((uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[2]) * 0x100;
    return 3;
  case 0xfa: ;
    iVar2 = (uint)*pbVar1 << 0x10;
    break;
  case 0xfb: ;
    *param_2 = (uint)CONCAT11(*pbVar1,param_1[2]) << 0x10;
    return 3;
  case 0xfc: ;
    *param_2 = (uint)CONCAT11(*pbVar1,param_1[2]) * 0x10000 + (uint)(byte)param_1[3];
    return 4;
  case 0xfd: ;
    *param_2 = (uint)CONCAT21(CONCAT11(*pbVar1,param_1[2]),param_1[3]) << 8;
    return 4;
  case 0xfe: ;
    *param_2 = CONCAT31(CONCAT21(CONCAT11(*pbVar1,param_1[2]),param_1[3]),param_1[4]);
    return 5;
  default: ;
    return 0;
  }
  *param_2 = (iVar2 + (uint)(byte)param_1[2]) * 0x100 + (uint)(byte)param_1[3];
  return 4;
}

/* ref: FUN_00a20720 */
uint F_00a20720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20720u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char * pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  cVar2 = (char)param_2;
  if (param_2 < 0xcf) {
    *param_1 = cVar2 + '\x01';
    return 1;
  }
  if ((param_2 & 0xffffff00) == 0) {
    *param_1 = -0x10;
    param_1[1] = cVar2;
    return 2;
  }
  cVar3 = (char)(param_2 >> 8);
  if ((param_2 & 0xffff00ff) == 0) {
    *param_1 = -0xf;
    param_1[1] = cVar3;
    return 2;
  }
  cVar4 = (char)(param_2 >> 0x10);
  if ((param_2 & 0xff00ffff) == 0) {
    *param_1 = -0xd;
    param_1[1] = cVar4;
    return 2;
  }
  cVar5 = (char)(param_2 >> 0x18);
  if ((param_2 & 0xffffff) == 0) {
    *param_1 = -9;
    param_1[1] = cVar5;
    return 2;
  }
  if ((param_2 & 0xffff0000) == 0) {
    *param_1 = -0xe;
    param_1[1] = cVar3;
    param_1[2] = cVar2;
    return 3;
  }
  if ((param_2 & 0xff00ff00) == 0) {
    *param_1 = -0xc;
    param_1[1] = cVar4;
    param_1[2] = cVar2;
    return 3;
  }
  if ((param_2 & 0xff0000ff) == 0) {
    *param_1 = -0xb;
    param_1[1] = cVar4;
    param_1[2] = cVar3;
    return 3;
  }
  if ((param_2 & 0xffff00) == 0) {
    *param_1 = -8;
    param_1[1] = cVar5;
    param_1[2] = cVar2;
    return 3;
  }
  if ((param_2 & 0xff00ff) == 0) {
    *param_1 = -7;
    param_1[1] = cVar5;
    param_1[2] = cVar3;
    return 3;
  }
  if ((param_2 & 0xffff) == 0) {
    *param_1 = -5;
    param_1[1] = cVar5;
    param_1[2] = cVar4;
    return 3;
  }
  if ((param_2 & 0xff000000) == 0) {
    *param_1 = -10;
    cVar5 = cVar4;
  }
  else {
    if ((param_2 & 0xff0000) != 0) {
      pcVar1 = param_1 + 1;
      if ((param_2 & 0xff00) == 0) {
        *param_1 = -4;
        *pcVar1 = cVar5;
        param_1[2] = cVar4;
        param_1[3] = cVar2;
        return 4;
      }
      if (cVar2 == '\0') {
        *param_1 = -3;
        *pcVar1 = cVar5;
        param_1[2] = cVar4;
        param_1[3] = cVar3;
        return 4;
      }
      *param_1 = -2;
      *pcVar1 = cVar5;
      param_1[2] = cVar4;
      param_1[3] = cVar3;
      param_1[4] = cVar2;
      return 5;
    }
    *param_1 = -6;
  }
  param_1[1] = cVar5;
  param_1[2] = cVar3;
  param_1[3] = cVar2;
  return 4;
}

/* ref: FUN_00a20910 */
uint F_00a20910(unsigned int gen_a0)
{
  GEN_ENTER(0xa20910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  bool bVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  pcVar3 = (char *)F_0042a990(param_1);
  cVar2 = *pcVar3;
  uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),cVar2);
  bVar1 = false;
  while( true ) {
    if (cVar2 == '\0') {
      return uVar5;
    }
    cVar2 = (char)uVar4;
    if (cVar2 == '\x02') break;
    if (bVar1) {
      if (cVar2 == '>') {
        bVar1 = false;
      }
      pcVar3 = pcVar3 + 1;
    }
    else if (cVar2 == '<') {
      bVar1 = true;
      pcVar3 = pcVar3 + 1;
    }
    else {
      uVar4 = F_0042acc0(uVar4);
      pcVar3 = pcVar3 + uVar4;
      uVar5 = uVar5 + 1;
    }
    cVar2 = *pcVar3;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar2);
  }
  return 0;
}

/* ref: FUN_00a20970 */
uint F_00a20970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  bool bVar2;
  char cVar3;
  byte * pbVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  
  pbVar4 = (byte *)F_0042a990(param_1);
  this_00 = (undefined *)((int)this + 0x4c);
  bVar2 = false;
  uVar5 = F_0042aca0(this_00);
  bVar1 = *pbVar4;
  for (uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
      (bVar1 != 0 && (cVar3 = (char)uVar5, cVar3 != '\x02'));
      uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1)) {
    if (bVar2) {
      if (cVar3 == '>') {
        bVar2 = false;
      }
      pbVar4 = pbVar4 + 1;
    }
    else if (cVar3 == '<') {
      bVar2 = true;
      pbVar4 = pbVar4 + 1;
    }
    else {
      uVar5 = F_0042acc0(uVar5);
      uVar6 = uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar5 = F_0042d160(this_00,(uint)*pbVar4);
          pbVar4 = pbVar4 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    bVar1 = *pbVar4;
  }
  uVar5 = F_0042ccf0(param_1,this_00);
  return uVar5;
}

/* ref: Component::Text::TextChecker::vf18 */
uint F_00a209f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa209f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  F_0042d160(param_4,0x20);
  return 1;
}

/* ref: Component::Text::TextChecker::vf19 */
uint F_00a20a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  F_0042d160(param_4,0x2d);
  return 1;
}

/* ref: Component::Text::TextModule::vf5 */
uint F_00a20da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa20da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2,0xffff,this + 0x18,param_3);
  return uVar1;
}

/* ref: Component::Text::TextModule::vf4 */
uint F_00a20dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2,param_3,this + 0x18,param_4);
  return uVar1;
}

/* ref: Component::Text::TextModule::vf2 */
uint F_00a20e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa20e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * PTR32 * ppuVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined * PTR32 *)(gen_frame + 0x4)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_2,param_3,0xffff,this + 0x18,((undefined * PTR32 *)(gen_frame + 0x4)));
  if (uVar1 == 1) {
    ppuVar2 = ((undefined * PTR32 *)(gen_frame + 0x4));
  }
  else {
    ppuVar2 = &REFG(undefined * PTR32, 0x12fd328);
  }
  F_0042cbc0(param_1,ppuVar2);
  F_0042c880(((undefined * PTR32 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)param_1;
}

/* ref: Component::Text::TextModule::vf10 */
uint F_00a20e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa20e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * param_3 = (byte *)(uintptr_t)gen_a3;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  byte * pbVar4;
  byte * pbVar5;
  uint uVar6;
  byte * pbVar7;
  
  pbVar4 = (byte *)F_0042a990(param_2);
  pbVar5 = pbVar4;
  pbVar2 = pbVar4;
  pbVar3 = pbVar4;
  do {
    for (; pbVar7 = pbVar3, pbVar2 < pbVar7; pbVar2 = pbVar2 + 1) {
      pbVar5 = (byte *)F_0042d160(param_1,(uint)*pbVar2);
      pbVar3 = pbVar7;
    }
    bVar1 = *pbVar7;
    if (bVar1 == 0) break;
    if (bVar1 == 2) {
      uVar6 = pbVar7[2] + 3;
    }
    else {
      uVar6 = F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pbVar5) >> 8),bVar1));
    }
    pbVar5 = pbVar7 + uVar6 - (int)pbVar4;
    pbVar2 = pbVar7;
    pbVar3 = pbVar7 + uVar6;
  } while (pbVar5 <= param_3);
  return (int)pbVar7 - (int)pbVar4;
}

/* ref: Component::Text::TextModule::vf12 */
uint F_00a20ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x168) = param_2;
  return param_2;
}

/* ref: FUN_00a20f00 */
uint F_00a20f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  F_0042d540(param_4,&REFG(undefined, 0x10e3d64));
  return 1;
}

/* ref: FUN_00a20f20 */
uint F_00a20f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0x38))))
                    ((int)this + -4,param_1,param_2,param_3,0,0,param_4);
  return uVar1;
}

/* ref: FUN_00a20f50 */
uint F_00a20f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0x38))))
                    ((int)this + -4,param_1,param_2,param_3,0,1,param_4);
  return uVar1;
}

/* ref: FUN_00a20f80 */
uint F_00a20f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0x38))))
                    ((int)this + -4,param_1,param_2,param_3,1,2,param_4);
  return uVar1;
}

/* ref: FUN_00a20fb0 */
uint F_00a20fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa20fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0x38))))
                    ((int)this + -4,param_1,param_2,param_3,0,3,param_4);
  return uVar1;
}

/* ref: FUN_00a20fe0 */
byte F_00a20fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xa20fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4),"Attributive");
    *(uint *)((int)this + 8) = uVar1;
    return uVar1 != 0;
  }
  return 1;
}

/* ref: FUN_00a21010 */
uint F_00a21010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00a21030 */
uint F_00a21030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa21030u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * pcVar1;
  
  if (param_2 < 0) {
    return -param_2 - 1;
  }
  pcVar1 = (char *)F_00cb0910(param_1,param_2);
  return (int)*pcVar1;
}

/* ref: FUN_00a21060 */
uint F_00a21060(unsigned int gen_a0)
{
  GEN_ENTER(0xa21060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f0c));
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar1;
}

/* ref: Component::Text::Localize::NounCh::vf1 */
byte F_00a21090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  undefined * this_00;
  char * pcVar5;
  int * piVar6;
  uint uVar7;
  undefined * this_01;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(byte *)(gen_frame + 0x3)) = 0;
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))
                            (*(int * PTR32 *)(this + 4),*(undefined4 *)(param_1 + 0x58))));
  if (piVar4 != (int *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(param_1 + 0x54) * 8)));
    iVar2 = puVar1[1];
    if (iVar2 < 0) {
      cVar3 = -1 - (char)iVar2;
    }
    else {
      pcVar5 = (char *)F_00cb0910(this_00,iVar2);
      cVar3 = *pcVar5;
    }
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))(*(int * PTR32 *)(this + 8),(int)cVar3)));
    if (piVar6 != (int *)0x0) {
      uVar7 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(param_1 + 0x5c),10,0,0);
      F_0042ccf0(param_2,uVar7);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar8 = 0x28;
      this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6)));
      uVar7 = F_00cb0950(this_01,uVar8);
      F_0042e370(param_2,uVar7);
      if (*(char *)(param_1 + 0x68) != '\0') {
        F_0042e370(param_2,(char *)(param_1 + 0x68));
      }
      uVar7 = F_00cb0950(this_00,*puVar1);
      F_0042e370(param_2,uVar7);
      (*(byte *)(gen_frame + 0x3)) = 1;
      ((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6);
    }
    ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (*(byte *)(gen_frame + 0x3));
}

/* ref: FUN_00a211b0 */
uint F_00a211b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa211b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f18));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = F_00406b30(*(int *)((int)this + 0x10));
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar2;
}

/* ref: FUN_00a215a0 */
uint F_00a215a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa215a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f24));
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar1;
}

/* ref: Component::Text::Localize::NounEn::vf1 */
byte F_00a215d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa215d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 * puVar1;
  char cVar2;
  int * piVar3;
  int * piVar4;
  undefined * this_00;
  char * pcVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  int iVar9;
  byte bVar10;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))
                            (*(int * PTR32 *)(this + 4),*(undefined4 *)(param_1 + 0x58))));
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))
                            (*(int * PTR32 *)(this + 8),*(undefined4 *)(param_1 + 0x60))));
  if (piVar3 == (int *)0x0) {
    bVar10 = 0;
  }
  else if (piVar4 == (int *)0x0) {
    bVar10 = 0;
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  }
  else {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(param_1 + 0x54) * 0x14)));
    iVar9 = puVar1[2];
    if (iVar9 < 0) {
      (*(char *)(gen_frame + 0x8)) = -1 - (char)iVar9;
    }
    else {
      pcVar5 = (char *)F_00cb0910(this_00,iVar9);
      (*(char *)(gen_frame + 0x8)) = *pcVar5;
    }
    iVar9 = puVar1[4];
    if (iVar9 < 0) {
      cVar2 = -1 - (char)iVar9;
    }
    else {
      pcVar5 = (char *)F_00cb0910(this_00,iVar9);
      cVar2 = *pcVar5;
    }
    iVar9 = (*(char *)(gen_frame + 0x8)) * 3 + 2;
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x5c) == 1) {
        pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
        uVar6 = F_00cb0950(pvVar7,iVar9);
        F_0042e430(param_2,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2,param_1 + 0x68);
        }
        uVar8 = *puVar1;
      }
      else {
        iVar9 = (*(char *)(gen_frame + 0x8)) * 3 + 3;
        pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
        uVar6 = F_00cb0950(pvVar7,iVar9);
        F_0042e430(param_2,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2,param_1 + 0x68);
        }
        uVar8 = puVar1[1];
      }
      uVar6 = F_00cb0950(this_00,uVar8);
      F_0042e370(param_2,uVar6);
    }
    else if (*(int *)(param_1 + 0x5c) == 1) {
      uVar6 = F_00cb0950(this_00,*puVar1);
      F_0042e430(param_2,uVar6);
    }
    else {
      uVar6 = F_00cb0950(this_00,puVar1[1]);
      F_0042e430(param_2,uVar6);
    }
    uVar6 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x14)),*(undefined4 *)(param_1 + 0x5c),10,0,0);
    F_0042d750(param_2,&REFG(undefined, 0x14a3080),uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    bVar10 = 1;
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  }
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return bVar10;
}

/* ref: FUN_00a217a0 */
uint F_00a217a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa217a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f30));
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar1;
}

/* ref: Component::Text::Localize::NounFr::vf1 */
byte F_00a217d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa217d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  undefined * this_00;
  char * pcVar4;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))
                            (*(int * PTR32 *)(this + 4),*(undefined4 *)(param_1 + 0x58))));
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))
                            (*(int * PTR32 *)(this + 8),*(undefined4 *)(param_1 + 0x60))));
  if (piVar2 == (int *)0x0) {
    bVar10 = 0;
  }
  else if (piVar3 == (int *)0x0) {
    bVar10 = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  else {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(param_1 + 0x54) * 0x18)));
    iVar7 = puVar1[2];
    if (iVar7 < 0) {
      (*(char *)(gen_frame + 0xc)) = -1 - (char)iVar7;
    }
    else {
      pcVar4 = (char *)F_00cb0910(this_00,iVar7);
      (*(char *)(gen_frame + 0xc)) = *pcVar4;
    }
    iVar7 = puVar1[3];
    if (iVar7 < 0) {
      (*(char *)(gen_frame + 0x10)) = -1 - (char)iVar7;
    }
    else {
      pcVar4 = (char *)F_00cb0910(this_00,iVar7);
      (*(char *)(gen_frame + 0x10)) = *pcVar4;
    }
    iVar7 = puVar1[4];
    if (iVar7 < 0) {
      cVar9 = -1 - (char)iVar7;
    }
    else {
      pcVar4 = (char *)F_00cb0910(this_00,iVar7);
      cVar9 = *pcVar4;
    }
    iVar7 = puVar1[5];
    if (iVar7 < 0) {
      cVar8 = -1 - (char)iVar7;
    }
    else {
      pcVar4 = (char *)F_00cb0910(this_00,iVar7);
      cVar8 = *pcVar4;
    }
    iVar7 = ((*(char *)(gen_frame + 0xc)) + 6 + (*(char *)(gen_frame + 0x10)) * 2) * 4;
    if (cVar8 == '\0') {
      if (cVar9 == '\0') {
        iVar7 = iVar7 + 3;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
        uVar6 = F_00cb0950(pvVar5,iVar7);
        F_0042e430(param_2,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2,param_1 + 0x68);
        }
        uVar11 = *puVar1;
      }
      else if (*(int *)(param_1 + 0x5c) < 2) {
        iVar7 = iVar7 + 1;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
        uVar6 = F_00cb0950(pvVar5,iVar7);
        F_0042e430(param_2,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2,param_1 + 0x68);
        }
        uVar11 = *puVar1;
      }
      else {
        iVar7 = iVar7 + 2;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
        uVar6 = F_00cb0950(pvVar5,iVar7);
        F_0042e430(param_2,uVar6);
        if (*(char *)(param_1 + 0x68) != '\0') {
          F_0042e370(param_2,param_1 + 0x68);
        }
        uVar11 = puVar1[1];
      }
    }
    else {
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
      uVar6 = F_00cb0950(pvVar5,iVar7);
      F_0042e430(param_2,uVar6);
      uVar11 = *puVar1;
    }
    uVar6 = F_00cb0950(this_00,uVar11);
    F_0042e370(param_2,uVar6);
    uVar6 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x24)),*(undefined4 *)(param_1 + 0x5c),10,0,0);
    F_0042d750(param_2,&REFG(undefined, 0x14a3080),uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x24)));
    bVar10 = 1;
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return bVar10;
}

/* ref: FUN_00a21a20 */
uint F_00a21a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f3c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = (undefined4 *)F_00406bb0(4,0,0);
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  return (uint)this;
}

/* ref: FUN_00a21a70 */
uint F_00a21a70(unsigned int gen_a0)
{
  GEN_ENTER(0xa21a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f3c));
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  return uVar1;
}

/* ref: Component::Text::Localize::NounJa::vf1 */
byte F_00a21aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(byte *)(gen_frame + 0x3)) = 0;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))
                            (*(int * PTR32 *)(this + 4),*(undefined4 *)(param_1 + 0x58))));
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x24))))
                            (*(int * PTR32 *)(this + 8),*(undefined4 *)(param_1 + 0x60))));
  if (piVar1 != (int *)0x0) {
    if (piVar2 != (int *)0x0) {
      if (*(int *)(param_1 + 0x5c) < 2) {
        uVar5 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
        uVar4 = F_00cb0950(pvVar3,uVar5);
        F_0042e430(param_2,uVar4);
      }
      else {
        uVar5 = 1;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
        uVar4 = F_00cb0950(pvVar3,uVar5);
        F_0042e430(param_2,uVar4);
        uVar4 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(param_1 + 0x5c),10,0,0);
        F_0042d750(param_2,&REFG(undefined, 0x14a3080),uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      }
      if (*(char *)(param_1 + 0x68) != '\0') {
        F_0042e370(param_2,param_1 + 0x68);
      }
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(param_1 + 0x54) * 4)));
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
      uVar4 = F_00cb0950(pvVar3,uVar5);
      F_0042e370(param_2,uVar4);
      (*(byte *)(gen_frame + 0x3)) = 1;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (*(byte *)(gen_frame + 0x3));
}

/* ref: FUN_00a21bc0 */
uint F_00a21bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa21bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pcVar2 = (char *)F_0042a990(param_1);
  if ((*(uint *)&REFG(undefined, 0x14a2b74) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a2b74) = *(uint *)&REFG(undefined, 0x14a2b74) | 1;
    F_0042b630(&REFG(undefined, 0x14a2b20));
    F_00c47de6(((code *)REFP(0x107c4c0)));
  }
  uVar3 = F_0042aca0(&REFG(undefined, 0x14a2b20));
  cVar1 = *pcVar2;
  uVar4 = CONCAT31((int3)(uVar3 >> 8),cVar1);
  while (cVar1 != '\0') {
    if ((char)uVar4 == '\x02') {
      uVar5 = F_00a24d30(this,pcVar2 + 2,(int)this + 0x14,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
      pcVar2 = pcVar2 + 2 + uVar5 + 1 + (int)(*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    else {
      uVar3 = F_0042acc0(uVar4);
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar5 = F_0042d590(&REFG(undefined, 0x14a2b20),pcVar2,uVar3);
      pcVar2 = pcVar2 + uVar3;
    }
    cVar1 = *pcVar2;
    uVar4 = CONCAT31((int3)(uVar5 >> 8),cVar1);
  }
  uVar3 = F_0042ccf0(param_1,&REFG(undefined, 0x14a2b20));
  return uVar3;
}

/* ref: FUN_00a21c80 */
uint F_00a21c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = F_00a20720(((byte *)(gen_frame + 0x8)),param_3);
  F_0042d160(param_1,2);
  F_0042d160(param_1,param_2);
  F_0042d160(param_1,uVar1 + 1 & 0xff);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      F_0042d160(param_1,(uint)((byte *)(gen_frame + 0x8))[(int)(iVar2)]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  F_0042d160(param_1,3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00a21d00 */
uint F_00a21d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa21d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_0042d160(param_1,2);
  F_0042d160(param_1,param_2);
  uVar1 = F_00a20720(((byte *)(gen_frame + 0x18)),param_3);
  uVar2 = F_00a20720(((byte *)(gen_frame + 0x8)),param_4);
  F_0042d160(param_1,(uint)(byte)((char)uVar2 + (char)uVar1 + 1));
  iVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      F_0042d160(param_1,(uint)((byte *)(gen_frame + 0x18))[(int)(iVar3)]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      F_0042d160(param_1,(uint)((byte *)(gen_frame + 0x8))[(int)(iVar3)]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  F_0042d160(param_1,3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2 + uVar1;
}

/* ref: FUN_00a21dc0 */
uint F_00a21dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa21dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  uVar1 = F_00a20720(((byte *)(gen_frame + 0x0)),param_2);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      F_0042d160(param_1,(uint)((byte *)(gen_frame + 0x0))[(int)(iVar2)]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return 0;
}

/* ref: FUN_00a21e20 */
uint F_00a21e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa21e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a21bc0(this,param_1);
  return uVar1;
}

/* ref: FUN_00a21e30 */
uint F_00a21e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa21e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0xc))))(*(int * PTR32 *)((int)this + 0x30))));
  if (*piVar1 - 4U < 2) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0xc))))(*(int * PTR32 *)((int)this + 0x30))));
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0x38))))
                      ((int)this + -4,param_1,param_2,param_3,0,*puVar2,param_4);
    return uVar3;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0x38))))
                    ((int)this + -4,param_1,param_2,param_3,0,4,param_4);
  return uVar3;
}

/* ref: FUN_00a21ea0 */
uint F_00a21ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f0c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = (undefined4 *)F_00406bb0(8,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0xfffffff;
    puVar1[1] = 0xfffffff;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = 5;
  return (uint)this;
}

/* ref: FUN_00a21f10 */
uint F_00a21f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f18));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  puVar1 = (undefined4 *)F_00406bb0(0x1c,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0xfffffff;
    puVar1[1] = 0xfffffff;
    puVar1[2] = 0xfffffff;
    puVar1[3] = 0xfffffff;
    puVar1[4] = 0xfffffff;
    puVar1[5] = 0xfffffff;
    puVar1[6] = 0xfffffff;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc))) = 1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = 2;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 3;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14))) = 5;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = 6;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x18))) = 7;
  return (uint)this;
}

/* ref: FUN_00a21fb0 */
uint F_00a21fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa21fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f24));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = (undefined4 *)F_00406bb0(0x14,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0xfffffff;
    puVar1[1] = 0xfffffff;
    puVar1[2] = 0xfffffff;
    puVar1[3] = 0xfffffff;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = 2;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = 4;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc))) = 5;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 7;
  return (uint)this;
}

/* ref: FUN_00a22040 */
uint F_00a22040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f30));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = (undefined4 *)F_00406bb0(0x18,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0xfffffff;
    puVar1[1] = 0xfffffff;
    puVar1[2] = 0xfffffff;
    puVar1[3] = 0xfffffff;
    puVar1[4] = 0xfffffff;
    puVar1[5] = 0xfffffff;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = 2;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = 4;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) = 5;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc))) = 6;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14))) = 7;
  return (uint)this;
}

/* ref: FUN_00a220e0 */
uint F_00a220e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa220e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  uVar1 = F_00a4cf70(param_2,0);
  uVar1 = F_00a20720(((byte *)(gen_frame + 0x0)),uVar1);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      F_0042d160(param_1,(uint)((byte *)(gen_frame + 0x0))[(int)(iVar2)]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return 0;
}

/* ref: FUN_00a22140 */
byte F_00a22140(unsigned int gen_a0)
{
  GEN_ENTER(0xa22140u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pcVar1 = *(char * PTR32 *)param_1;
  }
  if (*pcVar1 == '<') {
    pcVar1 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pcVar1 = *(char * PTR32 *)param_1;
    }
    return pcVar1[*(int *)(param_1 + 0x10) + -1] != '>';
  }
  return 0;
}

/* ref: FUN_00a22180 */
uint F_00a22180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  iVar1 = *(int *)(param_3 + 0x10);
  uVar2 = param_2[4];
  iVar3 = 0;
  while( true ) {
    puVar5 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar5 = (undefined4 *)*param_2;
    }
    uVar4 = F_00a2ce30(param_1,puVar5,iVar3,param_2[4]);
    if (uVar4 == 0xffffffff) break;
    F_00a2eec0(param_1,uVar4,uVar2,param_3,0,0xffffffff);
    iVar3 = uVar4 + iVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00a221f0 */
uint F_00a221f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa221f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  char cVar2;
  char cVar3;
  char * pcVar4;
  undefined4 in_ECX = 0;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  undefined4 extraout_ECX_01 = 0;
  undefined4 extraout_ECX_02 = 0;
  undefined4 extraout_ECX_03 = 0;
  undefined4 extraout_ECX_04 = 0;
  char * pcVar5;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  pcVar4 = param_2;
  if (*param_2 != '\0') {
    pcVar5 = param_2 + 2;
    do {
      cVar2 = pcVar5[-2];
      if (cVar2 == ' ') {
        cVar3 = pcVar5[-1];
        if (((((cVar3 == ';') || (cVar3 == ':')) || (cVar3 == '!')) ||
            (((cVar3 == '?' || (cVar3 == '.')) ||
             ((*REFG(undefined * PTR32, 0x1333ca0) == pcVar5[-1] &&
              ((REFG(undefined * PTR32, 0x1333ca0)[1] == *pcVar5 &&
               (REFG(undefined * PTR32, 0x1333ca0)[2] == pcVar5[1])))))))) ||
           ((*REFG(undefined * PTR32, 0x1333ca8) == pcVar5[-1] && (REFG(undefined * PTR32, 0x1333ca8)[1] == *pcVar5)))) {
          pcVar4 = (char *)F_00a2f350(param_1,"<nbsp>",6);
          in_ECX = extraout_ECX_01;
        }
        else if ((((local_c < 3) || (*REFG(undefined * PTR32, 0x1333c9c) != pcVar5[-5])) ||
                 (REFG(undefined * PTR32, 0x1333c9c)[1] != pcVar5[-4])) ||
                (REFG(undefined * PTR32, 0x1333c9c)[2] != pcVar5[-3])) {
          if (((local_c < 2) || (*REFG(undefined * PTR32, 0x1333ca4) != pcVar5[-4])) ||
             (REFG(undefined * PTR32, 0x1333ca4)[1] != pcVar5[-3])) goto LAB_00a22339;
          pcVar4 = (char *)F_00a30cc0(param_1,"<nbsp>");
          in_ECX = extraout_ECX_00;
        }
        else {
          pcVar4 = (char *)F_00a30cc0(param_1,"<nbsp>");
          in_ECX = extraout_ECX;
        }
      }
      else if (cVar2 == '\"') {
        if (local_8 < 1) {
          pcVar4 = REFG(undefined * PTR32, 0x1333c8c);
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          pcVar4 = (char *)F_00a2f350(param_1,REFG(undefined * PTR32, 0x1333c8c),
                                        (int)pcVar4 - (int)(REFG(undefined * PTR32, 0x1333c8c) + 1));
          local_8 = local_8 + 1;
          in_ECX = extraout_ECX_03;
        }
        else {
          pcVar4 = REFG(undefined * PTR32, 0x1333c94);
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          pcVar4 = (char *)F_00a2f350(param_1,REFG(undefined * PTR32, 0x1333c94),
                                        (int)pcVar4 - (int)(REFG(undefined * PTR32, 0x1333c94) + 1));
          local_8 = local_8 + -1;
          in_ECX = extraout_ECX_02;
        }
      }
      else {
LAB_00a22339: ;
        pcVar4 = (char *)F_00a2ed20(param_1,1,CONCAT31((int3)((uint)in_ECX >> 8),cVar2));
        in_ECX = extraout_ECX_04;
      }
      local_c = local_c + 1;
      pcVar1 = pcVar5 + -1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
  }
  return (uint)pcVar4;
}

/* ref: FUN_00a22360 */
byte F_00a22360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined3 uVar7;
  undefined4 uVar4;
  uint uVar5;
  char * pcVar6;
  byte * pbVar8;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  bVar2 = false;
  uVar7 = (undefined3)((uint)*(undefined4 *)((int)this + 0x14) >> 8);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x14))) {
  case 0: ;
  case 4: ;
  case 5: ;
    bVar1 = *param_2;
    uVar5 = CONCAT31(uVar7,bVar1);
    pbVar8 = param_2;
    break;
  case 1: ;
    bVar1 = *param_2;
    uVar4 = CONCAT31(uVar7,bVar1);
    pbVar8 = param_2;
    while (bVar1 != 0) {
      if ((((char)uVar4 == ' ') && (pbVar8[1] == 0x2e)) && (pbVar8[2] != 0x2e)) {
        uVar5 = F_00a2f350(param_1,"<nbsp>",6);
      }
      else if ((char)uVar4 == '\"') {
        if (local_c < 1) {
          pcVar6 = REFG(undefined * PTR32, 0x1333c8c);
          do {
            cVar3 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar3 != '\0');
          uVar5 = F_00a2f350(param_1,REFG(undefined * PTR32, 0x1333c8c),
                               (int)pcVar6 - (int)(REFG(undefined * PTR32, 0x1333c8c) + 1));
          local_c = local_c + 1;
        }
        else {
          pcVar6 = REFG(undefined * PTR32, 0x1333c94);
          do {
            cVar3 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar3 != '\0');
          uVar5 = F_00a2f350(param_1,REFG(undefined * PTR32, 0x1333c94),
                               (int)pcVar6 - (int)(REFG(undefined * PTR32, 0x1333c94) + 1));
          local_c = local_c + -1;
        }
      }
      else {
        uVar5 = F_00a2ed20(param_1,1,uVar4);
      }
      bVar1 = pbVar8[1];
      uVar4 = CONCAT31((int3)(uVar5 >> 8),bVar1);
      pbVar8 = pbVar8 + 1;
    }
    return 1;
  case 2: ;
    bVar1 = *param_2;
    uVar5 = CONCAT31(uVar7,bVar1);
    pbVar8 = param_2;
    while (bVar1 != 0) {
      cVar3 = (char)uVar5;
      if (bVar2) {
        if (cVar3 != '\"') {
          F_00a2ed20(param_1,1,0x5c);
        }
        uVar5 = F_00a2ed20(param_1,1,(uint)*pbVar8);
        bVar2 = false;
      }
      else if (cVar3 == '\\') {
        bVar2 = true;
      }
      else if (((cVar3 == ' ') && (pbVar8[1] == 0x2e)) && (pbVar8[2] != 0x2e)) {
        uVar5 = F_00a30cc0(param_1,"<nbsp>");
      }
      else if (cVar3 == '\"') {
        if (local_c < 1) {
          uVar5 = F_00a30cc0(param_1,REFG(undefined * PTR32, 0x1333c90));
          local_c = local_c + 1;
        }
        else {
          uVar5 = F_00a30cc0(param_1,REFG(undefined * PTR32, 0x1333c98));
          local_c = local_c + -1;
        }
      }
      else {
        uVar5 = F_00a2ed20(param_1,1,uVar5);
      }
      bVar1 = pbVar8[1];
      uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
      pbVar8 = pbVar8 + 1;
    }
    return 1;
  case 3: ;
    F_00a221f0(param_1,param_2);
    return 1;
  default: ;
    return 0;
  }
  while (bVar1 != 0) {
    cVar3 = (char)uVar5;
    if (bVar2) {
      if ((cVar3 != '\'') && (cVar3 != '\"')) {
        F_00a2ed20(param_1,1,0x5c);
      }
      uVar5 = F_00a2ed20(param_1,1,(uint)*pbVar8);
      bVar2 = false;
    }
    else if (cVar3 == '\\') {
      bVar2 = true;
    }
    else if (cVar3 == '\"') {
      if (local_c < 1) {
        pcVar6 = REFG(undefined * PTR32, 0x1333c8c);
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        uVar5 = F_00a2f350(param_1,REFG(undefined * PTR32, 0x1333c8c),
                             (int)pcVar6 - (int)(REFG(undefined * PTR32, 0x1333c8c) + 1));
        local_c = local_c + 1;
      }
      else {
        pcVar6 = REFG(undefined * PTR32, 0x1333c94);
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        uVar5 = F_00a2f350(param_1,REFG(undefined * PTR32, 0x1333c94),
                             (int)pcVar6 - (int)(REFG(undefined * PTR32, 0x1333c94) + 1));
        local_c = local_c + -1;
      }
    }
    else if (cVar3 == '\'') {
      if (local_10 < 1) {
        uVar5 = F_00a30cc0(param_1,REFG(undefined * PTR32, 0x1333c84));
        local_10 = local_10 + 1;
      }
      else {
        uVar5 = F_00a30cc0(param_1,REFG(undefined * PTR32, 0x1333c88));
        local_10 = local_10 + -1;
      }
    }
    else {
      uVar5 = F_00a2ed20(param_1,1,uVar5);
    }
    bVar1 = pbVar8[1];
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    pbVar8 = pbVar8 + 1;
  }
  return 1;
}

/* ref: FUN_00a22600 */
uint F_00a22600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte * PTR32 * PTR32 * PTR32 * PTR32 * param_2 = (byte * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  bool bVar1;
  byte * PTR32 * PTR32 * PTR32 * ppppbVar2;
  byte bVar3;
  uint uVar4;
  byte * PTR32 * PTR32 * PTR32 * PTR32 * pppppbVar5;
  undefined * this_00;
  
  ppppbVar2 = ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0] = (byte * PTR32 * PTR32 * PTR32 *)((uint)ppppbVar2 & 0xffffff00);
  bVar3 = F_00a22360(this,((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)),param_2);
  pppppbVar5 = param_2;
  if ((bVar3 != 0) && (pppppbVar5 = (byte * PTR32 * PTR32 * PTR32 * PTR32 *)((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0], (*(uint *)(gen_frame + 0x30)) < 0x10)) {
    pppppbVar5 = ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c));
  }
  bVar3 = *(byte *)pppppbVar5;
  (*(uint *)(gen_frame + 0x18)) = 0;
  bVar1 = false;
  this_00 = param_1;
  do {
    if (bVar3 == 0) {
      if (0xf < (*(uint *)(gen_frame + 0x30))) {
        F_00429760(((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
      }
      uVar4 = (*(uint *)(gen_frame + 0x18));
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar4;
    }
    pppppbVar5 = (byte * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppbVar5 + 1);
    ((byte *)(gen_frame + 0x8))[8] = bVar3;
    if (bVar1) {
      F_0042d160(this_00,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)));
      bVar1 = false;
    }
    else if (bVar3 == 0x3c) {
      uVar4 = F_00a246c0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),this_00,pppppbVar5,((byte *)(gen_frame + 0x8)));
      if ((int)uVar4 < -1) {
        F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x18);
        if (0xf < (*(uint *)(gen_frame + 0x30))) {
          F_00429760(((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
        }
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar4;
      }
      pppppbVar5 = ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppbVar5 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)))));
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      if ((int)uVar4 < (int)(*(uint *)(gen_frame + 0x18))) {
        (*(uint *)(gen_frame + 0x18)) = uVar4;
      }
    }
    else if (bVar3 == 0x5c) {
      bVar1 = true;
    }
    else if ((bVar3 != 10) && (bVar3 != 0xd)) {
      F_0042d160(this_00,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)));
    }
    bVar3 = *(byte *)pppppbVar5;
  } while( true );
}

/* ref: FUN_00a22730 */
uint F_00a22730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042a990(param_2);
  uVar1 = F_00a22600(this,param_1,uVar1);
  return uVar1;
}

/* ref: Component::Text::TextModule::vf7 */
uint F_00a22750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * in_ecx;
  undefined4 * puVar1;
  uint uVar2;
  
  in_ecx = this + 0x114;
  F_0042aca0(in_ecx);
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xc))))(*(int * PTR32 *)(this + 0x34))));
  *(undefined4 *)(this + 0x68) = *puVar1;
  uVar2 = F_0042a990(param_2);
  F_00a22600(this + 0x54,in_ecx,uVar2);
  F_0042cbc0(param_1,in_ecx);
  return (uint)param_1;
}

/* ref: FUN_00a227a0 */
byte F_00a227a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa227a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  int * piVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)this + 0xc);
  F_00a2ff40((undefined *)((int)this + 0xc),&(*(int *)(gen_frame + 0xc)),param_1);
  if ((*(int *)(gen_frame + 0xc)) != *(int *)((int)this + 0x10)) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 0x60) + 4))))
                      (*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 0x60),param_1,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (byte)uVar2;
  }
  iVar1 = **(int * PTR32 *)((int)this + 4);
  uVar2 = F_0042a990(param_1);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 8))(*(undefined4 *)((int)this + 4),uVar2);
  if (uVar2 == 0) {
LAB_00a22949: ;
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  if (*(int *)((int)this + 8) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4),"Attributive");
    *(uint *)((int)this + 8) = uVar3;
    if (uVar3 == 0) goto LAB_00a22949;
  }
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xc))))(*(int * PTR32 *)((int)this + 4))));
  switch((unsigned int)(uintptr_t)(*puVar4)) {
  case 1: ;
    pvVar5 = (undefined *)F_00406b90(0x14,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a21fb0(pvVar5,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
    break;
  case 2: ;
    pvVar5 = (undefined *)F_00406b90(0x20,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a21f10(pvVar5,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
    break;
  case 3: ;
    pvVar5 = (undefined *)F_00406b90(0x14,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a22040(pvVar5,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
    break;
  case 4: ;
  case 5: ;
    pvVar5 = (undefined *)F_00406b90(0x14,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a21ea0(pvVar5,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
    break;
  default: ;
    pvVar5 = (undefined *)F_00406b90(0x14,0,0);
    if (pvVar5 != (undefined *)0x0) {
      piVar6 = (int *)F_00a21a20(pvVar5,uVar2,*(undefined4 *)((int)this + 8));
      goto LAB_00a22904;
    }
  }
  piVar6 = (int *)0x0;
LAB_00a22904: ;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x10)),param_1);
  (*(int * PTR32 *)(gen_frame + 0x64)) = piVar6;
  F_00a31110((*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6,param_1,(*(undefined4 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (byte)uVar2;
}

/* ref: FUN_00a22980 */
uint F_00a22980(unsigned int gen_a0)
{
  GEN_ENTER(0xa22980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      puVar2 = (undefined4 *)piVar6[0x18];
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      if (*(char *)((int)piVar6 + 0x65) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x65) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x65);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x65);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x65);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x65);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x10));
  }
  piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4)));
  cVar1 = *(char *)((int)piVar6 + 0x65);
  while (cVar1 == '\0') {
    F_00a30120((undefined *)((int)this + 0xc),piVar6[2]);
    piVar3 = (int *)*piVar6;
    F_0042c880(piVar6 + 3);
    F_00429760(piVar6,0x68,0x2c4);
    piVar6 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x65);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *(undefined4 *)*(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x10);
  uVar4 = *(uint *)((int)this + 0x10);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar4;
}

/* ref: FUN_00a22a50 */
uint F_00a22a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a22980(this);
  return uVar1;
}

/* ref: FUN_00a22a60 */
uint F_00a22a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa22a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_0042cca0(((undefined1 *)(gen_frame + 0x58)),0xffffffff);
  F_0042b630(((undefined1 *)(gen_frame + 0xac)));
  uVar1 = F_0042a990(param_2);
  uVar1 = F_00a22600(this,((undefined1 *)(gen_frame + 0xac)),uVar1);
  if (-2 < (int)uVar1) {
    uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0xac)));
    uVar2 = F_00a20720(((byte *)(gen_frame + 0x100)),uVar2);
    iVar3 = 0;
    if (0 < (int)uVar2) {
      do {
        F_0042d160(((undefined1 *)(gen_frame + 0x58)),(uint)((byte *)(gen_frame + 0x100))[(int)(iVar3)]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    uVar2 = F_0042cd30(((undefined1 *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0xac)));
    F_0042ccf0(param_1,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xac)));
  F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00a22b40 */
uint F_00a22b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa22b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  bVar2 = false;
  ((undefined4 *)(gen_frame + 0x60))[0] = 0;
  bVar3 = F_00a4cda0(param_2,0);
  cVar4 = (char)param_3;
  if (bVar3 != 0) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,0);
      uVar5 = F_00a20720(((undefined4 *)(gen_frame + 0x60)),uVar5);
      iVar7 = 0;
      if (0 < (int)uVar5) {
        do {
          F_0042d160(param_1,(uint)*(byte *)((int)((undefined4 *)(gen_frame + 0x60)) + iVar7));
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar5);
      }
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042a970(param_2);
  if (((uVar5 == 3) && (pcVar6 = (char *)F_0042a990(param_2), *pcVar6 == '\'')) &&
     (uVar5 = F_0042a990(param_2), *(char *)(uVar5 + 2) == '\'')) {
    uVar5 = F_0042a990(param_2);
    uVar5 = F_00a21dc0(param_1,(int)*(char *)(uVar5 + 1));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar5;
  }
  uVar5 = F_0042bba0(param_2,&REFG(undefined, 0x14a2e70));
  if (uVar5 == 0) {
    F_0042d160(param_1,0xe0);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  uVar5 = F_0042bba0(param_2,&REFG(undefined, 0x14a2ec8));
  if (uVar5 == 0) {
    F_0042d160(param_1,0xe1);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  uVar5 = F_0042bba0(param_2,&REFG(undefined, 0x14a2f20));
  if (uVar5 == 0) {
    F_0042d160(param_1,0xe2);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  uVar5 = F_0042bba0(param_2,&REFG(undefined, 0x14a2f78));
  if (uVar5 == 0) {
    F_0042d160(param_1,0xe3);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  uVar5 = F_0042bba0(param_2,&REFG(undefined, 0x14a2fd0));
  if (uVar5 == 0) {
    F_0042d160(param_1,0xe4);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  uVar5 = F_0042bba0(param_2,&REFG(undefined, 0x14a3028));
  if (uVar5 == 0) {
    F_0042d160(param_1,0xe5);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  uVar5 = F_0042b790(param_2);
  if (uVar5 < 4) {
LAB_00a22d74: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10e3b48),REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2,0,4,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22d74;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,10);
      F_0042d160(param_1,0xe9);
      F_0042d160(param_1,uVar5 + 1 & 0xff);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2);
  if (uVar5 < 4) {
LAB_00a22e10: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10e3b50),REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2,0,4,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22e10;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,10);
      F_0042d160(param_1,0xe8);
      F_0042d160(param_1,uVar5 + 1 & 0xff);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2);
  if (uVar5 < 4) {
LAB_00a22eac: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10e3b58),REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2,0,4,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22eac;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 's') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,10);
      F_0042d160(param_1,0xeb);
      F_0042d160(param_1,uVar5 + 1 & 0xff);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2);
  if (uVar5 < 4) {
LAB_00a22f48: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10e3b60),REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2,0,4,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22f48;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 's') || (cVar4 == '.')) {
      uVar5 = F_00a4cf70(param_2,10);
      F_0042d160(param_1,0xea);
      F_0042d160(param_1,uVar5 + 1 & 0xff);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2);
  if (uVar5 < 10) {
LAB_00a22fe4: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"stackcolor",REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2,0,10,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a22fe4;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      F_0042d160(param_1,0xec);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2);
  if (uVar5 < 6) {
LAB_00a23068: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"t_msec",REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2,0,6,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a23068;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  }
  bVar2 = false;
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      F_0042d160(param_1,0xd8);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2);
  if (uVar5 < 5) {
LAB_00a230ec: ;
    bVar1 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"t_sec",REFG(undefined4, 0x108cc50));
    bVar2 = true;
    uVar5 = F_0042da40(param_2,0,5,((undefined1 *)(gen_frame + 0xc)));
    bVar1 = true;
    if (uVar5 != 0) goto LAB_00a230ec;
  }
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  }
  if (bVar1) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      F_0042d160(param_1,0xd9);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2);
  if (uVar5 < 5) {
LAB_00a23172: ;
    bVar2 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"t_min",REFG(undefined4, 0x108cc50));
    uVar5 = F_0042da40(param_2,0,5,((undefined1 *)(gen_frame + 0xc)));
    bVar2 = true;
    if (uVar5 != 0) goto LAB_00a23172;
  }
  bVar1 = false;
  if (bVar2) {
    if ((cVar4 == 'n') || (cVar4 == '.')) {
      F_0042d160(param_1,0xda);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
    goto LAB_00a232bb;
  }
  uVar5 = F_0042b790(param_2);
  if (uVar5 < 6) {
LAB_00a231fb: ;
    bVar2 = false;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"t_hour",REFG(undefined4, 0x108cc50));
    bVar1 = true;
    uVar5 = F_0042da40(param_2,0,6,((undefined1 *)(gen_frame + 0xc)));
    bVar2 = true;
    if (uVar5 != 0) goto LAB_00a231fb;
  }
  if (bVar1) {
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  }
  bVar1 = false;
  if (!bVar2) {
    uVar5 = F_0042b790(param_2);
    if (uVar5 < 6) {
LAB_00a23288: ;
      bVar2 = false;
    }
    else {
      F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"t_hour12",REFG(undefined4, 0x108cc50));
      bVar1 = true;
      uVar5 = F_0042da40(param_2,0,6,((undefined1 *)(gen_frame + 0xc)));
      bVar2 = true;
      if (uVar5 != 0) goto LAB_00a23288;
    }
    if (bVar1) {
      F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    }
    bVar1 = false;
    if (!bVar2) {
      uVar5 = F_0042b790(param_2);
      if (uVar5 < 5) {
LAB_00a23315: ;
        bVar2 = false;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"t_day",REFG(undefined4, 0x108cc50));
        bVar1 = true;
        uVar5 = F_0042da40(param_2,0,5,((undefined1 *)(gen_frame + 0xc)));
        bVar2 = true;
        if (uVar5 != 0) goto LAB_00a23315;
      }
      if (bVar1) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      }
      bVar1 = false;
      if (bVar2) {
        if ((cVar4 == 'n') || (cVar4 == '.')) {
          F_0042d160(param_1,0xdc);
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return 0;
        }
        goto LAB_00a232bb;
      }
      uVar5 = F_0042b790(param_2);
      if (uVar5 < 6) {
LAB_00a233a2: ;
        bVar2 = false;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"t_wday",REFG(undefined4, 0x108cc50));
        bVar1 = true;
        uVar5 = F_0042da40(param_2,0,6,((undefined1 *)(gen_frame + 0xc)));
        bVar2 = true;
        if (uVar5 != 0) goto LAB_00a233a2;
      }
      if (bVar1) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      }
      bVar1 = false;
      if (bVar2) {
        if ((cVar4 == 'n') || (cVar4 == '.')) {
          F_0042d160(param_1,0xdd);
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return 0;
        }
        goto LAB_00a232bb;
      }
      uVar5 = F_0042b790(param_2);
      if (uVar5 < 5) {
LAB_00a2342f: ;
        bVar2 = false;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"t_mon",REFG(undefined4, 0x108cc50));
        bVar1 = true;
        uVar5 = F_0042da40(param_2,0,5,((undefined1 *)(gen_frame + 0xc)));
        bVar2 = true;
        if (uVar5 != 0) goto LAB_00a2342f;
      }
      if (bVar1) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      }
      bVar1 = false;
      if (bVar2) {
        if ((cVar4 == 'n') || (cVar4 == '.')) {
          F_0042d160(param_1,0xde);
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return 0;
        }
        goto LAB_00a232bb;
      }
      uVar5 = F_0042b790(param_2);
      if (uVar5 < 6) {
LAB_00a234bb: ;
        bVar2 = false;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"t_year",REFG(undefined4, 0x108cc50));
        bVar1 = true;
        uVar5 = F_0042da40(param_2,0,6,((undefined1 *)(gen_frame + 0xc)));
        bVar2 = true;
        if (uVar5 != 0) goto LAB_00a234bb;
      }
      if (bVar1) {
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      }
      if (bVar2) {
        if ((cVar4 == 'n') || (cVar4 == '.')) {
          F_0042d160(param_1,0xdf);
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return 0;
        }
      }
      else if ((cVar4 == 's') || (cVar4 == '.')) {
        uVar5 = F_00a22a60(this,param_1,param_2);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return uVar5;
      }
      goto LAB_00a232bb;
    }
  }
  if ((cVar4 == 'n') || (cVar4 == '.')) {
    F_0042d160(param_1,0xdb);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
LAB_00a232bb: ;
  uVar5 = F_00a203c0(this,param_1,param_2,param_3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar5;
}

/* ref: FUN_00a23530 */
uint F_00a23530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa23530u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  bool bVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  undefined1 * puVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  char * pcVar7;
  uint uVar8;
  undefined4 * puVar9;
  char * pcVar10;
  int iVar11;
  bool bVar12;
  
  pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar1 = (param_2[1] - *param_2) / 0x1c;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  bVar2 = false;
  (*(uint *)(gen_frame + 0x60)) = 0xf;
  (*(int *)(gen_frame + 0x5c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar3 & 0xffffff00);
  (*(uint *)(gen_frame + 0x24)) = 0;
  if (uVar1 != 0) {
    (*(int *)(gen_frame + 0x28)) = 0;
    do {
      uVar8 = ((uint *)(gen_frame + 0x30))[0];
      pcVar10 = (char *)((*(int *)(gen_frame + 0x28)) + *param_2);
      pcVar7 = pcVar10;
      if (0xf < *(uint *)(pcVar10 + 0x14)) {
        pcVar7 = *(char * PTR32 *)pcVar10;
      }
      if (*pcVar7 == '<') {
        iVar11 = *(int *)(pcVar10 + 0x10);
        pcVar7 = pcVar10;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar7 = *(char * PTR32 *)pcVar10;
        }
        if (pcVar7[iVar11 + -1] == '>') goto LAB_00a23624;
        (*(uint *)(gen_frame + 0x44)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x30))[0] + 0)) = 0;
        ((uint *)(gen_frame + 0x30))[0] = uVar8 & 0xffffff00;
        F_00a2edd0(((uint *)(gen_frame + 0x30)),pcVar10,0,iVar11 + -1);
        F_00a2ec30(param_1,((uint *)(gen_frame + 0x30)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x44))) {
          F_00429760(((uint *)(gen_frame + 0x30))[0],(*(uint *)(gen_frame + 0x44)) + 1,0x2c4);
        }
        F_00a2f350(param_1,&REFG(undefined, 0x10e3d08),1);
        bVar2 = true;
      }
      else {
LAB_00a23624: ;
        if (bVar2) {
          pcVar7 = pcVar10;
          if (0xf < *(uint *)(pcVar10 + 0x14)) {
            pcVar7 = *(char * PTR32 *)pcVar10;
          }
          if (*pcVar7 == '[') {
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            puVar4 = (undefined1 *)((int)ppppuVar6 + (*(int *)(gen_frame + 0x5c)));
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            if (puVar4 != (undefined1 *)0x0) {
              puVar4 = puVar4 - (int)ppppuVar6;
            }
            F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),puVar4,1,0x5b);
            F_00a2ec30(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(int *)(gen_frame + 0x28)) + 0x1c + *param_2,0,0xffffffff);
            iVar11 = 1;
            while( true ) {
              puVar5 = (undefined4 *)(*param_2 + (*(int *)(gen_frame + 0x28)));
              puVar9 = puVar5;
              if (0xf < (uint)puVar5[5]) {
                puVar9 = (undefined4 *)*puVar5;
              }
              if (*(char *)((int)puVar9 + iVar11) == ']') break;
              if (0xf < (uint)puVar5[5]) {
                puVar5 = (undefined4 *)*puVar5;
              }
              ((byte *)(gen_frame + 0xc))[0x10] = *(byte *)((int)puVar5 + iVar11);
              ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
              if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
                ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
              }
              puVar4 = (undefined1 *)((int)ppppuVar6 + (*(int *)(gen_frame + 0x5c)));
              ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
              if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
                ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
              }
              if (puVar4 != (undefined1 *)0x0) {
                puVar4 = puVar4 - (int)ppppuVar6;
              }
              F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),puVar4,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)));
              iVar11 = iVar11 + 1;
            }
            F_00a2ec30(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(int *)(gen_frame + 0x28)) + 0x38 + *param_2,0,0xffffffff);
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            puVar4 = (undefined1 *)((int)ppppuVar6 + (*(int *)(gen_frame + 0x5c)));
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            if (puVar4 != (undefined1 *)0x0) {
              puVar4 = puVar4 - (int)ppppuVar6;
            }
            F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),puVar4,1,0x5d);
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            puVar4 = (undefined1 *)((int)ppppuVar6 + (*(int *)(gen_frame + 0x5c)));
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            if (puVar4 != (undefined1 *)0x0) {
              puVar4 = puVar4 - (int)ppppuVar6;
            }
            F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),puVar4,1,0x2c);
            F_00a2ec30(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),0,0xffffffff);
            (*(int *)(gen_frame + 0x5c)) = 0;
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 2;
            (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x38;
            *(undefined1 *)ppppuVar6 = 0;
            goto LAB_00a23802;
          }
        }
        iVar11 = *(int *)(pcVar10 + 0x10);
        pcVar7 = pcVar10;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          pcVar7 = *(char * PTR32 *)pcVar10;
        }
        uVar8 = F_0040d320(pcVar7,&REFG(undefined, 0x10e3d0c),(uint)(iVar11 != 0));
        bVar12 = false;
        if (uVar8 == 0) {
          if (iVar11 == 0) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(iVar11 != 1);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          F_00a2f350(param_1,&REFG(undefined, 0x10e3d10),2);
          bVar2 = false;
        }
        else {
          F_00a2ec30(param_1,pcVar10,0,0xffffffff);
        }
      }
LAB_00a23802: ;
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x1c;
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 1;
    } while ((*(uint *)(gen_frame + 0x24)) < uVar1);
    if (0xf < (*(uint *)(gen_frame + 0x60))) {
      F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0],(*(uint *)(gen_frame + 0x60)) + 1,0x2c4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)param_1;
}

/* ref: Component::Text::TextModule::vf9 */
uint F_00a23850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa23850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0xc))))(*(int * PTR32 *)(this + 0x34))));
  if (*piVar3 == 2) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),param_1);
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = param_2;
    (*(undefined4 *)(gen_frame + 0x68)) = 1;
    (*(undefined4 *)(gen_frame + 0x6c)) = 5;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined1 *)(gen_frame + 0x74)) = 0;
    bVar2 = F_00a227a0(this + 0x38,((undefined1 *)(gen_frame + 0xc)),param_3);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return CONCAT31((int3)(uVar5 >> 8),bVar2);
  }
  iVar1 = *(int *)this;
  uVar4 = ((code *)*(gen_code32 *)(iVar1 + 4))(this,param_3);
  uVar4 = ((code *)*(gen_code32 *)(iVar1 + 0x18))(this,param_1,param_2,0xffff,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)(uVar4 == 1);
}

/* ref: FUN_00a23910 */
uint F_00a23910(unsigned int gen_a0)
{
  GEN_ENTER(0xa23910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  F_00a22980(this);
  F_00a30fa0((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x10),0x68,0x2c4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  return (uint)uVar1;
}

/* ref: FUN_00a23960 */
uint F_00a23960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa23960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  undefined * puVar6;
  undefined * pvVar7;
  undefined * PTR32 * ppvVar8;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if ((*(uint *)&REFG(undefined, 0x14a2e6c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a2e6c) = *(uint *)&REFG(undefined, 0x14a2e6c) | 1;
    F_0042cc20(&REFG(undefined, 0x14a2b78),(*(undefined * PTR32 (*)[1])REFP(0x10e3e0c)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2bcc),(*(undefined * PTR32 (*)[1])REFP(0x10e3e08)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2c20),(*(undefined * PTR32 (*)[1])REFP(0x10e3e04)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2c74),(*(undefined * PTR32 (*)[1])REFP(0x10e3e00)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2cc8),(*(undefined * PTR32 (*)[1])REFP(0x10e3dfc)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2d1c),(*(undefined * PTR32 (*)[1])REFP(0x10e3df8)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2d70),(*(undefined * PTR32 (*)[1])REFP(0x10e3df4)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2dc4),(*(undefined * PTR32 (*)[1])REFP(0x10e3df0)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2e18),(*(undefined * PTR32 (*)[1])REFP(0x10e3dec)),REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c570)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0xc)) = 0;
  ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3e10),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_1,uVar4,ppvVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  iVar1 = ((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x4))) / 0x54;
  if (iVar1 == 2) {
    *param_3 = 0;
  }
  else {
    if (iVar1 != 3) {
      F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x4)));
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 0xfffffffe;
    }
    uVar4 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0xa8,10);
    *param_3 = uVar4 - 1;
  }
  uVar4 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x54,10);
  *param_2 = uVar4;
  pcVar5 = (char *)F_0042a7f0((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x54,0);
  if (*pcVar5 == '=') {
    *param_2 = -*param_2 - 1;
  }
  uVar4 = 0;
  puVar6 = &REFG(undefined, 0x14a2b78);
  do {
    bVar3 = F_0042b660((*(undefined * PTR32 *)(gen_frame + 0x4)),puVar6);
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (bVar3 != 0) {
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x4));
      if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) {
        for (; pvVar7 != pvVar2; pvVar7 = (undefined *)((int)pvVar7 + 0x54)) {
          F_0042c880(pvVar7);
        }
        F_00429760((*(undefined * PTR32 *)(gen_frame + 0x4)),(((*(int *)(gen_frame + 0xc)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x4))) / 0x54) * 0x54,0x35);
      }
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar4;
    }
    puVar6 = puVar6 + 0x54;
    uVar4 = uVar4 + 1;
  } while ((int)puVar6 < 0x14a2e6c);
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) {
    for (; pvVar7 != pvVar2; pvVar7 = (undefined *)((int)pvVar7 + 0x54)) {
      F_0042c880(pvVar7);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x4)),(((*(int *)(gen_frame + 0xc)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x4))) / 0x54) * 0x54,0x35);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0xffffffff;
}

/* ref: FUN_00a23c00 */
byte F_00a23c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa23c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  code * pcVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  
  cVar2 = *param_1;
  pcVar7 = (char *)0x0;
  pcVar8 = (char *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)0x0;
  if (cVar2 != '\0') {
    do {
      if (cVar2 == '\x02') {
        pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4) + (uint)(byte)param_1[1] * 4)));
        pcVar3 = param_1 + 2;
        uVar4 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x24)),pcVar3,param_2,&(*(int *)(gen_frame + 0x20)),1);
        if (pcVar1 == (code *)0x0) {
          iVar6 = uVar4 + 3 + (*(int *)(gen_frame + 0x20));
          (*(int *)(gen_frame + 0x1c)) = iVar6;
          pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
          if (pcVar8 != pcVar7) {
            F_00c46e20(pcVar8,pcVar7,0);
            (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8;
            pcVar7 = pcVar8;
            pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
          }
          while (0 < iVar6) {
            if ((param_1 < pcVar7) && (pcVar8 <= param_1)) {
              iVar6 = (int)param_1 - (int)pcVar8;
              if (pcVar7 == pcVar3) {
                if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
                uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
                uVar4 = (int)pcVar3 - (int)pcVar8;
                if (uVar4 < uVar5) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar5) {
                    uVar4 = uVar5;
                  }
                  F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)),uVar4);
                  pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
                  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
                  pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
                }
              }
              if (pcVar7 != (char *)0x0) {
                *pcVar7 = pcVar8[iVar6];
              }
            }
            else {
              if (pcVar7 == pcVar3) {
                if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
                uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
                uVar4 = (int)pcVar3 - (int)pcVar8;
                if (uVar4 < uVar5) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar5) {
                    uVar4 = uVar5;
                  }
                  F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)),uVar4);
                  pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
                  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
                  pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
                }
              }
              if (pcVar7 != (char *)0x0) {
                *pcVar7 = *param_1;
              }
            }
            param_1 = param_1 + 1;
            iVar6 = (*(int *)(gen_frame + 0x1c)) + -1;
            (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar7 + 1;
            (*(int *)(gen_frame + 0x1c)) = iVar6;
            pcVar7 = pcVar7 + 1;
          }
          (*(char *)(gen_frame + 0x2b)) = '\0';
          if ((pcVar7 <= &(*(char *)(gen_frame + 0x2b))) || (&(*(char *)(gen_frame + 0x2b)) < pcVar8)) goto LAB_00a23f39;
          iVar6 = (int)&(*(char *)(gen_frame + 0x2b)) - (int)pcVar8;
          if (pcVar7 == pcVar3) {
            if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
            uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
            uVar4 = (int)pcVar3 - (int)pcVar8;
            if (uVar4 < uVar5) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)),uVar4);
              pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
              pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
            }
          }
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = pcVar8[iVar6];
          }
          goto LAB_00a23f7d;
        }
        uVar5 = (*pcVar1)((*(undefined * PTR32 *)(gen_frame + 0x24)),pcVar3 + uVar4,(*(int *)(gen_frame + 0x20)),param_2,param_3);
        if (uVar5 == 0) {
          if (pcVar8 != (char *)0x0) {
            F_00429760(pcVar8,(int)(*(char * PTR32 *)(gen_frame + 0x14)) - (int)pcVar8,0x2c4);
          }
          return 0;
        }
        param_1 = pcVar3 + uVar4 + (*(int *)(gen_frame + 0x20));
      }
      else {
        if (pcVar8 != pcVar7) {
          F_00c46e20(pcVar8,pcVar7,0);
          (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar8;
          pcVar7 = pcVar8;
        }
        cVar2 = *param_1;
        pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
        while ((cVar2 != '\0' && (cVar2 != '\x02'))) {
          if ((param_1 < pcVar7) && (pcVar8 <= param_1)) {
            iVar6 = (int)param_1 - (int)pcVar8;
            if (pcVar7 == pcVar3) {
              if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
              uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
              uVar4 = (int)pcVar3 - (int)pcVar8;
              if (uVar4 < uVar5) {
                if (-(uVar4 >> 1) - 1 < uVar4) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = uVar4 + (uVar4 >> 1);
                }
                if (uVar4 < uVar5) {
                  uVar4 = uVar5;
                }
                F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)),uVar4);
                pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
                pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
                pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
              }
            }
            if (pcVar7 != (char *)0x0) {
              cVar2 = pcVar8[iVar6];
LAB_00a23ec3: ;
              *pcVar7 = cVar2;
            }
          }
          else {
            if (pcVar7 == pcVar3) {
              if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
              uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
              uVar4 = (int)pcVar3 - (int)pcVar8;
              if (uVar4 < uVar5) {
                if (-(uVar4 >> 1) - 1 < uVar4) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = uVar4 + (uVar4 >> 1);
                }
                if (uVar4 < uVar5) {
                  uVar4 = uVar5;
                }
                F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)),uVar4);
                pcVar3 = (*(char * PTR32 *)(gen_frame + 0x14));
                pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
                pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
              }
            }
            if (pcVar7 != (char *)0x0) {
              cVar2 = *param_1;
              goto LAB_00a23ec3;
            }
          }
          cVar2 = param_1[1];
          param_1 = param_1 + 1;
          pcVar7 = pcVar7 + 1;
          (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar7;
        }
        (*(char *)(gen_frame + 0x2b)) = '\0';
        if ((&(*(char *)(gen_frame + 0x2b)) < pcVar7) && (pcVar8 <= &(*(char *)(gen_frame + 0x2b)))) {
          iVar6 = (int)&(*(char *)(gen_frame + 0x2b)) - (int)pcVar8;
          if (pcVar7 == pcVar3) {
            if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
            uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
            uVar4 = (int)pcVar3 - (int)pcVar8;
            if (uVar4 < uVar5) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)),uVar4);
              pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
              pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
            }
          }
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = pcVar8[iVar6];
          }
        }
        else {
LAB_00a23f39: ;
          (*(char *)(gen_frame + 0x2b)) = '\0';
          if (pcVar7 == pcVar3) {
            if ((int)pcVar7 - (int)pcVar8 == -1) {
LAB_00a23fc1: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
            uVar4 = (int)pcVar3 - (int)pcVar8;
            if (uVar4 < uVar5) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              F_00a31510(&(*(char * PTR32 *)(gen_frame + 0xc)),uVar4);
              pcVar7 = (*(char * PTR32 *)(gen_frame + 0x10));
              pcVar8 = (*(char * PTR32 *)(gen_frame + 0xc));
            }
          }
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
          }
        }
LAB_00a23f7d: ;
        pcVar7 = pcVar7 + 1;
        (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar7;
        F_0042d540(param_3,pcVar8);
        param_1 = param_1 + -1;
      }
      param_1 = param_1 + 1;
      cVar2 = *param_1;
    } while (cVar2 != '\0');
    if (pcVar8 != (char *)0x0) {
      F_00429760(pcVar8,(int)(*(char * PTR32 *)(gen_frame + 0x14)) - (int)pcVar8,0x2c4);
    }
  }
  return 1;
}

/* ref: FUN_00a23ff0 */
uint F_00a23ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa23ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  byte * pbVar5;
  undefined * PTR32 * ppuVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_3;
  bVar1 = *param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_2;
  pbVar5 = param_1;
  if (0xef < bVar1) {
    if (bVar1 == 0xff) {
      uVar2 = F_00a24d30(this,param_1 + 1,param_2,&(*(int *)(gen_frame + 0x0)),1);
      pbVar4 = param_1 + 1 + uVar2;
      bVar1 = pbVar4[(*(int *)(gen_frame + 0x0))];
      (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar4 + (*(int *)(gen_frame + 0x0));
      pbVar4[(*(int *)(gen_frame + 0x0))] = 0;
      (*(byte *)(gen_frame + 0xf)) = bVar1;
      bVar1 = F_00a23c00(this,pbVar4,(*(undefined * PTR32 *)(gen_frame + 0x4)),(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 == 0) {
        *(*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte *)(gen_frame + 0xf));
      }
      else {
        pbVar5 = pbVar4 + (*(int *)(gen_frame + 0x0));
        *(*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte *)(gen_frame + 0xf));
      }
    }
    goto LAB_00a2413b;
  }
  if ((0xec < bVar1) || (bVar1 < 0xe8)) goto LAB_00a2413b;
  if (bVar1 == 0xea) {
    uVar2 = F_00a24d30(this,param_1 + 1,param_2,&(*(byte * PTR32 *)(gen_frame + 0x10)),1);
    pbVar5 = param_1 + 1 + uVar2;
    pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x10)) + -1;
    (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar4;
    if (pbVar4 < *(byte * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x10)) {
      uVar2 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x4)),pbVar4);
      if (*(char *)(uVar2 + 8) == '\x01') {
        uVar2 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x4)),(*(byte * PTR32 *)(gen_frame + 0x10)));
        ppuVar6 = ((undefined * PTR32 *)GEN_TOP(**(undefined4 * PTR32 *)(uVar2 + 4)));
      }
      else {
LAB_00a240e3: ;
        ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
      }
    }
    else {
LAB_00a2412e: ;
      ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
    }
  }
  else {
    if (bVar1 != 0xeb) goto LAB_00a2413b;
    uVar2 = F_00a24d30(this,param_1 + 1,(int)this + 0x14,&(*(byte * PTR32 *)(gen_frame + 0x10)),1);
    pbVar5 = param_1 + 1 + uVar2;
    pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x10)) + -1;
    (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar4;
    if (*(byte * PTR32 *)((int)this + 0x24) <= pbVar4) goto LAB_00a2412e;
    uVar2 = F_00484010((undefined *)((int)this + 0x14),pbVar4);
    if (*(char *)(uVar2 + 8) != '\x01') goto LAB_00a240e3;
    uVar2 = F_00484010((undefined *)((int)this + 0x14),(*(byte * PTR32 *)(gen_frame + 0x10)));
    ppuVar6 = ((undefined * PTR32 *)GEN_TOP(**(undefined4 * PTR32 *)(uVar2 + 4)));
  }
  F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x8)),ppuVar6);
LAB_00a2413b: ;
  if (((char)param_4 != '\0') && (param_1 == pbVar5)) {
    uVar2 = F_00a24d30(this,pbVar5,(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined * PTR32 *)(gen_frame + 0x4)),0);
    if (uVar2 != 0) {
      uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x14)),(*(undefined * PTR32 *)(gen_frame + 0x4)),10,0,0);
      F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x8)),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (int)pbVar5 - (int)param_1;
}

/* ref: FUN_00a241b0 */
uint F_00a241b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa241b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  char * pcVar8;
  undefined * puVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar2 = param_1[1];
  iVar3 = *param_1;
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  bVar6 = false;
  cVar1 = *param_2;
  pcVar4 = param_2;
  uVar5 = (*(undefined4 *)(gen_frame + 0xf));
  while (pcVar8 = pcVar4, cVar1 != '\0') {
    pcVar8 = pcVar4 + 1;
    (*(undefined4 *)(gen_frame + 0xf)) = CONCAT31((int3)((uint)uVar5 >> 8),cVar1);
    if (bVar6) {
      F_0042d160(((undefined1 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0xf)));
      bVar6 = false;
    }
    else if (cVar1 == '\\') {
      bVar6 = true;
    }
    else {
      if (cVar1 == ']') break;
      if (cVar1 == '>') {
        if (*pcVar8 == '=') {
          pcVar8 = pcVar4 + 2;
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)));
          if (uVar7 == 0) {
LAB_00a243ab: ;
            F_0042c880(((undefined1 *)(gen_frame + 0x14)));
            F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
            return 0xfffffffa;
          }
          F_0048a040(param_1,&REFG(undefined, 0x14a2e70));
          F_0048a040(param_1,((undefined1 *)(gen_frame + 0x14)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x14)));
        }
        else {
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)));
          if (uVar7 == 0) goto LAB_00a243ab;
          F_0048a040(param_1,&REFG(undefined, 0x14a2ec8));
          F_0048a040(param_1,((undefined1 *)(gen_frame + 0x14)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x14)));
        }
      }
      else if (cVar1 == '<') {
        if (*pcVar8 == '=') {
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)));
          if (uVar7 == 0) goto LAB_00a243ab;
          puVar9 = &REFG(undefined, 0x14a2f20);
LAB_00a24342: ;
          pcVar8 = pcVar4 + 2;
          F_0048a040(param_1,puVar9);
          F_0048a040(param_1,((undefined1 *)(gen_frame + 0x14)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x14)));
        }
        else {
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)));
          if (uVar7 == 0) goto LAB_00a243ab;
          F_0048a040(param_1,&REFG(undefined, 0x14a2f78));
          F_0048a040(param_1,((undefined1 *)(gen_frame + 0x14)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x14)));
        }
      }
      else {
        if (cVar1 == '=') {
          if (*pcVar8 == '=') {
            pcVar8 = pcVar4 + 2;
            uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)));
            if (uVar7 == 0) goto LAB_00a243ab;
            F_0048a040(param_1,&REFG(undefined, 0x14a2fd0));
            F_0048a040(param_1,((undefined1 *)(gen_frame + 0x14)));
            F_0042aca0(((undefined1 *)(gen_frame + 0x14)));
            goto LAB_00a2436a;
          }
        }
        else if ((cVar1 == '!') && (*pcVar8 == '=')) {
          uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)));
          if (uVar7 == 0) goto LAB_00a243ab;
          puVar9 = &REFG(undefined, 0x14a3028);
          goto LAB_00a24342;
        }
        F_0042d160(((undefined1 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0xf)));
      }
    }
LAB_00a2436a: ;
    pcVar4 = pcVar8;
    uVar5 = (*(undefined4 *)(gen_frame + 0xf));
    cVar1 = *pcVar8;
  }
  F_0048a040(param_1,((undefined1 *)(gen_frame + 0x14)));
  uVar7 = F_0042b790(((undefined1 *)(gen_frame + 0x14)));
  if (uVar7 == 0) {
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0xfffffffb;
  }
  if ((param_1[1] - *param_1) / 0x54 - (iVar2 - iVar3) / 0x54 == 3) {
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (int)pcVar8 - (int)param_2;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0xfffffffc;
}

/* ref: FUN_00a24430 */
uint F_00a24430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa24430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  char * pcVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  F_0042b630(((char * PTR32 *)(gen_frame + 0x14)));
  cVar1 = *param_2;
  pcVar6 = param_2;
  cVar5 = '\0';
  while (cVar1 != '\0') {
    pcVar6 = pcVar6 + 1;
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined4 *)(gen_frame + 0x8)) >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar1);
    cVar5 = cVar1;
    if (((cVar1 == '>') || (cVar1 == '(')) || (cVar1 == '=')) {
      F_0048a040(param_1,((char * PTR32 *)(gen_frame + 0x14)));
      F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)));
      break;
    }
    F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x8)));
    cVar1 = *pcVar6;
  }
  bVar2 = false;
  if ((cVar5 == '(') || (cVar5 == '=')) {
    cVar1 = *pcVar6;
    pcVar7 = pcVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    while (pcVar6 = pcVar7, cVar1 != '\0') {
      pcVar6 = pcVar7 + 1;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar1);
      if (bVar2) {
        F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x8)));
        bVar2 = false;
      }
      else if (cVar1 == '\\') {
        F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),0x5c);
        bVar2 = true;
      }
      else if (cVar1 == '[') {
        uVar4 = F_00a241b0(param_1,pcVar6);
        if ((int)uVar4 < -1) {
          if (uVar4 == 0xfffffffa) {
            pcVar7 = "ERROR: syntax error (no left param : \'%s\')";
          }
          else if (uVar4 == 0xfffffffb) {
            pcVar7 = "ERROR: syntax error (no right param : \'%s\')";
          }
          else {
            if (uVar4 != 0xfffffffc) goto LAB_00a24626;
            pcVar7 = "ERROR: syntax error (no condition : \'%s\')";
          }
          F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x100,pcVar7,pcVar6);
LAB_00a24626: ;
          F_0042e430((undefined *)((int)this + 0x18),((undefined1 *)(gen_frame + 0x68)));
          F_0042c880(((char * PTR32 *)(gen_frame + 0x14)));
          F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
          return uVar4;
        }
        pcVar6 = pcVar7 + uVar4 + 2;
      }
      else if (cVar1 == '<') {
        F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),0x3c);
        uVar4 = F_00a20450(((char * PTR32 *)(gen_frame + 0x14)),pcVar6);
        if ((int)uVar4 < -1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x100,"ERROR: syntax error (not closed : \'%s\')",pcVar6);
          goto LAB_00a24626;
        }
        pcVar6 = pcVar6 + uVar4;
      }
      else if ((cVar1 == ',') || (cVar1 == ')')) {
        F_0048a040(param_1,((char * PTR32 *)(gen_frame + 0x14)));
        F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)));
      }
      else {
        if (cVar1 == '>') {
          if (*((char * PTR32 *)(gen_frame + 0x14))[0] != '\0') {
            F_0048a040(param_1,((char * PTR32 *)(gen_frame + 0x14)));
            F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)));
          }
          break;
        }
        F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x8)));
      }
      pcVar7 = pcVar6;
      uVar3 = (*(undefined4 *)(gen_frame + 0x8));
      cVar1 = *pcVar6;
    }
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return (int)pcVar6 - (int)param_2;
}

/* ref: FUN_00a246c0 */
uint F_00a246c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa246c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_1;
  ((undefined * PTR32 *)(gen_frame + 0x110))[0] = this;
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x24)) = 0;
  uVar2 = F_00a24430(this,&(*(undefined * PTR32 *)(gen_frame + 0x1c)),param_2);
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  *param_3 = uVar2;
  if ((int)uVar2 < -1) {
    (*(uint *)(gen_frame + 0x38)) = uVar2;
  }
  else {
    iVar5 = (int)(*(undefined * PTR32 *)(gen_frame + 0x20)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x1c))) >> 0x1f;
    iVar4 = ((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x1c))) / 0x54 + iVar5;
    uVar2 = iVar4 - iVar5;
    if (iVar4 != iVar5) {
      F_00a2fde0((undefined *)((int)this + 4),&(*(int *)(gen_frame + 0x2c)),(*(undefined * PTR32 *)(gen_frame + 0x1c)));
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x34));
      if ((*(int *)(gen_frame + 0x2c)) == *(int *)((int)this + 8)) {
        uVar2 = F_0042a990(pvVar6);
        F_00c472af(((undefined1 *)(gen_frame + 0x90)),0x80,"<WARNING: unknown macro code (\'%s\')>",uVar2);
        F_0042cc20(((undefined1 *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x90)),REFG(undefined4, 0x108cc50));
        F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x34)),((undefined1 *)(gen_frame + 0x3c)));
        F_0042c880(((undefined1 *)(gen_frame + 0x3c)));
        F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x1c)));
        F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
        return 0xffffffff;
      }
      F_0042d160((*(undefined * PTR32 *)(gen_frame + 0x34)),2);
      iVar5 = (*(int *)(gen_frame + 0x2c));
      F_0042d160(pvVar7,(uint)*(byte *)((*(int *)(gen_frame + 0x2c)) + 0x60));
      F_0042b630(((undefined1 *)(gen_frame + 0xbc)));
      if (1 < uVar2) {
        (*(int *)(gen_frame + 0x30)) = (int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x54;
        iVar4 = 0;
        do {
          F_0042b630(((undefined1 *)(gen_frame + 0x3c)));
          if (iVar4 < *(int *)(iVar5 + 0xa4)) {
            ((byte *)(gen_frame + 0xc))[0xc] = *(byte *)(iVar4 + 0x61 + iVar5);
          }
          else {
            ((byte *)(gen_frame + 0xc))[0xc] = 0x2e;
          }
          uVar3 = F_00a22b40(((undefined * PTR32 *)(gen_frame + 0x110))[0],((undefined1 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x30)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)));
          if ((int)uVar3 < -1) {
            F_0042c880(((undefined1 *)(gen_frame + 0x3c)));
            F_0042c880(((undefined1 *)(gen_frame + 0xbc)));
            F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x1c)));
            F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
            return uVar3;
          }
          F_0042d4d0(((undefined1 *)(gen_frame + 0xbc)),((undefined1 *)(gen_frame + 0x3c)));
          if ((int)(*(uint *)(gen_frame + 0x38)) < (int)uVar3) {
            (*(uint *)(gen_frame + 0x38)) = uVar3;
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x3c)));
          (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 0x54;
          uVar3 = iVar4 + 2;
          iVar5 = (*(int *)(gen_frame + 0x2c));
          pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x34));
          iVar4 = iVar4 + 1;
        } while (uVar3 < uVar2);
      }
      uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0xbc)));
      uVar2 = F_00a20720(((undefined * PTR32 *)(gen_frame + 0x110)),uVar2);
      iVar5 = 0;
      if (0 < (int)uVar2) {
        do {
          F_0042d160(pvVar7,(uint)*(byte *)((int)((undefined * PTR32 *)(gen_frame + 0x110)) + iVar5));
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar2);
      }
      F_0042d4d0(pvVar7,((undefined1 *)(gen_frame + 0xbc)));
      F_0042d160(pvVar7,3);
      F_0042c880(((undefined1 *)(gen_frame + 0xbc)));
    }
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x20));
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0x0) {
    for (; pvVar6 != pvVar1; pvVar6 = (undefined *)((int)pvVar6 + 0x54)) {
      F_0042c880(pvVar6);
    }
    F_00429760(pvVar7,(((*(int *)(gen_frame + 0x24)) - (int)pvVar7) / 0x54) * 0x54,0x35);
  }
  uVar2 = (*(uint *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar2;
}

/* ref: FUN_00a249b0 */
uint F_00a249b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa249b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00a246c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]) + 1,&(*(int *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00a249d0 */
uint F_00a249d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa249d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int iVar2;
  undefined1 * puVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *(undefined4 *)((int)this + 0x30) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  puVar3 = ((undefined1 *)(gen_frame + 0x4));
  iVar2 = (int)this + 0x34;
  uVar1 = F_0042a990(param_1);
  F_00a23c00(this,uVar1,iVar2,puVar3);
  uVar1 = *(uint *)((int)this + 0x30);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: Component::Text::TextModule::vf8 */
uint F_00a24a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa24a30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * in_ecx;
  
  in_ecx = (*(undefined * PTR32 *)&gen_args[0]) + 0x114;
  F_0042aca0(in_ecx);
  F_00a246c0((*(undefined * PTR32 *)&gen_args[0]) + 0x54,in_ecx,(*(int *)&gen_args[2]) + 1,&(*(int *)&gen_args[2]));
  F_0042cbc0((*(undefined * PTR32 *)&gen_args[1]),in_ecx);
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a24a70 */
uint F_00a24a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00a23ff0(this,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    F_0042d4d0(param_4,((undefined1 *)(gen_frame + 0x4)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00a24ae0 */
uint F_00a24ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00a23ff0(this,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    uVar2 = F_0042a9a0(((undefined1 *)(gen_frame + 0x4)),0,0,0,0);
    F_0042d4d0(param_4,uVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00a24b60 */
uint F_00a24b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00a23ff0(this,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    uVar2 = F_0042a9a0(((undefined1 *)(gen_frame + 0x4)),1,0,0,0);
    F_0042d4d0(param_4,uVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00a24be0 */
uint F_00a24be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00a23ff0(this,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0xc))))(*(int * PTR32 *)((int)this + 0x30))));
    uVar3 = F_0042a9a0(((undefined1 *)(gen_frame + 0x4)),1,1,0,*(undefined4 *)(&REFG(undefined, 0x1333e28) + *piVar2 * 4));
    F_0042d4d0(param_4,uVar3);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00a24c70 */
uint F_00a24c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00a23ff0(this,param_1,param_3,((undefined1 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    uVar2 = F_0042b820(((undefined1 *)(gen_frame + 0x4)));
    F_0042d4d0(param_4,uVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00a24ce0 */
uint F_00a24ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa24ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004296a0(0x68,0,0x2c4);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(int *)((int)this + 0x10);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x65))) = 1;
  return (uint)this;
}

/* ref: FUN_00a24d30 */
uint F_00a24d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa24d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  bVar2 = *param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_2;
  pbVar6 = param_1;
  if (0xef < bVar2) {
    if (bVar2 != 0xff) {
      uVar3 = F_00a20540(param_1,param_3);
      pbVar6 = param_1 + uVar3;
    }
    goto switchD_00a25093_default;
  }
  if (0xec < bVar2) goto switchD_00a25093_default;
  if (0xe7 < bVar2) {
    if (bVar2 == 0xe8) {
      uVar3 = F_00a24d30(this,param_1 + 1,param_2,param_3,1);
      *param_3 = *param_3 - 1;
      pbVar6 = param_1 + 1 + uVar3;
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x10) <= *param_3) {
LAB_00a24e4a: ;
        *param_3 = 0;
        goto switchD_00a25093_default;
      }
      uVar3 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x14)),*param_3);
      if (*(char *)(uVar3 + 8) == '\0') {
        uVar3 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x14)),*param_3);
        *param_3 = **(uint * PTR32 *)(uVar3 + 4);
        goto switchD_00a25093_default;
      }
    }
    else {
      if (bVar2 != 0xe9) {
        if (bVar2 != 0xec) goto switchD_00a25093_default;
        *param_3 = 0;
        goto LAB_00a25115;
      }
      uVar3 = F_00a24d30(this,param_1 + 1,(undefined *)((int)this + 0x14),param_3,1);
      *param_3 = *param_3 - 1;
      pbVar6 = param_1 + 1 + uVar3;
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x24) <= *param_3) goto LAB_00a24e4a;
      uVar3 = F_00484010((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x14),*param_3);
      if (*(char *)(uVar3 + 8) == '\0') {
        uVar3 = F_00484010((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x14),*param_3);
        *param_3 = **(uint * PTR32 *)(uVar3 + 4);
        goto switchD_00a25093_default;
      }
    }
    *param_3 = 0;
    goto switchD_00a25093_default;
  }
  if (bVar2 < 0xe0) {
    if (0xd7 < bVar2) {
      switch((unsigned int)(uintptr_t)(bVar2)) {
      case 0xd8: ;
        uVar7 = F_0046ff40();
        *param_3 = (uint)(uVar7 % 1000);
        pbVar6 = param_1 + 1;
        break;
      case 0xd9: ;
        *param_3 = REFG(undefined4, 0x14a2ad4);
        pbVar6 = param_1 + 1;
        break;
      case 0xda: ;
        *param_3 = REFG(undefined4, 0x14a2ad8);
        pbVar6 = param_1 + 1;
        break;
      case 0xdb: ;
        *param_3 = REFG(undefined4, 0x14a2adc);
        pbVar6 = param_1 + 1;
        break;
      case 0xdc: ;
        *param_3 = REFG(undefined4, 0x14a2ae0);
        pbVar6 = param_1 + 1;
        break;
      case 0xdd: ;
        *param_3 = REFG(int, 0x14a2aec) + 1;
        pbVar6 = param_1 + 1;
        break;
      case 0xde: ;
        *param_3 = REFG(int, 0x14a2ae4) + 1;
        pbVar6 = param_1 + 1;
        break;
      case 0xdf: ;
        *param_3 = REFG(int, 0x14a2ae8) + 0x76c;
        pbVar6 = param_1 + 1;
      }
      goto switchD_00a25093_default;
    }
    if (bVar2 == 0) goto switchD_00a25093_default;
    *param_3 = bVar2 - 1;
LAB_00a25115: ;
    pbVar6 = param_1 + 1;
    goto switchD_00a25093_default;
  }
  pbVar6 = param_1 + 1;
  F_0042b630(((undefined1 *)(gen_frame + 0x70)));
  F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  uVar3 = F_00a202f0(pbVar6);
  if (uVar3 == 0) {
    uVar5 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x18)),pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)),1);
  }
  else {
    uVar5 = F_00a23ff0(pvVar1,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x70)),1);
    F_00a21bc0((*(undefined * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x70)));
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  pbVar6 = pbVar6 + uVar5;
  uVar5 = F_00a202f0(pbVar6);
  if (uVar5 == 0) {
    uVar4 = F_00a24d30(pvVar1,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x10)),1);
  }
  else {
    uVar4 = F_00a23ff0(pvVar1,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0xc4)),1);
    F_00a21bc0((*(undefined * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0xc4)));
  }
  pbVar6 = pbVar6 + uVar4;
  if (uVar3 != uVar5) {
    if (uVar3 == 1) {
      uVar3 = F_00a4cf70(((undefined1 *)(gen_frame + 0x70)),0);
      (*(uint *)(gen_frame + 0xc)) = uVar3;
      uVar3 = 0;
    }
    else {
      uVar5 = F_00a4cf70(((undefined1 *)(gen_frame + 0xc4)),0);
      (*(uint *)(gen_frame + 0x10)) = uVar5;
    }
  }
  switch((unsigned int)(uintptr_t)(bVar2)) {
  case 0xe0: ;
    if (uVar3 == 0) {
      uVar3 = (uint)((int)(*(uint *)(gen_frame + 0x10)) <= (int)(*(uint *)(gen_frame + 0xc)));
    }
    else {
      bVar2 = F_0042c760(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xc4)));
LAB_00a25055: ;
      uVar3 = (uint)(bVar2 != 0);
    }
    break;
  case 0xe1: ;
    if (uVar3 != 0) {
      bVar2 = F_0042c820(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((int)(*(uint *)(gen_frame + 0x10)) < (int)(*(uint *)(gen_frame + 0xc)));
    break;
  case 0xe2: ;
    if (uVar3 != 0) {
      bVar2 = F_0042c700(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((int)(*(uint *)(gen_frame + 0xc)) <= (int)(*(uint *)(gen_frame + 0x10)));
    break;
  case 0xe3: ;
    if (uVar3 != 0) {
      bVar2 = F_0042c7c0(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((int)(*(uint *)(gen_frame + 0xc)) < (int)(*(uint *)(gen_frame + 0x10)));
    break;
  case 0xe4: ;
    if (uVar3 != 0) {
      bVar2 = F_0042b660(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((*(uint *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x10)));
    break;
  case 0xe5: ;
    if (uVar3 != 0) {
      bVar2 = F_0042b6f0(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xc4)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((*(uint *)(gen_frame + 0xc)) != (*(uint *)(gen_frame + 0x10)));
    break;
  default: ;
    goto switchD_00a24f87_default;
  }
  *param_3 = uVar3;
switchD_00a24f87_default: ;
  F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x70)));
switchD_00a25093_default: ;
  if (((char)param_4 != '\0') && (param_1 == pbVar6)) {
    F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
    uVar3 = F_00a23ff0((*(undefined * PTR32 *)(gen_frame + 0x18)),pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x1c)),0);
    if (uVar3 != 0) {
      uVar5 = F_00a4cf70(((undefined1 *)(gen_frame + 0x1c)),0);
      *param_3 = uVar5;
      F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
      F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
      return uVar3;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return (int)pbVar6 - (int)param_1;
}

/* ref: FUN_00a251f0 */
uint F_00a251f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa251f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00a25230 */
uint F_00a25230(unsigned int gen_a0)
{
  GEN_ENTER(0xa25230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  char cVar3;
  int iVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  this_00 = (undefined *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0xac,0,0x2c4);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0xa8))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0xa9))) = 1;
  F_004142d0((int)this + 0x14,0xffffffff);
  F_0042b630((int)this + 0x18);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 7;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3919))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"settime",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 8;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = '.';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3925))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3928),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 9;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = '.';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e392d))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3930),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 9;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = '.';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3935))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"switch",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x10;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3940),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x11;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3945))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3948),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x17;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*(undefined * PTR32 (*)[1])REFP(0x10e3950)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x16;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3954),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x12;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3959))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e395c),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1e;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3965))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"icon2",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x13;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3971))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"color",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x14;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e397d))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"edgecolor",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x15;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e398d))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"shadowcolor",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1d;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e399c),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1f;
  (*(int *)(gen_frame + 0xf4)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e39a4),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x18;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39a9))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"scale",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x19;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39b5))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e39b8),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1a;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39c1))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"italic",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1b;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39cd))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e39d0),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x1c;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39d9))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"shadow",REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x20;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39e5))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*(undefined * PTR32 (*)[1])REFP(0x10e39e8)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x21;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39ed))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*(undefined * PTR32 (*)[1])REFP(0x10e39f0)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x22;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39f5))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e39f8),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x23;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3a01))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3a04),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xb0)) + 0)) = 0x24;
  (*(int *)(gen_frame + 0xf4)) = 0;
  cVar3 = 'n';
  do {
    *(char *)((int)&(*(undefined4 *)(gen_frame + 0xb0)) + (*(int *)(gen_frame + 0xf4)) + 1) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3a0d))[(*(int *)(gen_frame + 0xf4))];
    (*(int *)(gen_frame + 0xf4)) = (*(int *)(gen_frame + 0xf4)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),(*(undefined * PTR32 (*)[1])REFP(0x10e3a10)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)F_004296a0(0xac,0,0x2c4);
  *puVar2 = *(undefined4 *)((int)this + 8);
  puVar2[1] = *(undefined4 *)((int)this + 8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar2 + 3,((undefined1 *)(gen_frame + 0x14)));
    puVar5 = ((undefined4 *)(gen_frame + 0x68));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00,((undefined1 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x25,&REFG(undefined, 0x10e3a14));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3a18),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x26,&REFG(undefined, 0x10e3a20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"float",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x27,"nnnns");
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3a34),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x28,&REFG(undefined, 0x10e3a3c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"sheet",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x29,&REFG(undefined, 0x10e3a4c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"string",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x2a,&REFG(undefined, 0x10e3a58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3a5c),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x2b,&REFG(undefined, 0x10e3a64));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3a68),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x2d,&REFG(undefined, 0x10e3a70));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"headall",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x2c,(*(undefined * PTR32 (*)[1])REFP(0x10e3a7c)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"split",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x2e,&REFG(undefined, 0x10e3a88));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"fixed",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x2f,&REFG(undefined, 0x10e3a94));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"lower",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x30,&REFG(undefined, 0x10e3aa0));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"janoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x31,&REFG(undefined, 0x10e3aac));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"ennoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x32,&REFG(undefined, 0x10e3ab8));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"denoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x33,&REFG(undefined, 0x10e3ac4));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"frnoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_00a2b000(&(*(undefined4 *)(gen_frame + 0xb0)),0x34,&REFG(undefined, 0x10e3ad0));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"chnoun",REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x68));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return (uint)this;
}

/* ref: FUN_00a26b00 */
uint F_00a26b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa26b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  undefined4 uVar2;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  ((undefined1 *)(gen_frame + 0x10))[0] = 0;
  F_00a2edd0(((undefined1 *)(gen_frame + 0x10)),param_1,0,0xffffffff);
  (*(undefined4 *)(gen_frame + 0x40)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((undefined1 *)(gen_frame + 0x2c))[0] = 0;
  F_00a2edd0(((undefined1 *)(gen_frame + 0x2c)),param_2,0,0xffffffff);
  uVar2 = 0;
  uVar1 = F_00a32750((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x10)));
  F_00a32170((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x8)),uVar1,uVar2);
  uVar1 = F_00a2e950(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00a26b90 */
uint F_00a26b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa26b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  undefined1 * puVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  
  pcVar3 = (char *)F_0042a990((*(uint *)&gen_args[1]));
  pcVar4 = pcVar3;
  pcVar6 = pcVar3;
  pcVar7 = pcVar3;
  if (-1 < (*(int *)&gen_args[3])) {
    do {
      pcVar6 = pcVar7;
      cVar1 = *pcVar6;
      if (cVar1 == '\0') break;
      if (cVar1 == '\x02') {
        uVar5 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),pcVar6 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(uint *)&gen_args[1]),1);
        pcVar7 = pcVar6 + 2 + (*(uint *)&gen_args[1]) + uVar5 + 1;
      }
      else {
        uVar5 = F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pcVar4) >> 8),cVar1));
        pcVar7 = pcVar6 + uVar5;
      }
      pcVar4 = pcVar7 - (int)pcVar3;
    } while ((int)(pcVar7 - (int)pcVar3) <= (*(int *)&gen_args[3]));
  }
  puVar2 = (*(undefined1 * PTR32 *)&gen_args[2]);
  uVar5 = (int)pcVar6 - (int)pcVar3;
  if (uVar5 == 0) {
    *(*(undefined1 * PTR32 *)&gen_args[2]) = 0;
    return 0;
  }
  (*(uint *)&gen_args[1]) = uVar5;
  F_00c46aa0((*(undefined1 * PTR32 *)&gen_args[2]),pcVar3,uVar5);
  puVar2[uVar5] = 0;
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00a26c30 */
uint F_00a26c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa26c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  pcVar2 = (char *)F_0042a990(param_1);
  pcVar4 = pcVar2;
  pcVar6 = pcVar2;
  pcVar5 = pcVar2;
  if (-1 < param_2) {
    do {
      pcVar6 = pcVar5;
      cVar1 = *pcVar6;
      if (cVar1 == '\0') break;
      if (cVar1 == '\x02') {
        uVar3 = F_00a24d30(this,pcVar6 + 2,(int)this + 0x34,&(*(char * PTR32 *)(gen_frame + 0x0)),1);
        pcVar5 = pcVar6 + 2 + uVar3 + 1 + (int)(*(char * PTR32 *)(gen_frame + 0x0));
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x0));
      }
      else {
        pcVar4 = (char *)F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pcVar4) >> 8),cVar1));
        pcVar5 = pcVar6 + (int)pcVar4;
      }
    } while ((int)pcVar5 - (int)pcVar2 <= param_2);
  }
  (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar6 - (int)pcVar2;
  uVar3 = F_0042d2c0(param_1,((undefined1 *)(gen_frame + 0x4)),0,pcVar6 - (int)pcVar2);
  F_0042ccf0(param_1,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x0));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)pcVar5;
}

/* ref: FUN_00a26ce0 */
uint F_00a26ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa26ce0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  char * pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar2 = (char *)F_0042a990((*(int *)&gen_args[1]));
  cVar1 = *pcVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar2) >> 8),cVar1);
  uVar5 = 0;
  while (cVar1 != '\0') {
    if ((char)uVar3 == '\x02') {
      if (pcVar2[1] != '\x10') {
        uVar5 = uVar5 + 1;
      }
      uVar4 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),pcVar2 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(int *)&gen_args[1]),1);
      pcVar2 = pcVar2 + 2 + (*(int *)&gen_args[1]) + uVar4 + 1;
    }
    else {
      uVar5 = uVar5 + 1;
      uVar4 = F_0042acc0(uVar3);
      pcVar2 = pcVar2 + uVar4;
    }
    cVar1 = *pcVar2;
    uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar1);
  }
  return uVar5;
}

/* ref: FUN_00a26d50 */
uint F_00a26d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa26d50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  char * pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char * pcVar5;
  
  pcVar2 = (char *)F_0042a990((*(int *)&gen_args[1]));
  cVar1 = *pcVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar2) >> 8),cVar1);
  pcVar5 = pcVar2;
  while (cVar1 != '\0') {
    if ((char)uVar3 == '\x02') {
      uVar4 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),pcVar5 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(int *)&gen_args[1]),1);
      pcVar5 = pcVar5 + 2 + (*(int *)&gen_args[1]) + uVar4 + 1;
    }
    else {
      uVar4 = F_0042acc0(uVar3);
      pcVar5 = pcVar5 + uVar4;
    }
    cVar1 = *pcVar5;
    uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar1);
  }
  return (int)pcVar5 - (int)pcVar2;
}

/* ref: FUN_00a26db0 */
uint F_00a26db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa26db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_1;
  if (param_3 == 0) {
    uVar3 = F_0042e430(param_1,&REFG(undefined, 0x10e38dd));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar3;
  }
  pcVar4 = (char *)F_0042a990(param_1);
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar4;
  iVar6 = 0;
  uVar5 = 0;
  (*(bool *)(gen_frame + 0x13)) = param_3 == REFG(undefined4, 0x108cc50);
  uVar3 = param_3;
  while ((this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc)), (*(bool *)(gen_frame + 0x13)) != false || (uVar5 < param_2 + param_3))) {
    cVar1 = *pcVar4;
    if (cVar1 == '\0') break;
    if (cVar1 == '\x02') {
      uVar3 = F_00a24d30(this,pcVar4 + 2,(int)this + 0x34,&(*(int *)(gen_frame + 0x4)),1);
      uVar2 = (*(int *)(gen_frame + 0x4)) + uVar3 + 3;
    }
    else {
      uVar3 = F_0042acc0(CONCAT31((int3)(uVar3 >> 8),cVar1));
      uVar2 = uVar3;
    }
    pcVar4 = pcVar4 + uVar2;
    uVar5 = uVar5 + 1;
    if (uVar5 == param_2) {
      iVar6 = (int)pcVar4 - (int)(*(char * PTR32 *)(gen_frame + 0x8));
    }
  }
  if (uVar5 < param_2) {
    uVar3 = F_0042e430((*(undefined * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x10e38de));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar3;
  }
  uVar3 = F_0042d2c0((*(undefined * PTR32 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)),iVar6,pcVar4 + (-(int)(*(char * PTR32 *)(gen_frame + 0x8)) - iVar6));
  F_0042ccf0(this_00,uVar3);
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar7;
}

/* ref: FUN_00a26de9 */
uint F_00a26de9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa26de9u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint in_ebp = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  char cVar1;
  undefined * this;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  pcVar3 = (char *)F_0042a990(in_ecx);
  *(char * PTR32 *)(in_ebp - 100) = pcVar3;
  uVar4 = *(uint *)(in_ebp + 0x10);
  iVar6 = 0;
  uVar5 = 0;
  *(bool *)(in_ebp - 0x59) = uVar4 == REFG(undefined4, 0x108cc50);
  while ((*(char *)(in_ebp - 0x59) != '\0' ||
         (uVar5 < (uint)(*(int *)(in_ebp + 0xc) + *(int *)(in_ebp + 0x10))))) {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') break;
    if (cVar1 == '\x02') {
      uVar4 = F_00a24d30(*(undefined * PTR32 *)(in_ebp - 0x6c),pcVar3 + 2,
                           (int)*(undefined * PTR32 *)(in_ebp - 0x6c) + 0x34,in_ebp - 0x68,1);
      uVar2 = *(int *)(in_ebp - 0x68) + uVar4 + 3;
    }
    else {
      uVar4 = F_0042acc0(CONCAT31((int3)(uVar4 >> 8),cVar1));
      uVar2 = uVar4;
    }
    pcVar3 = pcVar3 + uVar2;
    uVar5 = uVar5 + 1;
    if (uVar5 == *(uint *)(in_ebp + 0xc)) {
      iVar6 = (int)pcVar3 - *(int *)(in_ebp - 100);
    }
  }
  if (uVar5 < *(uint *)(in_ebp + 0xc)) {
    uVar4 = F_0042e430(*(undefined * PTR32 *)(in_ebp - 0x60),&REFG(undefined, 0x10e38de));
    F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
    return uVar4;
  }
  this = *(undefined * PTR32 *)(in_ebp - 0x60);
  uVar4 = F_0042d2c0(this,in_ebp - 0x58,iVar6,pcVar3 + (-*(int *)(in_ebp - 100) - iVar6));
  F_0042ccf0(this,uVar4);
  uVar7 = F_0042c880((undefined *)(in_ebp - 0x58));
  F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
  return (uint)uVar7;
}

/* ref: FUN_00a26ec0 */
uint F_00a26ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa26ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  
  pbVar2 = (byte *)F_0042a990((*(byte * PTR32 *)&gen_args[1]));
  bVar1 = *pbVar2;
  pbVar4 = pbVar2;
  while (bVar1 != 0) {
    if (*pbVar4 == 2) {
      pbVar2 = (byte *)F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),pbVar4 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(byte * PTR32 *)&gen_args[1]),1);
      pbVar4 = pbVar4 + 3 + (int)((*(byte * PTR32 *)&gen_args[1]) + (int)pbVar2);
    }
    else {
      pbVar2 = (byte *)F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pbVar2) >> 8),*pbVar4));
      iVar3 = 0;
      (*(byte * PTR32 *)&gen_args[1]) = pbVar2;
      if (0 < (int)pbVar2) {
        do {
          if ((uint)*pbVar4 == (int)(char)(*(undefined4 *)&gen_args[2])) {
            *pbVar4 = (byte)(*(undefined4 *)&gen_args[3]);
          }
          iVar3 = iVar3 + 1;
          pbVar4 = pbVar4 + 1;
        } while (iVar3 < (int)pbVar2);
      }
    }
    bVar1 = *pbVar4;
  }
  return (uint)pbVar2;
}

/* ref: FUN_00a26f40 */
uint F_00a26f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa26f40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined * extraout_ECX = 0;
  undefined * extraout_ECX_00 = 0;
  undefined * pvVar4;
  char * pcVar5;
  
  pcVar2 = (*(char * PTR32 *)&gen_args[1]);
  cVar1 = *(*(char * PTR32 *)&gen_args[1]);
  pvVar4 = (*(undefined * PTR32 *)&gen_args[0]);
  pcVar5 = (*(char * PTR32 *)&gen_args[1]);
  while (cVar1 != '\0') {
    cVar1 = *pcVar5;
    if ((cVar1 == '\r') || (cVar1 == '\n')) break;
    if (cVar1 == '\x02') {
      if (pcVar5[1] == '\x10') break;
      uVar3 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),pcVar5 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(char * PTR32 *)&gen_args[1]),1);
      pcVar5 = pcVar5 + 2 + uVar3 + 1 + (int)(*(char * PTR32 *)&gen_args[1]);
      pvVar4 = extraout_ECX;
    }
    else {
      uVar3 = F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pvVar4) >> 8),cVar1));
      pcVar5 = pcVar5 + uVar3;
      pvVar4 = extraout_ECX_00;
    }
    cVar1 = *pcVar5;
  }
  return (int)pcVar5 - (int)pcVar2;
}

/* ref: FUN_00a26fb0 */
uint F_00a26fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa26fb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  
  uVar4 = 1;
  uVar2 = F_0042a990((*(int *)&gen_args[1]));
  uVar3 = F_00a26f40((*(undefined * PTR32 *)&gen_args[0]),uVar2);
  for (pcVar5 = (char *)(uVar2 + uVar3); (pcVar5 != (char *)0x0 && (cVar1 = *pcVar5, cVar1 != '\0'))
      ; pcVar5 = pcVar5 + uVar2) {
    if (cVar1 == '\x02') {
      uVar2 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),pcVar5 + 2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(int *)&gen_args[1]),1);
      pcVar5 = pcVar5 + 2 + (*(int *)&gen_args[1]) + uVar2 + 1;
    }
    else if ((cVar1 == '\r') || (cVar1 == '\n')) {
      if (pcVar5[1] == '\n') {
        pcVar5 = pcVar5 + 1;
      }
      pcVar5 = pcVar5 + 1;
    }
    uVar4 = uVar4 + 1;
    uVar2 = F_00a26f40((*(undefined * PTR32 *)&gen_args[0]),pcVar5);
  }
  return uVar4;
}

/* ref: FUN_00a27030 */
uint F_00a27030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa27030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_0042a990(param_2);
  uVar1 = F_00a26f40(this,uVar1);
  F_0042d2c0(param_2,param_1,0,uVar1);
  return param_1;
}

/* ref: FUN_00a27060 */
uint F_00a27060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa27060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  pcVar2 = (char *)F_0042a990(param_2);
  this_00 = (undefined *)((int)this + 0x4c);
  F_0042aca0(this_00);
  cVar1 = *pcVar2;
  pcVar4 = pcVar2;
  do {
    if (cVar1 == '\0') {
      F_0042cbc0(param_1,this_00);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (uint)param_1;
    }
    uVar3 = F_00a26f40(this,pcVar4);
    (*(uint *)(gen_frame + 0x0)) = uVar3;
    uVar3 = F_0042d2c0(param_2,((undefined1 *)(gen_frame + 0x4)),(int)pcVar4 - (int)pcVar2,uVar3);
    F_0042ccf0(this_00,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    pcVar4 = pcVar4 + (*(uint *)(gen_frame + 0x0));
    cVar1 = *pcVar4;
    if (cVar1 == '\x02') {
      uVar3 = F_00a24d30(this,pcVar4 + 2,(int)this + 0x34,&(*(uint *)(gen_frame + 0x0)),1);
      pcVar4 = pcVar4 + 2 + (*(uint *)(gen_frame + 0x0)) + uVar3 + 1;
LAB_00a27107: ;
      F_0042aca0(this_00);
    }
    else if ((cVar1 == '\r') || (cVar1 == '\n')) {
      if (pcVar4[1] == '\n') {
        pcVar4 = pcVar4 + 1;
      }
      pcVar4 = pcVar4 + 1;
      goto LAB_00a27107;
    }
    cVar1 = *pcVar4;
  } while( true );
}

/* ref: FUN_00a27140 */
unsigned int F_00a27140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa27140u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  undefined * this_00;
  byte * pbVar2;
  byte * pbVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  pbVar2 = (byte *)F_0042a990((*(uint *)&gen_args[1]));
  this_00 = (*(undefined * PTR32 *)&gen_args[2]);
  pbVar3 = pbVar2;
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    pbVar3 = (byte *)F_0042aca0((*(undefined * PTR32 *)&gen_args[2]));
  }
  bVar1 = *pbVar2;
  uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pbVar3) >> 8),bVar1);
  while (bVar1 != 0) {
    if ((char)uVar4 == '\x02') {
      F_0042d160(this_00,2);
      F_0042d160(this_00,(uint)pbVar2[1]);
      pbVar2 = pbVar2 + 2;
      uVar5 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),pbVar2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34,&(*(uint *)&gen_args[1]),1);
      iVar6 = uVar5 + (*(uint *)&gen_args[1]);
      if (0 < iVar6) {
        do {
          F_0042d160(this_00,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar5 = F_0042d160(this_00,(uint)*pbVar2);
      pbVar2 = pbVar2 + 1;
    }
    else {
      uVar5 = F_0042acc0(uVar4);
      iVar6 = 0;
      (*(uint *)&gen_args[1]) = uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar5 = F_0042d160(this_00,(uint)*pbVar2);
          iVar6 = iVar6 + 1;
          pbVar2 = pbVar2 + 1;
        } while (iVar6 < (int)(*(uint *)&gen_args[1]));
      }
    }
    bVar1 = *pbVar2;
    uVar4 = CONCAT31((int3)(uVar5 >> 8),bVar1);
  }
  return 0;
}

/* ref: FUN_00a27210 */
uint F_00a27210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa27210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pbVar2 = (byte *)F_0042a990(param_1);
  uVar3 = F_0042aca0(param_2);
  bVar1 = *pbVar2;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
  while (bVar1 != 0) {
    if ((char)uVar3 == '\x02') {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x10,"[%02X",(uint)pbVar2[1]);
      F_0042d540(param_2,((undefined1 *)(gen_frame + 0x8)));
      uVar3 = F_00a24d30(this,pbVar2 + 2,(int)this + 0x34,&(*(uint *)(gen_frame + 0x4)),1);
      iVar4 = 0;
      pbVar2 = pbVar2 + 2 + uVar3;
      if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
        do {
          F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x10,"%c%02X",(-(uint)(iVar4 != 0) & 0xfffffff2) + 0x3a,(uint)*pbVar2)
          ;
          pbVar2 = pbVar2 + 1;
          F_0042d540(param_2,((undefined1 *)(gen_frame + 0x8)));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0x4)));
      }
      pbVar2 = pbVar2 + 1;
      uVar3 = F_0042d160(param_2,0x5d);
    }
    else {
      uVar3 = F_0042acc0(uVar3);
      iVar4 = 0;
      (*(uint *)(gen_frame + 0x4)) = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar3 = F_0042d160(param_2,(uint)*pbVar2);
          iVar4 = iVar4 + 1;
          pbVar2 = pbVar2 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0x4)));
      }
    }
    bVar1 = *pbVar2;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_00a27330 */
uint F_00a27330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa27330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = param_1;
  pcVar4 = (char *)0x0;
  pcVar2 = (char *)F_0042a990(param_1);
  uVar3 = F_0042aca0((int)this + 0x4c);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar2);
  if (*pcVar2 != '\0') {
    do {
      cVar1 = (char)uVar3;
      if (cVar1 == '\x02') {
        uVar3 = F_00a24d30(this,pcVar2 + 2,(int)this + 0x34,&(*(int *)(gen_frame + 0xc)),1);
        pcVar2 = pcVar2 + 2 + (*(int *)(gen_frame + 0xc)) + uVar3 + 1;
        pcVar4 = (char *)0x0;
      }
      else {
        if ((pcVar4 == (char *)0x0) &&
           ((cVar1 == ' ' || (((*pcVar2 == -0x1d && (pcVar2[1] == -0x80)) && (pcVar2[2] == -0x80))))
           )) {
          pcVar4 = pcVar2;
        }
        if ((cVar1 != ' ') && (((*pcVar2 != -0x1d || (pcVar2[1] != -0x80)) || (pcVar2[2] != -0x80)))
           ) {
          pcVar4 = (char *)0x0;
        }
        uVar3 = F_0042acc0(uVar3);
        pcVar2 = pcVar2 + uVar3;
      }
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar2);
    } while (*pcVar2 != '\0');
    if (pcVar4 != (char *)0x0) {
      uVar3 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x10)));
      uVar3 = F_0042d2c0(this_00,((undefined1 *)(gen_frame + 0x14)),0,(int)pcVar4 - uVar3);
      F_0042ccf0(this_00,uVar3);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      uVar3 = (uint)uVar5;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar3;
}

/* ref: FUN_00a27410 */
uint F_00a27410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa27410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = param_1;
  pbVar2 = (byte *)F_0042a990(param_2);
  F_0042b630(param_1);
  uVar3 = F_0042b630(((char * PTR32 *)(gen_frame + 0x14)));
  bVar1 = *pbVar2;
  uVar4 = CONCAT31((int3)(uVar3 >> 8),bVar1);
  this_00 = param_1;
  uVar3 = param_5;
  while (bVar1 != 0) {
    if ((char)uVar4 == '\x02') {
      if (*((char * PTR32 *)(gen_frame + 0x14))[0] != '\0') {
        uVar5 = ((code *)*(gen_code32 *)(*param_3 + 4))(param_3,((char * PTR32 *)(gen_frame + 0x14)),param_4,uVar3);
        F_0042ccf0(((char * PTR32 *)(gen_frame + 0x14)),uVar5);
        uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)));
        if (uVar3 <= uVar5) break;
        F_0042e360(this_00,((char * PTR32 *)(gen_frame + 0x14)));
        uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)));
        uVar3 = uVar3 - uVar5;
        F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)));
      }
      F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),(uint)*pbVar2);
      F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),(uint)pbVar2[1]);
      pbVar2 = pbVar2 + 2;
      uVar5 = F_00a24d30(this,pbVar2,(int)this + 0x34,&(*(uint *)(gen_frame + 0xc)),1);
      iVar6 = uVar5 + (*(uint *)(gen_frame + 0xc));
      if (0 < iVar6) {
        do {
          F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          iVar6 = iVar6 + -1;
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10));
        } while (iVar6 != 0);
      }
      F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),(uint)*pbVar2);
      pbVar2 = pbVar2 + 1;
      uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)));
      if (uVar3 <= uVar5) break;
      F_0042e360(this_00,((char * PTR32 *)(gen_frame + 0x14)));
      uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)));
      uVar3 = uVar3 - uVar5;
      uVar5 = F_0042aca0(((char * PTR32 *)(gen_frame + 0x14)));
    }
    else {
      uVar5 = F_0042acc0(uVar4);
      (*(uint *)(gen_frame + 0xc)) = uVar5;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      if (0 < (int)uVar5) {
        iVar6 = 0;
        do {
          uVar5 = F_0042d160(((char * PTR32 *)(gen_frame + 0x14)),(uint)*pbVar2);
          iVar6 = iVar6 + 1;
          pbVar2 = pbVar2 + 1;
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10));
        } while (iVar6 < (int)(*(uint *)(gen_frame + 0xc)));
      }
    }
    bVar1 = *pbVar2;
    uVar4 = CONCAT31((int3)(uVar5 >> 8),bVar1);
  }
  if (*((char * PTR32 *)(gen_frame + 0x14))[0] != '\0') {
    uVar5 = ((code *)*(gen_code32 *)(*param_3 + 4))(param_3,((char * PTR32 *)(gen_frame + 0x14)),param_4,uVar3);
    F_0042ccf0(((char * PTR32 *)(gen_frame + 0x14)),uVar5);
    uVar5 = F_0042a970(((char * PTR32 *)(gen_frame + 0x14)));
    if (uVar5 < uVar3) {
      F_0042e360(this_00,((char * PTR32 *)(gen_frame + 0x14)));
    }
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)this_00;
}

/* ref: Component::Text::TextChecker::vf5 */
uint F_00a275d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa275d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[3]),&(*(int *)&gen_args[3]),1);
  if ((uVar1 != 0) && ((*(int *)&gen_args[3]) == 0)) {
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30))) + 1;
  }
  return uVar1;
}

/* ref: FUN_00a27600 */
uint F_00a27600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27600u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 == 0) {
    return 0;
  }
  F_00a1afb0((*(undefined4 *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00a27640 */
uint F_00a27640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27640u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x11,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a27680 */
uint F_00a27680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27680u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x12,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a276c0 */
uint F_00a276c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa276c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (*(undefined4 *)&gen_args[3]);
  iVar1 = (*(int *)&gen_args[1]);
  uVar3 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(int *)&gen_args[1]),1);
  if (uVar3 != 0) {
    uVar4 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),uVar3 + iVar1,uVar2,&(*(undefined4 *)&gen_args[3]),1);
    if (uVar4 != 0) {
      F_00a21d00((*(undefined4 *)&gen_args[4]),0x1e,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]));
      return uVar4 + uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00a27730 */
uint F_00a27730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27730u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[4]);
  if (*(*(char * PTR32 *)&gen_args[1]) == -0x14) {
    F_0042d160((*(undefined * PTR32 *)&gen_args[4]),2);
    F_0042d160(this_00,0x13);
    F_0042d160(this_00,2);
    F_0042d160(this_00,0xec);
    F_0042d160(this_00,3);
    return (*(uint *)&gen_args[2]);
  }
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(char * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(char * PTR32 *)&gen_args[1]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined * PTR32 *)&gen_args[4]),0x13,(*(char * PTR32 *)&gen_args[1]));
  }
  return uVar1;
}

/* ref: FUN_00a277b0 */
uint F_00a277b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa277b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x14,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a277f0 */
uint F_00a277f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa277f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x15,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a27830 */
uint F_00a27830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27830u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[4]),0x18,(*(undefined4 *)&gen_args[3]));
  }
  return uVar1;
}

/* ref: FUN_00a27870 */
uint F_00a27870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_00a24d30(this,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),10,0,0);
    F_0042d4d0(param_4,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00a278e0 */
uint F_00a278e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa278e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_00a24d30(this,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),0x10,0,0);
    F_0042d4d0(param_4,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00a27950 */
uint F_00a27950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_4;
  (*(undefined4 *)(gen_frame + 0x4)) = param_3;
  uVar1 = F_00a24d30(this,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
    uVar2 = F_00a23ff0(this,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0xb4)),1);
    if (uVar2 != 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x60)),&REFG(undefined, 0x10e3d68),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0xc)),"&#44;",REFG(undefined4, 0x108cc50));
      F_0042d750(((undefined1 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x60)));
      F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
      uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x0)),10,1,uVar3);
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x8)),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return uVar2 + uVar1;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: FUN_00a27a90 */
uint F_00a27a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_00a24d30(this,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),10,2,0);
    F_0042d4d0(param_4,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00a27b10 */
uint F_00a27b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_00a24d30(this,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),10,3,0);
    F_0042d4d0(param_4,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00a27b80 */
uint F_00a27b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_4;
  uVar1 = F_00a24d30(this,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x8)),1);
  if (uVar1 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x64)));
    uVar2 = F_00a23ff0(this,param_1 + uVar1,param_3,((undefined1 *)(gen_frame + 0x64)),1);
    if (uVar2 != 0) {
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x64)));
      uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x8)),10,4,uVar3);
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0xc)),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x10)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
      return uVar2 + uVar1;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: FUN_00a27c60 */
uint F_00a27c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  uVar1 = F_00a24d30(this,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x8)),1);
  if (uVar1 != 0) {
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    uVar1 = F_00a24d30(this,uVar1 + param_1,param_3,&(*(undefined4 *)(gen_frame + 0x4)),1);
    if (uVar1 != 0) {
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + uVar1;
      F_0042b630(((undefined1 *)(gen_frame + 0x64)));
      uVar1 = (*(uint *)(gen_frame + 0xc));
      uVar2 = F_00a23ff0(this,param_1 + (*(uint *)(gen_frame + 0xc)),param_3,((undefined1 *)(gen_frame + 0x64)),1);
      if (uVar2 != 0) {
        uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x64)));
        uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),5,uVar3);
        F_0042d4d0(param_4,uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0x10)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return uVar2 + uVar1;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: FUN_00a27d60 */
uint F_00a27d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_4;
  F_0042b630(((undefined1 *)(gen_frame + 0x20)));
  F_0042b630(((undefined1 *)(gen_frame + 0x74)));
  uVar1 = F_00a23ff0(this,param_1,param_3,((undefined1 *)(gen_frame + 0x20)),1);
  if (uVar1 != 0) {
    (*(uint *)(gen_frame + 0x1c)) = uVar1;
    uVar1 = F_00a23ff0(this,uVar1 + param_1,param_3,((undefined1 *)(gen_frame + 0x74)),1);
    if (uVar1 != 0) {
      uVar1 = (*(uint *)(gen_frame + 0x1c)) + uVar1;
      (*(uint *)(gen_frame + 0x1c)) = uVar1;
      uVar1 = F_00a24d30(this,param_1 + uVar1,param_3,&(*(int *)(gen_frame + 0x14)),1);
      if (uVar1 != 0) {
        uVar1 = (*(uint *)(gen_frame + 0x1c)) + uVar1;
        (*(int *)(gen_frame + 0x4)) = 0;
        (*(int *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        F_00ada1b0(((undefined1 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x74)),&(*(int *)(gen_frame + 0x4)));
        if ((*(int *)(gen_frame + 0x14)) - 1U < (uint)(((*(int *)(gen_frame + 0x8)) - (*(int *)(gen_frame + 0x4))) / 0x54)) {
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x14)) * 0x54 + -0x54 + (*(int *)(gen_frame + 0x4)));
        }
        F_004876d0(&(*(int *)(gen_frame + 0x4)));
        F_0042c880(((undefined1 *)(gen_frame + 0x74)));
        F_0042c880(((undefined1 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
        return uVar1;
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  F_0042c880(((undefined1 *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return 0;
}

/* ref: FUN_00a27ed0 */
uint F_00a27ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_4;
  if (*(int *)((int)this + 0x164) == 0) goto LAB_00a27ff9;
  uVar1 = F_00a24d30(this,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    uVar1 = F_00a24d30(this,param_1 + uVar1,param_3,&(*(undefined4 *)(gen_frame + 0x8)),1);
    if (uVar1 != 0) {
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + uVar1;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x164) + 4))))
                        (*(int * PTR32 *)((int)this + 0x164),(*(undefined4 *)(gen_frame + 0x0)),&(*(char *)(gen_frame + 0x13)));
      if (uVar1 != 0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x14)));
        if ((*(char *)(gen_frame + 0x13)) == '\0') {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0x18))))
                            ((int)this + -4,uVar1,(*(undefined4 *)(gen_frame + 0x8)),0xffff,param_3,((undefined1 *)(gen_frame + 0x14)));
        }
        else {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0x24))))
                            ((int)this + -4,uVar1,(*(undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)));
          uVar1 = (uint)((char)uVar1 != '\0') * 2 - 1;
        }
        if (uVar1 == 1) {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x164) + 8))))(*(int * PTR32 *)((int)this + 0x164));
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x4)),uVar1);
          F_0042d4d0(this_00,((undefined1 *)(gen_frame + 0x14)));
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x164) + 0xc))))(*(int * PTR32 *)((int)this + 0x164));
          F_0042d4d0(this_00,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x14)));
          uVar1 = (*(uint *)(gen_frame + 0xc));
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return uVar1;
        }
        if (uVar1 != 0xffffffff) {
          F_0042c880(((undefined1 *)(gen_frame + 0x14)));
          goto LAB_00a28014;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      }
LAB_00a27ff9: ;
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return param_2;
    }
  }
LAB_00a28014: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_00a28030 */
uint F_00a28030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa28030u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[1]);
  bVar1 = *(*(byte * PTR32 *)&gen_args[1]);
  pbVar5 = (*(byte * PTR32 *)&gen_args[1]);
  if (0xef < bVar1) {
    switch((unsigned int)(uintptr_t)(bVar1)) {
    case 0xf0: ;
    case 0xf1: ;
    case 0xf3: ;
    case 0xf7: ;
      return 2;
    case 0xf2: ;
    case 0xf4: ;
    case 0xf5: ;
    case 0xf8: ;
    case 0xf9: ;
    case 0xfb: ;
      return 3;
    case 0xf6: ;
    case 0xfa: ;
    case 0xfc: ;
    case 0xfd: ;
      return 4;
    case 0xfe: ;
      return 5;
    case 0xff: ;
      pbVar5 = (*(byte * PTR32 *)&gen_args[1]) + 1;
      uVar3 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),pbVar5,(*(undefined4 *)&gen_args[2]),&(*(byte * PTR32 *)&gen_args[1]),1);
      return (int)(pbVar5 + uVar3 + (int)(*(byte * PTR32 *)&gen_args[1])) - (int)pbVar2;
    }
    goto switchD_00a2805b_default;
  }
  if (bVar1 < 0xed) {
    if (0xe7 < bVar1) {
      pbVar5 = (*(byte * PTR32 *)&gen_args[1]) + 1;
      if (bVar1 != 0xec) {
        uVar3 = F_00a28030((*(undefined * PTR32 *)&gen_args[0]),pbVar5,(*(undefined4 *)&gen_args[2]));
        return (uint)(pbVar5 + (uVar3 - (int)pbVar2));
      }
      goto switchD_00a2805b_default;
    }
    if (0xdf < bVar1) {
      uVar3 = F_00a28030((*(undefined * PTR32 *)&gen_args[0]),(*(byte * PTR32 *)&gen_args[1]) + 1,(*(undefined4 *)&gen_args[2]));
      uVar4 = F_00a28030((*(undefined * PTR32 *)&gen_args[0]),pbVar2 + uVar3 + 2,(*(undefined4 *)&gen_args[2]));
      return (uint)(pbVar2 + uVar3 + 2 + (uVar4 - (int)pbVar2));
    }
    if ((bVar1 < 0xd8) && (bVar1 == 0)) goto switchD_00a2805b_default;
  }
  pbVar5 = (*(byte * PTR32 *)&gen_args[1]) + 1;
switchD_00a2805b_default: ;
  return (int)pbVar5 - (int)(*(byte * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a28150 */
uint F_00a28150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa28150u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined4 uVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar3;
  int iVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar6;
  byte * pbVar7;
  byte * pbVar8;
  
  ppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  bVar1 = *param_2;
  (*(uint *)(gen_frame + 0x34)) = 0xf;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0] = (undefined4 * PTR32 * PTR32 * PTR32 *)((uint)ppppuVar3 & 0xffffff00);
  pbVar8 = param_2;
  pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16));
  do {
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0] = pppppuVar5;
    if (bVar1 == 0) {
LAB_00a28314: ;
      if (0xf < (*(uint *)(gen_frame + 0x34))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0],(*(uint *)(gen_frame + 0x34)) + 1,0x2c4);
      }
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (int)pbVar8 - (int)param_2;
    }
    pbVar7 = pbVar8 + 1;
    gen_piece_set(((byte *)(gen_frame + 0x8)), 17, 3, (unsigned long long)(SUB43(uVar2,1)));
    ((byte *)(gen_frame + 0x8))[0x10] = bVar1;
    if (bVar1 == 0x5d) {
      F_00a32fd0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)));
      (*(int *)(gen_frame + 0x30)) = 0;
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
      if ((*(uint *)(gen_frame + 0x34)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20));
      }
      *(undefined1 *)pppppuVar5 = 0;
      pbVar8 = pbVar8 + 2;
      goto LAB_00a28314;
    }
    if ((bVar1 == 0x21) || ((';' < (char)bVar1 && ((char)bVar1 < '?')))) {
      (*(uint *)(gen_frame + 0x50)) = 0xf;
      (*(int *)(gen_frame + 0x4c)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0] = (undefined4 * PTR32 * PTR32 * PTR32 *)((uint)pppppuVar5 & 0xffffff00);
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)),0,1,0x5b);
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
      if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
      }
      pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
      if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
        pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
      }
      if ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c)) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c))) - (int)pppppuVar6;
      }
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)),iVar4,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)));
      if (*pbVar7 == 0x3d) {
        pbVar7 = pbVar8 + 2;
        pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
        if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
          pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
        }
        pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
        if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
          pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
        }
        if ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c)) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c))) - (int)pppppuVar6;
        }
        F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)),iVar4,1,0x3d);
      }
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
      if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
      }
      pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
      if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
        pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c));
      }
      if ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c)) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x4c))) - (int)pppppuVar6;
      }
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)),iVar4,1,0x5d);
      F_00a32fd0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c)));
      F_00a32fd0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)));
      (*(int *)(gen_frame + 0x30)) = 0;
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
      if ((*(uint *)(gen_frame + 0x34)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20));
      }
      *(undefined1 *)pppppuVar5 = 0;
      if (0xf < (*(uint *)(gen_frame + 0x50))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0],(*(uint *)(gen_frame + 0x50)) + 1,0x2c4);
      }
    }
    else {
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
      if ((*(uint *)(gen_frame + 0x34)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20));
      }
      pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20))[0];
      if ((*(uint *)(gen_frame + 0x34)) < 0x10) {
        pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20));
      }
      if ((undefined1 *)((int)pppppuVar5 + (*(int *)(gen_frame + 0x30))) == (undefined1 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x30))) - (int)pppppuVar6;
      }
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x20)),iVar4,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)));
    }
    bVar1 = *pbVar7;
    pbVar8 = pbVar7;
    pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
    uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16));
  } while( true );
}

/* ref: FUN_00a28350 */
uint F_00a28350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa28350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar9;
  char * pcVar10;
  
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x60)) = 0xf;
  (*(int *)(gen_frame + 0x5c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
  cVar5 = *param_2;
  bVar1 = false;
  (*(int *)(gen_frame + 0x8)) = 0;
  bVar3 = false;
  bVar2 = false;
  pcVar10 = param_2;
  if (cVar5 != '\0') {
    do {
      pcVar10 = pcVar10 + 1;
      (*(undefined4 *)(gen_frame + 0xd)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xd)), 1, 3),cVar5);
      if (bVar1) {
        ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
        if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
          ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
        }
        ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
        if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
          ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
        }
        if ((undefined1 *)((int)ppppuVar8 + (*(int *)(gen_frame + 0x5c))) == (undefined1 *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = ((int)ppppuVar8 + (*(int *)(gen_frame + 0x5c))) - (int)ppppuVar9;
        }
        F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),iVar6,1,(*(undefined4 *)(gen_frame + 0xd)));
        bVar1 = false;
      }
      else {
        switch((unsigned int)(uintptr_t)(cVar5)) {
        case '(': ;
        case '=': ;
          if ((*(int *)(gen_frame + 0x8)) == 0) {
LAB_00a284ed: ;
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0xd)));
          }
          else {
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),0x3d);
            F_00a32fd0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
            (*(int *)(gen_frame + 0x5c)) = 0;
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            *(undefined1 *)ppppuVar8 = 0;
            bVar2 = false;
            bVar3 = true;
          }
          break;
        case ')': ;
          if ((*(int *)(gen_frame + 0x8)) == 0) {
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0xd)));
          }
          break;
        default: ;
          ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
            ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
            ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          if ((undefined1 *)((int)ppppuVar8 + (*(int *)(gen_frame + 0x5c))) == (undefined1 *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = ((int)ppppuVar8 + (*(int *)(gen_frame + 0x5c))) - (int)ppppuVar9;
          }
          F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),iVar6,1,(*(undefined4 *)(gen_frame + 0xd)));
          break;
        case ',': ;
          if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00a284ed;
          F_00a32fd0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
          (*(int *)(gen_frame + 0x5c)) = 0;
          ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
            ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          *(undefined1 *)ppppuVar8 = 0;
          (*(undefined4 *)(gen_frame + 0x44)) = 0xf;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          ((undefined1 *)(gen_frame + 0x30))[0] = 0;
          F_00a2f470(((undefined1 *)(gen_frame + 0x30)),&REFG(undefined, 0x10e3d18),1);
          F_00a32fd0(param_1,((undefined1 *)(gen_frame + 0x30)));
          F_00a2df40(((undefined1 *)(gen_frame + 0x30)));
          break;
        case '<': ;
          if ((*(int *)(gen_frame + 0x5c)) != 0) {
            F_00a32fd0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
            (*(int *)(gen_frame + 0x5c)) = 0;
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            *(undefined1 *)ppppuVar8 = 0;
          }
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0xd)));
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          bVar2 = true;
          break;
        case '>': ;
          if ((*(int *)(gen_frame + 0x8)) == 0) {
LAB_00a28584: ;
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0xd)));
          }
          else {
            if (bVar2) {
              F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0xd)));
              F_00a32fd0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
            }
            else {
              F_00a32fd0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
              F_00a30c60(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e3d14));
              F_00a32fd0(param_1,((undefined1 *)(gen_frame + 0x14)));
              F_00a2df40(((undefined1 *)(gen_frame + 0x14)));
            }
            (*(int *)(gen_frame + 0x5c)) = 0;
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
              ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
            *(undefined1 *)ppppuVar8 = 0;
            bVar2 = false;
          }
          break;
        case '[': ;
          if (((*(int *)(gen_frame + 0x8)) == 0) || (!bVar3)) {
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),0x5c);
            goto LAB_00a28584;
          }
          uVar7 = F_00a28150(param_1,pcVar10);
          pcVar10 = pcVar10 + uVar7;
          (*(int *)(gen_frame + 0x5c)) = 0;
          ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if ((*(uint *)(gen_frame + 0x60)) < 0x10) {
            ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          *(undefined1 *)ppppuVar8 = 0;
          bVar3 = false;
          break;
        case '\\': ;
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0xd)));
          bVar1 = true;
          break;
        case ']': ;
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),0x5c);
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0xd)));
        }
      }
      cVar5 = *pcVar10;
    } while (cVar5 != '\0');
    if ((*(int *)(gen_frame + 0x5c)) != 0) {
      F_00a32fd0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)));
    }
  }
  if (0xf < (*(uint *)(gen_frame + 0x60))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0],(*(uint *)(gen_frame + 0x60)) + 1,0x2c4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (int)pcVar10 - (int)param_2;
}

/* ref: FUN_00a286a0 */
uint F_00a286a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa286a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  int iVar7;
  uint local_c;
  int local_8;
  int iVar6;
  
  iVar6 = *param_2;
  local_8 = 0;
  local_c = param_3;
  if (param_3 < (uint)((param_2[1] - iVar6) / 0x1c)) {
    iVar7 = param_3 * 0x1c;
    do {
      pcVar5 = (char *)(iVar6 + iVar7);
      pcVar4 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar4 = *(char * PTR32 *)pcVar5;
      }
      if (*pcVar4 == '<') {
        F_00a32fd0(param_1,pcVar5);
        puVar2 = (undefined4 *)(iVar7 + *param_2);
        piVar1 = puVar2 + 4;
        if (0xf < *(uint *)(iVar7 + 0x14 + *param_2)) {
          puVar2 = (undefined4 *)*puVar2;
        }
        if (*(char *)((int)puVar2 + *piVar1 + -1) != '>') {
          local_8 = local_8 + 1;
        }
      }
      else {
        iVar6 = *(int *)(pcVar5 + 0x10);
        pcVar4 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar4 = *(char * PTR32 *)pcVar5;
        }
        uVar3 = F_0040d320(pcVar4,&REFG(undefined, 0x10e3d24),(uint)(iVar6 != 0));
        if (((uVar3 == 0) && (iVar6 != 0)) && (iVar6 == 1)) {
          if (local_8 == 0) break;
          if (0 < local_8) {
            F_00a32fd0(param_1,pcVar5);
          }
          local_8 = local_8 + -1;
        }
        else {
          iVar6 = *(int *)(pcVar5 + 0x10);
          pcVar4 = pcVar5;
          if (0xf < *(uint *)(pcVar5 + 0x14)) {
            pcVar4 = *(char * PTR32 *)pcVar5;
          }
          uVar3 = F_0040d320(pcVar4,&REFG(undefined, 0x10e3d28),(uint)(iVar6 != 0));
          if (((uVar3 == 0) && (iVar6 != 0)) && ((iVar6 == 1 && (local_8 == 0)))) break;
          F_00a32fd0(param_1,pcVar5);
        }
      }
      iVar6 = *param_2;
      local_c = local_c + 1;
      iVar7 = iVar7 + 0x1c;
    } while (local_c < (uint)((param_2[1] - iVar6) / 0x1c));
  }
  return local_c - param_3;
}

/* ref: FUN_00a28830 */
uint F_00a28830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa28830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  int * piVar1;
  int iVar2;
  uint * puVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  uint local_18;
  uint * local_14;
  uint * local_10;
  uint local_c;
  uint local_8;
  
  if ((param_3[5] - param_3[4]) / 0x1c == 1) {
    F_00a32fd0(param_4,param_3[4]);
    return 1;
  }
  uVar4 = (param_3[1] - *param_3) / 0x1c;
  uVar6 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
  puVar3 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0,0);
  if (puVar3 == (uint *)0x0) {
    local_14 = (uint *)0x0;
  }
  else {
    *puVar3 = uVar4;
    local_14 = puVar3 + 1;
    puVar3 = local_14;
    while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 4;
    }
  }
  local_18 = param_2 + 1;
  local_c = 1;
  local_8 = local_18;
  puVar3 = local_14;
  if (1 < (uint)((param_3[1] - *param_3) / 0x1c)) {
    do {
      local_10 = puVar3 + 4;
      iVar7 = *param_1;
      if ((uint)((param_1[1] - iVar7) / 0x1c) <= local_8) {
        return 0;
      }
      iVar2 = *(int *)(iVar7 + 0x10 + local_8 * 0x1c);
      piVar1 = (int *)(iVar7 + local_8 * 0x1c);
      piVar5 = piVar1;
      if (0xf < (uint)piVar1[5]) {
        piVar5 = (int *)*piVar1;
      }
      uVar4 = F_0040d320(piVar5,&REFG(undefined, 0x10e3d2c),(uint)(iVar2 != 0));
      if (((uVar4 == 0) && (iVar2 != 0)) && (iVar2 == 1)) {
        F_00a32fd0(local_10,piVar1);
        local_18 = local_8 + 1;
        local_8 = local_18;
      }
      else {
        iVar7 = piVar1[4];
        piVar5 = piVar1;
        if (0xf < (uint)piVar1[5]) {
          piVar5 = (int *)*piVar1;
        }
        uVar4 = F_0040d320(piVar5,&REFG(undefined, 0x10e3d30),(uint)(iVar7 != 0));
        if (((uVar4 == 0) && (iVar7 != 0)) && (iVar7 == 1)) {
          F_00a32fd0(local_10,piVar1);
          local_8 = local_8 + 1;
        }
        else {
          uVar4 = F_00a286a0(local_10,param_1,local_8);
          local_8 = local_8 + uVar4;
        }
      }
      local_c = local_c + 1;
      puVar3 = local_10;
    } while (local_c < (uint)((param_3[1] - *param_3) / 0x1c));
  }
  iVar7 = param_3[4];
  iVar2 = param_3[5] - iVar7 >> 0x1f;
  local_c = 0;
  if ((param_3[5] - iVar7) / 0x1c + iVar2 != iVar2) {
    local_10 = (uint *)0x0;
    do {
      iVar2 = *(int *)(param_3[8] + local_c * 4);
      if (iVar2 < 0) {
        F_00a32fd0(param_4,(int)local_10 + iVar7);
      }
      else {
        if ((param_3[1] - *param_3) / 0x1c <= iVar2) {
          return 0;
        }
        puVar3 = local_14 + iVar2 * 4;
        uVar4 = *puVar3;
        iVar7 = (int)(puVar3[1] - uVar4) >> 0x1f;
        uVar6 = 0;
        if ((int)(puVar3[1] - uVar4) / 0x1c + iVar7 != iVar7) {
          param_1 = (int *)0x0;
          do {
            F_00a32fd0(param_4,(int)param_1 + uVar4);
            uVar4 = *puVar3;
            param_1 = (int *)((int)param_1 + 0x1c);
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)((int)(puVar3[1] - uVar4) / 0x1c));
        }
      }
      iVar7 = param_3[4];
      local_10 = (uint *)((int)local_10 + 0x1c);
      local_c = local_c + 1;
    } while (local_c < (uint)((param_3[5] - iVar7) / 0x1c));
  }
  if (local_14 != (uint *)0x0) {
    F_00a32990(local_14,3);
  }
  return local_18 - param_2;
}

/* ref: FUN_00a28b70 */
byte F_00a28b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa28b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint * puVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  uint * puVar7;
  uint uVar8;
  uint * puVar9;
  int iVar10;
  uint uVar11;
  undefined4 * puVar12;
  uint uVar13;
  int * piVar14;
  uint * puVar15;
  uint uVar16;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar16 = param_1[5];
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x30)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)0x0;
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)0x0;
  (*(int *)(gen_frame + 0x24)) = 0;
  puVar12 = param_1;
  if (0xf < uVar16) {
    puVar12 = (undefined4 *)*param_1;
  }
  F_00a28350(this,&(*(uint * PTR32 *)(gen_frame + 0x30)),puVar12);
  uVar16 = ((int)(*(uint * PTR32 *)(gen_frame + 0x34)) - (int)(*(uint * PTR32 *)(gen_frame + 0x30))) / 0x1c;
  if (uVar16 != 0) {
    (*(uint *)(gen_frame + 0x44)) = uVar16;
    puVar9 = (*(uint * PTR32 *)(gen_frame + 0x30));
    do {
      puVar7 = puVar9;
      if (0xf < puVar9[5]) {
        puVar7 = (uint *)*puVar9;
      }
      if ((char)*puVar7 != '<') {
        puVar7 = puVar9;
        if (0xf < puVar9[5]) {
          puVar7 = (uint *)*puVar9;
        }
        if (((char)*puVar7 != '[') &&
           (piVar14 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x18))), piVar14 != *(int * PTR32 *)((int)this + 0x18)))
        {
          do {
            F_00a22180(puVar9,piVar14 + 3,piVar14 + 10);
            if (*(char *)((int)piVar14 + 0x45) == '\0') {
              piVar3 = (int *)piVar14[2];
              if (*(char *)((int)piVar3 + 0x45) == '\0') {
                cVar2 = *(char *)(*piVar3 + 0x45);
                piVar14 = piVar3;
                piVar3 = (int *)*piVar3;
                while (cVar2 == '\0') {
                  cVar2 = *(char *)(*piVar3 + 0x45);
                  piVar14 = piVar3;
                  piVar3 = (int *)*piVar3;
                }
              }
              else {
                cVar2 = *(char *)(piVar14[1] + 0x45);
                piVar6 = (int *)piVar14[1];
                piVar3 = piVar14;
                while ((piVar14 = piVar6, cVar2 == '\0' && (piVar3 == (int *)piVar14[2]))) {
                  cVar2 = *(char *)(piVar14[1] + 0x45);
                  piVar6 = (int *)piVar14[1];
                  piVar3 = piVar14;
                }
              }
            }
          } while (piVar14 != *(int * PTR32 *)((int)this + 0x18));
        }
      }
      puVar9 = puVar9 + 7;
      uVar16 = (*(uint *)(gen_frame + 0x44)) - 1;
      (*(uint *)(gen_frame + 0x44)) = uVar16;
    } while (uVar16 != 0);
  }
  while( true ) {
    uVar11 = ((int)(*(uint * PTR32 *)(gen_frame + 0x34)) - (int)(*(uint * PTR32 *)(gen_frame + 0x30))) / 0x1c;
    (*(char *)(gen_frame + 0x4b)) = '\0';
    (*(uint *)(gen_frame + 0x14)) = uVar11;
    uVar16 = 0;
    if (uVar11 == 0) break;
    do {
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
      (*(uint * PTR32 *)(gen_frame + 0x18)) = (*(uint * PTR32 *)(gen_frame + 0x30)) + uVar16 * 7;
      uVar8 = F_00a2f670((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 4),(*(uint * PTR32 *)(gen_frame + 0x30)) + uVar16 * 7);
      uVar11 = *(uint *)((int)pvVar5 + 8);
      (*(uint *)(gen_frame + 0xc)) = uVar8;
      (*(uint *)(gen_frame + 0x10)) = uVar11;
      if (uVar8 == uVar11) {
LAB_00a28d9b: ;
        (*(uint *)(gen_frame + 0x8)) = uVar11;
        puVar9 = &(*(uint *)(gen_frame + 0x8));
      }
      else {
        uVar4 = *(uint *)(uVar8 + 0x1c);
        puVar9 = (uint *)(uVar8 + 0xc);
        (*(uint *)(gen_frame + 0x44)) = uVar4;
        if (0xf < *(uint *)(uVar8 + 0x20)) {
          puVar9 = (uint *)*puVar9;
        }
        uVar8 = (*(uint * PTR32 *)(gen_frame + 0x18))[4];
        (*(uint *)(gen_frame + 0x40)) = uVar8;
        uVar13 = uVar4;
        if (uVar8 < uVar4) {
          uVar13 = uVar8;
        }
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x18));
        if (0xf < (*(uint * PTR32 *)(gen_frame + 0x18))[5]) {
          puVar7 = (uint *)*(*(uint * PTR32 *)(gen_frame + 0x18));
        }
        for (; 3 < uVar13; uVar13 = uVar13 - 4) {
          if (*puVar7 != *puVar9) goto LAB_00a28d38;
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
        }
        if (uVar13 == 0) {
LAB_00a28d81: ;
          uVar13 = 0;
        }
        else {
LAB_00a28d38: ;
          iVar10 = (uint)(byte)*puVar7 - (uint)(byte)*puVar9;
          if (iVar10 == 0) {
            if (uVar13 < 2) goto LAB_00a28d81;
            iVar10 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar9 + 1);
            if (iVar10 == 0) {
              if (uVar13 < 3) goto LAB_00a28d81;
              iVar10 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar9 + 2);
              if (iVar10 == 0) {
                if (uVar13 < 4) goto LAB_00a28d81;
                iVar10 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar9 + 3);
              }
            }
          }
          uVar13 = iVar10 >> 0x1f | 1;
        }
        if (uVar13 == 0) {
          if (uVar8 < uVar4) goto LAB_00a28d9b;
          uVar13 = (uint)(uVar8 != uVar4);
        }
        if ((int)uVar13 < 0) goto LAB_00a28d9b;
        puVar9 = &(*(uint *)(gen_frame + 0xc));
      }
      if (*puVar9 == *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8)) {
        F_00a32fd0(&(*(uint * PTR32 *)(gen_frame + 0x1c)),(*(uint * PTR32 *)(gen_frame + 0x18)));
      }
      else {
        uVar11 = F_00a28830((*(undefined * PTR32 *)(gen_frame + 0x2c)),&(*(uint * PTR32 *)(gen_frame + 0x30)),uVar16,*puVar9 + 0x28,&(*(uint * PTR32 *)(gen_frame + 0x1c)));
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x20));
        puVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c));
        if (uVar11 == 0) {
          if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (uint *)0x0) {
            if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (*(uint * PTR32 *)(gen_frame + 0x20))) {
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x1c)) + 5;
              do {
                if (0xf < *puVar15) {
                  F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
                }
                *puVar15 = 0xf;
                puVar15[-1] = 0;
                *(undefined1 *)(puVar15 + -5) = 0;
                puVar1 = puVar15 + 2;
                puVar15 = puVar15 + 7;
              } while (puVar1 != puVar7);
            }
            F_00429760(puVar9,(((*(int *)(gen_frame + 0x24)) - (int)puVar9) / 0x1c) * 0x1c,0x2c4);
          }
          puVar9 = (*(uint * PTR32 *)(gen_frame + 0x34));
          if ((*(uint * PTR32 *)(gen_frame + 0x30)) != (uint *)0x0) {
            if ((*(uint * PTR32 *)(gen_frame + 0x30)) != (*(uint * PTR32 *)(gen_frame + 0x34))) {
              puVar7 = (*(uint * PTR32 *)(gen_frame + 0x30)) + 5;
              do {
                if (0xf < *puVar7) {
                  F_00429760(puVar7[-5],*puVar7 + 1,0x2c4);
                }
                *puVar7 = 0xf;
                puVar7[-1] = 0;
                *(char *)(puVar7 + -5) = '\0';
                puVar15 = puVar7 + 2;
                puVar7 = puVar7 + 7;
              } while (puVar15 != puVar9);
            }
            F_00429760((*(uint * PTR32 *)(gen_frame + 0x30)),(((*(int *)(gen_frame + 0x38)) - (int)(*(uint * PTR32 *)(gen_frame + 0x30))) / 0x1c) * 0x1c,0x2c4);
          }
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return 0;
        }
        uVar16 = (uVar16 - 1) + uVar11;
        (*(char *)(gen_frame + 0x4b)) = '\x01';
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < (*(uint *)(gen_frame + 0x14)));
    if ((*(char *)(gen_frame + 0x4b)) == '\0') break;
    F_00a32e30(&(*(uint * PTR32 *)(gen_frame + 0x30)),&(*(uint * PTR32 *)(gen_frame + 0x1c)));
    puVar7 = (*(uint * PTR32 *)(gen_frame + 0x20));
    puVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c));
    if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (*(uint * PTR32 *)(gen_frame + 0x20))) {
      puVar15 = (*(uint * PTR32 *)(gen_frame + 0x1c)) + 5;
      do {
        if (0xf < *puVar15) {
          F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
        }
        *puVar15 = 0xf;
        puVar15[-1] = 0;
        *(undefined1 *)(puVar15 + -5) = 0;
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 7;
      } while (puVar1 != puVar7);
      (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar9;
    }
  }
  puVar12 = (undefined4 *)F_00a23530(((undefined4 *)(gen_frame + 0x4c)),&(*(uint * PTR32 *)(gen_frame + 0x1c)));
  if (param_1 != puVar12) {
    if (0xf < (uint)param_1[5]) {
      F_00429760(*param_1,param_1[5] + 1,0x2c4);
    }
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
    if ((uint)puVar12[5] < 0x10) {
      F_00c46e20(param_1,puVar12,puVar12[4] + 1);
    }
    else {
      *param_1 = *puVar12;
      *puVar12 = 0;
    }
    param_1[4] = puVar12[4];
    param_1[5] = puVar12[5];
    puVar12[5] = 0xf;
    puVar12[4] = 0;
    *(undefined1 *)puVar12 = 0;
  }
  if (0xf < (*(uint *)(gen_frame + 0x60))) {
    F_00429760(((undefined4 *)(gen_frame + 0x4c))[0],(*(uint *)(gen_frame + 0x60)) + 1,0x2c4);
  }
  puVar7 = (*(uint * PTR32 *)(gen_frame + 0x20));
  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c));
  if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (uint *)0x0) {
    if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (*(uint * PTR32 *)(gen_frame + 0x20))) {
      puVar15 = (*(uint * PTR32 *)(gen_frame + 0x1c)) + 5;
      do {
        if (0xf < *puVar15) {
          F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
        }
        *puVar15 = 0xf;
        puVar15[-1] = 0;
        *(undefined1 *)(puVar15 + -5) = 0;
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 7;
      } while (puVar1 != puVar7);
    }
    F_00429760(puVar9,(((*(int *)(gen_frame + 0x24)) - (int)puVar9) / 0x1c) * 0x1c,0x2c4);
  }
  puVar7 = (*(uint * PTR32 *)(gen_frame + 0x34));
  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x30));
  if ((*(uint * PTR32 *)(gen_frame + 0x30)) != (uint *)0x0) {
    if ((*(uint * PTR32 *)(gen_frame + 0x30)) != (*(uint * PTR32 *)(gen_frame + 0x34))) {
      puVar15 = (*(uint * PTR32 *)(gen_frame + 0x30)) + 5;
      do {
        if (0xf < *puVar15) {
          F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
        }
        *puVar15 = 0xf;
        puVar15[-1] = 0;
        *(char *)(puVar15 + -5) = '\0';
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 7;
      } while (puVar1 != puVar7);
    }
    F_00429760(puVar9,(((*(int *)(gen_frame + 0x38)) - (int)puVar9) / 0x1c) * 0x1c,0x2c4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 1;
}

/* ref: FUN_00a29100 */
byte F_00a29100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa29100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined4 * PTR32 * ppuVar2;
  byte bVar3;
  char * pcVar4;
  undefined4 * PTR32 * PTR32 * pppuVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pcVar4 = (char *)F_0042a990(param_1);
  ppuVar2 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar2 & 0xffffff00);
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00a2f470(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)),pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
  bVar3 = F_00a28b70(this,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)));
  pppuVar5 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
    pppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  F_0042e430(param_1,pppuVar5);
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x2c4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return bVar3;
}

/* ref: FUN_00a291a0 */
uint F_00a291a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa291a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  byte * pbVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x14)),param_1);
  F_00a26db0(this,((undefined1 *)(gen_frame + 0x14)),param_2,REFG(undefined4, 0x108cc50));
  F_00a26db0(this,param_1,0,param_2);
  pbVar2 = (byte *)F_0042a990(param_3);
  bVar1 = *pbVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pbVar2) >> 8),bVar1);
  while (bVar1 != 0) {
    if ((char)uVar3 == '\x02') {
      F_0042d160(param_1,2);
      F_0042d160(param_1,(uint)pbVar2[1]);
      pbVar2 = pbVar2 + 2;
      uVar4 = F_00a24d30(this,pbVar2,(int)this + 0x34,&(*(int *)(gen_frame + 0xc)),1);
      if (0 < (int)(uVar4 + (*(int *)(gen_frame + 0xc)))) {
        (*(uint *)(gen_frame + 0x10)) = uVar4 + (*(int *)(gen_frame + 0xc));
        do {
          F_0042d160(param_1,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
          (*(uint *)(gen_frame + 0x10)) = uVar4;
        } while (uVar4 != 0);
      }
      uVar4 = F_0042d160(param_1,(uint)*pbVar2);
      pbVar2 = pbVar2 + 1;
    }
    else {
      uVar6 = F_0042acc0(uVar3);
      uVar4 = 0;
      if (uVar6 != 0) {
        (*(uint *)(gen_frame + 0x10)) = uVar6;
        do {
          uVar4 = F_0042d160(param_1,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          uVar6 = (*(uint *)(gen_frame + 0x10)) - 1;
          (*(uint *)(gen_frame + 0x10)) = uVar6;
        } while (uVar6 != 0);
      }
    }
    bVar1 = *pbVar2;
    uVar3 = CONCAT31((int3)(uVar4 >> 8),bVar1);
  }
  pbVar2 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x14)));
  bVar1 = *pbVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pbVar2) >> 8),bVar1);
  while (bVar1 != 0) {
    if ((char)uVar3 == '\x02') {
      F_0042d160(param_1,2);
      F_0042d160(param_1,(uint)pbVar2[1]);
      pbVar2 = pbVar2 + 2;
      uVar4 = F_00a24d30(this,pbVar2,(int)this + 0x34,&(*(int *)(gen_frame + 0xc)),1);
      iVar5 = uVar4 + (*(int *)(gen_frame + 0xc));
      if (0 < iVar5) {
        do {
          F_0042d160(param_1,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      uVar4 = F_0042d160(param_1,(uint)*pbVar2);
      pbVar2 = pbVar2 + 1;
    }
    else {
      uVar6 = F_0042acc0(uVar3);
      uVar4 = 0;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        uVar4 = F_0042d160(param_1,(uint)*pbVar2);
        pbVar2 = pbVar2 + 1;
      }
    }
    bVar1 = *pbVar2;
    uVar3 = CONCAT31((int3)(uVar4 >> 8),bVar1);
  }
  F_0042d160(param_1,0);
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar7;
}

/* ref: FUN_00a29340 */
uint F_00a29340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa29340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_4;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  uVar1 = F_00a24d30(this,param_1,param_3,&(*(int *)(gen_frame + 0x4)),1);
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  if (uVar1 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  if ((*(int *)(gen_frame + 0x4)) == 0) {
    uVar1 = F_00a28030(this,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0xc)));
    uVar1 = uVar1 + (*(uint *)(gen_frame + 0x10));
    uVar2 = F_00a23ff0(this,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)),1);
    if (uVar2 != 0) {
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)));
      uVar1 = uVar1 + uVar2;
    }
  }
  else {
    uVar2 = F_00a23ff0(this,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)),1);
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    if (uVar2 != 0) {
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)));
      iVar3 = uVar1 + (*(uint *)(gen_frame + 0x10));
      uVar1 = F_00a28030(this,param_1 + iVar3,(*(undefined4 *)(gen_frame + 0xc)));
      uVar1 = iVar3 + uVar1;
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  if (param_2 == uVar1) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_00a29450 */
uint F_00a29450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa29450u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
  if (uVar2 != 0) {
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    if (-1 < (int)pvVar1) {
      iVar4 = 0;
      if (0 < (int)pvVar1) {
        do {
          uVar3 = F_00a28030((*(undefined * PTR32 *)&gen_args[0]),uVar2 + (*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]));
          iVar4 = iVar4 + 1;
          uVar2 = uVar2 + uVar3;
        } while (iVar4 < (int)(*(undefined * PTR32 *)(gen_frame + 0x8)));
      }
      uVar2 = F_00a23ff0((*(undefined * PTR32 *)&gen_args[0]),uVar2 + (*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),1);
      return -(uint)(uVar2 != 0) & (*(uint *)&gen_args[2]);
    }
  }
  return 0;
}

/* ref: FUN_00a294d0 */
uint F_00a294d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa294d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e3fcc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x14);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00a31b30((undefined *)((int)this + 4),0x37);
  return (uint)this;
}

/* ref: FUN_00a29530 */
uint F_00a29530(unsigned int gen_a0)
{
  GEN_ENTER(0xa29530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e3fcc));
  F_00492c50((undefined *)((int)this + 0x14));
  F_00429760(*(undefined4 *)((int)this + 0x14),8,0x2c4);
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00a295a0 */
uint F_00a295a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa295a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char * pcVar5;
  
  bVar1 = *param_1;
  switch((unsigned int)(uintptr_t)((uint)bVar1)) {
  case 0: ;
    *param_2 = 1;
    return 5;
  default: ;
    if (bVar1 == 0x26) {
      bVar2 = param_1[1];
      if (((bVar2 == 0x67) && (param_1[2] == 0x74)) && (param_1[3] == 0x3b)) {
        *param_2 = 4;
        *param_3 = 0x3e;
        return 0;
      }
      if (((bVar2 == 0x6c) && (param_1[2] == 0x74)) && (param_1[3] == 0x3b)) {
        *param_2 = 4;
        *param_3 = 0x3c;
        return 0;
      }
      if (((bVar2 == 0x61) && (param_1[2] == 0x6d)) &&
         ((param_1[3] == 0x70 && (param_1[4] == 0x3b)))) {
        *param_2 = 5;
        *param_3 = 0x26;
        return 0;
      }
    }
    cVar3 = *param_4;
    pcVar5 = param_4;
    while( true ) {
      if (cVar3 == '\0') {
        *param_2 = 1;
        return 0;
      }
      if ((int)cVar3 == (uint)bVar1) break;
      cVar3 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
    *param_2 = 1;
    return 1;
  case 2: ;
    break;
  case 10: ;
  case 0xd: ;
    *param_2 = 1;
    return 3;
  }
  bVar1 = param_1[1];
  if (bVar1 == 0x16) {
    *param_2 = 4;
    return 2;
  }
  if (bVar1 == 0x1d) {
    *param_2 = 4;
    *param_3 = 0x1d;
    return 0;
  }
  if (bVar1 == 0x1f) {
    *param_2 = 4;
    *param_3 = 0x1e;
    return 0;
  }
  if (bVar1 == 0x11) {
    F_004816e0(((undefined1 *)(gen_frame + 0x4)));
    uVar4 = F_00a24d30(this,param_1 + 2,((undefined1 *)(gen_frame + 0x4)),param_2,1);
    *param_2 = *param_2 + uVar4 + 3;
    F_00493180(((undefined1 *)(gen_frame + 0x4)));
    return 3;
  }
  *param_2 = 1;
  return 4;
}

/* ref: FUN_00a297a0 */
uint F_00a297a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa297a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char * pcVar5;
  uint uVar6;
  char * pcVar7;
  byte * pbVar8;
  
  pbVar8 = (*(byte * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_0042aca0((*(undefined * PTR32 *)&gen_args[2]));
  pcVar5 = (*(char * PTR32 *)&gen_args[4]);
  *(*(int * PTR32 *)&gen_args[3]) = 0;
  do {
    bVar2 = *pbVar8;
    switch((unsigned int)(uintptr_t)((uint)bVar2)) {
    case 0: ;
      return 5;
    default: ;
      if (bVar2 == 0x26) {
        bVar3 = pbVar8[1];
        if (((bVar3 == 0x67) && (pbVar8[2] == 0x74)) && (pbVar8[3] == 0x3b)) {
          (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x4);
          (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x3e)));
          pcVar7 = (*(char * PTR32 *)&gen_args[4]);
        }
        else if (((bVar3 == 0x6c) && (pbVar8[2] == 0x74)) && (pbVar8[3] == 0x3b)) {
          (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x4);
          (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x3c)));
          pcVar7 = (*(char * PTR32 *)&gen_args[4]);
        }
        else {
          if (((bVar3 != 0x61) || (pbVar8[2] != 0x6d)) ||
             ((pbVar8[3] != 0x70 || (pbVar8[4] != 0x3b)))) goto LAB_00a2987d;
          (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x5);
          (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x26)));
          pcVar7 = (*(char * PTR32 *)&gen_args[4]);
        }
      }
      else {
LAB_00a2987d: ;
        cVar4 = *pcVar5;
        pcVar7 = pcVar5;
        while (cVar4 != '\0') {
          if ((int)cVar4 == (uint)bVar2) {
            (*(byte * PTR32 *)&gen_args[1]) = (byte *)0x1;
            if ((char)(*(undefined4 *)&gen_args[5]) == '\0') {
              return 1;
            }
            pcVar7 = (char *)(uint)*pbVar8;
            goto LAB_00a297f9;
          }
          pcVar1 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar4 = *pcVar1;
        }
        (*(byte * PTR32 *)&gen_args[1]) = (byte *)0x1;
        pcVar7 = (char *)(uint)*pbVar8;
      }
      break;
    case 2: ;
      bVar2 = pbVar8[1];
      if (bVar2 == 0x16) {
        return 2;
      }
      if (bVar2 == 0x1d) {
        (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x4);
        (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x1d)));
        pcVar7 = (*(char * PTR32 *)&gen_args[4]);
      }
      else {
        if (bVar2 != 0x1f) {
          if (pbVar8[1] == 0x11) {
            F_004816e0(((undefined4 *)(gen_frame + 0x0)));
            uVar6 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x18)),pbVar8 + 2,((undefined4 *)(gen_frame + 0x0)),&(*(byte * PTR32 *)&gen_args[1]),1);
            (*(byte * PTR32 *)&gen_args[1]) = (*(byte * PTR32 *)&gen_args[1]) + uVar6 + 3;
            F_00492c50(((undefined4 *)(gen_frame + 0x0)));
            F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
            return 3;
          }
          return 4;
        }
        (*(byte * PTR32 *)&gen_args[1]) = &REFG(undefined, 0x4);
        (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[4]), 1, 3),0x1e)));
        pcVar7 = (*(char * PTR32 *)&gen_args[4]);
      }
      break;
    case 10: ;
    case 0xd: ;
      return 3;
    }
LAB_00a297f9: ;
    F_0042d160((*(undefined * PTR32 *)&gen_args[2]),pcVar7);
    *(*(int * PTR32 *)&gen_args[3]) = (int)((*(byte * PTR32 *)&gen_args[1]) + *(*(int * PTR32 *)&gen_args[3]));
    pbVar8 = pbVar8 + (int)(*(byte * PTR32 *)&gen_args[1]);
  } while( true );
}

/* ref: FUN_00a29960 */
uint F_00a29960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa29960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined4 uVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  ((int *)(gen_frame + 0x2c))[0] = 0;
  ((int *)(gen_frame + 0x2c))[1] = 0;
  ((int *)(gen_frame + 0x2c))[2] = 0;
  F_00a32fd0(&(*(undefined4 *)(gen_frame + 0xc)),param_1);
  F_00a32fd0(&(*(undefined4 *)(gen_frame + 0x1c)),param_2);
  F_00a28b70(this,(*(undefined4 *)(gen_frame + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x50)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  ((undefined1 *)(gen_frame + 0x3c))[0] = 0;
  F_00a2edd0(((undefined1 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0xc)),0,0xffffffff);
  F_00a327e0(((undefined1 *)(gen_frame + 0x58)),&(*(undefined4 *)(gen_frame + 0xc)));
  F_00a327e0(((undefined1 *)(gen_frame + 0x68)),&(*(undefined4 *)(gen_frame + 0x1c)));
  F_00a31a20(((undefined1 *)(gen_frame + 0x78)),((int *)(gen_frame + 0x2c)));
  uVar2 = 0;
  uVar1 = F_00a33c20((undefined *)((int)this + 4),((undefined1 *)(gen_frame + 0x3c)));
  F_00a33a70((undefined *)((int)this + 4),((undefined1 *)(gen_frame + 0x4)),uVar1,uVar2);
  F_00a32920(((undefined1 *)(gen_frame + 0x3c)));
  if (((int *)(gen_frame + 0x2c))[0] != 0) {
    F_00429760(((int *)(gen_frame + 0x2c))[0],(((int *)(gen_frame + 0x2c))[2] - ((int *)(gen_frame + 0x2c))[0] >> 2) * 4,0x2c4);
  }
  ((int *)(gen_frame + 0x2c))[0] = 0;
  ((int *)(gen_frame + 0x2c))[1] = 0;
  ((int *)(gen_frame + 0x2c))[2] = 0;
  F_00a31ca0(&(*(undefined4 *)(gen_frame + 0x1c)));
  uVar1 = F_00a31ca0(&(*(undefined4 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar1;
}

/* ref: FUN_00a29aa0 */
uint F_00a29aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xa29aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00a294d0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e4074));
  puVar1 = (undefined4 *)((int)this + 0x34);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  F_0042b630((int)this + 0x4c);
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x44))) = ((code *)REFP(0xa2ca60));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x74))) = ((code *)REFP(0xa2cb10));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x7c))) = ((code *)REFP(0xa2c980));
  return (uint)this;
}

/* ref: FUN_00a29b20 */
uint F_00a29b20(unsigned int gen_a0)
{
  GEN_ENTER(0xa29b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e4074));
  F_0042c880((undefined *)((int)this + 0x4c));
  F_00492c50((undefined *)((int)this + 0x34));
  F_00429760(*(undefined4 *)((int)this + 0x34),8,0x2c4);
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = F_00a29530(this);
  return uVar1;
}

/* ref: FUN_00a29b60 */
uint F_00a29b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa29b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e3ec8));
  F_00a294d0((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e41c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[40])REFP(0x10e411c));
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  uVar1 = F_004296a0(0x68,0,0x2c4);
  *(uint *)((int)this + 0x48) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x48) + 4))) = *(int *)((int)this + 0x48);
  *((int *)GEN_TOP((*(int *)((int)this + 0x48) + 8))) = *(int *)((int)this + 0x48);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x48) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x48) + 0x65))) = 1;
  F_00a25230((undefined *)((int)this + 0x54));
  F_0042b630((int)this + 0xc0);
  F_0042b630((int)this + 0x114);
  *(undefined4 *)((int)this + 0x168) = 0;
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x1c))) = ((code *)REFP(0xa2ca40));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x20))) = ((code *)REFP(0xa2cad0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) = ((code *)REFP(0xa2cb60));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x40))) = ((code *)REFP(0xa2c9d0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x44))) = ((code *)REFP(0xa2ca60));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x48))) = ((code *)REFP(0xa2caf0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) = ((code *)REFP(0xa2cb80));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x4c))) = ((code *)REFP(0xa2c9f0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x50))) = ((code *)REFP(0xa2ca70));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x54))) = ((code *)REFP(0xa2cb00));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x60))) = ((code *)REFP(0xa2ca80));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x80))) = ((code *)REFP(0xa2ca00));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x84))) = ((code *)REFP(0xa2ca90));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x88))) = ((code *)REFP(0xa2cb20));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x8c))) = ((code *)REFP(0xa2c990));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x90))) = ((code *)REFP(0xa2ca10));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x94))) = ((code *)REFP(0xa2caa0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x98))) = ((code *)REFP(0xa2cb30));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xa0))) = ((code *)REFP(0xa2c9a0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xa4))) = ((code *)REFP(0xa2ca20));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xa8))) = ((code *)REFP(0xa2cab0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xac))) = ((code *)REFP(0xa2cb40));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xb0))) = ((code *)REFP(0xa2c9b0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xb4))) = ((code *)REFP(0xa2ca30));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xb8))) = ((code *)REFP(0xa2cac0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xbc))) = ((code *)REFP(0xa2cb50));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xc0))) = ((code *)REFP(0xa2c9c0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xc4))) = ((code *)REFP(0xa2ca50));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 200))) = ((code *)REFP(0xa2cae0));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xcc))) = ((code *)REFP(0xa2cb70));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0xd0))) = ((code *)REFP(0xa2c9e0));
  F_0042d160((undefined *)((int)this + 0xc0),2);
  F_0042d160((undefined *)((int)this + 0xc0),0x1d);
  F_0042d160((undefined *)((int)this + 0xc0),1);
  F_0042d160((undefined *)((int)this + 0xc0),3);
  F_00c48350((undefined *)((int)this + 0x16c),0,0x40);
  return (uint)this;
}

/* ref: FUN_00a29dc0 */
uint F_00a29dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa29dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e41c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[40])REFP(0x10e411c));
  F_0042c880((undefined *)((int)this + 0x114));
  F_0042c880((undefined *)((int)this + 0xc0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x54) = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  F_0042c880((undefined *)((int)this + 0x6c));
  F_00a315a0((undefined *)((int)this + 0x58),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x5c),
               *(undefined4 * PTR32 *)((int)this + 0x5c));
  F_00429760(*(undefined4 *)((int)this + 0x5c),0xac,0x2c4);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  F_00a22980((undefined *)((int)this + 0x38));
  F_00a30fa0((undefined *)((int)this + 0x44),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x48),
               *(undefined4 * PTR32 *)((int)this + 0x48));
  F_00429760(*(undefined4 *)((int)this + 0x48),0x68,0x2c4);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  uVar1 = F_00a29530((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e3ec8));
  return uVar1;
}

/* ref: FUN_00a29e80 */
uint F_00a29e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa29e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 * this_00;
  uint * puVar1;
  undefined * pvVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  byte bVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar5;
  int iVar6;
  uint * puVar7;
  undefined4 * puVar8;
  char * pcVar9;
  uint * puVar10;
  uint uVar11;
  uint * PTR32 * ppuVar12;
  uint uVar13;
  int iVar14;
  uint * puVar15;
  ulonglong uVar16;
  
  uVar13 = ((uint *)(gen_frame + 0x54))[0];
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  uVar11 = *(uint *)(param_1 + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint *)(gen_frame + 0x68)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x54))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x54))[0] = uVar13 & 0xffffff00;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) = (uint * PTR32 *)0x0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) = (uint * PTR32 *)0x0;
  pcVar9 = param_1;
  if (0xf < uVar11) {
    pcVar9 = *(char * PTR32 *)param_1;
  }
  if (*pcVar9 == '<') {
    F_00a28350(this,&(*(int *)(gen_frame + 0x1c)),pcVar9);
    F_00a2ec30(((uint *)(gen_frame + 0x54)),(*(int *)(gen_frame + 0x1c)),0,0xffffffff);
    pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
    (*(uint *)(gen_frame + 0xd0)) = 0xf;
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar3 & 0xffffff00);
    F_00a2edd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc)),param_2,0,0xffffffff);
    bVar4 = F_00a28b70(this,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc)));
    if (bVar4 == 0) {
      if (0xf < (*(uint *)(gen_frame + 0xd0))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0],(*(uint *)(gen_frame + 0xd0)) + 1,0x2c4);
      }
      pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
      (*(uint *)(gen_frame + 0xd0)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xcc)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar3 & 0xffffff00);
      F_00a328d0(&(*(int *)(gen_frame + 0x1c)));
      uVar11 = (*(uint *)(gen_frame + 0x68));
      if (0xf < (*(uint *)(gen_frame + 0x68))) {
        uVar16 = F_00429760(((uint *)(gen_frame + 0x54))[0],(*(uint *)(gen_frame + 0x68)) + 1,0x2c4);
        F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
        return (uint)uVar16;
      }
    }
    else {
      ppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
      if ((*(uint *)(gen_frame + 0xd0)) < 0x10) {
        ppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc));
      }
      F_00a28350(this,&(*(int *)(gen_frame + 0x2c)),ppppuVar5);
      iVar14 = (*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c)) >> 0x1f;
      uVar11 = 0;
      if (((*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c))) / 0x1c + iVar14 != iVar14) {
        ((uint * PTR32 *)(gen_frame + 0x4c))[0] = (uint *)0xffffffff;
        do {
          ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
          if ((((uint * PTR32 *)(gen_frame + 0x4c)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40))) && ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) <= ((uint * PTR32 *)(gen_frame + 0x4c)))) {
            iVar14 = (int)((uint * PTR32 *)(gen_frame + 0x4c)) - (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c));
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44))) {
              F_00a31d10(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),1);
              ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
            }
            if (ppuVar12 != (uint * PTR32 *)0x0) {
              *ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))[iVar14 >> 2];
            }
          }
          else {
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44))) {
              F_00a31d10(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),1);
              ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40));
            }
            if (ppuVar12 != (uint * PTR32 *)0x0) {
              *ppuVar12 = (uint *)0xffffffff;
            }
          }
          uVar11 = uVar11 + 1;
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) = ppuVar12 + 1;
        } while (uVar11 < (uint)(((*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c))) / 0x1c));
      }
      iVar14 = ((*(int *)(gen_frame + 0x30)) - (*(int *)(gen_frame + 0x2c))) / 0x1c;
      (*(int *)(gen_frame + 0x14)) = 1;
      if (1 < iVar14) {
        puVar1 = ((uint *)GEN_TOP((((*(int *)(gen_frame + 0x20)) - (*(int *)(gen_frame + 0x1c))) / 0x1c)));
        ((uint * PTR32 *)(gen_frame + 0x4c))[0] = (uint *)((*(int *)(gen_frame + 0x2c)) + 0x1c);
        do {
          (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)0x1;
          if ((uint *)0x1 < puVar1) {
            puVar15 = (uint *)((*(int *)(gen_frame + 0x1c)) + 0x2c);
            ((uint * PTR32 *)(gen_frame + 0x4c))[1] = puVar15;
            do {
              puVar7 = ((uint * PTR32 *)(gen_frame + 0x4c))[0];
              if (0xf < ((uint * PTR32 *)(gen_frame + 0x4c))[0][5]) {
                puVar7 = ((uint *)GEN_TOP(*((uint * PTR32 *)(gen_frame + 0x4c))[0]));
              }
              uVar11 = *puVar15;
              uVar13 = ((uint * PTR32 *)(gen_frame + 0x4c))[0][4];
              if (uVar11 < ((uint * PTR32 *)(gen_frame + 0x4c))[0][4]) {
                uVar13 = uVar11;
              }
              if (puVar15[1] < 0x10) {
                puVar10 = puVar15 + -4;
              }
              else {
                puVar10 = (uint *)puVar15[-4];
              }
              for (; 3 < uVar13; uVar13 = uVar13 - 4) {
                if (*puVar10 != *puVar7) goto LAB_00a2a19e;
                puVar7 = puVar7 + 1;
                puVar10 = puVar10 + 1;
              }
              if (uVar13 == 0) {
LAB_00a2a1ed: ;
                uVar13 = 0;
              }
              else {
LAB_00a2a19e: ;
                iVar6 = (uint)(byte)*puVar10 - (uint)(byte)*puVar7;
                if (iVar6 == 0) {
                  if (uVar13 < 2) goto LAB_00a2a1ed;
                  iVar6 = (uint)*(byte *)((int)puVar10 + 1) - (uint)*(byte *)((int)puVar7 + 1);
                  if (iVar6 == 0) {
                    if (uVar13 < 3) goto LAB_00a2a1ed;
                    iVar6 = (uint)*(byte *)((int)puVar10 + 2) - (uint)*(byte *)((int)puVar7 + 2);
                    if (iVar6 == 0) {
                      if (uVar13 < 4) goto LAB_00a2a1ed;
                      iVar6 = (uint)*(byte *)((int)puVar10 + 3) - (uint)*(byte *)((int)puVar7 + 3);
                    }
                  }
                }
                uVar13 = iVar6 >> 0x1f | 1;
              }
              if (((uVar13 == 0) && (((uint * PTR32 *)(gen_frame + 0x4c))[0][4] <= uVar11)) && (uVar11 == ((uint * PTR32 *)(gen_frame + 0x4c))[0][4])) {
                uVar11 = *puVar15;
                uVar13 = (uint)(uVar11 != 0);
                if (puVar15[1] < 0x10) {
                  puVar7 = puVar15 + -4;
                }
                else {
                  puVar7 = (uint *)puVar15[-4];
                }
                puVar10 = (uint *)&REFG(undefined1, 0x10e3d1c);
                for (; 3 < uVar13; uVar13 = uVar13 - 4) {
                  if (*puVar7 != *puVar10) goto LAB_00a2a25c;
                  puVar10 = puVar10 + 1;
                  puVar7 = puVar7 + 1;
                }
                if (uVar13 == 0) {
LAB_00a2a2ab: ;
                  uVar13 = 0;
                }
                else {
LAB_00a2a25c: ;
                  iVar6 = (uint)(byte)*puVar7 - (uint)(byte)*puVar10;
                  if (iVar6 == 0) {
                    if (uVar13 < 2) goto LAB_00a2a2ab;
                    iVar6 = (uint)*(byte *)((int)puVar7 + 1) - (uint)*(byte *)((int)puVar10 + 1);
                    if (iVar6 == 0) {
                      if (uVar13 < 3) goto LAB_00a2a2ab;
                      iVar6 = (uint)*(byte *)((int)puVar7 + 2) - (uint)*(byte *)((int)puVar10 + 2);
                      if (iVar6 == 0) {
                        if (uVar13 < 4) goto LAB_00a2a2ab;
                        iVar6 = (uint)*(byte *)((int)puVar7 + 3) - (uint)*(byte *)((int)puVar10 + 3)
                        ;
                      }
                    }
                  }
                  uVar13 = iVar6 >> 0x1f | 1;
                }
                if (((uVar13 != 0) || (uVar11 == 0)) || (uVar11 != 1)) {
                  uVar11 = *puVar15;
                  if (puVar15[1] < 0x10) {
                    puVar7 = puVar15 + -4;
                  }
                  else {
                    puVar7 = (uint *)puVar15[-4];
                  }
                  ((uint * PTR32 *)(gen_frame + 0x4c))[1] = puVar15;
                  uVar13 = F_0040d320(puVar7,&REFG(undefined1, 0x10e3d20),(uint)(uVar11 != 0));
                  if (((uVar13 != 0) || (uVar11 == 0)) || (uVar11 != 1)) {
                    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x14))] = (*(uint * PTR32 *)(gen_frame + 0x18));
                  }
                }
              }
              puVar7 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x18)) + 1);
              puVar15 = puVar15 + 7;
              (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar7;
              ((uint * PTR32 *)(gen_frame + 0x4c))[1] = puVar15;
            } while (puVar7 < puVar1);
          }
          ((uint * PTR32 *)(gen_frame + 0x4c))[0] = ((uint * PTR32 *)(gen_frame + 0x4c))[0] + 7;
          iVar6 = (*(int *)(gen_frame + 0x14)) + 1;
          (*(int *)(gen_frame + 0x14)) = iVar6;
        } while (iVar6 < iVar14);
      }
      uVar11 = ((uint *)(gen_frame + 0x70))[0];
      (*(uint *)(gen_frame + 0x84)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x80)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x70))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x70))[0] = uVar11 & 0xffffff00;
      F_00a2edd0(((uint *)(gen_frame + 0x70)),((uint *)(gen_frame + 0x54)),0,0xffffffff);
      F_00a327e0(&(*(int *)(gen_frame + 0x8c)),&(*(int *)(gen_frame + 0x1c)));
      F_00a327e0(&(*(int *)(gen_frame + 0x9c)),&(*(int *)(gen_frame + 0x2c)));
      F_00a31a20(((int *)(gen_frame + 0xac)),&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)));
      pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      puVar8 = (undefined4 *)F_004296a0(0x5c,0,0x2c4);
      *puVar8 = *(undefined4 *)((int)pvVar2 + 8);
      puVar8[1] = *(undefined4 *)((int)pvVar2 + 8);
      this_00 = puVar8 + 3;
      puVar8[2] = *(undefined4 *)((int)pvVar2 + 8);
      *(undefined2 *)(puVar8 + 0x16) = 0;
      if (this_00 != (undefined4 *)0x0) {
        puVar8[8] = 0xf;
        puVar8[7] = 0;
        *(undefined1 *)this_00 = 0;
        F_00a2edd0(this_00,((uint *)(gen_frame + 0x70)),0,0xffffffff);
        F_00a327e0(puVar8 + 10,&(*(int *)(gen_frame + 0x8c)));
        F_00a327e0(puVar8 + 0xe,&(*(int *)(gen_frame + 0x9c)));
        F_00a31a20(puVar8 + 0x12,((int *)(gen_frame + 0xac)));
      }
      F_00a33a70((undefined *)((int)pvVar2 + 4),((undefined1 *)(gen_frame + 0xc)),puVar8,0);
      if (((int *)(gen_frame + 0xac))[0] != 0) {
        F_00429760(((int *)(gen_frame + 0xac))[0],(((int *)(gen_frame + 0xac))[2] - ((int *)(gen_frame + 0xac))[0] >> 2) * 4,0x2c4);
      }
      ((int *)(gen_frame + 0xac))[0] = 0;
      ((int *)(gen_frame + 0xac))[1] = 0;
      ((int *)(gen_frame + 0xac))[2] = 0;
      if ((*(int *)(gen_frame + 0x9c)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x9c)),(*(undefined4 *)(gen_frame + 0xa0)),((undefined1 *)(gen_frame + 0xa8)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
        F_00429760((*(int *)(gen_frame + 0x9c)),(((*(int *)(gen_frame + 0xa4)) - (*(int *)(gen_frame + 0x9c))) / 0x1c) * 0x1c,0x2c4);
      }
      (*(int *)(gen_frame + 0x9c)) = 0;
      (*(undefined4 *)(gen_frame + 0xa0)) = 0;
      (*(int *)(gen_frame + 0xa4)) = 0;
      if ((*(int *)(gen_frame + 0x8c)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x98)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
        F_00429760((*(int *)(gen_frame + 0x8c)),(((*(int *)(gen_frame + 0x94)) - (*(int *)(gen_frame + 0x8c))) / 0x1c) * 0x1c,0x2c4);
      }
      (*(int *)(gen_frame + 0x8c)) = 0;
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      (*(int *)(gen_frame + 0x94)) = 0;
      if (0xf < (*(uint *)(gen_frame + 0x84))) {
        F_00429760(((uint *)(gen_frame + 0x70))[0],(*(uint *)(gen_frame + 0x84)) + 1,0x2c4);
      }
      if (0xf < (*(uint *)(gen_frame + 0xd0))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0],(*(uint *)(gen_frame + 0xd0)) + 1,0x2c4);
      }
      pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
      (*(uint *)(gen_frame + 0xd0)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xcc)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar3 & 0xffffff00);
      if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) != (uint * PTR32 *)0x0) {
        F_00429760((*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)),((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c))) >> 2) * 4,0x2c4);
      }
      iVar14 = (*(int *)(gen_frame + 0x2c));
      if ((*(int *)(gen_frame + 0x2c)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x2c)),(*(int *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x38)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
        F_00429760(iVar14,(((*(int *)(gen_frame + 0x34)) - iVar14) / 0x1c) * 0x1c,0x2c4);
      }
      iVar14 = (*(int *)(gen_frame + 0x1c));
      if ((*(int *)(gen_frame + 0x1c)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x28)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
        F_00429760(iVar14,(((*(int *)(gen_frame + 0x24)) - iVar14) / 0x1c) * 0x1c,0x2c4);
      }
      uVar11 = (*(uint *)(gen_frame + 0x68));
      if (0xf < (*(uint *)(gen_frame + 0x68))) {
        uVar16 = F_00429760(((uint *)(gen_frame + 0x54))[0],(*(uint *)(gen_frame + 0x68)) + 1,0x2c4);
        F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
        return (uint)uVar16;
      }
    }
  }
  else {
    F_00a29960(this,param_1,param_2);
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x3c)) = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x40)) = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x44)) = (uint * PTR32 *)0x0;
    F_00a31ca0(&(*(int *)(gen_frame + 0x2c)));
    uVar11 = F_00a31ca0(&(*(int *)(gen_frame + 0x1c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar11;
}

/* ref: FUN_00a2a6c0 */
uint F_00a2a6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa2a6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  (*(uint *)(gen_frame + 0x28)) = param_1;
  (*(uint *)(gen_frame + 0x1c)) = param_1 + param_2;
  F_0042b630(((undefined1 *)(gen_frame + 0x2c)));
  uVar4 = param_1;
  uVar5 = param_1;
  if (param_1 < (*(uint *)(gen_frame + 0x1c))) {
    do {
      uVar4 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)),uVar5,(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),0);
      (*(uint *)(gen_frame + 0x24)) = uVar4;
      if (uVar4 == 0) {
        uVar4 = F_00a23ff0((*(undefined * PTR32 *)(gen_frame + 0x20)),uVar5,(*(undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x2c)),0);
        (*(uint *)(gen_frame + 0x24)) = uVar4;
        if (uVar4 != 0) {
          (*(undefined4 *)(gen_frame + 0x80)) = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x88)) = -1;
          F_00490f90(&(*(undefined4 *)(gen_frame + 0x80)),((undefined1 *)(gen_frame + 0x2c)));
          if (*(uint *)((int)param_4 + 8) <= *(int *)((int)param_4 + 0x10) + 1U) {
            F_00486f80(param_4,1);
          }
          uVar5 = *(int *)((int)param_4 + 0xc) + *(int *)((int)param_4 + 0x10);
          if (*(uint *)((int)param_4 + 8) <= uVar5) {
            uVar5 = uVar5 - *(uint *)((int)param_4 + 8);
          }
          if (*((int *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) == 0) {
            uVar4 = F_004296a0(0xc,0,0x2c4);
            *((uint *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) = uVar4;
          }
          puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4)));
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined1 *)(puVar2 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0x88)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0x80)))) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
              (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x84));
              if ((*(char *)(gen_frame + 0x88)) == '\0') {
                F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
              }
              else if ((*(char *)(gen_frame + 0x88)) == '\x01') {
                F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
              }
            }
          }
          *(int *)((int)param_4 + 0x10) = *(int *)((int)param_4 + 0x10) + 1;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x84)) != (undefined4 *)0x0) {
            if (((*(char *)(gen_frame + 0x88)) != '\0') && ((*(char *)(gen_frame + 0x88)) == '\x01')) {
              pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x84));
              *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
              if (*(int *)((int)pvVar3 + 0x54) < 1) {
                F_0042c880(pvVar3);
                F_00406ad0(pvVar3);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)0x0;
            (*(char *)(gen_frame + 0x88)) = -1;
          }
          goto LAB_00a2a91d;
        }
      }
      else {
        iVar1 = *(int *)((int)param_4 + 0x10);
        (*(undefined4 *)(gen_frame + 0x8c)) = 0;
        (*(undefined4 *)(gen_frame + 0x8c)) = (*(undefined4 *)(gen_frame + 0x14));
        (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
        (*(char *)(gen_frame + 0x94)) = '\0';
        if (*(uint *)((int)param_4 + 8) <= iVar1 + 1U) {
          F_00486f80(param_4,1);
        }
        uVar5 = *(int *)((int)param_4 + 0xc) + *(int *)((int)param_4 + 0x10);
        if (*(uint *)((int)param_4 + 8) <= uVar5) {
          uVar5 = uVar5 - *(uint *)((int)param_4 + 8);
        }
        if (*((int *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) == 0) {
          uVar4 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4))) = uVar4;
        }
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)param_4 + 4) + uVar5 * 4)));
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined1 *)(puVar2 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x94)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0x8c)))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar2;
            (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
            if ((*(char *)(gen_frame + 0x94)) == '\0') {
              F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
            }
            else if ((*(char *)(gen_frame + 0x94)) == '\x01') {
              F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
            }
          }
        }
        *(int *)((int)param_4 + 0x10) = *(int *)((int)param_4 + 0x10) + 1;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != (undefined4 *)0x0) {
          if (((*(char *)(gen_frame + 0x94)) != '\0') && ((*(char *)(gen_frame + 0x94)) == '\x01')) {
            pvVar3 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x90));
            *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
            if (*(int *)((int)pvVar3 + 0x54) < 1) {
              F_0042c880(pvVar3);
              F_00406ad0(pvVar3);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)0x0;
          (*(char *)(gen_frame + 0x94)) = -1;
        }
LAB_00a2a91d: ;
        uVar5 = (*(uint *)(gen_frame + 0x28)) + (*(uint *)(gen_frame + 0x24));
        (*(uint *)(gen_frame + 0x28)) = uVar5;
      }
      uVar4 = (*(uint *)(gen_frame + 0x8));
    } while (uVar5 < (*(uint *)(gen_frame + 0x1c)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x2c)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar5 - uVar4;
}

/* ref: FUN_00a2a960 */
uint F_00a2a960(unsigned int gen_a0)
{
  GEN_ENTER(0xa2a960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e4204));
  F_00a32bf0((undefined *)((int)this + 0x14),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x18),
               *(undefined4 * PTR32 *)((int)this + 0x18));
  F_00429760(*(undefined4 *)((int)this + 0x18),0x48,0x2c4);
  F_00a33cd0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x5c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2a9c0 */
uint F_00a2a9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa2a9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = param_4;
  F_0042b630(((undefined1 *)(gen_frame + 0x84)));
  uVar1 = F_00a23ff0(this,param_1,param_3,((undefined1 *)(gen_frame + 0x84)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a24d30(this,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x24)),1);
    if (uVar2 != 0) {
      uVar3 = F_00a24d30(this,param_1 + uVar1 + uVar2,(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x20)),1);
      if (uVar3 != 0) {
        iVar4 = uVar1 + uVar2 + uVar3;
        F_004816e0(((undefined4 *)(gen_frame + 0x8)));
        uVar1 = F_00a2a6c0(this,param_1 + iVar4,param_2 - iVar4,(*(undefined4 *)(gen_frame + 0x2c)),((undefined4 *)(gen_frame + 0x8)));
        F_0042b630(((undefined1 *)(gen_frame + 0x30)));
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0x18))))
                          ((int)this + -4,((undefined1 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x20)),((undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x30)));
        if (uVar2 == 1) {
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x30)));
          F_0042c880(((undefined1 *)(gen_frame + 0x30)));
          F_00492c50(((undefined4 *)(gen_frame + 0x8)));
          F_00429760(((undefined4 *)(gen_frame + 0x8))[0],8,0x2c4);
          ((undefined4 *)(gen_frame + 0x8))[0] = 0;
          F_0042c880(((undefined1 *)(gen_frame + 0x84)));
          F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
          return iVar4 + uVar1;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x30)));
        F_00492c50(((undefined4 *)(gen_frame + 0x8)));
        F_00429760(((undefined4 *)(gen_frame + 0x8))[0],8,0x2c4);
        ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x84)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return 0;
}

/* ref: Component::Text::TextModule::vf14 */
uint F_00a2ab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa2ab70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  undefined * pTVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = param_6;
  F_0042b630(((undefined1 *)(gen_frame + 0xcc)));
  uVar3 = F_00a23ff0(this + 4,param_1,param_3,((undefined1 *)(gen_frame + 0xcc)),1);
  if (uVar3 != 0) {
    uVar4 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4,param_1 + uVar3,param_3,((undefined1 *)(gen_frame + 0x12c)),1);
    if (uVar4 != 0) {
      uVar5 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4,param_1 + uVar3 + uVar4,param_3,&(*(undefined4 *)(gen_frame + 0x124)),1);
      if (uVar5 != 0) {
        iVar7 = uVar3 + uVar4 + uVar5;
        uVar3 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4,param_1 + iVar7,param_3,((undefined1 *)(gen_frame + 0x128)),1);
        if (uVar3 != 0) {
          iVar7 = iVar7 + uVar3;
          if ((char)param_4 != '\0') {
            uVar3 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4,param_1 + iVar7,param_3,((int *)(gen_frame + 0x130)),1);
            if (uVar3 == 0) goto LAB_00a2adc2;
            ((int *)(gen_frame + 0x130))[0] = ((int *)(gen_frame + 0x130))[0] + -1;
            iVar7 = iVar7 + uVar3;
          }
          uVar3 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4,param_1 + iVar7,param_3,&(*(int *)(gen_frame + 0x120)),1);
          if (uVar3 != 0) {
            (*(int *)(gen_frame + 0x120)) = (*(int *)(gen_frame + 0x120)) + -1;
            iVar7 = iVar7 + uVar3;
            F_004816e0(((undefined1 *)(gen_frame + 0x4)));
            uVar3 = F_00a2a6c0((*(undefined * PTR32 *)(gen_frame + 0x20)) + 4,param_1 + iVar7,param_2 - iVar7,param_3,((undefined1 *)(gen_frame + 0x4)));
            F_0042b630(((undefined1 *)(gen_frame + 0x78)));
            pTVar1 = (*(undefined * PTR32 *)(gen_frame + 0x20));
            piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x34) + 0xc))))
                                      (*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x34))));
            if (*piVar6 == param_5) {
              F_0042b630(((undefined1 *)(gen_frame + 0x24)));
              bVar2 = F_00a227a0(pTVar1 + 0x38,((undefined1 *)(gen_frame + 0xcc)),((undefined1 *)(gen_frame + 0x24)));
              if (bVar2 != 0) {
                uVar4 = ((code *)*(gen_code32 *)(*(int *)pTVar1 + 0xc))(pTVar1,((undefined1 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x78)));
                if (uVar4 == 1) {
                  F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x78)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
                  goto LAB_00a2ad07;
                }
              }
              F_0042c880(((undefined1 *)(gen_frame + 0x24)));
            }
            else {
              uVar4 = ((code *)*(gen_code32 *)(*(int *)pTVar1 + 0x18))
                                (pTVar1,((undefined1 *)(gen_frame + 0xcc)),(*(undefined4 *)(gen_frame + 0x124)),0xffff,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x78)));
              if (uVar4 == 1) {
                F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x78)));
LAB_00a2ad07: ;
                F_0042c880(((undefined1 *)(gen_frame + 0x78)));
                F_00493180(((undefined1 *)(gen_frame + 0x4)));
                F_0042c880(((undefined1 *)(gen_frame + 0xcc)));
                F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
                return iVar7 + uVar3;
              }
            }
            F_0042c880(((undefined1 *)(gen_frame + 0x78)));
            F_00493180(((undefined1 *)(gen_frame + 0x4)));
          }
        }
      }
    }
  }
LAB_00a2adc2: ;
  F_0042c880(((undefined1 *)(gen_frame + 0xcc)));
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return 0;
}

/* ref: FUN_00a2ade0 */
uint F_00a2ade0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2ade0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e4204));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x5c,0,0x2c4);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x58))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x59))) = 1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar2 = F_004296a0(0x48,0,0x2c4);
  uVar1 = ((uint *)(gen_frame + 0x0))[0];
  *(uint *)((int)this + 0x18) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x45))) = 1;
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x0)),&REFG(undefined, 0x10e3cec),1);
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x1c)),&REFG(undefined, 0x10e3cf0),2);
  F_00a29960(this,((uint *)(gen_frame + 0x1c)),((uint *)(gen_frame + 0x0)));
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x0))[0];
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x0)),&REFG(undefined, 0x10e3cf4),1);
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x1c)),(*(undefined * PTR32 (*)[1])REFP(0x10e3cf8)),3);
  F_00a29960(this,((uint *)(gen_frame + 0x1c)),((uint *)(gen_frame + 0x0)));
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x0))[0];
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x0)),&REFG(undefined, 0x10e3cfc),1);
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x1c)),&REFG(undefined, 0x10e3d00),4);
  F_00a29960(this,((uint *)(gen_frame + 0x1c)),((uint *)(gen_frame + 0x0)));
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)this;
}

/* ref: FUN_00a2b000 */
uint F_00a2b000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2b000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x44) = 0;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    *((char *)GEN_TOP((*(int *)((int)this + 0x44) + 1 + (int)this))) = param_2[*(int *)((int)this + 0x44)];
    *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + 1;
    cVar1 = param_2[*(int *)((int)this + 0x44)];
  }
  return (uint)this;
}

/* ref: FUN_00a2b040 */
byte F_00a2b040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < *(int *)(in_ecx + 0x44)) {
    return *(byte *)(param_2 + 1 + in_ecx);
  }
  return 0x2e;
}

/* ref: FUN_00a2b060 */
uint F_00a2b060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: Component::Text::TextModuleInterface::vf0 */
uint F_00a2b090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e3ec8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a2b0c0 */
uint F_00a2b0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa2b0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = param_3;
  *(undefined4 *)((int)this + 0x5c) = param_4;
  *(undefined4 *)((int)this + 0x60) = param_5;
  *(undefined4 *)((int)this + 100) = param_6;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: Component::Text::Localize::Noun::vf0 */
uint F_00a2b110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a2b1d0 */
uint F_00a2b1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b1d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00a2b230 */
uint F_00a2b230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_00a2b250 */
uint F_00a2b250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b250u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00a2b290 */
uint F_00a2b290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b290u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2b300 */
byte F_00a2b300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b3a0 */
uint F_00a2b3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b3a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2b3f0 */
uint F_00a2b3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b420 */
uint F_00a2b420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b420u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2b4b0 */
byte F_00a2b4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b4e0 */
byte F_00a2b4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b520 */
byte F_00a2b520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b580 */
uint F_00a2b580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b5f0 */
uint F_00a2b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b610 */
uint F_00a2b610(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a2b640 */
uint F_00a2b640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xac,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b670 */
uint F_00a2b670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa2b670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  if (param_2 == 1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(undefined * PTR32 *)this;
    }
    *(byte *)((int)this + param_1) = (byte)param_3;
    return (uint)(byte)param_3;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  pvVar1 = F_00c48350((undefined *)((int)this + param_1),(int)(char)(byte)param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_00a2b6d0 */
uint F_00a2b6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b710 */
uint F_00a2b710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b710u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2b780 */
uint F_00a2b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b780u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b7b0 */
uint F_00a2b7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b7b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x59;
}

/* ref: FUN_00a2b7c0 */
uint F_00a2b7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2b7d0 */
uint F_00a2b7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a2b7e0 */
uint F_00a2b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b7e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a2b7f0 */
uint F_00a2b7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b7f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a2b820 */
uint F_00a2b820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x5c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b840 */
uint F_00a2b840(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2b870 */
uint F_00a2b870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b8b0 */
uint F_00a2b8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b8b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x65;
}

/* ref: FUN_00a2b8c0 */
uint F_00a2b8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b8c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2b8d0 */
uint F_00a2b8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b8d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a2b8e0 */
uint F_00a2b8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b8e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a2b8f0 */
uint F_00a2b8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b8f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a2b920 */
uint F_00a2b920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x68,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b940 */
uint F_00a2b940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b940u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2b980 */
uint F_00a2b980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2b980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2b9b0 */
uint F_00a2b9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b9b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xa8;
}

/* ref: FUN_00a2b9c0 */
uint F_00a2b9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b9c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xa9;
}

/* ref: FUN_00a2b9d0 */
uint F_00a2b9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b9d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2b9e0 */
uint F_00a2b9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b9e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a2b9f0 */
uint F_00a2b9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2b9f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a2ba00 */
uint F_00a2ba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2ba00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xac,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2ba30 */
uint F_00a2ba30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2ba30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2ba40 */
byte F_00a2ba40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2ba40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a2ba90 */
uint F_00a2ba90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2ba90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bad0 */
uint F_00a2bad0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x58;
}

/* ref: FUN_00a2bae0 */
uint F_00a2bae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2bae0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x5c,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bb00 */
uint F_00a2bb00(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bb00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x44;
}

/* ref: FUN_00a2bb10 */
uint F_00a2bb10(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bb10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x45;
}

/* ref: FUN_00a2bb20 */
uint F_00a2bb20(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bb20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a2bb30 */
uint F_00a2bb30(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bb30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a2bb40 */
uint F_00a2bb40(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bb40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a2bb50 */
uint F_00a2bb50(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bb50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x45);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x45);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a2bb70 */
uint F_00a2bb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2bb70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bba0 */
uint F_00a2bba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2bba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bbb0 */
uint F_00a2bbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2bbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bbc0 */
uint F_00a2bbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2bbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bbd0 */
uint F_00a2bbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bbd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 100;
}

/* ref: FUN_00a2bbe0 */
uint F_00a2bbe0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bbe0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x65);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x65);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a2bc00 */
uint F_00a2bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2bc00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bc20 */
uint F_00a2bc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2bc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bc30 */
uint F_00a2bc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2bc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bc40 */
uint F_00a2bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2bc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00a2bc60 */
uint F_00a2bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bc70 */
uint F_00a2bc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2bc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bc90 */
uint F_00a2bc90(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bc90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0xa9)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0xa9);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a2bcc0 */
uint F_00a2bcc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bcc0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0xa9);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0xa9);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a2bcf0 */
uint F_00a2bcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2bcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bd20 */
uint F_00a2bd20(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bd20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x59)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x59);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a2bd40 */
uint F_00a2bd40(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bd40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x59);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x59);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a2bd90 */
uint F_00a2bd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2bd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x45))) == '\0') {
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

/* ref: FUN_00a2bdf0 */
uint F_00a2bdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bdf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x45)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x45);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a2be30 */
uint F_00a2be30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2be30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2be50 */
uint F_00a2be50(unsigned int gen_a0)
{
  GEN_ENTER(0xa2be50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x65)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x65);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a2beb0 */
unsigned int F_00a2beb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2beb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0xa9) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xa9) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xa9);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0xa9);
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xa9);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xa9);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a2bf10 */
unsigned int F_00a2bf10(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bf10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x59) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x59) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x59);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x59);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x59);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x59);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a2bf60 */
uint F_00a2bf60(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bf60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2bf70 */
uint F_00a2bf70(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bf70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2bf80 */
uint F_00a2bf80(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bf80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2bf90 */
uint F_00a2bf90(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bf90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2bfb0 */
uint F_00a2bfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bfb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2bfc0 */
uint F_00a2bfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bfc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2bfd0 */
uint F_00a2bfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bfd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2bfe0 */
uint F_00a2bfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bfe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2bff0 */
uint F_00a2bff0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2bff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c020 */
uint F_00a2c020(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c050 */
uint F_00a2c050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2c050u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a2c070 */
uint F_00a2c070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2c070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a2c090 */
uint F_00a2c090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa2c090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (uVar2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(uVar2 != param_4);
  }
  return uVar1;
}

/* ref: FUN_00a2c120 */
uint F_00a2c120(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0xa9) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0xa9) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0xa9) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0xa9) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0xa9);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0xa9);
    }
    if (*(char *)(*(int *)this + 0xa9) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a2c1c0 */
uint F_00a2c1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x59) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x59) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x59) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x59) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x59);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x59);
    }
    if (*(char *)(*(int *)this + 0x59) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a2c220 */
uint F_00a2c220(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x45) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x45) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x45) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x45) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x45);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x45);
    }
    if (*(char *)(*(int *)this + 0x45) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a2c290 */
uint F_00a2c290(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x65) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x65) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x65) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x65) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x65);
    }
    if (*(char *)(*(int *)this + 0x65) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a2c2f0 */
uint F_00a2c2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c2f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c300 */
uint F_00a2c300(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c310 */
uint F_00a2c310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c340 */
uint F_00a2c340(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c340u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c350 */
uint F_00a2c350(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c350u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c360 */
uint F_00a2c360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c390 */
uint F_00a2c390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c3c0 */
uint F_00a2c3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c3f0 */
uint F_00a2c3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c400 */
uint F_00a2c400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c430 */
uint F_00a2c430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c460 */
uint F_00a2c460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c490 */
uint F_00a2c490(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c4a0 */
uint F_00a2c4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c4d0 */
uint F_00a2c4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c4d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c4e0 */
uint F_00a2c4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c510 */
uint F_00a2c510(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c520 */
uint F_00a2c520(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c520u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c530 */
uint F_00a2c530(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c530u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c540 */
uint F_00a2c540(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c540u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c550 */
uint F_00a2c550(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c550u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c560 */
uint F_00a2c560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c580 */
uint F_00a2c580(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c580u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c5c0 */
uint F_00a2c5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c5c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c5d0 */
uint F_00a2c5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c5d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00a2c630 */
uint F_00a2c630(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c640 */
uint F_00a2c640(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c650 */
uint F_00a2c650(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c660 */
uint F_00a2c660(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c670 */
uint F_00a2c670(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c750 */
uint F_00a2c750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2c750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a2c760 */
uint F_00a2c760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2c760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a2c770 */
uint F_00a2c770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2c780 */
uint F_00a2c780(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c7a0 */
uint F_00a2c7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c7a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c7b0 */
uint F_00a2c7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c7d0 */
uint F_00a2c7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c7d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c7e0 */
uint F_00a2c7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c800 */
uint F_00a2c800(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c810 */
uint F_00a2c810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c830 */
uint F_00a2c830(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c840 */
uint F_00a2c840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2c840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c860 */
uint F_00a2c860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2c860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cbc0(this,param_1);
  puVar2 = (undefined4 *)(param_1 + 0x54);
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c890 */
uint F_00a2c890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2c890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00a2c8b0 */
uint F_00a2c8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2c8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a2c8e0 */
uint F_00a2c8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2c8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a2c980 */
uint F_00a2c980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c990 */
uint F_00a2c990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2c990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9a0 */
uint F_00a2c9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2c9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9b0 */
uint F_00a2c9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2c9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9c0 */
uint F_00a2c9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2c9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9d0 */
uint F_00a2c9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2c9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9e0 */
uint F_00a2c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9f0 */
uint F_00a2c9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2c9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca00 */
uint F_00a2ca00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca10 */
uint F_00a2ca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca20 */
uint F_00a2ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca30 */
uint F_00a2ca30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x80))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca40 */
uint F_00a2ca40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca50 */
uint F_00a2ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x90))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca60 */
uint F_00a2ca60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca70 */
uint F_00a2ca70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca80 */
uint F_00a2ca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca90 */
uint F_00a2ca90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2ca90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2caa0 */
uint F_00a2caa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2caa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cab0 */
uint F_00a2cab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cac0 */
uint F_00a2cac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cad0 */
uint F_00a2cad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cae0 */
uint F_00a2cae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2caf0 */
uint F_00a2caf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2caf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb00 */
uint F_00a2cb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb10 */
uint F_00a2cb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb20 */
uint F_00a2cb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb30 */
uint F_00a2cb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb40 */
uint F_00a2cb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x78))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb50 */
uint F_00a2cb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb60 */
uint F_00a2cb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cb60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb70 */
uint F_00a2cb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb80 */
uint F_00a2cb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa2cb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb90 */
uint F_00a2cb90(unsigned int gen_a0)
{
  GEN_ENTER(0xa2cb90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (param_1 != 0) {
    ((int *)(gen_frame + 0x4))[0] = param_1;
    ((int *)(gen_frame + 0x4))[1] = 0;
    F_00c4f4ca(&REFG(undefined4, 0x14a2ab0),((int *)(gen_frame + 0x4)));
    return 0x14a2ab0;
  }
  return 0x14a2ad4;
}

/* ref: Component::Text::Localize::NounCh::vf0 */
uint F_00a2cbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f0c));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Text::Localize::NounDe::vf0 */
uint F_00a2cc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a211b0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Text::Localize::NounEn::vf0 */
uint F_00a2cc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f24));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Text::Localize::NounFr::vf0 */
uint F_00a2cca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f30));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Text::Localize::NounJa::vf0 */
uint F_00a2cce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f3c));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a2cd20 */
byte F_00a2cd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2cd40 */
uint F_00a2cd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (0xf < *(uint *)((int)this + 0x14)) {
    return param_1 + *(int *)this;
  }
  return (int)this + param_1;
}

/* ref: FUN_00a2cd70 */
byte F_00a2cd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2cd90 */
byte F_00a2cd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2cdb0 */
byte F_00a2cdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2ce10 */
uint F_00a2ce10(unsigned int gen_a0)
{
  GEN_ENTER(0xa2ce10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a2ce30 */
uint F_00a2ce30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa2ce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  gen_size32 _MaxCount;
  
  if ((param_3 != 0) || (uVar3 = param_2, *(uint *)((int)this + 0x10) < param_2)) {
    if ((param_2 < *(uint *)((int)this + 0x10)) &&
       (uVar3 = *(uint *)((int)this + 0x10) - param_2, param_3 <= uVar3)) {
      _MaxCount = uVar3 + (1 - param_3);
      pvVar2 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      pvVar2 = (undefined *)((int)pvVar2 + param_2);
      pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      while (pvVar1 != (undefined *)0x0) {
        uVar3 = F_0040d320(pvVar1,param_1,param_3);
        if (uVar3 == 0) {
          if (0xf < *(uint *)((int)this + 0x14)) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pvVar1 - (int)this;
        }
        _MaxCount = (int)pvVar2 + ((_MaxCount - 1) - (int)pvVar1);
        pvVar2 = (undefined *)((int)pvVar1 + 1);
        pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FUN_00a2cee0 */
uint F_00a2cee0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2cee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_00a2cef0 */
uint F_00a2cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *(undefined1 *)((int)in_ecx + param_2) = 0;
  return param_2;
}

/* ref: FUN_00a2cf10 */
unsigned int F_00a2cf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2cf10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2);
    }
    F_00429760(uVar1,*(int *)((int)this + 0x14) + 1,0x2c4);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)(param_2 + (int)this) = 0;
  return 0;
}

/* ref: FUN_00a2cff0 */
uint F_00a2cff0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2cff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a2d050 */
uint F_00a2d050(unsigned int gen_a0)
{
  GEN_ENTER(0xa2d050u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a2d0c0 */
uint F_00a2d0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d0c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a2d100 */
uint F_00a2d100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)this;
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

/* ref: FUN_00a2d130 */
uint F_00a2d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d140 */
uint F_00a2d140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d140u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a2d1e0 */
uint F_00a2d1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
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

/* ref: FUN_00a2d230 */
uint F_00a2d230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d230u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a2d260 */
uint F_00a2d260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d270 */
uint F_00a2d270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d290 */
unsigned int F_00a2d290(unsigned int gen_a0)
{
  GEN_ENTER(0xa2d290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x45);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x45);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x45);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x45);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a2d2e0 */
uint F_00a2d2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x65);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_1);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x65);
  }
  return (uint)puVar2;
}

/* ref: FUN_00a2d320 */
uint F_00a2d320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d330 */
unsigned int F_00a2d330(unsigned int gen_a0)
{
  GEN_ENTER(0xa2d330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x65) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x65);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x65);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x65);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a2d380 */
uint F_00a2d380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d390 */
uint F_00a2d390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00a2d3b0 */
uint F_00a2d3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d3c0 */
uint F_00a2d3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d3d0 */
uint F_00a2d3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d420 */
uint F_00a2d420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d420u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar4 = F_004296a0(uVar5 + 1,0,0x2c4);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x2c4);
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

/* ref: FUN_00a2d500 */
uint F_00a2d500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d500u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2;
}

/* ref: FUN_00a2d520 */
byte F_00a2d520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2d540 */
byte F_00a2d540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2d560 */
uint F_00a2d560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d560u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d570 */
byte F_00a2d570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2d590 */
uint F_00a2d590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0xa9) == '\0') {
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

/* ref: FUN_00a2d5f0 */
uint F_00a2d5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0xa9))) == '\0') {
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

/* ref: FUN_00a2d650 */
uint F_00a2d650(unsigned int gen_a0)
{
  GEN_ENTER(0xa2d650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a2beb0(this);
  return (uint)this;
}

/* ref: FUN_00a2d660 */
uint F_00a2d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x59) == '\0') {
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

/* ref: FUN_00a2d6c0 */
uint F_00a2d6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x59))) == '\0') {
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

/* ref: FUN_00a2d720 */
uint F_00a2d720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x45) == '\0') {
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

/* ref: FUN_00a2d780 */
uint F_00a2d780(unsigned int gen_a0)
{
  GEN_ENTER(0xa2d780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a2bf10(this);
  return (uint)this;
}

/* ref: FUN_00a2d790 */
uint F_00a2d790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x65) == '\0') {
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

/* ref: FUN_00a2d7f0 */
uint F_00a2d7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2d7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x65))) == '\0') {
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

/* ref: FUN_00a2d850 */
uint F_00a2d850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d880 */
uint F_00a2d880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d8b0 */
uint F_00a2d8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d8e0 */
uint F_00a2d8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d910 */
uint F_00a2d910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d940 */
uint F_00a2d940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d970 */
uint F_00a2d970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d9a0 */
uint F_00a2d9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d9d0 */
uint F_00a2d9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2d9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2da00 */
uint F_00a2da00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2da00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2da20 */
uint F_00a2da20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2da20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2da40 */
uint F_00a2da40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2da40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2da60 */
uint F_00a2da60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2da60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2da80 */
uint F_00a2da80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2da80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2daa0 */
uint F_00a2daa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2daa0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00a2db00 */
uint F_00a2db00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2db00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = F_00a2c090(this,0,*(undefined4 *)((int)this + 0x10),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_00a2db30 */
uint F_00a2db30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2db30u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_00a2c090(this,0,*(undefined4 *)((int)this + 0x10),param_1,
                       (int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00a2db70 */
uint F_00a2db70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2db70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a2dba0 */
uint F_00a2dba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa2dba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a2dbd0 */
uint F_00a2dbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2dbd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a2dbf0 */
uint F_00a2dbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2dbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dc10 */
uint F_00a2dc10(unsigned int gen_a0)
{
  GEN_ENTER(0xa2dc10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a2c120(this);
  return (uint)this;
}

/* ref: FUN_00a2dc40 */
uint F_00a2dc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2dc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dc60 */
uint F_00a2dc60(unsigned int gen_a0)
{
  GEN_ENTER(0xa2dc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a2c1c0(this);
  return (uint)this;
}

/* ref: FUN_00a2dc70 */
uint F_00a2dc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2dc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dc90 */
uint F_00a2dc90(unsigned int gen_a0)
{
  GEN_ENTER(0xa2dc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a2c220(this);
  return (uint)this;
}

/* ref: FUN_00a2dcb0 */
uint F_00a2dcb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa2dcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a2c290(this);
  return (uint)this;
}

/* ref: FUN_00a2dcc0 */
uint F_00a2dcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2dcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dce0 */
uint F_00a2dce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa2dce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

