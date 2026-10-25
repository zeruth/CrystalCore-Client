#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_009d7000 */
unsigned int F_009d7000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9d7000u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[10];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  undefined * this_00;
  
  if (REFG(undefined4, 0x14a0a14) != (code *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x1cb0,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (this_00 != (undefined *)0x0) {
      (*(uint *)&gen_args[9]) = F_009d6770(this_00,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8])
                             ,(*(uint *)&gen_args[9]));
      F_009eea60(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),&(*(uint *)&gen_args[9]));
      return 0;
    }
  }
  (*(uint *)&gen_args[9]) = 0;
  F_009eea60(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),&(*(uint *)&gen_args[9]));
  return 0;
}

/* ref: FUN_009d7090 */
unsigned int F_009d7090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16)
{
  GEN_ENTER(0x9d7090u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[17];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  int iVar1;
  int iVar2;
  undefined * this_00;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)));
  if (REFG(undefined4, 0x14a0a14) != (code *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x4468,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (this_00 != (undefined *)0x0) {
      (*(uint *)&gen_args[16]) = F_009d6940(this_00,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),
                              (*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),(*(undefined4 *)&gen_args[11]),(*(undefined4 *)&gen_args[12]),(*(undefined4 *)&gen_args[13]),(*(undefined4 *)&gen_args[14]),(*(undefined4 *)&gen_args[15]),
                              (*(uint *)&gen_args[16]),-(uint)(iVar1 != 0) & 2 | (uint)(iVar2 != 0));
      F_009eead0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))),&(*(uint *)&gen_args[16]));
      return 0;
    }
  }
  (*(uint *)&gen_args[16]) = 0;
  F_009eead0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))),&(*(uint *)&gen_args[16]));
  return 0;
}

/* ref: FUN_009d7150 */
uint F_009d7150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9d7150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_4;
  *(undefined1 *)((int)this + 0x11) = (undefined1)param_5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e07f4));
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  F_009d6de0((undefined *)((int)this + 0x20));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c8) =
       (*(undefined * PTR32 (*)[5])REFP(0x10e07a8));
  F_009d5de0((undefined *)((int)this + 0x5d0));
  F_009d5de0((undefined *)((int)this + 0x868));
  F_00987100((undefined *)((int)this + 0xb00));
  F_00995cb0((undefined *)((int)this + 0xb88));
  F_00995570((undefined *)((int)this + 0xce8));
  F_009a6b20((undefined *)((int)this + 0xe10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1380) =
       (*(undefined * PTR32 (*)[6])REFP(0x10df09c));
  F_00987100((undefined *)((int)this + 5000));
  F_00987100((undefined *)((int)this + 0x1410));
  F_00987100((undefined *)((int)this + 0x1498));
  F_00995cb0((undefined *)((int)this + 0x1520));
  F_00995cb0((undefined *)((int)this + 0x1680));
  return (uint)this;
}

/* ref: FUN_009d7230 */
uint F_009d7230(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9d7230u, gen_a0, 0u, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_edi = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = ((code *)*(gen_code32 *)(*(int *)param_6 + 8))(param_6);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)param_6 + 4))(param_6,(undefined4)gen_fl2bits((float)(int)uVar5));
  F_0099a240(in_ecx,param_3,param_4,param_5,param_7,param_8,(float)(float10)1,(float)(int)uVar5,
               in_edi);
  in_ecx[0x7d] = param_9;
  in_ecx[0x7c] = param_6;
  *in_ecx = (*(undefined * PTR32 (*)[31])REFP(0x10e08bc));
  in_ecx[0x7b] = ((code *)REFP(0x9d6e50));
  in_ecx[0x7e] = 0xffffffff;
  in_ecx[1] = *param_10;
  in_ecx[2] = param_10[1];
  in_ecx[3] = param_10[2];
  in_ecx[4] = param_10[3];
  in_ecx[5] = param_10[4];
  in_ecx[6] = param_10[5];
  in_ecx[7] = param_10[6];
  in_ecx[8] = param_10[7];
  in_ecx[9] = param_10[8];
  in_ecx[10] = param_10[9];
  in_ecx[0xb] = param_10[10];
  in_ecx[0xc] = param_10[0xb];
  piVar4 = (int *)in_ecx[0x75];
  puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x20)))));
  uVar1 = *puVar6;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x14)));
  uVar2 = *(undefined4 *)(uVar5 + 4);
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x8)));
  uVar3 = *(undefined4 *)(uVar5 + 8);
  piVar4 = (int *)in_ecx[0x75];
  in_ecx[0x16] = uVar1;
  in_ecx[0x17] = uVar2;
  in_ecx[0x18] = uVar3;
  puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,((undefined1 *)(gen_frame + 0x8)))));
  uVar1 = *puVar6;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,((undefined1 *)(gen_frame + 0x14)));
  uVar2 = *(undefined4 *)(uVar5 + 4);
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,((undefined1 *)(gen_frame + 0x20)));
  uVar3 = *(undefined4 *)(uVar5 + 8);
  in_ecx[0x1c] = uVar1;
  in_ecx[0x1d] = uVar2;
  in_ecx[0x1e] = uVar3;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)in_ecx[0x7c] + 0xc))((int *)in_ecx[0x7c]);
  if (0 < (int)uVar5) {
    uVar8 = in_ecx[0x7e];
    uVar7 = 1;
    do {
      uVar8 = uVar8 & ~uVar7;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    in_ecx[0x7e] = uVar8;
  }
  in_ecx[0x74] = in_ecx[0x74] & 0x20000000 ^ (in_ecx[0x74] & 0xfffffe01 | 1);
  return (uint)in_ecx;
}

/* ref: FUN_009d7430 */
uint F_009d7430(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0x9d7430u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  float in_edi = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 * param_11 = (undefined4 *)(uintptr_t)gen_a10;
  uint param_12 = (uint)gen_a11;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = ((code *)*(gen_code32 *)(*(int *)param_7 + 8))(param_7,param_12);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)param_7 + 4))(param_7,(undefined4)gen_fl2bits((float)(int)uVar5));
  F_0099a640(in_ecx,param_4,param_5,param_6,param_8,param_9,(float)(float10)1,(float)(int)uVar5,
               in_edi,in_esi);
  in_ecx[0x7c] = param_7;
  in_ecx[0x7d] = param_10;
  *in_ecx = (*(undefined * PTR32 (*)[31])REFP(0x10e08bc));
  in_ecx[0x7b] = ((code *)REFP(0x9d6e50));
  in_ecx[0x7e] = 0xffffffff;
  in_ecx[1] = *param_11;
  in_ecx[2] = param_11[1];
  in_ecx[3] = param_11[2];
  in_ecx[4] = param_11[3];
  in_ecx[5] = param_11[4];
  in_ecx[6] = param_11[5];
  in_ecx[7] = param_11[6];
  in_ecx[8] = param_11[7];
  in_ecx[9] = param_11[8];
  in_ecx[10] = param_11[9];
  in_ecx[0xb] = param_11[10];
  in_ecx[0xc] = param_11[0xb];
  piVar4 = (int *)in_ecx[0x75];
  puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x20)))));
  uVar1 = *puVar6;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x14)));
  uVar2 = *(undefined4 *)(uVar5 + 4);
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x8)));
  uVar3 = *(undefined4 *)(uVar5 + 8);
  piVar4 = (int *)in_ecx[0x75];
  in_ecx[0x16] = uVar1;
  in_ecx[0x17] = uVar2;
  in_ecx[0x18] = uVar3;
  puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,((undefined1 *)(gen_frame + 0x8)))));
  uVar1 = *puVar6;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,((undefined1 *)(gen_frame + 0x14)));
  uVar2 = *(undefined4 *)(uVar5 + 4);
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,((undefined1 *)(gen_frame + 0x20)));
  uVar3 = *(undefined4 *)(uVar5 + 8);
  in_ecx[0x1c] = uVar1;
  in_ecx[0x1d] = uVar2;
  in_ecx[0x1e] = uVar3;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)in_ecx[0x7c] + 0xc))((int *)in_ecx[0x7c]);
  uVar7 = 1;
  if (0 < (int)uVar5) {
    uVar8 = in_ecx[0x7e];
    do {
      uVar8 = uVar8 & ~uVar7;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    in_ecx[0x7e] = uVar8;
  }
  in_ecx[0x74] = in_ecx[0x74] & 0x20000000 ^ (in_ecx[0x74] & 0xfffffe01 | 1);
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf24 */
unsigned int F_009d7630(unsigned int gen_a0)
{
  GEN_ENTER(0x9d7630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(this + 0x1f8) = 0xffffffff;
  *(gen_code32 *)(this + 0x1ec) = ((code *)REFP(0x9d6e50));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1f0) + 0xc))))(*(int * PTR32 *)(this + 0x1f0));
  uVar2 = 1;
  if (0 < (int)uVar1) {
    uVar3 = *(uint *)(this + 0x1f8);
    do {
      uVar3 = uVar3 & ~uVar2;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    *(uint *)(this + 0x1f8) = uVar3;
  }
  *(uint *)(this + 0x1d0) =
       *(uint *)(this + 0x1d0) & 0x20000000 ^ (*(uint *)(this + 0x1d0) & 0xfffffe01 | 1);
  return 0;
}

/* ref: FUN_009d76b0 */
uint F_009d76b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x9d76b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  float fVar3;
  
  fVar3 = (float)(float10)0;
  uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
  F_009abc20(param_1,param_2,param_3,param_4,param_5,param_8,(float)(int)uVar1,fVar3);
  *param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10dec44));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[0x7d] + 0x2c))((int *)param_1[0x7d])));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  *(char *)(param_1 + 0x93) = (char)uVar1;
  F_009b1200(param_1,GEN_TOF(gen_bits2f(param_1[0x6a])),GEN_TOF(gen_bits2f(param_1[0x6b])));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xe;
  if (REFG(int, 0x14a09e8) != -1) {
    piVar2 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
    REFG(int, 0x14a09e8) = *piVar2;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
    if (piVar2 != (int *)0x0) {
      uVar1 = F_009d7430(piVar2,param_1,param_6,param_1[0x75],param_1,param_1[0x77],param_6,
                           param_8,param_9,param_7,param_1 + 1,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
      F_0097e5c0(param_1,uVar1);
      return (uint)param_1;
    }
  }
  F_0097e5c0(param_1,0);
  return (uint)param_1;
}

/* ref: FUN_009d77f0 */
uint F_009d77f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d77f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint * puVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10e082c));
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x278) = 0;
  piVar1 = (int *)F_00404230();
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,0x2c,4);
  *(uint *)((int)this + 0x274) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x274) + 4))) = *(int *)((int)this + 0x274);
  *((int *)GEN_TOP((*(int *)((int)this + 0x274) + 8))) = *(int *)((int)this + 0x274);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x274) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x274) + 0x29))) = 1;
  *(undefined4 *)((int)this + 4) = 1;
  uVar2 = *(uint *)(REFG(int, 0x1370b90) + 0x34);
  if ((uVar2 >> 1 & 1) == 0) {
    if (((uVar2 >> 2 & 1) != 0) || ((uVar2 >> 4 & 1) != 0)) {
      *(undefined4 *)((int)this + 4) = 1;
    }
  }
  else {
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(uint *)((int)this + 0x240) = *(uint *)((int)this + 0x240) & 0xf00003ff;
  *(uint *)((int)this + 0x244) = *(uint *)((int)this + 0x244) & 0xf00003ff;
  *(uint *)((int)this + 0x248) = *(uint *)((int)this + 0x248) & 0xf00003ff;
  *(uint *)((int)this + 0x24c) = *(uint *)((int)this + 0x24c) & 0xf00003ff;
  *(uint *)((int)this + 0x250) = *(uint *)((int)this + 0x250) & 0xf00003ff;
  *(uint *)((int)this + 0x254) = *(uint *)((int)this + 0x254) & 0xf00003ff;
  *(uint *)((int)this + 600) = *(uint *)((int)this + 600) & 0xf00003ff;
  *(uint *)((int)this + 0x25c) = *(uint *)((int)this + 0x25c) & 0xf00003ff;
  *(uint *)((int)this + 0x260) = *(uint *)((int)this + 0x260) & 0xf00003ff;
  *(uint *)((int)this + 0x264) = *(uint *)((int)this + 0x264) & 0xf00003ff;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  pvVar3 = (undefined *)F_004dca20(&(*(undefined4 *)(gen_frame + 0x14)),1,0x1440,4,10);
  *(undefined * PTR32 *)((int)this + 0xc) = pvVar3;
  pvVar3 = (undefined *)F_004d5a50(pvVar3,0,0,((int *)(gen_frame + 0x8)),2);
  F_00c48350(pvVar3,0xff,((int *)(gen_frame + 0x8))[0] * 4);
  F_004d5b60(*(undefined * PTR32 *)((int)this + 0xc),0,0);
  *(undefined1 *)((int)this + 0x26e) = 1;
  F_00c48350((undefined *)((int)this + 0x10),0,0x80);
  F_00c48350((undefined *)((int)this + 0x90),0,0x180);
  puVar5 = (uint *)((int)this + 0x14);
  uVar2 = 0;
  do {
    if (*((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0a90) + uVar2))) != 0) {
      uVar4 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),
                           *((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0a90) + uVar2))));
      puVar5[-1] = uVar4;
      uVar4 = F_004dcd60(*(int *)((int)&REFG(undefined4, 0x10e0a94) + uVar2) << 4,2,10);
      *puVar5 = uVar4;
    }
    uVar2 = uVar2 + 8;
    puVar5 = puVar5 + 2;
  } while (uVar2 < 0x70);
  puVar5 = (uint *)((int)this + 0x94);
  uVar2 = 0;
  do {
    if (*((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0980) + uVar2))) != 0) {
      uVar4 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),
                           *((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0980) + uVar2))));
      puVar5[-1] = uVar4;
      uVar4 = F_004dcd60(*(int *)((int)&REFG(undefined4, 0x10e0984) + uVar2) << 4,2,10);
      *puVar5 = uVar4;
    }
    uVar2 = uVar2 + 8;
    puVar5 = puVar5 + 2;
  } while (uVar2 < 0x110);
  puVar5 = (uint *)((int)this + 0x210);
  uVar2 = 0;
  do {
    uVar4 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x20),
                         *((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0938) + uVar2))));
    *puVar5 = uVar4;
    uVar2 = uVar2 + 8;
    puVar5 = puVar5 + 1;
  } while (uVar2 < 0x48);
  *(undefined2 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  return (uint)this;
}

/* ref: FUN_009d7a30 */
unsigned int F_009d7a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9d7a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  undefined * this_00;
  
  if (REFG(undefined4, 0x14a0a14) != (code *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x17e0,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (this_00 != (undefined *)0x0) {
      (*(uint *)&gen_args[7]) = F_009d7150(this_00,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(uint *)&gen_args[7]));
      F_009eeb40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))),&(*(uint *)&gen_args[7]));
      return 0;
    }
  }
  (*(uint *)&gen_args[7]) = 0;
  F_009eeb40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))),&(*(uint *)&gen_args[7]));
  return 0;
}

/* ref: FUN_009d7ab0 */
uint F_009d7ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d7ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f0) + 0x10))))(*(int * PTR32 *)((int)this + 0x1f0),param_1);
  uVar1 = *(ushort *)(uVar4 + 2);
  uVar5 = (uint)uVar1;
  if (-1 < (short)uVar1) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0x2c))))
                      (*(int * PTR32 *)((int)this + 0x1dc),(int)(short)uVar1);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0x2c))))
                        (*(int * PTR32 *)((int)this + 0x1dc),(int)*(short *)(uVar4 + 2));
      uVar4 = F_0097fa40(uVar5);
      if (REFG(int, 0x14a09e8) != -1) {
        iVar7 = REFG(int, 0x14a09e8) * 0x400;
        REFG(int, 0x14a09e8) = *(int *)(iVar7 + REFG(int, 0x14a09f4));
        REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
        iVar7 = iVar7 + REFG(int, 0x14a09f4);
        if (iVar7 != 0) {
          uVar2 = *(undefined4 *)((int)this + 0x1dc);
          uVar3 = *(undefined4 *)((int)this + 0x1d4);
          uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
          uVar5 = F_009d7230(iVar7,iVar7,uVar3,this,uVar2,uVar5,(float)(float10)0,
                               (float)(int)uVar4,0xffffffff,uVar6);
          uVar5 = F_0097e5c0(this,uVar5);
          return uVar5;
        }
      }
      uVar5 = F_0097e5c0(this,0);
    }
  }
  return uVar5;
}

/* ref: FUN_009d7bb0 */
uint F_009d7bb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x9d7bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  uint uVar9;
  uint uVar10;
  uint local_10;
  uint local_c;
  
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x1f0) + 8))))
                    (*(int * PTR32 *)((int)param_1 + 0x1f0),param_2);
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x1dc) + 0x2c))))
                            (*(int * PTR32 *)((int)param_1 + 0x1dc),(int)*(short *)(uVar4 + 2))));
  piVar6 = *(int * PTR32 *)((int)param_1 + 0x1dc);
  iVar1 = *piVar6;
  uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5);
  piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x24))(piVar6,uVar4)));
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6,0)));
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6,3)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6);
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_c = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        if (REFG(int, 0x14a09e8) == -1) {
LAB_009d7cf5: ;
          uVar9 = 0;
        }
        else {
          piVar8 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
          REFG(int, 0x14a09e8) = *piVar8;
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
          if (piVar8 == (int *)0x0) goto LAB_009d7cf5;
          uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
          uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
          uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
          uVar9 = F_009cca90(piVar8,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                               local_c,(float)(int)(uVar9 * local_c));
        }
        F_0097e5c0(param_1,uVar9);
        local_c = local_c + 1;
        if ((int)uVar4 <= (int)local_c) {
          return local_c;
        }
      } while( true );
    }
    uVar4 = F_009df120(0x29c);
    if (uVar4 != 0) {
      uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
      uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
      uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
      uVar4 = F_009cca90(uVar4,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                           0xffffffff,(float)(int)uVar9);
      uVar4 = F_0097e5c0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 1: ;
    uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_c = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6,3)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        if (uVar9 == 0) {
          uVar9 = F_009df120(0x2d4);
          if (uVar9 == 0) {
            uVar9 = 0;
          }
          else {
            uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
            uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
            uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
            uVar9 = F_009cc4f0(uVar9,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                                 local_c,0xffffffff,(float)(int)(uVar10 * local_c));
          }
          F_0097e5c0(param_1,uVar9);
        }
        else if (uVar9 == 1) {
          uVar9 = 0;
          do {
            if (local_c != uVar9) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d7e92: ;
                uVar10 = 0;
              }
              else {
                piVar8 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
                REFG(int, 0x14a09e8) = *piVar8;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
                if (piVar8 == (int *)0x0) goto LAB_009d7e92;
                uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
                uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
                uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
                uVar10 = F_009cc4f0(piVar8,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,
                                      param_4,local_c,uVar9,(float)(int)(uVar10 * uVar9));
              }
              F_0097e5c0(param_1,uVar10);
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar4);
        }
        local_c = local_c + 1;
        if ((int)uVar4 <= (int)local_c) {
          return local_c;
        }
      } while( true );
    }
    uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_10 = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        uVar9 = F_009df120(0x2d4);
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
          uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
          uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
          uVar9 = F_009cc4f0(uVar9,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                               0xffffffff,local_10,(float)(int)(uVar10 * local_10));
        }
        F_0097e5c0(param_1,uVar9);
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)uVar4);
      return local_10;
    }
    uVar4 = F_009df120(0x2d4);
    if (uVar4 != 0) {
      uVar4 = F_009cc4f0(uVar4,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                           *(undefined4 *)((int)param_1 + 0x1dc),piVar6,piVar5,param_2,param_3,
                           param_4,0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 2: ;
    uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_c = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6,3)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        if (uVar9 == 0) {
          uVar9 = F_009df120(0x360);
          if (uVar9 == 0) {
            uVar9 = 0;
          }
          else {
            uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
            uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
            uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
            uVar9 = F_009cd0c0(uVar9,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                                 local_c,0xffffffff,(float)(int)(uVar10 * local_c));
          }
          F_0097e5c0(param_1,uVar9);
        }
        else if (uVar9 == 1) {
          uVar9 = 0;
          do {
            if (local_c != uVar9) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d8172: ;
                uVar10 = 0;
              }
              else {
                piVar8 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
                REFG(int, 0x14a09e8) = *piVar8;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
                if (piVar8 == (int *)0x0) goto LAB_009d8172;
                uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
                uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
                uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
                uVar10 = F_009cd0c0(piVar8,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,
                                      param_4,local_c,uVar9,(float)(int)(uVar10 * uVar9));
              }
              F_0097e5c0(param_1,uVar10);
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar4);
        }
        local_c = local_c + 1;
        if ((int)uVar4 <= (int)local_c) {
          return local_c;
        }
      } while( true );
    }
    uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x1d4) + 0x270)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      local_10 = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        uVar9 = F_009df120(0x360);
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar2 = *(undefined4 *)((int)param_1 + 0x1dc);
          uVar3 = *(undefined4 *)((int)param_1 + 0x1d4);
          uVar10 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
          uVar9 = F_009cd0c0(uVar9,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                               0xffffffff,local_10,(float)(int)(uVar10 * local_10));
        }
        F_0097e5c0(param_1,uVar9);
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)uVar4);
      return local_10;
    }
    uVar4 = F_009df120(0x360);
    if (uVar4 != 0) {
      uVar4 = F_009cd0c0(uVar4,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                           *(undefined4 *)((int)param_1 + 0x1dc),piVar6,piVar5,param_2,param_3,
                           param_4,0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 3: ;
    if (REFG(int, 0x14a09e8) != -1) {
      piVar7 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
      REFG(int, 0x14a09e8) = *piVar7;
      REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
      if (piVar7 != (int *)0x0) {
        uVar4 = F_009d76b0(piVar7,*(undefined4 *)((int)param_1 + 0x1d4),param_1,
                             *(undefined4 *)((int)param_1 + 0x1dc),piVar6,piVar5,param_2,param_3,
                             param_4);
        uVar4 = F_0097e5c0(param_1,uVar4);
        return uVar4;
      }
    }
    break;
  default: ;
    goto switchD_009d7c29_default;
  }
  uVar4 = F_0097e5c0(param_1,0);
switchD_009d7c29_default: ;
  return uVar4;
}

/* ref: Apricot::Engine::Instance::RandomTriggerClipInstance::vf1 */
uint F_009d83e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9d83e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int iVar1;
  int * this_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x1f0) + 4)));
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x1f0) + 8)));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar3 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  uVar3 = REFG(undefined4, 0x13301dc) >> 0x13 ^ uVar3 ^ uVar3 >> 8 ^ REFG(undefined4, 0x13301dc);
  iVar4 = ((iVar4 - iVar1) + 1) * (uVar3 & 0xffff);
  this_00 = *(int * PTR32 *)(this + 0x1d8);
  uVar2 = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar3;
  REFG(undefined4, 0x13301e8) = REFG(undefined4, 0x13301e4);
  while ((REFG(undefined4, 0x13301e4) = uVar2, this_00 != (int *)0x0 &&
         (uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00), uVar3 != 2))) {
    this_00 = (int *)this_00[0x76];
    uVar2 = REFG(undefined4, 0x13301e4);
  }
  F_009d7ab0(this_00,((int)((iVar4 >> 0x1f & 0xffffU) + iVar4) >> 0x10) + iVar1);
  uVar3 = *(uint *)(this + 0x1d0);
  if ((uVar3 & 0x40000) != 0) {
    return uVar3;
  }
  *(uint *)(this + 0x1d0) = uVar3 & 0xf81fffff | 0x40000;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar3;
}

/* ref: Apricot::Engine::Instance::TriggerClipInstance::vf1 */
uint F_009d84d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9d84d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * this_00;
  undefined4 uVar1;
  uint uVar2;
  
  this_00 = *(int * PTR32 *)(this + 0x1d8);
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1f0) + 4)));
  while ((this_00 != (int *)0x0 && (uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00), uVar2 != 2))) {
    this_00 = (int *)this_00[0x76];
  }
  F_009d7ab0(this_00,uVar1);
  uVar2 = *(uint *)(this + 0x1d0);
  if ((uVar2 & 0x40000) != 0) {
    return uVar2;
  }
  *(uint *)(this + 0x1d0) = uVar2 & 0xf81fffff | 0x40000;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_009d8540 */
uint F_009d8540(void)
{
  GEN_ENTER(0x9d8540u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  REFG(undefined1, 0x14a06d5) = 0;
  REFG(undefined1, 0x14a06d4) = 0;
  pvVar1 = (undefined *)F_004069f0(0x100);
  if (pvVar1 == (undefined *)0x0) {
    REFG(undefined4, 0x14a09a8) = 0;
  }
  else {
    REFG(undefined4, 0x14a09a8) = F_009cba80(pvVar1);
  }
  puVar2 = (undefined4 *)F_004069f0(0x170);
  if (puVar2 == (undefined4 *)0x0) {
    REFG(undefined4, 0x14a09a4) = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x10de6fc));
    puVar4 = &REFG(float, 0x1302d00);
    puVar5 = puVar2 + 4;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    F_00982d80(puVar2 + 4,0);
    *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x10defe0));
    REFG(undefined4, 0x14a09a4) = puVar2;
  }
  pvVar1 = (undefined *)F_004069f0(0x280);
  if (pvVar1 == (undefined *)0x0) {
    REFG(undefined4, 0x14a09a0) = 0;
  }
  else {
    REFG(undefined4, 0x14a09a0) = F_009d77f0(pvVar1);
  }
  pvVar1 = F_00c48350(&REFG(undefined4, 0x14a0720),0,0x280);
  return (uint)pvVar1;
}

/* ref: FUN_009d8600 */
uint F_009d8600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9d8600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  
  if ((-1 < (int)param_1) && (-1 < param_2)) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x1e0);
    while (0 < (int)param_1) {
      param_1 = param_1 - 1;
      if (this_00 == (undefined *)0x0) {
        return param_1;
      }
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1e8);
    }
    if (this_00 != (undefined *)0x0) {
      param_1 = F_009d7ab0(this_00,param_2 + -1);
    }
  }
  return param_1;
}

/* ref: FUN_009d8640 */
unsigned int F_009d8640(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d8640u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  int iVar2;
  int * in_edi;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  in_edi = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[0x77] + 0x2c))
                            ((int *)param_1[0x77],(int)*(short *)(param_4 + 2))));
  uVar3 = F_0097fa40(in_edi);
  uVar4 = ((code *)*(gen_code32 *)(*in_edi + 0x10))(in_edi);
  if (uVar4 != 0xffffffff) {
    piVar5 = (int *)param_1[0x77];
    iVar6 = *piVar5;
    uVar4 = ((code *)*(gen_code32 *)(*in_edi + 0x10))(in_edi);
    piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(iVar6 + 0x24))(piVar5,uVar4)));
    if (*(int *)(param_1[0x75] + 0x270) == 0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5);
      if (uVar4 != 3) {
        if (REFG(int, 0x14a09e8) != -1) {
          iVar6 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *(int *)(iVar6 + REFG(int, 0x14a09f4));
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
          iVar6 = iVar6 + REFG(int, 0x14a09f4);
          if (iVar6 != 0) {
            iVar1 = param_1[0x77];
            iVar2 = param_1[0x75];
            uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
            uVar3 = F_009d7230(iVar6,GEN_TOF(in_edi),iVar2,param_1,iVar1,(uint)in_edi,param_2,
                                 (float)(int)uVar3,param_3,uVar4);
            goto LAB_009d87d0;
          }
        }
        goto LAB_009d87ce;
      }
    }
    F_009d7bb0(param_1,param_3,param_2,(float)(int)uVar3);
    goto LAB_009d87d8;
  }
  if (REFG(int, 0x14a09e8) == -1) {
LAB_009d87ce: ;
    uVar3 = 0;
  }
  else {
    piVar5 = (int *)(REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4));
    REFG(int, 0x14a09e8) = *piVar5;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
    if (piVar5 == (int *)0x0) goto LAB_009d87ce;
    iVar6 = param_1[0x77];
    iVar1 = param_1[0x75];
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    uVar3 = F_009d7230(piVar5,GEN_TOF(in_edi),iVar1,param_1,iVar6,(uint)in_edi,param_2,(float)(int)uVar3,
                         param_3,uVar4);
  }
LAB_009d87d0: ;
  F_0097e5c0(param_1,uVar3);
LAB_009d87d8: ;
  uVar3 = param_1[0x74];
  uVar3 = (uVar3 - 1 ^ uVar3) & 0x1ff ^ uVar3;
  param_1[0x74] = ((uint)((uVar3 & 0x1ff) == 0) * 0x20000000 ^ uVar3) & 0x20000000 ^ uVar3;
  return 0;
}

/* ref: FUN_009d8820 */
unsigned int F_009d8820(unsigned int gen_a0)
{
  GEN_ENTER(0x9d8820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  uint uVar3;
  byte * pbVar4;
  uint uVar5;
  int iVar6;
  
  if ((*(uint *)((int)this + 0x1d0) >> 0x13 & 1) == 0) {
    fVar1 = *(float *)((int)this + 0x1a8);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f0) + 4))))(*(int * PTR32 *)((int)this + 0x1f0));
    iVar6 = 0;
    uVar5 = 1;
    if (0 < (int)uVar3) {
      do {
        if ((*(uint *)((int)this + 500) & uVar5) == 0) {
          pbVar4 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f0) + 8))))
                                     (*(int * PTR32 *)((int)this + 0x1f0),iVar6)));
          fVar2 = ((float)GEN_TOF(((float10)fVar1 - (float10)(int)(*(short *)((int)(uintptr_t)pbVar4) >> 2))));
          if (!((float10)fVar2 < (float10)0)) {
            *(uint *)((int)this + 500) = *(uint *)((int)this + 500) | uVar5;
            if (*(int *)((int)this + 500) == -1) {
              *(gen_code32 *)((int)this + 0x1ec) = ((code *)REFP(0x97fac0));
            }
            if ((*pbVar4 & 3) != 0) {
              F_009d8640(this,fVar2,iVar6,pbVar4);
            }
          }
        }
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      } while (iVar6 < (int)uVar3);
    }
  }
  return 0;
}

/* ref: FUN_009d88e0 */
uint F_009d88e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9d88e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  uint uVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  F_0099a240(param_1,param_2,param_3,param_4,param_6,param_7,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7c] = param_5;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10e0b04));
  param_1[0x7b] = ((code *)REFP(0x9d8820));
  param_1[0x7d] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[1] = *param_8;
  param_1[2] = param_8[1];
  param_1[3] = param_8[2];
  param_1[4] = param_8[3];
  param_1[5] = param_8[4];
  param_1[6] = param_8[5];
  param_1[7] = param_8[6];
  param_1[8] = param_8[7];
  param_1[9] = param_8[8];
  param_1[10] = param_8[9];
  param_1[0xb] = param_8[10];
  param_1[0xc] = param_8[0xb];
  uVar1 = ((code *)*(gen_code32 *)(*(int *)param_1[0x7c] + 4))((int *)param_1[0x7c]);
  iVar4 = 0;
  param_7 = 0.0;
  uVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      pbVar2 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[0x7c] + 8))((int *)param_1[0x7c],iVar4)));
      if ((*pbVar2 & 3) != 0) {
        param_1[0x7d] = param_1[0x7d] & ~uVar3;
        param_7 = gen_bits2f((int)gen_fl2bits(param_7) + 1);
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while (iVar4 < (int)uVar1);
  }
  uVar3 = (param_1[0x74] ^ (uint)gen_fl2bits(param_7)) & 0x1ff ^ param_1[0x74];
  param_1[0x74] = ((uint)((uVar3 & 0x1ff) == 0) * 0x20000000 ^ uVar3) & 0x20000000 ^ uVar3;
  return (uint)param_1;
}

/* ref: FUN_009d8d50 */
uint F_009d8d50(unsigned int gen_a0)
{
  GEN_ENTER(0x9d8d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * psVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  uint local_c;
  int local_8;
  
  if (*((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000))) != 0) {
    uVar8 = 0;
    do {
      iVar5 = *(int *)((int)this + 0x158);
      iVar2 = (uint)uVar8 * 2 + 0x39000;
      iVar7 = (uint)*(ushort *)(iVar5 + iVar2) * 0x68;
      if (*(int *)(iVar7 + 0x103c + iVar5) == 3) {
        puVar4 = *(undefined4 * PTR32 *)(iVar7 + iVar5 + 0x1030);
        if (puVar4 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
        }
        iVar5 = *(int *)((int)this + 0x158);
        *(undefined2 *)(iVar5 + iVar2) =
             *((undefined2 *)GEN_TOP((iVar5 + 0x38ffe + (uint)*(ushort *)(iVar5 + 0x3a000) * 2)));
        psVar1 = ((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
        *psVar1 = *psVar1 + -1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
    } while (uVar8 < *((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000))));
  }
  local_c = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
  uVar6 = 0;
  if (local_c != 0) {
    local_8 = 0x39000;
    do {
      iVar5 = *(int *)((int)this + 0x158);
      uVar8 = *(ushort *)(local_8 + iVar5);
      iVar2 = (uint)uVar8 * 0x68 + 0x1000 + iVar5;
      bVar3 = *(byte *)(iVar2 + 0x62);
      uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),bVar3);
      if ((bVar3 & 8) != 0) {
        if ((bVar3 & 4) == 0) {
          if (*(int *)(iVar2 + 0x3c) == 4) {
            puVar4 = *(undefined4 * PTR32 *)(iVar2 + 0x30);
            if (puVar4 != (undefined4 *)0x0) {
              ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
            }
            if (REFG(int, 0x14a09e8) == -1) {
LAB_009d8e8f: ;
              uVar6 = 0;
            }
            else {
              iVar5 = REFG(int, 0x14a09e8) * 0x400;
              REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar5);
              REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
              iVar5 = REFG(int, 0x14a09f4) + iVar5;
              if (iVar5 == 0) goto LAB_009d8e8f;
              uVar6 = F_009d8a20(iVar5,*(undefined4 *)(iVar2 + 0x34),*(uint *)(iVar2 + 0x38),
                                   (uint)uVar8,iVar2);
            }
            *(uint *)(iVar2 + 0x30) = uVar6;
            uVar6 = F_0098b780(uVar6,iVar2 + 0x48);
            *(undefined4 *)(iVar2 + 0x3c) = 2;
            if ('\0' < (char)*(byte *)(iVar2 + 0x5e)) {
              *(short *)(iVar2 + 0x60) = 1 << (*(byte *)(iVar2 + 0x5e) & 0x1f);
            }
          }
        }
        else {
          *(undefined4 *)(iVar2 + 0x3c) = 4;
        }
      }
      local_8 = local_8 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return uVar6;
}

/* ref: FUN_009d8ed0 */
uint F_009d8ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d8ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  uint local_c;
  int local_8;
  
  local_c = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
  uVar4 = 0;
  if (local_c != 0) {
    local_8 = 0x39000;
    do {
      iVar3 = *(int *)((int)this + 0x158);
      uVar1 = *(ushort *)(local_8 + iVar3);
      iVar5 = (uint)uVar1 * 0x68;
      puVar2 = *(undefined4 * PTR32 *)(iVar5 + 0x1030 + iVar3);
      iVar5 = iVar5 + 0x1000 + iVar3;
      uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),*(ushort *)(puVar2 + 0xeb) >> 0xe);
      if ((*(ushort *)(puVar2 + 0xeb) >> 0xe & 1) != 0) {
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
        if (REFG(int, 0x14a09e8) == -1) {
LAB_009d8f74: ;
          uVar4 = 0;
        }
        else {
          iVar3 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar3);
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + -1;
          iVar3 = REFG(int, 0x14a09f4) + iVar3;
          if (iVar3 == 0) goto LAB_009d8f74;
          uVar4 = F_009d8a20(iVar3,*(undefined4 *)(iVar5 + 0x34),*(uint *)(iVar5 + 0x38),
                               (uint)uVar1,iVar5);
        }
        *(uint *)(iVar5 + 0x30) = uVar4;
        uVar4 = F_0098b780(uVar4,iVar5 + 0x48);
        *(undefined1 *)(iVar5 + 0x5e) = 0;
        *(undefined2 *)(iVar5 + 0x60) = 0;
      }
      if (*(int *)(iVar5 + 0x3c) != 4) {
        if (*(short *)(iVar5 + 0x60) != 0) {
          uVar6 = 0;
          uVar4 = 1;
          do {
            if ((((uVar4 & *(ushort *)(iVar5 + 0x60)) != 0) && (-1 < (int)uVar6)) &&
               (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar5 + 0x30) + 0x1e0))), this_00 != (undefined *)0x0)) {
              F_009d7ab0(this_00,uVar6 - 1);
            }
            uVar6 = uVar6 + 1;
            uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
          } while (uVar6 < 0x10);
          *(undefined2 *)(iVar5 + 0x60) = 0;
        }
        if ((*((ushort *)GEN_TOP((*(int * PTR32 *)(iVar5 + 0x30) + 0xeb))) >> 10 & 1) == 0) {
          fVar7 = (float10)*(float *)((int)this + 0x160) * (float10)*(float *)(iVar5 + 0x58);
        }
        else {
          fVar7 = (float10)0;
        }
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar5 + 0x30) + 0x28))))
                          ((undefined4)gen_fl2bits((float)fVar7));
      }
      local_8 = local_8 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return uVar4;
}

/* ref: FUN_009d9020 */
uint F_009d9020(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9d9020u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar3 = (float10)*(int *)((int)param_1 + 0x15c);
  if (*(int *)((int)param_1 + 0x15c) < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(undefined4 *)((int)param_1 + 0x1568) = 0;
  *(undefined4 *)((int)param_1 + 0x1164) = 0;
  *(float *)((int)param_1 + 0x160) = ((float)GEN_TOF((((float10)param_2 * fVar1) / fVar3)));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x150) + 0x68))))(*(int * PTR32 *)((int)param_1 + 0x150));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x150) + 0x50))))(*(int * PTR32 *)((int)param_1 + 0x150));
  F_009789e0(param_1);
  F_009d8d50(param_1);
  uVar2 = F_009d8ed0(param_1);
  return uVar2;
}

/* ref: FUN_009d9090 */
uint F_009d9090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d9090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  short * psVar1;
  undefined4 * puVar2;
  byte * pbVar3;
  int * piVar4;
  undefined4 uVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x150);
  ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
  if (0xf < REFG(undefined4, 0x14a09f0)) {
    iVar9 = 0;
    piVar6 = ((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1030)));
    do {
      if (*piVar6 == 0) {
        if (REFG(int, 0x14a09e8) != -1) {
          iVar7 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *(int *)(REFG(int, 0x14a09f4) + iVar7);
          REFG(undefined4, 0x14a09f0) = REFG(undefined4, 0x14a09f0) - 1;
          iVar7 = REFG(int, 0x14a09f4) + iVar7;
          if (iVar7 != 0) {
            uVar8 = F_009d8a20(iVar7,param_1,param_2,iVar9,param_3);
            goto LAB_009d912f;
          }
        }
        uVar8 = 0;
LAB_009d912f: ;
        piVar6 = (int *)((int)this + 0x1570);
        *piVar6 = *piVar6 + 1;
        if (*piVar6 == 0) {
          *(undefined4 *)((int)this + 0x1570) = 1;
        }
        iVar10 = iVar9 * 0x68;
        *((uint *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1030 + iVar10))) = uVar8;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1034 + iVar10))) = param_1;
        *((uint *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1038 + iVar10))) = param_2;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x103c + iVar10))) = 1;
        uVar5 = REFG(float, 0x1087f04);
        puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1000 + iVar10)));
        *puVar2 = *param_3;
        puVar2[1] = param_3[1];
        puVar2[2] = param_3[2];
        puVar2[3] = param_3[3];
        puVar2[4] = param_3[4];
        puVar2[5] = param_3[5];
        puVar2[6] = param_3[6];
        puVar2[7] = param_3[7];
        puVar2[8] = param_3[8];
        puVar2[9] = param_3[9];
        puVar2[10] = param_3[10];
        puVar2[0xb] = param_3[0xb];
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1060 + iVar10))) = 0;
        *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x105e + iVar10))) = 0;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1058 + iVar10))) = uVar5;
        iVar7 = *(int *)((int)this + 0x158);
        *(undefined4 *)(iVar7 + 0x1048 + iVar10) = uVar5;
        *(undefined4 *)(iVar7 + 0x104c + iVar10) = uVar5;
        *(undefined4 *)(iVar7 + 0x1050 + iVar10) = uVar5;
        *(undefined4 *)(iVar7 + 0x1054 + iVar10) = uVar5;
        pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 | 1;
        pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 & 0xfd;
        pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 & 0xfb;
        uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar8 + 0x1dc) + 0xdc))))(*(int * PTR32 *)(uVar8 + 0x1dc));
        pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 ^ ((char)uVar8 << 3 ^
                            *((byte *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1062 + iVar10)))) & 8;
        *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1044 + iVar10))) = iVar9;
        *((undefined4 *)GEN_TOP(((iVar9 + 0x28) * 0x68 + *(int *)((int)this + 0x158)))) =
             *(undefined4 *)((int)this + 0x1570);
        *((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a002 +
                  (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3b002))) * 2))) = (short)iVar9;
        psVar1 = ((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3b002)));
        *psVar1 = *psVar1 + 1;
        iVar9 = *(int *)((int)this + 0x158);
        ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
        return iVar9 + 0x1000 + iVar10;
      }
      iVar9 = iVar9 + 1;
      piVar6 = piVar6 + 0x1a;
    } while (iVar9 < 0x800);
  }
  ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
  return 0;
}

/* ref: FUN_009d9320 */
uint F_009d9320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9d9320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 != 0) {
    if (param_5 == (undefined4 *)0x0) {
      (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x132f428);
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x132f42c);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x132f430);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x132f434);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x132f438);
      (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x132f43c);
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x132f440);
      (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x132f444);
      (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x132f448);
      (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x132f44c);
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x132f450);
      (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x132f454);
    }
    else {
      (*(undefined4 *)(gen_frame + 0xc)) = *param_5;
      (*(undefined4 *)(gen_frame + 0x10)) = param_5[1];
      (*(undefined4 *)(gen_frame + 0x14)) = param_5[2];
      (*(undefined4 *)(gen_frame + 0x18)) = param_5[4];
      (*(undefined4 *)(gen_frame + 0x1c)) = param_5[5];
      (*(undefined4 *)(gen_frame + 0x20)) = param_5[6];
      (*(undefined4 *)(gen_frame + 0x24)) = param_5[8];
      (*(undefined4 *)(gen_frame + 0x28)) = param_5[9];
      (*(undefined4 *)(gen_frame + 0x2c)) = param_5[10];
      (*(undefined4 *)(gen_frame + 0x30)) = param_5[0xc];
      (*(undefined4 *)(gen_frame + 0x34)) = param_5[0xd];
      (*(undefined4 *)(gen_frame + 0x38)) = param_5[0xe];
    }
    uVar3 = F_009d9090(param_1,param_3,param_4,&(*(undefined4 *)(gen_frame + 0xc)));
    if (uVar3 != 0) {
      *(float *)(uVar3 + 0x58) = param_6;
      *(undefined1 *)(uVar3 + 0x5c) = (undefined1)param_8;
      *(undefined1 *)(uVar3 + 0x5d) = (undefined1)param_9;
      if (*(int *)(uVar3 + 0x30) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x30) + 0x270)));
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,uVar3);
        }
        iVar4 = (int)param_7;
        if (0 < iVar4) {
          do {
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x30) + 0x24))))
                      ((undefined4)gen_fl2bits((float)(float10)1));
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      uVar2 = *(undefined4 *)(uVar3 + 0x40);
      param_2[1] = *(undefined4 *)(uVar3 + 0x44);
      *param_2 = uVar2;
      return (uint)param_2;
    }
  }
  param_2[1] = 0;
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_009d94e0 */
uint F_009d94e0(float gen_a0)
{
  GEN_ENTER(0x9d94e0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_009d9020(&REFG(float, 0x14a0d58),param_1);
  return uVar1;
}

/* ref: FUN_009d9520 */
ulonglong F_009d9520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9d9520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong * puVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  puVar1 = (ulonglong *)
           F_009d9320(&REFG(float, 0x14a0d58),((undefined1 *)(gen_frame + 0x4)),param_1,param_2,param_3,param_4,param_5,param_6,
                        param_7);
  return *puVar1;
}

/* ref: FUN_009d9590 */
unsigned int F_009d9590(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((*(byte *)((int)this + 0x96) & 1) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8)));
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar3 == 1) {
      F_009a4cc0(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54));
      uVar4 = F_009d9520(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x60))),
                           *(undefined4 *)((int)this + 0x48),this,*(float *)((int)this + 0x58),
                           *(float *)((int)this + 0x5c),(uint)*(byte *)((int)this + 0x94),
                           (uint)*(byte *)((int)this + 0x95));
      *(ulonglong *)((int)this + 0x50) = uVar4;
      F_009a4e20((int)uVar4,(int)(uVar4 >> 0x20),(uint)(*(byte *)((int)this + 0x96) >> 2 & 1));
      F_009a4e90(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                   (uint)(*(byte *)((int)this + 0x96) >> 3 & 1));
      F_009a4f70(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                   *(float *)((int)this + 0x80),*(float *)((int)this + 0x84),
                   *(float *)((int)this + 0x88),*(float *)((int)this + 0x8c));
      F_009a5020(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                   *(float *)((int)this + 0x60));
      F_009a50b0(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),
                   *(float *)((int)this + 100));
      if ((*(byte *)((int)this + 0x96) & 2) != 0) {
        F_009a4d50(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54));
        *(byte *)((int)this + 0x96) = *(byte *)((int)this + 0x96) & 0xfd;
      }
      iVar3 = 0;
      uVar2 = 1;
      do {
        if ((*(uint *)((int)this + 0x90) & uVar2) != 0) {
          F_009a4f00(*(undefined4 *)((int)this + 0x50),*(undefined4 *)((int)this + 0x54),0,iVar3);
        }
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
      } while (iVar3 < 0x20);
      piVar1 = *(int * PTR32 *)((int)this + 0x44);
      *(byte *)((int)this + 0x96) = *(byte *)((int)this + 0x96) & 0xfe;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this);
      }
    }
  }
  return 0;
}

/* ref: FUN_009d9700 */
uint F_009d9700(void)
{
  GEN_ENTER(0x9d9700u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x12020];
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined * this;
  int * piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int * piVar11;
  float10 fVar12;
  
  uVar8 = 0x2014;
  (*(int *)(gen_frame + 0x12018)) = 0x9d970d;
  if (REFG(char, 0x14a06d5) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
    piVar11 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x14a0a70)));
    iVar9 = 0;
    (*(int *)(gen_frame + 0x12018)) = 0;
    if (piVar11 != REFG(undefined4, 0x14a0a70)) {
      do {
        iVar10 = *(int *)(piVar11[3] + 0x174);
        if (((iVar10 == 0) ||
            ((bVar7 = F_009a4da0(*(undefined4 *)(iVar10 + 0x50),*(undefined4 *)(iVar10 + 0x54)),
             iVar9 = (*(int *)(gen_frame + 0x12018)), bVar7 == 0 && ((*(byte *)(iVar10 + 0x96) & 1) == 0)))) &&
           (iVar9 < 0x800)) {
          ((int *)(gen_frame + 0x10008))[iVar9] = piVar11[3];
          (*(int *)(gen_frame + 0x12018)) = iVar9 + 1;
          iVar9 = iVar9 + 1;
        }
        if (*(char *)((int)piVar11 + 0x11) == '\0') {
          piVar4 = (int *)piVar11[2];
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            cVar3 = *(char *)(*piVar4 + 0x11);
            piVar11 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar4 + 0x11);
              piVar11 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar3 = *(char *)(piVar11[1] + 0x11);
            piVar6 = (int *)piVar11[1];
            piVar4 = piVar11;
            while ((piVar11 = piVar6, cVar3 == '\0' && (piVar4 == (int *)piVar11[2]))) {
              cVar3 = *(char *)(piVar11[1] + 0x11);
              piVar6 = (int *)piVar11[1];
              piVar4 = piVar11;
            }
          }
        }
      } while (piVar11 != REFG(undefined4, 0x14a0a70));
    }
    iVar10 = 0;
    if (0 < iVar9) {
      do {
        puVar5 = (undefined4 *)((int *)(gen_frame + 0x10008))[iVar10];
        if (puVar5 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
          iVar9 = (*(int *)(gen_frame + 0x12018));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    piVar11 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x14a0a80)));
    (*(int *)(gen_frame + 0x12018)) = 0;
    if (piVar11 != REFG(undefined4, 0x14a0a80)) {
      do {
        F_009d9590((undefined *)piVar11[3]);
        iVar9 = piVar11[3];
        if ((*(byte *)(iVar9 + 0x96) & 0x10) != 0) {
          uVar8 = *(uint *)(iVar9 + 0x54);
          (*(float *)(gen_frame + 0x12010)) = gen_bits2f(iVar9);
          (*(int *)(gen_frame + 0x12008)) = *(int *)(iVar9 + 0x50);
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58));
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          if ((((((0x7ff < uVar8) || ((*(int *)(gen_frame + 0x12008)) == 0)) ||
                (iVar10 = uVar8 * 0x68, iVar9 = iVar10 + 0x1000 + REFG(int, 0x14a0eb0),
                *(int *)(iVar10 + 0x1040 + REFG(int, 0x14a0eb0)) != (*(int *)(gen_frame + 0x12008)))) ||
               (iVar10 = *(int *)(iVar9 + 0x3c), iVar10 == 3)) ||
              ((iVar10 != 4 &&
               ((iVar9 = *(int *)(iVar9 + 0x30), iVar9 == 0 ||
                (((*(uint *)(iVar9 + 0x1d0) & 0x40000) != 0 && (*(int *)(iVar9 + 0x1e0) == 0))))))))
             && ((*(byte *)((int)gen_fl2bits((*(float *)(gen_frame + 0x12010))) + 0x96) & 1) == 0)) {
            ((int *)(gen_frame + 0x10008))[(*(int *)(gen_frame + 0x12018))] = piVar11[3];
            (*(int *)(gen_frame + 0x12018)) = (*(int *)(gen_frame + 0x12018)) + 1;
          }
        }
        if (*(char *)((int)piVar11 + 0x11) == '\0') {
          piVar4 = (int *)piVar11[2];
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            cVar3 = *(char *)(*piVar4 + 0x11);
            piVar11 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar4 + 0x11);
              piVar11 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar3 = *(char *)(piVar11[1] + 0x11);
            piVar6 = (int *)piVar11[1];
            piVar4 = piVar11;
            while ((piVar11 = piVar6, cVar3 == '\0' && (piVar4 == (int *)piVar11[2]))) {
              cVar3 = *(char *)(piVar11[1] + 0x11);
              piVar6 = (int *)piVar11[1];
              piVar4 = piVar11;
            }
          }
        }
      } while (piVar11 != REFG(undefined4, 0x14a0a80));
    }
    iVar9 = 0;
    if (0 < (*(int *)(gen_frame + 0x12018))) {
      do {
        this = (undefined *)((int *)(gen_frame + 0x10008))[iVar9];
        if (this != (undefined *)0x0) {
          F_009cfa70(this);
          F_00406ad0(this);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (*(int *)(gen_frame + 0x12018)));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
    (*(bool *)(gen_frame + 0x12014)) = *(int *)(REFG(int, 0x1371298) + 0x30) == 0;
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    iVar9 = REFG(int, 0x14a09a8);
    REFG(undefined1, 0x14a22cc) = (*(bool *)(gen_frame + 0x12014));
    if ((REFG(int, 0x137104c) != 0) &&
       (uVar8 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x6f), iVar10 = REFG(int, 0x1371298),
       *(int *)(uVar8 + 0x14) != 0)) {
      uVar1 = *(undefined4 *)(iVar9 + 0xd8);
      uVar2 = *(undefined4 *)(iVar9 + 0xdc);
      *(undefined4 *)(REFG(int, 0x1371298) + 0x10) = *(undefined4 *)(iVar9 + 0xd4);
      *(undefined4 *)(iVar10 + 0x14) = uVar1;
      *(undefined4 *)(iVar10 + 0x18) = uVar2;
      iVar10 = REFG(int, 0x1371298);
      uVar1 = *(undefined4 *)(iVar9 + 0xe4);
      uVar2 = *(undefined4 *)(iVar9 + 0xe8);
      *(undefined4 *)(REFG(int, 0x1371298) + 0x20) = *(undefined4 *)(iVar9 + 0xe0);
      *(undefined4 *)(iVar10 + 0x24) = uVar1;
      *(undefined4 *)(iVar10 + 0x28) = uVar2;
    }
    (*(float *)(gen_frame + 0x12010)) = REFG(float, 0x14a0718);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58));
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    fVar12 = (float10)REFG(int, 0x14a0eb4);
    if (REFG(int, 0x14a0eb4) < 0) {
      fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    REFG(undefined4, 0x14a22c0) = 0;
    REFG(undefined4, 0x14a1ebc) = 0;
    *(float *)&REFG(undefined, 0x14a0eb8) =
         ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x12010)) * (float10)*(double *)&REFG(undefined, 0x10943d8)) / fVar12)));
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x68))))(REFG(undefined4, 0x14a0ea8));
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x50))))(REFG(undefined4, 0x14a0ea8));
    F_009789e0(&REFG(float, 0x14a0d58));
    F_009d8d50(&REFG(float, 0x14a0d58));
    uVar8 = F_009d8ed0(&REFG(float, 0x14a0d58));
  }
  return uVar8;
}

/* ref: Apricot::Engine::Data::Communicator::Model::vf1 */
uint F_009d9b20(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9b20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Texture::vf1 */
uint F_009d9b60(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf1 */
uint F_009d9ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(in_ecx + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &REFG(undefined4, 0x14a0a38);
  }
  return (uint)puVar1;
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf2 */
uint F_009d9cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(uint * PTR32 *)(in_ecx + 4) == (uint *)0x0) {
    return (REFG(undefined4, 0x14a0a38) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
  }
  return (**(uint * PTR32 *)(in_ecx + 4) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf1 */
uint F_009d9d60(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9d60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf2 */
uint F_009d9d70(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9d70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Apricot::Engine::Data::Communicator::LaserParticle::vf1 */
uint F_009d9e00(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9e00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::LaserParticle::vf2 */
uint F_009d9e10(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::PolygonParticle::vf1 */
uint F_009d9e60(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf1 */
uint F_009d9ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf2 */
unsigned int F_009d9ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf3 */
unsigned int F_009d9ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf1 */
uint F_009d9f10(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf2 */
byte F_009d9f20(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x18) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf3 */
byte F_009d9f30(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x19) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf4 */
byte F_009d9f40(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x1a) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf5 */
uint F_009d9f50(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1b);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf6 */
uint F_009d9f60(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf7 */
uint F_009d9f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9d9f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf8 */
uint F_009d9f80(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf9 */
uint F_009d9f90(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf10 */
uint F_009d9fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9fa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf11 */
uint F_009d9fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9fb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf2 */
uint F_009d9fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9d9fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = param_2;
  return param_1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf3 */
uint F_009d9fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf4 */
uint F_009d9ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x9d9ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf17 */
uint F_009da000(unsigned int gen_a0)
{
  GEN_ENTER(0x9da000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf18 */
unsigned int F_009da010(unsigned int gen_a0)
{
  GEN_ENTER(0x9da010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x9c) = *(int *)(in_ecx + 0x9c) + 1;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf19 */
unsigned int F_009da020(unsigned int gen_a0)
{
  GEN_ENTER(0x9da020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x9c) = *(int *)(in_ecx + 0x9c) + -1;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf33 */
unsigned int F_009da030(unsigned int gen_a0)
{
  GEN_ENTER(0x9da030u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf34 */
unsigned int F_009da040(unsigned int gen_a0)
{
  GEN_ENTER(0x9da040u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf35 */
unsigned int F_009da050(unsigned int gen_a0)
{
  GEN_ENTER(0x9da050u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf36 */
unsigned int F_009da060(unsigned int gen_a0)
{
  GEN_ENTER(0x9da060u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf37 */
unsigned int F_009da070(unsigned int gen_a0)
{
  GEN_ENTER(0x9da070u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf38 */
unsigned int F_009da080(unsigned int gen_a0)
{
  GEN_ENTER(0x9da080u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf39 */
unsigned int F_009da090(unsigned int gen_a0)
{
  GEN_ENTER(0x9da090u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf40 */
unsigned int F_009da0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf41 */
unsigned int F_009da0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0b0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf42 */
unsigned int F_009da0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf43 */
unsigned int F_009da0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf44 */
unsigned int F_009da0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf45 */
unsigned int F_009da0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da0f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf46 */
unsigned int F_009da100(unsigned int gen_a0)
{
  GEN_ENTER(0x9da100u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf47 */
unsigned int F_009da110(unsigned int gen_a0)
{
  GEN_ENTER(0x9da110u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf48 */
unsigned int F_009da120(unsigned int gen_a0)
{
  GEN_ENTER(0x9da120u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf49 */
unsigned int F_009da130(unsigned int gen_a0)
{
  GEN_ENTER(0x9da130u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf50 */
unsigned int F_009da140(unsigned int gen_a0)
{
  GEN_ENTER(0x9da140u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf28 */
uint F_009da150(unsigned int gen_a0)
{
  GEN_ENTER(0x9da150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf29 */
unsigned int F_009da160(unsigned int gen_a0)
{
  GEN_ENTER(0x9da160u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf30 */
unsigned int F_009da170(unsigned int gen_a0)
{
  GEN_ENTER(0x9da170u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf31 */
unsigned int F_009da180(unsigned int gen_a0)
{
  GEN_ENTER(0x9da180u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf32 */
unsigned int F_009da190(unsigned int gen_a0)
{
  GEN_ENTER(0x9da190u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf51 */
uint F_009da1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf52 */
uint F_009da1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf53 */
uint F_009da1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf54 */
uint F_009da1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf55 */
uint F_009da1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 5 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf56 */
unsigned int F_009da1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da1f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf57 */
unsigned int F_009da200(unsigned int gen_a0)
{
  GEN_ENTER(0x9da200u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf58 */
uint F_009da210(unsigned int gen_a0)
{
  GEN_ENTER(0x9da210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 6 & 0x1f;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf59 */
uint F_009da220(unsigned int gen_a0)
{
  GEN_ENTER(0x9da220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 0xb & 0x1ff;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf60 */
uint F_009da230(unsigned int gen_a0)
{
  GEN_ENTER(0x9da230u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 0x14 & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf61 */
uint F_009da240(unsigned int gen_a0)
{
  GEN_ENTER(0x9da240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x3b) & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf62 */
uint F_009da250(unsigned int gen_a0)
{
  GEN_ENTER(0x9da250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38) >> 0x1c;
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf1 */
uint F_009da260(unsigned int gen_a0)
{
  GEN_ENTER(0x9da260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf2 */
uint F_009da270(unsigned int gen_a0)
{
  GEN_ENTER(0x9da270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 9);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf3 */
uint F_009da280(unsigned int gen_a0)
{
  GEN_ENTER(0x9da280u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf4 */
byte F_009da290(unsigned int gen_a0)
{
  GEN_ENTER(0x9da290u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xb) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf5 */
byte F_009da2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xc) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf6 */
uint F_009da2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf7 */
uint F_009da2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf8 */
uint F_009da2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf9 */
uint F_009da2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf10 */
uint F_009da2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da2f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf11 */
uint F_009da300(unsigned int gen_a0)
{
  GEN_ENTER(0x9da300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf12 */
uint F_009da310(unsigned int gen_a0)
{
  GEN_ENTER(0x9da310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Model::vf1 */
uint F_009da320(unsigned int gen_a0)
{
  GEN_ENTER(0x9da320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf1 */
uint F_009da330(unsigned int gen_a0)
{
  GEN_ENTER(0x9da330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf2 */
uint F_009da340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf3 */
uint F_009da350(unsigned int gen_a0)
{
  GEN_ENTER(0x9da350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0xd);
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf4 */
uint F_009da360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 8) + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Runtime::Texture::vf1 */
uint F_009da370(unsigned int gen_a0)
{
  GEN_ENTER(0x9da370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf1 */
uint F_009da380(unsigned int gen_a0)
{
  GEN_ENTER(0x9da380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) >> 0x10 | (*(uint *)(in_ecx + 0xc) & 0xff) << 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf2 */
uint F_009da3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)((ulonglong)*(undefined8 *)(this + 8) >> 0x28);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf3 */
uint F_009da3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) & 0xff;
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf4 */
uint F_009da3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da3d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf5 */
uint F_009da3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da3e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2a + *(int *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf6 */
uint F_009da3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da3f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa4 + *(int *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf1 */
uint F_009da410(unsigned int gen_a0)
{
  GEN_ENTER(0x9da410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf2 */
uint F_009da420(unsigned int gen_a0)
{
  GEN_ENTER(0x9da420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (**(uint * PTR32 *)(in_ecx + 4) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf1 */
unsigned int F_009da450(unsigned int gen_a0)
{
  GEN_ENTER(0x9da450u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf2 */
unsigned int F_009da460(unsigned int gen_a0)
{
  GEN_ENTER(0x9da460u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf1 */
uint F_009da470(unsigned int gen_a0)
{
  GEN_ENTER(0x9da470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf2 */
uint F_009da480(unsigned int gen_a0)
{
  GEN_ENTER(0x9da480u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf3 */
uint F_009da490(unsigned int gen_a0)
{
  GEN_ENTER(0x9da490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf4 */
uint F_009da4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf5 */
uint F_009da4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf6 */
uint F_009da4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf7 */
uint F_009da4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf8 */
byte F_009da4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(ushort *)(in_ecx + 4) & 0x380) != 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf9 */
byte F_009da500(unsigned int gen_a0)
{
  GEN_ENTER(0x9da500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(ushort *)(in_ecx + 4) & 0xc00) != 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf10 */
uint F_009da520(unsigned int gen_a0)
{
  GEN_ENTER(0x9da520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 0xc & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf11 */
uint F_009da530(unsigned int gen_a0)
{
  GEN_ENTER(0x9da530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(ushort *)(in_ecx + 4) >> 0xe);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf12 */
uint F_009da540(unsigned int gen_a0)
{
  GEN_ENTER(0x9da540u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 6) & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf1 */
uint F_009da550(unsigned int gen_a0)
{
  GEN_ENTER(0x9da550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf2 */
uint F_009da560(unsigned int gen_a0)
{
  GEN_ENTER(0x9da560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf3 */
uint F_009da570(unsigned int gen_a0)
{
  GEN_ENTER(0x9da570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf4 */
uint F_009da580(unsigned int gen_a0)
{
  GEN_ENTER(0x9da580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf11 */
uint F_009da590(unsigned int gen_a0)
{
  GEN_ENTER(0x9da590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf5 */
uint F_009da5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf6 */
uint F_009da5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 7 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf7 */
uint F_009da5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 10 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf8 */
uint F_009da5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 0xc & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf9 */
uint F_009da5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(ushort *)(in_ecx + 4) >> 0xe);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf10 */
uint F_009da5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da5f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 6) & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf2 */
uint F_009da600(unsigned int gen_a0)
{
  GEN_ENTER(0x9da600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf3 */
uint F_009da610(unsigned int gen_a0)
{
  GEN_ENTER(0x9da610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf4 */
uint F_009da620(unsigned int gen_a0)
{
  GEN_ENTER(0x9da620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf5 */
uint F_009da630(unsigned int gen_a0)
{
  GEN_ENTER(0x9da630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 6 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf6 */
uint F_009da640(unsigned int gen_a0)
{
  GEN_ENTER(0x9da640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 8 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf7 */
uint F_009da650(unsigned int gen_a0)
{
  GEN_ENTER(0x9da650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf2 */
uint F_009da660(unsigned int gen_a0)
{
  GEN_ENTER(0x9da660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf3 */
uint F_009da670(unsigned int gen_a0)
{
  GEN_ENTER(0x9da670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf4 */
uint F_009da680(unsigned int gen_a0)
{
  GEN_ENTER(0x9da680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) >> 2 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf5 */
uint F_009da690(unsigned int gen_a0)
{
  GEN_ENTER(0x9da690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(byte *)(in_ecx + 4) >> 5);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf6 */
uint F_009da6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf2 */
uint F_009da6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf3 */
uint F_009da6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf4 */
uint F_009da6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf5 */
uint F_009da6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf6 */
uint F_009da6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf7 */
uint F_009da700(unsigned int gen_a0)
{
  GEN_ENTER(0x9da700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 5 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf8 */
uint F_009da710(unsigned int gen_a0)
{
  GEN_ENTER(0x9da710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 8 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf9 */
uint F_009da720(unsigned int gen_a0)
{
  GEN_ENTER(0x9da720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 10 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf10 */
uint F_009da730(unsigned int gen_a0)
{
  GEN_ENTER(0x9da730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 4) >> 0xc & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf11 */
uint F_009da740(unsigned int gen_a0)
{
  GEN_ENTER(0x9da740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf2 */
uint F_009da750(unsigned int gen_a0)
{
  GEN_ENTER(0x9da750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf3 */
uint F_009da760(unsigned int gen_a0)
{
  GEN_ENTER(0x9da760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) >> 1 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf4 */
uint F_009da770(unsigned int gen_a0)
{
  GEN_ENTER(0x9da770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf1 */
uint F_009da780(unsigned int gen_a0)
{
  GEN_ENTER(0x9da780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf2 */
uint F_009da790(unsigned int gen_a0)
{
  GEN_ENTER(0x9da790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1c;
}

/* ref: Apricot::Engine::Data::Runtime::LightModelParticle::vf1 */
uint F_009da7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::PolygonParticle::vf1 */
uint F_009da7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf1 */
byte F_009da7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 4) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf2 */
uint F_009da7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf3 */
unsigned int F_009da7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::WindmillParticle::vf1 */
uint F_009da7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9da7f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::DecalParticle::vf1 */
unsigned int F_009da800(unsigned int gen_a0)
{
  GEN_ENTER(0x9da800u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf1 */
uint F_009da810(unsigned int gen_a0)
{
  GEN_ENTER(0x9da810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf2 */
unsigned int F_009da820(unsigned int gen_a0)
{
  GEN_ENTER(0x9da820u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf3 */
unsigned int F_009da830(unsigned int gen_a0)
{
  GEN_ENTER(0x9da830u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_009da840 */
uint F_009da840(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x9da840u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = REFG(float, 0x1087f04);
  *in_ecx = (float)fVar3;
  in_ecx[8] = (float)fVar2;
  in_ecx[1] = 0.0;
  in_ecx[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  in_ecx[3] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[5] = fVar1;
  in_ecx[6] = 0.0;
  in_ecx[7] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[10] = (float)fVar3;
  in_ecx[0xb] = 0.0;
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[0xe] = 0.0;
  in_ecx[0xf] = fVar1;
  return (uint)in_ecx;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf1 */
unsigned int F_009da8e0(void)
{
  GEN_ENTER(0x9da8e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf2 */
unsigned int F_009da8f0(void)
{
  GEN_ENTER(0x9da8f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf8 */
uint F_009da900(void)
{
  GEN_ENTER(0x9da900u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf24 */
unsigned int F_009da910(void)
{
  GEN_ENTER(0x9da910u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf25 */
unsigned int F_009da920(void)
{
  GEN_ENTER(0x9da920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf26 */
unsigned int F_009da930(void)
{
  GEN_ENTER(0x9da930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf27 */
unsigned int F_009da940(void)
{
  GEN_ENTER(0x9da940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf28 */
unsigned int F_009da950(void)
{
  GEN_ENTER(0x9da950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf29 */
unsigned int F_009da960(void)
{
  GEN_ENTER(0x9da960u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf30 */
unsigned int F_009da970(void)
{
  GEN_ENTER(0x9da970u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf8 */
uint F_009da980(void)
{
  GEN_ENTER(0x9da980u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: FUN_009da9c0 */
uint F_009da9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9da9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: Apricot::VfxLightInterface::vf0 */
uint F_009daa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9daa10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10de540));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::InterfaceBase::vf0 */
uint F_009daa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9daa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dab00 */
unsigned int F_009dab00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dab00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_009dab30 */
unsigned int F_009dab30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dab30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_009dab60 */
unsigned int F_009dab60(unsigned int gen_a0)
{
  GEN_ENTER(0x9dab60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: Apricot::ILoaderListenner::vf0 */
uint F_009dabd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dabd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10de534));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IListenner::vf1 */
byte F_009dac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::IListenner::vf2 */
unsigned int F_009dac20(void)
{
  GEN_ENTER(0x9dac20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf3 */
unsigned int F_009dac30(void)
{
  GEN_ENTER(0x9dac30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf4 */
unsigned int F_009dac40(void)
{
  GEN_ENTER(0x9dac40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf5 */
unsigned int F_009dac50(void)
{
  GEN_ENTER(0x9dac50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf6 */
unsigned int F_009dac60(void)
{
  GEN_ENTER(0x9dac60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf7 */
unsigned int F_009dac70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dac70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::IListenner::vf8 */
uint F_009dac80(void)
{
  GEN_ENTER(0x9dac80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf9 */
uint F_009dac90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dac90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0x107fc63;
}

/* ref: Apricot::IListenner::vf10 */
byte F_009daca0(void)
{
  GEN_ENTER(0x9daca0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf11 */
unsigned int F_009dacb0(void)
{
  GEN_ENTER(0x9dacb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf12 */
byte F_009dacc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dacc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Apricot::IListenner::vf13 */
byte F_009dacd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dacd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Apricot::IListenner::vf24 */
unsigned int F_009dace0(void)
{
  GEN_ENTER(0x9dace0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf25 */
uint F_009dacf0(void)
{
  GEN_ENTER(0x9dacf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf0 */
uint F_009dad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x10de564));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dad30 */
unsigned int F_009dad30(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x9dad30u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_009dad50 */
uint F_009dad50(float gen_a0)
{
  GEN_ENTER(0x9dad50u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (int)((double)param_1 * *(double *)&REFG(undefined, 0x1088118));
}

/* ref: FUN_009dad70 */
uint F_009dad70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dad70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (int)(char)param_1;
}

/* ref: FUN_009dadc0 */
unsigned int F_009dadc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dadc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_009dae00 */
unsigned int F_009dae00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9dae00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(ushort *)this = (ushort)((byte)param_1 & 3) | (short)param_3 * 4;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return 0;
}

/* ref: FUN_009dae30 */
unsigned int F_009dae30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dae30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  *(undefined2 *)((int)this + 2) = 0xffff;
  *(undefined2 *)this = 1;
  if (param_2 != 0) {
    do {
      iVar1 = *param_1;
      puVar2 = (ushort *)(param_1 + 2);
      if (iVar1 == 0x5374546d) {
        *(ushort *)this = *puVar2 * 4 | *(ushort *)this & 3;
      }
      else if (iVar1 == 0x546c4e6f) {
        *(ushort *)((int)this + 2) = *puVar2;
      }
      else if (iVar1 == 0x62456e61) {
        *(ushort *)this = *(ushort *)this ^ (*puVar2 ^ *(ushort *)this) & 3;
      }
      uVar3 = uVar3 + 8 + (param_1[1] + 3U & 0xfffffffc);
      param_1 = ((int *)GEN_TOP(((int)puVar2 + (param_1[1] + 3U & 0xfffffffc))));
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_009daec0 */
unsigned int F_009daec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9daec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  
  *(byte *)this = *(byte *)this ^ (*param_1 ^ *(byte *)this) & 1;
  *(byte *)this = (*param_1 ^ *(byte *)this) & 2 ^ *(byte *)this;
  *(byte *)((int)this + 1) = param_1[1];
  *(byte *)((int)this + 2) = param_1[2];
  *(byte *)((int)this + 3) = param_1[3];
  *(byte *)((int)this + 4) = param_1[4];
  *(undefined2 *)((int)this + 6) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 8);
  pbVar2 = param_1 + 10;
  puVar3 = (undefined4 *)((int)this + 10);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_009daf30 */
unsigned int F_009daf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9daf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  
  *(byte *)this = *(byte *)this ^ (*param_1 ^ *(byte *)this) & 1;
  *(byte *)this = (*param_1 ^ *(byte *)this) & 2 ^ *(byte *)this;
  *(byte *)((int)this + 1) = param_1[1];
  *(byte *)((int)this + 2) = param_1[2];
  *(byte *)((int)this + 3) = param_1[3];
  *(byte *)((int)this + 4) = param_1[4];
  *(undefined2 *)((int)this + 6) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 8);
  pbVar2 = param_1 + 10;
  puVar3 = (undefined4 *)((int)this + 10);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_009dafa0 */
uint F_009dafa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9dafa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined1 *)((int)this + 2) = (undefined1)param_4;
  *(byte *)this = ((byte)param_2 & 1) * '\x02' | *(byte *)this & 0xfc | (byte)param_1 & 1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_3;
  *(undefined1 *)((int)this + 3) = (undefined1)param_5;
  *(undefined2 *)((int)this + 6) = (undefined2)param_7;
  *(undefined1 *)((int)this + 4) = (undefined1)param_6;
  *(undefined2 *)((int)this + 8) = (undefined2)param_8;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  F_00c49908((undefined4 *)((int)this + 10),0x20,param_9);
  return (uint)this;
}

/* ref: FUN_009db020 */
unsigned int F_009db020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 1) = 0xffffffff;
  *(byte *)this = *(byte *)this & 0xfd | 1;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  uVar3 = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *param_1;
      puVar2 = param_1 + 2;
      if (uVar1 < 0x45664e70) {
        if (uVar1 == 0x45664e6f) {
          *(char *)((int)this + 2) = (char)*puVar2;
        }
        else if (uVar1 == 0x42644e6f) {
          *(char *)((int)this + 3) = (char)*puVar2;
        }
        else if (uVar1 == 0x436c4e6f) {
          *(char *)((int)this + 4) = (char)*puVar2;
        }
        else if (uVar1 == 0x4564546d) {
          uVar1 = *puVar2;
          *(short *)((int)this + 8) = (short)uVar1;
          *(byte *)this = *(byte *)this ^ (((short)uVar1 == -1) * '\x02' ^ *(byte *)this) & 2;
        }
      }
      else if (uVar1 == 0x456d4e6f) {
        *(char *)((int)this + 1) = (char)*puVar2;
      }
      else if (uVar1 == 0x5374546d) {
        *(short *)((int)this + 6) = (short)*puVar2;
      }
      else if (uVar1 == 0x62456e61) {
        *(byte *)this = *(byte *)this ^ (*puVar2 != 0 ^ *(byte *)this) & 1;
      }
      uVar3 = uVar3 + 8 + (param_1[1] + 3 & 0xfffffffc);
      param_1 = ((uint *)GEN_TOP(((int)puVar2 + (param_1[1] + 3 & 0xfffffffc))));
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_009db150 */
unsigned int F_009db150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_009db180 */
unsigned int F_009db180(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9db180u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return 0;
}

/* ref: FUN_009db1b0 */
unsigned int F_009db1b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9db1b0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[3] = (float)((float10)in_ecx[3] / fVar1);
  return 0;
}

/* ref: FUN_009db1e0 */
unsigned int F_009db1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db1e0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] * (float10)in_ecx[3]);
  return 0;
}

/* ref: FUN_009db210 */
unsigned int F_009db210(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db210u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)((float10)in_ecx[2] * fVar1);
  param_2[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return 0;
}

/* ref: FUN_009db240 */
unsigned int F_009db240(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db240u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)((float10)*in_ecx / fVar1);
  param_2[1] = (float)((float10)in_ecx[1] / fVar1);
  param_2[2] = (float)((float10)in_ecx[2] / fVar1);
  param_2[3] = (float)((float10)in_ecx[3] / fVar1);
  return 0;
}

/* ref: FUN_009db270 */
unsigned int F_009db270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)((int)this + 8))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] + (float10)*(float *)((int)this + 0xc))));
  return 0;
}

/* ref: FUN_009db2a0 */
unsigned int F_009db2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) - (float10)param_2[2])));
  param_1[3] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) - (float10)param_2[3])));
  return 0;
}

/* ref: FUN_009db2d0 */
unsigned int F_009db2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] * (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)*(float *)((int)this + 8))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] * (float10)*(float *)((int)this + 0xc))));
  return 0;
}

/* ref: FUN_009db320 */
unsigned int F_009db320(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *param_2 = *in_ecx;
  uVar1 = in_ecx[1];
  param_2[3] = (undefined4)gen_fl2bits(param_3);
  param_2[1] = uVar1;
  param_2[2] = in_ecx[2];
  return 0;
}

/* ref: FUN_009db350 */
unsigned int F_009db350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_009db370 */
unsigned int F_009db370(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9db370u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return 0;
}

/* ref: FUN_009db3a0 */
unsigned int F_009db3a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9db3a0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  return 0;
}

/* ref: FUN_009db3d0 */
unsigned int F_009db3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db3d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  return 0;
}

/* ref: FUN_009db400 */
unsigned int F_009db400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db400u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return 0;
}

/* ref: FUN_009db430 */
unsigned int F_009db430(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db430u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return 0;
}

/* ref: FUN_009db460 */
unsigned int F_009db460(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9db460u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)((float10)*in_ecx / fVar1);
  param_2[1] = (float)((float10)in_ecx[1] / fVar1);
  param_2[2] = (float)((float10)in_ecx[2] / fVar1);
  return 0;
}

/* ref: FUN_009db490 */
unsigned int F_009db490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)((int)this + 8))));
  return 0;
}

/* ref: FUN_009db4c0 */
unsigned int F_009db4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) - (float10)param_2[2])));
  return 0;
}

/* ref: FUN_009db4f0 */
unsigned int F_009db4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] * (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)*(float *)((int)this + 8))));
  return 0;
}

/* ref: FUN_009db520 */
unsigned int F_009db520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)((int)(uintptr_t)this) / (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) / (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) / (float10)param_2[2])));
  return 0;
}

/* ref: FUN_009db550 */
unsigned int F_009db550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[4];
  in_ecx[4] = param_2[5];
  in_ecx[5] = param_2[6];
  in_ecx[6] = param_2[8];
  in_ecx[7] = param_2[9];
  in_ecx[8] = param_2[10];
  in_ecx[9] = param_2[0xc];
  in_ecx[10] = param_2[0xd];
  in_ecx[0xb] = param_2[0xe];
  return 0;
}

/* ref: FUN_009db5b0 */
unsigned int F_009db5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  return 0;
}

/* ref: FUN_009db630 */
unsigned int F_009db630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_009db6a0 */
unsigned int F_009db6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_009db720 */
uint F_009db720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9db720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_009db740 */
uint F_009db740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_009db770 */
uint F_009db770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_009db790 */
uint F_009db790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_009db7b0 */
unsigned int F_009db7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x9db7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  return 0;
}

/* ref: FUN_009db810 */
uint F_009db810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xc + param_2 * 4);
}

/* ref: FUN_009db820 */
uint F_009db820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db820u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)F_00404230();
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_009db850 */
uint F_009db850(unsigned int gen_a0)
{
  GEN_ENTER(0x9db850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_009db890 */
uint F_009db890(unsigned int gen_a0)
{
  GEN_ENTER(0x9db890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((REFG(undefined4, 0x14a0a14) != (code *)0x0) && (param_1 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009db8c0 */
unsigned int F_009db8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9db8c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: Apricot::ApricotMemoryObject::vf0 */
uint F_009db8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::IVertexBuffer::vf0 */
uint F_009db930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IIndexBuffer::vf0 */
uint F_009db970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::ITexture::vf0 */
uint F_009db9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IScreenCopyTexture::vf0 */
uint F_009db9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9db9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IVertexShader::vf0 */
uint F_009dba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dba30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::IPixelShader::vf0 */
uint F_009dba70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dba70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbaa0 */
byte F_009dbaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbaa0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  do {
    if (*(int *)param_1 != *(int *)param_2) {
      iVar2 = (uint)*param_1 - (uint)*param_2;
      if (((iVar2 == 0) && (iVar2 = (uint)param_1[1] - (uint)param_2[1], iVar2 == 0)) &&
         (iVar2 = (uint)param_1[2] - (uint)param_2[2], iVar2 == 0)) {
        iVar2 = (uint)param_1[3] - (uint)param_2[3];
      }
      return (int)(iVar2 >> 0x1f | 1U) < 0;
    }
    uVar1 = uVar1 - 4;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  } while (3 < uVar1);
  return 0;
}

/* ref: FUN_009dbb30 */
uint F_009dbb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dbb90 */
uint F_009dbb90(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x9dbb90u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4f2dd();
  return uVar1;
}

/* ref: FUN_009dbbd0 */
uint F_009dbbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dbcd0 */
uint F_009dbcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbcd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009dbcf0 */
uint F_009dbcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbcf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009dbd50 */
uint F_009dbd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbda0 */
uint F_009dbda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbdc0 */
uint F_009dbdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dbde0 */
uint F_009dbde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbe10 */
unsigned int F_009dbe10(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbe10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbe40 */
uint F_009dbe40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbe40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbe70 */
unsigned int F_009dbe70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbe70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbea0 */
uint F_009dbea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbed0 */
unsigned int F_009dbed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbf00 */
uint F_009dbf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbf30 */
unsigned int F_009dbf30(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbf60 */
uint F_009dbf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbf90 */
unsigned int F_009dbf90(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dbfc0 */
uint F_009dbfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dbfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  return (uint)this;
}

/* ref: FUN_009dbff0 */
unsigned int F_009dbff0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dbff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return 0;
}

/* ref: FUN_009dc090 */
uint F_009dc090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VInputLayout_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VVertexBuffer_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VIndexBuffer_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VTexture_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VVertexShader_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolder_VPixelShader_Kernel_Graphics_Client_Apricot::vf0 */
uint F_009dc240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Singleton_VUITargetLinkLineManager_Vfx_Graphics_Client_Graphics::vf0 */
uint F_009dc290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de764));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VChannelingLineManager_Vfx_Graphics_Client_Graphics::vf0 */
uint F_009dc2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de76c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VTargetRingManager_Vfx_Graphics_Client_Graphics::vf0 */
uint F_009dc2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10de774));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009dc390 */
uint F_009dc390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc390u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc430 */
uint F_009dc430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_009dc4c0 */
uint F_009dc4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc4c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc4f0 */
uint F_009dc4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc4f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_009dc510 */
uint F_009dc510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc510u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc530 */
uint F_009dc530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc530u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc550 */
uint F_009dc550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc550u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc570 */
uint F_009dc570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc570u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc590 */
uint F_009dc590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc590u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc5d0 */
uint F_009dc5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc5d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc5f0 */
uint F_009dc5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc5f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc610 */
uint F_009dc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc610u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc640 */
uint F_009dc640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_009dc680 */
uint F_009dc680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc680u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_009dc6a0 */
byte F_009dc6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_009dbaa0(param_1,param_2);
  return bVar1;
}

/* ref: FUN_009dc6c0 */
uint F_009dc6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc6c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc720 */
uint F_009dc720(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009dc760 */
uint F_009dc760(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009dc790 */
uint F_009dc790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc790u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc7c0 */
uint F_009dc7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc7c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc7f0 */
uint F_009dc7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc7f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc820 */
uint F_009dc820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc820u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc850 */
uint F_009dc850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc850u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc880 */
uint F_009dc880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc880u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc8b0 */
uint F_009dc8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc8b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc8d0 */
uint F_009dc8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc8d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x28;
}

/* ref: FUN_009dc8e0 */
uint F_009dc8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc8e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x29;
}

/* ref: FUN_009dc8f0 */
uint F_009dc8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc8f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dc900 */
uint F_009dc900(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009dc910 */
uint F_009dc910(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009dc920 */
uint F_009dc920(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc920u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009dc950 */
uint F_009dc950(unsigned int gen_a0)
{
  GEN_ENTER(0x9dc950u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009dc970 */
uint F_009dc970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 * 0x2c != 0) {
    piVar1 = (int *)F_00404230();
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1 * 0x2c,4);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_009dc9a0 */
uint F_009dc9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc9a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc9d0 */
uint F_009dc9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dc9d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dca00 */
uint F_009dca00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dca00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dca30 */
byte F_009dca30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dca30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009dca50 */
byte F_009dca50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dca50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009dca70 */
uint F_009dca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dca70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dcba0 */
uint F_009dcba0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009dcbd0 */
uint F_009dcbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dcbd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dcbe0 */
unsigned int F_009dcbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcbe0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009dcc30 */
byte F_009dcc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009dcc50 */
byte F_009dcc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009dcc90 */
uint F_009dcc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcc90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dccd0 */
uint F_009dccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dccd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0xca);
  return uVar1;
}

/* ref: FUN_009dcd00 */
uint F_009dcd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcd00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0xca);
  return (uint)uVar1;
}

/* ref: FUN_009dcd60 */
uint F_009dcd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcd60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_009dcd90 */
uint F_009dcd90(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcd90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_009dcda0 */
uint F_009dcda0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcda0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dcdb0 */
uint F_009dcdb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcdb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009dcdc0 */
uint F_009dcdc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcdc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009dcdd0 */
uint F_009dcdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dcdd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_009dce10 */
uint F_009dce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dce10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0xcf);
  return (uint)uVar1;
}

/* ref: FUN_009dce40 */
uint F_009dce40(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_009dce50 */
uint F_009dce50(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dce60 */
uint F_009dce60(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009dce70 */
uint F_009dce70(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009dce80 */
uint F_009dce80(unsigned int gen_a0)
{
  GEN_ENTER(0x9dce80u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_009dcec0 */
uint F_009dcec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0xd0);
  return (uint)uVar1;
}

/* ref: FUN_009dcf20 */
unsigned int F_009dcf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcf20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dcf80 */
unsigned int F_009dcf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcf80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dcff0 */
unsigned int F_009dcff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dcff0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd060 */
unsigned int F_009dd060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd0a0 */
unsigned int F_009dd0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd0a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd0e0 */
unsigned int F_009dd0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd0e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd120 */
unsigned int F_009dd120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd120u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd140 */
uint F_009dd140(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009dd1b0 */
unsigned int F_009dd1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd1b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd1e0 */
unsigned int F_009dd1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = (int *)F_00404230();
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,0x2c,4)));
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 10) = 0;
  return 0;
}

/* ref: FUN_009dd250 */
unsigned int F_009dd250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd250u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd2d0 */
unsigned int F_009dd2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd2d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd340 */
unsigned int F_009dd340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd3b0 */
unsigned int F_009dd3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd3b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd420 */
unsigned int F_009dd420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd420u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd490 */
unsigned int F_009dd490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd500 */
unsigned int F_009dd500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009dd520 */
uint F_009dd520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd540 */
uint F_009dd540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd560 */
uint F_009dd560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd580 */
uint F_009dd580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd5a0 */
uint F_009dd5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd5c0 */
uint F_009dd5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd5e0 */
uint F_009dd5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd600 */
uint F_009dd600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd620 */
unsigned int F_009dd620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  return 0;
}

/* ref: FUN_009dd660 */
uint F_009dd660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd670 */
uint F_009dd670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9dd670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dd6c0 */
uint F_009dd6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd6c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd2);
  return uVar1;
}

/* ref: FUN_009dd720 */
unsigned int F_009dd720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x11))) == '\0') {
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

/* ref: FUN_009dd780 */
uint F_009dd780(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_009dd790 */
uint F_009dd790(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd790u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_009dd7b0 */
uint F_009dd7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd7b0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_009dd7d0 */
uint F_009dd7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd7d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0xcf);
  return uVar1;
}

/* ref: FUN_009dd820 */
unsigned int F_009dd820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x11))) == '\0') {
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

/* ref: FUN_009dd880 */
uint F_009dd880(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_009dd890 */
uint F_009dd890(unsigned int gen_a0)
{
  GEN_ENTER(0x9dd890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_009dd8b0 */
uint F_009dd8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd8b0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_009dd8d0 */
uint F_009dd8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd8d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0xd0);
  return uVar1;
}

/* ref: FUN_009dd910 */
uint F_009dd910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd910u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined4, 0x14a0a14) != (code *)0x0) && (param_1 * 0x14 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1 * 0x14,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009dd960 */
uint F_009dd960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd960u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined4, 0x14a0a14) != (code *)0x0) && (param_1 * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1 * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009dd9c0 */
uint F_009dd9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dd9c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined4, 0x14a0a14) != (code *)0x0) && (param_1 * 0xa4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1 * 0xa4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009dda20 */
uint F_009dda20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9dda20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined4, 0x14a0a14) != (code *)0x0) && (param_1 * 0x2a != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1 * 0x2a,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009ddaa0 */
uint F_009ddaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ddaa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined4, 0x14a0a14) != (code *)0x0) && (param_1 * 4 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1 * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

