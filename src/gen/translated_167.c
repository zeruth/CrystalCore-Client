#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Global::ClearAndDeallocateDefault16 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3c3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3c3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ClearAndDeallocateDefault8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3c400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3c400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::BlendFirstFloatsWeighted */
GEN_LIB GEN_FRAME unsigned int F_00d3c440(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd3c440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float * pfVar10;
  
  fVar2 = *param_5;
  fVar3 = param_5[1];
  fVar4 = param_5[2];
  fVar5 = param_5[3];
  iVar9 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar9) {
    pfVar10 = param_1;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_1) + (int)pfVar10)));
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      *pfVar10 = *pfVar1 * fVar2;
      pfVar10[1] = fVar6 * fVar3;
      pfVar10[2] = fVar7 * fVar4;
      pfVar10[3] = fVar8 * fVar5;
      pfVar1 = ((float *)GEN_TOP(((param_2 - (int)param_1) + (int)pfVar10)));
      *pfVar1 = fVar2;
      pfVar1[1] = fVar3;
      pfVar1[2] = fVar4;
      pfVar1[3] = fVar5;
      pfVar10 = pfVar10 + 4;
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
  }
  return 0;
}

/* ref: Global::PopArrayView */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d3c490(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd3c490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (((undefined4 *)GEN_TOP(*param_1)))[1];
  uVar2 = *((undefined4 *)GEN_TOP(*param_1));
  param_3[1] = uVar1;
  param_3[2] = uVar1 | 0x80000000;
  *param_3 = uVar2;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 - 1;
  return (uint)param_2;
}

/* ref: Global::PopArrayViewHalf */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d3c4c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd3c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(*param_1));
  uVar2 = (uint)(((undefined4 *)GEN_TOP(*param_1)))[1] >> 1;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 - 1;
  return (uint)param_2;
}

/* ref: Global::PopArrayViewDiv64 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d3c4f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd3c4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(*param_1));
  uVar2 = (uint)(((undefined4 *)GEN_TOP(*param_1)))[1] >> 6;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 - 1;
  return (uint)param_2;
}

/* ref: Global::PopArrayViewDiv112 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d3c520(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd3c520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(*param_1));
  uVar2 = (uint)(((undefined4 *)GEN_TOP(*param_1)))[1] / 0x70;
  param_3[1] = uVar2;
  *param_3 = uVar1;
  param_3[2] = uVar2 | 0x80000000;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 - 1;
  return (uint)param_2;
}

/* ref: FUN_00d3c560 */
GEN_LIB GEN_NOFRAME unsigned int F_00d3c560(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd3c560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int iVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  int iVar61;
  float * pfVar62;
  float * pfVar63;
  float * pfVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar96 [16];
  float fVar102;
  undefined1 auVar97 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar107 [16];
  float fVar113;
  undefined1 auVar108 [16];
  float fVar117;
  float fVar121;
  undefined1 auVar109 [16];
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  undefined1 auVar132 [16];
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar165;
  float fVar166;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar172;
  float fVar173;
  float fVar174;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  float fVar167;
  float fVar171;
  float fVar175;
  undefined1 auVar164 [16];
  float fVar176;
  
  fVar21 = *param_4;
  fVar22 = param_4[1];
  fVar23 = param_4[2];
  fVar24 = param_4[3];
  iVar61 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar61) {
    pfVar62 = ((float *)GEN_TOP((param_1 + 0x50)));
    pfVar63 = ((float *)GEN_TOP((param_2 + 0x50)));
    iVar1 = (param_1 - param_2) - 0x50;
    pfVar64 = param_3;
    do {
      fVar69 = fVar21 * *pfVar64;
      fVar71 = fVar22 * pfVar64[1];
      fVar73 = fVar23 * pfVar64[2];
      fVar77 = fVar24 * pfVar64[3];
      fVar25 = pfVar63[0x18];
      fVar26 = pfVar63[0x19];
      fVar27 = pfVar63[0x1a];
      fVar28 = pfVar63[0x1b];
      pfVar2 = ((float *)GEN_TOP((iVar1 + (int)pfVar63)));
      fVar12 = *pfVar2;
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      fVar29 = pfVar62[-8];
      fVar30 = pfVar62[-7];
      fVar31 = pfVar62[-6];
      fVar32 = pfVar62[-5];
      fVar76 = pfVar62[-4];
      fVar106 = pfVar62[-3];
      fVar79 = pfVar62[-2];
      fVar113 = pfVar62[-1];
      fVar33 = *pfVar62;
      fVar34 = pfVar62[1];
      fVar35 = pfVar62[2];
      fVar36 = pfVar62[3];
      fVar37 = pfVar62[4];
      fVar38 = pfVar62[5];
      fVar39 = pfVar62[6];
      fVar40 = pfVar62[7];
      fVar80 = pfVar62[8];
      fVar81 = pfVar62[9];
      fVar84 = pfVar62[10];
      fVar87 = pfVar62[0xb];
      fVar41 = pfVar62[0xc];
      fVar42 = pfVar62[0xd];
      fVar43 = pfVar62[0xe];
      fVar44 = pfVar62[0xf];
      fVar45 = pfVar62[0x10];
      fVar46 = pfVar62[0x11];
      fVar47 = pfVar62[0x12];
      fVar48 = pfVar62[0x13];
      fVar85 = pfVar62[0x14];
      fVar88 = pfVar62[0x15];
      fVar90 = pfVar62[0x16];
      fVar92 = pfVar62[0x17];
      fVar49 = pfVar62[0x18];
      fVar50 = pfVar62[0x19];
      fVar51 = pfVar62[0x1a];
      fVar52 = pfVar62[0x1b];
      memcpy(&(auVar163), &(*(gen_v16 *)(pfVar63 - 0x10)), sizeof(*(gen_v16 *)(pfVar63 - 0x10)) < sizeof(auVar163) ? sizeof(*(gen_v16 *)(pfVar63 - 0x10)) : sizeof(auVar163));
      fVar3 = (*(float *)((char *)&auVar163 + 0));
      fVar5 = (*(float *)((char *)&auVar163 + 4));
      fVar9 = (*(float *)((char *)&auVar163 + 12));
      fVar74 = (*(float *)((char *)&auVar163 + 8));
      fVar122 = fVar3 * fVar12;
      fVar133 = fVar5 * fVar13;
      fVar143 = fVar74 * fVar14;
      fVar158 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
      fVar165 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
      fVar169 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
      fVar173 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
      fVar103 = pfVar62[-0x10];
      fVar110 = pfVar62[-0xf];
      fVar114 = pfVar62[-0xe];
      fVar118 = pfVar62[-0xd];
      fVar53 = pfVar63[-0xc];
      fVar54 = pfVar63[-0xb];
      fVar55 = pfVar63[-10];
      fVar56 = pfVar63[-9];
      fVar57 = *pfVar63;
      fVar58 = pfVar63[1];
      fVar59 = pfVar63[2];
      fVar60 = pfVar63[3];
      memcpy(&(auVar163), &(*(gen_v16 *)(pfVar63 + 0x14)), sizeof(*(gen_v16 *)(pfVar63 + 0x14)) < sizeof(auVar163) ? sizeof(*(gen_v16 *)(pfVar63 + 0x14)) : sizeof(auVar163));
      fVar4 = (*(float *)((char *)&auVar163 + 0));
      fVar6 = (*(float *)((char *)&auVar163 + 4));
      fVar10 = (*(float *)((char *)&auVar163 + 12));
      fVar123 = (((fVar133 + fVar122) + fVar143) * fVar3 + (fVar9 * fVar9 + fVar158) * fVar12) +
                (fVar14 * fVar5 - fVar13 * fVar74) * fVar9;
      fVar134 = (((fVar133 + fVar122) + fVar143) * fVar5 + (fVar9 * fVar9 + fVar165) * fVar13) +
                (fVar12 * fVar74 - fVar14 * fVar3) * fVar9;
      fVar144 = (((fVar133 + fVar122) + fVar143) * fVar74 + (fVar9 * fVar9 + fVar169) * fVar14) +
                (fVar13 * fVar3 - fVar12 * fVar5) * fVar9;
      fVar153 = (((fVar133 + fVar122) + fVar143) * fVar9 + (fVar9 * fVar9 + fVar173) * fVar15) +
                (fVar15 * fVar9 - fVar15 * fVar9) * fVar9;
      fVar16 = pfVar63[-0x13];
      fVar17 = pfVar63[-0x12];
      fVar18 = pfVar63[-0x11];
      memcpy(&(auVar96), &(*(gen_v16 *)(pfVar63 - 4)), sizeof(*(gen_v16 *)(pfVar63 - 4)) < sizeof(auVar96) ? sizeof(*(gen_v16 *)(pfVar63 - 4)) : sizeof(auVar96));
      fVar122 = (*(float *)((char *)&auVar96 + 0));
      fVar143 = (*(float *)((char *)&auVar96 + 4));
      fVar83 = (*(float *)((char *)&auVar96 + 12));
      memcpy(&(auVar97), &(*(gen_v16 *)(pfVar63 + 8)), sizeof(*(gen_v16 *)(pfVar63 + 8)) < sizeof(auVar97) ? sizeof(*(gen_v16 *)(pfVar63 + 8)) : sizeof(auVar97));
      fVar133 = (*(float *)((char *)&auVar97 + 0));
      fVar7 = (*(float *)((char *)&auVar97 + 4));
      fVar8 = (*(float *)((char *)&auVar97 + 8));
      fVar11 = (*(float *)((char *)&auVar97 + 12));
      fVar124 = ((fVar114 * fVar5 - fVar110 * fVar74) + fVar9 * fVar103) + fVar118 * fVar3;
      fVar135 = ((fVar103 * fVar74 - fVar114 * fVar3) + fVar9 * fVar110) + fVar118 * fVar5;
      fVar145 = ((fVar110 * fVar3 - fVar103 * fVar5) + fVar9 * fVar114) + fVar118 * fVar74;
      fVar78 = fVar118 * fVar9 - ((fVar5 * fVar110 + fVar3 * fVar103) + fVar74 * fVar114);
      fVar3 = pfVar62[-0xc];
      fVar5 = pfVar62[-0xb];
      fVar9 = pfVar62[-10];
      fVar74 = pfVar62[-9];
      fVar82 = (*(float *)((char *)&auVar96 + 8));
      fVar70 = fVar122 * fVar29;
      fVar72 = fVar143 * fVar30;
      fVar75 = fVar82 * fVar31;
      fVar125 = (((fVar72 + fVar70) + fVar75) * fVar122 + (fVar83 * fVar83 + fVar158) * fVar29) +
                (fVar31 * fVar143 - fVar30 * fVar82) * fVar83;
      fVar136 = (((fVar72 + fVar70) + fVar75) * fVar143 + (fVar83 * fVar83 + fVar165) * fVar30) +
                (fVar29 * fVar82 - fVar31 * fVar122) * fVar83;
      fVar146 = (((fVar72 + fVar70) + fVar75) * fVar82 + (fVar83 * fVar83 + fVar169) * fVar31) +
                (fVar30 * fVar122 - fVar29 * fVar143) * fVar83;
      fVar154 = (((fVar72 + fVar70) + fVar75) * fVar83 + (fVar83 * fVar83 + fVar173) * fVar32) +
                (fVar32 * fVar83 - fVar32 * fVar83) * fVar83;
      fVar70 = pfVar63[-8];
      fVar72 = pfVar63[-7];
      fVar75 = pfVar63[-6];
      fVar19 = pfVar63[-5];
      fVar126 = ((fVar79 * fVar143 - fVar106 * fVar82) + fVar83 * fVar76) + fVar113 * fVar122;
      fVar137 = ((fVar76 * fVar82 - fVar79 * fVar122) + fVar83 * fVar106) + fVar113 * fVar143;
      fVar147 = ((fVar106 * fVar122 - fVar76 * fVar143) + fVar83 * fVar79) + fVar113 * fVar82;
      fVar86 = fVar113 * fVar83 - ((fVar143 * fVar106 + fVar122 * fVar76) + fVar82 * fVar79);
      fVar122 = fVar133 * fVar37;
      fVar143 = fVar7 * fVar38;
      fVar83 = fVar8 * fVar39;
      fVar127 = (((fVar143 + fVar122) + fVar83) * fVar133 + (fVar11 * fVar11 + fVar158) * fVar37) +
                (fVar39 * fVar7 - fVar38 * fVar8) * fVar11;
      fVar138 = (((fVar143 + fVar122) + fVar83) * fVar7 + (fVar11 * fVar11 + fVar165) * fVar38) +
                (fVar37 * fVar8 - fVar39 * fVar133) * fVar11;
      fVar148 = (((fVar143 + fVar122) + fVar83) * fVar8 + (fVar11 * fVar11 + fVar169) * fVar39) +
                (fVar38 * fVar133 - fVar37 * fVar7) * fVar11;
      fVar155 = (((fVar143 + fVar122) + fVar83) * fVar11 + (fVar11 * fVar11 + fVar173) * fVar40) +
                (fVar40 * fVar11 - fVar40 * fVar11) * fVar11;
      fVar122 = pfVar63[4];
      fVar143 = pfVar63[5];
      fVar83 = pfVar63[6];
      fVar82 = pfVar63[7];
      fVar128 = ((fVar84 * fVar7 - fVar81 * fVar8) + fVar11 * fVar80) + fVar87 * fVar133;
      fVar139 = ((fVar80 * fVar8 - fVar84 * fVar133) + fVar11 * fVar81) + fVar87 * fVar7;
      fVar149 = ((fVar81 * fVar133 - fVar80 * fVar7) + fVar11 * fVar84) + fVar87 * fVar8;
      fVar94 = fVar87 * fVar11 - ((fVar7 * fVar81 + fVar133 * fVar80) + fVar8 * fVar84);
      fVar133 = pfVar63[0xc];
      fVar7 = pfVar63[0xd];
      fVar8 = pfVar63[0xe];
      fVar11 = pfVar63[0xf];
      fVar99 = (*(float *)((char *)&auVar163 + 8));
      fVar89 = fVar4 * fVar45;
      fVar91 = fVar6 * fVar46;
      fVar93 = fVar99 * fVar47;
      fVar129 = (((fVar91 + fVar89) + fVar93) * fVar4 + (fVar10 * fVar10 + fVar158) * fVar45) +
                (fVar47 * fVar6 - fVar46 * fVar99) * fVar10;
      fVar140 = (((fVar91 + fVar89) + fVar93) * fVar6 + (fVar10 * fVar10 + fVar165) * fVar46) +
                (fVar45 * fVar99 - fVar47 * fVar4) * fVar10;
      fVar150 = (((fVar91 + fVar89) + fVar93) * fVar99 + (fVar10 * fVar10 + fVar169) * fVar47) +
                (fVar46 * fVar4 - fVar45 * fVar6) * fVar10;
      fVar156 = (((fVar91 + fVar89) + fVar93) * fVar10 + (fVar10 * fVar10 + fVar173) * fVar48) +
                (fVar48 * fVar10 - fVar48 * fVar10) * fVar10;
      fVar89 = pfVar63[0x10];
      fVar91 = pfVar63[0x11];
      fVar93 = pfVar63[0x12];
      fVar158 = pfVar63[0x13];
      fVar130 = ((fVar90 * fVar6 - fVar88 * fVar99) + fVar10 * fVar85) + fVar92 * fVar4;
      fVar141 = ((fVar85 * fVar99 - fVar90 * fVar4) + fVar10 * fVar88) + fVar92 * fVar6;
      fVar151 = ((fVar88 * fVar4 - fVar85 * fVar6) + fVar10 * fVar90) + fVar92 * fVar99;
      fVar100 = fVar92 * fVar10 - ((fVar6 * fVar88 + fVar4 * fVar85) + fVar99 * fVar90);
      fVar159 = fVar124 * fVar103;
      fVar166 = fVar135 * fVar110;
      fVar170 = fVar145 * fVar114;
      fVar174 = fVar78 * fVar118;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar77);
      fVar131 = gen_bits2f(uVar66 | uVar65);
      fVar142 = gen_bits2f(uVar65 | uVar66);
      fVar152 = gen_bits2f(uVar68 | uVar67);
      fVar157 = gen_bits2f(uVar67 | uVar68);
      fVar4 = pfVar62[-0xc];
      fVar6 = pfVar62[-0xb];
      fVar10 = pfVar62[-10];
      fVar99 = pfVar62[-9];
      fVar165 = pfVar62[-0xc];
      fVar169 = pfVar62[-0xb];
      fVar173 = pfVar62[-10];
      fVar20 = pfVar62[-9];
      fVar95 = fVar170 + fVar159;
      fVar98 = fVar174 + fVar166;
      fVar159 = fVar159 + fVar170;
      fVar166 = fVar166 + fVar174;
      uVar65 = -(uint)(fVar98 + fVar95 < 0.0);
      uVar66 = -(uint)(fVar95 + fVar98 < 0.0);
      uVar67 = -(uint)(fVar166 + fVar159 < 0.0);
      uVar68 = -(uint)(fVar159 + fVar166 < 0.0);
      (*(float *)((char *)&auVar162 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar131) * fVar103;
      (*(float *)((char *)&auVar162 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar142) * fVar110;
      (*(float *)((char *)&auVar162 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar152) * fVar114;
      (*(float *)((char *)&auVar162 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar157) * fVar118;
      fVar95 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar131) & uVar65 |
                          ~uVar65 & (uint)gen_fl2bits(fVar131)) * fVar124 + (*(float *)((char *)&auVar162 + 0));
      fVar166 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar142) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar142)) * fVar135 + (*(float *)((char *)&auVar162 + 4));
      fVar135 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar152) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar152)) * fVar145 + (*(float *)((char *)&auVar162 + 8));
      fVar170 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar157) & uVar68 |
                           ~uVar68 & (uint)gen_fl2bits(fVar157)) * fVar78 + (*(float *)((char *)&auVar162 + 12));
      fVar103 = fVar135 * fVar135 + fVar95 * fVar95;
      fVar110 = fVar170 * fVar170 + fVar166 * fVar166;
      fVar114 = fVar95 * fVar95 + fVar135 * fVar135;
      fVar118 = fVar166 * fVar166 + fVar170 * fVar170;
      (*(float *)((char *)&auVar132 + 0)) = fVar110 + fVar103;
      (*(float *)((char *)&auVar132 + 4)) = fVar103 + fVar110;
      (*(float *)((char *)&auVar132 + 8)) = fVar118 + fVar114;
      (*(float *)((char *)&auVar132 + 12)) = fVar114 + fVar118;
      gen_rsqrtps(&(auVar163), &(auVar162), &(auVar132));
      fVar103 = (*(float *)((char *)&auVar163 + 0));
      fVar110 = (*(float *)((char *)&auVar163 + 4));
      fVar114 = (*(float *)((char *)&auVar163 + 8));
      fVar118 = (*(float *)((char *)&auVar163 + 12));
      fVar160 = fVar103 * *(float *)&REFG(undefined, 0x1134d90);
      fVar167 = fVar110 * *(float *)&REFG(undefined, 0x1134d94);
      fVar171 = fVar114 * *(float *)&REFG(undefined, 0x1134d98);
      fVar175 = fVar118 * *(float *)&REFG(undefined, 0x1134d9c);
      fVar104 = *(float *)&REFG(undefined, 0x1134d80) - (fVar103 * (*(float *)((char *)&auVar132 + 0))) * fVar103;
      fVar111 = *(float *)&REFG(undefined, 0x1134d84) - (fVar110 * (*(float *)((char *)&auVar132 + 4))) * fVar110;
      fVar115 = *(float *)&REFG(undefined, 0x1134d88) - (fVar114 * (*(float *)((char *)&auVar132 + 8))) * fVar114;
      fVar119 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar118 * (*(float *)((char *)&auVar132 + 12))) * fVar118;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar77);
      fVar105 = gen_bits2f(uVar66 | uVar65);
      fVar112 = gen_bits2f(uVar65 | uVar66);
      fVar116 = gen_bits2f(uVar68 | uVar67);
      fVar120 = gen_bits2f(uVar67 | uVar68);
      fVar114 = fVar126 * fVar76;
      fVar118 = fVar137 * fVar106;
      fVar78 = fVar147 * fVar79;
      fVar98 = fVar86 * fVar113;
      fVar103 = fVar78 + fVar114;
      fVar110 = fVar98 + fVar118;
      fVar114 = fVar114 + fVar78;
      fVar118 = fVar118 + fVar98;
      uVar65 = -(uint)(fVar110 + fVar103 < 0.0);
      uVar66 = -(uint)(fVar103 + fVar110 < 0.0);
      uVar67 = -(uint)(fVar118 + fVar114 < 0.0);
      uVar68 = -(uint)(fVar114 + fVar118 < 0.0);
      (*(float *)((char *)&auVar164 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar105) * fVar76;
      (*(float *)((char *)&auVar164 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar112) * fVar106;
      (*(float *)((char *)&auVar164 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar116) * fVar79;
      (*(float *)((char *)&auVar164 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar120) * fVar113;
      fVar98 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar105) & uVar65 |
                          ~uVar65 & (uint)gen_fl2bits(fVar105)) * fVar126 + (*(float *)((char *)&auVar164 + 0));
      fVar124 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar112) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar112)) * fVar137 + (*(float *)((char *)&auVar164 + 4));
      fVar137 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar116) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar116)) * fVar147 + (*(float *)((char *)&auVar164 + 8));
      fVar174 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar120) & uVar68 |
                           ~uVar68 & (uint)gen_fl2bits(fVar120)) * fVar86 + (*(float *)((char *)&auVar164 + 12));
      fVar103 = fVar137 * fVar137 + fVar98 * fVar98;
      fVar110 = fVar174 * fVar174 + fVar124 * fVar124;
      fVar114 = fVar98 * fVar98 + fVar137 * fVar137;
      fVar118 = fVar124 * fVar124 + fVar174 * fVar174;
      (*(float *)((char *)&auVar107 + 0)) = fVar110 + fVar103;
      (*(float *)((char *)&auVar107 + 4)) = fVar103 + fVar110;
      (*(float *)((char *)&auVar107 + 8)) = fVar118 + fVar114;
      (*(float *)((char *)&auVar107 + 12)) = fVar114 + fVar118;
      gen_rsqrtps(&(auVar163), &(auVar164), &(auVar107));
      fVar103 = (*(float *)((char *)&auVar163 + 0));
      fVar110 = (*(float *)((char *)&auVar163 + 4));
      fVar118 = (*(float *)((char *)&auVar163 + 8));
      fVar106 = (*(float *)((char *)&auVar163 + 12));
      fVar161 = fVar103 * *(float *)&REFG(undefined, 0x1134d90);
      fVar168 = fVar110 * *(float *)&REFG(undefined, 0x1134d94);
      fVar172 = fVar118 * *(float *)&REFG(undefined, 0x1134d98);
      fVar176 = fVar106 * *(float *)&REFG(undefined, 0x1134d9c);
      fVar103 = *(float *)&REFG(undefined, 0x1134d80) - (fVar103 * (*(float *)((char *)&auVar107 + 0))) * fVar103;
      fVar114 = *(float *)&REFG(undefined, 0x1134d84) - (fVar110 * (*(float *)((char *)&auVar107 + 4))) * fVar110;
      fVar76 = *(float *)&REFG(undefined, 0x1134d88) - (fVar118 * (*(float *)((char *)&auVar107 + 8))) * fVar118;
      fVar79 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar106 * (*(float *)((char *)&auVar107 + 12))) * fVar106;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar77);
      fVar159 = gen_bits2f(uVar66 | uVar65);
      fVar126 = gen_bits2f(uVar65 | uVar66);
      fVar145 = gen_bits2f(uVar68 | uVar67);
      fVar101 = gen_bits2f(uVar67 | uVar68);
      fVar106 = fVar128 * fVar80;
      fVar113 = fVar139 * fVar81;
      fVar78 = fVar149 * fVar84;
      fVar86 = fVar94 * fVar87;
      fVar110 = fVar78 + fVar106;
      fVar118 = fVar86 + fVar113;
      fVar106 = fVar106 + fVar78;
      fVar113 = fVar113 + fVar86;
      uVar65 = -(uint)(fVar118 + fVar110 < 0.0);
      uVar66 = -(uint)(fVar110 + fVar118 < 0.0);
      uVar67 = -(uint)(fVar113 + fVar106 < 0.0);
      uVar68 = -(uint)(fVar106 + fVar113 < 0.0);
      (*(float *)((char *)&auVar108 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar159) * fVar80;
      (*(float *)((char *)&auVar108 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar126) * fVar81;
      (*(float *)((char *)&auVar108 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar145) * fVar84;
      (*(float *)((char *)&auVar108 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar101) * fVar87;
      fVar110 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar159) & uVar65 |
                           ~uVar65 & (uint)gen_fl2bits(fVar159)) * fVar128 + (*(float *)((char *)&auVar108 + 0));
      fVar118 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar126) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar126)) * fVar139 + (*(float *)((char *)&auVar108 + 4));
      fVar106 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar145) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar145)) * fVar149 + (*(float *)((char *)&auVar108 + 8));
      fVar113 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar101) & uVar68 |
                           ~uVar68 & (uint)gen_fl2bits(fVar101)) * fVar94 + (*(float *)((char *)&auVar108 + 12));
      fVar80 = fVar106 * fVar106 + fVar110 * fVar110;
      fVar81 = fVar113 * fVar113 + fVar118 * fVar118;
      fVar84 = fVar110 * fVar110 + fVar106 * fVar106;
      fVar87 = fVar118 * fVar118 + fVar113 * fVar113;
      (*(float *)((char *)&auVar96 + 0)) = fVar81 + fVar80;
      (*(float *)((char *)&auVar96 + 4)) = fVar80 + fVar81;
      (*(float *)((char *)&auVar96 + 8)) = fVar87 + fVar84;
      (*(float *)((char *)&auVar96 + 12)) = fVar84 + fVar87;
      gen_rsqrtps(&(auVar163), &(auVar108), &(auVar96));
      fVar94 = (*(float *)((char *)&auVar163 + 0));
      fVar128 = (*(float *)((char *)&auVar163 + 4));
      fVar139 = (*(float *)((char *)&auVar163 + 8));
      fVar149 = (*(float *)((char *)&auVar163 + 12));
      fVar80 = *(float *)&REFG(undefined, 0x1134d80) - (fVar94 * (*(float *)((char *)&auVar96 + 0))) * fVar94;
      fVar84 = *(float *)&REFG(undefined, 0x1134d84) - (fVar128 * (*(float *)((char *)&auVar96 + 4))) * fVar128;
      fVar78 = *(float *)&REFG(undefined, 0x1134d88) - (fVar139 * (*(float *)((char *)&auVar96 + 8))) * fVar139;
      fVar86 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar149 * (*(float *)((char *)&auVar96 + 12))) * fVar149;
      fVar94 = *(float *)&REFG(undefined, 0x1134d90) * fVar94;
      fVar128 = *(float *)&REFG(undefined, 0x1134d94) * fVar128;
      fVar139 = *(float *)&REFG(undefined, 0x1134d98) * fVar139;
      fVar149 = *(float *)&REFG(undefined, 0x1134d9c) * fVar149;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar77);
      fVar73 = gen_bits2f(uVar66 | uVar65);
      fVar77 = gen_bits2f(uVar65 | uVar66);
      fVar147 = gen_bits2f(uVar68 | uVar67);
      fVar102 = gen_bits2f(uVar67 | uVar68);
      fVar69 = fVar130 * fVar85;
      fVar71 = fVar141 * fVar88;
      fVar117 = fVar151 * fVar90;
      fVar121 = fVar100 * fVar92;
      fVar81 = fVar117 + fVar69;
      fVar87 = fVar121 + fVar71;
      fVar69 = fVar69 + fVar117;
      fVar71 = fVar71 + fVar121;
      uVar65 = -(uint)(fVar87 + fVar81 < 0.0);
      uVar66 = -(uint)(fVar81 + fVar87 < 0.0);
      uVar67 = -(uint)(fVar71 + fVar69 < 0.0);
      uVar68 = -(uint)(fVar69 + fVar71 < 0.0);
      (*(undefined4 *)((char *)&auVar163 + 0)) = (uint)gen_fl2bits(0.0 - fVar73) & uVar65;
      (*(undefined4 *)((char *)&auVar163 + 4)) = (uint)gen_fl2bits(0.0 - fVar77) & uVar66;
      (*(undefined4 *)((char *)&auVar163 + 8)) = (uint)gen_fl2bits(0.0 - fVar147) & uVar67;
      (*(undefined4 *)((char *)&auVar163 + 12)) = (uint)gen_fl2bits(0.0 - fVar102) & uVar68;
      (*(undefined4 *)((char *)&auVar109 + 0)) = ~uVar65 & (uint)gen_fl2bits(fVar73);
      (*(undefined4 *)((char *)&auVar109 + 4)) = ~uVar66 & (uint)gen_fl2bits(fVar77);
      (*(undefined4 *)((char *)&auVar109 + 8)) = ~uVar67 & (uint)gen_fl2bits(fVar147);
      (*(undefined4 *)((char *)&auVar109 + 12)) = ~uVar68 & (uint)gen_fl2bits(fVar102);
      undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar163), &(auVar109));
      memcpy(auVar163, gen_vt0, 16);
      fVar81 = (*(float *)((char *)&auVar163 + 0)) * fVar130 + (*(float *)&REFG(undefined, 0x1138af0) - fVar73) * fVar85;
      fVar87 = (*(float *)((char *)&auVar163 + 4)) * fVar141 + (*(float *)&REFG(undefined, 0x1138af4) - fVar77) * fVar88;
      fVar85 = (*(float *)((char *)&auVar163 + 8)) * fVar151 + (*(float *)&REFG(undefined, 0x1138af8) - fVar147) * fVar90;
      fVar88 = (*(float *)((char *)&auVar163 + 12)) * fVar100 + (*(float *)&REFG(undefined, 0x1138afc) - fVar102) * fVar92;
      fVar90 = fVar85 * fVar85 + fVar81 * fVar81;
      fVar92 = fVar88 * fVar88 + fVar87 * fVar87;
      fVar69 = fVar81 * fVar81 + fVar85 * fVar85;
      fVar71 = fVar87 * fVar87 + fVar88 * fVar88;
      (*(float *)((char *)&auVar97 + 0)) = fVar92 + fVar90;
      (*(float *)((char *)&auVar97 + 4)) = fVar90 + fVar92;
      (*(float *)((char *)&auVar97 + 8)) = fVar71 + fVar69;
      (*(float *)((char *)&auVar97 + 12)) = fVar69 + fVar71;
      gen_rsqrtps(&(auVar163), &(auVar109), &(auVar97));
      fVar100 = (*(float *)((char *)&auVar163 + 0));
      fVar117 = (*(float *)((char *)&auVar163 + 4));
      fVar121 = (*(float *)((char *)&auVar163 + 8));
      fVar130 = (*(float *)((char *)&auVar163 + 12));
      fVar90 = *(float *)&REFG(undefined, 0x1134d80) - (fVar100 * (*(float *)((char *)&auVar97 + 0))) * fVar100;
      fVar92 = *(float *)&REFG(undefined, 0x1134d84) - (fVar117 * (*(float *)((char *)&auVar97 + 4))) * fVar117;
      fVar69 = *(float *)&REFG(undefined, 0x1134d88) - (fVar121 * (*(float *)((char *)&auVar97 + 8))) * fVar121;
      fVar71 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar130 * (*(float *)((char *)&auVar97 + 12))) * fVar130;
      fVar100 = *(float *)&REFG(undefined, 0x1134d90) * fVar100;
      fVar117 = *(float *)&REFG(undefined, 0x1134d94) * fVar117;
      fVar121 = *(float *)&REFG(undefined, 0x1134d98) * fVar121;
      fVar130 = *(float *)&REFG(undefined, 0x1134d9c) * fVar130;
      pfVar2 = ((float *)GEN_TOP((iVar1 + (int)pfVar63)));
      *pfVar2 = (((fVar123 + fVar123) + pfVar63[-0x14]) - fVar12) * fVar131 + fVar12;
      pfVar2[1] = (((fVar134 + fVar134) + fVar16) - fVar13) * fVar142 + fVar13;
      pfVar2[2] = (((fVar144 + fVar144) + fVar17) - fVar14) * fVar152 + fVar14;
      pfVar2[3] = (((fVar153 + fVar153) + fVar18) - fVar15) * fVar157 + fVar15;
      pfVar62[-0x10] = (fVar104 * fVar160) * fVar95;
      pfVar62[-0xf] = (fVar111 * fVar167) * fVar166;
      pfVar62[-0xe] = (fVar115 * fVar171) * fVar135;
      pfVar62[-0xd] = (fVar119 * fVar175) * fVar170;
      pfVar62[-0xc] = (fVar53 * fVar3 - fVar4) * fVar131 + fVar165;
      pfVar62[-0xb] = (fVar54 * fVar5 - fVar6) * fVar142 + fVar169;
      pfVar62[-10] = (fVar55 * fVar9 - fVar10) * fVar152 + fVar173;
      pfVar62[-9] = (fVar56 * fVar74 - fVar99) * fVar157 + fVar20;
      pfVar62[-8] = (((fVar125 + fVar125) + fVar70) - fVar29) * fVar105 + fVar29;
      pfVar62[-7] = (((fVar136 + fVar136) + fVar72) - fVar30) * fVar112 + fVar30;
      pfVar62[-6] = (((fVar146 + fVar146) + fVar75) - fVar31) * fVar116 + fVar31;
      pfVar62[-5] = (((fVar154 + fVar154) + fVar19) - fVar32) * fVar120 + fVar32;
      pfVar62[-4] = (fVar103 * fVar161) * fVar98;
      pfVar62[-3] = (fVar114 * fVar168) * fVar124;
      pfVar62[-2] = (fVar76 * fVar172) * fVar137;
      pfVar62[-1] = (fVar79 * fVar176) * fVar174;
      *pfVar62 = (fVar57 * fVar33 - fVar33) * fVar105 + fVar33;
      pfVar62[1] = (fVar58 * fVar34 - fVar34) * fVar112 + fVar34;
      pfVar62[2] = (fVar59 * fVar35 - fVar35) * fVar116 + fVar35;
      pfVar62[3] = (fVar60 * fVar36 - fVar36) * fVar120 + fVar36;
      pfVar62[4] = (((fVar127 + fVar127) + fVar122) - fVar37) * fVar159 + fVar37;
      pfVar62[5] = (((fVar138 + fVar138) + fVar143) - fVar38) * fVar126 + fVar38;
      pfVar62[6] = (((fVar148 + fVar148) + fVar83) - fVar39) * fVar145 + fVar39;
      pfVar62[7] = (((fVar155 + fVar155) + fVar82) - fVar40) * fVar101 + fVar40;
      pfVar62[8] = fVar110 * (fVar80 * fVar94);
      pfVar62[9] = fVar118 * (fVar84 * fVar128);
      pfVar62[10] = fVar106 * (fVar78 * fVar139);
      pfVar62[0xb] = fVar113 * (fVar86 * fVar149);
      pfVar62[0xc] = (fVar41 * fVar133 - fVar41) * fVar159 + fVar41;
      pfVar62[0xd] = (fVar42 * fVar7 - fVar42) * fVar126 + fVar42;
      pfVar62[0xe] = (fVar43 * fVar8 - fVar43) * fVar145 + fVar43;
      pfVar62[0xf] = (fVar44 * fVar11 - fVar44) * fVar101 + fVar44;
      pfVar62[0x10] = (((fVar129 + fVar129) + fVar89) - fVar45) * fVar73 + fVar45;
      pfVar62[0x11] = (((fVar140 + fVar140) + fVar91) - fVar46) * fVar77 + fVar46;
      pfVar62[0x12] = (((fVar150 + fVar150) + fVar93) - fVar47) * fVar147 + fVar47;
      pfVar62[0x13] = (((fVar156 + fVar156) + fVar158) - fVar48) * fVar102 + fVar48;
      pfVar62[0x14] = (fVar90 * fVar100) * fVar81;
      pfVar62[0x15] = (fVar92 * fVar117) * fVar87;
      pfVar62[0x16] = (fVar69 * fVar121) * fVar85;
      pfVar62[0x17] = (fVar71 * fVar130) * fVar88;
      pfVar62[0x18] = (fVar25 * fVar49 - fVar49) * fVar73 + fVar49;
      pfVar62[0x19] = (fVar26 * fVar50 - fVar50) * fVar77 + fVar50;
      pfVar62[0x1a] = (fVar27 * fVar51 - fVar51) * fVar147 + fVar51;
      pfVar62[0x1b] = (fVar28 * fVar52 - fVar52) * fVar102 + fVar52;
      pfVar64 = pfVar64 + 4;
      pfVar63 = pfVar63 + 0x30;
      pfVar62 = pfVar62 + 0x30;
      iVar61 = iVar61 - 1;
    } while (iVar61 != 0);
  }
  return 0;
}

/* ref: Global::AccumulateWeightedProducts */
GEN_LIB GEN_FRAME uint F_00d3cf50(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd3cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float * pfVar14;
  
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  uVar13 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar13) {
    pfVar14 = param_1;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_1) + (int)pfVar14)));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_2 - (int)param_1) + (int)pfVar14)));
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      *pfVar14 = *pfVar2 * (*pfVar1 * fVar3) + *pfVar14;
      pfVar14[1] = fVar10 * (fVar7 * fVar4) + pfVar14[1];
      pfVar14[2] = fVar11 * (fVar8 * fVar5) + pfVar14[2];
      pfVar14[3] = fVar12 * (fVar9 * fVar6) + pfVar14[3];
      pfVar14 = pfVar14 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar13 = 0;
  }
  return uVar13;
}

/* ref: Global::AccumulateWeightedProductsAndWeights */
GEN_LIB GEN_FRAME uint F_00d3cfa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd3cfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float * pfVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  fVar4 = *param_5;
  fVar5 = param_5[1];
  fVar6 = param_5[2];
  fVar7 = param_5[3];
  uVar18 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar18) {
    iVar20 = param_4 - (int)param_2;
    iVar21 = param_3 - (int)param_2;
    iVar22 = param_1 - (int)param_2;
    pfVar19 = param_2;
    param_2 = ((float *)GEN_TOP(uVar18));
    do {
      pfVar1 = ((float *)GEN_TOP((iVar20 + (int)pfVar19)));
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar1 = ((float *)GEN_TOP((iVar21 + (int)pfVar19)));
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP((iVar22 + (int)pfVar19)));
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      pfVar3 = ((float *)GEN_TOP((iVar22 + (int)pfVar19)));
      *pfVar3 = *pfVar1 * (fVar8 * fVar4) + *pfVar2;
      pfVar3[1] = fVar12 * (fVar9 * fVar5) + fVar15;
      pfVar3[2] = fVar13 * (fVar10 * fVar6) + fVar16;
      pfVar3[3] = fVar14 * (fVar11 * fVar7) + fVar17;
      *pfVar19 = *pfVar19 + fVar8 * fVar4;
      pfVar19[1] = pfVar19[1] + fVar9 * fVar5;
      pfVar19[2] = pfVar19[2] + fVar10 * fVar6;
      pfVar19[3] = pfVar19[3] + fVar11 * fVar7;
      pfVar19 = pfVar19 + 4;
      param_2 = ((float *)GEN_TOP(((int)param_2 - 1)));
    } while (param_2 != ((float *)GEN_TOP(0x0)));
  }
  return uVar18;
}

/* ref: FUN_00d3d340 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3d340(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xd3d340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_FRAME_DECL(0x40, 0);
  int iVar1;
  undefined4 uVar2;
  undefined * phVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(int *)(gen_frame + 0x28)) = param_1;
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar6 = *(uint *)(phVar3 + 0xc);
  uVar4 = param_2 * 4 + 0x7fU & 0xffffff80;
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  uVar5 = uVar6 + uVar4;
  if ((*(int *)(phVar3 + 8) < (int)uVar4) || (*(uint *)(phVar3 + 0x10) < uVar5)) {
    uVar5 = F_00d94390(phVar3 GEN_EDX_ARG,uVar4);
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
  }
  else {
    *(uint *)(phVar3 + 0xc) = uVar5;
    (*(uint *)(gen_frame + 0x2c)) = uVar6;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0xc)));
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = *(uint *)(phVar3 + 0xc);
  uVar6 = iVar1 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)(phVar3 + 8) < (int)uVar6) || (*(uint *)(phVar3 + 0x10) < uVar5 + uVar6)) {
    uVar5 = F_00d94390(phVar3 GEN_EDX_ARG,uVar6);
  }
  else {
    *(uint *)(phVar3 + 0xc) = uVar5 + uVar6;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
  F_00d35c70(&(*(undefined4 *)(gen_frame + 0x10)),param_4,param_2,(*(uint *)(gen_frame + 0x2c)));
  uVar2 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0xc)));
  F_00d35c70(&(*(undefined4 *)(gen_frame + 0x0)),param_6,uVar2,uVar5);
  F_00d37b30((*(int *)(gen_frame + 0x28)) GEN_EDX_ARG,param_2,param_3,(*(uint *)(gen_frame + 0x2c)),param_5,uVar5,param_7,param_8,param_9);
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)(phVar3 + 8) < (int)uVar6) || (uVar6 + uVar5 != *(int *)(phVar3 + 0xc))) ||
     (*(uint *)(phVar3 + 0x14) == uVar5)) {
    F_00d945c0(phVar3 GEN_EDX_ARG,uVar5,uVar6);
  }
  else {
    *(uint *)(phVar3 + 0xc) = uVar5;
  }
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = (*(uint *)(gen_frame + 0x24)) + 0xf & 0xfffffff0;
  if ((((int)(*(uint *)(gen_frame + 0x24)) <= *(int *)(phVar3 + 8)) && (uVar5 + (*(uint *)(gen_frame + 0x2c)) == *(int *)(phVar3 + 0xc))) &&
     (*(uint *)(phVar3 + 0x14) != (*(uint *)(gen_frame + 0x2c)))) {
    *(uint *)(phVar3 + 0xc) = (*(uint *)(gen_frame + 0x2c));
    return (uint)phVar3;
  }
  uVar5 = F_00d945c0(phVar3 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x2c)),uVar5);
  return uVar5;
}

/* ref: FUN_00d3d4d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3d4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(uint * param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5), GEN_P(int * param_6, unsigned int gen_a6), GEN_P(int * param_7, unsigned int gen_a7), GEN_P(int param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd3d4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(int param_8 = (int)gen_a8;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * phVar4;
  uint in_esi;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short * psVar10;
  int in_eax;
  undefined4 * puVar11;
  uint local_24;
  undefined4 * local_1c;
  undefined4 * local_18;
  undefined4 * local_14;
  int local_10;
  undefined4 * local_c;
  int local_8;
  
  if (param_8 == 0) {
    in_eax = *(int *)this;
  }
  else {
    in_eax = param_3[0x2e];
  }
  phVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *(undefined4 * PTR32 *)(phVar4 + 0xc);
  uVar8 = in_eax * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)(phVar4 + 8) < (int)uVar8) || (*(uint *)(phVar4 + 0x10) < (int)local_14 + uVar8)) {
    local_14 = ((undefined4 *)GEN_TOP(F_00d94390(phVar4 GEN_EDX_ARG,uVar8)));
  }
  else {
    *(uint *)(phVar4 + 0xc) = (int)local_14 + uVar8;
  }
  iVar6 = *((int *)GEN_TOP(((int)this + 0xc)));
  phVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(undefined4 * PTR32 *)(phVar4 + 0xc);
  uVar9 = iVar6 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)(phVar4 + 8) < (int)uVar9) || (*(uint *)(phVar4 + 0x10) < (int)local_c + uVar9)) {
    local_c = ((undefined4 *)GEN_TOP(F_00d94390(phVar4 GEN_EDX_ARG,uVar9)));
  }
  else {
    *(uint *)(phVar4 + 0xc) = (int)local_c + uVar9;
  }
  if (param_6[1] == 0) {
    local_24 = *param_4;
    local_1c = local_14;
    local_10 = in_eax;
  }
  else {
    local_24 = F_00d367f0(in_eax);
    F_00da1030(local_24,0,in_eax);
    iVar6 = param_6[1] - 1;
    local_10 = 0;
    if (-1 < iVar6) {
      psVar10 = ((short *)GEN_TOP((*param_6 + iVar6 * 2)));
      do {
        if (((-1 < *psVar10) && (*psVar10 < in_eax)) &&
           ((param_4[1] == 0 || (*((char *)GEN_TOP((iVar6 + *param_4))) != '\0')))) {
          local_10 = iVar6 + 1;
          break;
        }
        psVar10 = psVar10 - 1;
        iVar6 = iVar6 - 1;
      } while (-1 < iVar6);
    }
    local_1c = ((undefined4 *)GEN_TOP(F_00d368e0(local_10)));
    iVar6 = in_eax * 0xc;
    puVar11 = local_14;
    if (-1 < iVar6 - 1) {
      for (; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  iVar6 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (param_7[1] == 0) {
    in_esi = *param_5;
    local_18 = local_c;
    local_8 = iVar6;
  }
  else {
    in_esi = F_00d367f0(iVar6);
    F_00da1030(in_esi,0,iVar6);
    iVar7 = param_7[1] - 1;
    local_8 = 0;
    if (-1 < iVar7) {
      psVar10 = ((short *)GEN_TOP((*param_7 + iVar7 * 2)));
      do {
        if (((-1 < *psVar10) && (*psVar10 < iVar6)) &&
           ((param_5[1] == 0 || (*((char *)GEN_TOP((iVar7 + *param_5))) != '\0')))) {
          local_8 = iVar7 + 1;
          break;
        }
        psVar10 = psVar10 - 1;
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
    }
    local_18 = ((undefined4 *)GEN_TOP(F_00d36890(local_8)));
    puVar11 = local_c;
    if (-1 < iVar6 - 1) {
      for (; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  iVar6 = param_3[3];
  if (iVar6 == 1) {
    F_00d6ae50(*param_3,GEN_ARGF(gen_bits2f(param_3[1])),local_10,local_1c,local_8,local_18,param_1,param_2);
  }
  else if (iVar6 == 2) {
    F_00d6c0a0(*param_3,GEN_ARGF(gen_bits2f(param_3[1])),local_10,local_8,*((undefined4 *)GEN_TOP(((int)this + 0x1c))),
               *((undefined4 *)GEN_TOP(((int)this + 0x20))),param_1,param_2,local_1c,local_18);
  }
  else if (iVar6 == 3) {
    F_00d6de50(*param_3,GEN_ARGF(gen_bits2f(param_3[1])),local_10,local_1c,local_8,local_18,param_1,param_2);
  }
  if ((param_6[1] != 0) && (param_2 = ((undefined4 *)GEN_TOP(0x0)), 0 < local_10)) {
    puVar11 = local_1c + 8;
    do {
      iVar6 = (int)*((short *)GEN_TOP((*param_6 + (int)((int)(uintptr_t)param_2) * 2)));
      uVar1 = puVar11[-7];
      uVar2 = puVar11[-6];
      uVar3 = puVar11[-5];
      puVar5 = local_14 + iVar6 * 0xc;
      *puVar5 = puVar11[-8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      uVar1 = puVar11[-3];
      uVar2 = puVar11[-2];
      uVar3 = puVar11[-1];
      puVar5[4] = puVar11[-4];
      puVar5[5] = uVar1;
      puVar5[6] = uVar2;
      puVar5[7] = uVar3;
      uVar1 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      puVar5[8] = *puVar11;
      puVar5[9] = uVar1;
      puVar5[10] = uVar2;
      puVar5[0xb] = uVar3;
      if (param_4[1] == 0) {
        *((undefined1 *)GEN_TOP((iVar6 + local_24))) = 0xff;
      }
      else {
        *((undefined1 *)GEN_TOP((iVar6 + local_24))) = *((undefined1 *)GEN_TOP(((int)param_2 + *param_4)));
      }
      param_2 = ((undefined4 *)GEN_TOP(((int)param_2 + 1)));
      puVar11 = puVar11 + 0xc;
    } while ((int)param_2 < local_10);
  }
  if (param_7[1] != 0) {
    iVar6 = 0;
    if (3 < local_8) {
      param_2 = local_18 + 2;
      do {
        iVar7 = (int)*((short *)GEN_TOP((*param_7 + iVar6 * 2)));
        local_c[iVar7] = param_2[-2];
        if (param_5[1] == 0) {
          *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = 0xff;
        }
        else {
          *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = *((undefined1 *)GEN_TOP((iVar6 + *param_5)));
        }
        iVar7 = (int)*((short *)GEN_TOP((*param_7 + 2 + iVar6 * 2)));
        local_c[iVar7] = param_2[-1];
        if (param_5[1] == 0) {
          *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = 0xff;
        }
        else {
          *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = *((undefined1 *)GEN_TOP((*param_5 + 1 + iVar6)));
        }
        iVar7 = (int)*((short *)GEN_TOP((*param_7 + 4 + iVar6 * 2)));
        local_c[iVar7] = *param_2;
        if (param_5[1] == 0) {
          *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = 0xff;
        }
        else {
          *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = *((undefined1 *)GEN_TOP((*param_5 + 2 + iVar6)));
        }
        iVar7 = (int)*((short *)GEN_TOP((*param_7 + 6 + iVar6 * 2)));
        local_c[iVar7] = param_2[1];
        if (param_5[1] == 0) {
          *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = 0xff;
        }
        else {
          *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = *((undefined1 *)GEN_TOP((*param_5 + 3 + iVar6)));
        }
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 4;
      } while (iVar6 < local_8 - 3);
    }
    for (; iVar6 < local_8; iVar6 = iVar6 + 1) {
      iVar7 = (int)*((short *)GEN_TOP((*param_7 + iVar6 * 2)));
      local_c[iVar7] = local_18[iVar6];
      if (param_5[1] == 0) {
        *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = 0xff;
      }
      else {
        *((undefined1 *)GEN_TOP((iVar7 + in_esi))) = *((undefined1 *)GEN_TOP((iVar6 + *param_5)));
      }
    }
  }
  F_00d3d340(this GEN_EDX_ARG,in_eax,local_14,local_24,local_c,in_esi,GEN_ARGF(gen_bits2f(param_3[2])),param_8,
               (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  if (param_7[1] != 0) {
    F_00d36930(local_18,local_8);
    F_00d36840(in_esi,uVar1);
  }
  if (param_6[1] != 0) {
    F_00d36980(local_1c,local_10);
    F_00d36840(local_24,in_eax);
  }
  phVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)(phVar4 + 8) < (int)uVar9) || (uVar9 + (int)local_c != *(int *)(phVar4 + 0xc))) ||
     (*(undefined4 * PTR32 *)(phVar4 + 0x14) == local_c)) {
    F_00d945c0(phVar4 GEN_EDX_ARG,local_c,uVar9);
  }
  else {
    *(undefined4 * PTR32 *)(phVar4 + 0xc) = local_c;
  }
  phVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar8 <= *(int *)(phVar4 + 8)) && (uVar8 + (int)local_14 == *(int *)(phVar4 + 0xc))) &&
     (*(undefined4 * PTR32 *)(phVar4 + 0x14) != local_14)) {
    *(undefined4 * PTR32 *)(phVar4 + 0xc) = local_14;
    return (uint)phVar4;
  }
  uVar8 = F_00d945c0(phVar4 GEN_EDX_ARG,local_14,uVar8);
  return uVar8;
}

/* ref: FUN_00d3d9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3d9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(int param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd3d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(int param_8 = (int)gen_a8;)
  undefined4 uVar1;
  int iVar2;
  undefined * phVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_c;
  uint local_8;
  
  uVar1 = *param_1;
  if (param_8 == 0) {
    iVar7 = *(int *)this;
  }
  else {
    iVar7 = param_3[0x2e];
  }
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(uint *)(phVar3 + 0xc);
  uVar4 = iVar7 + 0x7fU & 0xffffff80;
  if ((*(int *)(phVar3 + 8) < (int)uVar4) || (*(uint *)(phVar3 + 0x10) < local_c + uVar4)) {
    local_c = F_00d94390(phVar3 GEN_EDX_ARG,uVar4);
  }
  else {
    *(uint *)(phVar3 + 0xc) = local_c + uVar4;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)(phVar3 + 0xc);
  uVar5 = iVar2 + 0x7fU & 0xffffff80;
  if ((*(int *)(phVar3 + 8) < (int)uVar5) || (*(uint *)(phVar3 + 0x10) < local_8 + uVar5)) {
    local_8 = F_00d94390(phVar3 GEN_EDX_ARG,uVar5);
  }
  else {
    *(uint *)(phVar3 + 0xc) = local_8 + uVar5;
  }
  F_00d35910(param_6,param_4[1],*param_4,iVar7,local_c);
  F_00d35910(param_7,param_5[1],*param_5,*((undefined4 *)GEN_TOP(((int)this + 0xc))),local_8);
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  param_6 = *(uint *)(phVar3 + 0xc);
  uVar8 = iVar7 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)(phVar3 + 8) < (int)uVar8) || (*(uint *)(phVar3 + 0x10) < param_6 + uVar8)) {
    param_6 = F_00d94390(phVar3 GEN_EDX_ARG,uVar8);
  }
  else {
    *(uint *)(phVar3 + 0xc) = param_6 + uVar8;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  param_4 = *(undefined4 * PTR32 *)(phVar3 + 0xc);
  uVar6 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)(phVar3 + 8) < (int)uVar6) || (*(uint *)(phVar3 + 0x10) < (int)param_4 + uVar6)) {
    param_4 = ((undefined4 *)GEN_TOP(F_00d94390(phVar3 GEN_EDX_ARG,uVar6)));
  }
  else {
    *(uint *)(phVar3 + 0xc) = (int)param_4 + uVar6;
  }
  F_00d6f800(uVar1 GEN_EDX_ARG,*param_3,GEN_ARGF(gen_bits2f(param_3[1])),param_1[2],*((undefined4 *)GEN_TOP(((int)this + 0x1c))),
             *((undefined4 *)GEN_TOP(((int)this + 0x20))),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 0xc))),
             param_6,param_4,local_c,local_8);
  F_00d3d340(this GEN_EDX_ARG,iVar7,param_6,local_c,param_4,local_8,GEN_ARGF(gen_bits2f(param_3[2])),param_8,
               (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)(phVar3 + 8) < (int)uVar6) || (uVar6 + (int)param_4 != *(int *)(phVar3 + 0xc))) ||
     (((undefined4 *)GEN_TOP(*(uint *)(phVar3 + 0x14))) == param_4)) {
    F_00d945c0(phVar3 GEN_EDX_ARG,param_4,uVar6);
  }
  else {
    *(undefined4 * PTR32 *)(phVar3 + 0xc) = param_4;
  }
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)(phVar3 + 8) < (int)uVar8) || (uVar8 + param_6 != *(int *)(phVar3 + 0xc))) ||
     (*(uint *)(phVar3 + 0x14) == param_6)) {
    F_00d945c0(phVar3 GEN_EDX_ARG,param_6,uVar8);
  }
  else {
    *(uint *)(phVar3 + 0xc) = param_6;
  }
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)(phVar3 + 8) < (int)uVar5) || (uVar5 + local_8 != *(int *)(phVar3 + 0xc))) ||
     (*(uint *)(phVar3 + 0x14) == local_8)) {
    F_00d945c0(phVar3 GEN_EDX_ARG,local_8,uVar5);
  }
  else {
    *(uint *)(phVar3 + 0xc) = local_8;
  }
  phVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar4 <= *(int *)(phVar3 + 8)) && (uVar4 + local_c == *(int *)(phVar3 + 0xc))) &&
     (*(uint *)(phVar3 + 0x14) != local_c)) {
    *(uint *)(phVar3 + 0xc) = local_c;
    return (uint)phVar3;
  }
  uVar4 = F_00d945c0(phVar3 GEN_EDX_ARG,local_c,uVar4);
  return uVar4;
}

/* ref: FUN_00d3dcd0 */
GEN_LIB GEN_FRAME uint F_00d3dcd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3dcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3dcf0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d3dcf0(void)
{
  GEN_ENTER(0xd3dcf0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d3dd10 */
GEN_LIB GEN_NOFRAME unsigned int F_00d3dd10(void)
{
  GEN_ENTER(0xd3dd10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Global::CleanupLoadedObject */
GEN_LIB GEN_FRAME uint F_00d3dd30(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3dd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d3dd40 */
GEN_LIB GEN_FRAME unsigned int F_00d3dd40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3dd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((param_1 != ((undefined4 *)GEN_TOP(0x0))) &&
     (*param_1 = (*(undefined * PTR32 (*)[19])REFP(0x113541c)), param_2 != 0)) {
    F_00d74e60(param_1 GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00d3dd60 */
GEN_LIB GEN_NOFRAME uint F_00d3dd60(void)
{
  GEN_ENTER(0xd3dd60u, 0u, 0u, 0u, 0u);
  return 0x113541c;
}

/* ref: FUN_00d3ddb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3ddb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd3ddb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Global::ReleaseRefPtr */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d3de10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3de10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::BufFree8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3de50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd3de50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: Global::BufFree16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3de80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd3de80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: Global::Delete16 */
GEN_LIB GEN_FRAME unsigned int F_00d3dee0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3dee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::Delete8 */
GEN_LIB GEN_FRAME unsigned int F_00d3df10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3df10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::ScalarDeletingDestructor_00d3df50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3df50(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3df50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return param_1;
}

/* ref: Global::ClearAndDeallocateBytes */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3df90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd3df90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3dfd0 */
GEN_LIB GEN_FRAME unsigned int F_00d3dfd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3dfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + 4 + iVar1 * 8)));
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 8)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: Global::ClearAndDeallocateBytes_ContainerHeap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3e000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e040 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + 4 + iVar2 * 8)));
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: Global::ClearAndDeallocateBytes_ContainerHeap2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3e070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ClearAndDeallocatePairArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 4 + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ClearAndDeallocatePairArray_ContainerHeap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3e110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 4 + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ClearAndDeallocatePairArray_ContainerHeap2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3e170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 4 + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e1d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3e1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 8))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4 + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 4))),iVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d3e230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e230(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d3e1d0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00d3e270 */
GEN_LIB GEN_FRAME unsigned int F_00d3e270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int * piVar1;
  int iVar2;
  
  param_2 = param_2 - 1;
  if (-1 < param_2) {
    piVar1 = ((int *)GEN_TOP((param_1 + 4 + param_2 * 0x10)));
    do {
      iVar2 = piVar1[1] - 1;
      if (-1 < iVar2) {
        this = ((undefined *)GEN_TOP((*piVar1 + 4 + iVar2 * 8)));
        do {
          F_00d91510(this GEN_EDX_ARG);
          this = ((undefined *)GEN_TOP(((int)this - 8)));
          iVar2 = iVar2 - 1;
        } while (-1 < iVar2);
      }
      iVar2 = piVar1[2];
      piVar1[1] = 0;
      if (-1 < iVar2) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar1,iVar2 * 8);
      }
      *piVar1 = 0;
      piVar1[2] = ((int)0x80000000);
      F_00d91510(piVar1 - 1 GEN_EDX_ARG);
      param_2 = param_2 - 1;
      piVar1 = piVar1 - 4;
    } while (-1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d3e300 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d3e300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int * piVar1;
  int iVar2;
  int local_8;
  
  local_8 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < local_8) {
    piVar1 = ((int *)GEN_TOP((*(int *)this + 4 + local_8 * 0x10)));
    do {
      iVar2 = piVar1[1] - 1;
      if (-1 < iVar2) {
        this_00 = ((undefined *)GEN_TOP((*piVar1 + 4 + iVar2 * 8)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
          iVar2 = iVar2 - 1;
        } while (-1 < iVar2);
      }
      iVar2 = piVar1[2];
      piVar1[1] = 0;
      if (-1 < iVar2) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar1,iVar2 * 8);
      }
      *piVar1 = 0;
      piVar1[2] = ((int)0x80000000);
      F_00d91510(piVar1 - 1 GEN_EDX_ARG);
      local_8 = local_8 - 1;
      piVar1 = piVar1 - 4;
    } while (-1 < local_8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return 0;
}

/* ref: FUN_00d3e3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < local_8) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + 4 + local_8 * 0x10)));
    do {
      iVar3 = piVar2[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar2 + 4 + iVar3 * 8)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      iVar3 = piVar2[2];
      piVar2[1] = 0;
      if (-1 < iVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,iVar3 * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 - 1 GEN_EDX_ARG);
      local_8 = local_8 - 1;
      piVar2 = piVar2 - 4;
    } while (-1 < local_8);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < local_8) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + 4 + local_8 * 0x10)));
    do {
      iVar3 = piVar2[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar2 + 4 + iVar3 * 8)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      iVar3 = piVar2[2];
      piVar2[1] = 0;
      if (-1 < iVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,iVar3 * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 - 1 GEN_EDX_ARG);
      local_8 = local_8 - 1;
      piVar2 = piVar2 - 4;
    } while (-1 < local_8);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < local_8) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + 4 + local_8 * 0x10)));
    do {
      iVar3 = piVar2[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar2 + 4 + iVar3 * 8)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      iVar3 = piVar2[2];
      piVar2[1] = 0;
      if (-1 < iVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,iVar3 * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 - 1 GEN_EDX_ARG);
      local_8 = local_8 - 1;
      piVar2 = piVar2 - 4;
    } while (-1 < local_8);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e630 */
GEN_LIB GEN_FRAME uint F_00d3e630(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3e630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaAnimation::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e660(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd3e660u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x18))) + 0xc))))
                    (*((int * PTR32 *)GEN_TOP((param_1 + 0x18))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
  return uVar1;
}

/* ref: hkaAnimation::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e680(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xd3e680u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x18))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((param_1 + 0x18))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),
                     (undefined4)gen_fl2bits(param_3),param_4,param_5,
                     (undefined4)gen_fl2bits(param_6),(undefined4)gen_fl2bits(param_7));
  return uVar1;
}

/* ref: FUN_00d3e6d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3e6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
  if (-1 < local_8) {
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4 + local_8 * 0x10)));
    do {
      iVar3 = piVar2[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar2 + 4 + iVar3 * 8)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      iVar3 = piVar2[2];
      piVar2[1] = 0;
      if (-1 < iVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,iVar3 * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 - 1 GEN_EDX_ARG);
      local_8 = local_8 - 1;
      piVar2 = piVar2 - 4;
    } while (-1 < local_8);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG)
    ;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d3e7b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  if (param_1 != 0) {
    F_00d74e60(this GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_00d3e7d0 */
GEN_LIB GEN_FRAME uint F_00d3e7d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3e7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaSplineCompressedAnimation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e800(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d6e770(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkaAnimation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e840(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d3e6d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3e880 */
GEN_LIB GEN_FRAME uint F_00d3e880(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3e8a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d3e8a0(void)
{
  GEN_ENTER(0xd3e8a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d3e8c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d3e8c0(void)
{
  GEN_ENTER(0xd3e8c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d3e8e0 */
GEN_LIB GEN_FRAME unsigned int F_00d3e8e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d64fd0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d3e900 */
GEN_LIB GEN_FRAME uint F_00d3e900(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3e900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d64fe0(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d3e910 */
GEN_LIB GEN_FRAME unsigned int F_00d3e910(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3e910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d3e940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3e940(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d64fe0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x70);
  }
  return (uint)param_1;
}

/* ref: FUN_00d3e980 */
GEN_LIB GEN_FRAME uint F_00d3e980(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3e990 */
GEN_LIB GEN_FRAME uint F_00d3e990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3e990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3e9c0 */
GEN_LIB GEN_FRAME uint F_00d3e9c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3e9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d3e9d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d3e9d0(void)
{
  GEN_ENTER(0xd3e9d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d3e9e0 */
GEN_LIB GEN_FRAME unsigned int F_00d3e9e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3e9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  }
  *param_1 = 0;
  return;
}

/* ref: FUN_00d3ea00 */
GEN_LIB GEN_FRAME uint F_00d3ea00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3ea00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1135a3c));
    uVar1 = F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d3ea20 */
GEN_LIB GEN_NOFRAME uint F_00d3ea20(void)
{
  GEN_ENTER(0xd3ea20u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x68, 8);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x1135a3c;
}

/* ref: FUN_00d3ead0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d3ead0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3ead0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d3eb30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3eb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd3eb30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3eb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3eb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd3eb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d3eb90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3eb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd3eb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3ebc0 */
GEN_LIB GEN_FRAME unsigned int F_00d3ebc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3ebc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d3ebf0 */
GEN_LIB GEN_FRAME unsigned int F_00d3ebf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3ebf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d3ec30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d3ec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3ec30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d3ecb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3ecb0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3ecb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return (uint)param_1;
}

/* ref: FUN_00d3ecf0 */
GEN_LIB GEN_FRAME unsigned int F_00d3ecf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3ecf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d3ed20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3ed20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3ed20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return (uint)param_1;
}

/* ref: FUN_00d3ed60 */
GEN_LIB GEN_FRAME unsigned int F_00d3ed60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3ed60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + iVar1 * 8)));
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 8)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00d3ed90 */
GEN_LIB GEN_FRAME unsigned int F_00d3ed90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3ed90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 8)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 8 + iVar1 * 8))) = 0;
  }
  return;
}

/* ref: FUN_00d3edc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3edc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3edc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00d3ee00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3ee00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3ee00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00d3ee30 */
GEN_LIB GEN_FRAME unsigned int F_00d3ee30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3ee30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + iVar1 * 4)));
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 4)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00d3eea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3eea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd3eea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3ef00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3ef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd3ef00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3ef70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3ef70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3ef70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 4)));
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 4)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00d3efa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3efa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3efa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f000 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3f000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3f000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3f070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3f070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 4)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f0d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3f0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3f130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3f1a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3f1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3f1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 4)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f200 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3f200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3f200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 4)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3f260(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1135a3c));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d3f280 */
GEN_LIB GEN_FRAME uint F_00d3f280(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d3f2b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3f2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3f2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 0x48)));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x4c))) - 1;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar4 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar4 + 8 + iVar3 * 8))) = 0;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x48))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x40))) - 1;
  if (-1 < iVar4) {
    pvVar2 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + iVar4 * 4)));
    do {
      F_00d91510(pvVar2 GEN_EDX_ARG);
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 4)));
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x44)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x3c))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0x38))) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x30))),
               *((uint *)GEN_TOP(((int)this + 0x38))) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0x2c))) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x24))),
               (*((uint *)GEN_TOP(((int)this + 0x2c))) & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x1c))) - 1;
  if (-1 < iVar4) {
    pvVar2 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + iVar4 * 8)));
    do {
      F_00d91510(pvVar2 GEN_EDX_ARG);
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 8)));
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0x14))) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),
               (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaSkeleton::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3f460(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d3f2b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3f4a0 */
GEN_LIB GEN_FRAME uint F_00d3f4a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3f4c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d3f4c0(void)
{
  GEN_ENTER(0xd3f4c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d3f4e0 */
GEN_LIB GEN_FRAME uint F_00d3f4e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d3f4f0 */
GEN_LIB GEN_FRAME unsigned int F_00d3f4f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((param_1 != ((undefined4 *)GEN_TOP(0x0))) && (*param_1 = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c)), param_2 != 0)) {
    F_00d76e30(param_1 GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00d3f510 */
GEN_LIB GEN_NOFRAME uint F_00d3f510(void)
{
  GEN_ENTER(0xd3f510u, 0u, 0u, 0u, 0u);
  return 0x1135b5c;
}

/* ref: FUN_00d3f520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3f520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  if (param_1 != 0) {
    F_00d76e30(this GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_00d3f540 */
GEN_LIB GEN_FRAME uint F_00d3f540(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaQuantizedAnimation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3f570(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d78ae0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3f5b0 */
GEN_LIB GEN_FRAME uint F_00d3f5b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3f5d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d3f5d0(void)
{
  GEN_ENTER(0xd3f5d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d3f5f0 */
GEN_LIB GEN_FRAME unsigned int F_00d3f5f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d7be90(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d3f610 */
GEN_LIB GEN_FRAME uint F_00d3f610(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d3f620 */
GEN_LIB GEN_NOFRAME uint F_00d3f620(void)
{
  GEN_ENTER(0xd3f620u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0xb0, 0);
  
  F_00d7be90(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3f660 */
GEN_LIB GEN_FRAME uint F_00d3f660(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3f670 */
GEN_LIB GEN_FRAME uint F_00d3f670(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3f6a0 */
GEN_LIB GEN_FRAME unsigned int F_00d3f6a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d7e8d0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d3f6c0 */
GEN_LIB GEN_FRAME uint F_00d3f6c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d3f6d0 */
GEN_LIB GEN_NOFRAME uint F_00d3f6d0(void)
{
  GEN_ENTER(0xd3f6d0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x40, 0);
  
  F_00d7e8d0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3f700 */
GEN_LIB GEN_NOFRAME unsigned int F_00d3f700(void)
{
  GEN_ENTER(0xd3f700u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d3f710 */
GEN_LIB GEN_FRAME uint F_00d3f710(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d3f750 */
GEN_LIB GEN_FRAME unsigned int F_00d3f750(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d3f790 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3f790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3f790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f7d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3f7d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 2);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00d3f840 */
GEN_LIB GEN_FRAME uint F_00d3f840(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3f850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3f850(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f880 */
GEN_LIB GEN_FRAME unsigned int F_00d3f880(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d3f8a0 */
GEN_LIB GEN_FRAME uint F_00d3f8a0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d3f8d0 */
GEN_LIB GEN_FRAME uint F_00d3f8d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d3f8f0 */
GEN_LIB GEN_FRAME uint F_00d3f8f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d3f900 */
GEN_LIB GEN_FRAME unsigned int F_00d3f900(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d3f920 */
GEN_LIB GEN_FRAME uint F_00d3f920(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d3e1d0(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d3f930 */
GEN_LIB GEN_FRAME uint F_00d3f930(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3f940 */
GEN_LIB GEN_FRAME uint F_00d3f940(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3f950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3f950(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx + 4 GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3f990(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f9b0 */
GEN_LIB GEN_FRAME uint F_00d3f9b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3f9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::CleanupLoadedObject2 */
GEN_LIB GEN_FRAME uint F_00d3f9d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d3f9e0 */
GEN_LIB GEN_FRAME uint F_00d3f9e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3f9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[19])REFP(0x113657c));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3fa00 */
GEN_LIB GEN_NOFRAME uint F_00d3fa00(void)
{
  GEN_ENTER(0xd3fa00u, 0u, 0u, 0u, 0u);
  return 0x113657c;
}

/* ref: Global::DeleteReferencedObject */
GEN_LIB GEN_FRAME uint F_00d3fa20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3fa20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaInterleavedUncompressedAnimation::~hkaInterleavedUncompressedAnimation */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3fa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3fa50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x3c);
  *(undefined4 *)(this + 0x38) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x34),iVar1 * 4);
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0x80000000;
  uVar2 = *(uint *)(this + 0x30);
  *(undefined4 *)(this + 0x2c) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x28),(uVar2 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0x80000000;
  uVar2 = F_00d3e6d0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkaInterleavedUncompressedAnimation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3fad0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3fad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d3fa50(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3fb10 */
GEN_LIB GEN_FRAME uint F_00d3fb10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3fb10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d3fb20 */
GEN_LIB GEN_FRAME uint F_00d3fb20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3fb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::FinishLoadedObject */
GEN_LIB GEN_FRAME unsigned int F_00d3fb40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3fb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d7f240(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: Global::CleanupLoadedObject3 */
GEN_LIB GEN_FRAME uint F_00d3fb60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3fb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Global::GetVtable */
GEN_LIB GEN_NOFRAME uint F_00d3fb70(void)
{
  GEN_ENTER(0xd3fb70u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0xb0, 0);
  
  F_00d7f240(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: Global::CleanupLoadedObject4 */
GEN_LIB GEN_FRAME uint F_00d3fbc0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3fbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d3fbd0 */
GEN_LIB GEN_FRAME uint F_00d3fbd0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3fbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x113680c));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3fbf0 */
GEN_LIB GEN_NOFRAME uint F_00d3fbf0(void)
{
  GEN_ENTER(0xd3fbf0u, 0u, 0u, 0u, 0u);
  return 0x113680c;
}

/* ref: Global::BufFree4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3fc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd3fc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Global::ReleaseRefPtr2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d3fc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3fc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::Delete4 */
GEN_LIB GEN_FRAME unsigned int F_00d3fc80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3fc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::ScalarDeletingDestructor_00d3fcb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3fcb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3fcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: Global::ReleasePointerArray */
GEN_LIB GEN_FRAME unsigned int F_00d3fcf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3fcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: Global::ClearAndFree */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3fd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd3fd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::ClearAndFreeDefault */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3fdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3fdd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::ClearAndFreeDefault_00d3fe40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d3fe40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd3fe40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::FreeToThreadAllocator */
GEN_LIB GEN_FRAME uint F_00d3fec0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3fec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaFootstepAnalysisInfoContainer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3fef0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3fef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d7f590(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3ff30 */
GEN_LIB GEN_FRAME uint F_00d3ff30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd3ff30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::DestroyInPlace */
GEN_LIB GEN_FRAME uint F_00d3ff50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3ff50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d3ff60 */
GEN_LIB GEN_FRAME uint F_00d3ff60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd3ff60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1136938));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3ff80 */
GEN_LIB GEN_NOFRAME uint F_00d3ff80(void)
{
  GEN_ENTER(0xd3ff80u, 0u, 0u, 0u, 0u);
  return 0x1136938;
}

/* ref: Global::FreeArray16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d3ffc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd3ffc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: Global::FreeToThreadAllocator_00d40030 */
GEN_LIB GEN_FRAME uint F_00d40030(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd40030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d40060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d40060(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd40060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00d400a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d400a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd400a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d400e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d400e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd400e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d40120 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d40120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd40120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d40170 */
GEN_LIB GEN_FRAME uint F_00d40170(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd40170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d401a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d401a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd401a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x3c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x34))),uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d401f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd401f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[0xf];
  param_1[0xe] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[0xd],iVar1 << 4);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00d40260 */
GEN_LIB GEN_FRAME uint F_00d40260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd40260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::DestroyInPlace_00d40280 */
GEN_LIB GEN_FRAME uint F_00d40280(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd40280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d40290 */
GEN_LIB GEN_FRAME unsigned int F_00d40290(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd40290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136a34));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 0x15 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d402c0 */
GEN_LIB GEN_NOFRAME uint F_00d402c0(void)
{
  GEN_ENTER(0xd402c0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x68, 8);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG,0);
  return 0x1136a34;
}

/* ref: Global::ReleasePtr */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d40310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd40310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::ReleasePtr_00d40340 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d40340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd40340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d40360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d40360(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd40360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1136a34));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 0x15 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d40390 */
GEN_LIB GEN_FRAME uint F_00d40390(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd40390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d403c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d403c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd403c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaBoneAttachment::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d403f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd403f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 + 0x15 GEN_EDX_FWD);
  if (((undefined *)GEN_TOP(param_1[0x14])) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(param_1[0x14])) GEN_EDX_ARG);
  }
  param_1[0x14] = 0;
  F_00d91510(param_1 + 2 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00d40450 */
GEN_LIB GEN_FRAME uint F_00d40450(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd40450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::DestroyInPlace_00d40470 */
GEN_LIB GEN_FRAME uint F_00d40470(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd40470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d40480 */
GEN_LIB GEN_FRAME uint F_00d40480(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd40480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136a94));
  }
  return (uint)param_1;
}

/* ref: FUN_00d404a0 */
GEN_LIB GEN_NOFRAME uint F_00d404a0(void)
{
  GEN_ENTER(0xd404a0u, 0u, 0u, 0u, 0u);
  return 0x1136a94;
}

/* ref: Global::FreeToThreadAllocator_00d404c0 */
GEN_LIB GEN_FRAME uint F_00d404c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd404c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaAnimationPreviewColorContainer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d404f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd404f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d80c20(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d40530 */
GEN_LIB GEN_FRAME uint F_00d40530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd40530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::DestroyInPlace_00d40550 */
GEN_LIB GEN_FRAME uint F_00d40550(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd40550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d40560 */
GEN_LIB GEN_FRAME uint F_00d40560(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd40560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
    uVar1 = F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d40580 */
GEN_LIB GEN_NOFRAME uint F_00d40580(void)
{
  GEN_ENTER(0xd40580u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x38, 8);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x1136b9c;
}

/* ref: FUN_00d405e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d405e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd405e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d40600 */
GEN_LIB GEN_FRAME uint F_00d40600(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd40600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d40630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d40630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd40630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaAnimationBinding::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d406c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd406c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d40630(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkaRaycastInterface::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d40750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xd40750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkaRaycastInterface::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d40760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd40760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00d407f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d407f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd407f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136c44));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  puVar2 = param_1;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x10)));
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0xa0))) = *(undefined8 *)(param_1 + 0xc);
  *((undefined8 *)GEN_TOP(((int)this + 0xa8))) = *(undefined8 *)(param_1 + 0xe);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined8 *)GEN_TOP(((int)this + 0xc0))) = REFG(undefined8, 0x1138ae0);
  *((undefined8 *)GEN_TOP(((int)this + 200))) = REFG(undefined8, 0x1138ae8);
  *((undefined8 *)GEN_TOP(((int)this + 0xd0))) = REFG(undefined8, 0x1138ae0);
  *((undefined8 *)GEN_TOP(((int)this + 0xd8))) = REFG(undefined8, 0x1138ae8);
  *((undefined8 *)GEN_TOP(((int)this + 0xe0))) = REFG(undefined8, 0x1138ae0);
  *((undefined8 *)GEN_TOP(((int)this + 0xe8))) = REFG(undefined8, 0x1138ae8);
  return 0;
}

/* ref: FUN_00d41b10 */
GEN_LIB GEN_FRAME byte GEN_STDCALL F_00d41b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd41b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char * pcVar1;
  
  if (*((char *)GEN_TOP(((*(int *)&gen_args[0]) + 0x84))) != '\0') {
    pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 100))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 100))) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[4]) + 3,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),
                                *((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x80))),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]))));
    return *pcVar1 != '\0';
  }
  pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 100))) + 8))))
                             (*((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 100))) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[4]) + 3,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),
                              (*(undefined4 *)&gen_args[4]))));
  return *pcVar1 != '\0';
}

/* ref: FUN_00d41b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41b80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00d41ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd41ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_1 - *param_2 * *param_3;
  *((float *)GEN_TOP(((int)this + 4))) = fVar7 - fVar1 * fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = fVar8 - fVar2 * fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar9 - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41bc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41bc0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2 & 0x7fffffff;
  in_ecx[1] = uVar1 & 0x7fffffff;
  in_ecx[2] = uVar2 & 0x7fffffff;
  in_ecx[3] = uVar3 & 0x7fffffff;
  return (uint)param_2;
}

/* ref: FUN_00d41be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d41bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd41bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = gen_movmskps(&(*(gen_v16 *)this));
  return (uint)((uVar1 & param_1) == param_1);
}

/* ref: FUN_00d41c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41c10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00d41c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41c30(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd41c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = *param_3 + *in_ecx;
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  return (uint)param_2;
}

/* ref: FUN_00d41c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41c50(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  return (uint)!(*param_2 <= *in_ecx);
}

/* ref: FUN_00d41c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41c70(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  
  fVar1 = *in_ecx;
  return (uint)((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*param_2)) && (!(fVar1 < *param_2) && fVar1 != *param_2));
}

/* ref: FUN_00d41c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd41c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *((float *)GEN_TOP(((int)this + 4))) = *((float *)GEN_TOP(((int)this + 4))) - fVar1 * fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = *((float *)GEN_TOP(((int)this + 8))) - fVar2 * fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = *((float *)GEN_TOP(((int)this + 0xc))) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd41cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *((float *)GEN_TOP(((int)this + 4))) = *((float *)GEN_TOP(((int)this + 4))) - fVar1 * fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = *((float *)GEN_TOP(((int)this + 8))) - fVar2 * fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = *((float *)GEN_TOP(((int)this + 0xc))) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd41cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *((float *)GEN_TOP(((int)this + 4))) = fVar1 * fVar4 + *((float *)GEN_TOP(((int)this + 4)));
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 * fVar5 + *((float *)GEN_TOP(((int)this + 8)));
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3 * fVar6 + *((float *)GEN_TOP(((int)this + 0xc)));
  return (uint)param_1;
}

/* ref: FUN_00d41cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd41cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 - *param_2;
  *((float *)GEN_TOP(((int)this + 4))) = fVar1 - fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 - fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3 - fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd41d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *((float *)GEN_TOP(((int)this + 4))) = fVar1 * fVar4 + fVar7;
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 * fVar5 + fVar8;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00d41d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41d30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d41d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd41d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *((float *)GEN_TOP(((int)this + 4))) = fVar1 * fVar4 + fVar7;
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 * fVar5 + fVar8;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00d41d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d41da0 */
GEN_LIB GEN_FRAME uint F_00d41da0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd41da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138bdc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138bd8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138bd4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138bd0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d41dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41dc0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd41dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx <= *param_3);
  param_2[1] = -(uint)(fVar4 <= fVar1);
  param_2[2] = -(uint)(fVar5 <= fVar2);
  param_2[3] = -(uint)(fVar6 <= fVar3);
  return (uint)param_2;
}

/* ref: FUN_00d41df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41df0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd41df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_3 * *in_ecx;
  fVar2 = param_3[1] * in_ecx[1];
  fVar3 = param_3[2] * in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d41e20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d41e20(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd41e20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(in_ecx[1] - param_2[1]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*in_ecx - *param_2) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(in_ecx[2] - param_2[2]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(in_ecx[3] - param_2[3]) <= param_3);
  uVar2 = gen_movmskps(&(auVar1));
  return ((byte)uVar2 & 7) == 7;
}

/* ref: FUN_00d41f50 */
GEN_LIB GEN_FRAME uint F_00d41f50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd41f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaFootPlacementIkSolver::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41f80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00d41fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d41fc0(GEN_P(gen_v16 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd41fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  
  memcpy(&(auVar1), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar1) ? sizeof(*in_ecx) : sizeof(auVar1));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar1));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1136bf4) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar6 = *(float *)&REFG(undefined, 0x1136bf8) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar7 = *(float *)&REFG(undefined, 0x1136bfc) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1136c04) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1136c08) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1136c0c) * fVar4;
  *param_2 = ~-(uint)((*(float *)((char *)&auVar1 + 0)) <= 0.0) &
             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136bf0) - ((*(float *)((char *)&auVar1 + 0)) * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136c00) * fVar8));
  param_2[1] = ~-(uint)((*(float *)((char *)&auVar1 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar5 * fVar2);
  param_2[2] = ~-(uint)((*(float *)((char *)&auVar1 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar3);
  param_2[3] = ~-(uint)((*(float *)((char *)&auVar1 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar4);
  return (uint)param_2;
}

/* ref: FUN_00d420c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d420c0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd420c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  fVar4 = (fVar2 + fVar1) + fVar3;
  fVar5 = (fVar2 + fVar1) + fVar3;
  fVar6 = (fVar2 + fVar1) + fVar3;
  fVar3 = (fVar2 + fVar1) + fVar3;
  memset(&auVar9, 0, 12);
  (*(undefined4 *)((char *)&auVar9 + 12)) = 0;
  (*(undefined4 *)((char *)&auVar10 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar10 + 0)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar10 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar10 + 12)) = (undefined4)gen_fl2bits(fVar3);
  gen_rsqrtps(&(auVar10), &(auVar9), &(auVar10));
  fVar8 = (*(float *)((char *)&auVar10 + 0));
  fVar11 = (*(float *)((char *)&auVar10 + 4));
  fVar12 = (*(float *)((char *)&auVar10 + 8));
  fVar13 = (*(float *)((char *)&auVar10 + 12));
  fVar1 = *(float *)&REFG(undefined, 0x1136bf4) - (fVar11 * fVar5) * fVar11;
  fVar2 = *(float *)&REFG(undefined, 0x1136bf8) - (fVar12 * fVar6) * fVar12;
  fVar7 = *(float *)&REFG(undefined, 0x1136bfc) - (fVar13 * fVar3) * fVar13;
  fVar11 = *(float *)&REFG(undefined, 0x1136c04) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136c08) * fVar12;
  fVar13 = *(float *)&REFG(undefined, 0x1136c0c) * fVar13;
  *param_2 = ~-(uint)(fVar4 <= 0.0) &
             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136bf0) - (fVar8 * fVar4) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136c00) * fVar8));
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)gen_fl2bits(fVar1 * fVar11);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)gen_fl2bits(fVar2 * fVar12);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar13);
  return (uint)param_2;
}

/* ref: FUN_00d42330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d42330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd42330u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 1;
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136ca4));
  param_1[2] = param_2;
  param_1[3] = (undefined4)gen_fl2bits(param_3);
  return (uint)param_1;
}

/* ref: hkaCcdIkSolver::Solve */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d42360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd42360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0xc0, 0);
  undefined4 * puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  LPVOID pvVar6;
  int iVar7;
  float * pfVar8;
  uint uVar9;
  ushort * puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar30 [16];
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
    *puVar1 = ((char *)REFP(0x1136cb4));
    uVar2 = rdtsc();
    (*(int *)(gen_frame + 0xa8)) = (int)uVar2;
    puVar1[1] = (int)uVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar1 + 3;
  }
  (*(undefined4 *)(gen_frame + 0x74)) = *param_3;
  (*(undefined1 *)(gen_frame + 0xaf)) = 1;
  if (0 < param_2[1]) {
    (*(int *)(gen_frame + 0xa8)) = 0;
    (*(int *)(gen_frame + 0xa4)) = param_2[1];
    do {
      puVar10 = ((ushort *)GEN_TOP((*param_2 + (*(int *)(gen_frame + 0xa8)))));
      (*(int *)(gen_frame + 0x80)) = 0;
      (*(uint *)(gen_frame + 0x84)) = 0;
      (*(uint *)(gen_frame + 0x88)) = 0x80000000;
      (*(ushort * PTR32 *)(gen_frame + 0x94)) = puVar10;
      F_00d341d0(&(*(undefined1 *)(gen_frame + 0x8f)),(*(undefined4 *)(gen_frame + 0x74)),(uint)*puVar10,(uint)puVar10[1],&(*(int *)(gen_frame + 0x80)));
      (*(uint *)(gen_frame + 0xa0)) = (*(uint *)(gen_frame + 0x84));
      if ((*(uint *)(gen_frame + 0x84)) == 0) {
        (*(undefined1 *)(gen_frame + 0xaf)) = 0;
      }
      else {
        if ((*((byte *)GEN_TOP((param_3[7] + (short)puVar10[1] * 4))) & 2) != 0) {
          F_00d31930(param_3 GEN_EDX_ARG,(int)(short)puVar10[1]);
        }
        (*(int *)(gen_frame + 0x7c)) = 0;
        if (0 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x9c)) + 8)) {
          (*(uint *)(gen_frame + 0x78)) = (*(uint *)(gen_frame + 0xa0)) - 2;
          do {
            fVar4 = *(float *)&REFG(undefined, 0x1136c90);
            (*(uint *)(gen_frame + 0xa0)) = (*(uint *)(gen_frame + 0x78)) & 0xffff;
            if (-1 < (short)(*(uint *)(gen_frame + 0x78))) {
              memset(&auVar35, 0, 12);
              (*(undefined4 *)((char *)&auVar35 + 12)) = 0;
              fVar11 = 0.0 - *(float *)&REFG(undefined, 0x1136c90);
              (*(float *)(gen_frame + 0x50)) = *(float *)&REFG(undefined, 0x1136c70);
              (*(float *)(gen_frame + 0x54)) = *(float *)&REFG(undefined, 0x1136c74);
              (*(float *)(gen_frame + 0x58)) = *(float *)&REFG(undefined, 0x1136c78);
              (*(float *)(gen_frame + 0x5c)) = *(float *)&REFG(undefined, 0x1136c7c);
              (*(int *)(gen_frame + 0x90)) = (short)(*(uint *)(gen_frame + 0x78)) * 2;
              memcpy(((undefined1 *)(gen_frame + 0x30)), &(auVar35), sizeof(auVar35) < sizeof(((undefined1 *)(gen_frame + 0x30))) ? sizeof(auVar35) : sizeof(((undefined1 *)(gen_frame + 0x30))));
              (*(float *)(gen_frame + 0x60)) = *(float *)&REFG(undefined, 0x1136c80);
              (*(float *)(gen_frame + 0x64)) = *(float *)&REFG(undefined, 0x1136c84);
              (*(float *)(gen_frame + 0x68)) = *(float *)&REFG(undefined, 0x1136c88);
              (*(float *)(gen_frame + 0x6c)) = *(float *)&REFG(undefined, 0x1136c8c);
              do {
                (*(uint *)(gen_frame + 0x70)) = (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + (*(int *)(gen_frame + 0x80)))));
                iVar7 = (int)(short)puVar10[1];
                if ((*((byte *)GEN_TOP((param_3[7] + iVar7 * 4))) & 2) == 0) {
                  (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP((iVar7 * 0x30 + param_3[4])));
                }
                else {
                  (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP(F_00d31930(param_3 GEN_EDX_ARG,iVar7)));
                }
                iVar7 = (int)(short)(*(uint *)(gen_frame + 0x70));
                if ((*((byte *)GEN_TOP((param_3[7] + iVar7 * 4))) & 2) == 0) {
                  pfVar8 = ((float *)GEN_TOP((iVar7 * 0x30 + param_3[4])));
                }
                else {
                  pfVar8 = ((float *)GEN_TOP(F_00d31930(param_3 GEN_EDX_ARG,iVar7)));
                }
                fVar29 = *(*(float * PTR32 *)(gen_frame + 0x98)) - *pfVar8;
                fVar31 = (*(float * PTR32 *)(gen_frame + 0x98))[1] - pfVar8[1];
                fVar33 = (*(float * PTR32 *)(gen_frame + 0x98))[2] - pfVar8[2];
                fVar12 = fVar29 * fVar29;
                fVar13 = fVar31 * fVar31;
                fVar16 = fVar33 * fVar33;
                (*(float *)((char *)&auVar26 + 0)) = (fVar13 + fVar12) + fVar16;
                (*(float *)((char *)&auVar26 + 4)) = (fVar13 + fVar12) + fVar16;
                (*(float *)((char *)&auVar26 + 8)) = (fVar13 + fVar12) + fVar16;
                (*(float *)((char *)&auVar26 + 12)) = (fVar13 + fVar12) + fVar16;
                gen_rsqrtps(&(auVar35), &(in_XMM4), &(auVar26));
                fVar12 = (*(float *)((char *)&auVar35 + 0));
                fVar13 = (*(float *)((char *)&auVar35 + 4));
                fVar16 = (*(float *)((char *)&auVar35 + 8));
                fVar17 = (*(float *)((char *)&auVar35 + 12));
                fVar37 = (*(float *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0));
                fVar38 = (*(float *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4));
                fVar39 = (*(float *)((char *)((undefined1 *)(gen_frame + 0x30)) + 8));
                fVar40 = (*(float *)((char *)((undefined1 *)(gen_frame + 0x30)) + 12));
                fVar29 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar26 + 0)) <= fVar37) &
                                    (uint)gen_fl2bits(((*(float *)(gen_frame + 0x50)) - (fVar12 * (*(float *)((char *)&auVar26 + 0))) * fVar12
                                                      ) * ((*(float *)(gen_frame + 0x60)) * fVar12))) * fVar29;
                fVar31 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar26 + 4)) <= fVar38) &
                                    (uint)gen_fl2bits(((*(float *)(gen_frame + 0x54)) -
                                                      (fVar13 * (*(float *)((char *)&auVar26 + 4))) * fVar13) *
                                                      ((*(float *)(gen_frame + 0x64)) * fVar13))) * fVar31;
                fVar33 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar26 + 8)) <= fVar39) &
                                    (uint)gen_fl2bits(((*(float *)(gen_frame + 0x58)) -
                                                      (fVar16 * (*(float *)((char *)&auVar26 + 8))) * fVar16) *
                                                      ((*(float *)(gen_frame + 0x68)) * fVar16))) * fVar33;
                (*(float *)((char *)&auVar22 + 12)) =
                     gen_bits2f(~-(uint)((*(float *)((char *)&auVar26 + 12)) <= fVar40) &
                                (uint)gen_fl2bits(((*(float *)(gen_frame + 0x5c)) - (fVar17 * (*(float *)((char *)&auVar26 + 12))) * fVar17)
                                                  * ((*(float *)(gen_frame + 0x6c)) * fVar17))) *
                     ((*(float * PTR32 *)(gen_frame + 0x98))[3] - pfVar8[3]);
                (*(float *)(gen_frame + 0x0)) = fVar29;
                (*(float *)(gen_frame + 0x4)) = fVar31;
                (*(float *)(gen_frame + 0x8)) = fVar33;
                (*(float *)(gen_frame + 0xc)) = (*(float *)((char *)&auVar22 + 12));
                fVar13 = *(float *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 8) - *pfVar8;
                fVar32 = *(float *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 10) - pfVar8[1];
                fVar34 = *(float *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 0xc) - pfVar8[2];
                fVar12 = fVar13 * fVar13;
                fVar16 = fVar32 * fVar32;
                fVar17 = fVar34 * fVar34;
                (*(undefined4 *)((char *)&auVar36 + 4)) = (undefined4)gen_fl2bits(fVar12);
                (*(undefined4 *)((char *)&auVar36 + 0)) = (undefined4)gen_fl2bits(fVar12);
                (*(undefined4 *)((char *)&auVar36 + 8)) = (undefined4)gen_fl2bits(fVar12);
                (*(undefined4 *)((char *)&auVar36 + 12)) = (undefined4)gen_fl2bits(fVar12);
                (*(float *)((char *)&auVar27 + 0)) = (fVar16 + fVar12) + fVar17;
                (*(float *)((char *)&auVar27 + 4)) = (fVar16 + fVar12) + fVar17;
                (*(float *)((char *)&auVar27 + 8)) = (fVar16 + fVar12) + fVar17;
                (*(float *)((char *)&auVar27 + 12)) = (fVar16 + fVar12) + fVar17;
                gen_rsqrtps(&(auVar35), &(auVar36), &(auVar27));
                fVar16 = (*(float *)((char *)&auVar35 + 0));
                fVar17 = (*(float *)((char *)&auVar35 + 4));
                fVar14 = (*(float *)((char *)&auVar35 + 8));
                fVar12 = *(float *)((*(undefined * PTR32 *)(gen_frame + 0x9c)) + 0xc);
                fVar13 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar27 + 0)) <= fVar37) &
                                    (uint)gen_fl2bits(((*(float *)(gen_frame + 0x50)) - (fVar16 * (*(float *)((char *)&auVar27 + 0))) * fVar16
                                                      ) * ((*(float *)(gen_frame + 0x60)) * fVar16))) * fVar13;
                fVar32 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar27 + 4)) <= fVar38) &
                                    (uint)gen_fl2bits(((*(float *)(gen_frame + 0x54)) -
                                                      (fVar17 * (*(float *)((char *)&auVar27 + 4))) * fVar17) *
                                                      ((*(float *)(gen_frame + 0x64)) * fVar17))) * fVar32;
                fVar34 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar27 + 8)) <= fVar39) &
                                    (uint)gen_fl2bits(((*(float *)(gen_frame + 0x58)) -
                                                      (fVar14 * (*(float *)((char *)&auVar27 + 8))) * fVar14) *
                                                      ((*(float *)(gen_frame + 0x68)) * fVar14))) * fVar34;
                (*(float *)(gen_frame + 0x10)) = *(float *)&REFG(undefined, 0x1138bd0);
                (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x1138bd4);
                (*(float *)(gen_frame + 0x18)) = *(float *)&REFG(undefined, 0x1138bd8);
                (*(float *)(gen_frame + 0x1c)) = *(float *)&REFG(undefined, 0x1138bdc);
                fVar16 = fVar13 * fVar29;
                fVar14 = fVar32 * fVar31;
                fVar18 = fVar34 * fVar33;
                fVar25 = (fVar14 + fVar16) + fVar18;
                fVar17 = ((fVar25 * fVar12 + (*(float *)&REFG(undefined, 0x1138af0) - fVar12)) +
                         *(float *)&REFG(undefined, 0x1138af0)) * *(float *)&REFG(undefined, 0x1138bd0);
                fVar15 = ((((fVar14 + fVar16) + fVar18) * fVar12 +
                          (*(float *)&REFG(undefined, 0x1138af4) - fVar12)) + *(float *)&REFG(undefined, 0x1138af4)) *
                         *(float *)&REFG(undefined, 0x1138bd4);
                fVar19 = ((((fVar14 + fVar16) + fVar18) * fVar12 +
                          (*(float *)&REFG(undefined, 0x1138af8) - fVar12)) + *(float *)&REFG(undefined, 0x1138af8)) *
                         *(float *)&REFG(undefined, 0x1138bd8);
                fVar16 = ((((fVar14 + fVar16) + fVar18) * fVar12 +
                          (*(float *)&REFG(undefined, 0x1138afc) - fVar12)) + *(float *)&REFG(undefined, 0x1138afc)) *
                         *(float *)&REFG(undefined, 0x1138bdc);
                if (((GEN_ISNAN(fVar25) || GEN_ISNAN(fVar11)) || fVar25 < fVar11) ||
                    ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar37)) || fVar17 <= fVar37)) {
                  F_00d99360(&(*(float *)(gen_frame + 0x40)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
                }
                else {
                  fVar14 = *(float *)&REFG(undefined, 0x1138ca0);
                  fVar18 = *(float *)&REFG(undefined, 0x1138ca4);
                  fVar20 = *(float *)&REFG(undefined, 0x1138ca8);
                  fVar21 = *(float *)&REFG(undefined, 0x1138cac);
                  if (!(fVar4 < fVar25)) {
                    (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits(fVar15);
                    (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits(fVar17);
                    (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits(fVar19);
                    (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits(fVar16);
                    gen_rsqrtps(&(auVar35), ((undefined1 *)(gen_frame + 0x30)), &(auVar3));
                    fVar14 = (*(float *)((char *)&auVar35 + 0));
                    fVar18 = (*(float *)((char *)&auVar35 + 4));
                    fVar25 = (*(float *)((char *)&auVar35 + 8));
                    fVar20 = (*(float *)((char *)&auVar35 + 12));
                    (*(float *)((char *)&auVar28 + 0)) =
                         gen_bits2f(~-(uint)(fVar17 <= fVar37) &
                                    (uint)gen_fl2bits((((*(float *)(gen_frame + 0x50)) - (fVar14 * fVar17) * fVar14) *
                                                      ((*(float *)(gen_frame + 0x60)) * fVar14)) * fVar17));
                    (*(float *)((char *)&auVar28 + 4)) =
                         gen_bits2f(~-(uint)(fVar15 <= fVar38) &
                                    (uint)gen_fl2bits((((*(float *)(gen_frame + 0x54)) - (fVar18 * fVar15) * fVar18) *
                                                      ((*(float *)(gen_frame + 0x64)) * fVar18)) * fVar15));
                    (*(float *)((char *)&auVar28 + 8)) =
                         gen_bits2f(~-(uint)(fVar19 <= fVar39) &
                                    (uint)gen_fl2bits((((*(float *)(gen_frame + 0x58)) - (fVar25 * fVar19) * fVar25) *
                                                      ((*(float *)(gen_frame + 0x68)) * fVar25)) * fVar19));
                    (*(float *)((char *)&auVar28 + 12)) =
                         gen_bits2f(~-(uint)(fVar16 <= fVar40) &
                                    (uint)gen_fl2bits((((*(float *)(gen_frame + 0x5c)) - (fVar20 * fVar16) * fVar20) *
                                                      ((*(float *)(gen_frame + 0x6c)) * fVar20)) * fVar16));
                    (*(undefined4 *)((char *)&auVar22 + 4)) = (undefined4)gen_fl2bits(fVar33);
                    (*(undefined4 *)((char *)&auVar22 + 0)) = (undefined4)gen_fl2bits(fVar31);
                    (*(undefined4 *)((char *)&auVar22 + 8)) = (undefined4)gen_fl2bits(fVar29);
                    gen_rcpps(&(auVar35), &(auVar22), &(auVar28));
                    fVar14 = (((*(float *)&REFG(undefined, 0x1136c60) - (*(float *)((char *)&auVar35 + 0)) * (*(float *)((char *)&auVar28 + 0))) *
                              (*(float *)((char *)&auVar35 + 0))) * (*(float *)&REFG(undefined, 0x1138bd0) * fVar12)) *
                             (fVar34 * fVar31 - fVar32 * fVar33);
                    fVar18 = (((*(float *)&REFG(undefined, 0x1136c64) - (*(float *)((char *)&auVar35 + 4)) * (*(float *)((char *)&auVar28 + 4))) *
                              (*(float *)((char *)&auVar35 + 4))) * (*(float *)&REFG(undefined, 0x1138bd4) * fVar12)) *
                             (fVar13 * fVar33 - fVar34 * fVar29);
                    fVar20 = (((*(float *)&REFG(undefined, 0x1136c68) - (*(float *)((char *)&auVar35 + 8)) * (*(float *)((char *)&auVar28 + 8))) *
                              (*(float *)((char *)&auVar35 + 8))) * (*(float *)&REFG(undefined, 0x1138bd8) * fVar12)) *
                             (fVar32 * fVar29 - fVar13 * fVar31);
                    fVar12 = fVar20 * fVar20 + fVar14 * fVar14;
                    fVar13 = (*(float *)((char *)&auVar28 + 12)) * (*(float *)((char *)&auVar28 + 12)) + fVar18 * fVar18;
                    fVar16 = fVar14 * fVar14 + fVar20 * fVar20;
                    fVar17 = fVar18 * fVar18 + (*(float *)((char *)&auVar28 + 12)) * (*(float *)((char *)&auVar28 + 12));
                    (*(float *)((char *)&auVar23 + 0)) = fVar13 + fVar12;
                    (*(float *)((char *)&auVar23 + 4)) = fVar12 + fVar13;
                    (*(float *)((char *)&auVar23 + 8)) = fVar17 + fVar16;
                    (*(float *)((char *)&auVar23 + 12)) = fVar16 + fVar17;
                    gen_rsqrtps(&(auVar35), &(auVar28), &(auVar23));
                    fVar12 = (*(float *)((char *)&auVar35 + 0));
                    fVar13 = (*(float *)((char *)&auVar35 + 4));
                    fVar16 = (*(float *)((char *)&auVar35 + 8));
                    fVar17 = (*(float *)((char *)&auVar35 + 12));
                    fVar14 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar23 + 0)) <= fVar37) &
                                        (uint)gen_fl2bits(((*(float *)(gen_frame + 0x50)) -
                                                          (fVar12 * (*(float *)((char *)&auVar23 + 0))) * fVar12) *
                                                          (fVar12 * (*(float *)(gen_frame + 0x60))))) * fVar14;
                    fVar18 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar23 + 4)) <= fVar38) &
                                        (uint)gen_fl2bits(((*(float *)(gen_frame + 0x54)) -
                                                          (fVar13 * (*(float *)((char *)&auVar23 + 4))) * fVar13) *
                                                          (fVar13 * (*(float *)(gen_frame + 0x64))))) * fVar18;
                    fVar20 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar23 + 8)) <= fVar39) &
                                        (uint)gen_fl2bits(((*(float *)(gen_frame + 0x58)) -
                                                          (fVar16 * (*(float *)((char *)&auVar23 + 8))) * fVar16) *
                                                          (fVar16 * (*(float *)(gen_frame + 0x68))))) * fVar20;
                    fVar21 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar23 + 12)) <= fVar40) &
                                        (uint)gen_fl2bits(((*(float *)(gen_frame + 0x5c)) -
                                                          (fVar17 * (*(float *)((char *)&auVar23 + 12))) * fVar17) *
                                                          (fVar17 * (*(float *)(gen_frame + 0x6c))))) * (*(float *)((char *)&auVar28 + 12));
                  }
                  (*(float *)(gen_frame + 0x40)) = fVar14;
                  (*(float *)(gen_frame + 0x44)) = fVar18;
                  (*(float *)(gen_frame + 0x48)) = fVar20;
                  (*(float *)(gen_frame + 0x4c)) = fVar21;
                }
                if ((*((byte *)GEN_TOP((param_3[7] + iVar7 * 4))) & 2) == 0) {
                  uVar9 = iVar7 * 0x30 + param_3[4];
                }
                else {
                  uVar9 = F_00d31930(param_3 GEN_EDX_ARG,iVar7);
                }
                uVar2 = *((undefined8 *)GEN_TOP((uVar9 + 0x10)));
                fVar12 = *((float *)GEN_TOP((uVar9 + 0x1c)));
                (*(undefined8 *)(gen_frame + 0x20)) = uVar2;
                uVar2 = (*(undefined8 *)(gen_frame + 0x20));
                (*(undefined8 *)(gen_frame + 0x28)) = *((undefined8 *)GEN_TOP((uVar9 + 0x18)));
                uVar5 = (*(undefined8 *)(gen_frame + 0x28));
                (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) = gen_bits2f((uint)uVar2);
                (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
                (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) = gen_bits2f((uint)*((undefined8 *)GEN_TOP((uVar9 + 0x18))));
                fVar13 = (*(float *)(gen_frame + 0x40)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0));
                fVar16 = (*(float *)(gen_frame + 0x44)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4));
                fVar17 = (*(float *)(gen_frame + 0x48)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0));
                fVar32 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) * (*(float *)(gen_frame + 0x44)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) * (*(float *)(gen_frame + 0x48))) +
                         (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) * (*(float *)(gen_frame + 0x4c))) + fVar12 * (*(float *)(gen_frame + 0x40));
                fVar14 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) * (*(float *)(gen_frame + 0x48)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) * (*(float *)(gen_frame + 0x40))) +
                         (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) * (*(float *)(gen_frame + 0x4c))) + fVar12 * (*(float *)(gen_frame + 0x44));
                fVar15 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) * (*(float *)(gen_frame + 0x40)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) * (*(float *)(gen_frame + 0x44))) +
                         (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) * (*(float *)(gen_frame + 0x4c))) + fVar12 * (*(float *)(gen_frame + 0x48));
                (*(float *)((char *)&auVar30 + 0)) = fVar12 * (*(float *)(gen_frame + 0x4c)) - ((fVar16 + fVar13) + fVar17);
                (*(float *)((char *)&auVar30 + 4)) = fVar12 * (*(float *)(gen_frame + 0x4c)) - ((fVar16 + fVar13) + fVar17);
                (*(float *)((char *)&auVar30 + 8)) = fVar12 * (*(float *)(gen_frame + 0x4c)) - ((fVar16 + fVar13) + fVar17);
                (*(float *)((char *)&auVar30 + 12)) = fVar12 * (*(float *)(gen_frame + 0x4c)) - ((fVar16 + fVar13) + fVar17);
                fVar12 = fVar15 * fVar15 + fVar32 * fVar32;
                fVar13 = (*(float *)((char *)&auVar30 + 12)) * (*(float *)((char *)&auVar30 + 12)) + fVar14 * fVar14;
                fVar16 = fVar32 * fVar32 + fVar15 * fVar15;
                fVar17 = fVar14 * fVar14 + (*(float *)((char *)&auVar30 + 12)) * (*(float *)((char *)&auVar30 + 12));
                (*(float *)((char *)&auVar24 + 0)) = fVar13 + fVar12;
                (*(float *)((char *)&auVar24 + 4)) = fVar12 + fVar13;
                (*(float *)((char *)&auVar24 + 8)) = fVar17 + fVar16;
                (*(float *)((char *)&auVar24 + 12)) = fVar16 + fVar17;
                gen_rsqrtps(&(auVar35), &(auVar30), &(auVar24));
                fVar34 = (*(float *)((char *)&auVar35 + 0));
                fVar18 = (*(float *)((char *)&auVar35 + 4));
                fVar19 = (*(float *)((char *)&auVar35 + 8));
                fVar29 = (*(float *)((char *)&auVar35 + 12));
                (*(float *)((char *)&in_XMM4 + 0)) = (fVar34 * (*(float *)((char *)&auVar24 + 0))) * fVar34;
                (*(float *)((char *)&in_XMM4 + 4)) = (fVar18 * (*(float *)((char *)&auVar24 + 4))) * fVar18;
                (*(float *)((char *)&in_XMM4 + 8)) = (fVar19 * (*(float *)((char *)&auVar24 + 8))) * fVar19;
                (*(float *)((char *)&in_XMM4 + 12)) = (fVar29 * (*(float *)((char *)&auVar24 + 12))) * fVar29;
                fVar34 = fVar34 * (*(float *)(gen_frame + 0x60));
                fVar18 = fVar18 * (*(float *)(gen_frame + 0x64));
                fVar19 = fVar19 * (*(float *)(gen_frame + 0x68));
                fVar29 = fVar29 * (*(float *)(gen_frame + 0x6c));
                fVar12 = (*(float *)(gen_frame + 0x50)) - (*(float *)((char *)&in_XMM4 + 0));
                fVar13 = (*(float *)(gen_frame + 0x54)) - (*(float *)((char *)&in_XMM4 + 4));
                fVar16 = (*(float *)(gen_frame + 0x58)) - (*(float *)((char *)&in_XMM4 + 8));
                fVar17 = (*(float *)(gen_frame + 0x5c)) - (*(float *)((char *)&in_XMM4 + 12));
                (*(undefined8 *)(gen_frame + 0x20)) = uVar2;
                (*(undefined8 *)(gen_frame + 0x28)) = uVar5;
                uVar9 = F_00d32670(param_3 GEN_EDX_ARG,iVar7,1);
                (*(int *)(gen_frame + 0x90)) = (*(int *)(gen_frame + 0x90)) - 2;
                *((float *)GEN_TOP((uVar9 + 0x10))) = (fVar12 * fVar34) * fVar32;
                *((float *)GEN_TOP((uVar9 + 0x14))) = (fVar13 * fVar18) * fVar14;
                *((float *)GEN_TOP((uVar9 + 0x18))) = (fVar16 * fVar19) * fVar15;
                *((float *)GEN_TOP((uVar9 + 0x1c))) = (fVar17 * fVar29) * (*(float *)((char *)&auVar30 + 12));
                uVar9 = (*(uint *)(gen_frame + 0xa0)) - 1;
                (*(uint *)(gen_frame + 0xa0)) = uVar9;
                puVar10 = (*(ushort * PTR32 *)(gen_frame + 0x94));
              } while (-1 < (short)uVar9);
            }
            iVar7 = (*(int *)(gen_frame + 0x7c)) + 1;
            (*(int *)(gen_frame + 0x7c)) = iVar7;
          } while (iVar7 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x9c)) + 8));
        }
      }
      (*(uint *)(gen_frame + 0x84)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x88))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x80)),((*(uint *)(gen_frame + 0x88)) & 0x3fffffff) * 2);
      }
      (*(int *)(gen_frame + 0xa8)) = (*(int *)(gen_frame + 0xa8)) + 0x20;
      iVar7 = (*(int *)(gen_frame + 0xa4)) - 1;
      (*(int *)(gen_frame + 0xa4)) = iVar7;
      (*(int *)(gen_frame + 0x80)) = 0;
      (*(uint *)(gen_frame + 0x88)) = 0x80000000;
    } while (iVar7 != 0);
  }
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
    *puVar1 = &REFG(undefined, 0x1136cb0);
    uVar2 = rdtsc();
    (*(int *)(gen_frame + 0xa4)) = (int)uVar2;
    puVar1[1] = (int)uVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar1 + 3;
    *param_1 = (*(undefined1 *)(gen_frame + 0xaf));
    return (uint)param_1;
  }
  *param_1 = (*(undefined1 *)(gen_frame + 0xaf));
  return (uint)param_1;
}

/* ref: FUN_00d428f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d428f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd428f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + *in_ecx;
}

/* ref: Global::SetW */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d42900(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd42900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  *in_ecx = *in_ecx;
  in_ecx[1] = in_ecx[1];
  in_ecx[2] = in_ecx[2];
  in_ecx[3] = uVar1;
  return param_2;
}

/* ref: Global::VectorDiv */
GEN_LIB GEN_FRAME uint F_00d42940(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(gen_v16 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd42940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar8 [16];
  
  memcpy(&(auVar1), &(*param_3), sizeof(*param_3) < sizeof(auVar1) ? sizeof(*param_3) : sizeof(auVar1));
  gen_rcpps(&(auVar8), &(in_XMM2), &(auVar1));
  fVar5 = *(float *)&REFG(undefined, 0x1136c64) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar8 + 4));
  fVar6 = *(float *)&REFG(undefined, 0x1136c68) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar8 + 8));
  fVar7 = *(float *)&REFG(undefined, 0x1136c6c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar8 + 12));
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = *param_2 * ((*(float *)&REFG(undefined, 0x1136c60) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar8 + 0))) * (*(float *)((char *)&auVar8 + 0)));
  param_1[1] = fVar2 * (fVar5 * (*(float *)((char *)&auVar8 + 4)));
  param_1[2] = fVar3 * (fVar6 * (*(float *)((char *)&auVar8 + 8)));
  param_1[3] = fVar4 * (fVar7 * (*(float *)((char *)&auVar8 + 12)));
  return (uint)param_3;
}

/* ref: FUN_00d42970 */
GEN_LIB GEN_FRAME gen_r16 F_00d42970(GEN_P(gen_v16 * __return_storage_ptr__, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd42970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * __return_storage_ptr__ = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined1 gen_rv16 [16];
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar3 [16];
  float fVar6;
  
  memcpy(&(auVar1), &(*__return_storage_ptr__), sizeof(*__return_storage_ptr__) < sizeof(auVar1) ? sizeof(*__return_storage_ptr__) : sizeof(auVar1));
  gen_rsqrtps(&(auVar3), &(in_XMM2), &(auVar1));
  fVar2 = (*(float *)((char *)&auVar3 + 0));
  fVar4 = (*(float *)((char *)&auVar3 + 4));
  fVar5 = (*(float *)((char *)&auVar3 + 8));
  fVar6 = (*(float *)((char *)&auVar3 + 12));
  (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)
                 gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c74) - ((*(float *)((char *)&auVar1 + 4)) * fVar4) * fVar4) *
                             (*(float *)&REFG(undefined, 0x1136c84) * fVar4)) * (*(float *)((char *)&auVar1 + 4)));
  (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)
                 gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c70) - ((*(float *)((char *)&auVar1 + 0)) * fVar2) * fVar2) *
                             (*(float *)&REFG(undefined, 0x1136c80) * fVar2)) * (*(float *)((char *)&auVar1 + 0)));
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)
                 gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c78) - ((*(float *)((char *)&auVar1 + 8)) * fVar5) * fVar5) *
                             (*(float *)&REFG(undefined, 0x1136c88) * fVar5)) * (*(float *)((char *)&auVar1 + 8)));
  (*(undefined4 *)((char *)&auVar3 + 12)) =
       (undefined4)
       gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c7c) - ((*(float *)((char *)&auVar1 + 12)) * fVar6) * fVar6) *
                   (*(float *)&REFG(undefined, 0x1136c8c) * fVar6)) * (*(float *)((char *)&auVar1 + 12)));
  memcpy(&(gen_rv16), &(auVar3), sizeof(auVar3) < sizeof(gen_rv16) ? sizeof(auVar3) : sizeof(gen_rv16));
  return GEN_R16(gen_rv16);
}

/* ref: Global::SetDiv */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d429b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(gen_v16 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd429b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar8 [16];
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar8), &(in_XMM2), &(auVar1));
  fVar5 = *(float *)&REFG(undefined, 0x1136c64) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar8 + 4));
  fVar6 = *(float *)&REFG(undefined, 0x1136c68) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar8 + 8));
  fVar7 = *(float *)&REFG(undefined, 0x1136c6c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar8 + 12));
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)this =
       *param_1 * ((*(float *)&REFG(undefined, 0x1136c60) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar8 + 0))) * (*(float *)((char *)&auVar8 + 0)));
  *((float *)GEN_TOP(((int)this + 4))) = fVar2 * (fVar5 * (*(float *)((char *)&auVar8 + 4)));
  *((float *)GEN_TOP(((int)this + 8))) = fVar3 * (fVar6 * (*(float *)((char *)&auVar8 + 8)));
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar4 * (fVar7 * (*(float *)((char *)&auVar8 + 12)));
  return (uint)param_2;
}

/* ref: FUN_00d429e0 */
GEN_LIB GEN_FRAME gen_r16 F_00d429e0(GEN_P(gen_v16 * __return_storage_ptr__, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd429e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * __return_storage_ptr__ = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined1 gen_rv16 [16];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar6 [16];
  float fVar9;
  
  memcpy(&(auVar6), &(*__return_storage_ptr__), sizeof(*__return_storage_ptr__) < sizeof(auVar6) ? sizeof(*__return_storage_ptr__) : sizeof(auVar6));
  fVar1 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  gen_rsqrtps(&(auVar6), &(in_XMM3), &(auVar6));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar7 = (*(float *)((char *)&auVar6 + 4));
  fVar8 = (*(float *)((char *)&auVar6 + 8));
  fVar9 = (*(float *)((char *)&auVar6 + 12));
  (*(undefined4 *)((char *)&auVar6 + 4)) = ~-(uint)(fVar2 <= 0.0) &
                 (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c74) - (fVar2 * fVar7) * fVar7) *
                                   (*(float *)&REFG(undefined, 0x1136c84) * fVar7)) * fVar2);
  (*(undefined4 *)((char *)&auVar6 + 0)) = ~-(uint)(fVar1 <= 0.0) &
                 (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c70) - (fVar1 * fVar5) * fVar5) *
                                   (*(float *)&REFG(undefined, 0x1136c80) * fVar5)) * fVar1);
  (*(undefined4 *)((char *)&auVar6 + 8)) = ~-(uint)(fVar3 <= 0.0) &
                 (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c78) - (fVar3 * fVar8) * fVar8) *
                                   (*(float *)&REFG(undefined, 0x1136c88) * fVar8)) * fVar3);
  (*(undefined4 *)((char *)&auVar6 + 12)) =
       ~-(uint)(fVar4 <= 0.0) &
       (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c7c) - (fVar4 * fVar9) * fVar9) *
                         (*(float *)&REFG(undefined, 0x1136c8c) * fVar9)) * fVar4);
  memcpy(&(gen_rv16), &(auVar6), sizeof(auVar6) < sizeof(gen_rv16) ? sizeof(auVar6) : sizeof(gen_rv16));
  return GEN_R16(gen_rv16);
}

/* ref: Global::DeleteReferencedObject_00d42a20 */
GEN_LIB GEN_FRAME uint F_00d42a20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd42a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaCcdIkSolver::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d42a50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd42a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00d42a90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d42a90(GEN_P(gen_v16 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd42a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  memcpy(&(auVar9), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar9) ? sizeof(*in_ecx) : sizeof(auVar9));
  fVar1 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1136c74) - (fVar2 * fVar10) * fVar10;
  fVar6 = *(float *)&REFG(undefined, 0x1136c78) - (fVar3 * fVar11) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136c7c) - (fVar4 * fVar12) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136c84) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136c88) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136c8c) * fVar12;
  *param_2 = ~-(uint)(fVar1 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c70) - (fVar1 * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136c80) * fVar8)) * fVar1);
  param_2[1] = ~-(uint)(fVar2 <= 0.0) & (uint)gen_fl2bits((fVar5 * fVar10) * fVar2);
  param_2[2] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar6 * fVar11) * fVar3);
  param_2[3] = ~-(uint)(fVar4 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar4);
  return (uint)param_2;
}

/* ref: FUN_00d42ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d42ae0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd42ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar3 = in_ecx[1] * in_ecx[1];
  fVar5 = in_ecx[2] * in_ecx[2];
  fVar6 = in_ecx[3] * in_ecx[3];
  fVar2 = fVar5 + fVar1;
  fVar4 = fVar6 + fVar3;
  fVar1 = fVar1 + fVar5;
  fVar3 = fVar3 + fVar6;
  fVar5 = fVar4 + fVar2;
  fVar2 = fVar2 + fVar4;
  fVar4 = fVar3 + fVar1;
  fVar1 = fVar1 + fVar3;
  memset(&auVar9, 0, 12);
  (*(undefined4 *)((char *)&auVar9 + 12)) = 0;
  (*(undefined4 *)((char *)&auVar10 + 4)) = (undefined4)gen_fl2bits(fVar2);
  (*(undefined4 *)((char *)&auVar10 + 0)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar10 + 8)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar10 + 12)) = (undefined4)gen_fl2bits(fVar1);
  gen_rsqrtps(&(auVar10), &(auVar9), &(auVar10));
  fVar8 = (*(float *)((char *)&auVar10 + 0));
  fVar11 = (*(float *)((char *)&auVar10 + 4));
  fVar12 = (*(float *)((char *)&auVar10 + 8));
  fVar13 = (*(float *)((char *)&auVar10 + 12));
  fVar3 = *(float *)&REFG(undefined, 0x1136c74) - (fVar11 * fVar2) * fVar11;
  fVar6 = *(float *)&REFG(undefined, 0x1136c78) - (fVar12 * fVar4) * fVar12;
  fVar7 = *(float *)&REFG(undefined, 0x1136c7c) - (fVar13 * fVar1) * fVar13;
  fVar11 = *(float *)&REFG(undefined, 0x1136c84) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136c88) * fVar12;
  fVar13 = *(float *)&REFG(undefined, 0x1136c8c) * fVar13;
  *param_2 = ~-(uint)(fVar5 <= 0.0) &
             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136c70) - (fVar8 * fVar5) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136c80) * fVar8));
  param_2[1] = ~-(uint)(fVar2 <= 0.0) & (uint)gen_fl2bits(fVar3 * fVar11);
  param_2[2] = ~-(uint)(fVar4 <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar12);
  param_2[3] = ~-(uint)(fVar1 <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar13);
  return (uint)param_2;
}

/* ref: hkaDefaultAnimationControl::vf14 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d42db0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd42db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x90))) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x90))) + 8)));
}

/* ref: hkaDefaultAnimationControl::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d42e20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd42e20u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  float fVar1;
  int * piVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 0xc))) + 0xc))) - *((float *)GEN_TOP((param_1 + 0x80))))
          - *((float *)GEN_TOP((param_1 + 0x7c)));
  if (fVar4 <= 0.0) {
    *param_3 = *((float *)GEN_TOP((param_1 + 8)));
    *param_4 = 0;
    return (uint)param_3;
  }
  piVar2 = param_4;
  *param_3 = (*((float *)GEN_TOP((param_1 + 8))) - *((float *)GEN_TOP((param_1 + 0x7c)))) +
             *((float *)GEN_TOP((param_1 + 0x40))) * param_2;
  *param_4 = 0;
  fVar1 = *param_3;
  if (fVar4 < fVar1) {
    iVar3 = (int)(fVar1 / fVar4);
    *param_4 = iVar3;
    if ((0 < (int)*((uint *)GEN_TOP((param_1 + 0x4c)))) &&
       (*((uint *)GEN_TOP((param_1 + 0x4c))) <= (uint)(*((int *)GEN_TOP((param_1 + 0x44))) + iVar3))) {
      *param_3 = fVar4;
      *param_4 = (*((int *)GEN_TOP((param_1 + 0x4c))) - *((int *)GEN_TOP((param_1 + 0x44)))) - 1;
      *param_3 = *param_3 + *((float *)GEN_TOP((param_1 + 0x7c)));
      return (uint)piVar2;
    }
  }
  else {
    if (!(fVar1 < 0.0)) goto LAB_00d42f22;
    iVar3 = (int)(fVar1 / fVar4) - 1;
    *param_4 = iVar3;
    if ((0 < *((int *)GEN_TOP((param_1 + 0x4c)))) &&
       (*((int *)GEN_TOP((param_1 + 0x4c))) + 1U <= (uint)(*((int *)GEN_TOP((param_1 + 0x48))) - iVar3))) {
      *param_3 = 0.0;
      *param_4 = *((int *)GEN_TOP((param_1 + 0x4c))) - *((int *)GEN_TOP((param_1 + 0x48)));
      *param_3 = *param_3 + *((float *)GEN_TOP((param_1 + 0x7c)));
      return (uint)piVar2;
    }
  }
  *param_3 = *param_3 - (float)iVar3 * fVar4;
LAB_00d42f22: ;
  *param_3 = *param_3 + *((float *)GEN_TOP((param_1 + 0x7c)));
  return (uint)piVar2;
}

/* ref: hkaDefaultAnimationControl::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d42f40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd42f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x90))) == 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0xc))) + 0x10)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x90))) + 0x28)));
}

/* ref: hkaDefaultAnimationControl::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d42f60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd42f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0xc))) + 0x14)));
}

/* ref: hkaDefaultAnimationControl::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d42f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd42f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x90))) == 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0x14)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x90))) + 0x28)));
}

/* ref: hkaDefaultAnimationControl::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d42f90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd42f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x90))) == 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0x10)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x90))) + 0x24)));
}

/* ref: hkaDefaultAnimationControl::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d42fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd42fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) GEN_EDX_ARG,*(undefined4 *)(this + 8),param_1,
                     param_2,param_3,param_4);
  return uVar1;
}

/* ref: hkaDefaultAnimationControl::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d42ff0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd42ff0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00d82ba0(param_1 GEN_EDX_FWD,param_2,&(*(undefined4 *)(gen_frame + 0x0)),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x7c)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x80)))));
  if (*((int *)GEN_TOP((param_1 + 0x90))) == 0) {
    *param_3 = (*(undefined4 *)(gen_frame + 0x0));
    param_3[1] = (*(undefined4 *)(gen_frame + 0x4));
    param_3[2] = (*(undefined4 *)(gen_frame + 0x8));
    param_3[3] = (*(undefined4 *)(gen_frame + 0xc));
    param_3[4] = (*(undefined4 *)(gen_frame + 0x10));
    param_3[5] = (*(undefined4 *)(gen_frame + 0x14));
    param_3[6] = (*(undefined4 *)(gen_frame + 0x18));
    param_3[7] = (*(undefined4 *)(gen_frame + 0x1c));
    param_3[8] = (*(undefined4 *)(gen_frame + 0x20));
    param_3[9] = (*(undefined4 *)(gen_frame + 0x24));
    param_3[10] = (*(undefined4 *)(gen_frame + 0x28));
    param_3[0xb] = (*(undefined4 *)(gen_frame + 0x2c));
    return (uint)param_3;
  }
  uVar1 = F_00d65320(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x90))) + 8))),&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: hkaDefaultAnimationControl::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d43090(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd43090u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float * pfVar4;
  code * pcVar5;
  int * piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_18;
  
  fVar11 = REFG(float, 0x1136c54);
  if (((*((int *)GEN_TOP((param_1 + 0x28))) != 0) &&
      (iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 0xc))), iVar8 != 0)) &&
     (fVar11 = (*((float *)GEN_TOP((iVar8 + 0xc))) - *((float *)GEN_TOP((param_1 + 0x80)))) - *((float *)GEN_TOP((param_1 + 0x7c))),
     fVar11 < 0.0)) {
    fVar11 = 0.0;
  }
  fVar9 = *((float *)GEN_TOP((param_1 + 8))) - *((float *)GEN_TOP((param_1 + 0x7c)));
  *((float *)GEN_TOP((param_1 + 8))) = fVar9;
  if (fVar9 < 0.0) {
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  }
  if (GEN_ISNAN(fVar11) != (GEN_ISNAN(fVar11) || fVar11 == 0.0)) goto LAB_00d43360;
  fVar9 = *((float *)GEN_TOP((param_1 + 0x40))) * param_2 + *((float *)GEN_TOP((param_1 + 8)));
  *((float *)GEN_TOP((param_1 + 8))) = fVar9;
  local_18 = 0;
  if (fVar11 < fVar9) {
    local_18 = (int)(fVar9 / fVar11);
    fVar9 = fVar9 - (float)local_18 * fVar11;
    *((float *)GEN_TOP((param_1 + 8))) = fVar9;
    if (!(0.0 < fVar9)) {
      fVar9 = 0.0;
    }
    *((int *)GEN_TOP((param_1 + 0x44))) = *((int *)GEN_TOP((param_1 + 0x44))) + local_18;
    *((float *)GEN_TOP((param_1 + 8))) = fVar9;
  }
  else if (fVar9 < 0.0) {
    iVar8 = (int)gen_bits2f((uint)gen_fl2bits(fVar9 / fVar11) ^ REFG(uint, 0x10920d0));
    fVar9 = (float)(iVar8 + 1) * fVar11 + fVar9;
    *((float *)GEN_TOP((param_1 + 8))) = fVar9;
    if (!(fVar9 < fVar11)) {
      fVar9 = fVar11;
    }
    *((int *)GEN_TOP((param_1 + 0x48))) = *((int *)GEN_TOP((param_1 + 0x48))) + iVar8 + 1;
    *((float *)GEN_TOP((param_1 + 8))) = fVar9;
    local_18 = -1 - iVar8;
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x4c)));
  if (0 < (int)uVar1) {
    if (*((uint *)GEN_TOP((param_1 + 0x44))) < uVar1) {
      if (*((uint *)GEN_TOP((param_1 + 0x48))) < uVar1 + 1) goto LAB_00d431c7;
      *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    }
    else {
      *((float *)GEN_TOP((param_1 + 8))) = fVar11;
    }
    *((undefined4 *)GEN_TOP((param_1 + 0x40))) = 0;
  }
LAB_00d431c7: ;
  fVar11 = REFG(float, 0x1087f04);
  pfVar4 = ((float *)GEN_TOP((param_1 + 0x74)));
  bVar3 = false;
  if (((!GEN_ISNAN(REFG(float, 0x1087f04)) && !GEN_ISNAN(*pfVar4)) &&
       (!(REFG(float, 0x1087f04) < *pfVar4) && REFG(uint, 0x1087f04) != *pfVar4)) &&
     (fVar9 = *((float *)GEN_TOP((param_1 + 0x70))) * ABS(param_2) + *((float *)GEN_TOP((param_1 + 0x74))),
     bVar2 = REFG(float, 0x1087f04) <= fVar9, *((float *)GEN_TOP((param_1 + 0x74))) = fVar9, bVar2)) {
    *((float *)GEN_TOP((param_1 + 0x74))) = fVar11;
    bVar3 = true;
    *((uint *)GEN_TOP((param_1 + 0x78))) = (uint)(*((int *)GEN_TOP((param_1 + 0x78))) != 0) * 2 + 1;
  }
  if ((*((int *)GEN_TOP((param_1 + 0x78))) == 1) ||
     (pfVar4 = ((float *)GEN_TOP((param_1 + 0x60))), *((int *)GEN_TOP((param_1 + 0x78))) == 0)) {
    pfVar4 = ((float *)GEN_TOP((param_1 + 0x50)));
  }
  fVar11 = *pfVar4;
  fVar9 = *((float *)GEN_TOP((param_1 + 0x74)));
  fVar10 = pfVar4[1] * REFG(float, 0x1087ef8);
  *((float *)GEN_TOP((param_1 + 0xc))) =
       ((((((fVar10 - fVar11) - pfVar4[2] * REFG(float, 0x1087ef8)) + pfVar4[3]) * ((fVar9 * fVar9) * fVar9) +
         ((fVar11 * REFG(float, 0x1087ef8) - pfVar4[1] * REFG(float, 0x10adb9c)) + pfVar4[2] * REFG(float, 0x1087ef8)) *
         (fVar9 * fVar9)) + (fVar10 - fVar11 * REFG(float, 0x1087ef8)) * fVar9) + fVar11) *
       *((float *)GEN_TOP((param_1 + 0x3c)));
  if ((local_18 != 0) && (iVar8 = 0, 0 < *((int *)GEN_TOP((param_1 + 0x88))))) {
    do {
      if (local_18 < 1) {
        piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x84))) + iVar8 * 4)));
        iVar7 = -local_18;
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 4)));
      }
      else {
        piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x84))) + iVar8 * 4)));
        pcVar5 = *((gen_code32 *)GEN_TOP(*piVar6));
        iVar7 = local_18;
      }
      (*pcVar5)(piVar6,param_1,(undefined4)gen_fl2bits(param_2),iVar7);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *((int *)GEN_TOP((param_1 + 0x88))));
  }
  if ((bVar3) && (iVar8 = 0, 0 < *((int *)GEN_TOP((param_1 + 0x88))))) {
    do {
      if ((*((int *)GEN_TOP((param_1 + 0x78))) == 1) || (*((int *)GEN_TOP((param_1 + 0x78))) == 0)) {
        piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x84))) + iVar8 * 4)));
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 8)));
      }
      else {
        piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x84))) + iVar8 * 4)));
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 0xc)));
      }
      (*pcVar5)(piVar6,param_1,(undefined4)gen_fl2bits(param_2));
      iVar8 = iVar8 + 1;
    } while (iVar8 < *((int *)GEN_TOP((param_1 + 0x88))));
  }
LAB_00d43360: ;
  *((float *)GEN_TOP((param_1 + 8))) = *((float *)GEN_TOP((param_1 + 0x7c))) + *((float *)GEN_TOP((param_1 + 8)));
  return 0;
}

/* ref: hkaDefaultAnimationControl::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd43380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  uint uVar8;
  undefined * phVar9;
  undefined4 * puVar10;
  int iVar11;
  undefined4 * puVar12;
  uint local_8;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc)));
  if (*(int *)(this + 0x90) == 0) {
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 8),param_1,param_2);
    return uVar8;
  }
  iVar2 = piVar1[4];
  phVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)(phVar9 + 0xc);
  uVar8 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)(phVar9 + 8) < (int)uVar8) || (*(uint *)(phVar9 + 0x10) < local_8 + uVar8)) {
    local_8 = F_00d94390(phVar9 GEN_EDX_ARG,uVar8);
  }
  else {
    *(uint *)(phVar9 + 0xc) = local_8 + uVar8;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0xc))))
            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) GEN_EDX_ARG,*(undefined4 *)(this + 8),local_8,param_2);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x90) + 8))) + 0x14)));
  iVar3 = *((int *)GEN_TOP((*(int *)(this + 0x90) + 0x28)));
  iVar11 = 0;
  sVar7 = 0;
  if (0 < iVar3) {
    do {
      puVar10 = ((undefined4 *)GEN_TOP((*((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x90) + 0x24))) + iVar11 * 2))) * 0x30 +
                *((int *)GEN_TOP((iVar2 + 0x24))))));
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      puVar12 = ((undefined4 *)GEN_TOP((iVar11 * 0x30 + param_1)));
      *puVar12 = *puVar10;
      puVar12[1] = uVar4;
      puVar12[2] = uVar5;
      puVar12[3] = uVar6;
      uVar4 = puVar10[5];
      uVar5 = puVar10[6];
      uVar6 = puVar10[7];
      puVar12[4] = puVar10[4];
      puVar12[5] = uVar4;
      puVar12[6] = uVar5;
      puVar12[7] = uVar6;
      uVar4 = puVar10[9];
      uVar5 = puVar10[10];
      uVar6 = puVar10[0xb];
      sVar7 = sVar7 + 1;
      puVar12[8] = puVar10[8];
      puVar12[9] = uVar4;
      puVar12[10] = uVar5;
      puVar12[0xb] = uVar6;
      iVar11 = (int)sVar7;
    } while (iVar11 < iVar3);
  }
  F_00d657d0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 8))),local_8,param_1,
             *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 0xc))),
             *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 0x18))),
             *((char *)GEN_TOP((*(int *)(this + 0x28) + 0x28))) == '\x01',0,0);
  phVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar8 <= *(int *)(phVar9 + 8)) && (uVar8 + local_8 == *(int *)(phVar9 + 0xc))) &&
     (*(uint *)(phVar9 + 0x14) != local_8)) {
    *(uint *)(phVar9 + 0xc) = local_8;
    return (uint)phVar9;
  }
  uVar8 = F_00d945c0(phVar9 GEN_EDX_ARG,local_8,uVar8);
  return uVar8;
}

/* ref: FUN_00d43510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43510(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd43510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  F_00d82c40(param_1 GEN_EDX_FWD,param_2);
  uVar5 = *(undefined4 *)&REFG(undefined, 0x1136ccc);
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1136cc8);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1136cc4);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1136cc0);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x1136ce4));
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x80000000;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  param_1[0x16] = uVar4;
  param_1[0x17] = uVar5;
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1136cdc);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1136cd8);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1136cd4);
  param_1[0x18] = *(undefined4 *)&REFG(undefined, 0x1136cd0);
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar3;
  param_1[0x1b] = uVar4;
  param_1[10] = param_2;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_4;
  param_1[0x24] = 0;
  if (param_3 == '\0') {
    param_1[0x1e] = 3;
    param_1[3] = 0;
  }
  else {
    param_1[0x1e] = 1;
    param_1[3] = uVar1;
  }
  param_1[0x1c] = GEN_FLT_TO(param_1[0x1c], REFG(float, 0x1094880));
  param_1[0x1d] = uVar1;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return (uint)param_1;
}

/* ref: FUN_00d435d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d435d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd435d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x90)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1136ce4));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x8c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x84))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0x80000000;
  uVar2 = F_00d82db0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00d43640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd43640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136d24));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  F_00d919e0(param_1 GEN_EDX_FWD);
  F_00d66360(param_1 GEN_EDX_ARG,param_2,(int)this + 0xc,(int)this + 0x18,(int)this + 0x24);
  return (uint)this;
}

/* ref: FUN_00d436b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d436b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd436b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136d24));
  F_00d91a80(this_00 GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x24))),(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),
                       (uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d43760 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d43760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd43760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x90))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x90))) GEN_EDX_FWD);
  }
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                                (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x30)));
    *((undefined2 *)GEN_TOP(((int)this_00 + 4))) = 0x30;
    uVar2 = F_00d43640(this_00 GEN_EDX_ARG,param_1,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
    *((uint *)GEN_TOP(((int)this + 0x90))) = uVar2;
    return;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  return;
}

/* ref: FUN_00d437d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d437d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd437d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  F_00d82c40(this GEN_EDX_FWD,param_1[10]);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1136ce4));
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((int *)GEN_TOP(((int)this + 0x3c))) = param_1[0xf];
  *((int *)GEN_TOP(((int)this + 0x40))) = param_1[0x10];
  *((int *)GEN_TOP(((int)this + 0x44))) = param_1[0x11];
  *((int *)GEN_TOP(((int)this + 0x48))) = param_1[0x12];
  iVar1 = param_1[0x15];
  iVar2 = param_1[0x16];
  iVar3 = param_1[0x17];
  *((int *)GEN_TOP(((int)this + 0x50))) = param_1[0x14];
  *((int *)GEN_TOP(((int)this + 0x54))) = iVar1;
  *((int *)GEN_TOP(((int)this + 0x58))) = iVar2;
  *((int *)GEN_TOP(((int)this + 0x5c))) = iVar3;
  iVar1 = param_1[0x19];
  iVar2 = param_1[0x1a];
  iVar3 = param_1[0x1b];
  *((int *)GEN_TOP(((int)this + 0x60))) = param_1[0x18];
  *((int *)GEN_TOP(((int)this + 100))) = iVar1;
  *((int *)GEN_TOP(((int)this + 0x68))) = iVar2;
  *((int *)GEN_TOP(((int)this + 0x6c))) = iVar3;
  *((int *)GEN_TOP(((int)this + 0x70))) = param_1[0x1c];
  *((int *)GEN_TOP(((int)this + 0x74))) = param_1[0x1d];
  *((int *)GEN_TOP(((int)this + 0x78))) = param_1[0x1e];
  *((int *)GEN_TOP(((int)this + 0x7c))) = param_1[0x1f];
  *((int *)GEN_TOP(((int)this + 0x80))) = param_1[0x20];
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG);
  F_00d43760(this GEN_EDX_ARG,uVar4);
  return (uint)this;
}

/* ref: FUN_00d438b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d438b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd438b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d438e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d438e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd438e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d43900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd43900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d43910 */
GEN_LIB GEN_FRAME uint F_00d43910(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd43910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d43960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd43960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d439a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d439a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd439a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d439e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d439e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd439e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d43a20 */
GEN_LIB GEN_FRAME uint F_00d43a20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd43a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaDefaultAnimationControl::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43a50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd43a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d435d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d43a90 */
GEN_LIB GEN_FRAME uint F_00d43a90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd43a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaDefaultAnimationControlMapperData::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43ac0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd43ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d436b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkaAnimationControlListener::vf0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d43b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd43b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkaAnimationControlListener::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43b30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd43b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1136d34));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d43c70 */
GEN_LIB GEN_FRAME float F_00d43c70(GEN_P(float in_xmm0, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd43c70u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float in_xmm0 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if ((!GEN_ISNAN(in_xmm0) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(in_xmm0 <= *(float *)&REFG(undefined, 0x1088114))) {
    return param_2;
  }
  return param_3;
}

/* ref: Global::FindMappedIndex */
GEN_LIB GEN_FRAME ushort F_00d43c90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd43c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  ushort uVar1;
  
  if ((param_3 != 0) &&
     (((short)param_2 <= (short)(ushort)param_1 ||
      (*((ushort *)GEN_TOP((param_3 + (short)(ushort)param_1 * 2))) != (ushort)param_1)))) {
    uVar1 = 0;
    if (0 < (short)param_2) {
      do {
        if (*((ushort *)GEN_TOP((param_3 + (short)uVar1 * 2))) == (ushort)param_1) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
      } while ((short)uVar1 < (short)param_2);
    }
    return 0xffff;
  }
  return (ushort)param_1;
}

/* ref: hkaAnimatedSkeleton::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43ce0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd43ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  int iVar6;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4)));
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0xc)))) {
    *puVar1 = ((char *)REFP(0x1136d90));
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 4))) = puVar1 + 3;
  }
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x14)))) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + iVar6 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *((int *)GEN_TOP((param_1 + 0x14))));
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4)));
  pvVar4 = pvVar5;
  if (puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0xc)))) {
    *puVar1 = &REFG(undefined, 0x1136cb0);
    uVar3 = rdtsc();
    pvVar4 = (LPVOID)uVar3;
    puVar1[1] = pvVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))) = puVar1 + 3;
  }
  return (uint)pvVar4;
}

/* ref: hkaAnimatedSkeleton::RemoveAnimationControl */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd43d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(this + 0x14)) {
    piVar2 = *(int * PTR32 *)(this + 0x10);
    while (((undefined *)GEN_TOP(*piVar2)) != param_1) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)(this + 0x14) <= (int)uVar1) {
        return uVar1;
      }
    }
    if (uVar1 != 0xffffffff) {
      *(int *)(this + 0x14) = *(int *)(this + 0x14) - 1;
      if (*(uint *)(this + 0x14) != uVar1) {
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + uVar1 * 4))) =
             *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(uint *)(this + 0x14) * 4)));
      }
      F_00d82a00(param_1 GEN_EDX_FWD,this + 8);
      uVar1 = F_00d91a80(param_1 GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::ControlDeletedCallback */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd43df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(this + 0xc)) {
    piVar2 = *(int * PTR32 *)(this + 8);
    while (((undefined *)GEN_TOP(*piVar2)) != param_1) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)(this + 0xc) <= (int)uVar1) {
        return uVar1;
      }
    }
    if (uVar1 != 0xffffffff) {
      *(int *)(this + 0xc) = *(int *)(this + 0xc) - 1;
      if (*(uint *)(this + 0xc) != uVar1) {
        *((undefined4 *)GEN_TOP((*(int *)(this + 8) + uVar1 * 4))) =
             *((undefined4 *)GEN_TOP((*(int *)(this + 8) + *(uint *)(this + 0xc) * 4)));
      }
      uVar1 = F_00d82a00(param_1 GEN_EDX_FWD,-(uint)(this != ((undefined *)GEN_TOP(0x8))) & (uint)this);
    }
  }
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::GetNumAnnotations */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43e50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd43e50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x14)))) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + iVar5 * 4)));
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x28))) + 0xc)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))
                        (piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 8))),(undefined4)gen_fl2bits(param_2));
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 + uVar3;
    } while (iVar5 < *((int *)GEN_TOP((param_1 + 0x14))));
  }
  return uVar4;
}

/* ref: hkaAnimatedSkeleton::GetAnnotations */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43ea0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd43ea0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x14)))) {
    do {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + local_8 * 4)));
      iVar1 = *((int *)GEN_TOP((iVar4 + 0x28)));
      puVar3 = ((ushort *)GEN_TOP((param_3 + uVar5 * 0xc)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0xc))) + 0x3c))))
                        (*((int * PTR32 *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 8))),
                         (undefined4)gen_fl2bits(param_2),puVar3,param_4 - uVar5);
      if ((*((int *)GEN_TOP((iVar1 + 0x14))) != 0) && (uVar5 < uVar2 + uVar5)) {
        iVar4 = (uVar2 + uVar5) - uVar5;
        do {
          *puVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x10))) + (uint)*puVar3 * 2)));
          puVar3 = puVar3 + 6;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
      }
      uVar5 = uVar5 + uVar2;
      local_8 = local_8 + 1;
    } while (local_8 < *((int *)GEN_TOP((param_1 + 0x14))));
  }
  return uVar5;
}

/* ref: hkaAnimatedSkeleton::AddAnimationControl */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d43f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd43f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined * phVar4;
  undefined4 * puVar5;
  undefined * phVar6;
  
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x10,4);
  }
  phVar6 = (*(undefined * PTR32 *)&gen_args[0]);
  *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(this + 0x14) * 4))) = (*(undefined * PTR32 *)&gen_args[0]);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  F_00d919e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  if (this == ((undefined *)GEN_TOP(0x0))) {
    phVar4 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    phVar4 = this + 8;
  }
  F_00d82b40(phVar6 GEN_EDX_ARG,phVar4);
  iVar1 = *(int *)(phVar6 + 0x28);
  if (iVar1 == 0) {
    bVar3 = true;
    bVar2 = false;
    phVar6 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    if (*((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_ARG);
    }
    phVar6 = *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xc)));
    bVar3 = false;
    bVar2 = true;
  }
  puVar5 = &(*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)&gen_args[0]) = phVar6;
  if ((bVar2) && (phVar6 != ((undefined *)GEN_TOP(0x0)))) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00d91a80(phVar6 GEN_EDX_ARG)));
  }
  if ((bVar3) && (phVar6 != ((undefined *)GEN_TOP(0x0)))) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00d91a80(phVar6 GEN_EDX_ARG)));
  }
  if (phVar6 != ((undefined *)GEN_TOP(0x0))) {
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar6 + 0x44))))(phVar6 GEN_EDX_ARG)));
    if ((puVar5 == ((undefined4 *)GEN_TOP(0x0))) && (puVar5 = ((undefined4 *)GEN_TOP(0x0)), *(int *)(this + 0x1c) != 0)) {
      puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar6 + 0x48))))(phVar6 GEN_EDX_ARG,*(int *)(this + 0x1c))));
    }
    if (*(int *)(phVar6 + 8) == 4) {
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
    }
  }
  return (uint)puVar5;
}

/* ref: FUN_00d44040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d44040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd44040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094884)));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1136d34));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1136dac));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1136da0));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  return (uint)this;
}

/* ref: FUN_00d44090 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d44090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd44090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1136dac));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1136da0));
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    do {
      F_00d82a00(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar3 * 4))) GEN_EDX_FWD,puVar1);
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar3 * 4))) GEN_EDX_ARG);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x14))));
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1136d34));
  return uVar2;
}

/* ref: hkaAnimatedSkeleton::SampleAndCombinePartialBones */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d44120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd44120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_FRAME_DECL(0xe0, 0);
  short sVar1;
  undefined4 * puVar2;
  undefined8 uVar3;
  int * piVar4;
  ushort uVar5;
  LPVOID pvVar6;
  uint uVar7;
  undefined * phVar8;
  gen_v16 * pauVar9;
  float * pfVar10;
  uint uVar11;
  uint uVar12;
  float * pfVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  float * pfVar17;
  undefined * phVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = this;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
  if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
    *puVar2 = ((char *)REFP(0x1136e04));
    puVar2[3] = ((char *)REFP(0x1136dfc));
    uVar3 = rdtsc();
    (*(int *)(gen_frame + 0xcc)) = (int)uVar3;
    puVar2[1] = (int)uVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar2 + 4;
  }
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x94)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0x9c)) = 0x80000000;
  (*(float * PTR32 *)(gen_frame + 0xa4)) = param_1;
  if (param_1 != ((float *)GEN_TOP(0x0))) {
    phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar7 = *(uint *)(phVar8 + 0xc);
    uVar15 = (int)((int)(uintptr_t)param_1) * 4 + 0x7fU & 0xffffff80;
    if ((*(int *)(phVar8 + 8) < (int)uVar15) || (*(uint *)(phVar8 + 0x10) < uVar7 + uVar15)) {
      uVar7 = F_00d94390(phVar8 GEN_EDX_ARG,uVar15);
    }
    else {
      *(uint *)(phVar8 + 0xc) = uVar7 + uVar15;
    }
  }
  (*(uint *)(gen_frame + 0x94)) = uVar7;
  (*(uint *)(gen_frame + 0x9c)) = (uint)param_1 | 0x80000000;
  (*(uint *)(gen_frame + 0xa0)) = uVar7;
  if ((int)((uint)param_1 & 0x3fffffff) < (int)param_1) {
    pfVar10 = ((float *)GEN_TOP((((uint)param_1 & 0x3fffffff) * 2)));
    if ((int)pfVar10 <= (int)param_1) {
      pfVar10 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x94)),pfVar10,4);
  }
  uVar7 = 0;
  (*(float * PTR32 *)(gen_frame + 0x98)) = param_1;
  (*(uint *)(gen_frame + 0xb0)) = 0;
  (*(uint *)(gen_frame + 0xb4)) = 0;
  (*(uint *)(gen_frame + 0xb8)) = 0x80000000;
  (*(uint *)(gen_frame + 0xc0)) = param_4;
  if (param_4 != 0) {
    phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar7 = *(uint *)(phVar8 + 0xc);
    uVar15 = param_4 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)(phVar8 + 8) < (int)uVar15) || (*(uint *)(phVar8 + 0x10) < uVar7 + uVar15)) {
      uVar7 = F_00d94390(phVar8 GEN_EDX_ARG,uVar15);
    }
    else {
      *(uint *)(phVar8 + 0xc) = uVar7 + uVar15;
    }
  }
  (*(uint *)(gen_frame + 0xb0)) = uVar7;
  (*(uint *)(gen_frame + 0xb8)) = param_4 | 0x80000000;
  (*(uint *)(gen_frame + 0xbc)) = uVar7;
  if ((int)(param_4 & 0x3fffffff) < (int)param_4) {
    uVar7 = (param_4 & 0x3fffffff) * 2;
    if ((int)uVar7 <= (int)param_4) {
      uVar7 = param_4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0xb0)),uVar7,4);
  }
  pfVar10 = ((float *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0xb4)) = param_4;
  if (param_1 != ((float *)GEN_TOP(0x0))) {
    pfVar17 = param_3 + 8;
    do {
      pfVar17[-8] = 0.0;
      pfVar17[-7] = 0.0;
      pfVar17[-6] = 0.0;
      pfVar17[-5] = 0.0;
      pfVar17[-4] = 0.0;
      pfVar17[-3] = 0.0;
      pfVar17[-2] = 0.0;
      pfVar17[-1] = 0.0;
      *pfVar17 = 0.0;
      pfVar17[1] = 0.0;
      pfVar17[2] = 0.0;
      pfVar17[3] = 0.0;
      *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar10) * 4))) = 0;
      pfVar10 = ((float *)GEN_TOP(((int)pfVar10 + 1)));
      pfVar17 = pfVar17 + 0xc;
    } while (pfVar10 < param_1);
  }
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      *((undefined4 *)GEN_TOP((param_6 + uVar7 * 4))) = 0;
      *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0xb0)) + uVar7 * 4))) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
  }
  (*(int *)(gen_frame + 0x84)) = 0;
  phVar18 = (*(undefined * PTR32 *)(gen_frame + 0x90));
  do {
    (*(int *)(gen_frame + 0x4c)) = 0;
    if (0 < *(int *)(phVar18 + 0x14)) {
      do {
        iVar14 = *((int *)GEN_TOP((*(int *)(phVar18 + 0x10) + (*(int *)(gen_frame + 0x4c)) * 4)));
        pfVar10 = ((float *)GEN_TOP((iVar14 + 0xc)));
        if ((GEN_ISNAN(REFG(float, 0x10905c4)) || GEN_ISNAN(*pfVar10)) ||
            (REFG(float, 0x10905c4) < *pfVar10 || REFG(uint, 0x10905c4) == *pfVar10)) {
          iVar16 = *((int *)GEN_TOP((iVar14 + 0x28)));
          (*(int *)(gen_frame + 0xcc)) = iVar16;
          if ((iVar16 != 0) && (*((char *)GEN_TOP((iVar16 + 0x28))) == (*(int *)(gen_frame + 0x84)))) {
            (*(int * PTR32 *)(gen_frame + 0xac)) = *((int * PTR32 *)GEN_TOP((iVar16 + 0xc)));
            phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar15 = *(uint *)(phVar8 + 0xc);
            uVar11 = (int)((int)(uintptr_t)param_1) * 0x30 + 0x7fU & 0xffffff80;
            uVar7 = uVar15 + uVar11;
            if ((*(int *)(phVar8 + 8) < (int)uVar11) || (*(uint *)(phVar8 + 0x10) < uVar7)) {
              uVar7 = F_00d94390(phVar8 GEN_EDX_ARG,uVar11);
              (*(uint *)(gen_frame + 0x88)) = uVar7;
            }
            else {
              *(uint *)(phVar8 + 0xc) = uVar7;
              (*(uint *)(gen_frame + 0x88)) = uVar15;
            }
            phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar15 = *(uint *)(phVar8 + 0xc);
            uVar12 = param_4 * 4 + 0x7f & 0xffffff80;
            uVar7 = uVar15 + uVar12;
            if ((*(int *)(phVar8 + 8) < (int)uVar12) || (*(uint *)(phVar8 + 0x10) < uVar7)) {
              uVar7 = F_00d94390(phVar8 GEN_EDX_ARG,uVar12);
              (*(uint *)(gen_frame + 0xa8)) = uVar7;
            }
            else {
              *(uint *)(phVar8 + 0xc) = uVar7;
              (*(uint *)(gen_frame + 0xa8)) = uVar15;
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
            puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
            if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
              *puVar2 = ((char *)REFP(0x1134e08));
              uVar3 = rdtsc();
              puVar2[1] = (int)uVar3;
              *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar2 + 3;
            }
            uVar7 = 0;
            (*(uint *)(gen_frame + 0x5c)) = 0;
            (*(float * PTR32 *)(gen_frame + 0x60)) = ((float *)GEN_TOP(0x0));
            (*(uint *)(gen_frame + 0x64)) = 0x80000000;
            (*(float * PTR32 *)(gen_frame + 0x6c)) = param_1;
            if (param_1 != ((float *)GEN_TOP(0x0))) {
              phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
              uVar7 = *(uint *)(phVar8 + 0xc);
              uVar15 = (int)((int)(uintptr_t)param_1) * 2 + 0x7fU & 0xffffff80;
              if ((*(int *)(phVar8 + 8) < (int)uVar15) ||
                 (*(uint *)(phVar8 + 0x10) < uVar7 + uVar15)) {
                uVar7 = F_00d94390(phVar8 GEN_EDX_ARG,uVar15);
              }
              else {
                *(uint *)(phVar8 + 0xc) = uVar7 + uVar15;
              }
            }
            (*(uint *)(gen_frame + 0x64)) = (uint)param_1 | 0x80000000;
            (*(uint *)(gen_frame + 0x5c)) = uVar7;
            (*(uint *)(gen_frame + 0x68)) = uVar7;
            if ((int)((uint)param_1 & 0x3fffffff) < (int)param_1) {
              pfVar10 = ((float *)GEN_TOP((((uint)param_1 & 0x3fffffff) * 2)));
              if ((int)pfVar10 <= (int)param_1) {
                pfVar10 = param_1;
              }
              F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x5c)),pfVar10,2);
            }
            uVar7 = 0;
            (*(float * PTR32 *)(gen_frame + 0x60)) = param_1;
            (*(uint *)(gen_frame + 0x70)) = 0;
            (*(uint *)(gen_frame + 0x74)) = 0;
            (*(uint *)(gen_frame + 0x78)) = 0x80000000;
            (*(uint *)(gen_frame + 0x80)) = param_4;
            if (param_4 != 0) {
              phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
              uVar7 = *(uint *)(phVar8 + 0xc);
              uVar15 = param_4 * 2 + 0x7f & 0xffffff80;
              if ((*(int *)(phVar8 + 8) < (int)uVar15) ||
                 (*(uint *)(phVar8 + 0x10) < uVar7 + uVar15)) {
                uVar7 = F_00d94390(phVar8 GEN_EDX_ARG,uVar15);
              }
              else {
                *(uint *)(phVar8 + 0xc) = uVar7 + uVar15;
              }
            }
            (*(uint *)(gen_frame + 0x78)) = param_4 | 0x80000000;
            (*(uint *)(gen_frame + 0x70)) = uVar7;
            (*(uint *)(gen_frame + 0x7c)) = uVar7;
            if ((int)(param_4 & 0x3fffffff) < (int)param_4) {
              uVar7 = (param_4 & 0x3fffffff) * 2;
              uVar15 = param_4;
              if ((int)param_4 < (int)uVar7) {
                uVar15 = uVar7;
              }
              F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x70)),uVar15,2);
            }
            pfVar10 = ((float *)GEN_TOP(0x0));
            (*(uint *)(gen_frame + 0x74)) = param_4;
            if (param_1 != ((float *)GEN_TOP(0x0))) {
              do {
                uVar5 = F_00d43c90((uint)*((ushort *)GEN_TOP((param_2 + (int)((int)(uintptr_t)pfVar10) * 2))),
                                   (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0xcc)) + 0x14))),
                                   *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xcc)) + 0x10))));
                *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x5c)) + (int)((int)(uintptr_t)pfVar10) * 2))) = uVar5;
                pfVar10 = ((float *)GEN_TOP(((int)pfVar10 + 1)));
              } while (pfVar10 < param_1);
            }
            uVar7 = 0;
            if (param_4 != 0) {
              do {
                uVar5 = F_00d43c90((uint)*((ushort *)GEN_TOP((param_5 + uVar7 * 2))),
                                   (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0xcc)) + 0x20))),
                                   *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xcc)) + 0x1c))));
                *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x70)) + uVar7 * 2))) = uVar5;
                uVar7 = uVar7 + 1;
              } while (uVar7 < param_4);
            }
            piVar4 = (*(int * PTR32 *)(gen_frame + 0xac));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xac)) + 0x14))))
                      ((*(int * PTR32 *)(gen_frame + 0xac)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar14 + 8))),(*(uint *)(gen_frame + 0x5c)),param_1,(*(uint *)(gen_frame + 0x88)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))
                      (piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar14 + 8))),(*(uint *)(gen_frame + 0x70)),param_4,(*(uint *)(gen_frame + 0xa8)));
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
            uVar15 = (*(uint *)(gen_frame + 0x80));
            uVar7 = (*(uint *)(gen_frame + 0x7c));
            puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
            if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
              *puVar2 = ((char *)REFP(0x1136df0));
              uVar3 = rdtsc();
              puVar2[1] = (int)uVar3;
              *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar2 + 3;
            }
            (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)GEN_TOP(0x0));
            fVar40 = REFG(float, 0x10addc0);
            if (param_1 != ((float *)GEN_TOP(0x0))) {
              iVar16 = (int)param_3 - (*(uint *)(gen_frame + 0x88));
              (*(int *)(gen_frame + 0xcc)) = iVar16;
              pauVar9 = ((gen_v16 *)GEN_TOP(((*(uint *)(gen_frame + 0x88)) + 0x10)));
              pfVar10 = param_3;
              do {
                sVar1 = *((short *)GEN_TOP(((*(uint *)(gen_frame + 0x5c)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xc8))) * 2)));
                if ((-1 < sVar1) && ((int)sVar1 < (*(int * PTR32 *)(gen_frame + 0xac))[4])) {
                  fVar44 = ((float)*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 0x10))) + (int)sVar1))) * fVar40) *
                           *((float *)GEN_TOP((iVar14 + 0xc)));
                  if ((*(int *)(gen_frame + 0x84)) == 0) {
                    fVar27 = *((float *)GEN_TOP((pauVar9[-1] + 4)));
                    fVar26 = *((float *)GEN_TOP((pauVar9[-1] + 8)));
                    fVar29 = *((float *)GEN_TOP((pauVar9[-1] + 0xc)));
                    fVar34 = pfVar10[1];
                    fVar31 = pfVar10[2];
                    fVar33 = pfVar10[3];
                    *pfVar10 = *((float *)GEN_TOP(pauVar9[-1])) * fVar44 + *pfVar10;
                    pfVar10[1] = fVar27 * fVar44 + fVar34;
                    pfVar10[2] = fVar26 * fVar44 + fVar31;
                    pfVar10[3] = fVar29 * fVar44 + fVar33;
                    fVar27 = *((float *)GEN_TOP((pauVar9[1] + 4)));
                    fVar26 = *((float *)GEN_TOP((pauVar9[1] + 8)));
                    fVar29 = *((float *)GEN_TOP((pauVar9[1] + 0xc)));
                    fVar34 = pfVar10[9];
                    fVar31 = pfVar10[10];
                    fVar33 = pfVar10[0xb];
                    pfVar10[8] = *((float *)GEN_TOP(pauVar9[1])) * fVar44 + pfVar10[8];
                    pfVar10[9] = fVar27 * fVar44 + fVar34;
                    pfVar10[10] = fVar26 * fVar44 + fVar31;
                    pfVar10[0xb] = fVar29 * fVar44 + fVar33;
                    memcpy(&(auVar42), &(*pauVar9), sizeof(*pauVar9) < sizeof(auVar42) ? sizeof(*pauVar9) : sizeof(auVar42));
                    fVar27 = (*(float *)((char *)&auVar42 + 0));
                    fVar34 = (*(float *)((char *)&auVar42 + 12));
                    pfVar17 = ((float *)GEN_TOP((iVar16 + (int)pauVar9)));
                    fVar35 = (*(float *)((char *)&auVar42 + 4));
                    fVar28 = (*(float *)((char *)&auVar42 + 8));
                    fVar26 = pfVar17[2] * fVar28 + *pfVar17 * fVar27;
                    fVar29 = pfVar17[3] * fVar34 + pfVar17[1] * fVar35;
                    fVar31 = *pfVar17 * fVar27 + pfVar17[2] * fVar28;
                    fVar33 = pfVar17[1] * fVar35 + pfVar17[3] * fVar34;
                    uVar19 = -(uint)(fVar29 + fVar26 < 0.0);
                    uVar20 = -(uint)(fVar26 + fVar29 < 0.0);
                    uVar21 = -(uint)(fVar33 + fVar31 < 0.0);
                    uVar22 = -(uint)(fVar31 + fVar33 < 0.0);
                    pfVar17 = ((float *)GEN_TOP((iVar16 + (int)pauVar9)));
                    fVar27 = gen_bits2f(((uint)gen_fl2bits(fVar27) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) &
                                        uVar19 | ~uVar19 & (uint)gen_fl2bits(fVar27)) * fVar44 +
                             *pfVar17;
                    fVar26 = gen_bits2f(((uint)gen_fl2bits(fVar35) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) &
                                        uVar20 | ~uVar20 & (uint)gen_fl2bits(fVar35)) * fVar44 +
                             pfVar17[1];
                    fVar29 = gen_bits2f(((uint)gen_fl2bits(fVar28) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) &
                                        uVar21 | ~uVar21 & (uint)gen_fl2bits(fVar28)) * fVar44 +
                             pfVar17[2];
                    fVar34 = gen_bits2f(((uint)gen_fl2bits(fVar34) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) &
                                        uVar22 | ~uVar22 & (uint)gen_fl2bits(fVar34)) * fVar44 +
                             pfVar17[3];
                  }
                  else {
                    fVar40 = *((float *)GEN_TOP(*pauVar9));
                    fVar27 = *((float *)GEN_TOP((*pauVar9 + 4)));
                    fVar26 = *((float *)GEN_TOP((*pauVar9 + 8)));
                    fVar29 = *((float *)GEN_TOP((*pauVar9 + 0xc)));
                    fVar34 = *pfVar10;
                    fVar31 = pfVar10[1];
                    fVar33 = pfVar10[2];
                    fVar35 = pfVar10[3];
                    fVar28 = fVar40 * fVar34;
                    fVar30 = fVar27 * fVar31;
                    fVar32 = fVar26 * fVar33;
                    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)*((undefined8 *)GEN_TOP((iVar16 + (int)pauVar9))));
                    (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)((ulonglong)*((undefined8 *)GEN_TOP((iVar16 + (int)pauVar9)))
                                                 >> 0x20));
                    (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*((undefined8 *)GEN_TOP((iVar16 + 8 + (int)pauVar9))));
                    fVar36 = (((fVar30 + fVar28) + fVar32) * fVar40 +
                             (fVar29 * fVar29 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar34)
                             + (fVar33 * fVar27 - fVar31 * fVar26) * fVar29;
                    fVar37 = (((fVar30 + fVar28) + fVar32) * fVar27 +
                             (fVar29 * fVar29 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar31)
                             + (fVar34 * fVar26 - fVar33 * fVar40) * fVar29;
                    fVar38 = (((fVar30 + fVar28) + fVar32) * fVar26 +
                             (fVar29 * fVar29 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar33)
                             + (fVar31 * fVar40 - fVar34 * fVar27) * fVar29;
                    fVar39 = (((fVar30 + fVar28) + fVar32) * fVar29 +
                             (fVar29 * fVar29 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar35)
                             + (fVar35 * fVar29 - fVar35 * fVar29) * fVar29;
                    fVar40 = *((float *)GEN_TOP(((int)pauVar9 + iVar16 + 0xc)));
                    (*(float *)(gen_frame + 0x0)) = gen_bits2f((uint)*((undefined8 *)GEN_TOP(*pauVar9)));
                    (*(float *)(gen_frame + 0x4)) = gen_bits2f((uint)((ulonglong)*((undefined8 *)GEN_TOP(*pauVar9)) >> 0x20));
                    (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)*((undefined8 *)GEN_TOP((*pauVar9 + 8))));
                    fVar27 = *((float *)GEN_TOP(pauVar9[-1]));
                    fVar26 = *((float *)GEN_TOP((pauVar9[-1] + 4)));
                    fVar34 = *((float *)GEN_TOP((pauVar9[-1] + 8)));
                    fVar31 = *((float *)GEN_TOP((pauVar9[-1] + 0xc)));
                    fVar23 = (((*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x18)) - (*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x14))) + (*(float *)(gen_frame + 0x10)) * fVar29) +
                             (*(float *)(gen_frame + 0x0)) * fVar40;
                    fVar24 = (((*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x10)) - (*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x18))) + (*(float *)(gen_frame + 0x14)) * fVar29) +
                             (*(float *)(gen_frame + 0x4)) * fVar40;
                    fVar25 = (((*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x14)) - (*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x10))) + (*(float *)(gen_frame + 0x18)) * fVar29) +
                             (*(float *)(gen_frame + 0x8)) * fVar40;
                    fVar33 = pfVar10[8];
                    fVar35 = pfVar10[9];
                    fVar28 = pfVar10[10];
                    fVar30 = pfVar10[0xb];
                    fVar43 = fVar40 * fVar29 -
                             (((*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x14)) + (*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x10))) + (*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x18)))
                    ;
                    fVar40 = *((float *)GEN_TOP((pauVar9[1] + 4)));
                    fVar29 = *((float *)GEN_TOP((pauVar9[1] + 8)));
                    fVar32 = *((float *)GEN_TOP((pauVar9[1] + 0xc)));
                    pfVar10[8] = (*((float *)GEN_TOP(pauVar9[1])) * fVar33 - fVar33) * fVar44 + fVar33;
                    pfVar10[9] = (fVar40 * fVar35 - fVar35) * fVar44 + fVar35;
                    pfVar10[10] = (fVar29 * fVar28 - fVar28) * fVar44 + fVar28;
                    pfVar10[0xb] = (fVar32 * fVar30 - fVar30) * fVar44 + fVar30;
                    fVar40 = pfVar10[1];
                    fVar29 = pfVar10[2];
                    fVar33 = pfVar10[3];
                    fVar35 = pfVar10[1];
                    fVar28 = pfVar10[2];
                    fVar30 = pfVar10[3];
                    *pfVar10 = (((fVar36 + fVar36) + fVar27) - *pfVar10) * fVar44 + *pfVar10;
                    pfVar10[1] = (((fVar37 + fVar37) + fVar26) - fVar40) * fVar44 + fVar35;
                    pfVar10[2] = (((fVar38 + fVar38) + fVar34) - fVar29) * fVar44 + fVar28;
                    pfVar10[3] = (((fVar39 + fVar39) + fVar31) - fVar33) * fVar44 + fVar30;
                    pfVar17 = ((float *)GEN_TOP((iVar16 + (int)pauVar9)));
                    fVar40 = *pfVar17 * fVar23;
                    fVar27 = pfVar17[1] * fVar24;
                    fVar26 = pfVar17[2] * fVar25;
                    fVar29 = pfVar17[3] * fVar43;
                    (*(float *)((char *)&auVar41 + 0)) = fVar26 + fVar40;
                    (*(float *)((char *)&auVar41 + 4)) = fVar29 + fVar27;
                    (*(float *)((char *)&auVar41 + 8)) = fVar40 + fVar26;
                    (*(float *)((char *)&auVar41 + 12)) = fVar27 + fVar29;
                    uVar19 = -(uint)((*(float *)((char *)&auVar41 + 4)) + (*(float *)((char *)&auVar41 + 0)) < 0.0);
                    uVar20 = -(uint)((*(float *)((char *)&auVar41 + 0)) + (*(float *)((char *)&auVar41 + 4)) < 0.0);
                    uVar21 = -(uint)((*(float *)((char *)&auVar41 + 12)) + (*(float *)((char *)&auVar41 + 8)) < 0.0);
                    uVar22 = -(uint)((*(float *)((char *)&auVar41 + 8)) + (*(float *)((char *)&auVar41 + 12)) < 0.0);
                    fVar27 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar44) & uVar19 |
                                        ~uVar19 & (uint)gen_fl2bits(fVar44)) * fVar23 +
                             (*(float *)&REFG(undefined, 0x1138af0) - fVar44) * *pfVar17;
                    fVar26 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar44) & uVar20 |
                                        ~uVar20 & (uint)gen_fl2bits(fVar44)) * fVar24 +
                             (*(float *)&REFG(undefined, 0x1138af4) - fVar44) * pfVar17[1];
                    fVar29 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar44) & uVar21 |
                                        ~uVar21 & (uint)gen_fl2bits(fVar44)) * fVar25 +
                             (*(float *)&REFG(undefined, 0x1138af8) - fVar44) * pfVar17[2];
                    fVar34 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar44) & uVar22 |
                                        ~uVar22 & (uint)gen_fl2bits(fVar44)) * fVar43 +
                             (*(float *)&REFG(undefined, 0x1138afc) - fVar44) * pfVar17[3];
                    fVar40 = fVar29 * fVar29 + fVar27 * fVar27;
                    fVar31 = fVar34 * fVar34 + fVar26 * fVar26;
                    fVar33 = fVar27 * fVar27 + fVar29 * fVar29;
                    fVar35 = fVar26 * fVar26 + fVar34 * fVar34;
                    fVar28 = fVar31 + fVar40;
                    fVar40 = fVar40 + fVar31;
                    fVar31 = fVar35 + fVar33;
                    fVar33 = fVar33 + fVar35;
                    (*(undefined4 *)((char *)&auVar42 + 4)) = (undefined4)gen_fl2bits(fVar40);
                    (*(undefined4 *)((char *)&auVar42 + 0)) = (undefined4)gen_fl2bits(fVar28);
                    (*(undefined4 *)((char *)&auVar42 + 8)) = (undefined4)gen_fl2bits(fVar31);
                    (*(undefined4 *)((char *)&auVar42 + 12)) = (undefined4)gen_fl2bits(fVar33);
                    gen_rsqrtps(&(auVar42), &(auVar41), &(auVar42));
                    fVar35 = (*(float *)((char *)&auVar42 + 0));
                    fVar30 = (*(float *)((char *)&auVar42 + 4));
                    fVar32 = (*(float *)((char *)&auVar42 + 8));
                    fVar23 = (*(float *)((char *)&auVar42 + 12));
                    fVar27 = ((*(float *)&REFG(undefined, 0x1136d50) - (fVar35 * fVar28) * fVar35) *
                             (*(float *)&REFG(undefined, 0x1136d60) * fVar35)) * fVar27;
                    fVar26 = ((*(float *)&REFG(undefined, 0x1136d54) - (fVar30 * fVar40) * fVar30) *
                             (*(float *)&REFG(undefined, 0x1136d64) * fVar30)) * fVar26;
                    fVar29 = ((*(float *)&REFG(undefined, 0x1136d58) - (fVar32 * fVar31) * fVar32) *
                             (*(float *)&REFG(undefined, 0x1136d68) * fVar32)) * fVar29;
                    fVar34 = ((*(float *)&REFG(undefined, 0x1136d5c) - (fVar23 * fVar33) * fVar23) *
                             (*(float *)&REFG(undefined, 0x1136d6c) * fVar23)) * fVar34;
                    fVar40 = REFG(float, 0x10addc0);
                  }
                  pfVar17 = ((float *)GEN_TOP((iVar16 + (int)pauVar9)));
                  *pfVar17 = fVar27;
                  pfVar17[1] = fVar26;
                  pfVar17[2] = fVar29;
                  pfVar17[3] = fVar34;
                  *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xc8))) * 4))) =
                       *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xc8))) * 4))) + fVar44;
                }
                pfVar17 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xc8)) + 1)));
                pauVar9 = pauVar9 + 3;
                pfVar10 = pfVar10 + 0xc;
                (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar17;
              } while (pfVar17 < param_1);
            }
            uVar19 = 0;
            if (3 < (int)param_4) {
              (*(int *)(gen_frame + 0xcc)) = (*(uint *)(gen_frame + 0xa8)) - param_6;
              iVar16 = -param_6;
              (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0xa8)) + 0xc)));
              pfVar10 = ((float *)GEN_TOP((param_6 + 4)));
              do {
                uVar5 = *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x70)) + uVar19 * 2)));
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar44 = ((float)*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 0x1c))) + (int)(short)uVar5))) * fVar40)
                           * *((float *)GEN_TOP((iVar14 + 0xc)));
                  pfVar10[-1] = (*(float * PTR32 *)(gen_frame + 0xc8))[-3] * fVar44 + pfVar10[-1];
                  *((float *)GEN_TOP(((int)pfVar10 + (*(uint *)(gen_frame + 0xb0)) + iVar16 - 4))) =
                       fVar44 + *((float *)GEN_TOP(((int)pfVar10 + (*(uint *)(gen_frame + 0xb0)) + iVar16 - 4)));
                }
                uVar5 = *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x70)) + 2 + uVar19 * 2)));
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar44 = ((float)*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 0x1c))) + (int)(short)uVar5))) * fVar40)
                           * *((float *)GEN_TOP((iVar14 + 0xc)));
                  *pfVar10 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xa8)) - param_6) + (int)pfVar10))) * fVar44 + *pfVar10;
                  *((float *)GEN_TOP(((int)pfVar10 + (*(uint *)(gen_frame + 0xb0)) + iVar16))) =
                       *((float *)GEN_TOP(((int)pfVar10 + (*(uint *)(gen_frame + 0xb0)) + iVar16))) + fVar44;
                }
                sVar1 = *((short *)GEN_TOP(((*(uint *)(gen_frame + 0x70)) + 4 + uVar19 * 2)));
                if ((-1 < sVar1) && ((int)sVar1 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar44 = ((float)*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 0x1c))) + (int)sVar1))) * fVar40) *
                           *((float *)GEN_TOP((iVar14 + 0xc)));
                  pfVar10[1] = (*(float * PTR32 *)(gen_frame + 0xc8))[-1] * fVar44 + pfVar10[1];
                  *((float *)GEN_TOP(((int)pfVar10 + (*(uint *)(gen_frame + 0xb0)) + (4 - param_6)))) =
                       fVar44 + *((float *)GEN_TOP(((int)pfVar10 + (*(uint *)(gen_frame + 0xb0)) + (4 - param_6))));
                }
                uVar5 = *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x70)) + 6 + uVar19 * 2)));
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar44 = ((float)*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 0x1c))) + (int)(short)uVar5))) * fVar40)
                           * *((float *)GEN_TOP((iVar14 + 0xc)));
                  pfVar10[2] = *(*(float * PTR32 *)(gen_frame + 0xc8)) * fVar44 + pfVar10[2];
                  *((float *)GEN_TOP(((int)pfVar10 + (*(uint *)(gen_frame + 0xb0)) + (8 - param_6)))) =
                       fVar44 + *((float *)GEN_TOP(((int)pfVar10 + (*(uint *)(gen_frame + 0xb0)) + (8 - param_6))));
                }
                (*(float * PTR32 *)(gen_frame + 0xc8)) = (*(float * PTR32 *)(gen_frame + 0xc8)) + 4;
                uVar19 = uVar19 + 4;
                pfVar10 = pfVar10 + 4;
              } while (uVar19 < param_4 - 3);
            }
            if (uVar19 < param_4) {
              pfVar10 = ((float *)GEN_TOP((param_6 + uVar19 * 4)));
              (*(int *)(gen_frame + 0xcc)) = (*(uint *)(gen_frame + 0xa8)) - param_6;
              do {
                uVar5 = *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x70)) + uVar19 * 2)));
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar44 = ((float)*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar14 + 0x1c))) + (int)(short)uVar5))) * fVar40)
                           * *((float *)GEN_TOP((iVar14 + 0xc)));
                  *pfVar10 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xa8)) - param_6) + (int)pfVar10))) * fVar44 + *pfVar10;
                  *((float *)GEN_TOP(((*(uint *)(gen_frame + 0xb0)) + uVar19 * 4))) = fVar44 + *((float *)GEN_TOP(((*(uint *)(gen_frame + 0xb0)) + uVar19 * 4)));
                }
                uVar19 = uVar19 + 1;
                pfVar10 = pfVar10 + 1;
              } while (uVar19 < param_4);
            }
            if ((*(uint *)(gen_frame + 0x7c)) == (*(uint *)(gen_frame + 0x70))) {
              (*(uint *)(gen_frame + 0x74)) = 0;
            }
            phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar15 = uVar15 * 2 + 0x7f & 0xffffff80;
            if (((*(int *)(phVar8 + 8) < (int)uVar15) || (uVar15 + uVar7 != *(int *)(phVar8 + 0xc)))
               || (*(uint *)(phVar8 + 0x14) == uVar7)) {
              F_00d945c0(phVar8 GEN_EDX_ARG,uVar7,uVar15);
            }
            else {
              *(uint *)(phVar8 + 0xc) = uVar7;
            }
            (*(uint *)(gen_frame + 0x74)) = 0;
            if (-1 < (int)(*(uint *)(gen_frame + 0x78))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x70)),((*(uint *)(gen_frame + 0x78)) & 0x3fffffff) * 2);
            }
            pfVar10 = (*(float * PTR32 *)(gen_frame + 0x6c));
            uVar7 = (*(uint *)(gen_frame + 0x68));
            (*(uint *)(gen_frame + 0x70)) = 0;
            (*(uint *)(gen_frame + 0x78)) = 0x80000000;
            if ((*(uint *)(gen_frame + 0x68)) == (*(uint *)(gen_frame + 0x5c))) {
              (*(float * PTR32 *)(gen_frame + 0x60)) = ((float *)GEN_TOP(0x0));
            }
            phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar15 = (int)((int)(uintptr_t)pfVar10) * 2 + 0x7fU & 0xffffff80;
            if (((*(int *)(phVar8 + 8) < (int)uVar15) || (uVar15 + uVar7 != *(int *)(phVar8 + 0xc)))
               || (*(uint *)(phVar8 + 0x14) == uVar7)) {
              F_00d945c0(phVar8 GEN_EDX_ARG,uVar7,uVar15);
            }
            else {
              *(uint *)(phVar8 + 0xc) = uVar7;
            }
            (*(float * PTR32 *)(gen_frame + 0x60)) = ((float *)GEN_TOP(0x0));
            if (-1 < (int)(*(uint *)(gen_frame + 0x64))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x5c)),((*(uint *)(gen_frame + 0x64)) & 0x3fffffff) * 2);
            }
            (*(uint *)(gen_frame + 0x5c)) = 0;
            (*(uint *)(gen_frame + 0x64)) = 0x80000000;
            phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            if (((*(int *)(phVar8 + 8) < (int)uVar12) ||
                (uVar12 + (*(uint *)(gen_frame + 0xa8)) != *(int *)(phVar8 + 0xc))) ||
               (*(uint *)(phVar8 + 0x14) == (*(uint *)(gen_frame + 0xa8)))) {
              F_00d945c0(phVar8 GEN_EDX_ARG,(*(uint *)(gen_frame + 0xa8)),uVar12);
            }
            else {
              *(uint *)(phVar8 + 0xc) = (*(uint *)(gen_frame + 0xa8));
            }
            phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            if (((*(int *)(phVar8 + 8) < (int)uVar11) ||
                (uVar11 + (*(uint *)(gen_frame + 0x88)) != *(int *)(phVar8 + 0xc))) ||
               (*(uint *)(phVar8 + 0x14) == (*(uint *)(gen_frame + 0x88)))) {
              F_00d945c0(phVar8 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x88)),uVar11);
              phVar18 = (*(undefined * PTR32 *)(gen_frame + 0x90));
            }
            else {
              *(uint *)(phVar8 + 0xc) = (*(uint *)(gen_frame + 0x88));
              phVar18 = (*(undefined * PTR32 *)(gen_frame + 0x90));
            }
          }
        }
        (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 1;
      } while ((*(int *)(gen_frame + 0x4c)) < *(int *)(phVar18 + 0x14));
    }
    if ((*(int *)(gen_frame + 0x84)) == 0) {
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
      if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
        *puVar2 = ((char *)REFP(0x1136de0));
        uVar3 = rdtsc();
        puVar2[1] = (int)uVar3;
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar2 + 3;
      }
      if (((!GEN_ISNAN(*(float *)(phVar18 + 0x20)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
           !(*(float *)(phVar18 + 0x20) <= *(float *)&REFG(undefined, 0x1088114))) &&
         (pfVar10 = ((float *)GEN_TOP(0x0)), param_1 != ((float *)GEN_TOP(0x0)))) {
        pfVar17 = param_3 + 4;
        do {
          fVar40 = *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar10) * 4)));
          if (fVar40 <= *(float *)(phVar18 + 0x20)) {
            fVar40 = *(float *)(phVar18 + 0x20) - fVar40;
            pfVar13 = ((float *)GEN_TOP((*((short *)GEN_TOP((param_2 + (int)((int)(uintptr_t)pfVar10) * 2))) * 0x30 +
                               *((int *)GEN_TOP((*(int *)(phVar18 + 0x1c) + 0x24))))));
            fVar44 = pfVar13[1];
            fVar27 = pfVar13[2];
            fVar26 = pfVar13[3];
            fVar29 = pfVar17[-3];
            fVar34 = pfVar17[-2];
            fVar31 = pfVar17[-1];
            pfVar17[-4] = fVar40 * *pfVar13 + pfVar17[-4];
            pfVar17[-3] = fVar40 * fVar44 + fVar29;
            pfVar17[-2] = fVar40 * fVar27 + fVar34;
            pfVar17[-1] = fVar40 * fVar26 + fVar31;
            fVar44 = pfVar13[9];
            fVar27 = pfVar13[10];
            fVar26 = pfVar13[0xb];
            fVar29 = pfVar17[5];
            fVar34 = pfVar17[6];
            fVar31 = pfVar17[7];
            pfVar17[4] = pfVar13[8] * fVar40 + pfVar17[4];
            pfVar17[5] = fVar44 * fVar40 + fVar29;
            pfVar17[6] = fVar27 * fVar40 + fVar34;
            pfVar17[7] = fVar26 * fVar40 + fVar31;
            fVar44 = pfVar13[4];
            fVar27 = pfVar13[5];
            fVar26 = pfVar13[6];
            fVar29 = pfVar13[7];
            fVar34 = pfVar17[2] * fVar26 + *pfVar17 * fVar44;
            fVar31 = pfVar17[3] * fVar29 + pfVar17[1] * fVar27;
            fVar33 = *pfVar17 * fVar44 + pfVar17[2] * fVar26;
            fVar35 = pfVar17[1] * fVar27 + pfVar17[3] * fVar29;
            uVar7 = -(uint)(fVar31 + fVar34 < 0.0);
            uVar15 = -(uint)(fVar34 + fVar31 < 0.0);
            uVar11 = -(uint)(fVar35 + fVar33 < 0.0);
            uVar12 = -(uint)(fVar33 + fVar35 < 0.0);
            uVar19 = (uint)gen_fl2bits(fVar27) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
            uVar20 = (uint)gen_fl2bits(fVar26) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
            uVar21 = (uint)gen_fl2bits(fVar29) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
            fVar34 = pfVar17[1];
            fVar31 = pfVar17[2];
            fVar33 = pfVar17[3];
            *pfVar17 = gen_bits2f(((uint)gen_fl2bits(fVar44) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar7 |
                                  ~uVar7 & (uint)gen_fl2bits(fVar44)) * fVar40 + *pfVar17;
            pfVar17[1] = gen_bits2f(uVar19 & uVar15 | ~uVar15 & (uint)gen_fl2bits(fVar27)) * fVar40
                         + fVar34;
            pfVar17[2] = gen_bits2f(uVar20 & uVar11 | ~uVar11 & (uint)gen_fl2bits(fVar26)) * fVar40
                         + fVar31;
            pfVar17[3] = gen_bits2f(uVar21 & uVar12 | ~uVar12 & (uint)gen_fl2bits(fVar29)) * fVar40
                         + fVar33;
            *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar10) * 4))) =
                 fVar40 + *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar10) * 4)));
            phVar18 = (*(undefined * PTR32 *)(gen_frame + 0x90));
          }
          pfVar10 = ((float *)GEN_TOP(((int)pfVar10 + 1)));
          pfVar17 = pfVar17 + 0xc;
        } while (pfVar10 < param_1);
      }
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
      if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
        *puVar2 = ((char *)REFP(0x1136dd4));
        uVar3 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x8c)) = (int)uVar3;
        puVar2[1] = (int)uVar3;
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar2 + 3;
      }
      F_00d93ba0(param_3,(*(uint *)(gen_frame + 0x94)),param_1);
      fVar40 = REFG(float, 0x1087f04);
      uVar7 = 0;
      if (3 < (int)param_4) {
        pfVar10 = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0xb0)) + 0xc)));
        iVar14 = (param_4 - 4 >> 2) + 1;
        pfVar17 = ((float *)GEN_TOP((param_6 + 4)));
        uVar7 = iVar14 * 4;
        do {
          fVar44 = pfVar10[-3];
          if (!(0.0 < pfVar10[-3])) {
            fVar44 = fVar40;
          }
          pfVar17[-1] = pfVar17[-1] / fVar44;
          fVar44 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xb0)) - param_6) + (int)pfVar17)));
          if (!(0.0 < fVar44)) {
            fVar44 = fVar40;
          }
          *pfVar17 = *pfVar17 / fVar44;
          fVar44 = pfVar10[-1];
          if (!(0.0 < pfVar10[-1])) {
            fVar44 = fVar40;
          }
          pfVar17[1] = pfVar17[1] / fVar44;
          fVar44 = *pfVar10;
          if (!(0.0 < *pfVar10)) {
            fVar44 = fVar40;
          }
          pfVar17[2] = pfVar17[2] / fVar44;
          pfVar17 = pfVar17 + 4;
          pfVar10 = pfVar10 + 4;
          iVar14 = iVar14 - 1;
          phVar18 = (*(undefined * PTR32 *)(gen_frame + 0x90));
        } while (iVar14 != 0);
      }
      if (uVar7 < param_4) {
        pfVar10 = ((float *)GEN_TOP((param_6 + uVar7 * 4)));
        iVar14 = param_4 - uVar7;
        do {
          fVar44 = *((float *)GEN_TOP(((int)pfVar10 + ((*(uint *)(gen_frame + 0xb0)) - param_6))));
          if (!(0.0 < fVar44)) {
            fVar44 = fVar40;
          }
          *pfVar10 = *pfVar10 / fVar44;
          pfVar10 = pfVar10 + 1;
          iVar14 = iVar14 - 1;
        } while (iVar14 != 0);
      }
    }
    iVar14 = (*(int *)(gen_frame + 0x84)) + 1;
    (*(int *)(gen_frame + 0x84)) = iVar14;
  } while (iVar14 < 2);
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  uVar15 = (*(uint *)(gen_frame + 0xc0));
  uVar7 = (*(uint *)(gen_frame + 0xbc));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
  if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
    *puVar2 = &REFG(undefined, 0x1134dd0);
    uVar3 = rdtsc();
    (*(undefined4 *)(gen_frame + 0x8c)) = (int)uVar3;
    puVar2[1] = (int)uVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar2 + 3;
  }
  if ((*(uint *)(gen_frame + 0xbc)) == (*(uint *)(gen_frame + 0xb0))) {
    (*(uint *)(gen_frame + 0xb4)) = 0;
  }
  phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar15 = uVar15 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)(phVar8 + 8) < (int)uVar15) || (uVar15 + uVar7 != *(int *)(phVar8 + 0xc))) ||
     (*(uint *)(phVar8 + 0x14) == uVar7)) {
    F_00d945c0(phVar8 GEN_EDX_ARG,uVar7,uVar15);
  }
  else {
    *(uint *)(phVar8 + 0xc) = uVar7;
  }
  (*(uint *)(gen_frame + 0xb4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0xb8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0xb0)),(*(uint *)(gen_frame + 0xb8)) * 4);
  }
  pfVar10 = (*(float * PTR32 *)(gen_frame + 0xa4));
  uVar7 = (*(uint *)(gen_frame + 0xa0));
  (*(uint *)(gen_frame + 0xb0)) = 0;
  (*(uint *)(gen_frame + 0xb8)) = 0x80000000;
  if ((*(uint *)(gen_frame + 0xa0)) == (*(uint *)(gen_frame + 0x94))) {
    (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP(0x0));
  }
  phVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar15 = (int)((int)(uintptr_t)pfVar10) * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)(phVar8 + 8) < (int)uVar15) || (uVar15 + uVar7 != *(int *)(phVar8 + 0xc))) ||
     (*(uint *)(phVar8 + 0x14) == uVar7)) {
    F_00d945c0(phVar8 GEN_EDX_ARG,uVar7,uVar15);
  }
  else {
    *(uint *)(phVar8 + 0xc) = uVar7;
  }
  (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP(0x0));
  uVar7 = (*(uint *)(gen_frame + 0x9c));
  if (-1 < (int)(*(uint *)(gen_frame + 0x9c))) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x94)),(*(uint *)(gen_frame + 0x9c)) * 4);
  }
  return uVar7;
}

/* ref: hkaAnimatedSkeleton::SampleAndCombineAnimations */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d45060(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd45060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_FRAME_DECL(0xf0, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  LPVOID pvVar13;
  undefined * phVar14;
  uint uVar15;
  int iVar16;
  float * pfVar17;
  float * pfVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  uint uVar31;
  
  (*(int *)(gen_frame + 0xd8)) = param_1;
  if ((*((int *)GEN_TOP((param_1 + 0x24))) != *((int *)GEN_TOP((param_1 + 0x14)))) || (*((int *)GEN_TOP((param_1 + 0x24))) == 0)) {
    pvVar13 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4)));
    if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 0xc)))) {
      *puVar9 = ((char *)REFP(0x1136e1c));
      puVar9[3] = ((char *)REFP(0x1136dfc));
      uVar5 = rdtsc();
      (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = ((undefined4 *)GEN_TOP((int)uVar5));
      puVar9[1] = (int)uVar5;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4))) = puVar9 + 4;
    }
    uVar19 = 0;
    (*(uint *)(gen_frame + 0x9c)) = 0;
    (*(uint *)(gen_frame + 0xa0)) = 0;
    (*(uint *)(gen_frame + 0xa4)) = 0x80000000;
    (*(uint *)(gen_frame + 0xac)) = param_3;
    if (param_3 != 0) {
      phVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar19 = *(uint *)(phVar14 + 0xc);
      uVar21 = param_3 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)(phVar14 + 8) < (int)uVar21) || (*(uint *)(phVar14 + 0x10) < uVar19 + uVar21)) {
        uVar19 = F_00d94390(phVar14 GEN_EDX_ARG,uVar21);
      }
      else {
        *(uint *)(phVar14 + 0xc) = uVar19 + uVar21;
      }
    }
    (*(uint *)(gen_frame + 0x9c)) = uVar19;
    (*(uint *)(gen_frame + 0xa4)) = param_3 | 0x80000000;
    (*(uint *)(gen_frame + 0xa8)) = uVar19;
    if ((int)(param_3 & 0x3fffffff) < (int)param_3) {
      uVar19 = (param_3 & 0x3fffffff) * 2;
      if ((int)uVar19 <= (int)param_3) {
        uVar19 = param_3;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x9c)),uVar19,4);
    }
    uVar19 = 0;
    (*(uint *)(gen_frame + 0xa0)) = param_3;
    (*(uint *)(gen_frame + 0xb0)) = 0;
    (*(uint *)(gen_frame + 0xb4)) = 0;
    (*(uint *)(gen_frame + 0xb8)) = 0x80000000;
    (*(uint *)(gen_frame + 0xc0)) = param_5;
    if (param_5 != 0) {
      phVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar19 = *(uint *)(phVar14 + 0xc);
      uVar21 = param_5 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)(phVar14 + 8) < (int)uVar21) || (*(uint *)(phVar14 + 0x10) < uVar19 + uVar21)) {
        uVar19 = F_00d94390(phVar14 GEN_EDX_ARG,uVar21);
      }
      else {
        *(uint *)(phVar14 + 0xc) = uVar19 + uVar21;
      }
    }
    (*(uint *)(gen_frame + 0xb0)) = uVar19;
    (*(uint *)(gen_frame + 0xb8)) = param_5 | 0x80000000;
    (*(uint *)(gen_frame + 0xbc)) = uVar19;
    if ((int)(param_5 & 0x3fffffff) < (int)param_5) {
      uVar19 = (param_5 & 0x3fffffff) * 2;
      if ((int)uVar19 <= (int)param_5) {
        uVar19 = param_5;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0xb0)),uVar19,4);
    }
    uVar19 = 0;
    (*(uint *)(gen_frame + 0xb4)) = param_5;
    if (param_3 != 0) {
      puVar9 = ((undefined4 *)GEN_TOP((param_2 + 0x20)));
      do {
        puVar9[-8] = 0;
        puVar9[-7] = 0;
        puVar9[-6] = 0;
        puVar9[-5] = 0;
        puVar9[-4] = 0;
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x9c)) + uVar19 * 4))) = 0;
        uVar19 = uVar19 + 1;
        puVar9 = puVar9 + 0xc;
      } while (uVar19 < param_3);
    }
    uVar19 = 0;
    if (param_5 != 0) {
      do {
        *((undefined4 *)GEN_TOP((param_4 + uVar19 * 4))) = 0;
        *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0xb0)) + uVar19 * 4))) = 0;
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_5);
    }
    (*(uint *)(gen_frame + 0xd4)) = 0;
    iVar10 = (*(int *)(gen_frame + 0xd8));
    do {
      (*(int *)(gen_frame + 0x88)) = 0;
      if (0 < *((int *)GEN_TOP((iVar10 + 0x14)))) {
        do {
          piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 0x10))) + (*(int *)(gen_frame + 0x88)) * 4)));
          if (((piVar4[10] != 0) &&
              (pfVar18 = (float *)(piVar4 + 3),
              (GEN_ISNAN(REFG(float, 0x10905c4)) || GEN_ISNAN(*pfVar18)) ||
              (REFG(float, 0x10905c4) < *pfVar18 || REFG(uint, 0x10905c4) == *pfVar18))) &&
             ((int)*((char *)GEN_TOP((piVar4[10] + 0x28))) == (*(uint *)(gen_frame + 0xd4)))) {
            uVar19 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x20))))(piVar4 GEN_EDX_ARG);
            phVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar21 = *(uint *)(phVar14 + 0xc);
            uVar20 = uVar19 * 0x30 + 0x7f & 0xffffff80;
            (*(uint *)(gen_frame + 0x8c)) = uVar20;
            uVar19 = uVar21 + uVar20;
            if ((*(int *)(phVar14 + 8) < (int)uVar20) || (*(uint *)(phVar14 + 0x10) < uVar19)) {
              uVar19 = F_00d94390(phVar14 GEN_EDX_ARG,uVar20);
              (*(uint *)(gen_frame + 0xdc)) = uVar19;
            }
            else {
              *(uint *)(phVar14 + 0xc) = uVar19;
              (*(uint *)(gen_frame + 0xdc)) = uVar21;
            }
            uVar19 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG);
            phVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar21 = *(uint *)(phVar14 + 0xc);
            uVar20 = uVar19 * 4 + 0x7f & 0xffffff80;
            uVar19 = uVar21 + uVar20;
            if ((*(int *)(phVar14 + 8) < (int)uVar20) || (*(uint *)(phVar14 + 0x10) < uVar19)) {
              uVar19 = F_00d94390(phVar14 GEN_EDX_ARG,uVar20);
              (*(uint *)(gen_frame + 0xd0)) = uVar19;
            }
            else {
              *(uint *)(phVar14 + 0xc) = uVar19;
              (*(uint *)(gen_frame + 0xd0)) = uVar21;
            }
            pvVar13 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
            puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4)));
            (*(LPVOID *)(gen_frame + 0xc8)) = pvVar13;
            if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 0xc)))) {
              *puVar9 = ((char *)REFP(0x1134e08));
              uVar5 = rdtsc();
              (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = ((undefined4 *)GEN_TOP((int)uVar5));
              puVar9[1] = (int)uVar5;
              *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4))) = puVar9 + 3;
            }
            (*(LPVOID *)(gen_frame + 0xc8)) = (LPVOID)piVar4[4];
            uVar21 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x20))))(piVar4 GEN_EDX_ARG);
            pvVar13 = (*(LPVOID *)(gen_frame + 0xc8));
            uVar19 = param_3;
            uVar15 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x2c))))(piVar4 GEN_EDX_ARG);
            uVar19 = F_00d83760(uVar15,pvVar13,uVar19,uVar21);
            iVar10 = *piVar4;
            (*(uint *)(gen_frame + 0x98)) = uVar19;
            (*(LPVOID *)(gen_frame + 0xc8)) = (LPVOID)piVar4[7];
            uVar21 = ((code *)*((gen_code32 *)GEN_TOP((iVar10 + 0x24))))(piVar4);
            pvVar13 = (*(LPVOID *)(gen_frame + 0xc8));
            uVar19 = param_5;
            uVar15 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x34))))(piVar4 GEN_EDX_ARG);
            uVar19 = F_00d83760(uVar15,pvVar13,uVar19,uVar21);
            (*(LPVOID *)(gen_frame + 0xc8)) = (LPVOID)uVar19;
            if (param_6 == '\0') {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG,(*(uint *)(gen_frame + 0xdc)),(*(uint *)(gen_frame + 0xd0)));
            }
            else {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x98)) + 1,(*(uint *)(gen_frame + 0xdc)),uVar19 + 1,(*(uint *)(gen_frame + 0xd0)));
            }
            pvVar13 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
            puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4)));
            (*(LPVOID *)(gen_frame + 0x6c)) = pvVar13;
            if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 0xc)))) {
              *puVar9 = ((char *)REFP(0x1136df0));
              uVar5 = rdtsc();
              (*(int *)(gen_frame + 0x94)) = (int)uVar5;
              puVar9[1] = (int)uVar5;
              *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4))) = puVar9 + 3;
            }
            iVar10 = piVar4[3];
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0xdc));
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x98));
            (*(uint *)(gen_frame + 0x78)) = param_3;
            (*(int *)(gen_frame + 0x80)) = piVar4[4];
            (*(uint *)(gen_frame + 0x84)) = 0;
            (*(int *)(gen_frame + 0x7c)) = iVar10;
            uVar19 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x2c))))(piVar4 GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x84)) = uVar19;
            if ((*(uint *)(gen_frame + 0xd4)) == 0) {
              F_00d83890(&(*(uint *)(gen_frame + 0x70)),param_2,(*(uint *)(gen_frame + 0x9c)));
            }
            else {
              F_00d83b20(&(*(uint *)(gen_frame + 0x70)),param_2);
            }
            iVar10 = piVar4[3];
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0xd0));
            (*(uint *)(gen_frame + 0x78)) = param_5;
            (*(uint *)(gen_frame + 0x74)) = (uint)(*(LPVOID *)(gen_frame + 0xc8));
            (*(int *)(gen_frame + 0x80)) = piVar4[7];
            (*(uint *)(gen_frame + 0x84)) = 0;
            (*(int *)(gen_frame + 0x7c)) = iVar10;
            uVar19 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x34))))(piVar4 GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x84)) = uVar19;
            F_00d832a0(&(*(uint *)(gen_frame + 0x70)),param_4,(*(uint *)(gen_frame + 0xb0)));
            phVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            if (((*(int *)(phVar14 + 8) < (int)uVar20) ||
                (uVar20 + (*(uint *)(gen_frame + 0xd0)) != *(int *)(phVar14 + 0xc))) ||
               (*(uint *)(phVar14 + 0x14) == (*(uint *)(gen_frame + 0xd0)))) {
              F_00d945c0(phVar14 GEN_EDX_ARG,(*(uint *)(gen_frame + 0xd0)),uVar20);
            }
            else {
              *(uint *)(phVar14 + 0xc) = (*(uint *)(gen_frame + 0xd0));
            }
            phVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar19 = (*(uint *)(gen_frame + 0x8c)) + 0xf & 0xfffffff0;
            if (((*(int *)(phVar14 + 8) < (int)(*(uint *)(gen_frame + 0x8c))) ||
                (uVar19 + (*(uint *)(gen_frame + 0xdc)) != *(int *)(phVar14 + 0xc))) ||
               (*(uint *)(phVar14 + 0x14) == (*(uint *)(gen_frame + 0xdc)))) {
              F_00d945c0(phVar14 GEN_EDX_ARG,(*(uint *)(gen_frame + 0xdc)),uVar19);
              iVar10 = (*(int *)(gen_frame + 0xd8));
            }
            else {
              *(uint *)(phVar14 + 0xc) = (*(uint *)(gen_frame + 0xdc));
              iVar10 = (*(int *)(gen_frame + 0xd8));
            }
          }
          iVar16 = (*(int *)(gen_frame + 0x88)) + 1;
          (*(int *)(gen_frame + 0x88)) = iVar16;
        } while (iVar16 < *((int *)GEN_TOP((iVar10 + 0x14))));
      }
      if ((*(uint *)(gen_frame + 0xd4)) == 0) {
        pvVar13 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4)));
        if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 0xc)))) {
          *puVar9 = ((char *)REFP(0x1136de0));
          uVar5 = rdtsc();
          (*(undefined4 *)(gen_frame + 0x90)) = (int)uVar5;
          puVar9[1] = (int)uVar5;
          *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4))) = puVar9 + 3;
        }
        if (((!GEN_ISNAN(*((float *)GEN_TOP((iVar10 + 0x20)))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
             !(*((float *)GEN_TOP((iVar10 + 0x20))) <= *(float *)&REFG(undefined, 0x1088114))) && (uVar19 = 0, param_3 != 0))
        {
          pfVar18 = ((float *)GEN_TOP((param_2 + 0x10)));
          (*(uint *)(gen_frame + 0x8c)) = -param_2 - 0x10U;
          do {
            fVar23 = *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x9c)) + uVar19 * 4)));
            if (fVar23 <= *((float *)GEN_TOP((iVar10 + 0x20)))) {
              iVar16 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 0x1c))) + 0x24))) + (-param_2 - 0x10U);
              fVar23 = *((float *)GEN_TOP((iVar10 + 0x20))) - fVar23;
              pfVar17 = ((float *)GEN_TOP((iVar16 + (int)pfVar18)));
              fVar24 = pfVar17[1];
              fVar6 = pfVar17[2];
              fVar7 = pfVar17[3];
              fVar8 = pfVar18[-3];
              fVar25 = pfVar18[-2];
              fVar26 = pfVar18[-1];
              pfVar18[-4] = *pfVar17 * fVar23 + pfVar18[-4];
              pfVar18[-3] = fVar24 * fVar23 + fVar8;
              pfVar18[-2] = fVar6 * fVar23 + fVar25;
              pfVar18[-1] = fVar7 * fVar23 + fVar26;
              pfVar17 = ((float *)GEN_TOP((iVar16 + 0x20 + (int)pfVar18)));
              fVar24 = pfVar17[1];
              fVar6 = pfVar17[2];
              fVar7 = pfVar17[3];
              fVar8 = pfVar18[5];
              fVar25 = pfVar18[6];
              fVar26 = pfVar18[7];
              pfVar18[4] = *pfVar17 * fVar23 + pfVar18[4];
              pfVar18[5] = fVar24 * fVar23 + fVar8;
              pfVar18[6] = fVar6 * fVar23 + fVar25;
              pfVar18[7] = fVar7 * fVar23 + fVar26;
              pfVar17 = ((float *)GEN_TOP((iVar16 + 0x10 + (int)pfVar18)));
              fVar24 = *pfVar17;
              fVar6 = pfVar17[1];
              fVar7 = pfVar17[2];
              fVar8 = pfVar17[3];
              fVar25 = fVar7 * pfVar18[2] + fVar24 * *pfVar18;
              fVar26 = fVar8 * pfVar18[3] + fVar6 * pfVar18[1];
              fVar28 = fVar24 * *pfVar18 + fVar7 * pfVar18[2];
              fVar30 = fVar6 * pfVar18[1] + fVar8 * pfVar18[3];
              uVar21 = -(uint)(fVar26 + fVar25 < 0.0);
              uVar20 = -(uint)(fVar25 + fVar26 < 0.0);
              uVar15 = -(uint)(fVar30 + fVar28 < 0.0);
              uVar22 = -(uint)(fVar28 + fVar30 < 0.0);
              uVar27 = (uint)gen_fl2bits(fVar6) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
              uVar29 = (uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
              uVar31 = (uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
              fVar25 = pfVar18[1];
              fVar26 = pfVar18[2];
              fVar28 = pfVar18[3];
              *pfVar18 = gen_bits2f(((uint)gen_fl2bits(fVar24) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar21 |
                                    ~uVar21 & (uint)gen_fl2bits(fVar24)) * fVar23 + *pfVar18;
              pfVar18[1] = gen_bits2f(uVar27 & uVar20 | ~uVar20 & (uint)gen_fl2bits(fVar6)) * fVar23
                           + fVar25;
              pfVar18[2] = gen_bits2f(uVar29 & uVar15 | ~uVar15 & (uint)gen_fl2bits(fVar7)) * fVar23
                           + fVar26;
              pfVar18[3] = gen_bits2f(uVar31 & uVar22 | ~uVar22 & (uint)gen_fl2bits(fVar8)) * fVar23
                           + fVar28;
              *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x9c)) + uVar19 * 4))) = *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x9c)) + uVar19 * 4))) + fVar23;
              iVar10 = (*(int *)(gen_frame + 0xd8));
            }
            uVar19 = uVar19 + 1;
            pfVar18 = pfVar18 + 0xc;
          } while (uVar19 < param_3);
        }
        pvVar13 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4)));
        if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 0xc)))) {
          *puVar9 = ((char *)REFP(0x1136dd4));
          uVar5 = rdtsc();
          (*(int *)(gen_frame + 0xc4)) = (int)uVar5;
          puVar9[1] = (int)uVar5;
          *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4))) = puVar9 + 3;
        }
        F_00d93ba0(param_2,(*(uint *)(gen_frame + 0x9c)),param_3);
        fVar23 = REFG(float, 0x1087f04);
        uVar19 = 0;
        if (3 < (int)param_5) {
          pfVar18 = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0xb0)) + 0xc)));
          iVar16 = (param_5 - 4 >> 2) + 1;
          pfVar17 = ((float *)GEN_TOP((param_4 + 4)));
          uVar19 = iVar16 * 4;
          do {
            fVar24 = pfVar18[-3];
            if (!(0.0 < pfVar18[-3])) {
              fVar24 = fVar23;
            }
            pfVar17[-1] = pfVar17[-1] / fVar24;
            fVar24 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xb0)) - param_4) + (int)pfVar17)));
            if (!(0.0 < fVar24)) {
              fVar24 = fVar23;
            }
            *pfVar17 = *pfVar17 / fVar24;
            fVar24 = pfVar18[-1];
            if (!(0.0 < pfVar18[-1])) {
              fVar24 = fVar23;
            }
            pfVar17[1] = pfVar17[1] / fVar24;
            fVar24 = *pfVar18;
            if (!(0.0 < *pfVar18)) {
              fVar24 = fVar23;
            }
            pfVar17[2] = pfVar17[2] / fVar24;
            pfVar17 = pfVar17 + 4;
            pfVar18 = pfVar18 + 4;
            iVar16 = iVar16 - 1;
            iVar10 = (*(int *)(gen_frame + 0xd8));
          } while (iVar16 != 0);
        }
        if (uVar19 < param_5) {
          pfVar18 = ((float *)GEN_TOP((param_4 + uVar19 * 4)));
          iVar16 = param_5 - uVar19;
          do {
            fVar24 = *((float *)GEN_TOP(((int)pfVar18 + ((*(uint *)(gen_frame + 0xb0)) - param_4))));
            if (!(0.0 < fVar24)) {
              fVar24 = fVar23;
            }
            *pfVar18 = *pfVar18 / fVar24;
            pfVar18 = pfVar18 + 1;
            iVar16 = iVar16 - 1;
          } while (iVar16 != 0);
        }
      }
      iVar16 = (*(uint *)(gen_frame + 0xd4)) + 1;
      (*(uint *)(gen_frame + 0xd4)) = iVar16;
    } while (iVar16 < 2);
    pvVar13 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    uVar21 = (*(uint *)(gen_frame + 0xc0));
    uVar19 = (*(uint *)(gen_frame + 0xbc));
    puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4)));
    if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 0xc)))) {
      *puVar9 = &REFG(undefined, 0x1134dd0);
      uVar5 = rdtsc();
      (*(int *)(gen_frame + 0xc4)) = (int)uVar5;
      puVar9[1] = (int)uVar5;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar13 + 4))) = puVar9 + 3;
    }
    if ((*(uint *)(gen_frame + 0xbc)) == (*(uint *)(gen_frame + 0xb0))) {
      (*(uint *)(gen_frame + 0xb4)) = 0;
    }
    phVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar21 = uVar21 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)(phVar14 + 8) < (int)uVar21) || (uVar21 + uVar19 != *(int *)(phVar14 + 0xc))) ||
       (*(uint *)(phVar14 + 0x14) == uVar19)) {
      F_00d945c0(phVar14 GEN_EDX_ARG,uVar19,uVar21);
    }
    else {
      *(uint *)(phVar14 + 0xc) = uVar19;
    }
    (*(uint *)(gen_frame + 0xb4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0xb8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0xb0)),(*(uint *)(gen_frame + 0xb8)) * 4);
    }
    uVar21 = (*(uint *)(gen_frame + 0xac));
    uVar19 = (*(uint *)(gen_frame + 0xa8));
    (*(uint *)(gen_frame + 0xb0)) = 0;
    (*(uint *)(gen_frame + 0xb8)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0xa8)) == (*(uint *)(gen_frame + 0x9c))) {
      (*(uint *)(gen_frame + 0xa0)) = 0;
    }
    phVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar21 = uVar21 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)(phVar14 + 8) < (int)uVar21) || (uVar21 + uVar19 != *(int *)(phVar14 + 0xc))) ||
       (*(uint *)(phVar14 + 0x14) == uVar19)) {
      F_00d945c0(phVar14 GEN_EDX_ARG,uVar19,uVar21);
    }
    else {
      *(uint *)(phVar14 + 0xc) = uVar19;
    }
    (*(uint *)(gen_frame + 0xa0)) = 0;
    if ((int)(*(uint *)(gen_frame + 0xa4)) < 0) {
      return (*(uint *)(gen_frame + 0xa4));
    }
    uVar19 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x9c)),(*(uint *)(gen_frame + 0xa4)) * 4)
    ;
    return uVar19;
  }
  uVar19 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x1c))) + 3U & 0xfffffffc;
  if (uVar19 == 0) {
    (*(uint *)(gen_frame + 0xdc)) = 0;
LAB_00d450f5: ;
    (*(uint *)(gen_frame + 0xd4)) = 0x80000000;
  }
  else {
    (*(uint *)(gen_frame + 0xd0)) = uVar19 * 0x30;
    uVar19 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0xd0)));
    (*(uint *)(gen_frame + 0xdc)) = uVar19;
    if ((int)(*(uint *)(gen_frame + 0xd0)) / 0x30 == 0) goto LAB_00d450f5;
    (*(uint *)(gen_frame + 0xd4)) = (int)(*(uint *)(gen_frame + 0xd0)) / 0x30;
  }
  uVar19 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x40))) + 3U & 0xfffffffc;
  if (uVar19 == 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(uint *)(gen_frame + 0x98)) = uVar19 * 4;
    puVar9 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x98)))));
    iVar10 = (int)((*(uint *)(gen_frame + 0x98)) + ((int)(*(uint *)(gen_frame + 0x98)) >> 0x1f & 3U)) >> 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = puVar9;
    if (iVar10 != 0) {
      (*(int *)(gen_frame + 0xd8)) = iVar10;
      goto LAB_00d45154;
    }
  }
  (*(int *)(gen_frame + 0xd8)) = ((int)0x80000000);
LAB_00d45154: ;
  puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0xcc));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined1 *)(gen_frame + 0x2)) = 2;
  (*(undefined2 *)(gen_frame + 0x0)) = 0x402;
  (*(undefined2 *)(gen_frame + 0x4)) = 0x60;
  (*(undefined2 *)(gen_frame + 0x6)) = 0xffff;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x11800;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_00d84160(param_1,&(*(undefined2 *)(gen_frame + 0x0)));
  F_00d841f0(param_1,(*(uint *)(gen_frame + 0xdc)),puVar9,0,0,0,&(*(undefined2 *)(gen_frame + 0x0)),0,1,REFG(float, 0x10947f8));
  F_00d846b0(&(*(undefined2 *)(gen_frame + 0x0)));
  F_00d841c0(&(*(undefined2 *)(gen_frame + 0x0)));
  uVar19 = (*(uint *)(gen_frame + 0xd4));
  if (0 < (int)(param_3 * 3)) {
    puVar12 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0xdc)) + 0xc)));
    puVar11 = ((undefined4 *)GEN_TOP((param_2 + 8)));
    (*(int *)(gen_frame + 0xc4)) = (*(uint *)(gen_frame + 0xdc)) - param_2;
    (*(int *)(gen_frame + 0x94)) = param_3 * 3;
    do {
      uVar1 = *puVar12;
      uVar2 = *((undefined4 *)GEN_TOP((((*(uint *)(gen_frame + 0xdc)) - param_2) + (int)puVar11)));
      (*(undefined4 *)(gen_frame + 0x90)) = uVar1;
      uVar3 = puVar12[-3];
      puVar11[-1] = puVar12[-2];
      puVar11[-2] = uVar3;
      *puVar11 = uVar2;
      puVar11[1] = uVar1;
      puVar12 = puVar12 + 4;
      puVar11 = puVar11 + 4;
      iVar10 = (*(int *)(gen_frame + 0x94)) - 1;
      (*(int *)(gen_frame + 0x94)) = iVar10;
      puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0xcc));
    } while (iVar10 != 0);
  }
  puVar12 = puVar9;
  if (0 < (int)param_5) {
    uVar21 = param_5;
    do {
      *((undefined4 *)GEN_TOP(((param_4 - (int)puVar9) + (int)puVar12))) = *puVar12;
      puVar12 = puVar12 + 1;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  if (-1 < (*(int *)(gen_frame + 0xd8))) {
    puVar12 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),puVar9,(*(int *)(gen_frame + 0xd8)) * 4)));
  }
  if ((int)uVar19 < 0) {
    return (uint)puVar12;
  }
  uVar19 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                     (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0xdc)),(uVar19 & 0x3fffffff) * 0x30);
  return uVar19;
}

/* ref: hkaAnimatedSkeleton::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d45b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd45b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d45060(this GEN_EDX_FWD,param_1,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x1c))),param_2,
                     *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x40))),0);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d45b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd45b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00d45060(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,1);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d45b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd45b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00d44120(this GEN_EDX_FWD,1,&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[0]),0,0,0);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d45b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd45b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00d44120(this GEN_EDX_FWD,0,0,0,1,&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[0]));
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d45bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd45bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00d44120(this GEN_EDX_FWD,param_3,param_2,param_1,0,0,0);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d45bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd45bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00d44120(this GEN_EDX_FWD,0,0,0,param_3,param_2,param_1);
  return uVar1;
}

/* ref: FUN_00d461b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d461b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd461b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1136d84);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1136d88);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x1136d8c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1136d80) ^ *param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4 ^ uVar1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar5 ^ uVar2;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d461d0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d461d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd461d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  return (float10)*in_ecx;
}

/* ref: FUN_00d461f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d461f0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd461f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx < *param_3);
  param_2[1] = -(uint)(fVar4 < fVar1);
  param_2[2] = -(uint)(fVar5 < fVar2);
  param_2[3] = -(uint)(fVar6 < fVar3);
  return (uint)param_2;
}

/* ref: FUN_00d46220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46220(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd46220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2 & 0x7fffffff;
  in_ecx[1] = uVar1 & 0x7fffffff;
  in_ecx[2] = uVar2 & 0x7fffffff;
  in_ecx[3] = uVar3 & 0x7fffffff;
  return (uint)param_2;
}

/* ref: FUN_00d46250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46250(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd46250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d462a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d462a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd462a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d462b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d462b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd462b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  }
  if ((int)param_2 < iVar3) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + param_2 * 4)));
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00d462f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d462f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd462f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d46310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd46310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00d46340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46340(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd46340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00d46350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd46350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d463a0 */
GEN_LIB GEN_FRAME unsigned int F_00d463a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd463a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d463d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d463d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd463d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00d46420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd46420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d46450 */
GEN_LIB GEN_FRAME uint F_00d46450(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd46450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138ccc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cc8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138cc4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138cc0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d46470 */
GEN_LIB GEN_FRAME uint F_00d46470(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd46470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cdc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cd8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138cd4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138cd0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d46490 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d46490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd46490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + *((int *)GEN_TOP((in_ecx + 0x10))))));
}

/* ref: FUN_00d464a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d464a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd464a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + *((int *)GEN_TOP((in_ecx + 0x1c))))));
}

/* ref: FUN_00d464b0 */
GEN_LIB GEN_FRAME uint F_00d464b0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd464b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  return (uint)!(*param_2 <= *param_1);
}

/* ref: FUN_00d464d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d464d0(GEN_P(undefined1 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd464d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0x204;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 4) = (undefined2)param_3;
  *(undefined4 *)(param_1 + 0x10) = 0x11800;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return (uint)param_1;
}

/* ref: FUN_00d46590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd46590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00d465d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d465d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd465d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 != param_1) {
    uVar1 = *((uint *)GEN_TOP((*(int *)this + uVar1 * 4)));
    *((uint *)GEN_TOP((*(int *)this + param_1 * 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00d465f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d465f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd465f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d46630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd46630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar3 = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) * 0x30;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[0]));
    iVar4 = (*(int *)&gen_args[0]) / 0x30;
    if (iVar4 != 0) goto LAB_00d4668e;
  }
  iVar4 = ((int)0x80000000);
LAB_00d4668e: ;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  *(uint *)this = uVar3;
  return (uint)this;
}

/* ref: FUN_00d466b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d466b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd466b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar3 = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[0]));
    iVar4 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar4 != 0) goto LAB_00d46706;
  }
  iVar4 = ((int)0x80000000);
LAB_00d46706: ;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  *(uint *)this = uVar3;
  return (uint)this;
}

/* ref: FUN_00d46720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd46720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd46800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00d46840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd46840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d46880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d46880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd46880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d468c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d468c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd468c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46900 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d46900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd46900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46980 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d46980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd46980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d469c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d469c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd469c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46a00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d46a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd46a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46a40(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd46a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar22;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  undefined1 in_XMM3 [16] = {0};
  
  fVar4 = *(float *)&REFG(undefined, 0x1138ccc);
  fVar3 = *(float *)&REFG(undefined, 0x1138cc8);
  fVar2 = *(float *)&REFG(undefined, 0x1138cc4);
  fVar1 = *(float *)&REFG(undefined, 0x1138cc0);
  memcpy(&(auVar21), &(*param_2), sizeof(*param_2) < sizeof(auVar21) ? sizeof(*param_2) : sizeof(auVar21));
  if (!(*(float *)&REFG(undefined, 0x1138cc0) <= ABS((*(float *)((char *)&auVar21 + 0))))) {
    *in_ecx = 0.0;
    in_ecx[1] = 0.0;
    in_ecx[2] = 0.0;
    in_ecx[3] = 0.0;
    fVar3 = *(float *)&REFG(undefined, 0x1138cac);
    fVar2 = *(float *)&REFG(undefined, 0x1138ca8);
    fVar1 = *(float *)&REFG(undefined, 0x1138ca4);
    in_ecx[4] = *(float *)&REFG(undefined, 0x1138ca0);
    in_ecx[5] = fVar1;
    in_ecx[6] = fVar2;
    in_ecx[7] = fVar3;
    fVar3 = *(float *)&REFG(undefined, 0x1138afc);
    fVar2 = *(float *)&REFG(undefined, 0x1138af8);
    fVar1 = *(float *)&REFG(undefined, 0x1138af4);
    in_ecx[8] = *(float *)&REFG(undefined, 0x1138af0);
    in_ecx[9] = fVar1;
    in_ecx[10] = fVar2;
    in_ecx[0xb] = fVar3;
    return (uint)param_2;
  }
  gen_rcpps(&(auVar20), &(in_XMM2), &(auVar21));
  fVar9 = (*(float *)&REFG(undefined, 0x1136d40) - (*(float *)((char *)&auVar21 + 0)) * (*(float *)((char *)&auVar20 + 0))) * (*(float *)((char *)&auVar20 + 0));
  fVar11 = (*(float *)&REFG(undefined, 0x1136d44) - (*(float *)((char *)&auVar21 + 4)) * (*(float *)((char *)&auVar20 + 4))) * (*(float *)((char *)&auVar20 + 4));
  fVar13 = (*(float *)&REFG(undefined, 0x1136d48) - (*(float *)((char *)&auVar21 + 8)) * (*(float *)((char *)&auVar20 + 8))) * (*(float *)((char *)&auVar20 + 8));
  fVar15 = (*(float *)&REFG(undefined, 0x1136d4c) - (*(float *)((char *)&auVar21 + 12)) * (*(float *)((char *)&auVar20 + 12))) * (*(float *)((char *)&auVar20 + 12));
  *in_ecx = *in_ecx * fVar9;
  in_ecx[1] = in_ecx[1] * fVar11;
  in_ecx[2] = in_ecx[2] * fVar13;
  in_ecx[3] = in_ecx[3] * fVar15;
  in_ecx[8] = in_ecx[8] * fVar9;
  in_ecx[9] = in_ecx[9] * fVar11;
  in_ecx[10] = in_ecx[10] * fVar13;
  in_ecx[0xb] = in_ecx[0xb] * fVar15;
  fVar13 = *(float *)&REFG(undefined, 0x1138cac);
  fVar11 = *(float *)&REFG(undefined, 0x1138ca8);
  fVar9 = *(float *)&REFG(undefined, 0x1138ca4);
  fVar15 = (in_ecx[7] * in_ecx[7] + in_ecx[5] * in_ecx[5]) +
           (in_ecx[6] * in_ecx[6] + in_ecx[4] * in_ecx[4]);
  if ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar1)) || fVar15 < fVar1) {
    in_ecx[4] = *(float *)&REFG(undefined, 0x1138ca0);
    in_ecx[5] = fVar9;
    in_ecx[6] = fVar11;
    in_ecx[7] = fVar13;
  }
  else {
    fVar9 = in_ecx[4];
    fVar11 = in_ecx[5];
    fVar13 = in_ecx[6];
    fVar15 = in_ecx[7];
    fVar10 = fVar13 * fVar13 + fVar9 * fVar9;
    fVar12 = fVar15 * fVar15 + fVar11 * fVar11;
    fVar14 = fVar9 * fVar9 + fVar13 * fVar13;
    fVar16 = fVar11 * fVar11 + fVar15 * fVar15;
    (*(float *)((char *)&auVar21 + 0)) = fVar12 + fVar10;
    (*(float *)((char *)&auVar21 + 4)) = fVar10 + fVar12;
    (*(float *)((char *)&auVar21 + 8)) = fVar16 + fVar14;
    (*(float *)((char *)&auVar21 + 12)) = fVar14 + fVar16;
    gen_rsqrtps(&(auVar20), &(in_XMM3), &(auVar21));
    fVar24 = (*(float *)((char *)&auVar20 + 0));
    fVar16 = (*(float *)((char *)&auVar20 + 4));
    fVar22 = (*(float *)((char *)&auVar20 + 8));
    fVar23 = (*(float *)((char *)&auVar20 + 12));
    fVar10 = *(float *)&REFG(undefined, 0x1136d54) - (fVar16 * (*(float *)((char *)&auVar21 + 4))) * fVar16;
    fVar12 = *(float *)&REFG(undefined, 0x1136d58) - (fVar22 * (*(float *)((char *)&auVar21 + 8))) * fVar22;
    fVar14 = *(float *)&REFG(undefined, 0x1136d5c) - (fVar23 * (*(float *)((char *)&auVar21 + 12))) * fVar23;
    fVar16 = *(float *)&REFG(undefined, 0x1136d64) * fVar16;
    fVar22 = *(float *)&REFG(undefined, 0x1136d68) * fVar22;
    fVar23 = *(float *)&REFG(undefined, 0x1136d6c) * fVar23;
    in_ecx[4] = fVar9 * ((*(float *)&REFG(undefined, 0x1136d50) - (fVar24 * (*(float *)((char *)&auVar21 + 0))) * fVar24) *
                        (*(float *)&REFG(undefined, 0x1136d60) * fVar24));
    in_ecx[5] = fVar11 * (fVar10 * fVar16);
    in_ecx[6] = fVar13 * (fVar12 * fVar22);
    in_ecx[7] = fVar15 * (fVar14 * fVar23);
  }
  fVar9 = in_ecx[8] * in_ecx[8];
  fVar11 = in_ecx[9] * in_ecx[9];
  fVar13 = in_ecx[10] * in_ecx[10];
  uVar5 = -(uint)((fVar11 + fVar9) + fVar13 < fVar1);
  uVar6 = -(uint)((fVar11 + fVar9) + fVar13 < fVar2);
  uVar7 = -(uint)((fVar11 + fVar9) + fVar13 < fVar3);
  uVar8 = -(uint)((fVar11 + fVar9) + fVar13 < fVar4);
  uVar17 = uVar6 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4));
  uVar18 = uVar7 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8));
  uVar19 = uVar8 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc));
  in_ecx[8] = gen_bits2f(uVar5 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                         ~uVar5 & (uint)gen_fl2bits(in_ecx[8]));
  in_ecx[9] = gen_bits2f(uVar17 | ~uVar6 & (uint)gen_fl2bits(in_ecx[9]));
  in_ecx[10] = gen_bits2f(uVar18 | ~uVar7 & (uint)gen_fl2bits(in_ecx[10]));
  in_ecx[0xb] = gen_bits2f(uVar19 | ~uVar8 & (uint)gen_fl2bits(in_ecx[0xb]));
  return (uint)param_2;
}

/* ref: FUN_00d46b60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d46b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd46b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d46d00((int)this - 8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00d46b70 */
GEN_LIB GEN_FRAME uint F_00d46b70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd46b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d46ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd46ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)(this_00 + 0xc);
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)(this_00 + 8) < (int)uVar2) || (*(uint *)(this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)(this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d46c10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d46c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd46c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 == *(int *)this) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)(this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)(this_00 + 0xc))) ||
     (*(int *)(this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)(this_00 + 0xc) = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: hkaAnimatedSkeleton::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d46d00(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd46d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d44090(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: Global::SquareRoot */
GEN_LIB GEN_FRAME float F_00d46ea0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd46ea0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return SQRT(param_1);
}

/* ref: Global::SphericalToCartesian */
GEN_LIB GEN_FRAME float F_00d470c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd470c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *((float *)GEN_TOP(param_1));
  uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
  uVar3 = *((uint *)GEN_TOP((param_1 + 8)));
  fVar4 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)uVar3)));
  fVar4 = fVar4 * fVar1;
  fVar5 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)uVar2)));
  fVar6 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)uVar2)));
  fVar6 = fVar6 * fVar4;
  fVar7 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)uVar3)));
  *((float *)GEN_TOP(param_1)) = fVar5 * fVar4;
  *((float *)GEN_TOP((param_1 + 4))) = fVar6;
  *((float *)GEN_TOP((param_1 + 8))) = fVar7 * fVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  return fVar6;
}

/* ref: Global::FastAtan2 */
GEN_LIB GEN_NOFRAME float10 F_00d47150(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd47150u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  float local_14;
  
  fVar1 = ABS(param_1);
  fVar2 = ABS(param_2);
  if (fVar1 <= fVar2) {
    fVar1 = fVar1 / (fVar2 + REFG(float, 0x10905c4));
    fVar2 = (REFG(float, 0x1087f04) - fVar1 * *(float *)&REFG(undefined, 0x1136e94)) * fVar1;
    fVar1 = ((fVar1 * *(float *)&REFG(undefined, 0x1136e90)) * fVar1) * fVar1;
  }
  else {
    fVar2 = fVar2 / (fVar1 + REFG(float, 0x10905c4));
    fVar1 = (REFG(float, 0x1087f04) - fVar2 * *(float *)&REFG(undefined, 0x1136e94)) * fVar2 -
            ((fVar2 * *(float *)&REFG(undefined, 0x1136e90)) * fVar2) * fVar2;
    fVar2 = REFG(float, 0x109ca64);
  }
  local_14 = fVar2 - fVar1;
  if (param_2 < 0.0) {
    local_14 = REFG(float, 0x110e250) - local_14;
  }
  if (param_1 < 0.0) {
    local_14 = gen_bits2f((uint)gen_fl2bits(local_14) ^ REFG(uint, 0x10920d0));
  }
  return (float10)local_14;
}

/* ref: Global::CartesianToSpherical */
GEN_LIB GEN_NOFRAME float F_00d47270(GEN_P(float * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd47270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar7 [16];
  
  fVar2 = *param_1 * *param_1;
  fVar4 = param_1[1] * param_1[1];
  fVar5 = param_1[2] * param_1[2];
  fVar6 = (fVar4 + fVar2) + fVar5;
  (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits((fVar4 + fVar2) + fVar5);
  (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits((fVar4 + fVar2) + fVar5);
  (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits((fVar4 + fVar2) + fVar5);
  gen_rsqrtps(&(auVar7), &(in_XMM3), &(auVar7));
  fVar2 = (*(float *)((char *)&auVar7 + 0));
  fVar2 = gen_bits2f(~-(uint)(fVar6 <= 0.0) &
                     (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar2 * fVar6) * fVar2) *
                                       (*(float *)&REFG(undefined, 0x1136e70) * fVar2)) * fVar6));
  if (!(fVar2 < REFG(float, 0x10abe98))) {
    fVar4 = *param_1;
    fVar5 = param_1[1];
    fVar6 = param_1[2] / fVar2;
    if (REFG(float, 0x1087f04) <= ABS(fVar6)) {
      fVar3 = REFG(float, 0x109ca60);
      if (*(float *)&REFG(undefined, 0x1088114) < fVar6) {
        fVar3 = REFG(float, 0x109ca64);
      }
    }
    else {
      fVar3 = F_010524c9(fVar6);
    }
    fVar1 = F_00d47150(fVar5,fVar4);
    *param_1 = fVar2;
    param_1[1] = (float)fVar1;
    param_1[2] = fVar3;
    param_1[3] = (float)(float10)0;
    return (float)fVar1;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return fVar2;
}

/* ref: Global::SolveLookAtIk */
GEN_LIB GEN_NOFRAME uint F_00d473c0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd473c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL(0x120, 0);
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 extraout_ECX = 0;
  undefined4 uVar3;
  float * pfVar4;
  float fVar5;
  undefined1 auVar6 [4];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  float fVar11;
  float fVar17;
  float fVar19;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar35;
  float fVar36;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM6 [16] = {0};
  undefined1 auVar39 [16];
  
  if ((GEN_ISNAN(param_4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) == ((GEN_ISNAN(param_4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_4 == *(float *)&REFG(undefined, 0x1088114))) {
    (*(float *)(gen_frame + 0x108)) = param_2[0xc];
    if (param_6 != ((float *)GEN_TOP(0x0))) {
      fVar5 = ABS(param_6[2]);
      fVar8 = ABS(param_6[3]);
      *(undefined4 *)((undefined1 *)(gen_frame + 0xf0)) = gen_fl2bits(fVar5);
      (*(float *)(gen_frame + 0xf4)) = 0.0;
      (*(float *)(gen_frame + 0xf8)) = 0.0;
      (*(float *)(gen_frame + 0xfc)) = 0.0;
      (*(float *)(gen_frame + 0xc0)) = fVar8;
      (*(float *)(gen_frame + 0xc4)) = 0.0;
      (*(float *)(gen_frame + 0xc8)) = 0.0;
      (*(float *)(gen_frame + 0xcc)) = 0.0;
      (*(float *)(gen_frame + 0x108)) = fVar5;
      if (!(fVar8 < fVar5)) {
        (*(float *)(gen_frame + 0x108)) = fVar8;
      }
      fVar5 = ABS(*param_6);
      *(undefined4 *)((undefined1 *)(gen_frame + 0xf0)) = gen_fl2bits(fVar5);
      (*(float *)(gen_frame + 0xf4)) = 0.0;
      (*(float *)(gen_frame + 0xf8)) = 0.0;
      (*(float *)(gen_frame + 0xfc)) = 0.0;
      if (!(fVar5 < (*(float *)(gen_frame + 0x108)))) {
        (*(float *)(gen_frame + 0x108)) = fVar5;
      }
      fVar5 = ABS(param_6[1]);
      *(undefined4 *)((undefined1 *)(gen_frame + 0xf0)) = gen_fl2bits(fVar5);
      (*(float *)(gen_frame + 0xf4)) = 0.0;
      (*(float *)(gen_frame + 0xf8)) = 0.0;
      (*(float *)(gen_frame + 0xfc)) = 0.0;
      unsigned char gen_vx0[64];
      gen_vzext(gen_vx0, (unsigned long long)((uint)gen_fl2bits(fVar5)), 4);
      gen_vset((*(gen_v16 *)((undefined1 *)(gen_frame + 0xf0))), 16, gen_vx0, 16);
      if (!(fVar5 < (*(float *)(gen_frame + 0x108)))) {
        (*(float *)(gen_frame + 0x108)) = fVar5;
      }
    }
    fVar5 = param_3[3];
    fVar8 = param_5[3];
    fVar26 = *param_3 - *param_5;
    fVar35 = param_3[1] - param_5[1];
    fVar36 = param_3[2] - param_5[2];
    fVar11 = fVar26 * fVar26;
    fVar17 = fVar35 * fVar35;
    fVar19 = fVar36 * fVar36;
    (*(float *)((char *)&auVar38 + 0)) = (fVar17 + fVar11) + fVar19;
    (*(float *)((char *)&auVar38 + 4)) = (fVar17 + fVar11) + fVar19;
    (*(float *)((char *)&auVar38 + 8)) = (fVar17 + fVar11) + fVar19;
    (*(float *)((char *)&auVar38 + 12)) = (fVar17 + fVar11) + fVar19;
    (*(float *)(gen_frame + 0x90)) = *(float *)&REFG(undefined, 0x1136e70);
    (*(float *)(gen_frame + 0x94)) = *(float *)&REFG(undefined, 0x1136e74);
    (*(float *)(gen_frame + 0x98)) = *(float *)&REFG(undefined, 0x1136e78);
    (*(float *)(gen_frame + 0x9c)) = *(float *)&REFG(undefined, 0x1136e7c);
    gen_rsqrtps(&(auVar39), &(in_XMM6), &(auVar38));
    (*(float *)(gen_frame + 0xb0)) = *(float *)&REFG(undefined, 0x1136e60);
    (*(float *)(gen_frame + 0xb4)) = *(float *)&REFG(undefined, 0x1136e64);
    (*(float *)(gen_frame + 0xb8)) = *(float *)&REFG(undefined, 0x1136e68);
    (*(float *)(gen_frame + 0xbc)) = *(float *)&REFG(undefined, 0x1136e6c);
    fVar9 = (*(float *)((char *)&auVar39 + 0));
    fVar18 = (*(float *)((char *)&auVar39 + 4));
    fVar10 = (*(float *)((char *)&auVar39 + 8));
    fVar20 = (*(float *)((char *)&auVar39 + 12));
    (*(float *)((char *)&auVar39 + 0)) = (fVar17 + fVar11) + fVar19;
    (*(float *)((char *)&auVar39 + 4)) = (fVar17 + fVar11) + fVar19;
    (*(float *)((char *)&auVar39 + 8)) = (fVar17 + fVar11) + fVar19;
    (*(float *)((char *)&auVar39 + 12)) = (fVar17 + fVar11) + fVar19;
    (*(float *)((char *)&auVar37 + 0)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar38 + 0)) <= 0.0) & (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar9 * (*(float *)((char *)&auVar38 + 0))) * fVar9) * (*(float *)&REFG(undefined, 0x1136e70) * fVar9)) * (*(float *)((char *)&auVar38 + 0))));
    (*(unsigned int *)((unsigned char *)(auVar37) + 4)) = ~-(uint)((*(float *)((char *)&auVar38 + 4)) <= 0.0) & (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e64) - (fVar18 * (*(float *)((char *)&auVar38 + 4))) * fVar18) * (*(float *)&REFG(undefined, 0x1136e74) * fVar18)) * (*(float *)((char *)&auVar38 + 4)));
    (*(unsigned int *)((unsigned char *)(auVar37) + 8)) = ~-(uint)((*(float *)((char *)&auVar38 + 8)) <= 0.0) & (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e68) - (fVar10 * (*(float *)((char *)&auVar38 + 8))) * fVar10) * (*(float *)&REFG(undefined, 0x1136e78) * fVar10)) * (*(float *)((char *)&auVar38 + 8)));
    (*(unsigned int *)((unsigned char *)(auVar37) + 12)) = ~-(uint)((*(float *)((char *)&auVar38 + 12)) <= 0.0) & (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e6c) - (fVar20 * (*(float *)((char *)&auVar38 + 12))) * fVar20) * (*(float *)&REFG(undefined, 0x1136e7c) * fVar20)) * (*(float *)((char *)&auVar38 + 12)));
    (*(float *)(gen_frame + 0xac)) = (*(float *)((char *)&auVar37 + 0));
    gen_rsqrtps(&(auVar38), &(auVar37), &(auVar39));
    fVar11 = (*(float *)((char *)&auVar38 + 0));
    fVar17 = (*(float *)((char *)&auVar38 + 4));
    fVar19 = (*(float *)((char *)&auVar38 + 8));
    fVar9 = (*(float *)((char *)&auVar38 + 12));
    fVar26 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar39 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e60) - (fVar11 * (*(float *)((char *)&auVar39 + 0))) * fVar11) * (*(float *)&REFG(undefined, 0x1136e70) * fVar11))) * fVar26;
    fVar35 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar39 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e64) - (fVar17 * (*(float *)((char *)&auVar39 + 4))) * fVar17) * (*(float *)&REFG(undefined, 0x1136e74) * fVar17))) * fVar35;
    fVar36 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar39 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e68) - (fVar19 * (*(float *)((char *)&auVar39 + 8))) * fVar19) * (*(float *)&REFG(undefined, 0x1136e78) * fVar19))) * fVar36;
    (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) = param_2[8];
    (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) = param_2[9];
    (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) = param_2[10];
    (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4)) = param_2[0xb];
    (*(float *)(gen_frame + 0x80)) = fVar26;
    (*(float *)(gen_frame + 0x84)) = fVar35;
    (*(float *)(gen_frame + 0x88)) = fVar36;
    (*(float *)(gen_frame + 0x8c)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar39 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e6c) - (fVar9 * (*(float *)((char *)&auVar39 + 12))) * fVar9) * (*(float *)&REFG(undefined, 0x1136e7c) * fVar9))) * (fVar5 - fVar8);
    (*(float *)(gen_frame + 0xa8)) = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) * fVar35 + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) * fVar26) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) * fVar36;
    (*(float *)(gen_frame + 0xc0)) = 0.0;
    (*(float *)(gen_frame + 0xc4)) = 0.0;
    (*(float *)(gen_frame + 0xc8)) = 0.0;
    (*(float *)(gen_frame + 0xcc)) = 0.0;
    (*(undefined1 *)(gen_frame + 0x10f)) = 1;
    fVar5 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits((*(float *)(gen_frame + 0x108))))));
    if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN((*(float *)(gen_frame + 0xa8)))) && !(fVar5 <= (*(float *)(gen_frame + 0xa8)))) {
      fVar26 = (*(float *)(gen_frame + 0x88)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) - (*(float *)(gen_frame + 0x84)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0));
      fVar17 = (*(float *)(gen_frame + 0x80)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) - (*(float *)(gen_frame + 0x88)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0));
      fVar35 = (*(float *)(gen_frame + 0x84)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) - (*(float *)(gen_frame + 0x80)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4));
      fVar5 = fVar26 * fVar26;
      fVar8 = fVar17 * fVar17;
      fVar11 = fVar35 * fVar35;
      (*(undefined4 *)((char *)&auVar27 + 4)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar27 + 0)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar27 + 8)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar27 + 12)) = (undefined4)gen_fl2bits(fVar5);
      (*(float *)((char *)&auVar21 + 0)) = (fVar8 + fVar5) + fVar11;
      (*(float *)((char *)&auVar21 + 4)) = (fVar8 + fVar5) + fVar11;
      (*(float *)((char *)&auVar21 + 8)) = (fVar8 + fVar5) + fVar11;
      (*(float *)((char *)&auVar21 + 12)) = (fVar8 + fVar5) + fVar11;
      gen_rsqrtps(&(auVar38), &(auVar27), &(auVar21));
      fVar5 = (*(float *)((char *)&auVar38 + 0));
      fVar8 = (*(float *)((char *)&auVar38 + 4));
      fVar11 = (*(float *)((char *)&auVar38 + 8));
      fVar19 = (*(float *)((char *)&auVar38 + 12));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 0)) <= (*(float *)(gen_frame + 0xc0))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb0)) - (fVar5 * (*(float *)((char *)&auVar21 + 0))) * fVar5) * (fVar5 * (*(float *)(gen_frame + 0x90))))) * fVar26;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 4)) <= (*(float *)(gen_frame + 0xc4))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb4)) - (fVar8 * (*(float *)((char *)&auVar21 + 4))) * fVar8) * (fVar8 * (*(float *)(gen_frame + 0x94))))) * fVar17;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 8)) <= (*(float *)(gen_frame + 0xc8))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb8)) - (fVar11 * (*(float *)((char *)&auVar21 + 8))) * fVar11) * (fVar11 * (*(float *)(gen_frame + 0x98))))) * fVar35;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 12)) <= (*(float *)(gen_frame + 0xcc))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xbc)) - (fVar19 * (*(float *)((char *)&auVar21 + 12))) * fVar19) * (fVar19 * (*(float *)(gen_frame + 0x9c))))) * ((*(float *)(gen_frame + 0x8c)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4)) - (*(float *)(gen_frame + 0x8c)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4)));
      F_00d988a0(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0xd0)),(*(float *)(gen_frame + 0x108)));
      F_00d950d0(&(*(float *)(gen_frame + 0x80)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xf0)),param_2 + 8);
      (*(undefined1 *)(gen_frame + 0x10f)) = 0;
    }
    if (param_6 != ((float *)GEN_TOP(0x0))) {
      fVar5 = param_6[4];
      fVar8 = param_6[5];
      fVar11 = param_6[6];
      fVar26 = param_6[7];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) = (*(float *)(gen_frame + 0x80));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) = (*(float *)(gen_frame + 0x84));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) = (*(float *)(gen_frame + 0x88));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4)) = (*(float *)(gen_frame + 0x8c));
      fVar17 = param_2[8];
      fVar35 = param_2[9];
      fVar19 = param_2[10];
      fVar36 = param_2[0xb];
      (*(float *)(gen_frame + 0x30)) = fVar17;
      (*(float *)(gen_frame + 0x34)) = fVar35;
      (*(float *)(gen_frame + 0x38)) = fVar19;
      (*(float *)(gen_frame + 0x3c)) = fVar36;
      (*(float *)(gen_frame + 0x40)) = fVar8 * fVar19 - fVar11 * fVar35;
      (*(float *)(gen_frame + 0x44)) = fVar11 * fVar17 - fVar5 * fVar19;
      (*(float *)(gen_frame + 0x48)) = fVar5 * fVar35 - fVar8 * fVar17;
      (*(float *)(gen_frame + 0x4c)) = fVar26 * fVar36 - fVar26 * fVar36;
      (*(float *)(gen_frame + 0x50)) = fVar5;
      (*(float *)(gen_frame + 0x54)) = fVar8;
      (*(float *)(gen_frame + 0x58)) = fVar11;
      (*(float *)(gen_frame + 0x5c)) = fVar26;
      F_00da1c00(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
      fVar5 = ((*(float *)(gen_frame + 0x84)) * (*(float *)(gen_frame + 0x10)) + (*(float *)(gen_frame + 0x80)) * (*(float *)(gen_frame + 0x0))) + (*(float *)(gen_frame + 0x88)) * (*(float *)(gen_frame + 0x20));
      fVar8 = ((*(float *)(gen_frame + 0x84)) * (*(float *)(gen_frame + 0x14)) + (*(float *)(gen_frame + 0x80)) * (*(float *)(gen_frame + 0x4))) + (*(float *)(gen_frame + 0x88)) * (*(float *)(gen_frame + 0x24));
      fVar11 = ((*(float *)(gen_frame + 0x84)) * (*(float *)(gen_frame + 0x18)) + (*(float *)(gen_frame + 0x80)) * (*(float *)(gen_frame + 0x8))) + (*(float *)(gen_frame + 0x88)) * (*(float *)(gen_frame + 0x28));
      fVar26 = ((*(float *)(gen_frame + 0x84)) * (*(float *)(gen_frame + 0x1c)) + (*(float *)(gen_frame + 0x80)) * (*(float *)(gen_frame + 0xc))) + (*(float *)(gen_frame + 0x88)) * (*(float *)(gen_frame + 0x2c));
      *(undefined4 *)((undefined1 *)(gen_frame + 0xf0)) = gen_fl2bits(fVar5);
      (*(float *)(gen_frame + 0xf4)) = fVar8;
      (*(float *)(gen_frame + 0xf8)) = fVar11;
      (*(float *)(gen_frame + 0xfc)) = fVar26;
      F_00d47270(((undefined1 *)(gen_frame + 0xf0)));
      (*(undefined4 *)((char *)&auVar12 + 4)) = (undefined4)gen_fl2bits(param_6[2]);
      (*(undefined4 *)((char *)&auVar12 + 0)) = REFG(float, 0x1136c54);
      (*(undefined4 *)((char *)&auVar12 + 8)) = (undefined4)gen_fl2bits(*param_6);
      (*(undefined4 *)((char *)&auVar12 + 12)) = 0;
      gen_minps(&(auVar38), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0xf0))), &(auVar12));
      (*(undefined4 *)((char *)&auVar13 + 4)) = (undefined4)gen_fl2bits(param_6[3]);
      (*(undefined4 *)((char *)&auVar13 + 0)) = REFG(float, 0x1136e98);
      (*(undefined4 *)((char *)&auVar13 + 8)) = (undefined4)gen_fl2bits(param_6[1]);
      (*(undefined4 *)((char *)&auVar13 + 12)) = 0;
      gen_maxps(&(auVar38), &(auVar38), &(auVar13));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0xf0))), &(auVar38), sizeof(auVar38) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xf0))) ? sizeof(auVar38) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xf0))));
      F_00d470c0((uint)((undefined1 *)(gen_frame + 0xf0)));
      fVar5 = (gen_bits2f(((undefined1 *)(gen_frame + 0xf0))) * (*(float *)(gen_frame + 0x30)) + (*(float *)(gen_frame + 0xf4)) * (*(float *)(gen_frame + 0x40))) + (*(float *)(gen_frame + 0xf8)) * (*(float *)(gen_frame + 0x50));
      fVar8 = (gen_bits2f(((undefined1 *)(gen_frame + 0xf0))) * (*(float *)(gen_frame + 0x34)) + (*(float *)(gen_frame + 0xf4)) * (*(float *)(gen_frame + 0x44))) + (*(float *)(gen_frame + 0xf8)) * (*(float *)(gen_frame + 0x54));
      fVar11 = (gen_bits2f(((undefined1 *)(gen_frame + 0xf0))) * (*(float *)(gen_frame + 0x38)) + (*(float *)(gen_frame + 0xf4)) * (*(float *)(gen_frame + 0x48))) + (*(float *)(gen_frame + 0xf8)) * (*(float *)(gen_frame + 0x58));
      fVar26 = (gen_bits2f(((undefined1 *)(gen_frame + 0xf0))) * (*(float *)(gen_frame + 0x3c)) + (*(float *)(gen_frame + 0xf4)) * (*(float *)(gen_frame + 0x4c))) + (*(float *)(gen_frame + 0xf8)) * (*(float *)(gen_frame + 0x5c));
      (*(float *)(gen_frame + 0x80)) = fVar5;
      (*(float *)(gen_frame + 0x84)) = fVar8;
      (*(float *)(gen_frame + 0x88)) = fVar11;
      (*(float *)(gen_frame + 0x8c)) = fVar26;
      (*(unsigned int *)((unsigned char *)(auVar7) + 4)) = -(uint)(ABS(fVar8 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4))) <= *(float *)&REFG(undefined, 0x1136e84));
      (*(unsigned int *)((unsigned char *)(auVar7) + 0)) = -(uint)(ABS(fVar5 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0))) <= *(float *)&REFG(undefined, 0x1136e80));
      (*(unsigned int *)((unsigned char *)(auVar7) + 8)) = -(uint)(ABS(fVar11 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0))) <= *(float *)&REFG(undefined, 0x1136e88));
      (*(unsigned int *)((unsigned char *)(auVar7) + 12)) = -(uint)(ABS(fVar26 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4))) <= *(float *)&REFG(undefined, 0x1136e8c));
      uVar3 = gen_movmskps(&(auVar7));
      if (((byte)uVar3 & 7) != 7) {
        (*(undefined1 *)(gen_frame + 0x10f)) = 0;
      }
    }
    pfVar4 = param_5 + 4;
    F_00d950d0(&(*(undefined8 *)(gen_frame + 0xd0)) GEN_EDX_ARG,pfVar4,param_2);
    fVar26 = (*(float *)(gen_frame + 0x88)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) - (*(float *)(gen_frame + 0x84)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0));
    fVar35 = (*(float *)(gen_frame + 0x80)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) - (*(float *)(gen_frame + 0x88)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0));
    fVar19 = (*(float *)(gen_frame + 0x84)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) - (*(float *)(gen_frame + 0x80)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4));
    fVar5 = fVar26 * fVar26;
    fVar8 = fVar35 * fVar35;
    fVar11 = fVar19 * fVar19;
    (*(undefined4 *)((char *)&auVar28 + 4)) = (undefined4)gen_fl2bits(fVar5);
    (*(undefined4 *)((char *)&auVar28 + 0)) = (undefined4)gen_fl2bits(fVar5);
    (*(undefined4 *)((char *)&auVar28 + 8)) = (undefined4)gen_fl2bits(fVar5);
    (*(undefined4 *)((char *)&auVar28 + 12)) = (undefined4)gen_fl2bits(fVar5);
    (*(float *)((char *)&auVar14 + 0)) = (fVar8 + fVar5) + fVar11;
    (*(float *)((char *)&auVar14 + 4)) = (fVar8 + fVar5) + fVar11;
    (*(float *)((char *)&auVar14 + 8)) = (fVar8 + fVar5) + fVar11;
    (*(float *)((char *)&auVar14 + 12)) = (fVar8 + fVar5) + fVar11;
    gen_rsqrtps(&(auVar38), &(auVar28), &(auVar14));
    fVar5 = (*(float *)((char *)&auVar38 + 0));
    fVar8 = (*(float *)((char *)&auVar38 + 4));
    fVar11 = (*(float *)((char *)&auVar38 + 8));
    fVar36 = (*(float *)((char *)&auVar38 + 12));
    fVar5 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar14 + 0)) <= (*(float *)(gen_frame + 0xc0))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb0)) - (fVar5 * (*(float *)((char *)&auVar14 + 0))) * fVar5) * (fVar5 * (*(float *)(gen_frame + 0x90)))));
    fVar17 = fVar5 * (*(float *)((char *)&auVar14 + 0));
    (*(float *)(gen_frame + 0xe0)) = fVar5 * fVar26;
    (*(float *)(gen_frame + 0xe4)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar14 + 4)) <= (*(float *)(gen_frame + 0xc4))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb4)) - (fVar8 * (*(float *)((char *)&auVar14 + 4))) * fVar8) * (fVar8 * (*(float *)(gen_frame + 0x94))))) * fVar35;
    (*(float *)(gen_frame + 0xe8)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar14 + 8)) <= (*(float *)(gen_frame + 0xc8))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb8)) - (fVar11 * (*(float *)((char *)&auVar14 + 8))) * fVar11) * (fVar11 * (*(float *)(gen_frame + 0x98))))) * fVar19;
    (*(float *)(gen_frame + 0xec)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar14 + 12)) <= (*(float *)(gen_frame + 0xcc))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xbc)) - (fVar36 * (*(float *)((char *)&auVar14 + 12))) * fVar36) * (fVar36 * (*(float *)(gen_frame + 0x9c))))) * ((*(float *)(gen_frame + 0x8c)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4)) - (*(float *)(gen_frame + 0x8c)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4)));
    fVar5 = ABS(fVar17);
    fVar8 = 0.0;
    fVar11 = 0.0;
    fVar26 = 0.0;
    (*(float *)(gen_frame + 0x60)) = fVar5;
    (*(float *)(gen_frame + 0x64)) = 0.0;
    (*(float *)(gen_frame + 0x68)) = 0.0;
    (*(float *)(gen_frame + 0x6c)) = 0.0;
    (*(float *)(gen_frame + 0x70)) = fVar5;
    (*(float *)(gen_frame + 0x74)) = 0.0;
    (*(float *)(gen_frame + 0x78)) = 0.0;
    (*(float *)(gen_frame + 0x7c)) = 0.0;
    if (REFG(float, 0x1087f04) <= fVar5) {
      fVar35 = REFG(float, 0x109ca60);
      if (*(float *)&REFG(undefined, 0x1088114) < fVar17) {
        fVar35 = REFG(float, 0x109ca64);
      }
    }
    else {
      fVar35 = F_010524c9(fVar17);
      fVar5 = (*(float *)(gen_frame + 0x70));
      fVar8 = (*(float *)(gen_frame + 0x74));
      fVar11 = (*(float *)(gen_frame + 0x78));
      fVar26 = (*(float *)(gen_frame + 0x7c));
    }
    (*(float *)(gen_frame + 0x70)) = fVar5;
    (*(float *)(gen_frame + 0x74)) = fVar8;
    (*(float *)(gen_frame + 0x78)) = fVar11;
    (*(float *)(gen_frame + 0x7c)) = fVar26;
    if (fVar5 < REFG(float, 0x1136e40)) {
      *(undefined4 *)((undefined1 *)(gen_frame + 0xf0)) = gen_fl2bits(*(float *)&REFG(undefined, 0x1138ca0));
      (*(float *)(gen_frame + 0xf4)) = *(float *)&REFG(undefined, 0x1138ca4);
      (*(float *)(gen_frame + 0xf8)) = *(float *)&REFG(undefined, 0x1138ca8);
      (*(float *)(gen_frame + 0xfc)) = *(float *)&REFG(undefined, 0x1138cac);
      *(undefined4 *)auVar6 = gen_fl2bits(*(float *)&REFG(undefined, 0x1138ca0));
      fVar5 = *(float *)&REFG(undefined, 0x1138ca4);
      fVar8 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar11 = *(float *)&REFG(undefined, 0x1138cac);
    }
    else {
      F_00d988a0(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xe0)),fVar35 * param_4);
      { unsigned int gen_ac = (unsigned int)((*(unsigned int *)((undefined1 *)(gen_frame + 0xf0)))); memcpy(auVar6, &gen_ac, 4); }
      fVar5 = (*(float *)(gen_frame + 0xf4));
      fVar8 = (*(float *)(gen_frame + 0xf8));
      fVar11 = (*(float *)(gen_frame + 0xfc));
    }
    fVar26 = param_2[4];
    fVar17 = param_2[5];
    fVar35 = param_2[6];
    fVar19 = fVar26 * fVar26;
    fVar36 = fVar17 * fVar17;
    fVar9 = fVar35 * fVar35;
    (*(undefined4 *)((char *)&auVar29 + 4)) = (undefined4)gen_fl2bits(fVar19);
    (*(undefined4 *)((char *)&auVar29 + 0)) = (undefined4)gen_fl2bits(fVar19);
    (*(undefined4 *)((char *)&auVar29 + 8)) = (undefined4)gen_fl2bits(fVar19);
    (*(undefined4 *)((char *)&auVar29 + 12)) = (undefined4)gen_fl2bits(fVar19);
    (*(float *)((char *)&auVar15 + 0)) = (fVar36 + fVar19) + fVar9;
    (*(float *)((char *)&auVar15 + 4)) = (fVar36 + fVar19) + fVar9;
    (*(float *)((char *)&auVar15 + 8)) = (fVar36 + fVar19) + fVar9;
    (*(float *)((char *)&auVar15 + 12)) = (fVar36 + fVar19) + fVar9;
    gen_rsqrtps(&(auVar38), &(auVar29), &(auVar15));
    fVar19 = (*(float *)((char *)&auVar38 + 0));
    fVar19 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar15 + 0)) <= (*(float *)(gen_frame + 0xc0))) & (uint)gen_fl2bits((((*(float *)(gen_frame + 0xb0)) - (fVar19 * (*(float *)((char *)&auVar15 + 0))) * fVar19) * (fVar19 * (*(float *)(gen_frame + 0x90)))) * (*(float *)((char *)&auVar15 + 0))));
    if ((!GEN_ISNAN(fVar19) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar19 <= *(float *)&REFG(undefined, 0x1088114))) {
      fVar5 = *param_2;
      fVar8 = param_2[1];
      fVar11 = param_2[2];
      fVar19 = param_2[3];
      (*(float *)(gen_frame + 0xe0)) = fVar11;
      (*(float *)(gen_frame + 0xe4)) = fVar5;
      (*(float *)(gen_frame + 0xe8)) = fVar8;
      (*(float *)(gen_frame + 0xec)) = fVar19;
      fVar36 = fVar35 * fVar8 - fVar17 * fVar11;
      fVar18 = fVar26 * fVar11 - fVar35 * fVar5;
      fVar20 = fVar17 * fVar5 - fVar26 * fVar8;
      fVar19 = fVar36 * fVar36;
      fVar9 = fVar18 * fVar18;
      fVar10 = fVar20 * fVar20;
      (*(undefined4 *)((char *)&auVar30 + 4)) = (undefined4)gen_fl2bits(fVar19);
      (*(undefined4 *)((char *)&auVar30 + 0)) = (undefined4)gen_fl2bits(fVar19);
      (*(undefined4 *)((char *)&auVar30 + 8)) = (undefined4)gen_fl2bits(fVar19);
      (*(undefined4 *)((char *)&auVar30 + 12)) = (undefined4)gen_fl2bits(fVar19);
      (*(float *)((char *)&auVar22 + 0)) = (fVar9 + fVar19) + fVar10;
      (*(float *)((char *)&auVar22 + 4)) = (fVar9 + fVar19) + fVar10;
      (*(float *)((char *)&auVar22 + 8)) = (fVar9 + fVar19) + fVar10;
      (*(float *)((char *)&auVar22 + 12)) = (fVar9 + fVar19) + fVar10;
      gen_rsqrtps(&(auVar38), &(auVar30), &(auVar22));
      fVar19 = (*(float *)((char *)&auVar38 + 0));
      fVar9 = (*(float *)((char *)&auVar38 + 4));
      fVar10 = (*(float *)((char *)&auVar38 + 8));
      fVar36 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar22 + 0)) <= (*(float *)(gen_frame + 0xc0))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb0)) - (fVar19 * (*(float *)((char *)&auVar22 + 0))) * fVar19) * (fVar19 * (*(float *)(gen_frame + 0x90))))) * fVar36;
      fVar18 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar22 + 4)) <= (*(float *)(gen_frame + 0xc4))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb4)) - (fVar9 * (*(float *)((char *)&auVar22 + 4))) * fVar9) * (fVar9 * (*(float *)(gen_frame + 0x94))))) * fVar18;
      fVar20 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar22 + 8)) <= (*(float *)(gen_frame + 0xc8))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb8)) - (fVar10 * (*(float *)((char *)&auVar22 + 8))) * fVar10) * (fVar10 * (*(float *)(gen_frame + 0x98))))) * fVar20;
      fVar19 = fVar18 * fVar11 - fVar20 * fVar8;
      fVar11 = fVar20 * fVar5 - fVar36 * fVar11;
      fVar9 = fVar36 * fVar8 - fVar18 * fVar5;
      fVar5 = fVar19 * fVar19;
      fVar8 = fVar11 * fVar11;
      fVar36 = fVar9 * fVar9;
      (*(undefined4 *)((char *)&auVar31 + 4)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar31 + 0)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar31 + 8)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar31 + 12)) = (undefined4)gen_fl2bits(fVar5);
      (*(float *)((char *)&auVar23 + 0)) = (fVar8 + fVar5) + fVar36;
      (*(float *)((char *)&auVar23 + 4)) = (fVar8 + fVar5) + fVar36;
      (*(float *)((char *)&auVar23 + 8)) = (fVar8 + fVar5) + fVar36;
      (*(float *)((char *)&auVar23 + 12)) = (fVar8 + fVar5) + fVar36;
      gen_rsqrtps(&(auVar38), &(auVar31), &(auVar23));
      fVar5 = (*(float *)((char *)&auVar38 + 0));
      fVar8 = (*(float *)((char *)&auVar38 + 4));
      fVar36 = (*(float *)((char *)&auVar38 + 8));
      fVar19 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar23 + 0)) <= (*(float *)(gen_frame + 0xc0))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb0)) - (fVar5 * (*(float *)((char *)&auVar23 + 0))) * fVar5) * (fVar5 * (*(float *)(gen_frame + 0x90))))) * fVar19;
      fVar11 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar23 + 4)) <= (*(float *)(gen_frame + 0xc4))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb4)) - (fVar8 * (*(float *)((char *)&auVar23 + 4))) * fVar8) * (fVar8 * (*(float *)(gen_frame + 0x94))))) * fVar11;
      fVar9 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar23 + 8)) <= (*(float *)(gen_frame + 0xc8))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb8)) - (fVar36 * (*(float *)((char *)&auVar23 + 8))) * fVar36) * (fVar36 * (*(float *)(gen_frame + 0x98))))) * fVar9;
      fVar5 = fVar19 * fVar19;
      fVar8 = fVar11 * fVar11;
      fVar36 = fVar9 * fVar9;
      (*(undefined4 *)((char *)&auVar32 + 4)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar32 + 0)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar32 + 8)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar32 + 12)) = (undefined4)gen_fl2bits(fVar5);
      (*(float *)((char *)&auVar16 + 0)) = (fVar8 + fVar5) + fVar36;
      (*(float *)((char *)&auVar16 + 4)) = (fVar8 + fVar5) + fVar36;
      (*(float *)((char *)&auVar16 + 8)) = (fVar8 + fVar5) + fVar36;
      (*(float *)((char *)&auVar16 + 12)) = (fVar8 + fVar5) + fVar36;
      gen_rsqrtps(&(auVar38), &(auVar32), &(auVar16));
      fVar5 = (*(float *)((char *)&auVar38 + 0));
      fVar8 = (*(float *)((char *)&auVar38 + 4));
      fVar36 = (*(float *)((char *)&auVar38 + 8));
      fVar18 = (*(float *)((char *)&auVar38 + 12));
      (*(float *)((char *)&auVar24 + 0)) = fVar19 * fVar26;
      fVar5 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar16 + 0)) <= (*(float *)(gen_frame + 0xc0))) & (uint)gen_fl2bits((((*(float *)(gen_frame + 0xb0)) - (fVar5 * (*(float *)((char *)&auVar16 + 0))) * fVar5) * (fVar5 * (*(float *)(gen_frame + 0x90)))) * (*(float *)((char *)&auVar16 + 0))));
      (*(unsigned int *)((unsigned char *)(auVar33) + 4)) = ~-(uint)((*(float *)((char *)&auVar16 + 4)) <= (*(float *)(gen_frame + 0xc4))) & (uint)gen_fl2bits((((*(float *)(gen_frame + 0xb4)) - (fVar8 * (*(float *)((char *)&auVar16 + 4))) * fVar8) * (fVar8 * (*(float *)(gen_frame + 0x94)))) * (*(float *)((char *)&auVar16 + 4)));
      (*(undefined4 *)((char *)&auVar33 + 0)) = (undefined4)gen_fl2bits(fVar5);
      (*(unsigned int *)((unsigned char *)(auVar33) + 8)) = ~-(uint)((*(float *)((char *)&auVar16 + 8)) <= (*(float *)(gen_frame + 0xc8))) & (uint)gen_fl2bits((((*(float *)(gen_frame + 0xb8)) - (fVar36 * (*(float *)((char *)&auVar16 + 8))) * fVar36) * (fVar36 * (*(float *)(gen_frame + 0x98)))) * (*(float *)((char *)&auVar16 + 8)));
      (*(unsigned int *)((unsigned char *)(auVar33) + 12)) = ~-(uint)((*(float *)((char *)&auVar16 + 12)) <= (*(float *)(gen_frame + 0xcc))) & (uint)gen_fl2bits((((*(float *)(gen_frame + 0xbc)) - (fVar18 * (*(float *)((char *)&auVar16 + 12))) * fVar18) * (fVar18 * (*(float *)(gen_frame + 0x9c)))) * (*(float *)((char *)&auVar16 + 12)));
      (*(undefined4 *)((char *)&auVar24 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar24 + 0)));
      (*(undefined4 *)((char *)&auVar24 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar24 + 0)));
      (*(undefined4 *)((char *)&auVar24 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar24 + 0)));
      gen_rcpps(&(auVar38), &(auVar24), &(auVar33));
      fVar5 = ((*(float *)&REFG(undefined, 0x1136e50) - (*(float *)((char *)&auVar38 + 0)) * fVar5) * (*(float *)((char *)&auVar38 + 0))) * ((fVar11 * fVar17 + (*(float *)((char *)&auVar24 + 0))) + fVar9 * fVar35);
      fVar8 = (*(float *)(gen_frame + 0xac)) * (*(float *)(gen_frame + 0xac));
      fVar26 = fVar5 * fVar5;
      (*(float *)(gen_frame + 0xe0)) = ABS(fVar8 - fVar26);
      (*(float *)(gen_frame + 0xe4)) = 0.0;
      (*(float *)(gen_frame + 0xe8)) = 0.0;
      (*(float *)(gen_frame + 0xec)) = 0.0;
      fVar11 = SQRT(ABS(fVar8 - fVar26));
      fVar8 = ABS(((fVar11 * fVar11 - (fVar8 * REFG(float, 0x10928e4) - fVar26 * REFG(float, 0x10928e4))) * (fVar11 * fVar11) + (fVar26 - fVar8 * REFG(float, 0x109cb08)) * fVar26) + fVar8 * fVar8);
      (*(float *)(gen_frame + 0xe0)) = fVar8;
      (*(float *)(gen_frame + 0xe4)) = 0.0;
      (*(float *)(gen_frame + 0xe8)) = 0.0;
      (*(float *)(gen_frame + 0xec)) = 0.0;
      fVar11 = (SQRT(fVar8) * REFG(float, 0x1088068)) / fVar11;
      (*(float *)(gen_frame + 0x108)) = 0.0;
      if (GEN_ISNAN(fVar11) == (GEN_ISNAN(fVar11) || fVar11 == 0.0)) {
        fVar5 = fVar5 / fVar11;
        (*(float *)(gen_frame + 0xe0)) = ABS(fVar5);
        (*(float *)(gen_frame + 0xe4)) = 0.0;
        (*(float *)(gen_frame + 0xe8)) = 0.0;
        (*(float *)(gen_frame + 0xec)) = 0.0;
        if (REFG(float, 0x1087f04) <= ABS(fVar5)) {
          fVar8 = REFG(float, 0x110e250);
          if (0.0 < fVar5) {
            fVar8 = 0.0;
          }
        }
        else {
          fVar8 = F_01051e46(fVar5);
        }
        (*(float *)(gen_frame + 0x108)) = fVar8 * param_4;
      }
      F_00d950d0(&(*(float *)(gen_frame + 0xe0)) GEN_EDX_ARG,pfVar4,param_2 + 4);
      fVar26 = (*(float *)(gen_frame + 0xe8)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) - (*(float *)(gen_frame + 0xe4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0));
      fVar17 = (*(float *)(gen_frame + 0xe0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) - (*(float *)(gen_frame + 0xe8)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0));
      fVar35 = (*(float *)(gen_frame + 0xe4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) - (*(float *)(gen_frame + 0xe0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4));
      fVar5 = fVar26 * fVar26;
      fVar8 = fVar17 * fVar17;
      fVar11 = fVar35 * fVar35;
      (*(undefined4 *)((char *)&auVar34 + 4)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar34 + 0)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar34 + 8)) = (undefined4)gen_fl2bits(fVar5);
      (*(undefined4 *)((char *)&auVar34 + 12)) = (undefined4)gen_fl2bits(fVar5);
      (*(float *)((char *)&auVar25 + 0)) = (fVar8 + fVar5) + fVar11;
      (*(float *)((char *)&auVar25 + 4)) = (fVar8 + fVar5) + fVar11;
      (*(float *)((char *)&auVar25 + 8)) = (fVar8 + fVar5) + fVar11;
      (*(float *)((char *)&auVar25 + 12)) = (fVar8 + fVar5) + fVar11;
      gen_rsqrtps(&(auVar38), &(auVar34), &(auVar25));
      fVar5 = (*(float *)((char *)&auVar38 + 0));
      fVar8 = (*(float *)((char *)&auVar38 + 4));
      fVar11 = (*(float *)((char *)&auVar38 + 8));
      fVar19 = (*(float *)((char *)&auVar38 + 12));
      (*(float *)(gen_frame + 0x70)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar25 + 0)) <= (*(float *)(gen_frame + 0xc0))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb0)) - (fVar5 * (*(float *)((char *)&auVar25 + 0))) * fVar5) * (fVar5 * (*(float *)(gen_frame + 0x90))))) * fVar26;
      (*(float *)(gen_frame + 0x74)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar25 + 4)) <= (*(float *)(gen_frame + 0xc4))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb4)) - (fVar8 * (*(float *)((char *)&auVar25 + 4))) * fVar8) * (fVar8 * (*(float *)(gen_frame + 0x94))))) * fVar17;
      (*(float *)(gen_frame + 0x78)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar25 + 8)) <= (*(float *)(gen_frame + 0xc8))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xb8)) - (fVar11 * (*(float *)((char *)&auVar25 + 8))) * fVar11) * (fVar11 * (*(float *)(gen_frame + 0x98))))) * fVar35;
      (*(float *)(gen_frame + 0x7c)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar25 + 12)) <= (*(float *)(gen_frame + 0xcc))) & (uint)gen_fl2bits(((*(float *)(gen_frame + 0xbc)) - (fVar19 * (*(float *)((char *)&auVar25 + 12))) * fVar19) * (fVar19 * (*(float *)(gen_frame + 0x9c))))) * ((*(float *)(gen_frame + 0xec)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4)) - (*(float *)(gen_frame + 0xec)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 4)));
      F_00d988a0(&(*(float *)(gen_frame + 0x60)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x70)),GEN_ARGF(gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x108))) ^ REFG(uint, 0x10920d0))));
      {
        unsigned int gen_sa = (unsigned int)(gen_fl2bits((((*(float *)(gen_frame + 0x68)) * (*(float *)(gen_frame + 0xf4)) - (*(float *)(gen_frame + 0x64)) * (*(float *)(gen_frame + 0xf8))) + (*(float *)(gen_frame + 0xfc)) * (*(float *)(gen_frame + 0x60))) + (*(float *)(gen_frame + 0x6c)) * gen_bits2f(((undefined1 *)(gen_frame + 0xf0)))));
        memcpy(&auVar6, &gen_sa, 4);
      }
      fVar5 = (((*(float *)(gen_frame + 0x60)) * (*(float *)(gen_frame + 0xf8)) - (*(float *)(gen_frame + 0x68)) * gen_bits2f(((undefined1 *)(gen_frame + 0xf0)))) + (*(float *)(gen_frame + 0xfc)) * (*(float *)(gen_frame + 0x64))) + (*(float *)(gen_frame + 0x6c)) * (*(float *)(gen_frame + 0xf4));
      fVar8 = (((*(float *)(gen_frame + 0x64)) * gen_bits2f(((undefined1 *)(gen_frame + 0xf0))) - (*(float *)(gen_frame + 0x60)) * (*(float *)(gen_frame + 0xf4))) + (*(float *)(gen_frame + 0xfc)) * (*(float *)(gen_frame + 0x68))) + (*(float *)(gen_frame + 0x6c)) * (*(float *)(gen_frame + 0xf8));
      fVar11 = (*(float *)(gen_frame + 0x6c)) * (*(float *)(gen_frame + 0xfc)) - (((*(float *)(gen_frame + 0x64)) * (*(float *)(gen_frame + 0xf4)) + (*(float *)(gen_frame + 0x60)) * gen_bits2f(((undefined1 *)(gen_frame + 0xf0)))) + (*(float *)(gen_frame + 0x68)) * (*(float *)(gen_frame + 0xf8)));
    }
    uVar1 = *(undefined8 *)pfVar4;
    fVar26 = param_5[7];
    (*(undefined8 *)(gen_frame + 0xd0)) = uVar1;
    uVar2 = *(undefined8 *)(param_5 + 6);
    (*(undefined8 *)(gen_frame + 0xd8)) = uVar2;
    (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) = gen_bits2f((uint)uVar1);
    (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
    (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) = gen_bits2f((uint)uVar2);
    *pfVar4 = ((fVar5 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) - fVar8 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4))) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) * fVar11) + gen_bits2f(auVar6) * fVar26;
    param_5[5] = ((fVar8 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0)) - gen_bits2f(auVar6) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0))) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) * fVar11) + fVar5 * fVar26;
    param_5[6] = ((gen_bits2f(auVar6) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) - fVar5 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0))) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)) * fVar11) + fVar8 * fVar26;
    param_5[7] = fVar26 * fVar11 - ((fVar5 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 4)) + gen_bits2f(auVar6) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd0)) + 0))) + fVar8 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xd8)) + 0)));
    *param_1 = (*(undefined1 *)(gen_frame + 0x10f));
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: Global::VectorSetMin */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d47d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_1, unsigned int gen_a1), GEN_P(gen_v16 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd47d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: Global::VectorSetMax */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d47d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_1, unsigned int gen_a1), GEN_P(gen_v16 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd47d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  
  gen_maxps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: Global::Matrix3SetColumns */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d47d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd47d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar3;
  return (uint)param_3;
}

/* ref: Global::Matrix3MultiplyVector */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d47db0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd47db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *in_ecx = (fVar2 * param_2[4] + fVar1 * *param_2) + fVar3 * param_2[8];
  in_ecx[1] = (fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10;
  in_ecx[2] = (fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11;
  in_ecx[3] = (fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12;
  return (uint)param_2;
}

/* ref: Global::VectorDivide */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d47df0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(gen_v16 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd47df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar8 [16];
  
  memcpy(&(auVar1), &(*param_3), sizeof(*param_3) < sizeof(auVar1) ? sizeof(*param_3) : sizeof(auVar1));
  gen_rcpps(&(auVar8), &(in_XMM2), &(auVar1));
  fVar5 = *(float *)&REFG(undefined, 0x1136e54) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar8 + 4));
  fVar6 = *(float *)&REFG(undefined, 0x1136e58) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar8 + 8));
  fVar7 = *(float *)&REFG(undefined, 0x1136e5c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar8 + 12));
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = in_ecx[3];
  *param_2 = *in_ecx * ((*(float *)&REFG(undefined, 0x1136e50) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar8 + 0))) * (*(float *)((char *)&auVar8 + 0)));
  param_2[1] = fVar2 * (fVar5 * (*(float *)((char *)&auVar8 + 4)));
  param_2[2] = fVar3 * (fVar6 * (*(float *)((char *)&auVar8 + 8)));
  param_2[3] = fVar4 * (fVar7 * (*(float *)((char *)&auVar8 + 12)));
  return (uint)param_2;
}

/* ref: FUN_00d47e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d47e20(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd47e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *in_ecx = (fVar2 * param_2[4] + fVar1 * *param_2) + fVar3 * param_2[8];
  in_ecx[1] = (fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10;
  in_ecx[2] = (fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11;
  in_ecx[3] = (fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12;
  return (uint)param_2;
}

/* ref: Global::VectorSqrt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d47e60(GEN_P(gen_v16 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd47e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  memcpy(&(auVar9), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar9) ? sizeof(*in_ecx) : sizeof(auVar9));
  fVar1 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1136e64) - (fVar2 * fVar10) * fVar10;
  fVar6 = *(float *)&REFG(undefined, 0x1136e68) - (fVar3 * fVar11) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136e6c) - (fVar4 * fVar12) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136e74) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136e78) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136e7c) * fVar12;
  *param_2 = ~-(uint)(fVar1 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar1 * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136e70) * fVar8)) * fVar1);
  param_2[1] = ~-(uint)(fVar2 <= 0.0) & (uint)gen_fl2bits((fVar5 * fVar10) * fVar2);
  param_2[2] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar6 * fVar11) * fVar3);
  param_2[3] = ~-(uint)(fVar4 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar4);
  return (uint)param_2;
}

/* ref: Global::VectorLength3 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d47eb0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd47eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  fVar4 = (fVar2 + fVar1) + fVar3;
  fVar5 = (fVar2 + fVar1) + fVar3;
  fVar6 = (fVar2 + fVar1) + fVar3;
  fVar3 = (fVar2 + fVar1) + fVar3;
  (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(fVar3);
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar1 = *(float *)&REFG(undefined, 0x1136e64) - (fVar10 * fVar5) * fVar10;
  fVar2 = *(float *)&REFG(undefined, 0x1136e68) - (fVar11 * fVar6) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136e6c) - (fVar12 * fVar3) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136e74) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136e78) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136e7c) * fVar12;
  *param_2 = ~-(uint)(fVar4 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar8 * fVar4) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136e70) * fVar8)) * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)gen_fl2bits((fVar1 * fVar10) * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)gen_fl2bits((fVar2 * fVar11) * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar3);
  return 0;
}

/* ref: Global::VectorLength3B */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d47f10(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd47f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  fVar4 = (fVar2 + fVar1) + fVar3;
  fVar5 = (fVar2 + fVar1) + fVar3;
  fVar6 = (fVar2 + fVar1) + fVar3;
  fVar3 = (fVar2 + fVar1) + fVar3;
  (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(fVar3);
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar1 = *(float *)&REFG(undefined, 0x1136e64) - (fVar10 * fVar5) * fVar10;
  fVar2 = *(float *)&REFG(undefined, 0x1136e68) - (fVar11 * fVar6) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136e6c) - (fVar12 * fVar3) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136e74) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136e78) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136e7c) * fVar12;
  *param_2 = ~-(uint)(fVar4 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar8 * fVar4) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136e70) * fVar8)) * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)gen_fl2bits((fVar1 * fVar10) * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)gen_fl2bits((fVar2 * fVar11) * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar3);
  return 0;
}

/* ref: Global::VectorNormalize3GetLength */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d47f70(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd47f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar12 [16];
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = fVar1 * fVar1;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar3 * fVar3;
  fVar9 = (fVar5 + fVar4) + fVar6;
  fVar10 = (fVar5 + fVar4) + fVar6;
  fVar11 = (fVar5 + fVar4) + fVar6;
  fVar6 = (fVar5 + fVar4) + fVar6;
  (*(undefined4 *)((char *)&auVar12 + 4)) = (undefined4)gen_fl2bits(fVar10);
  (*(undefined4 *)((char *)&auVar12 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar12 + 8)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar12 + 12)) = (undefined4)gen_fl2bits(fVar6);
  gen_rsqrtps(&(auVar12), &(in_XMM4), &(auVar12));
  fVar4 = (*(float *)((char *)&auVar12 + 0));
  fVar5 = (*(float *)((char *)&auVar12 + 4));
  fVar7 = (*(float *)((char *)&auVar12 + 8));
  fVar8 = (*(float *)((char *)&auVar12 + 12));
  fVar4 = gen_bits2f(~-(uint)(fVar9 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e60) - (fVar4 * fVar9) * fVar4) *
                                       (*(float *)&REFG(undefined, 0x1136e70) * fVar4)));
  fVar5 = gen_bits2f(~-(uint)(fVar10 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e64) - (fVar5 * fVar10) * fVar5) *
                                       (*(float *)&REFG(undefined, 0x1136e74) * fVar5)));
  fVar7 = gen_bits2f(~-(uint)(fVar11 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e68) - (fVar7 * fVar11) * fVar7) *
                                       (*(float *)&REFG(undefined, 0x1136e78) * fVar7)));
  fVar8 = gen_bits2f(~-(uint)(fVar6 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e6c) - (fVar8 * fVar6) * fVar8) *
                                       (*(float *)&REFG(undefined, 0x1136e7c) * fVar8)));
  *in_ecx = fVar1 * fVar4;
  in_ecx[1] = fVar2 * fVar5;
  in_ecx[2] = fVar3 * fVar7;
  in_ecx[3] = in_ecx[3] * fVar8;
  *param_2 = fVar4 * fVar9;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar7 * fVar11;
  param_2[3] = fVar8 * fVar6;
  return 0;
}

/* ref: Global::VectorNormalize3GetLengthB */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d47fe0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd47fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar12 [16];
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = fVar1 * fVar1;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar3 * fVar3;
  fVar9 = (fVar5 + fVar4) + fVar6;
  fVar10 = (fVar5 + fVar4) + fVar6;
  fVar11 = (fVar5 + fVar4) + fVar6;
  fVar6 = (fVar5 + fVar4) + fVar6;
  (*(undefined4 *)((char *)&auVar12 + 4)) = (undefined4)gen_fl2bits(fVar10);
  (*(undefined4 *)((char *)&auVar12 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar12 + 8)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar12 + 12)) = (undefined4)gen_fl2bits(fVar6);
  gen_rsqrtps(&(auVar12), &(in_XMM4), &(auVar12));
  fVar4 = (*(float *)((char *)&auVar12 + 0));
  fVar5 = (*(float *)((char *)&auVar12 + 4));
  fVar7 = (*(float *)((char *)&auVar12 + 8));
  fVar8 = (*(float *)((char *)&auVar12 + 12));
  fVar4 = gen_bits2f(~-(uint)(fVar9 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e60) - (fVar4 * fVar9) * fVar4) *
                                       (*(float *)&REFG(undefined, 0x1136e70) * fVar4)));
  fVar5 = gen_bits2f(~-(uint)(fVar10 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e64) - (fVar5 * fVar10) * fVar5) *
                                       (*(float *)&REFG(undefined, 0x1136e74) * fVar5)));
  fVar7 = gen_bits2f(~-(uint)(fVar11 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e68) - (fVar7 * fVar11) * fVar7) *
                                       (*(float *)&REFG(undefined, 0x1136e78) * fVar7)));
  fVar8 = gen_bits2f(~-(uint)(fVar6 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e6c) - (fVar8 * fVar6) * fVar8) *
                                       (*(float *)&REFG(undefined, 0x1136e7c) * fVar8)));
  *in_ecx = fVar1 * fVar4;
  in_ecx[1] = fVar2 * fVar5;
  in_ecx[2] = fVar3 * fVar7;
  in_ecx[3] = in_ecx[3] * fVar8;
  *param_2 = fVar4 * fVar9;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar7 * fVar11;
  param_2[3] = fVar8 * fVar6;
  return 0;
}

/* ref: Global::VectorLength3C */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d48050(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd48050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  fVar4 = (fVar2 + fVar1) + fVar3;
  fVar5 = (fVar2 + fVar1) + fVar3;
  fVar6 = (fVar2 + fVar1) + fVar3;
  fVar3 = (fVar2 + fVar1) + fVar3;
  (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(fVar3);
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar1 = *(float *)&REFG(undefined, 0x1136e64) - (fVar10 * fVar5) * fVar10;
  fVar2 = *(float *)&REFG(undefined, 0x1136e68) - (fVar11 * fVar6) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136e6c) - (fVar12 * fVar3) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136e74) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136e78) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136e7c) * fVar12;
  *param_2 = ~-(uint)(fVar4 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar8 * fVar4) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136e70) * fVar8)) * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)gen_fl2bits((fVar1 * fVar10) * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)gen_fl2bits((fVar2 * fVar11) * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar3);
  return 0;
}

/* ref: Global::Transpose4x4 */
GEN_LIB GEN_FRAME unsigned int F_00d480b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd480b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
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
  undefined4 uVar15;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = *param_3;
  uVar9 = param_3[1];
  uVar10 = param_3[2];
  uVar11 = param_3[3];
  uVar12 = *param_4;
  uVar13 = param_4[1];
  uVar14 = param_4[2];
  uVar15 = param_4[3];
  *param_1 = *param_1;
  param_1[1] = uVar4;
  param_1[2] = uVar8;
  param_1[3] = uVar12;
  *param_2 = uVar1;
  param_2[1] = uVar5;
  param_2[2] = uVar9;
  param_2[3] = uVar13;
  *param_3 = uVar2;
  param_3[1] = uVar6;
  param_3[2] = uVar10;
  param_3[3] = uVar14;
  *param_4 = uVar3;
  param_4[1] = uVar7;
  param_4[2] = uVar11;
  param_4[3] = uVar15;
  return 0;
}

/* ref: Global::MultiplyVectorArraysBlock4 */
GEN_LIB GEN_FRAME unsigned int F_00d48170(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd48170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  float * pfVar11;
  
  iVar8 = (int)(param_4 + 3 + (param_4 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar8) {
    pfVar11 = ((float *)GEN_TOP((param_2 + 0x20)));
    pfVar10 = ((float *)GEN_TOP((param_1 + 0x20)));
    pfVar9 = ((float *)GEN_TOP((param_3 + 0x20)));
    do {
      pfVar1 = ((float *)GEN_TOP(((param_2 - param_3) - 0x20 + (int)pfVar9)));
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      fVar5 = pfVar9[-7];
      fVar6 = pfVar9[-6];
      fVar7 = pfVar9[-5];
      pfVar10[-8] = *pfVar1 * pfVar9[-8];
      pfVar10[-7] = fVar2 * fVar5;
      pfVar10[-6] = fVar3 * fVar6;
      pfVar10[-5] = fVar4 * fVar7;
      fVar2 = pfVar9[-3];
      fVar3 = pfVar9[-2];
      fVar4 = pfVar9[-1];
      fVar5 = pfVar11[-3];
      fVar6 = pfVar11[-2];
      fVar7 = pfVar11[-1];
      pfVar10[-4] = pfVar9[-4] * pfVar11[-4];
      pfVar10[-3] = fVar2 * fVar5;
      pfVar10[-2] = fVar3 * fVar6;
      pfVar10[-1] = fVar4 * fVar7;
      fVar2 = pfVar9[1];
      fVar3 = pfVar9[2];
      fVar4 = pfVar9[3];
      fVar5 = pfVar11[1];
      fVar6 = pfVar11[2];
      fVar7 = pfVar11[3];
      *pfVar10 = *pfVar9 * *pfVar11;
      pfVar10[1] = fVar2 * fVar5;
      pfVar10[2] = fVar3 * fVar6;
      pfVar10[3] = fVar4 * fVar7;
      fVar2 = pfVar9[5];
      fVar3 = pfVar9[6];
      fVar4 = pfVar9[7];
      fVar5 = pfVar11[5];
      fVar6 = pfVar11[6];
      fVar7 = pfVar11[7];
      pfVar10[4] = pfVar9[4] * pfVar11[4];
      pfVar10[5] = fVar2 * fVar5;
      pfVar10[6] = fVar3 * fVar6;
      pfVar10[7] = fVar4 * fVar7;
      pfVar11 = pfVar11 + 0x10;
      pfVar9 = pfVar9 + 0x10;
      pfVar10 = pfVar10 + 0x10;
      iVar8 = iVar8 - 1;
    } while (iVar8 != 0);
  }
  return 0;
}

/* ref: Global::MultiplyVectorArrays */
GEN_LIB GEN_FRAME unsigned int F_00d48570(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd48570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  uVar12 = param_4 & 0xfffffff0;
  iVar13 = (int)((param_4 & 0xf) + 3) >> 2;
  F_00d48170(param_1,param_2,param_3,(int)uVar12 >> 2);
  pfVar9 = ((float *)GEN_TOP((param_2 + uVar12 * 4)));
  if (iVar13 != 0) {
    iVar10 = (param_3 + uVar12 * 4) - (int)pfVar9;
    iVar11 = (param_1 + uVar12 * 4) - (int)pfVar9;
    do {
      pfVar1 = ((float *)GEN_TOP((iVar10 + (int)pfVar9)));
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar9[1];
      fVar7 = pfVar9[2];
      fVar8 = pfVar9[3];
      pfVar2 = ((float *)GEN_TOP((iVar11 + (int)pfVar9)));
      *pfVar2 = *pfVar1 * *pfVar9;
      pfVar2[1] = fVar3 * fVar6;
      pfVar2[2] = fVar4 * fVar7;
      pfVar2[3] = fVar5 * fVar8;
      pfVar9 = pfVar9 + 4;
      iVar13 = iVar13 - 1;
    } while (iVar13 != 0);
  }
  return 0;
}

/* ref: Global::NormalizeQuaternionArray */
GEN_LIB GEN_FRAME unsigned int F_00d48a30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd48a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float * pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  
  fVar20 = *(float *)&REFG(undefined, 0x1136ebc);
  fVar19 = *(float *)&REFG(undefined, 0x1136eb8);
  fVar18 = *(float *)&REFG(undefined, 0x1136eb4);
  fVar17 = *(float *)&REFG(undefined, 0x1136eb0);
  iVar21 = (int)(param_2 + 3 + (param_2 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar21) {
    pfVar22 = ((float *)GEN_TOP((param_1 + 0x20)));
    do {
      fVar1 = pfVar22[-8];
      fVar2 = pfVar22[-7];
      fVar3 = pfVar22[-6];
      fVar4 = pfVar22[-5];
      fVar5 = pfVar22[-4];
      fVar6 = pfVar22[-3];
      fVar7 = pfVar22[-2];
      fVar8 = pfVar22[-1];
      fVar9 = *pfVar22;
      fVar10 = pfVar22[1];
      fVar11 = pfVar22[2];
      fVar12 = pfVar22[3];
      fVar13 = pfVar22[4];
      fVar14 = pfVar22[5];
      fVar15 = pfVar22[6];
      fVar16 = pfVar22[7];
      (*(float *)((char *)&auVar28 + 0)) = fVar4 * fVar4;
      (*(float *)((char *)&auVar28 + 4)) = fVar8 * fVar8;
      (*(float *)((char *)&auVar28 + 8)) = fVar12 * fVar12;
      (*(float *)((char *)&auVar28 + 12)) = fVar16 * fVar16;
      fVar23 = ((fVar2 * fVar2 + fVar1 * fVar1) + fVar3 * fVar3) + (*(float *)((char *)&auVar28 + 0));
      fVar24 = ((fVar6 * fVar6 + fVar5 * fVar5) + fVar7 * fVar7) + (*(float *)((char *)&auVar28 + 4));
      fVar25 = ((fVar10 * fVar10 + fVar9 * fVar9) + fVar11 * fVar11) + (*(float *)((char *)&auVar28 + 8));
      fVar26 = ((fVar14 * fVar14 + fVar13 * fVar13) + fVar15 * fVar15) + (*(float *)((char *)&auVar28 + 12));
      (*(undefined4 *)((char *)&auVar29 + 4)) = (undefined4)gen_fl2bits(fVar24);
      (*(undefined4 *)((char *)&auVar29 + 0)) = (undefined4)gen_fl2bits(fVar23);
      (*(undefined4 *)((char *)&auVar29 + 8)) = (undefined4)gen_fl2bits(fVar25);
      (*(undefined4 *)((char *)&auVar29 + 12)) = (undefined4)gen_fl2bits(fVar26);
      gen_rsqrtps(&(auVar29), &(auVar28), &(auVar29));
      fVar27 = (*(float *)((char *)&auVar29 + 0));
      fVar30 = (*(float *)((char *)&auVar29 + 4));
      fVar31 = (*(float *)((char *)&auVar29 + 8));
      fVar32 = (*(float *)((char *)&auVar29 + 12));
      fVar23 = (fVar17 - (fVar27 * fVar23) * fVar27) * (*(float *)&REFG(undefined, 0x1136ec0) * fVar27);
      fVar24 = (fVar18 - (fVar30 * fVar24) * fVar30) * (*(float *)&REFG(undefined, 0x1136ec4) * fVar30);
      fVar25 = (fVar19 - (fVar31 * fVar25) * fVar31) * (*(float *)&REFG(undefined, 0x1136ec8) * fVar31);
      fVar26 = (fVar20 - (fVar32 * fVar26) * fVar32) * (*(float *)&REFG(undefined, 0x1136ecc) * fVar32);
      pfVar22[-8] = fVar23 * fVar1;
      pfVar22[-7] = fVar23 * fVar2;
      pfVar22[-6] = fVar23 * fVar3;
      pfVar22[-5] = fVar23 * fVar4;
      pfVar22[-4] = fVar24 * fVar5;
      pfVar22[-3] = fVar24 * fVar6;
      pfVar22[-2] = fVar24 * fVar7;
      pfVar22[-1] = fVar24 * fVar8;
      *pfVar22 = fVar25 * fVar9;
      pfVar22[1] = fVar25 * fVar10;
      pfVar22[2] = fVar25 * fVar11;
      pfVar22[3] = fVar25 * fVar12;
      pfVar22[4] = fVar26 * fVar13;
      pfVar22[5] = fVar26 * fVar14;
      pfVar22[6] = fVar26 * fVar15;
      pfVar22[7] = fVar26 * fVar16;
      pfVar22 = pfVar22 + 0x10;
      iVar21 = iVar21 - 1;
    } while (iVar21 != 0);
  }
  return 0;
}

/* ref: Global::NormalizeTransformRotations */
GEN_LIB GEN_FRAME uint F_00d48b40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd48b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float * pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  
  fVar20 = *(float *)&REFG(undefined, 0x1136ebc);
  fVar19 = *(float *)&REFG(undefined, 0x1136eb8);
  fVar18 = *(float *)&REFG(undefined, 0x1136eb4);
  fVar17 = *(float *)&REFG(undefined, 0x1136eb0);
  uVar21 = (int)(param_2 + 3 + (param_2 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar21) {
    pfVar23 = ((float *)GEN_TOP((param_1 + 0x70)));
    uVar22 = uVar21;
    do {
      fVar1 = pfVar23[-0x18];
      fVar2 = pfVar23[-0x17];
      fVar3 = pfVar23[-0x16];
      fVar4 = pfVar23[-0x15];
      fVar5 = pfVar23[-0xc];
      fVar6 = pfVar23[-0xb];
      fVar7 = pfVar23[-10];
      fVar8 = pfVar23[-9];
      fVar9 = *pfVar23;
      fVar10 = pfVar23[1];
      fVar11 = pfVar23[2];
      fVar12 = pfVar23[3];
      fVar13 = pfVar23[0xc];
      fVar14 = pfVar23[0xd];
      fVar15 = pfVar23[0xe];
      fVar16 = pfVar23[0xf];
      (*(float *)((char *)&auVar29 + 0)) = fVar4 * fVar4;
      (*(float *)((char *)&auVar29 + 4)) = fVar8 * fVar8;
      (*(float *)((char *)&auVar29 + 8)) = fVar12 * fVar12;
      (*(float *)((char *)&auVar29 + 12)) = fVar16 * fVar16;
      fVar24 = ((fVar2 * fVar2 + fVar1 * fVar1) + fVar3 * fVar3) + (*(float *)((char *)&auVar29 + 0));
      fVar25 = ((fVar6 * fVar6 + fVar5 * fVar5) + fVar7 * fVar7) + (*(float *)((char *)&auVar29 + 4));
      fVar26 = ((fVar10 * fVar10 + fVar9 * fVar9) + fVar11 * fVar11) + (*(float *)((char *)&auVar29 + 8));
      fVar27 = ((fVar14 * fVar14 + fVar13 * fVar13) + fVar15 * fVar15) + (*(float *)((char *)&auVar29 + 12));
      (*(undefined4 *)((char *)&auVar30 + 4)) = (undefined4)gen_fl2bits(fVar25);
      (*(undefined4 *)((char *)&auVar30 + 0)) = (undefined4)gen_fl2bits(fVar24);
      (*(undefined4 *)((char *)&auVar30 + 8)) = (undefined4)gen_fl2bits(fVar26);
      (*(undefined4 *)((char *)&auVar30 + 12)) = (undefined4)gen_fl2bits(fVar27);
      gen_rsqrtps(&(auVar30), &(auVar29), &(auVar30));
      fVar28 = (*(float *)((char *)&auVar30 + 0));
      fVar31 = (*(float *)((char *)&auVar30 + 4));
      fVar32 = (*(float *)((char *)&auVar30 + 8));
      fVar33 = (*(float *)((char *)&auVar30 + 12));
      fVar24 = (fVar17 - (fVar28 * fVar24) * fVar28) * (*(float *)&REFG(undefined, 0x1136ec0) * fVar28);
      fVar25 = (fVar18 - (fVar31 * fVar25) * fVar31) * (*(float *)&REFG(undefined, 0x1136ec4) * fVar31);
      fVar26 = (fVar19 - (fVar32 * fVar26) * fVar32) * (*(float *)&REFG(undefined, 0x1136ec8) * fVar32);
      fVar27 = (fVar20 - (fVar33 * fVar27) * fVar33) * (*(float *)&REFG(undefined, 0x1136ecc) * fVar33);
      pfVar23[-0x18] = fVar24 * fVar1;
      pfVar23[-0x17] = fVar24 * fVar2;
      pfVar23[-0x16] = fVar24 * fVar3;
      pfVar23[-0x15] = fVar24 * fVar4;
      pfVar23[-0xc] = fVar25 * fVar5;
      pfVar23[-0xb] = fVar25 * fVar6;
      pfVar23[-10] = fVar25 * fVar7;
      pfVar23[-9] = fVar25 * fVar8;
      *pfVar23 = fVar26 * fVar9;
      pfVar23[1] = fVar26 * fVar10;
      pfVar23[2] = fVar26 * fVar11;
      pfVar23[3] = fVar26 * fVar12;
      pfVar23[0xc] = fVar27 * fVar13;
      pfVar23[0xd] = fVar27 * fVar14;
      pfVar23[0xe] = fVar27 * fVar15;
      pfVar23[0xf] = fVar27 * fVar16;
      pfVar23 = pfVar23 + 0x30;
      uVar22 = uVar22 - 1;
      uVar21 = 0;
    } while (uVar22 != 0);
  }
  return uVar21;
}

/* ref: FUN_00d49310 */
GEN_LIB GEN_FRAME unsigned int F_00d49310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd49310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  F_00d4d080(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}

/* ref: Global::LocalPoseToModelPose */
GEN_LIB GEN_NOFRAME unsigned int F_00d49c70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined8 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd49c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined8 * param_5 = (undefined8 *)(uintptr_t)gen_a4;)
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 * puVar8;
  undefined8 * puVar9;
  float * pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar11 = 0;
  if (0 < param_4) {
    pfVar10 = ((float *)GEN_TOP((param_1 + 0x20)));
    puVar9 = param_2;
    do {
      iVar7 = (int)*((short *)GEN_TOP((param_3 + iVar11 * 2)));
      uVar1 = puVar9[2];
      uVar2 = puVar9[3];
      uVar3 = puVar9[4];
      uVar4 = puVar9[5];
      puVar8 = param_5;
      if (-1 < iVar7) {
        puVar8 = ((undefined8 *)GEN_TOP((iVar7 * 0x30 + param_1)));
      }
      local_80 = gen_bits2f((uint)*puVar9);
      fStack_7c = gen_bits2f((uint)((ulonglong)*puVar9 >> 0x20));
      fStack_78 = gen_bits2f((uint)puVar9[1]);
      fStack_74 = gen_bits2f((uint)((ulonglong)puVar9[1] >> 0x20));
      local_40 = gen_bits2f((uint)puVar8[2]);
      fStack_3c = gen_bits2f((uint)((ulonglong)puVar8[2] >> 0x20));
      fStack_38 = gen_bits2f((uint)puVar8[3]);
      fStack_34 = gen_bits2f((uint)((ulonglong)puVar8[3] >> 0x20));
      uVar5 = puVar8[4];
      uVar6 = puVar8[5];
      fVar12 = local_80 * local_40;
      fVar13 = fStack_7c * fStack_3c;
      fVar14 = fStack_78 * fStack_38;
      fVar15 = (((fVar13 + fVar12) + fVar14) * local_40 +
               (fStack_34 * fStack_34 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)))
               * local_80) + (fStack_78 * fStack_3c - fStack_7c * fStack_38) * fStack_34;
      fVar16 = (((fVar13 + fVar12) + fVar14) * fStack_3c +
               (fStack_34 * fStack_34 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)))
               * fStack_7c) + (local_80 * fStack_38 - fStack_78 * local_40) * fStack_34;
      fVar17 = (((fVar13 + fVar12) + fVar14) * fStack_38 +
               (fStack_34 * fStack_34 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)))
               * fStack_78) + (fStack_7c * local_40 - local_80 * fStack_3c) * fStack_34;
      fVar12 = (((fVar13 + fVar12) + fVar14) * fStack_34 +
               (fStack_34 * fStack_34 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)))
               * fStack_74) + (fStack_74 * fStack_34 - fStack_74 * fStack_34) * fStack_34;
      local_50 = gen_bits2f((uint)*puVar8);
      fStack_4c = gen_bits2f((uint)((ulonglong)*puVar8 >> 0x20));
      fStack_48 = gen_bits2f((uint)puVar8[1]);
      fStack_44 = gen_bits2f((uint)((ulonglong)puVar8[1] >> 0x20));
      pfVar10[-8] = (fVar15 + fVar15) + local_50;
      pfVar10[-7] = (fVar16 + fVar16) + fStack_4c;
      pfVar10[-6] = (fVar17 + fVar17) + fStack_48;
      pfVar10[-5] = (fVar12 + fVar12) + fStack_44;
      local_70 = gen_bits2f((uint)uVar1);
      fStack_6c = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      fStack_68 = gen_bits2f((uint)uVar2);
      fStack_64 = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      local_30 = gen_bits2f((uint)uVar5);
      fStack_2c = gen_bits2f((uint)((ulonglong)uVar5 >> 0x20));
      fStack_28 = gen_bits2f((uint)uVar6);
      fStack_24 = gen_bits2f((uint)((ulonglong)uVar6 >> 0x20));
      local_60 = gen_bits2f((uint)uVar3);
      fStack_5c = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
      fStack_58 = gen_bits2f((uint)uVar4);
      fStack_54 = gen_bits2f((uint)((ulonglong)uVar4 >> 0x20));
      pfVar10[-4] = ((fStack_68 * fStack_3c - fStack_6c * fStack_38) + local_70 * fStack_34) +
                    fStack_64 * local_40;
      pfVar10[-3] = ((local_70 * fStack_38 - fStack_68 * local_40) + fStack_6c * fStack_34) +
                    fStack_64 * fStack_3c;
      pfVar10[-2] = ((fStack_6c * local_40 - local_70 * fStack_3c) + fStack_68 * fStack_34) +
                    fStack_64 * fStack_38;
      pfVar10[-1] = fStack_64 * fStack_34 -
                    ((fStack_6c * fStack_3c + local_70 * local_40) + fStack_68 * fStack_38);
      *pfVar10 = local_30 * local_60;
      pfVar10[1] = fStack_2c * fStack_5c;
      pfVar10[2] = fStack_28 * fStack_58;
      pfVar10[3] = fStack_24 * fStack_54;
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 6;
      pfVar10 = pfVar10 + 0xc;
    } while (iVar11 < param_4);
  }
  return;
}

/* ref: FUN_00d49e40 */
GEN_LIB GEN_FRAME unsigned int F_00d49e40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd49e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  F_00d526c0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}

/* ref: FUN_00d49e70 */
GEN_LIB GEN_FRAME unsigned int F_00d49e70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xd49e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  F_00d53070(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return;
}

/* ref: FUN_00d49eb0 */
GEN_LIB GEN_FRAME unsigned int F_00d49eb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xd49eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  F_00d535d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return;
}

/* ref: FUN_00d49ef0 */
GEN_LIB GEN_FRAME unsigned int F_00d49ef0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd49ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  F_00d5b1f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

/* ref: FUN_00d49f00 */
GEN_LIB GEN_FRAME unsigned int F_00d49f00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd49f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  F_00d5c7e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

/* ref: FUN_00d49f10 */
GEN_LIB GEN_FRAME unsigned int F_00d49f10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xd49f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  F_00d5fab0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

/* ref: FUN_00d49f20 */
GEN_LIB GEN_FRAME unsigned int F_00d49f20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xd49f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  F_00d613d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

/* ref: Global::Float4NegMulSub */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d49f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd49f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_1 - *param_2 * *param_3;
  *((float *)GEN_TOP(((int)this + 4))) = fVar7 - fVar1 * fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = fVar8 - fVar2 * fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar9 - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: Global::Float4And */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d49f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd49f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(uint *)this = *param_1 & *param_2;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1 & uVar4;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 & uVar5;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3 & uVar6;
  return (uint)param_1;
}

/* ref: Global::Float4SubMulInPlace */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d49f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd49f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *((float *)GEN_TOP(((int)this + 4))) = *((float *)GEN_TOP(((int)this + 4))) - fVar1 * fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = *((float *)GEN_TOP(((int)this + 8))) - fVar2 * fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = *((float *)GEN_TOP(((int)this + 0xc))) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: Global::Float4SubMulInPlaceB */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d49f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd49f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *((float *)GEN_TOP(((int)this + 4))) = *((float *)GEN_TOP(((int)this + 4))) - fVar1 * fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = *((float *)GEN_TOP(((int)this + 8))) - fVar2 * fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = *((float *)GEN_TOP(((int)this + 0xc))) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: Global::Float4Select */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d49fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd49fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  *(uint *)this = *param_2 & *param_3 | ~*param_3 & *param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4 & uVar1 | ~uVar1 & uVar7;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar5 & uVar2 | ~uVar2 & uVar8;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar6 & uVar3 | ~uVar3 & uVar9;
  return (uint)param_1;
}

/* ref: FUN_00d49fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d49fe0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd49fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar2 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar3 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *in_ecx = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: Global::Float4MulAdd */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d4a000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd4a000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *((float *)GEN_TOP(((int)this + 4))) = fVar1 * fVar4 + fVar7;
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 * fVar5 + fVar8;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: Global::Float4Divide */
GEN_LIB GEN_FRAME uint F_00d4a020(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(gen_v16 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd4a020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  memcpy(&(auVar1), &(*param_3), sizeof(*param_3) < sizeof(auVar1) ? sizeof(*param_3) : sizeof(auVar1));
  gen_rcpps(&(auVar5), &(in_XMM1), &(auVar1));
  fVar6 = *(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar5 + 4));
  fVar7 = *(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar5 + 8));
  fVar8 = *(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar5 + 12));
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = ((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar5 + 0))) * (*(float *)((char *)&auVar5 + 0))) * *param_2;
  param_1[1] = (fVar6 * (*(float *)((char *)&auVar5 + 4))) * fVar2;
  param_1[2] = (fVar7 * (*(float *)((char *)&auVar5 + 8))) * fVar3;
  param_1[3] = (fVar8 * (*(float *)((char *)&auVar5 + 12))) * fVar4;
  return (uint)param_3;
}

/* ref: Global::Float4DivideTo */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d4a050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(gen_v16 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd4a050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar5), &(in_XMM1), &(auVar1));
  fVar6 = *(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar5 + 4));
  fVar7 = *(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar5 + 8));
  fVar8 = *(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar5 + 12));
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)this =
       ((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar5 + 0))) * (*(float *)((char *)&auVar5 + 0))) * *param_1;
  *((float *)GEN_TOP(((int)this + 4))) = (fVar6 * (*(float *)((char *)&auVar5 + 4))) * fVar2;
  *((float *)GEN_TOP(((int)this + 8))) = (fVar7 * (*(float *)((char *)&auVar5 + 8))) * fVar3;
  *((float *)GEN_TOP(((int)this + 0xc))) = (fVar8 * (*(float *)((char *)&auVar5 + 12))) * fVar4;
  return (uint)param_2;
}

/* ref: Global::Float4x4Copy */
GEN_LIB GEN_FRAME uint F_00d4a080(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4a080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_1 = *param_5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *param_2 = *param_6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_7[1];
  uVar2 = param_7[2];
  uVar3 = param_7[3];
  *param_3 = *param_7;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_8[1];
  uVar2 = param_8[2];
  uVar3 = param_8[3];
  *param_4 = *param_8;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_8;
}

/* ref: Global::Float4x4CopyB */
GEN_LIB GEN_FRAME uint F_00d4a0c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4a0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_1 = *param_5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *param_2 = *param_6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_7[1];
  uVar2 = param_7[2];
  uVar3 = param_7[3];
  *param_3 = *param_7;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_8[1];
  uVar2 = param_8[2];
  uVar3 = param_8[3];
  *param_4 = *param_8;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_8;
}

/* ref: Global::Float4x4Add */
GEN_LIB GEN_FRAME uint F_00d4a100(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(float * param_8, unsigned int gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(float * param_10, unsigned int gen_a9), GEN_P(float * param_11, unsigned int gen_a10), GEN_P(float * param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float * param_8 = (float *)(uintptr_t)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(float * param_10 = (float *)(uintptr_t)gen_a9;)
  GEN_PIN(float * param_11 = (float *)(uintptr_t)gen_a10;)
  GEN_PIN(float * param_12 = (float *)(uintptr_t)gen_a11;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_9 + *param_5;
  param_1[1] = fVar1 + fVar4;
  param_1[2] = fVar2 + fVar5;
  param_1[3] = fVar3 + fVar6;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_6[3];
  fVar4 = param_10[1];
  fVar5 = param_10[2];
  fVar6 = param_10[3];
  *param_2 = *param_6 + *param_10;
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 + *param_11;
  param_3[1] = fVar1 + fVar4;
  param_3[2] = fVar2 + fVar5;
  param_3[3] = fVar3 + fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 + *param_12;
  param_4[1] = fVar1 + fVar4;
  param_4[2] = fVar2 + fVar5;
  param_4[3] = fVar3 + fVar6;
  return (uint)param_8;
}

/* ref: Global::Float4x4Subtract */
GEN_LIB GEN_FRAME uint F_00d4a150(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(float * param_8, unsigned int gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(float * param_10, unsigned int gen_a9), GEN_P(float * param_11, unsigned int gen_a10), GEN_P(float * param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float * param_8 = (float *)(uintptr_t)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(float * param_10 = (float *)(uintptr_t)gen_a9;)
  GEN_PIN(float * param_11 = (float *)(uintptr_t)gen_a10;)
  GEN_PIN(float * param_12 = (float *)(uintptr_t)gen_a11;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  fVar4 = param_9[1];
  fVar5 = param_9[2];
  fVar6 = param_9[3];
  *param_1 = *param_5 - *param_9;
  param_1[1] = fVar1 - fVar4;
  param_1[2] = fVar2 - fVar5;
  param_1[3] = fVar3 - fVar6;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_6[3];
  fVar4 = param_10[1];
  fVar5 = param_10[2];
  fVar6 = param_10[3];
  *param_2 = *param_6 - *param_10;
  param_2[1] = fVar1 - fVar4;
  param_2[2] = fVar2 - fVar5;
  param_2[3] = fVar3 - fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 - *param_11;
  param_3[1] = fVar1 - fVar4;
  param_3[2] = fVar2 - fVar5;
  param_3[3] = fVar3 - fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 - *param_12;
  param_4[1] = fVar1 - fVar4;
  param_4[2] = fVar2 - fVar5;
  param_4[3] = fVar3 - fVar6;
  return (uint)param_8;
}

/* ref: Global::Float4x4Multiply */
GEN_LIB GEN_FRAME uint F_00d4a1a0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(float * param_8, unsigned int gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(float * param_10, unsigned int gen_a9), GEN_P(float * param_11, unsigned int gen_a10), GEN_P(float * param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float * param_8 = (float *)(uintptr_t)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(float * param_10 = (float *)(uintptr_t)gen_a9;)
  GEN_PIN(float * param_11 = (float *)(uintptr_t)gen_a10;)
  GEN_PIN(float * param_12 = (float *)(uintptr_t)gen_a11;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_9 * *param_5;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar5;
  param_1[3] = fVar3 * fVar6;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_6[3];
  fVar4 = param_10[1];
  fVar5 = param_10[2];
  fVar6 = param_10[3];
  *param_2 = *param_6 * *param_10;
  param_2[1] = fVar1 * fVar4;
  param_2[2] = fVar2 * fVar5;
  param_2[3] = fVar3 * fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 * *param_11;
  param_3[1] = fVar1 * fVar4;
  param_3[2] = fVar2 * fVar5;
  param_3[3] = fVar3 * fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 * *param_12;
  param_4[1] = fVar1 * fVar4;
  param_4[2] = fVar2 * fVar5;
  param_4[3] = fVar3 * fVar6;
  return (uint)param_8;
}

/* ref: FUN_00d4a530 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a530(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd4a530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar2 = param_1[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar3 = param_1[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *param_1 = *param_1 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d4a550 */
GEN_LIB GEN_FRAME uint F_00d4a550(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd4a550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = (*(float *)&REFG(undefined, 0x1136ef4) * (fVar2 * fVar2) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar2 * fVar2) +
          *(float *)&REFG(undefined, 0x1138af4);
  fVar6 = (*(float *)&REFG(undefined, 0x1136ef8) * (fVar3 * fVar3) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar3 * fVar3) +
          *(float *)&REFG(undefined, 0x1138af8);
  fVar7 = (*(float *)&REFG(undefined, 0x1136efc) * (fVar4 * fVar4) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar4 * fVar4) +
          *(float *)&REFG(undefined, 0x1138afc);
  *param_1 = ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar1 * fVar1) + *(float *)&REFG(undefined, 0x1136ee0)) *
              (fVar1 * fVar1) + *(float *)&REFG(undefined, 0x1138af0)) * fVar1;
  param_1[1] = fVar5 * fVar2;
  param_1[2] = fVar6 * fVar3;
  param_1[3] = fVar7 * fVar4;
  return (uint)param_2;
}

/* ref: Global::Float4Lerp */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a590(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11), GEN_P(float * param_13, unsigned int gen_a12))
{
  GEN_ENTER(0xd4a590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_PIN(float * param_13 = (float *)(uintptr_t)gen_a12;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  fVar7 = param_13[1];
  fVar8 = param_13[2];
  fVar9 = param_13[3];
  fVar10 = param_5[1];
  fVar11 = param_5[2];
  fVar12 = param_5[3];
  *param_1 = (*param_9 - *param_5) * *param_13 + *param_5;
  param_1[1] = (fVar1 - fVar4) * fVar7 + fVar10;
  param_1[2] = (fVar2 - fVar5) * fVar8 + fVar11;
  param_1[3] = (fVar3 - fVar6) * fVar9 + fVar12;
  return (uint)param_1;
}

/* ref: Global::Float4LerpB */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a5c0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11), GEN_P(float * param_13, unsigned int gen_a12))
{
  GEN_ENTER(0xd4a5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  GEN_PIN(float * param_13 = (float *)(uintptr_t)gen_a12;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  fVar7 = param_13[1];
  fVar8 = param_13[2];
  fVar9 = param_13[3];
  fVar10 = param_5[1];
  fVar11 = param_5[2];
  fVar12 = param_5[3];
  *param_1 = (*param_9 - *param_5) * *param_13 + *param_5;
  param_1[1] = (fVar1 - fVar4) * fVar7 + fVar10;
  param_1[2] = (fVar2 - fVar5) * fVar8 + fVar11;
  param_1[3] = (fVar3 - fVar6) * fVar9 + fVar12;
  return (uint)param_1;
}

/* ref: FUN_00d4a5f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a5f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_9[1];
  uVar2 = param_9[2];
  uVar3 = param_9[3];
  *param_1 = *param_9;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_9;
}

/* ref: FUN_00d4a610 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a610(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8), GEN_P(undefined4 * param_10, unsigned int gen_a9), GEN_P(undefined4 * param_11, unsigned int gen_a10), GEN_P(undefined4 * param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;)
  GEN_PIN(undefined4 * param_11 = (undefined4 *)(uintptr_t)gen_a10;)
  GEN_PIN(undefined4 * param_12 = (undefined4 *)(uintptr_t)gen_a11;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_9[1];
  uVar2 = param_9[2];
  uVar3 = param_9[3];
  *param_1 = *param_9;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_10[1];
  uVar2 = param_10[2];
  uVar3 = param_10[3];
  *param_2 = *param_10;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  uVar3 = param_11[3];
  *param_3 = *param_11;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_12[1];
  uVar2 = param_12[2];
  uVar3 = param_12[3];
  *param_4 = *param_12;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_12;
}

/* ref: FUN_00d4a650 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a650(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8), GEN_P(undefined4 * param_10, unsigned int gen_a9), GEN_P(undefined4 * param_11, unsigned int gen_a10), GEN_P(undefined4 * param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;)
  GEN_PIN(undefined4 * param_11 = (undefined4 *)(uintptr_t)gen_a10;)
  GEN_PIN(undefined4 * param_12 = (undefined4 *)(uintptr_t)gen_a11;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_9[1];
  uVar2 = param_9[2];
  uVar3 = param_9[3];
  *param_1 = *param_9;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_10[1];
  uVar2 = param_10[2];
  uVar3 = param_10[3];
  *param_2 = *param_10;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  uVar3 = param_11[3];
  *param_3 = *param_11;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_12[1];
  uVar2 = param_12[2];
  uVar3 = param_12[3];
  *param_4 = *param_12;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_12;
}

/* ref: FUN_00d4a690 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a690(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_9 + *param_5;
  param_1[1] = fVar1 + fVar4;
  param_1[2] = fVar2 + fVar5;
  param_1[3] = fVar3 + fVar6;
  return (uint)param_9;
}

/* ref: FUN_00d4a6b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a6b0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(float * param_8, unsigned int gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(float * param_10, unsigned int gen_a9), GEN_P(float * param_11, unsigned int gen_a10), GEN_P(float * param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float * param_8 = (float *)(uintptr_t)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(float * param_10 = (float *)(uintptr_t)gen_a9;)
  GEN_PIN(float * param_11 = (float *)(uintptr_t)gen_a10;)
  GEN_PIN(float * param_12 = (float *)(uintptr_t)gen_a11;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_9 + *param_5;
  param_1[1] = fVar1 + fVar4;
  param_1[2] = fVar2 + fVar5;
  param_1[3] = fVar3 + fVar6;
  fVar1 = param_10[1];
  fVar2 = param_10[2];
  fVar3 = param_10[3];
  fVar4 = param_6[1];
  fVar5 = param_6[2];
  fVar6 = param_6[3];
  *param_2 = *param_10 + *param_6;
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 + *param_11;
  param_3[1] = fVar1 + fVar4;
  param_3[2] = fVar2 + fVar5;
  param_3[3] = fVar3 + fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 + *param_12;
  param_4[1] = fVar1 + fVar4;
  param_4[2] = fVar2 + fVar5;
  param_4[3] = fVar3 + fVar6;
  return (uint)param_8;
}

/* ref: FUN_00d4a8a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a8a0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(undefined4 param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a11;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  fVar4 = param_9[1];
  fVar5 = param_9[2];
  fVar6 = param_9[3];
  *param_1 = *param_5 - *param_9;
  param_1[1] = fVar1 - fVar4;
  param_1[2] = fVar2 - fVar5;
  param_1[3] = fVar3 - fVar6;
  return (uint)param_9;
}

/* ref: FUN_00d4a8c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4a8c0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(float * param_8, unsigned int gen_a7), GEN_P(float * param_9, unsigned int gen_a8), GEN_P(float * param_10, unsigned int gen_a9), GEN_P(float * param_11, unsigned int gen_a10), GEN_P(float * param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4a8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(float * param_8 = (float *)(uintptr_t)gen_a7;)
  GEN_PIN(float * param_9 = (float *)(uintptr_t)gen_a8;)
  GEN_PIN(float * param_10 = (float *)(uintptr_t)gen_a9;)
  GEN_PIN(float * param_11 = (float *)(uintptr_t)gen_a10;)
  GEN_PIN(float * param_12 = (float *)(uintptr_t)gen_a11;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  fVar4 = param_9[1];
  fVar5 = param_9[2];
  fVar6 = param_9[3];
  *param_1 = *param_5 - *param_9;
  param_1[1] = fVar1 - fVar4;
  param_1[2] = fVar2 - fVar5;
  param_1[3] = fVar3 - fVar6;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_6[3];
  fVar4 = param_10[1];
  fVar5 = param_10[2];
  fVar6 = param_10[3];
  *param_2 = *param_6 - *param_10;
  param_2[1] = fVar1 - fVar4;
  param_2[2] = fVar2 - fVar5;
  param_2[3] = fVar3 - fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 - *param_11;
  param_3[1] = fVar1 - fVar4;
  param_3[2] = fVar2 - fVar5;
  param_3[3] = fVar3 - fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 - *param_12;
  param_4[1] = fVar1 - fVar4;
  param_4[2] = fVar2 - fVar5;
  param_4[3] = fVar3 - fVar6;
  return (uint)param_8;
}

/* ref: FUN_00d4aab0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4aab0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd4aab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_3;
}

/* ref: FUN_00d4aad0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4aad0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd4aad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_3 * *param_5;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar5;
  param_1[3] = fVar3 * fVar6;
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_2 = *param_4;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  return (uint)param_4;
}

/* ref: Global::Float4ArrayLerp */
GEN_LIB GEN_FRAME unsigned int F_00d4af10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4af10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float * pfVar17;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar16 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar16) {
    pfVar17 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar17)));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar10 = pfVar17[1];
      fVar11 = pfVar17[2];
      fVar12 = pfVar17[3];
      fVar13 = pfVar17[1];
      fVar14 = pfVar17[2];
      fVar15 = pfVar17[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar17)));
      *pfVar2 = (*pfVar1 - *pfVar17) * fVar3 + *pfVar17;
      pfVar2[1] = (fVar7 - fVar10) * fVar4 + fVar13;
      pfVar2[2] = (fVar8 - fVar11) * fVar5 + fVar14;
      pfVar2[3] = (fVar9 - fVar12) * fVar6 + fVar15;
      pfVar17 = pfVar17 + 4;
      iVar16 = iVar16 - 1;
    } while (iVar16 != 0);
  }
  return 0;
}

/* ref: Global::Float4ArrayLerpAdd */
GEN_LIB GEN_FRAME unsigned int F_00d4af60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4af60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float * pfVar15;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar14) {
    pfVar15 = param_3;
    do {
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar15)));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar15)));
      *pfVar2 = ((*pfVar1 + fVar7) - fVar7) * fVar3 + fVar7;
      pfVar2[1] = ((fVar11 + fVar8) - fVar8) * fVar4 + fVar8;
      pfVar2[2] = ((fVar12 + fVar9) - fVar9) * fVar5 + fVar9;
      pfVar2[3] = ((fVar13 + fVar10) - fVar10) * fVar6 + fVar10;
      pfVar15 = pfVar15 + 4;
      iVar14 = iVar14 - 1;
    } while (iVar14 != 0);
  }
  return 0;
}

/* ref: Global::Float4ArrayLerpSub */
GEN_LIB GEN_FRAME unsigned int F_00d4afb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4afb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float * pfVar15;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar14) {
    pfVar15 = param_3;
    do {
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar15)));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar15)));
      *pfVar2 = ((fVar7 - *pfVar1) - fVar7) * fVar3 + fVar7;
      pfVar2[1] = ((fVar8 - fVar11) - fVar8) * fVar4 + fVar8;
      pfVar2[2] = ((fVar9 - fVar12) - fVar9) * fVar5 + fVar9;
      pfVar2[3] = ((fVar10 - fVar13) - fVar10) * fVar6 + fVar10;
      pfVar15 = pfVar15 + 4;
      iVar14 = iVar14 - 1;
    } while (iVar14 != 0);
  }
  return 0;
}

/* ref: Global::Float4ArrayLerpB */
GEN_LIB GEN_FRAME unsigned int F_00d4b000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4b000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float * pfVar17;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar16 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar16) {
    pfVar17 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar17)));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar10 = pfVar17[1];
      fVar11 = pfVar17[2];
      fVar12 = pfVar17[3];
      fVar13 = pfVar17[1];
      fVar14 = pfVar17[2];
      fVar15 = pfVar17[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar17)));
      *pfVar2 = (*pfVar1 - *pfVar17) * fVar3 + *pfVar17;
      pfVar2[1] = (fVar7 - fVar10) * fVar4 + fVar13;
      pfVar2[2] = (fVar8 - fVar11) * fVar5 + fVar14;
      pfVar2[3] = (fVar9 - fVar12) * fVar6 + fVar15;
      pfVar17 = pfVar17 + 4;
      iVar16 = iVar16 - 1;
    } while (iVar16 != 0);
  }
  return 0;
}

/* ref: Global::Float4ArrayLerpAddB */
GEN_LIB GEN_FRAME unsigned int F_00d4b050(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4b050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float * pfVar15;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar14) {
    pfVar15 = param_3;
    do {
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar15)));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar15)));
      *pfVar2 = ((*pfVar1 + fVar7) - fVar7) * fVar3 + fVar7;
      pfVar2[1] = ((fVar11 + fVar8) - fVar8) * fVar4 + fVar8;
      pfVar2[2] = ((fVar12 + fVar9) - fVar9) * fVar5 + fVar9;
      pfVar2[3] = ((fVar13 + fVar10) - fVar10) * fVar6 + fVar10;
      pfVar15 = pfVar15 + 4;
      iVar14 = iVar14 - 1;
    } while (iVar14 != 0);
  }
  return 0;
}

/* ref: Global::Float4ArrayLerpSubB */
GEN_LIB GEN_FRAME unsigned int F_00d4b0a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4b0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float * pfVar15;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar14) {
    pfVar15 = param_3;
    do {
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar15)));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar15)));
      *pfVar2 = ((fVar7 - *pfVar1) - fVar7) * fVar3 + fVar7;
      pfVar2[1] = ((fVar8 - fVar11) - fVar8) * fVar4 + fVar8;
      pfVar2[2] = ((fVar9 - fVar12) - fVar9) * fVar5 + fVar9;
      pfVar2[3] = ((fVar10 - fVar13) - fVar10) * fVar6 + fVar10;
      pfVar15 = pfVar15 + 4;
      iVar14 = iVar14 - 1;
    } while (iVar14 != 0);
  }
  return 0;
}

/* ref: Global::Float4CompareGreater */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d4b0f0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd4b0f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 < *in_ecx);
  param_2[1] = -(uint)(fVar1 < fVar4);
  param_2[2] = -(uint)(fVar2 < fVar5);
  param_2[3] = -(uint)(fVar3 < fVar6);
  return (uint)param_2;
}

/* ref: Global::Float4CompareLessZero */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d4b110(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd4b110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx < 0.0);
  param_2[1] = -(uint)(fVar1 < 0.0);
  param_2[2] = -(uint)(fVar2 < 0.0);
  param_2[3] = -(uint)(fVar3 < 0.0);
  return (uint)param_2;
}

/* ref: FUN_00d4b130 */
GEN_LIB GEN_FRAME unsigned int F_00d4b130(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4b130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  undefined4 * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 * puVar21;
  float * pfVar22;
  float * pfVar23;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  param_8 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < param_8) {
    param_7 = param_1;
    puVar21 = param_2;
    pfVar22 = param_5;
    pfVar23 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_6 - (int)param_2) + (int)puVar21)));
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      puVar2 = ((undefined4 *)GEN_TOP(((param_4 - (int)param_2) + (int)puVar21)));
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      *puVar21 = *puVar2;
      puVar21[1] = uVar18;
      puVar21[2] = uVar19;
      puVar21[3] = uVar20;
      fVar11 = *pfVar23;
      fVar12 = pfVar23[1];
      fVar13 = pfVar23[2];
      fVar14 = pfVar23[3];
      fVar15 = pfVar22[1];
      fVar16 = pfVar22[2];
      fVar17 = pfVar22[3];
      *param_7 = ((fVar11 + *pfVar22) - fVar11) * (fVar7 * fVar3) + fVar11;
      param_7[1] = ((fVar12 + fVar15) - fVar12) * (fVar8 * fVar4) + fVar12;
      param_7[2] = ((fVar13 + fVar16) - fVar13) * (fVar9 * fVar5) + fVar13;
      param_7[3] = ((fVar14 + fVar17) - fVar14) * (fVar10 * fVar6) + fVar14;
      param_7 = param_7 + 4;
      puVar21 = puVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      param_8 = param_8 - 1;
    } while (param_8 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b1c0 */
GEN_LIB GEN_FRAME unsigned int F_00d4b1c0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4b1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  undefined4 * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 * puVar21;
  float * pfVar22;
  float * pfVar23;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  param_8 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < param_8) {
    param_7 = param_1;
    puVar21 = param_2;
    pfVar22 = param_5;
    pfVar23 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_6 - (int)param_2) + (int)puVar21)));
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      puVar2 = ((undefined4 *)GEN_TOP(((param_4 - (int)param_2) + (int)puVar21)));
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      *puVar21 = *puVar2;
      puVar21[1] = uVar18;
      puVar21[2] = uVar19;
      puVar21[3] = uVar20;
      fVar11 = *pfVar23;
      fVar12 = pfVar23[1];
      fVar13 = pfVar23[2];
      fVar14 = pfVar23[3];
      fVar15 = pfVar22[1];
      fVar16 = pfVar22[2];
      fVar17 = pfVar22[3];
      *param_7 = ((fVar11 - *pfVar22) - fVar11) * (fVar7 * fVar3) + fVar11;
      param_7[1] = ((fVar12 - fVar15) - fVar12) * (fVar8 * fVar4) + fVar12;
      param_7[2] = ((fVar13 - fVar16) - fVar13) * (fVar9 * fVar5) + fVar13;
      param_7[3] = ((fVar14 - fVar17) - fVar14) * (fVar10 * fVar6) + fVar14;
      param_7 = param_7 + 4;
      puVar21 = puVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      param_8 = param_8 - 1;
    } while (param_8 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b250 */
GEN_LIB GEN_FRAME unsigned int F_00d4b250(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4b250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  undefined4 * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 * puVar21;
  float * pfVar22;
  float * pfVar23;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  param_8 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < param_8) {
    param_7 = param_1;
    puVar21 = param_2;
    pfVar22 = param_5;
    pfVar23 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_6 - (int)param_2) + (int)puVar21)));
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      puVar2 = ((undefined4 *)GEN_TOP(((param_4 - (int)param_2) + (int)puVar21)));
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      *puVar21 = *puVar2;
      puVar21[1] = uVar18;
      puVar21[2] = uVar19;
      puVar21[3] = uVar20;
      fVar11 = *pfVar23;
      fVar12 = pfVar23[1];
      fVar13 = pfVar23[2];
      fVar14 = pfVar23[3];
      fVar15 = pfVar22[1];
      fVar16 = pfVar22[2];
      fVar17 = pfVar22[3];
      *param_7 = ((fVar11 + *pfVar22) - fVar11) * (fVar7 * fVar3) + fVar11;
      param_7[1] = ((fVar12 + fVar15) - fVar12) * (fVar8 * fVar4) + fVar12;
      param_7[2] = ((fVar13 + fVar16) - fVar13) * (fVar9 * fVar5) + fVar13;
      param_7[3] = ((fVar14 + fVar17) - fVar14) * (fVar10 * fVar6) + fVar14;
      param_7 = param_7 + 4;
      puVar21 = puVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      param_8 = param_8 - 1;
    } while (param_8 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b2e0 */
GEN_LIB GEN_FRAME unsigned int F_00d4b2e0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4b2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  undefined4 * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 * puVar21;
  float * pfVar22;
  float * pfVar23;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  param_8 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < param_8) {
    param_7 = param_1;
    puVar21 = param_2;
    pfVar22 = param_5;
    pfVar23 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_6 - (int)param_2) + (int)puVar21)));
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      puVar2 = ((undefined4 *)GEN_TOP(((param_4 - (int)param_2) + (int)puVar21)));
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      *puVar21 = *puVar2;
      puVar21[1] = uVar18;
      puVar21[2] = uVar19;
      puVar21[3] = uVar20;
      fVar11 = *pfVar23;
      fVar12 = pfVar23[1];
      fVar13 = pfVar23[2];
      fVar14 = pfVar23[3];
      fVar15 = pfVar22[1];
      fVar16 = pfVar22[2];
      fVar17 = pfVar22[3];
      *param_7 = ((fVar11 - *pfVar22) - fVar11) * (fVar7 * fVar3) + fVar11;
      param_7[1] = ((fVar12 - fVar15) - fVar12) * (fVar8 * fVar4) + fVar12;
      param_7[2] = ((fVar13 - fVar16) - fVar13) * (fVar9 * fVar5) + fVar13;
      param_7[3] = ((fVar14 - fVar17) - fVar14) * (fVar10 * fVar6) + fVar14;
      param_7 = param_7 + 4;
      puVar21 = puVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      param_8 = param_8 - 1;
    } while (param_8 != 0);
  }
  return 0;
}

/* ref: Global::Float4CompareLessEqual */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d4b370(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd4b370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx <= *param_3);
  param_2[1] = -(uint)(fVar4 <= fVar1);
  param_2[2] = -(uint)(fVar5 <= fVar2);
  param_2[3] = -(uint)(fVar6 <= fVar3);
  return (uint)param_2;
}

/* ref: Global::Float4CompareGreaterB */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d4b390(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd4b390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 < *in_ecx);
  param_2[1] = -(uint)(fVar1 < fVar4);
  param_2[2] = -(uint)(fVar2 < fVar5);
  param_2[3] = -(uint)(fVar3 < fVar6);
  return (uint)param_2;
}

/* ref: Global::Float4CompareLessZeroB */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d4b3b0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd4b3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx < 0.0);
  param_2[1] = -(uint)(fVar1 < 0.0);
  param_2[2] = -(uint)(fVar2 < 0.0);
  param_2[3] = -(uint)(fVar3 < 0.0);
  return (uint)param_2;
}

/* ref: Global::Float4DivideInPlace */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d4b3d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd4b3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = ((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0))) * *in_ecx;
  in_ecx[1] = (fVar3 * (*(float *)((char *)&auVar2 + 4))) * in_ecx[1];
  in_ecx[2] = (fVar4 * (*(float *)((char *)&auVar2 + 8))) * in_ecx[2];
  in_ecx[3] = (fVar5 * (*(float *)((char *)&auVar2 + 12))) * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d4b6e0 */
GEN_LIB GEN_FRAME uint F_00d4b6e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(undefined4 * param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4b6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_1 = *param_5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_5[5];
  uVar2 = param_5[6];
  uVar3 = param_5[7];
  param_1[4] = param_5[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_5[9];
  uVar2 = param_5[10];
  uVar3 = param_5[0xb];
  param_1[8] = param_5[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *param_2 = *param_6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_6[5];
  uVar2 = param_6[6];
  uVar3 = param_6[7];
  param_2[4] = param_6[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = param_6[9];
  uVar2 = param_6[10];
  uVar3 = param_6[0xb];
  param_2[8] = param_6[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = param_7[1];
  uVar2 = param_7[2];
  uVar3 = param_7[3];
  *param_3 = *param_7;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_7[5];
  uVar2 = param_7[6];
  uVar3 = param_7[7];
  param_3[4] = param_7[4];
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  uVar1 = param_7[9];
  uVar2 = param_7[10];
  uVar3 = param_7[0xb];
  param_3[8] = param_7[8];
  param_3[9] = uVar1;
  param_3[10] = uVar2;
  param_3[0xb] = uVar3;
  uVar1 = param_8[1];
  uVar2 = param_8[2];
  uVar3 = param_8[3];
  *param_4 = *param_8;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_8[5];
  uVar2 = param_8[6];
  uVar3 = param_8[7];
  param_4[4] = param_8[4];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  uVar1 = param_8[9];
  uVar2 = param_8[10];
  uVar3 = param_8[0xb];
  param_4[8] = param_8[8];
  param_4[9] = uVar1;
  param_4[10] = uVar2;
  param_4[0xb] = uVar3;
  return (uint)param_8;
}

/* ref: Global::NormalizeVector4x4 */
GEN_LIB GEN_FRAME unsigned int F_00d4b760(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd4b760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  fVar13 = *param_4;
  fVar14 = param_4[1];
  fVar15 = param_4[2];
  fVar16 = param_4[3];
  (*(float *)((char *)&auVar22 + 0)) = fVar4 * fVar4;
  (*(float *)((char *)&auVar22 + 4)) = fVar8 * fVar8;
  (*(float *)((char *)&auVar22 + 8)) = fVar12 * fVar12;
  (*(float *)((char *)&auVar22 + 12)) = fVar16 * fVar16;
  fVar17 = ((fVar2 * fVar2 + fVar1 * fVar1) + fVar3 * fVar3) + (*(float *)((char *)&auVar22 + 0));
  fVar18 = ((fVar6 * fVar6 + fVar5 * fVar5) + fVar7 * fVar7) + (*(float *)((char *)&auVar22 + 4));
  fVar19 = ((fVar10 * fVar10 + fVar9 * fVar9) + fVar11 * fVar11) + (*(float *)((char *)&auVar22 + 8));
  fVar20 = ((fVar14 * fVar14 + fVar13 * fVar13) + fVar15 * fVar15) + (*(float *)((char *)&auVar22 + 12));
  (*(undefined4 *)((char *)&auVar23 + 4)) = (undefined4)gen_fl2bits(fVar18);
  (*(undefined4 *)((char *)&auVar23 + 0)) = (undefined4)gen_fl2bits(fVar17);
  (*(undefined4 *)((char *)&auVar23 + 8)) = (undefined4)gen_fl2bits(fVar19);
  (*(undefined4 *)((char *)&auVar23 + 12)) = (undefined4)gen_fl2bits(fVar20);
  gen_rsqrtps(&(auVar23), &(auVar22), &(auVar23));
  fVar21 = (*(float *)((char *)&auVar23 + 0));
  fVar24 = (*(float *)((char *)&auVar23 + 4));
  fVar25 = (*(float *)((char *)&auVar23 + 8));
  fVar26 = (*(float *)((char *)&auVar23 + 12));
  fVar17 = (*(float *)&REFG(undefined, 0x1136eb0) - (fVar21 * fVar17) * fVar21) *
           (*(float *)&REFG(undefined, 0x1136ec0) * fVar21);
  fVar18 = (*(float *)&REFG(undefined, 0x1136eb4) - (fVar24 * fVar18) * fVar24) *
           (*(float *)&REFG(undefined, 0x1136ec4) * fVar24);
  fVar19 = (*(float *)&REFG(undefined, 0x1136eb8) - (fVar25 * fVar19) * fVar25) *
           (*(float *)&REFG(undefined, 0x1136ec8) * fVar25);
  fVar20 = (*(float *)&REFG(undefined, 0x1136ebc) - (fVar26 * fVar20) * fVar26) *
           (*(float *)&REFG(undefined, 0x1136ecc) * fVar26);
  *param_1 = fVar17 * fVar1;
  param_1[1] = fVar17 * fVar2;
  param_1[2] = fVar17 * fVar3;
  param_1[3] = fVar17 * fVar4;
  *param_2 = fVar18 * fVar5;
  param_2[1] = fVar18 * fVar6;
  param_2[2] = fVar18 * fVar7;
  param_2[3] = fVar18 * fVar8;
  *param_3 = fVar19 * fVar9;
  param_3[1] = fVar19 * fVar10;
  param_3[2] = fVar19 * fVar11;
  param_3[3] = fVar19 * fVar12;
  *param_4 = fVar20 * fVar13;
  param_4[1] = fVar20 * fVar14;
  param_4[2] = fVar20 * fVar15;
  param_4[3] = fVar20 * fVar16;
  return 0;
}

/* ref: FUN_00d4cad0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d4cad0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8), GEN_P(undefined4 * param_10, unsigned int gen_a9), GEN_P(undefined4 * param_11, unsigned int gen_a10), GEN_P(undefined4 * param_12, unsigned int gen_a11))
{
  GEN_ENTER(0xd4cad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;)
  GEN_PIN(undefined4 * param_11 = (undefined4 *)(uintptr_t)gen_a10;)
  GEN_PIN(undefined4 * param_12 = (undefined4 *)(uintptr_t)gen_a11;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_9[1];
  uVar2 = param_9[2];
  uVar3 = param_9[3];
  *param_1 = *param_9;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_9[5];
  uVar2 = param_9[6];
  uVar3 = param_9[7];
  param_1[4] = param_9[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_9[9];
  uVar2 = param_9[10];
  uVar3 = param_9[0xb];
  param_1[8] = param_9[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_10[1];
  uVar2 = param_10[2];
  uVar3 = param_10[3];
  *param_2 = *param_10;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_10[5];
  uVar2 = param_10[6];
  uVar3 = param_10[7];
  param_2[4] = param_10[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = param_10[9];
  uVar2 = param_10[10];
  uVar3 = param_10[0xb];
  param_2[8] = param_10[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  uVar3 = param_11[3];
  *param_3 = *param_11;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_11[5];
  uVar2 = param_11[6];
  uVar3 = param_11[7];
  param_3[4] = param_11[4];
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  uVar1 = param_11[9];
  uVar2 = param_11[10];
  uVar3 = param_11[0xb];
  param_3[8] = param_11[8];
  param_3[9] = uVar1;
  param_3[10] = uVar2;
  param_3[0xb] = uVar3;
  uVar1 = param_12[1];
  uVar2 = param_12[2];
  uVar3 = param_12[3];
  *param_4 = *param_12;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_12[5];
  uVar2 = param_12[6];
  uVar3 = param_12[7];
  param_4[4] = param_12[4];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  uVar1 = param_12[9];
  uVar2 = param_12[10];
  uVar3 = param_12[0xb];
  param_4[8] = param_12[8];
  param_4[9] = uVar1;
  param_4[10] = uVar2;
  param_4[0xb] = uVar3;
  return (uint)param_12;
}

/* ref: Global::BlendFloat4Arrays */
GEN_LIB GEN_FRAME unsigned int F_00d4d080(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd4d080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float * pfVar19;
  
  if (param_7 == 0) {
    if (param_6 == -1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          fVar7 = *pfVar19;
          fVar8 = pfVar19[1];
          fVar9 = pfVar19[2];
          fVar10 = pfVar19[3];
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar19 = pfVar19 + 4;
          iVar18 = iVar18 - 1;
          pfVar2 = ((float *)GEN_TOP(((int)pfVar1 + (param_1 - param_3))));
          *pfVar2 = ((fVar7 - *pfVar1) - fVar7) * fVar3 + fVar7;
          pfVar2[1] = ((fVar8 - fVar11) - fVar8) * fVar4 + fVar8;
          pfVar2[2] = ((fVar9 - fVar12) - fVar9) * fVar5 + fVar9;
          pfVar2[3] = ((fVar10 - fVar13) - fVar10) * fVar6 + fVar10;
        } while (iVar18 != 0);
        return 0;
      }
    }
    else if (param_6 == 0) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          pfVar1 = ((float *)GEN_TOP(((param_1 - (int)param_2) + (int)pfVar19)));
          pfVar2 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar1)));
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          fVar10 = *pfVar19;
          fVar11 = pfVar19[1];
          fVar12 = pfVar19[2];
          fVar13 = pfVar19[3];
          fVar14 = *pfVar19;
          fVar15 = pfVar19[1];
          fVar16 = pfVar19[2];
          fVar17 = pfVar19[3];
          pfVar19 = pfVar19 + 4;
          iVar18 = iVar18 - 1;
          *pfVar1 = (*pfVar2 - fVar10) * fVar3 + fVar14;
          pfVar1[1] = (fVar7 - fVar11) * fVar4 + fVar15;
          pfVar1[2] = (fVar8 - fVar12) * fVar5 + fVar16;
          pfVar1[3] = (fVar9 - fVar13) * fVar6 + fVar17;
        } while (iVar18 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          fVar7 = *pfVar19;
          fVar8 = pfVar19[1];
          fVar9 = pfVar19[2];
          fVar10 = pfVar19[3];
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar19 = pfVar19 + 4;
          iVar18 = iVar18 - 1;
          pfVar2 = ((float *)GEN_TOP(((int)pfVar1 + (param_1 - param_3))));
          *pfVar2 = ((fVar7 + *pfVar1) - fVar7) * fVar3 + fVar7;
          pfVar2[1] = ((fVar8 + fVar11) - fVar8) * fVar4 + fVar8;
          pfVar2[2] = ((fVar9 + fVar12) - fVar9) * fVar5 + fVar9;
          pfVar2[3] = ((fVar10 + fVar13) - fVar10) * fVar6 + fVar10;
        } while (iVar18 != 0);
        return 0;
      }
    }
  }
  else if (param_7 == 1) {
    if (param_6 == -1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          fVar7 = *pfVar19;
          fVar8 = pfVar19[1];
          fVar9 = pfVar19[2];
          fVar10 = pfVar19[3];
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar19 = pfVar19 + 4;
          iVar18 = iVar18 - 1;
          pfVar2 = ((float *)GEN_TOP(((param_1 - param_3) + (int)pfVar1)));
          *pfVar2 = ((fVar7 - *pfVar1) - fVar7) * fVar3 + fVar7;
          pfVar2[1] = ((fVar8 - fVar11) - fVar8) * fVar4 + fVar8;
          pfVar2[2] = ((fVar9 - fVar12) - fVar9) * fVar5 + fVar9;
          pfVar2[3] = ((fVar10 - fVar13) - fVar10) * fVar6 + fVar10;
        } while (iVar18 != 0);
      }
    }
    else if (param_6 == 0) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          fVar10 = pfVar19[1];
          fVar11 = pfVar19[2];
          fVar12 = pfVar19[3];
          fVar13 = pfVar19[1];
          fVar14 = pfVar19[2];
          fVar15 = pfVar19[3];
          iVar18 = iVar18 - 1;
          pfVar2 = ((float *)GEN_TOP(((int)pfVar19 + (param_1 - param_3) + (param_3 - (int)param_2))));
          *pfVar2 = (*pfVar1 - *pfVar19) * fVar3 + *pfVar19;
          pfVar2[1] = (fVar7 - fVar10) * fVar4 + fVar13;
          pfVar2[2] = (fVar8 - fVar11) * fVar5 + fVar14;
          pfVar2[3] = (fVar9 - fVar12) * fVar6 + fVar15;
          pfVar19 = pfVar19 + 4;
        } while (iVar18 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          fVar7 = *pfVar19;
          fVar8 = pfVar19[1];
          fVar9 = pfVar19[2];
          fVar10 = pfVar19[3];
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          iVar18 = iVar18 - 1;
          pfVar2 = ((float *)GEN_TOP(((int)pfVar19 + (param_1 - param_3) + (param_3 - (int)param_2))));
          *pfVar2 = ((*pfVar1 + fVar7) - fVar7) * fVar3 + fVar7;
          pfVar2[1] = ((fVar11 + fVar8) - fVar8) * fVar4 + fVar8;
          pfVar2[2] = ((fVar12 + fVar9) - fVar9) * fVar5 + fVar9;
          pfVar2[3] = ((fVar13 + fVar10) - fVar10) * fVar6 + fVar10;
          pfVar19 = pfVar19 + 4;
        } while (iVar18 != 0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d4fe80 */
GEN_LIB GEN_NOFRAME unsigned int F_00d4fe80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xd4fe80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  float * pfVar1;
  undefined4 * puVar2;
  float * pfVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 * puVar40;
  float * pfVar41;
  float * pfVar42;
  gen_v16 * pauVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  int iStack_14;
  
  fVar33 = *param_7;
  fVar34 = param_7[1];
  fVar35 = param_7[2];
  fVar36 = param_7[3];
  iStack_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iStack_14) {
    pauVar43 = ((gen_v16 *)GEN_TOP((param_3 + 0x20)));
    pfVar41 = ((float *)GEN_TOP((param_5 + 0x20)));
    pfVar42 = ((float *)GEN_TOP((param_1 + 0x20)));
    puVar40 = param_2;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_6 - (int)param_2) + (int)puVar40)));
      puVar2 = ((undefined4 *)GEN_TOP(((param_4 - (int)param_2) + (int)puVar40)));
      uVar37 = puVar2[1];
      uVar38 = puVar2[2];
      uVar39 = puVar2[3];
      fVar5 = *((float *)GEN_TOP(pauVar43[-1]));
      fVar6 = *((float *)GEN_TOP((pauVar43[-1] + 4)));
      fVar7 = *((float *)GEN_TOP((pauVar43[-1] + 8)));
      fVar8 = *((float *)GEN_TOP((pauVar43[-1] + 0xc)));
      fVar9 = *((float *)GEN_TOP(pauVar43[1]));
      fVar10 = *((float *)GEN_TOP((pauVar43[1] + 4)));
      fVar11 = *((float *)GEN_TOP((pauVar43[1] + 8)));
      fVar12 = *((float *)GEN_TOP((pauVar43[1] + 0xc)));
      pfVar3 = ((float *)GEN_TOP(((int)pfVar41 + (param_3 - param_5) - 0x20)));
      fVar13 = *pfVar3;
      fVar14 = pfVar3[1];
      fVar15 = pfVar3[2];
      fVar16 = pfVar3[3];
      fVar17 = pfVar41[-8];
      fVar18 = pfVar41[-7];
      fVar19 = pfVar41[-6];
      fVar20 = pfVar41[-5];
      memcpy(&(auVar4), &(*pauVar43), sizeof(*pauVar43) < sizeof(auVar4) ? sizeof(*pauVar43) : sizeof(auVar4));
      fVar44 = *pfVar1 * fVar33;
      fVar45 = pfVar1[1] * fVar34;
      fVar46 = pfVar1[2] * fVar35;
      fVar47 = pfVar1[3] * fVar36;
      *puVar40 = *puVar2;
      puVar40[1] = uVar37;
      puVar40[2] = uVar38;
      puVar40[3] = uVar39;
      fVar21 = pfVar41[-4];
      fVar22 = pfVar41[-3];
      fVar23 = pfVar41[-2];
      fVar24 = pfVar41[-1];
      fVar25 = pfVar41[4];
      fVar26 = pfVar41[5];
      fVar27 = pfVar41[6];
      fVar28 = pfVar41[7];
      fVar29 = *pfVar41;
      fVar30 = pfVar41[1];
      fVar31 = pfVar41[2];
      fVar32 = pfVar41[3];
      fVar48 = *(float *)&REFG(undefined, 0x1138af0) - fVar44;
      fVar49 = *(float *)&REFG(undefined, 0x1138af4) - fVar45;
      fVar50 = *(float *)&REFG(undefined, 0x1138af8) - fVar46;
      fVar51 = *(float *)&REFG(undefined, 0x1138afc) - fVar47;
      pfVar42[-8] = fVar13 * fVar48 + (fVar17 + fVar13) * fVar44;
      pfVar42[-7] = fVar14 * fVar48 + (fVar18 + fVar14) * fVar44;
      pfVar42[-6] = fVar15 * fVar48 + (fVar19 + fVar15) * fVar44;
      pfVar42[-5] = fVar16 * fVar48 + (fVar20 + fVar16) * fVar44;
      pfVar42[-4] = fVar5 * fVar49 + (fVar21 + fVar5) * fVar45;
      pfVar42[-3] = fVar6 * fVar49 + (fVar22 + fVar6) * fVar45;
      pfVar42[-2] = fVar7 * fVar49 + (fVar23 + fVar7) * fVar45;
      pfVar42[-1] = fVar8 * fVar49 + (fVar24 + fVar8) * fVar45;
      *pfVar42 = (*(float *)((char *)&auVar4 + 0)) * fVar50 + ((*(float *)((char *)&auVar4 + 0)) + fVar29) * fVar46;
      pfVar42[1] = (*(float *)((char *)&auVar4 + 4)) * fVar50 + ((*(float *)((char *)&auVar4 + 4)) + fVar30) * fVar46;
      pfVar42[2] = (*(float *)((char *)&auVar4 + 8)) * fVar50 + ((*(float *)((char *)&auVar4 + 8)) + fVar31) * fVar46;
      pfVar42[3] = (*(float *)((char *)&auVar4 + 12)) * fVar50 + ((*(float *)((char *)&auVar4 + 12)) + fVar32) * fVar46;
      pfVar42[4] = fVar9 * fVar51 + (fVar25 + fVar9) * fVar47;
      pfVar42[5] = fVar10 * fVar51 + (fVar26 + fVar10) * fVar47;
      pfVar42[6] = fVar11 * fVar51 + (fVar27 + fVar11) * fVar47;
      pfVar42[7] = fVar12 * fVar51 + (fVar28 + fVar12) * fVar47;
      pfVar41 = pfVar41 + 0x10;
      pauVar43 = pauVar43 + 4;
      pfVar42 = pfVar42 + 0x10;
      puVar40 = puVar40 + 4;
      iStack_14 = iStack_14 - 1;
    } while (iStack_14 != 0);
  }
  return 0;
}

/* ref: Global::AcosFast4 */
GEN_LIB GEN_FRAME uint F_00d52230(GEN_P(gen_v16 * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd52230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar8 [16];
  float fVar11;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4) - fVar3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0) - fVar2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8) - fVar4);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) - fVar5);
  gen_rsqrtps(&(auVar8), &(in_XMM3), &(auVar1));
  (*(float *)((char *)&auVar6 + 0)) =
       ((fVar2 * *(float *)&REFG(undefined, 0x1136f40) + *(float *)&REFG(undefined, 0x1136f30)) * fVar2 +
       *(float *)&REFG(undefined, 0x1136f20)) * fVar2 + *(float *)&REFG(undefined, 0x1136f10);
  (*(float *)((char *)&auVar6 + 4)) =
       ((fVar3 * *(float *)&REFG(undefined, 0x1136f44) + *(float *)&REFG(undefined, 0x1136f34)) * fVar3 +
       *(float *)&REFG(undefined, 0x1136f24)) * fVar3 + *(float *)&REFG(undefined, 0x1136f14);
  (*(float *)((char *)&auVar6 + 8)) =
       ((fVar4 * *(float *)&REFG(undefined, 0x1136f48) + *(float *)&REFG(undefined, 0x1136f38)) * fVar4 +
       *(float *)&REFG(undefined, 0x1136f28)) * fVar4 + *(float *)&REFG(undefined, 0x1136f18);
  (*(float *)((char *)&auVar6 + 12)) =
       ((fVar5 * *(float *)&REFG(undefined, 0x1136f4c) + *(float *)&REFG(undefined, 0x1136f3c)) * fVar5 +
       *(float *)&REFG(undefined, 0x1136f2c)) * fVar5 + *(float *)&REFG(undefined, 0x1136f1c);
  fVar7 = (*(float *)((char *)&auVar8 + 0));
  fVar9 = (*(float *)((char *)&auVar8 + 4));
  fVar10 = (*(float *)((char *)&auVar8 + 8));
  fVar11 = (*(float *)((char *)&auVar8 + 12));
  (*(undefined4 *)((char *)&auVar8 + 4)) = (undefined4)
                 gen_fl2bits((*(float *)&REFG(undefined, 0x1136eb4) -
                             (fVar9 * (*(float *)&REFG(undefined, 0x1138af4) - fVar3)) * fVar9) *
                             (*(float *)&REFG(undefined, 0x1136ec4) * fVar9));
  (*(undefined4 *)((char *)&auVar8 + 0)) = (undefined4)
                 gen_fl2bits((*(float *)&REFG(undefined, 0x1136eb0) -
                             (fVar7 * (*(float *)&REFG(undefined, 0x1138af0) - fVar2)) * fVar7) *
                             (*(float *)&REFG(undefined, 0x1136ec0) * fVar7));
  (*(undefined4 *)((char *)&auVar8 + 8)) = (undefined4)
                 gen_fl2bits((*(float *)&REFG(undefined, 0x1136eb8) -
                             (fVar10 * (*(float *)&REFG(undefined, 0x1138af8) - fVar4)) * fVar10) *
                             (*(float *)&REFG(undefined, 0x1136ec8) * fVar10));
  (*(undefined4 *)((char *)&auVar8 + 12)) =
       (undefined4)
       gen_fl2bits((*(float *)&REFG(undefined, 0x1136ebc) - (fVar11 * (*(float *)&REFG(undefined, 0x1138afc) - fVar5)) * fVar11)
                   * (*(float *)&REFG(undefined, 0x1136ecc) * fVar11));
  gen_divps(&(auVar8), &(auVar6), &(auVar8));
  memcpy(&(*param_1), &(auVar8), sizeof(auVar8) < sizeof(*param_1) ? sizeof(auVar8) : sizeof(*param_1));
  return (uint)param_2;
}

/* ref: Global::BlendFloat4ArraysWeighted */
GEN_LIB GEN_NOFRAME unsigned int F_00d526c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(gen_v12 * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd526c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(gen_v12 * param_4 = (gen_v12 *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  float * pfVar1;
  float * pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [12];
  float * pfVar36;
  float * pfVar37;
  float * pfVar38;
  gen_v16 * pauVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_70;
  float fStack_6c;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_14;
  
  if (param_7 == 0) {
    if (param_6 == -1) {
      memcpy(&(auVar35), &(*param_4), sizeof(*param_4) < sizeof(auVar35) ? sizeof(*param_4) : sizeof(auVar35));
      fVar4 = *((float *)GEN_TOP(param_4[1]));
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = ((float *)GEN_TOP((param_1 + 0x20)));
        fVar41 = *(float *)&REFG(undefined, 0x1138af0) - *((float *)GEN_TOP(*param_4));
        fVar43 = *(float *)&REFG(undefined, 0x1138af4) - *((float *)GEN_TOP((*param_4 + 4)));
        fVar45 = *(float *)&REFG(undefined, 0x1138af8) - *((float *)GEN_TOP((*param_4 + 8)));
        fVar40 = *(float *)&REFG(undefined, 0x1138afc) - fVar4;
        pfVar36 = param_2 + 0xc;
        pfVar37 = param_3;
        do {
          fVar42 = pfVar36[-0xb];
          fVar44 = pfVar36[-10];
          fVar46 = pfVar36[-9];
          fVar5 = pfVar36[-8];
          fVar6 = pfVar36[-7];
          fVar7 = pfVar36[-6];
          fVar8 = pfVar36[-5];
          fVar9 = *pfVar36;
          fVar10 = pfVar36[1];
          fVar11 = pfVar36[2];
          fVar12 = pfVar36[3];
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + (int)pfVar36)));
          fVar13 = *pfVar2;
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) : sizeof(auVar3));
          fVar17 = pfVar37[1];
          fVar18 = pfVar37[2];
          fVar19 = pfVar37[3];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar20 = *pfVar2;
          fVar21 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar23 = pfVar2[3];
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) - 0x20 + (int)pfVar36)));
          fVar24 = *pfVar2;
          fVar25 = pfVar2[1];
          fVar26 = pfVar2[2];
          fVar27 = pfVar2[3];
          fVar28 = *pfVar36;
          fVar29 = pfVar36[1];
          fVar30 = pfVar36[2];
          fVar31 = pfVar36[3];
          local_40 = (*(float *)((char *)&auVar35 + 0));
          fStack_3c = (*(float *)((char *)&auVar35 + 4));
          fStack_38 = (*(float *)((char *)&auVar35 + 8));
          pfVar38[-8] = (pfVar36[-0xc] - *pfVar37) * local_40 + pfVar36[-0xc] * fVar41;
          pfVar38[-7] = (fVar42 - fVar17) * local_40 + fVar42 * fVar41;
          pfVar38[-6] = (fVar44 - fVar18) * local_40 + fVar44 * fVar41;
          pfVar38[-5] = (fVar46 - fVar19) * local_40 + fVar46 * fVar41;
          pfVar38[-4] = (fVar5 - fVar24) * fStack_3c + fVar5 * fVar43;
          pfVar38[-3] = (fVar6 - fVar25) * fStack_3c + fVar6 * fVar43;
          pfVar38[-2] = (fVar7 - fVar26) * fStack_3c + fVar7 * fVar43;
          pfVar38[-1] = (fVar8 - fVar27) * fStack_3c + fVar8 * fVar43;
          *pfVar38 = ((*(float *)((char *)&auVar3 + 0)) - fVar20) * fStack_38 + (*(float *)((char *)&auVar3 + 0)) * fVar45;
          pfVar38[1] = ((*(float *)((char *)&auVar3 + 4)) - fVar21) * fStack_38 + (*(float *)((char *)&auVar3 + 4)) * fVar45;
          pfVar38[2] = ((*(float *)((char *)&auVar3 + 8)) - fVar22) * fStack_38 + (*(float *)((char *)&auVar3 + 8)) * fVar45;
          pfVar38[3] = ((*(float *)((char *)&auVar3 + 12)) - fVar23) * fStack_38 + (*(float *)((char *)&auVar3 + 12)) * fVar45;
          pfVar38[4] = (fVar9 - fVar13) * fVar4 + fVar28 * fVar40;
          pfVar38[5] = (fVar10 - fVar14) * fVar4 + fVar29 * fVar40;
          pfVar38[6] = (fVar11 - fVar15) * fVar4 + fVar30 * fVar40;
          pfVar38[7] = (fVar12 - fVar16) * fVar4 + fVar31 * fVar40;
          pfVar36 = pfVar36 + 0x10;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_6 == 0) {
      memcpy(&(auVar35), &(*param_4), sizeof(*param_4) < sizeof(auVar35) ? sizeof(*param_4) : sizeof(auVar35));
      fVar4 = *((float *)GEN_TOP(param_4[1]));
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = ((float *)GEN_TOP((param_1 + 0x30)));
        pfVar37 = param_3 + 8;
        fVar41 = *(float *)&REFG(undefined, 0x1138af0) - *((float *)GEN_TOP(*param_4));
        fVar43 = *(float *)&REFG(undefined, 0x1138af4) - *((float *)GEN_TOP((*param_4 + 4)));
        fVar45 = *(float *)&REFG(undefined, 0x1138af8) - *((float *)GEN_TOP((*param_4 + 8)));
        fVar40 = *(float *)&REFG(undefined, 0x1138afc) - fVar4;
        pfVar36 = param_2;
        do {
          fVar42 = pfVar36[1];
          fVar44 = pfVar36[2];
          fVar46 = pfVar36[3];
          fVar5 = pfVar36[4];
          fVar6 = pfVar36[5];
          fVar7 = pfVar36[6];
          fVar8 = pfVar36[7];
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP((((int)param_2 - (int)param_3) + (int)pfVar37)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_2 - (int)param_3) + (int)pfVar37)))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_2 - (int)param_3) + (int)pfVar37)))) : sizeof(auVar3));
          pfVar2 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))));
          fVar9 = *pfVar2;
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          fVar13 = pfVar37[-7];
          fVar14 = pfVar37[-6];
          fVar15 = pfVar37[-5];
          fVar16 = pfVar37[-4];
          fVar17 = pfVar37[-3];
          fVar18 = pfVar37[-2];
          fVar19 = pfVar37[-1];
          fVar24 = *pfVar37;
          fVar25 = pfVar37[1];
          fVar20 = pfVar37[4];
          fVar21 = pfVar37[5];
          fVar22 = pfVar37[6];
          fVar23 = pfVar37[7];
          local_30 = (*(float *)((char *)&auVar35 + 0));
          fStack_2c = (*(float *)((char *)&auVar35 + 4));
          fStack_28 = (*(float *)((char *)&auVar35 + 8));
          local_70 = (*(float *)((char *)&auVar3 + 8));
          fStack_6c = (*(float *)((char *)&auVar3 + 12));
          fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar37 + 2) >> 0x20));
          local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar37 + 2));
          pfVar38[-0xc] = pfVar37[-8] * local_30 + *pfVar36 * fVar41;
          pfVar38[-0xb] = fVar13 * local_30 + fVar42 * fVar41;
          pfVar38[-10] = fVar14 * local_30 + fVar44 * fVar41;
          pfVar38[-9] = fVar15 * local_30 + fVar46 * fVar41;
          pfVar38[-8] = fVar16 * fStack_2c + fVar5 * fVar43;
          pfVar38[-7] = fVar17 * fStack_2c + fVar6 * fVar43;
          pfVar38[-6] = fVar18 * fStack_2c + fVar7 * fVar43;
          pfVar38[-5] = fVar19 * fStack_2c + fVar8 * fVar43;
          pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar37)));
          *pfVar2 = fVar24 * fStack_28 + (*(float *)((char *)&auVar3 + 0)) * fVar45;
          pfVar2[1] = fVar25 * fStack_28 + (*(float *)((char *)&auVar3 + 4)) * fVar45;
          pfVar2[2] = local_40 * fStack_28 + local_70 * fVar45;
          pfVar2[3] = fStack_3c * fStack_28 + fStack_6c * fVar45;
          *pfVar38 = fVar20 * fVar4 + fVar9 * fVar40;
          pfVar38[1] = fVar21 * fVar4 + fVar10 * fVar40;
          pfVar38[2] = fVar22 * fVar4 + fVar11 * fVar40;
          pfVar38[3] = fVar23 * fVar4 + fVar12 * fVar40;
          pfVar36 = pfVar36 + 0x10;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar4 = *((float *)GEN_TOP(*param_4));
      fVar41 = *((float *)GEN_TOP((*param_4 + 4)));
      fVar43 = *((float *)GEN_TOP((*param_4 + 8)));
      fVar45 = *((float *)GEN_TOP(param_4[1]));
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = ((float *)GEN_TOP((param_1 + 0x20)));
        fVar40 = *(float *)&REFG(undefined, 0x1138af0) - fVar4;
        fVar42 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar43;
        fVar46 = *(float *)&REFG(undefined, 0x1138afc) - fVar45;
        pfVar36 = param_2 + 0xc;
        pfVar37 = param_3;
        do {
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) : sizeof(auVar3));
          pfVar2 = pfVar36 - 0xc;
          fVar5 = pfVar36[-0xb];
          fVar6 = pfVar36[-10];
          fVar7 = pfVar36[-9];
          fVar8 = pfVar36[-8];
          fVar9 = pfVar36[-7];
          fVar10 = pfVar36[-6];
          fVar11 = pfVar36[-5];
          fVar12 = *pfVar36;
          fVar13 = pfVar36[1];
          fVar14 = pfVar36[2];
          fVar15 = pfVar36[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar36 + ((int)param_3 - (int)param_2))));
          fVar16 = *pfVar1;
          fVar17 = pfVar1[1];
          fVar18 = pfVar1[2];
          fVar19 = pfVar1[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar36 + ((int)param_3 - (int)param_2) - 0x20)));
          fVar20 = *pfVar1;
          fVar21 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar23 = pfVar1[3];
          fVar24 = *pfVar36;
          fVar25 = pfVar36[1];
          fVar26 = pfVar36[2];
          fVar27 = pfVar36[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar28 = *pfVar1;
          fVar29 = pfVar1[1];
          fVar30 = pfVar1[2];
          fVar31 = pfVar1[3];
          fVar32 = pfVar37[1];
          fVar33 = pfVar37[2];
          fVar34 = pfVar37[3];
          pfVar36 = pfVar36 + 0x10;
          pfVar38[-8] = *pfVar2 * fVar40 + (*pfVar2 + *pfVar37) * fVar4;
          pfVar38[-7] = fVar5 * fVar40 + (fVar5 + fVar32) * fVar4;
          pfVar38[-6] = fVar6 * fVar40 + (fVar6 + fVar33) * fVar4;
          pfVar38[-5] = fVar7 * fVar40 + (fVar7 + fVar34) * fVar4;
          pfVar38[-4] = fVar8 * fVar42 + (fVar20 + fVar8) * fVar41;
          pfVar38[-3] = fVar9 * fVar42 + (fVar21 + fVar9) * fVar41;
          pfVar38[-2] = fVar10 * fVar42 + (fVar22 + fVar10) * fVar41;
          pfVar38[-1] = fVar11 * fVar42 + (fVar23 + fVar11) * fVar41;
          *pfVar38 = (*(float *)((char *)&auVar3 + 0)) * fVar44 + (fVar28 + (*(float *)((char *)&auVar3 + 0))) * fVar43;
          pfVar38[1] = (*(float *)((char *)&auVar3 + 4)) * fVar44 + (fVar29 + (*(float *)((char *)&auVar3 + 4))) * fVar43;
          pfVar38[2] = (*(float *)((char *)&auVar3 + 8)) * fVar44 + (fVar30 + (*(float *)((char *)&auVar3 + 8))) * fVar43;
          pfVar38[3] = (*(float *)((char *)&auVar3 + 12)) * fVar44 + (fVar31 + (*(float *)((char *)&auVar3 + 12))) * fVar43;
          pfVar38[4] = fVar24 * fVar46 + (fVar12 + fVar16) * fVar45;
          pfVar38[5] = fVar25 * fVar46 + (fVar13 + fVar17) * fVar45;
          pfVar38[6] = fVar26 * fVar46 + (fVar14 + fVar18) * fVar45;
          pfVar38[7] = fVar27 * fVar46 + (fVar15 + fVar19) * fVar45;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  else if (param_7 == 1) {
    if (param_6 == -1) {
      memcpy(&(auVar35), &(*param_4), sizeof(*param_4) < sizeof(auVar35) ? sizeof(*param_4) : sizeof(auVar35));
      fVar4 = *((float *)GEN_TOP(param_4[1]));
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = ((float *)GEN_TOP((param_1 + 0x20)));
        fVar41 = *(float *)&REFG(undefined, 0x1138af0) - *((float *)GEN_TOP(*param_4));
        fVar43 = *(float *)&REFG(undefined, 0x1138af4) - *((float *)GEN_TOP((*param_4 + 4)));
        fVar45 = *(float *)&REFG(undefined, 0x1138af8) - *((float *)GEN_TOP((*param_4 + 8)));
        fVar40 = *(float *)&REFG(undefined, 0x1138afc) - fVar4;
        pfVar36 = param_2 + 0xc;
        pfVar37 = param_3;
        do {
          fVar42 = pfVar36[-0xb];
          fVar44 = pfVar36[-10];
          fVar46 = pfVar36[-9];
          fVar5 = pfVar36[-8];
          fVar6 = pfVar36[-7];
          fVar7 = pfVar36[-6];
          fVar8 = pfVar36[-5];
          fVar9 = *pfVar36;
          fVar10 = pfVar36[1];
          fVar11 = pfVar36[2];
          fVar12 = pfVar36[3];
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + (int)pfVar36)));
          fVar13 = *pfVar2;
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) : sizeof(auVar3));
          fVar17 = pfVar37[1];
          fVar18 = pfVar37[2];
          fVar19 = pfVar37[3];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar20 = *pfVar2;
          fVar21 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar23 = pfVar2[3];
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) - 0x20 + (int)pfVar36)));
          fVar24 = *pfVar2;
          fVar25 = pfVar2[1];
          fVar26 = pfVar2[2];
          fVar27 = pfVar2[3];
          fVar28 = *pfVar36;
          fVar29 = pfVar36[1];
          fVar30 = pfVar36[2];
          fVar31 = pfVar36[3];
          local_40 = (*(float *)((char *)&auVar35 + 0));
          fStack_3c = (*(float *)((char *)&auVar35 + 4));
          fStack_38 = (*(float *)((char *)&auVar35 + 8));
          pfVar38[-8] = (pfVar36[-0xc] - *pfVar37) * local_40 + pfVar36[-0xc] * fVar41;
          pfVar38[-7] = (fVar42 - fVar17) * local_40 + fVar42 * fVar41;
          pfVar38[-6] = (fVar44 - fVar18) * local_40 + fVar44 * fVar41;
          pfVar38[-5] = (fVar46 - fVar19) * local_40 + fVar46 * fVar41;
          pfVar38[-4] = (fVar5 - fVar24) * fStack_3c + fVar5 * fVar43;
          pfVar38[-3] = (fVar6 - fVar25) * fStack_3c + fVar6 * fVar43;
          pfVar38[-2] = (fVar7 - fVar26) * fStack_3c + fVar7 * fVar43;
          pfVar38[-1] = (fVar8 - fVar27) * fStack_3c + fVar8 * fVar43;
          *pfVar38 = ((*(float *)((char *)&auVar3 + 0)) - fVar20) * fStack_38 + (*(float *)((char *)&auVar3 + 0)) * fVar45;
          pfVar38[1] = ((*(float *)((char *)&auVar3 + 4)) - fVar21) * fStack_38 + (*(float *)((char *)&auVar3 + 4)) * fVar45;
          pfVar38[2] = ((*(float *)((char *)&auVar3 + 8)) - fVar22) * fStack_38 + (*(float *)((char *)&auVar3 + 8)) * fVar45;
          pfVar38[3] = ((*(float *)((char *)&auVar3 + 12)) - fVar23) * fStack_38 + (*(float *)((char *)&auVar3 + 12)) * fVar45;
          pfVar38[4] = (fVar9 - fVar13) * fVar4 + fVar28 * fVar40;
          pfVar38[5] = (fVar10 - fVar14) * fVar4 + fVar29 * fVar40;
          pfVar38[6] = (fVar11 - fVar15) * fVar4 + fVar30 * fVar40;
          pfVar38[7] = (fVar12 - fVar16) * fVar4 + fVar31 * fVar40;
          pfVar36 = pfVar36 + 0x10;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    else if (param_6 == 0) {
      fVar4 = *((float *)GEN_TOP(*param_4));
      fVar41 = *((float *)GEN_TOP((*param_4 + 4)));
      fVar43 = *((float *)GEN_TOP((*param_4 + 8)));
      fVar45 = *((float *)GEN_TOP(param_4[1]));
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = ((float *)GEN_TOP((param_1 + 0x30)));
        pauVar39 = (gen_v16 *)(param_2 + 8);
        fVar40 = *(float *)&REFG(undefined, 0x1138af0) - fVar4;
        fVar42 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar43;
        fVar46 = *(float *)&REFG(undefined, 0x1138afc) - fVar45;
        pfVar37 = param_3;
        do {
          pfVar36 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar25 = *pfVar36;
          fVar26 = pfVar36[1];
          fVar27 = pfVar36[2];
          fVar28 = pfVar36[3];
          fVar5 = *((float *)GEN_TOP((pauVar39[-2] + 4)));
          fVar6 = *((float *)GEN_TOP((pauVar39[-2] + 8)));
          fVar7 = *((float *)GEN_TOP((pauVar39[-2] + 0xc)));
          fVar8 = *((float *)GEN_TOP(pauVar39[-1]));
          fVar9 = *((float *)GEN_TOP((pauVar39[-1] + 4)));
          fVar10 = *((float *)GEN_TOP((pauVar39[-1] + 8)));
          fVar11 = *((float *)GEN_TOP((pauVar39[-1] + 0xc)));
          memcpy(&(auVar3), &(*pauVar39), sizeof(*pauVar39) < sizeof(auVar3) ? sizeof(*pauVar39) : sizeof(auVar3));
          fVar12 = *((float *)GEN_TOP(pauVar39[1]));
          fVar13 = *((float *)GEN_TOP((pauVar39[1] + 4)));
          fVar14 = *((float *)GEN_TOP((pauVar39[1] + 8)));
          fVar15 = *((float *)GEN_TOP((pauVar39[1] + 0xc)));
          fVar16 = pfVar37[1];
          fVar17 = pfVar37[2];
          fVar18 = pfVar37[3];
          fVar19 = pfVar37[4];
          fVar20 = pfVar37[5];
          fVar21 = pfVar37[6];
          fVar22 = pfVar37[7];
          pfVar36 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + (int)pauVar39)));
          fVar23 = *pfVar36;
          fVar24 = pfVar36[1];
          local_70 = gen_bits2f((uint)*(undefined8 *)(pfVar36 + 2));
          fStack_6c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar36 + 2) >> 0x20));
          fStack_3c = (*(float *)((char *)&auVar3 + 12));
          local_40 = (*(float *)((char *)&auVar3 + 8));
          pfVar38[-0xc] = *((float *)GEN_TOP(pauVar39[-2])) * fVar40 + *pfVar37 * fVar4;
          pfVar38[-0xb] = fVar5 * fVar40 + fVar16 * fVar4;
          pfVar38[-10] = fVar6 * fVar40 + fVar17 * fVar4;
          pfVar38[-9] = fVar7 * fVar40 + fVar18 * fVar4;
          pfVar38[-8] = fVar8 * fVar42 + fVar19 * fVar41;
          pfVar38[-7] = fVar9 * fVar42 + fVar20 * fVar41;
          pfVar38[-6] = fVar10 * fVar42 + fVar21 * fVar41;
          pfVar38[-5] = fVar11 * fVar42 + fVar22 * fVar41;
          pfVar36 = ((float *)GEN_TOP(((int)pauVar39 + (param_1 - (int)param_2))));
          *pfVar36 = (*(float *)((char *)&auVar3 + 0)) * fVar44 + fVar23 * fVar43;
          pfVar36[1] = (*(float *)((char *)&auVar3 + 4)) * fVar44 + fVar24 * fVar43;
          pfVar36[2] = local_40 * fVar44 + local_70 * fVar43;
          pfVar36[3] = fStack_3c * fVar44 + fStack_6c * fVar43;
          *pfVar38 = fVar12 * fVar46 + fVar25 * fVar45;
          pfVar38[1] = fVar13 * fVar46 + fVar26 * fVar45;
          pfVar38[2] = fVar14 * fVar46 + fVar27 * fVar45;
          pfVar38[3] = fVar15 * fVar46 + fVar28 * fVar45;
          pfVar37 = pfVar37 + 0x10;
          pauVar39 = pauVar39 + 4;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar4 = *((float *)GEN_TOP(*param_4));
      fVar41 = *((float *)GEN_TOP((*param_4 + 4)));
      fVar43 = *((float *)GEN_TOP((*param_4 + 8)));
      fVar45 = *((float *)GEN_TOP(param_4[1]));
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = ((float *)GEN_TOP((param_1 + 0x20)));
        fVar40 = *(float *)&REFG(undefined, 0x1138af0) - fVar4;
        fVar42 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar43;
        fVar46 = *(float *)&REFG(undefined, 0x1138afc) - fVar45;
        pfVar36 = param_2 + 0xc;
        pfVar37 = param_3;
        do {
          fVar5 = *pfVar36;
          fVar6 = pfVar36[1];
          fVar7 = pfVar36[2];
          fVar8 = pfVar36[3];
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) : sizeof(auVar3));
          pfVar2 = pfVar36 - 0xc;
          fVar9 = pfVar36[-0xb];
          fVar10 = pfVar36[-10];
          fVar11 = pfVar36[-9];
          fVar12 = pfVar36[-8];
          fVar13 = pfVar36[-7];
          fVar14 = pfVar36[-6];
          fVar15 = pfVar36[-5];
          pfVar1 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + (int)pfVar36)));
          fVar16 = *pfVar1;
          fVar17 = pfVar1[1];
          fVar18 = pfVar1[2];
          fVar19 = pfVar1[3];
          pfVar1 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) - 0x20 + (int)pfVar36)));
          fVar20 = *pfVar1;
          fVar21 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar23 = pfVar1[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar24 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar26 = pfVar1[2];
          fVar27 = pfVar1[3];
          fVar28 = pfVar37[1];
          fVar29 = pfVar37[2];
          fVar30 = pfVar37[3];
          pfVar36 = pfVar36 + 0x10;
          pfVar38[-8] = *pfVar2 * fVar40 + (*pfVar2 + *pfVar37) * fVar4;
          pfVar38[-7] = fVar9 * fVar40 + (fVar9 + fVar28) * fVar4;
          pfVar38[-6] = fVar10 * fVar40 + (fVar10 + fVar29) * fVar4;
          pfVar38[-5] = fVar11 * fVar40 + (fVar11 + fVar30) * fVar4;
          pfVar38[-4] = fVar12 * fVar42 + (fVar20 + fVar12) * fVar41;
          pfVar38[-3] = fVar13 * fVar42 + (fVar21 + fVar13) * fVar41;
          pfVar38[-2] = fVar14 * fVar42 + (fVar22 + fVar14) * fVar41;
          pfVar38[-1] = fVar15 * fVar42 + (fVar23 + fVar15) * fVar41;
          *pfVar38 = (*(float *)((char *)&auVar3 + 0)) * fVar44 + (fVar24 + (*(float *)((char *)&auVar3 + 0))) * fVar43;
          pfVar38[1] = (*(float *)((char *)&auVar3 + 4)) * fVar44 + (fVar25 + (*(float *)((char *)&auVar3 + 4))) * fVar43;
          pfVar38[2] = (*(float *)((char *)&auVar3 + 8)) * fVar44 + (fVar26 + (*(float *)((char *)&auVar3 + 8))) * fVar43;
          pfVar38[3] = (*(float *)((char *)&auVar3 + 12)) * fVar44 + (fVar27 + (*(float *)((char *)&auVar3 + 12))) * fVar43;
          pfVar38[4] = fVar5 * fVar46 + (fVar16 + fVar5) * fVar45;
          pfVar38[5] = fVar6 * fVar46 + (fVar17 + fVar6) * fVar45;
          pfVar38[6] = fVar7 * fVar46 + (fVar18 + fVar7) * fVar45;
          pfVar38[7] = fVar8 * fVar46 + (fVar19 + fVar8) * fVar45;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d53070 */
GEN_LIB GEN_NOFRAME unsigned int F_00d53070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(gen_v16 * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(gen_v16 * param_6, unsigned int gen_a5), GEN_P(gen_v16 * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xd53070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(gen_v16 * param_4 = (gen_v16 *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(gen_v16 * param_6 = (gen_v16 *)(uintptr_t)gen_a5;)
  GEN_PIN(gen_v16 * param_7 = (gen_v16 *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  uint * puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  gen_v16 * pauVar24;
  float * pfVar25;
  undefined4 * puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  uint uVar36;
  float fVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float fVar50;
  float fVar51;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar58;
  float fVar59;
  float fVar61;
  float fVar62;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar60 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  uint local_14;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    F_00d4d080(param_1,param_3,param_5,param_7,param_8,param_9,param_10);
    return;
  }
  if (param_10 == 0) {
    if (param_9 == -1) {
      fVar11 = *((float *)GEN_TOP(*param_7));
      fVar64 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar66 = *((float *)GEN_TOP((*param_7 + 8)));
      fVar67 = *((float *)GEN_TOP((*param_7 + 0xc)));
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        pauVar24 = param_4;
        puVar26 = param_2;
        for (iVar23 = (local_14 & 0xfffffff) * 4; iVar23 != 0; iVar23 = iVar23 - 1) {
          *puVar26 = *((undefined4 *)GEN_TOP(*pauVar24));
          pauVar24 = ((gen_v16 *)GEN_TOP((*pauVar24 + 4)));
          puVar26 = puVar26 + 1;
        }
        pfVar25 = param_3;
        do {
          fVar65 = *pfVar25;
          fVar35 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar39 = pfVar25[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar25 + ((int)param_6 - (int)param_3))));
          fVar41 = pfVar1[1];
          fVar43 = pfVar1[2];
          fVar44 = pfVar1[3];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar25 + (param_5 - (int)param_6) + ((int)param_6 - (int)param_3)
                            )));
          fVar45 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar25 + (param_1 - (int)param_3))));
          *pfVar3 = ((fVar65 - *pfVar2) - fVar65) * (*pfVar1 * fVar11) + fVar65;
          pfVar3[1] = ((fVar35 - fVar45) - fVar35) * (fVar41 * fVar64) + fVar35;
          pfVar3[2] = ((fVar37 - fVar5) - fVar37) * (fVar43 * fVar66) + fVar37;
          pfVar3[3] = ((fVar39 - fVar6) - fVar39) * (fVar44 * fVar67) + fVar39;
          pfVar25 = pfVar25 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return;
      }
    }
    else if (param_9 == 0) {
      memcpy(&(auVar60), &(*param_7), sizeof(*param_7) < sizeof(auVar60) ? sizeof(*param_7) : sizeof(auVar60));
      fVar11 = (*(float *)((char *)&auVar60 + 12));
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        fVar43 = (*(float *)((char *)&auVar60 + 0));
        fVar35 = *(float *)&REFG(undefined, 0x1138af0) - fVar43;
        fVar44 = (*(float *)((char *)&auVar60 + 4));
        fVar37 = *(float *)&REFG(undefined, 0x1138af4) - fVar44;
        fVar45 = (*(float *)((char *)&auVar60 + 8));
        fVar39 = *(float *)&REFG(undefined, 0x1138af8) - fVar45;
        fVar41 = *(float *)&REFG(undefined, 0x1138afc) - fVar11;
        pauVar24 = param_6;
        fVar64 = *(float *)&REFG(undefined, 0x1138af0);
        fVar66 = *(float *)&REFG(undefined, 0x1138af4);
        fVar67 = *(float *)&REFG(undefined, 0x1138af8);
        fVar65 = *(float *)&REFG(undefined, 0x1138afc);
        do {
          fVar22 = *(float *)&REFG(undefined, 0x1138afc);
          fVar21 = *(float *)&REFG(undefined, 0x1138af8);
          fVar20 = *(float *)&REFG(undefined, 0x1138af4);
          fVar19 = *(float *)&REFG(undefined, 0x1138af0);
          memcpy(&(auVar53), &(*pauVar24), sizeof(*pauVar24) < sizeof(auVar53) ? sizeof(*pauVar24) : sizeof(auVar53));
          fVar5 = (*(float *)((char *)&auVar53 + 0));
          fVar7 = (*(float *)((char *)&auVar53 + 4));
          fVar9 = (*(float *)((char *)&auVar53 + 8));
          fVar12 = (*(float *)((char *)&auVar53 + 12));
          memcpy(&(auVar52), &(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar24)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar24)))) < sizeof(auVar52) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar24)))) : sizeof(auVar52));
          fVar6 = (*(float *)((char *)&auVar52 + 0));
          fVar8 = (*(float *)((char *)&auVar52 + 4));
          fVar10 = (*(float *)((char *)&auVar52 + 8));
          fVar13 = (*(float *)((char *)&auVar52 + 12));
          gen_rcpps(&(auVar52), &(auVar60), &(auVar52));
          gen_rcpps(&(auVar53), &(auVar52), &(auVar53));
          fVar50 = gen_bits2f(~-(uint)(fVar5 < fVar6) &
                              (uint)gen_fl2bits(fVar64 - ((*(float *)&REFG(undefined, 0x1136ea0) -
                                                          fVar5 * (*(float *)((char *)&auVar53 + 0))) * (*(float *)((char *)&auVar53 + 0)))
                                                         * (fVar6 * fVar35)) |
                              -(uint)(fVar5 < fVar6) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - fVar6 * (*(float *)((char *)&auVar52 + 0)))
                                                * (*(float *)((char *)&auVar52 + 0))) * (fVar5 * fVar43)));
          fVar54 = gen_bits2f(~-(uint)(fVar7 < fVar8) &
                              (uint)gen_fl2bits(fVar66 - ((*(float *)&REFG(undefined, 0x1136ea4) -
                                                          fVar7 * (*(float *)((char *)&auVar53 + 4))) * (*(float *)((char *)&auVar53 + 4)))
                                                         * (fVar8 * fVar37)) |
                              -(uint)(fVar7 < fVar8) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - fVar8 * (*(float *)((char *)&auVar52 + 4)))
                                                * (*(float *)((char *)&auVar52 + 4))) * (fVar7 * fVar44)));
          fVar56 = gen_bits2f(~-(uint)(fVar9 < fVar10) &
                              (uint)gen_fl2bits(fVar67 - ((*(float *)&REFG(undefined, 0x1136ea8) -
                                                          fVar9 * (*(float *)((char *)&auVar53 + 8))) * (*(float *)((char *)&auVar53 + 8)))
                                                         * (fVar10 * fVar39)) |
                              -(uint)(fVar9 < fVar10) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - fVar10 * (*(float *)((char *)&auVar52 + 8)))
                                                * (*(float *)((char *)&auVar52 + 8))) * (fVar9 * fVar45)));
          fVar58 = gen_bits2f(~-(uint)(fVar12 < fVar13) &
                              (uint)gen_fl2bits(fVar65 - ((*(float *)&REFG(undefined, 0x1136eac) -
                                                          fVar12 * (*(float *)((char *)&auVar53 + 12))) *
                                                         (*(float *)((char *)&auVar53 + 12))) * (fVar13 * fVar41)) |
                              -(uint)(fVar12 < fVar13) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - fVar13 * (*(float *)((char *)&auVar52 + 12))
                                                 ) * (*(float *)((char *)&auVar52 + 12))) * (fVar12 * fVar11)));
          uVar27 = -(uint)(fVar5 <= (float)REFG(undefined8, 0x1138ae0));
          uVar29 = -(uint)(fVar7 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar31 = -(uint)(fVar9 <= (float)REFG(undefined8, 0x1138ae8));
          uVar33 = -(uint)(fVar12 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar28 = -(uint)(fVar6 <= (float)REFG(undefined8, 0x1138ae0));
          uVar30 = -(uint)(fVar8 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar32 = -(uint)(fVar10 <= (float)REFG(undefined8, 0x1138ae8));
          uVar34 = -(uint)(fVar13 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar36 = uVar27 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0));
          uVar38 = uVar29 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar40 = uVar31 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8));
          uVar42 = uVar33 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar46 = uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0));
          uVar47 = uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4));
          uVar48 = uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8));
          uVar49 = uVar34 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc));
          pfVar25 = ((float *)GEN_TOP(((int)pauVar24 + (param_5 - (int)param_6))));
          fVar14 = *pfVar25;
          fVar51 = pfVar25[1];
          fVar55 = pfVar25[2];
          fVar57 = pfVar25[3];
          pfVar25 = ((float *)GEN_TOP((((int)param_3 - (int)param_6) + (int)pauVar24)));
          fVar59 = *pfVar25;
          fVar61 = pfVar25[1];
          fVar62 = pfVar25[2];
          fVar63 = pfVar25[3];
          pfVar25 = ((float *)GEN_TOP((((int)param_3 - (int)param_6) + (int)pauVar24)));
          fVar15 = *pfVar25;
          fVar16 = pfVar25[1];
          fVar17 = pfVar25[2];
          fVar18 = pfVar25[3];
          puVar4 = ((uint *)GEN_TOP((((int)param_2 - (int)param_6) + (int)pauVar24)));
          *puVar4 = ~uVar27 & (~uVar28 & (uint)gen_fl2bits((fVar64 - fVar50) * fVar6 +
                                                           fVar5 * fVar50) |
                              (uint)gen_fl2bits(fVar5) & uVar28) | (uint)gen_fl2bits(fVar6) & uVar27
          ;
          puVar4[1] = ~uVar29 & (~uVar30 & (uint)gen_fl2bits((fVar66 - fVar54) * fVar8 +
                                                             fVar7 * fVar54) |
                                (uint)gen_fl2bits(fVar7) & uVar30) |
                      (uint)gen_fl2bits(fVar8) & uVar29;
          puVar4[2] = ~uVar31 & (~uVar32 & (uint)gen_fl2bits((fVar67 - fVar56) * fVar10 +
                                                             fVar9 * fVar56) |
                                (uint)gen_fl2bits(fVar9) & uVar32) |
                      (uint)gen_fl2bits(fVar10) & uVar31;
          puVar4[3] = ~uVar33 & (~uVar34 & (uint)gen_fl2bits((fVar65 - fVar58) * fVar13 +
                                                             fVar12 * fVar58) |
                                (uint)gen_fl2bits(fVar12) & uVar34) |
                      (uint)gen_fl2bits(fVar13) & uVar33;
          pfVar25 = ((float *)GEN_TOP(((param_1 - (int)param_6) + (int)pauVar24)));
          *pfVar25 = gen_bits2f(~(uVar27 & uVar28) &
                                (~uVar27 & (~uVar28 & (uint)gen_fl2bits(fVar50) | uVar46) | uVar36)
                                | uVar27 & uVar28 & (uint)gen_fl2bits(fVar43)) * (fVar14 - fVar59) +
                     fVar15;
          pfVar25[1] = gen_bits2f(~(uVar29 & uVar30) &
                                  (~uVar29 & (~uVar30 & (uint)gen_fl2bits(fVar54) | uVar47) | uVar38
                                  ) | uVar29 & uVar30 & (uint)gen_fl2bits(fVar44)) *
                       (fVar51 - fVar61) + fVar16;
          pfVar25[2] = gen_bits2f(~(uVar31 & uVar32) &
                                  (~uVar31 & (~uVar32 & (uint)gen_fl2bits(fVar56) | uVar48) | uVar40
                                  ) | uVar31 & uVar32 & (uint)gen_fl2bits(fVar45)) *
                       (fVar55 - fVar62) + fVar17;
          pfVar25[3] = gen_bits2f(~(uVar33 & uVar34) &
                                  (~uVar33 & (~uVar34 & (uint)gen_fl2bits(fVar58) | uVar49) | uVar42
                                  ) | uVar33 & uVar34 & (uint)gen_fl2bits(fVar11)) *
                       (fVar57 - fVar63) + fVar18;
          pauVar24 = pauVar24 + 1;
          local_14 = local_14 - 1;
          fVar64 = fVar19;
          fVar66 = fVar20;
          fVar67 = fVar21;
          fVar65 = fVar22;
        } while (local_14 != 0);
        return;
      }
    }
    else if (param_9 == 1) {
      fVar11 = *((float *)GEN_TOP(*param_7));
      fVar64 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar66 = *((float *)GEN_TOP((*param_7 + 8)));
      fVar67 = *((float *)GEN_TOP((*param_7 + 0xc)));
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        pauVar24 = param_4;
        puVar26 = param_2;
        for (iVar23 = (local_14 & 0xfffffff) * 4; iVar23 != 0; iVar23 = iVar23 - 1) {
          *puVar26 = *((undefined4 *)GEN_TOP(*pauVar24));
          pauVar24 = ((gen_v16 *)GEN_TOP((*pauVar24 + 4)));
          puVar26 = puVar26 + 1;
        }
        pfVar25 = param_3;
        do {
          fVar65 = *pfVar25;
          fVar35 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar39 = pfVar25[3];
          pfVar1 = ((float *)GEN_TOP((((int)param_6 - (int)param_3) + (int)pfVar25)));
          pfVar2 = ((float *)GEN_TOP(((int)pfVar1 + (param_5 - (int)param_6))));
          fVar41 = pfVar2[1];
          fVar43 = pfVar2[2];
          fVar44 = pfVar2[3];
          fVar45 = pfVar1[1];
          fVar5 = pfVar1[2];
          fVar6 = pfVar1[3];
          pfVar3 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar25)));
          *pfVar3 = ((*pfVar2 + fVar65) - fVar65) * (fVar11 * *pfVar1) + fVar65;
          pfVar3[1] = ((fVar41 + fVar35) - fVar35) * (fVar64 * fVar45) + fVar35;
          pfVar3[2] = ((fVar43 + fVar37) - fVar37) * (fVar66 * fVar5) + fVar37;
          pfVar3[3] = ((fVar44 + fVar39) - fVar39) * (fVar67 * fVar6) + fVar39;
          pfVar25 = pfVar25 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return;
      }
    }
  }
  else if (param_10 == 1) {
    if (param_9 == -1) {
      fVar11 = *((float *)GEN_TOP(*param_7));
      fVar64 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar66 = *((float *)GEN_TOP((*param_7 + 8)));
      fVar67 = *((float *)GEN_TOP((*param_7 + 0xc)));
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        pauVar24 = param_4;
        puVar26 = param_2;
        for (iVar23 = (local_14 & 0xfffffff) * 4; iVar23 != 0; iVar23 = iVar23 - 1) {
          *puVar26 = *((undefined4 *)GEN_TOP(*pauVar24));
          pauVar24 = ((gen_v16 *)GEN_TOP((*pauVar24 + 4)));
          puVar26 = puVar26 + 1;
        }
        pfVar25 = param_3;
        do {
          fVar65 = *pfVar25;
          fVar35 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar39 = pfVar25[3];
          pfVar1 = ((float *)GEN_TOP((((int)param_6 - (int)param_3) + (int)pfVar25)));
          fVar41 = pfVar1[1];
          fVar43 = pfVar1[2];
          fVar44 = pfVar1[3];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar25 + (param_5 - (int)param_6) + ((int)param_6 - (int)param_3)
                            )));
          fVar45 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
          pfVar3 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar25)));
          *pfVar3 = ((fVar65 - *pfVar2) - fVar65) * (*pfVar1 * fVar11) + fVar65;
          pfVar3[1] = ((fVar35 - fVar45) - fVar35) * (fVar41 * fVar64) + fVar35;
          pfVar3[2] = ((fVar37 - fVar5) - fVar37) * (fVar43 * fVar66) + fVar37;
          pfVar3[3] = ((fVar39 - fVar6) - fVar39) * (fVar44 * fVar67) + fVar39;
          pfVar25 = pfVar25 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    else if (param_9 == 0) {
      fVar11 = *((float *)GEN_TOP(*param_7));
      fVar64 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar66 = *((float *)GEN_TOP((*param_7 + 8)));
      fVar67 = *((float *)GEN_TOP((*param_7 + 0xc)));
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        fVar41 = *(float *)&REFG(undefined, 0x1138af0) - fVar11;
        fVar43 = *(float *)&REFG(undefined, 0x1138af4) - fVar64;
        fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar66;
        fVar45 = *(float *)&REFG(undefined, 0x1138afc) - fVar67;
        pauVar24 = param_4;
        fVar65 = *(float *)&REFG(undefined, 0x1138af0);
        fVar35 = *(float *)&REFG(undefined, 0x1138af4);
        fVar37 = *(float *)&REFG(undefined, 0x1138af8);
        fVar39 = *(float *)&REFG(undefined, 0x1138afc);
        do {
          fVar14 = *(float *)&REFG(undefined, 0x1138afc);
          fVar13 = *(float *)&REFG(undefined, 0x1138af8);
          fVar12 = *(float *)&REFG(undefined, 0x1138af4);
          fVar10 = *(float *)&REFG(undefined, 0x1138af0);
          memcpy(&(auVar60), &(*pauVar24), sizeof(*pauVar24) < sizeof(auVar60) ? sizeof(*pauVar24) : sizeof(auVar60));
          fVar8 = (*(float *)((char *)&auVar60 + 12));
          memcpy(&(auVar53), &(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar24)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar24)))) < sizeof(auVar53) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar24)))) : sizeof(auVar53));
          fVar5 = (*(float *)((char *)&auVar53 + 0));
          fVar6 = (*(float *)((char *)&auVar53 + 4));
          fVar7 = (*(float *)((char *)&auVar53 + 8));
          fVar9 = (*(float *)((char *)&auVar53 + 12));
          gen_rcpps(&(auVar52), &(in_XMM4), &(auVar60));
          fVar51 = (*(float *)((char *)&auVar60 + 0));
          fVar55 = (*(float *)((char *)&auVar60 + 4));
          fVar57 = (*(float *)((char *)&auVar60 + 8));
          gen_rcpps(&(auVar60), &(auVar52), &(auVar53));
          fVar59 = gen_bits2f(~-(uint)(fVar5 < fVar51) &
                              (uint)gen_fl2bits(fVar65 - ((*(float *)&REFG(undefined, 0x1136ea0) -
                                                          (*(float *)((char *)&auVar60 + 0)) * fVar5) * (*(float *)((char *)&auVar60 + 0)))
                                                         * (fVar51 * fVar41)) |
                              -(uint)(fVar5 < fVar51) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar52 + 0)) * fVar51)
                                                * (*(float *)((char *)&auVar52 + 0))) * (fVar11 * fVar5)));
          fVar61 = gen_bits2f(~-(uint)(fVar6 < fVar55) &
                              (uint)gen_fl2bits(fVar35 - ((*(float *)&REFG(undefined, 0x1136ea4) -
                                                          (*(float *)((char *)&auVar60 + 4)) * fVar6) * (*(float *)((char *)&auVar60 + 4)))
                                                         * (fVar55 * fVar43)) |
                              -(uint)(fVar6 < fVar55) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar52 + 4)) * fVar55)
                                                * (*(float *)((char *)&auVar52 + 4))) * (fVar64 * fVar6)));
          fVar62 = gen_bits2f(~-(uint)(fVar7 < fVar57) &
                              (uint)gen_fl2bits(fVar37 - ((*(float *)&REFG(undefined, 0x1136ea8) -
                                                          (*(float *)((char *)&auVar60 + 8)) * fVar7) * (*(float *)((char *)&auVar60 + 8)))
                                                         * (fVar57 * fVar44)) |
                              -(uint)(fVar7 < fVar57) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar52 + 8)) * fVar57)
                                                * (*(float *)((char *)&auVar52 + 8))) * (fVar66 * fVar7)));
          fVar63 = gen_bits2f(~-(uint)(fVar9 < fVar8) &
                              (uint)gen_fl2bits(fVar39 - ((*(float *)&REFG(undefined, 0x1136eac) -
                                                          (*(float *)((char *)&auVar60 + 12)) * fVar9) * (*(float *)((char *)&auVar60 + 12))
                                                         ) * (fVar8 * fVar45)) |
                              -(uint)(fVar9 < fVar8) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar52 + 12)) * fVar8)
                                                * (*(float *)((char *)&auVar52 + 12))) * (fVar67 * fVar9)));
          uVar27 = -(uint)(fVar5 <= (float)REFG(undefined8, 0x1138ae0));
          uVar29 = -(uint)(fVar6 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar31 = -(uint)(fVar7 <= (float)REFG(undefined8, 0x1138ae8));
          uVar33 = -(uint)(fVar9 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar28 = -(uint)(fVar51 <= (float)REFG(undefined8, 0x1138ae0));
          uVar30 = -(uint)(fVar55 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar32 = -(uint)(fVar57 <= (float)REFG(undefined8, 0x1138ae8));
          uVar34 = -(uint)(fVar8 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          puVar4 = ((uint *)GEN_TOP((((int)param_2 - (int)param_4) + (int)pauVar24)));
          *puVar4 = ~uVar27 & (~uVar28 & (uint)gen_fl2bits((fVar65 - fVar59) * fVar51 +
                                                           fVar59 * fVar5) |
                              uVar28 & (uint)gen_fl2bits(fVar5)) |
                    uVar27 & (uint)gen_fl2bits(fVar51);
          puVar4[1] = ~uVar29 & (~uVar30 & (uint)gen_fl2bits((fVar35 - fVar61) * fVar55 +
                                                             fVar61 * fVar6) |
                                uVar30 & (uint)gen_fl2bits(fVar6)) |
                      uVar29 & (uint)gen_fl2bits(fVar55);
          puVar4[2] = ~uVar31 & (~uVar32 & (uint)gen_fl2bits((fVar37 - fVar62) * fVar57 +
                                                             fVar62 * fVar7) |
                                uVar32 & (uint)gen_fl2bits(fVar7)) |
                      uVar31 & (uint)gen_fl2bits(fVar57);
          puVar4[3] = ~uVar33 & (~uVar34 & (uint)gen_fl2bits((fVar39 - fVar63) * fVar8 +
                                                             fVar63 * fVar9) |
                                uVar34 & (uint)gen_fl2bits(fVar9)) |
                      uVar33 & (uint)gen_fl2bits(fVar8);
          pfVar25 = ((float *)GEN_TOP(((param_5 - (int)param_4) + (int)pauVar24)));
          pfVar1 = ((float *)GEN_TOP((((int)param_3 - (int)param_4) + (int)pauVar24)));
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_4) + (int)pauVar24)));
          (*(float *)((char *)&in_XMM4 + 0)) =
               gen_bits2f(~(uVar27 & uVar28) &
                          (~uVar27 & (uVar28 & (uint)gen_fl2bits(fVar10) |
                                     ~uVar28 & (uint)gen_fl2bits(fVar59)) |
                          uVar27 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0))) |
                          uVar27 & uVar28 & (uint)gen_fl2bits(fVar11)) * (*pfVar25 - *pfVar1) +
               *pfVar2;
          (*(float *)((char *)&in_XMM4 + 4)) =
               gen_bits2f(~(uVar29 & uVar30) &
                          (~uVar29 & (uVar30 & (uint)gen_fl2bits(fVar12) |
                                     ~uVar30 & (uint)gen_fl2bits(fVar61)) |
                          uVar29 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)))) |
                          uVar29 & uVar30 & (uint)gen_fl2bits(fVar64)) * (pfVar25[1] - pfVar1[1]) +
               pfVar2[1];
          (*(float *)((char *)&in_XMM4 + 8)) =
               gen_bits2f(~(uVar31 & uVar32) &
                          (~uVar31 & (uVar32 & (uint)gen_fl2bits(fVar13) |
                                     ~uVar32 & (uint)gen_fl2bits(fVar62)) |
                          uVar31 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8))) |
                          uVar31 & uVar32 & (uint)gen_fl2bits(fVar66)) * (pfVar25[2] - pfVar1[2]) +
               pfVar2[2];
          (*(float *)((char *)&in_XMM4 + 12)) =
               gen_bits2f(~(uVar33 & uVar34) &
                          (~uVar33 & (uVar34 & (uint)gen_fl2bits(fVar14) |
                                     ~uVar34 & (uint)gen_fl2bits(fVar63)) |
                          uVar33 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)))) |
                          uVar33 & uVar34 & (uint)gen_fl2bits(fVar67)) * (pfVar25[3] - pfVar1[3]) +
               pfVar2[3];
          memcpy(&(*((gen_v16 *)GEN_TOP(((param_1 - (int)param_4) + (int)pauVar24)))), &(in_XMM4), sizeof(in_XMM4) < sizeof(*((gen_v16 *)GEN_TOP(((param_1 - (int)param_4) + (int)pauVar24)))) ? sizeof(in_XMM4) : sizeof(*((gen_v16 *)GEN_TOP(((param_1 - (int)param_4) + (int)pauVar24)))));
          pauVar24 = pauVar24 + 1;
          local_14 = local_14 - 1;
          fVar65 = fVar10;
          fVar35 = fVar12;
          fVar37 = fVar13;
          fVar39 = fVar14;
        } while (local_14 != 0);
        return;
      }
    }
    else if (param_9 == 1) {
      fVar11 = *((float *)GEN_TOP(*param_7));
      fVar64 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar66 = *((float *)GEN_TOP((*param_7 + 8)));
      fVar67 = *((float *)GEN_TOP((*param_7 + 0xc)));
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        pauVar24 = param_4;
        puVar26 = param_2;
        for (iVar23 = (local_14 & 0xfffffff) * 4; iVar23 != 0; iVar23 = iVar23 - 1) {
          *puVar26 = *((undefined4 *)GEN_TOP(*pauVar24));
          pauVar24 = ((gen_v16 *)GEN_TOP((*pauVar24 + 4)));
          puVar26 = puVar26 + 1;
        }
        pfVar25 = param_3;
        do {
          fVar65 = *pfVar25;
          fVar35 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar39 = pfVar25[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar25 + ((int)param_6 - (int)param_3))));
          pfVar2 = ((float *)GEN_TOP(((param_5 - (int)param_6) + (int)pfVar1)));
          fVar41 = pfVar2[1];
          fVar43 = pfVar2[2];
          fVar44 = pfVar2[3];
          fVar45 = pfVar1[1];
          fVar5 = pfVar1[2];
          fVar6 = pfVar1[3];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar25 + (param_1 - (int)param_3))));
          *pfVar3 = ((*pfVar2 + fVar65) - fVar65) * (fVar11 * *pfVar1) + fVar65;
          pfVar3[1] = ((fVar41 + fVar35) - fVar35) * (fVar64 * fVar45) + fVar35;
          pfVar3[2] = ((fVar43 + fVar37) - fVar37) * (fVar66 * fVar5) + fVar37;
          pfVar3[3] = ((fVar44 + fVar39) - fVar39) * (fVar67 * fVar6) + fVar39;
          pfVar25 = pfVar25 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00d535d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d535d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(gen_v16 * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(gen_v16 * param_6, unsigned int gen_a5), GEN_P(gen_v12 * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xd535d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(gen_v16 * param_4 = (gen_v16 *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(gen_v16 * param_6 = (gen_v16 *)(uintptr_t)gen_a5;)
  GEN_PIN(gen_v12 * param_7 = (gen_v12 *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  uint * puVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  float * pfVar19;
  float * pfVar20;
  int iVar21;
  gen_v16 * pauVar22;
  gen_v16 * pauVar23;
  undefined4 * puVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 in_XMM3 [16] = {0};
  float fVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar54;
  float fVar55;
  float fVar57;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float local_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_a0;
  float fStack_9c;
  float local_80;
  float fStack_7c;
  float local_70;
  float fStack_6c;
  float local_40;
  float fStack_3c;
  float local_30;
  float fStack_2c;
  float fStack_28;
  gen_v16 * local_1c;
  uint local_18;
  gen_v16 * local_14;
  
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    F_00d526c0(param_1,param_3,param_5,param_7,param_8,param_9,param_10);
    return;
  }
  if (param_10 == 0) {
    if (param_9 == -1) {
      fVar40 = *((float *)GEN_TOP(*param_7));
      fVar41 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar42 = *((float *)GEN_TOP((*param_7 + 8)));
      fVar12 = *((float *)GEN_TOP(param_7[1]));
      local_18 = (int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2;
      if (0 < (int)local_18) {
        pauVar22 = param_4;
        puVar24 = param_2;
        for (iVar21 = (local_18 & 0xfffffff) * 4; iVar21 != 0; iVar21 = iVar21 - 1) {
          *puVar24 = *((undefined4 *)GEN_TOP(*pauVar22));
          pauVar22 = ((gen_v16 *)GEN_TOP((*pauVar22 + 4)));
          puVar24 = puVar24 + 1;
        }
        local_14 = (gen_v16 *)param_5;
        local_1c = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar19 = ((float *)GEN_TOP((param_1 + 0x20)));
        do {
          fVar36 = pfVar20[-8];
          fVar37 = pfVar20[-7];
          fVar38 = pfVar20[-6];
          fVar39 = pfVar20[-5];
          fVar53 = fVar40 * *((float *)GEN_TOP(*local_1c));
          fVar58 = fVar41 * *((float *)GEN_TOP((*local_1c + 4)));
          fVar59 = fVar42 * *((float *)GEN_TOP((*local_1c + 8)));
          fVar62 = fVar12 * *((float *)GEN_TOP((*local_1c + 0xc)));
          fVar4 = pfVar20[-0xb];
          fVar5 = pfVar20[-10];
          fVar6 = pfVar20[-9];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) - 0x20 + (int)pfVar20)));
          fVar7 = *pfVar3;
          fVar8 = pfVar3[1];
          fVar9 = pfVar3[2];
          fVar10 = pfVar3[3];
          fVar11 = *pfVar20;
          fVar13 = pfVar20[1];
          fVar14 = pfVar20[2];
          fVar15 = pfVar20[3];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + (int)pfVar20)));
          fVar16 = *pfVar3;
          fVar17 = pfVar3[1];
          fVar44 = pfVar3[2];
          fVar48 = pfVar3[3];
          fVar49 = *((float *)GEN_TOP(((int)local_14 + 4)));
          fVar52 = *((float *)GEN_TOP(((int)local_14 + 8)));
          fVar55 = *((float *)GEN_TOP(((int)local_14 + 0xc)));
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) : sizeof(auVar46));
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar19)));
          fVar57 = *pfVar3;
          fVar51 = pfVar3[1];
          fVar54 = pfVar3[2];
          fVar60 = pfVar3[3];
          fVar63 = *pfVar20;
          fVar43 = pfVar20[1];
          fVar47 = pfVar20[2];
          fVar50 = pfVar20[3];
          fVar65 = *(float *)&REFG(undefined, 0x1138af0) - fVar53;
          fVar61 = *(float *)&REFG(undefined, 0x1138af4) - fVar58;
          fVar64 = *(float *)&REFG(undefined, 0x1138af8) - fVar59;
          fVar66 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          pfVar19[-8] = pfVar20[-0xc] * fVar65 + (pfVar20[-0xc] - *(float *)local_14) * fVar53;
          pfVar19[-7] = fVar4 * fVar65 + (fVar4 - fVar49) * fVar53;
          pfVar19[-6] = fVar5 * fVar65 + (fVar5 - fVar52) * fVar53;
          pfVar19[-5] = fVar6 * fVar65 + (fVar6 - fVar55) * fVar53;
          pfVar19[-4] = fVar36 * fVar61 + (fVar36 - fVar7) * fVar58;
          pfVar19[-3] = fVar37 * fVar61 + (fVar37 - fVar8) * fVar58;
          pfVar19[-2] = fVar38 * fVar61 + (fVar38 - fVar9) * fVar58;
          pfVar19[-1] = fVar39 * fVar61 + (fVar39 - fVar10) * fVar58;
          *pfVar19 = (*(float *)((char *)&auVar46 + 0)) * fVar64 + ((*(float *)((char *)&auVar46 + 0)) - fVar57) * fVar59;
          pfVar19[1] = (*(float *)((char *)&auVar46 + 4)) * fVar64 + ((*(float *)((char *)&auVar46 + 4)) - fVar51) * fVar59;
          pfVar19[2] = (*(float *)((char *)&auVar46 + 8)) * fVar64 + ((*(float *)((char *)&auVar46 + 8)) - fVar54) * fVar59;
          pfVar19[3] = (*(float *)((char *)&auVar46 + 12)) * fVar64 + ((*(float *)((char *)&auVar46 + 12)) - fVar60) * fVar59;
          local_14 = ((gen_v16 *)GEN_TOP(((int)local_14 + 0x40)));
          local_1c = local_1c + 1;
          pfVar19[4] = fVar63 * fVar66 + (fVar11 - fVar16) * fVar62;
          pfVar19[5] = fVar43 * fVar66 + (fVar13 - fVar17) * fVar62;
          pfVar19[6] = fVar47 * fVar66 + (fVar14 - fVar44) * fVar62;
          pfVar19[7] = fVar50 * fVar66 + (fVar15 - fVar48) * fVar62;
          pfVar20 = pfVar20 + 0x10;
          pfVar19 = pfVar19 + 0x10;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
        return;
      }
    }
    else if (param_9 == 0) {
      fVar40 = *((float *)GEN_TOP(*param_7));
      fVar41 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar42 = *((float *)GEN_TOP((*param_7 + 8)));
      memcpy(&(auVar18), &(*param_7), sizeof(*param_7) < sizeof(auVar18) ? sizeof(*param_7) : sizeof(auVar18));
      fVar12 = *((float *)GEN_TOP(param_7[1]));
      local_18 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_18) {
        pfVar19 = ((float *)GEN_TOP((param_1 + 0x30)));
        pauVar22 = (gen_v16 *)(param_5 + 8);
        fVar36 = *(float *)&REFG(undefined, 0x1138af0) - fVar40;
        fVar37 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar38 = *(float *)&REFG(undefined, 0x1138af8) - fVar42;
        fVar39 = *(float *)&REFG(undefined, 0x1138afc) - fVar12;
        pfVar20 = param_3;
        pauVar23 = param_6;
        do {
          memcpy(&(auVar46), &(*pauVar23), sizeof(*pauVar23) < sizeof(auVar46) ? sizeof(*pauVar23) : sizeof(auVar46));
          fVar4 = (*(float *)((char *)&auVar46 + 0));
          fVar6 = (*(float *)((char *)&auVar46 + 4));
          fVar8 = (*(float *)((char *)&auVar46 + 8));
          fVar10 = (*(float *)((char *)&auVar46 + 12));
          memcpy(&(auVar45), &(*((gen_v16 *)GEN_TOP(((int)pauVar23 + ((int)param_4 - (int)param_6))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pauVar23 + ((int)param_4 - (int)param_6))))) < sizeof(auVar45) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pauVar23 + ((int)param_4 - (int)param_6))))) : sizeof(auVar45));
          fVar5 = (*(float *)((char *)&auVar45 + 0));
          fVar7 = (*(float *)((char *)&auVar45 + 4));
          fVar9 = (*(float *)((char *)&auVar45 + 8));
          fVar11 = (*(float *)((char *)&auVar45 + 12));
          gen_rcpps(&(auVar45), &(in_XMM3), &(auVar45));
          gen_rcpps(&(auVar46), &(auVar45), &(auVar46));
          fVar44 = gen_bits2f(~-(uint)(fVar4 < fVar5) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0) -
                                                ((*(float *)&REFG(undefined, 0x1136ea0) - fVar4 * (*(float *)((char *)&auVar46 + 0)))
                                                * (*(float *)((char *)&auVar46 + 0))) * (fVar5 * fVar36)) |
                              -(uint)(fVar4 < fVar5) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - fVar5 * (*(float *)((char *)&auVar45 + 0)))
                                                * (*(float *)((char *)&auVar45 + 0))) * (fVar4 * fVar40)));
          fVar48 = gen_bits2f(~-(uint)(fVar6 < fVar7) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4) -
                                                ((*(float *)&REFG(undefined, 0x1136ea4) - fVar6 * (*(float *)((char *)&auVar46 + 4)))
                                                * (*(float *)((char *)&auVar46 + 4))) * (fVar7 * fVar37)) |
                              -(uint)(fVar6 < fVar7) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - fVar7 * (*(float *)((char *)&auVar45 + 4)))
                                                * (*(float *)((char *)&auVar45 + 4))) * (fVar6 * fVar41)));
          fVar51 = gen_bits2f(~-(uint)(fVar8 < fVar9) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8) -
                                                ((*(float *)&REFG(undefined, 0x1136ea8) - fVar8 * (*(float *)((char *)&auVar46 + 8)))
                                                * (*(float *)((char *)&auVar46 + 8))) * (fVar9 * fVar38)) |
                              -(uint)(fVar8 < fVar9) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - fVar9 * (*(float *)((char *)&auVar45 + 8)))
                                                * (*(float *)((char *)&auVar45 + 8))) * (fVar8 * fVar42)));
          fVar54 = gen_bits2f(~-(uint)(fVar10 < fVar11) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) -
                                                ((*(float *)&REFG(undefined, 0x1136eac) - fVar10 * (*(float *)((char *)&auVar46 + 12))
                                                 ) * (*(float *)((char *)&auVar46 + 12))) * (fVar11 * fVar39)) |
                              -(uint)(fVar10 < fVar11) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - fVar11 * (*(float *)((char *)&auVar45 + 12))
                                                 ) * (*(float *)((char *)&auVar45 + 12))) * (fVar10 * fVar12)));
          uVar25 = -(uint)(fVar4 <= (float)REFG(undefined8, 0x1138ae0));
          uVar27 = -(uint)(fVar6 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar29 = -(uint)(fVar8 <= (float)REFG(undefined8, 0x1138ae8));
          uVar32 = -(uint)(fVar10 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar26 = -(uint)(fVar5 <= (float)REFG(undefined8, 0x1138ae0));
          uVar28 = -(uint)(fVar7 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar30 = -(uint)(fVar9 <= (float)REFG(undefined8, 0x1138ae8));
          uVar33 = -(uint)(fVar11 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          local_c0 = (*(float *)((char *)&auVar18 + 0));
          fStack_bc = (*(float *)((char *)&auVar18 + 4));
          fStack_b8 = (*(float *)((char *)&auVar18 + 8));
          fVar60 = *(float *)&REFG(undefined, 0x1138af4) - fVar48;
          fVar63 = *(float *)&REFG(undefined, 0x1138af8) - fVar51;
          fVar43 = *(float *)&REFG(undefined, 0x1138afc) - fVar54;
          fVar49 = gen_bits2f(~(uVar25 & uVar26) &
                              (~uVar25 & (~uVar26 & (uint)gen_fl2bits(fVar44) |
                                         uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0))) |
                              uVar25 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0))) |
                              uVar25 & uVar26 & (uint)gen_fl2bits(local_c0));
          fVar52 = gen_bits2f(~(uVar27 & uVar28) &
                              (~uVar27 & (~uVar28 & (uint)gen_fl2bits(fVar48) |
                                         uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4))) |
                              uVar27 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)))) |
                              uVar27 & uVar28 & (uint)gen_fl2bits(fStack_bc));
          fVar55 = gen_bits2f(~(uVar29 & uVar30) &
                              (~uVar29 & (~uVar30 & (uint)gen_fl2bits(fVar51) |
                                         uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8))) |
                              uVar29 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8))) |
                              uVar29 & uVar30 & (uint)gen_fl2bits(fStack_b8));
          fVar57 = gen_bits2f(~(uVar32 & uVar33) &
                              (~uVar32 & (~uVar33 & (uint)gen_fl2bits(fVar54) |
                                         uVar33 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc))) |
                              uVar32 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)))) |
                              uVar32 & uVar33 & (uint)gen_fl2bits(fVar12));
          fVar40 = pfVar20[4];
          fVar41 = pfVar20[5];
          fVar42 = pfVar20[6];
          fVar13 = pfVar20[7];
          fVar14 = *pfVar20;
          fVar15 = pfVar20[1];
          fVar16 = pfVar20[2];
          fVar17 = pfVar20[3];
          memcpy(&(auVar46), &(pauVar22[-2]), sizeof(pauVar22[-2]) < sizeof(auVar46) ? sizeof(pauVar22[-2]) : sizeof(auVar46));
          puVar1 = ((uint *)GEN_TOP(((int)pauVar23 + ((int)param_2 - (int)param_6))));
          *puVar1 = ~uVar25 & (~uVar26 & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1138af0) - fVar44) *
                                                           fVar5 + fVar4 * fVar44) |
                              (uint)gen_fl2bits(fVar4) & uVar26) | (uint)gen_fl2bits(fVar5) & uVar25
          ;
          puVar1[1] = ~uVar27 & (~uVar28 & (uint)gen_fl2bits(fVar60 * fVar7 + fVar6 * fVar48) |
                                (uint)gen_fl2bits(fVar6) & uVar28) |
                      (uint)gen_fl2bits(fVar7) & uVar27;
          puVar1[2] = ~uVar29 & (~uVar30 & (uint)gen_fl2bits(fVar63 * fVar9 + fVar8 * fVar51) |
                                (uint)gen_fl2bits(fVar8) & uVar30) |
                      (uint)gen_fl2bits(fVar9) & uVar29;
          puVar1[3] = ~uVar32 & (~uVar33 & (uint)gen_fl2bits(fVar43 * fVar11 + fVar10 * fVar54) |
                                (uint)gen_fl2bits(fVar10) & uVar33) |
                      (uint)gen_fl2bits(fVar11) & uVar32;
          pfVar3 = ((float *)GEN_TOP((((int)param_3 - (int)param_5) + (int)pauVar22)));
          fVar44 = *pfVar3;
          fVar48 = pfVar3[1];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar19 + ((int)param_3 - param_1))));
          fVar4 = *pfVar2;
          fVar5 = pfVar2[1];
          memcpy(&(auVar45), &(*pauVar22), sizeof(*pauVar22) < sizeof(auVar45) ? sizeof(*pauVar22) : sizeof(auVar45));
          fVar6 = *((float *)GEN_TOP(pauVar22[-1]));
          fVar7 = *((float *)GEN_TOP((pauVar22[-1] + 4)));
          fVar8 = *((float *)GEN_TOP((pauVar22[-1] + 8)));
          fVar9 = *((float *)GEN_TOP((pauVar22[-1] + 0xc)));
          fVar10 = *((float *)GEN_TOP(pauVar22[1]));
          fVar11 = *((float *)GEN_TOP((pauVar22[1] + 4)));
          local_a0 = (*(float *)((char *)&auVar46 + 8));
          fStack_9c = (*(float *)((char *)&auVar46 + 12));
          fVar43 = *(float *)&REFG(undefined, 0x1138af0) - fVar49;
          fVar47 = *(float *)&REFG(undefined, 0x1138af4) - fVar52;
          fVar50 = *(float *)&REFG(undefined, 0x1138af8) - fVar55;
          fVar53 = *(float *)&REFG(undefined, 0x1138afc) - fVar57;
          local_70 = (*(float *)((char *)&auVar45 + 8));
          fStack_6c = (*(float *)((char *)&auVar45 + 12));
          local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar3 + 2));
          fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar3 + 2) >> 0x20));
          fVar60 = fStack_2c * fVar50 + fStack_6c * fVar55;
          fVar63 = pfVar2[3] * fVar53 + *((float *)GEN_TOP((pauVar22[1] + 0xc))) * fVar57;
          fVar51 = local_30 * fVar50 + local_70 * fVar55;
          fVar54 = pfVar2[2] * fVar53 + *((float *)GEN_TOP((pauVar22[1] + 8))) * fVar57;
          (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar54);
          (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar51);
          (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar60);
          (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar63);
          pfVar19[-0xc] = fVar14 * fVar43 + (*(float *)((char *)&auVar46 + 0)) * fVar49;
          pfVar19[-0xb] = fVar15 * fVar43 + (*(float *)((char *)&auVar46 + 4)) * fVar49;
          pfVar19[-10] = fVar16 * fVar43 + local_a0 * fVar49;
          pfVar19[-9] = fVar17 * fVar43 + fStack_9c * fVar49;
          pfVar19[-8] = fVar40 * fVar47 + fVar6 * fVar52;
          pfVar19[-7] = fVar41 * fVar47 + fVar7 * fVar52;
          pfVar19[-6] = fVar42 * fVar47 + fVar8 * fVar52;
          pfVar19[-5] = fVar13 * fVar47 + fVar9 * fVar52;
          pfVar3 = ((float *)GEN_TOP(((int)pauVar22 + (param_1 - (int)param_5))));
          *pfVar3 = fVar44 * fVar50 + (*(float *)((char *)&auVar45 + 0)) * fVar55;
          pfVar3[1] = fVar48 * fVar50 + (*(float *)((char *)&auVar45 + 4)) * fVar55;
          pfVar3[2] = fVar51;
          pfVar3[3] = fVar60;
          *pfVar19 = fVar4 * fVar53 + fVar10 * fVar57;
          pfVar19[1] = fVar5 * fVar53 + fVar11 * fVar57;
          pfVar19[2] = fVar54;
          pfVar19[3] = fVar63;
          pfVar20 = pfVar20 + 0x10;
          pauVar22 = pauVar22 + 4;
          pfVar19 = pfVar19 + 0x10;
          pauVar23 = pauVar23 + 1;
          local_18 = local_18 - 1;
          fVar40 = local_c0;
          fVar41 = fStack_bc;
          fVar42 = fStack_b8;
        } while (local_18 != 0);
        return;
      }
    }
    else if (param_9 == 1) {
      memcpy(&(auVar18), &(*param_7), sizeof(*param_7) < sizeof(auVar18) ? sizeof(*param_7) : sizeof(auVar18));
      fVar40 = *((float *)GEN_TOP(param_7[1]));
      local_18 = (int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2;
      if (0 < (int)local_18) {
        pauVar22 = param_4;
        puVar24 = param_2;
        for (iVar21 = (local_18 & 0xfffffff) * 4; iVar21 != 0; iVar21 = iVar21 - 1) {
          *puVar24 = *((undefined4 *)GEN_TOP(*pauVar22));
          pauVar22 = ((gen_v16 *)GEN_TOP((*pauVar22 + 4)));
          puVar24 = puVar24 + 1;
        }
        local_1c = (gen_v16 *)param_5;
        local_14 = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar19 = ((float *)GEN_TOP((param_1 + 0x20)));
        do {
          fVar41 = pfVar20[-8];
          fVar42 = pfVar20[-7];
          fVar12 = pfVar20[-6];
          fVar36 = pfVar20[-5];
          local_30 = (*(float *)((char *)&auVar18 + 0));
          fStack_2c = (*(float *)((char *)&auVar18 + 4));
          fStack_28 = (*(float *)((char *)&auVar18 + 8));
          fVar43 = local_30 * *((float *)GEN_TOP(*local_14));
          fVar47 = fStack_2c * *((float *)GEN_TOP((*local_14 + 4)));
          fVar50 = fStack_28 * *((float *)GEN_TOP((*local_14 + 8)));
          fVar53 = fVar40 * *((float *)GEN_TOP((*local_14 + 0xc)));
          fVar37 = pfVar20[-0xb];
          fVar38 = pfVar20[-10];
          fVar39 = pfVar20[-9];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3) - 0x20)));
          fVar4 = *pfVar3;
          fVar5 = pfVar3[1];
          fVar6 = pfVar3[2];
          fVar7 = pfVar3[3];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar19)));
          fVar8 = *pfVar3;
          fVar9 = pfVar3[1];
          fVar10 = pfVar3[2];
          fVar11 = pfVar3[3];
          fVar13 = *pfVar20;
          fVar14 = pfVar20[1];
          fVar15 = pfVar20[2];
          fVar16 = pfVar20[3];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3))));
          fVar17 = *pfVar3;
          fVar44 = pfVar3[1];
          fVar48 = pfVar3[2];
          fVar49 = pfVar3[3];
          fVar52 = *((float *)GEN_TOP(((int)local_1c + 4)));
          fVar55 = *((float *)GEN_TOP(((int)local_1c + 8)));
          fVar57 = *((float *)GEN_TOP(((int)local_1c + 0xc)));
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) : sizeof(auVar46));
          fVar51 = *pfVar20;
          fVar54 = pfVar20[1];
          fVar60 = pfVar20[2];
          fVar63 = pfVar20[3];
          fVar58 = *(float *)&REFG(undefined, 0x1138af0) - fVar43;
          fVar59 = *(float *)&REFG(undefined, 0x1138af4) - fVar47;
          fVar62 = *(float *)&REFG(undefined, 0x1138af8) - fVar50;
          fVar65 = *(float *)&REFG(undefined, 0x1138afc) - fVar53;
          pfVar19[-8] = pfVar20[-0xc] * fVar58 + (pfVar20[-0xc] + *(float *)local_1c) * fVar43;
          pfVar19[-7] = fVar37 * fVar58 + (fVar37 + fVar52) * fVar43;
          pfVar19[-6] = fVar38 * fVar58 + (fVar38 + fVar55) * fVar43;
          pfVar19[-5] = fVar39 * fVar58 + (fVar39 + fVar57) * fVar43;
          pfVar19[-4] = fVar41 * fVar59 + (fVar4 + fVar41) * fVar47;
          pfVar19[-3] = fVar42 * fVar59 + (fVar5 + fVar42) * fVar47;
          pfVar19[-2] = fVar12 * fVar59 + (fVar6 + fVar12) * fVar47;
          pfVar19[-1] = fVar36 * fVar59 + (fVar7 + fVar36) * fVar47;
          *pfVar19 = (*(float *)((char *)&auVar46 + 0)) * fVar62 + (fVar8 + (*(float *)((char *)&auVar46 + 0))) * fVar50;
          pfVar19[1] = (*(float *)((char *)&auVar46 + 4)) * fVar62 + (fVar9 + (*(float *)((char *)&auVar46 + 4))) * fVar50;
          pfVar19[2] = (*(float *)((char *)&auVar46 + 8)) * fVar62 + (fVar10 + (*(float *)((char *)&auVar46 + 8))) * fVar50;
          pfVar19[3] = (*(float *)((char *)&auVar46 + 12)) * fVar62 + (fVar11 + (*(float *)((char *)&auVar46 + 12))) * fVar50;
          local_1c = ((gen_v16 *)GEN_TOP(((int)local_1c + 0x40)));
          local_14 = local_14 + 1;
          pfVar19[4] = fVar51 * fVar65 + (fVar13 + fVar17) * fVar53;
          pfVar19[5] = fVar54 * fVar65 + (fVar14 + fVar44) * fVar53;
          pfVar19[6] = fVar60 * fVar65 + (fVar15 + fVar48) * fVar53;
          pfVar19[7] = fVar63 * fVar65 + (fVar16 + fVar49) * fVar53;
          pfVar20 = pfVar20 + 0x10;
          pfVar19 = pfVar19 + 0x10;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
        return;
      }
    }
  }
  else if (param_10 == 1) {
    if (param_9 == -1) {
      fVar40 = *((float *)GEN_TOP(*param_7));
      fVar41 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar42 = *((float *)GEN_TOP((*param_7 + 8)));
      fVar12 = *((float *)GEN_TOP(param_7[1]));
      local_18 = (int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2;
      if (0 < (int)local_18) {
        pauVar22 = param_4;
        puVar24 = param_2;
        for (iVar21 = (local_18 & 0xfffffff) * 4; iVar21 != 0; iVar21 = iVar21 - 1) {
          *puVar24 = *((undefined4 *)GEN_TOP(*pauVar22));
          pauVar22 = ((gen_v16 *)GEN_TOP((*pauVar22 + 4)));
          puVar24 = puVar24 + 1;
        }
        local_14 = (gen_v16 *)param_5;
        local_1c = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar19 = ((float *)GEN_TOP((param_1 + 0x20)));
        do {
          fVar36 = pfVar20[-8];
          fVar37 = pfVar20[-7];
          fVar38 = pfVar20[-6];
          fVar39 = pfVar20[-5];
          fVar53 = fVar40 * *((float *)GEN_TOP(*local_1c));
          fVar58 = fVar41 * *((float *)GEN_TOP((*local_1c + 4)));
          fVar59 = fVar42 * *((float *)GEN_TOP((*local_1c + 8)));
          fVar62 = fVar12 * *((float *)GEN_TOP((*local_1c + 0xc)));
          fVar4 = pfVar20[-0xb];
          fVar5 = pfVar20[-10];
          fVar6 = pfVar20[-9];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) - 0x20 + (int)pfVar20)));
          fVar7 = *pfVar3;
          fVar8 = pfVar3[1];
          fVar9 = pfVar3[2];
          fVar10 = pfVar3[3];
          fVar11 = *pfVar20;
          fVar13 = pfVar20[1];
          fVar14 = pfVar20[2];
          fVar15 = pfVar20[3];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + (int)pfVar20)));
          fVar16 = *pfVar3;
          fVar17 = pfVar3[1];
          fVar44 = pfVar3[2];
          fVar48 = pfVar3[3];
          fVar49 = *((float *)GEN_TOP(((int)local_14 + 4)));
          fVar52 = *((float *)GEN_TOP(((int)local_14 + 8)));
          fVar55 = *((float *)GEN_TOP(((int)local_14 + 0xc)));
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) : sizeof(auVar46));
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar19)));
          fVar57 = *pfVar3;
          fVar51 = pfVar3[1];
          fVar54 = pfVar3[2];
          fVar60 = pfVar3[3];
          fVar63 = *pfVar20;
          fVar43 = pfVar20[1];
          fVar47 = pfVar20[2];
          fVar50 = pfVar20[3];
          fVar65 = *(float *)&REFG(undefined, 0x1138af0) - fVar53;
          fVar61 = *(float *)&REFG(undefined, 0x1138af4) - fVar58;
          fVar64 = *(float *)&REFG(undefined, 0x1138af8) - fVar59;
          fVar66 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          pfVar19[-8] = pfVar20[-0xc] * fVar65 + (pfVar20[-0xc] - *(float *)local_14) * fVar53;
          pfVar19[-7] = fVar4 * fVar65 + (fVar4 - fVar49) * fVar53;
          pfVar19[-6] = fVar5 * fVar65 + (fVar5 - fVar52) * fVar53;
          pfVar19[-5] = fVar6 * fVar65 + (fVar6 - fVar55) * fVar53;
          pfVar19[-4] = fVar36 * fVar61 + (fVar36 - fVar7) * fVar58;
          pfVar19[-3] = fVar37 * fVar61 + (fVar37 - fVar8) * fVar58;
          pfVar19[-2] = fVar38 * fVar61 + (fVar38 - fVar9) * fVar58;
          pfVar19[-1] = fVar39 * fVar61 + (fVar39 - fVar10) * fVar58;
          *pfVar19 = (*(float *)((char *)&auVar46 + 0)) * fVar64 + ((*(float *)((char *)&auVar46 + 0)) - fVar57) * fVar59;
          pfVar19[1] = (*(float *)((char *)&auVar46 + 4)) * fVar64 + ((*(float *)((char *)&auVar46 + 4)) - fVar51) * fVar59;
          pfVar19[2] = (*(float *)((char *)&auVar46 + 8)) * fVar64 + ((*(float *)((char *)&auVar46 + 8)) - fVar54) * fVar59;
          pfVar19[3] = (*(float *)((char *)&auVar46 + 12)) * fVar64 + ((*(float *)((char *)&auVar46 + 12)) - fVar60) * fVar59;
          local_14 = ((gen_v16 *)GEN_TOP(((int)local_14 + 0x40)));
          local_1c = local_1c + 1;
          pfVar19[4] = fVar63 * fVar66 + (fVar11 - fVar16) * fVar62;
          pfVar19[5] = fVar43 * fVar66 + (fVar13 - fVar17) * fVar62;
          pfVar19[6] = fVar47 * fVar66 + (fVar14 - fVar44) * fVar62;
          pfVar19[7] = fVar50 * fVar66 + (fVar15 - fVar48) * fVar62;
          pfVar20 = pfVar20 + 0x10;
          pfVar19 = pfVar19 + 0x10;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
    }
    else if (param_9 == 0) {
      fVar40 = *((float *)GEN_TOP(*param_7));
      fVar41 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar42 = *((float *)GEN_TOP((*param_7 + 8)));
      memcpy(&(auVar18), &(*param_7), sizeof(*param_7) < sizeof(auVar18) ? sizeof(*param_7) : sizeof(auVar18));
      fVar12 = *((float *)GEN_TOP(param_7[1]));
      local_18 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_18) {
        pfVar19 = ((float *)GEN_TOP((param_1 + 0x30)));
        pauVar22 = (gen_v16 *)(param_3 + 8);
        fVar36 = *(float *)&REFG(undefined, 0x1138af0) - fVar40;
        fVar37 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar38 = *(float *)&REFG(undefined, 0x1138af8) - fVar42;
        fVar39 = *(float *)&REFG(undefined, 0x1138afc) - fVar12;
        pfVar20 = param_5;
        pauVar23 = param_4;
        do {
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar23)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar23)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar23)))) : sizeof(auVar46));
          fVar4 = (*(float *)((char *)&auVar46 + 0));
          fVar6 = (*(float *)((char *)&auVar46 + 4));
          fVar7 = (*(float *)((char *)&auVar46 + 8));
          fVar8 = (*(float *)((char *)&auVar46 + 12));
          memcpy(&(auVar45), &(*pauVar23), sizeof(*pauVar23) < sizeof(auVar45) ? sizeof(*pauVar23) : sizeof(auVar45));
          fVar5 = (*(float *)((char *)&auVar45 + 0));
          fVar9 = (*(float *)((char *)&auVar45 + 12));
          gen_rcpps(&(auVar56), &(in_XMM4), &(auVar45));
          fVar49 = (*(float *)((char *)&auVar45 + 4));
          fVar52 = (*(float *)((char *)&auVar45 + 8));
          gen_rcpps(&(auVar46), &(auVar56), &(auVar46));
          fVar55 = gen_bits2f(~-(uint)(fVar4 < fVar5) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0) -
                                                ((*(float *)&REFG(undefined, 0x1136ea0) - fVar4 * (*(float *)((char *)&auVar46 + 0)))
                                                * (*(float *)((char *)&auVar46 + 0))) * (fVar36 * fVar5)) |
                              -(uint)(fVar4 < fVar5) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar56 + 0)) * fVar5)
                                                * (*(float *)((char *)&auVar56 + 0))) * (fVar4 * fVar40)));
          fVar57 = gen_bits2f(~-(uint)(fVar6 < fVar49) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4) -
                                                ((*(float *)&REFG(undefined, 0x1136ea4) - fVar6 * (*(float *)((char *)&auVar46 + 4)))
                                                * (*(float *)((char *)&auVar46 + 4))) * (fVar37 * fVar49)) |
                              -(uint)(fVar6 < fVar49) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar56 + 4)) * fVar49)
                                                * (*(float *)((char *)&auVar56 + 4))) * (fVar6 * fVar41)));
          fVar43 = gen_bits2f(~-(uint)(fVar7 < fVar52) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8) -
                                                ((*(float *)&REFG(undefined, 0x1136ea8) - fVar7 * (*(float *)((char *)&auVar46 + 8)))
                                                * (*(float *)((char *)&auVar46 + 8))) * (fVar38 * fVar52)) |
                              -(uint)(fVar7 < fVar52) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar56 + 8)) * fVar52)
                                                * (*(float *)((char *)&auVar56 + 8))) * (fVar7 * fVar42)));
          fVar47 = gen_bits2f(~-(uint)(fVar8 < fVar9) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) -
                                                ((*(float *)&REFG(undefined, 0x1136eac) - fVar8 * (*(float *)((char *)&auVar46 + 12)))
                                                * (*(float *)((char *)&auVar46 + 12))) * (fVar39 * fVar9)) |
                              -(uint)(fVar8 < fVar9) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar56 + 12)) * fVar9)
                                                * (*(float *)((char *)&auVar56 + 12))) * (fVar8 * fVar12)));
          uVar28 = -(uint)(fVar5 <= (float)REFG(undefined8, 0x1138ae0));
          uVar30 = -(uint)(fVar49 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar33 = -(uint)(fVar52 <= (float)REFG(undefined8, 0x1138ae8));
          uVar34 = -(uint)(fVar9 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar29 = -(uint)(fVar4 <= (float)REFG(undefined8, 0x1138ae0));
          uVar32 = -(uint)(fVar6 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar31 = -(uint)(fVar7 <= (float)REFG(undefined8, 0x1138ae8));
          uVar35 = -(uint)(fVar8 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          local_30 = (*(float *)((char *)&auVar18 + 0));
          fStack_2c = (*(float *)((char *)&auVar18 + 4));
          fStack_28 = (*(float *)((char *)&auVar18 + 8));
          fVar50 = *(float *)&REFG(undefined, 0x1138af4) - fVar57;
          fVar53 = *(float *)&REFG(undefined, 0x1138af8) - fVar43;
          fVar58 = *(float *)&REFG(undefined, 0x1138afc) - fVar47;
          fVar40 = *pfVar20;
          fVar41 = pfVar20[1];
          fVar42 = pfVar20[2];
          fVar10 = pfVar20[3];
          fVar51 = gen_bits2f(~(uVar29 & uVar28) &
                              (~uVar29 & (uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                                         ~uVar28 & (uint)gen_fl2bits(fVar55)) |
                              uVar29 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0))) |
                              uVar29 & uVar28 & (uint)gen_fl2bits(local_30));
          fVar54 = gen_bits2f(~(uVar32 & uVar30) &
                              (~uVar32 & (uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                                         ~uVar30 & (uint)gen_fl2bits(fVar57)) |
                              uVar32 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)))) |
                              uVar32 & uVar30 & (uint)gen_fl2bits(fStack_2c));
          fVar60 = gen_bits2f(~(uVar31 & uVar33) &
                              (~uVar31 & (uVar33 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                                         ~uVar33 & (uint)gen_fl2bits(fVar43)) |
                              uVar31 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8))) |
                              uVar31 & uVar33 & (uint)gen_fl2bits(fStack_28));
          fVar63 = gen_bits2f(~(uVar35 & uVar34) &
                              (~uVar35 & (uVar34 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                                         ~uVar34 & (uint)gen_fl2bits(fVar47)) |
                              uVar35 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)))) |
                              uVar35 & uVar34 & (uint)gen_fl2bits(fVar12));
          fVar11 = pfVar20[4];
          fVar13 = pfVar20[5];
          fVar14 = pfVar20[6];
          fVar15 = pfVar20[7];
          uVar25 = *((uint *)GEN_TOP((*pauVar23 + 4)));
          uVar26 = *((uint *)GEN_TOP((*pauVar23 + 8)));
          uVar27 = *((uint *)GEN_TOP((*pauVar23 + 0xc)));
          fVar16 = *((float *)GEN_TOP(pauVar22[-1]));
          fVar17 = *((float *)GEN_TOP((pauVar22[-1] + 4)));
          fVar44 = *((float *)GEN_TOP((pauVar22[-1] + 8)));
          fVar48 = *((float *)GEN_TOP((pauVar22[-1] + 0xc)));
          puVar1 = ((uint *)GEN_TOP((((int)param_2 - (int)param_4) + (int)pauVar23)));
          *puVar1 = ~uVar29 & (~uVar28 & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1138af0) - fVar55) *
                                                           fVar5 + fVar4 * fVar55) |
                              (uint)gen_fl2bits(fVar4) & uVar28) | uVar29 & *((uint *)GEN_TOP(*pauVar23));
          puVar1[1] = ~uVar32 & (~uVar30 & (uint)gen_fl2bits(fVar50 * fVar49 + fVar6 * fVar57) |
                                (uint)gen_fl2bits(fVar6) & uVar30) | uVar32 & uVar25;
          puVar1[2] = ~uVar31 & (~uVar33 & (uint)gen_fl2bits(fVar53 * fVar52 + fVar7 * fVar43) |
                                (uint)gen_fl2bits(fVar7) & uVar33) | uVar31 & uVar26;
          puVar1[3] = ~uVar35 & (~uVar34 & (uint)gen_fl2bits(fVar58 * fVar9 + fVar8 * fVar47) |
                                (uint)gen_fl2bits(fVar8) & uVar34) | uVar35 & uVar27;
          pfVar3 = ((float *)GEN_TOP(((int)pauVar22 + ((int)param_5 - (int)param_3))));
          fVar8 = *pfVar3;
          fVar9 = pfVar3[1];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar19 + ((int)param_5 - param_1))));
          fVar49 = *pfVar2;
          fVar52 = pfVar2[1];
          fVar55 = pfVar2[2];
          fVar57 = pfVar2[3];
          memcpy(&(auVar46), &(*pauVar22), sizeof(*pauVar22) < sizeof(auVar46) ? sizeof(*pauVar22) : sizeof(auVar46));
          memcpy(&(auVar45), &(pauVar22[-2]), sizeof(pauVar22[-2]) < sizeof(auVar45) ? sizeof(pauVar22[-2]) : sizeof(auVar45));
          fVar4 = *((float *)GEN_TOP(pauVar22[1]));
          fVar5 = *((float *)GEN_TOP((pauVar22[1] + 4)));
          fVar6 = *((float *)GEN_TOP((pauVar22[1] + 8)));
          fVar7 = *((float *)GEN_TOP((pauVar22[1] + 0xc)));
          fVar43 = *(float *)&REFG(undefined, 0x1138af0) - fVar51;
          fVar47 = *(float *)&REFG(undefined, 0x1138af4) - fVar54;
          fVar50 = *(float *)&REFG(undefined, 0x1138af8) - fVar60;
          fVar53 = *(float *)&REFG(undefined, 0x1138afc) - fVar63;
          local_80 = (*(float *)((char *)&auVar45 + 8));
          fStack_7c = (*(float *)((char *)&auVar45 + 12));
          local_d0 = (*(float *)((char *)&auVar46 + 8));
          fStack_cc = (*(float *)((char *)&auVar46 + 12));
          fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar3 + 2) >> 0x20));
          local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar3 + 2));
          (*(undefined4 *)((char *)&in_XMM4 + 4)) = (undefined4)gen_fl2bits(fVar41 * fVar51 + (*(float *)((char *)&auVar45 + 4)) * fVar43);
          (*(undefined4 *)((char *)&in_XMM4 + 0)) = (undefined4)gen_fl2bits(fVar40 * fVar51 + (*(float *)((char *)&auVar45 + 0)) * fVar43);
          (*(undefined4 *)((char *)&in_XMM4 + 8)) = (undefined4)gen_fl2bits(fVar42 * fVar51 + local_80 * fVar43);
          (*(undefined4 *)((char *)&in_XMM4 + 12)) = (undefined4)gen_fl2bits(fVar10 * fVar51 + fStack_7c * fVar43);
          memcpy(&(*(gen_v16 *)(pfVar19 - 0xc)), &(in_XMM4), sizeof(in_XMM4) < sizeof(*(gen_v16 *)(pfVar19 - 0xc)) ? sizeof(in_XMM4) : sizeof(*(gen_v16 *)(pfVar19 - 0xc)));
          pfVar19[-8] = fVar11 * fVar54 + fVar16 * fVar47;
          pfVar19[-7] = fVar13 * fVar54 + fVar17 * fVar47;
          pfVar19[-6] = fVar14 * fVar54 + fVar44 * fVar47;
          pfVar19[-5] = fVar15 * fVar54 + fVar48 * fVar47;
          pfVar3 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pauVar22)));
          *pfVar3 = fVar8 * fVar60 + (*(float *)((char *)&auVar46 + 0)) * fVar50;
          pfVar3[1] = fVar9 * fVar60 + (*(float *)((char *)&auVar46 + 4)) * fVar50;
          pfVar3[2] = local_40 * fVar60 + local_d0 * fVar50;
          pfVar3[3] = fStack_3c * fVar60 + fStack_cc * fVar50;
          *pfVar19 = fVar49 * fVar63 + fVar4 * fVar53;
          pfVar19[1] = fVar52 * fVar63 + fVar5 * fVar53;
          pfVar19[2] = fVar55 * fVar63 + fVar6 * fVar53;
          pfVar19[3] = fVar57 * fVar63 + fVar7 * fVar53;
          pfVar20 = pfVar20 + 0x10;
          pauVar22 = pauVar22 + 4;
          pfVar19 = pfVar19 + 0x10;
          pauVar23 = pauVar23 + 1;
          local_18 = local_18 - 1;
          fVar40 = local_30;
          fVar41 = fStack_2c;
          fVar42 = fStack_28;
        } while (local_18 != 0);
        return;
      }
    }
    else if (param_9 == 1) {
      fVar40 = *((float *)GEN_TOP(*param_7));
      fVar41 = *((float *)GEN_TOP((*param_7 + 4)));
      fVar42 = *((float *)GEN_TOP((*param_7 + 8)));
      fVar12 = *((float *)GEN_TOP(param_7[1]));
      local_18 = (int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2;
      if (0 < (int)local_18) {
        pauVar22 = param_4;
        puVar24 = param_2;
        for (iVar21 = (local_18 & 0xfffffff) * 4; iVar21 != 0; iVar21 = iVar21 - 1) {
          *puVar24 = *((undefined4 *)GEN_TOP(*pauVar22));
          pauVar22 = ((gen_v16 *)GEN_TOP((*pauVar22 + 4)));
          puVar24 = puVar24 + 1;
        }
        local_14 = (gen_v16 *)param_5;
        local_1c = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar19 = ((float *)GEN_TOP((param_1 + 0x20)));
        do {
          fVar36 = pfVar20[-8];
          fVar37 = pfVar20[-7];
          fVar38 = pfVar20[-6];
          fVar39 = pfVar20[-5];
          fVar53 = fVar40 * *((float *)GEN_TOP(*local_1c));
          fVar58 = fVar41 * *((float *)GEN_TOP((*local_1c + 4)));
          fVar59 = fVar42 * *((float *)GEN_TOP((*local_1c + 8)));
          fVar62 = fVar12 * *((float *)GEN_TOP((*local_1c + 0xc)));
          pfVar3 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3) - 0x20)));
          fVar4 = *pfVar3;
          fVar5 = pfVar3[1];
          fVar6 = pfVar3[2];
          fVar7 = pfVar3[3];
          fVar8 = pfVar20[-0xb];
          fVar9 = pfVar20[-10];
          fVar10 = pfVar20[-9];
          fVar11 = *((float *)GEN_TOP(((int)local_14 + 4)));
          fVar13 = *((float *)GEN_TOP(((int)local_14 + 8)));
          fVar14 = *((float *)GEN_TOP(((int)local_14 + 0xc)));
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) : sizeof(auVar46));
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar19)));
          fVar15 = *pfVar3;
          fVar16 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar44 = pfVar3[3];
          fVar48 = *pfVar20;
          fVar49 = pfVar20[1];
          fVar52 = pfVar20[2];
          fVar55 = pfVar20[3];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3))));
          fVar57 = *pfVar3;
          fVar51 = pfVar3[1];
          fVar54 = pfVar3[2];
          fVar60 = pfVar3[3];
          fVar63 = *pfVar20;
          fVar43 = pfVar20[1];
          fVar47 = pfVar20[2];
          fVar50 = pfVar20[3];
          fVar65 = *(float *)&REFG(undefined, 0x1138af0) - fVar53;
          fVar61 = *(float *)&REFG(undefined, 0x1138af4) - fVar58;
          fVar64 = *(float *)&REFG(undefined, 0x1138af8) - fVar59;
          fVar66 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          pfVar19[-8] = pfVar20[-0xc] * fVar65 + (*(float *)local_14 + pfVar20[-0xc]) * fVar53;
          pfVar19[-7] = fVar8 * fVar65 + (fVar11 + fVar8) * fVar53;
          pfVar19[-6] = fVar9 * fVar65 + (fVar13 + fVar9) * fVar53;
          pfVar19[-5] = fVar10 * fVar65 + (fVar14 + fVar10) * fVar53;
          pfVar19[-4] = fVar36 * fVar61 + (fVar4 + fVar36) * fVar58;
          pfVar19[-3] = fVar37 * fVar61 + (fVar5 + fVar37) * fVar58;
          pfVar19[-2] = fVar38 * fVar61 + (fVar6 + fVar38) * fVar58;
          pfVar19[-1] = fVar39 * fVar61 + (fVar7 + fVar39) * fVar58;
          *pfVar19 = (*(float *)((char *)&auVar46 + 0)) * fVar64 + (fVar15 + (*(float *)((char *)&auVar46 + 0))) * fVar59;
          pfVar19[1] = (*(float *)((char *)&auVar46 + 4)) * fVar64 + (fVar16 + (*(float *)((char *)&auVar46 + 4))) * fVar59;
          pfVar19[2] = (*(float *)((char *)&auVar46 + 8)) * fVar64 + (fVar17 + (*(float *)((char *)&auVar46 + 8))) * fVar59;
          pfVar19[3] = (*(float *)((char *)&auVar46 + 12)) * fVar64 + (fVar44 + (*(float *)((char *)&auVar46 + 12))) * fVar59;
          local_14 = ((gen_v16 *)GEN_TOP(((int)local_14 + 0x40)));
          local_1c = local_1c + 1;
          pfVar19[4] = fVar63 * fVar66 + (fVar48 + fVar57) * fVar62;
          pfVar19[5] = fVar43 * fVar66 + (fVar49 + fVar51) * fVar62;
          pfVar19[6] = fVar47 * fVar66 + (fVar52 + fVar54) * fVar62;
          pfVar19[7] = fVar50 * fVar66 + (fVar55 + fVar60) * fVar62;
          pfVar20 = pfVar20 + 0x10;
          pfVar19 = pfVar19 + 0x10;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
        return;
      }
    }
  }
  return;
}

