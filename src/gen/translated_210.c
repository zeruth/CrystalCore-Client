#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_01070de0 */
uint F_01070de0(void)
{
  GEN_ENTER(0x1070de0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004a9ec0(&REFG(undefined, 0x1375598));
  uVar1 = F_00c47de6(((code *)REFP(0x107bd90)));
  return uVar1;
}

/* ref: FUN_01070e00 */
uint F_01070e00(void)
{
  GEN_ENTER(0x1070e00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bda0)));
  return uVar1;
}

/* ref: FUN_01070e10 */
uint F_01070e10(void)
{
  GEN_ENTER(0x1070e10u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint * puVar2;
  
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar1 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar1 = &(*(uint *)(gen_frame + 0x4));
  }
  (*(uint *)(gen_frame + 0x8)) = *puVar1;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar2 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)*puVar1) {
    puVar2 = &(*(uint *)(gen_frame + 0x8));
  }
  REFG(undefined4, 0x1301dd8) = (*puVar2 & 0x3ff) << 10;
  return REFG(undefined4, 0x1301dd8);
}

/* ref: FUN_01070e70 */
uint F_01070e70(void)
{
  GEN_ENTER(0x1070e70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  uVar1 = F_00c47de6(((code *)REFP(0x107bdb0)));
  return uVar1;
}

/* ref: FUN_01070e90 */
unsigned int F_01070e90(void)
{
  GEN_ENTER(0x1070e90u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x130236c) = REFG(undefined4, 0x130236c) & 0xffffff03;
  return 0;
}

/* ref: FUN_01070ea0 */
uint F_01070ea0(void)
{
  GEN_ENTER(0x1070ea0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort * puVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar1 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x8)) + 2,(float)(float10)0);
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar2 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar2 = &(*(uint *)(gen_frame + 0x4));
  }
  (*(uint *)(gen_frame + 0x8)) = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)*puVar2) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  REFG(undefined4, 0x1302370) = ((uint)*puVar1 << 5 | 7) ^ uVar4;
  return uVar4;
}

/* ref: FUN_01070f20 */
uint F_01070f20(void)
{
  GEN_ENTER(0x1070f20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort * puVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar1 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x8)) + 2,(float)(float10)0);
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar2 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar2 = &(*(uint *)(gen_frame + 0x4));
  }
  (*(uint *)(gen_frame + 0x8)) = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)*puVar2) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  REFG(undefined4, 0x1302374) = ((uint)*puVar1 << 5 | 0xf) ^ uVar4;
  return uVar4;
}

/* ref: FUN_01070fa0 */
uint F_01070fa0(void)
{
  GEN_ENTER(0x1070fa0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint * puVar2;
  
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar1 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar1 = &(*(uint *)(gen_frame + 0x4));
  }
  (*(uint *)(gen_frame + 0x8)) = *puVar1;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar2 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)*puVar1) {
    puVar2 = &(*(uint *)(gen_frame + 0x8));
  }
  REFG(undefined4, 0x1375a5c) = (*puVar2 & 0x3ff) << 10;
  return REFG(undefined4, 0x1375a5c);
}

/* ref: FUN_01071000 */
unsigned int F_01071000(void)
{
  GEN_ENTER(0x1071000u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375a74) = REFG(float, 0x13023e4);
  return 0;
}

/* ref: FUN_01071020 */
unsigned int F_01071020(void)
{
  GEN_ENTER(0x1071020u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375a78) = REFG(float, 0x1302414);
  return 0;
}

/* ref: FUN_01071040 */
uint F_01071040(void)
{
  GEN_ENTER(0x1071040u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x1302e00) = 0;
  REFG(undefined4, 0x1302e04) = 0;
  REFG(undefined4, 0x1302e08) = 0;
  REFG(undefined4, 0x1302e0c) = REFG(float, 0x1087f04);
  return REFG(float, 0x1087f04);
}

/* ref: FUN_010710b0 */
uint F_010710b0(void)
{
  GEN_ENTER(0x10710b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bdc0)));
  return uVar1;
}

/* ref: FUN_010710c0 */
unsigned int F_010710c0(void)
{
  GEN_ENTER(0x10710c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b04) = REFG(float, 0x1305634);
  return 0;
}

/* ref: FUN_010710e0 */
unsigned int F_010710e0(void)
{
  GEN_ENTER(0x10710e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b08) = REFG(float, 0x1305664);
  return 0;
}

/* ref: FUN_01071100 */
unsigned int F_01071100(void)
{
  GEN_ENTER(0x1071100u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b80) = REFG(float, 0x1305bb8);
  return 0;
}

/* ref: FUN_01071120 */
unsigned int F_01071120(void)
{
  GEN_ENTER(0x1071120u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b84) = REFG(float, 0x1305be8);
  return 0;
}

/* ref: FUN_01071140 */
uint F_01071140(void)
{
  GEN_ENTER(0x1071140u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00b74aa0(&REFG(undefined4, 0x1375b90));
  REFG(undefined4, 0x1375bc0) = (*(undefined * PTR32 (*)[8])REFP(0x109cae8));
  *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x1375bc8) = (*(undefined * PTR32 (*)[2])REFP(0x109c9e8));
  *(undefined4 *)&REFG(undefined, 0x1375bd0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375bd4) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375bd8) = 1;
  F_0054d740(&REFG(undefined, 0x1375c68));
  *(undefined4 *)&REFG(undefined, 0x1376b78) = 0;
  *(undefined4 *)&REFG(undefined, 0x13770dc) = 0;
  F_0054f210(&REFG(undefined, 0x1377640));
  *(undefined4 *)&REFG(undefined, 0x1378b9c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1378ba0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1378ba4) = 0;
  *(undefined4 *)&REFG(undefined, 0x1378ba8) = 0;
  *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x1379680) = (*(undefined * PTR32 (*)[1])REFP(0x109c954));
  *(undefined4 *)&REFG(undefined, 0x1379684) = 0;
  *(undefined2 *)&REFG(undefined1, 0x1379688) = 0x100;
  uVar1 = F_00c47de6(((code *)REFP(0x107bde0)));
  return uVar1;
}

/* ref: FUN_010711e0 */
unsigned int F_010711e0(void)
{
  GEN_ENTER(0x10711e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b88) = REFG(float, 0x1305b68);
  return 0;
}

/* ref: FUN_01071200 */
unsigned int F_01071200(void)
{
  GEN_ENTER(0x1071200u, 0u, 0u, 0u, 0u);
  REFG(float, 0x1375b8c) = ((float)GEN_TOF((((float10)*(float *)&REFG(undefined, 0x1375b88) / (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                        (float10)*(double *)&REFG(undefined, 0x10947f0))));
  return 0;
}

/* ref: FUN_01071220 */
unsigned int F_01071220(void)
{
  GEN_ENTER(0x1071220u, 0u, 0u, 0u, 0u);
  REFG(float, 0x13796f0) = REFG(float, 0x1305c4c);
  return 0;
}

/* ref: FUN_01071240 */
unsigned int F_01071240(void)
{
  GEN_ENTER(0x1071240u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x13796f4) = REFG(float, 0x13796f0);
  return 0;
}

/* ref: FUN_01071260 */
unsigned int F_01071260(void)
{
  GEN_ENTER(0x1071260u, 0u, 0u, 0u, 0u);
  REFG(float, 0x13796f8) = REFG(float, 0x13796f0);
  return 0;
}

/* ref: FUN_01071280 */
unsigned int F_01071280(void)
{
  GEN_ENTER(0x1071280u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x13796fc) = REFG(float, 0x1305c8c);
  return 0;
}

/* ref: FUN_010712a0 */
uint F_010712a0(void)
{
  GEN_ENTER(0x10712a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bdd0)));
  return uVar1;
}

/* ref: FUN_010712b0 */
unsigned int F_010712b0(void)
{
  GEN_ENTER(0x10712b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379714) = REFG(float, 0x1306478);
  return 0;
}

/* ref: FUN_010712d0 */
unsigned int F_010712d0(void)
{
  GEN_ENTER(0x10712d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379718) = REFG(float, 0x13064a8);
  return 0;
}

/* ref: FUN_010712f0 */
unsigned int F_010712f0(void)
{
  GEN_ENTER(0x10712f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379970) = REFG(float, 0x131ddbc);
  return 0;
}

/* ref: FUN_01071310 */
unsigned int F_01071310(void)
{
  GEN_ENTER(0x1071310u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379974) = REFG(float, 0x131ddec);
  return 0;
}

/* ref: FUN_01071330 */
unsigned int F_01071330(void)
{
  GEN_ENTER(0x1071330u, 0u, 0u, 0u, 0u);
  F_004d58e0(&REFG(undefined, 0x1379978),0,0,0x23,0);
  F_004d58e0(&REFG(undefined, 0x137997c),0,0xc,0x44,3);
  F_004d58e0(&REFG(undefined, 0x1379980),0,0x10,0x52,8);
  F_004d58e0(&REFG(undefined, 0x1379984),0,0x14,0x74,9);
  F_004d58e0(&REFG(undefined, 0x1379988),0,0x18,0x54,10);
  return 0;
}

/* ref: FUN_01071390 */
unsigned int F_01071390(void)
{
  GEN_ENTER(0x1071390u, 0u, 0u, 0u, 0u);
  F_004d58e0(&REFG(undefined, 0x137998c),1,0,0x23,0);
  F_004d58e0(&REFG(undefined, 0x1379990),1,0xc,0x44,3);
  F_004d58e0(&REFG(undefined, 0x1379994),1,0x10,0x52,8);
  F_004d58e0(&REFG(undefined, 0x1379998),1,0x14,0x52,9);
  return 0;
}

/* ref: FUN_010713e0 */
unsigned int F_010713e0(void)
{
  GEN_ENTER(0x10713e0u, 0u, 0u, 0u, 0u);
  F_004d58e0(&REFG(undefined, 0x137999c),2,0,0x23,0);
  F_004d58e0(&REFG(undefined, 0x13799a0),2,0xc,0x44,3);
  F_004d58e0(&REFG(undefined, 0x13799a4),2,0x10,0x52,8);
  F_004d58e0(&REFG(undefined, 0x13799a8),2,0x14,0x52,9);
  F_004d58e0(&REFG(undefined, 0x13799ac),2,0x18,0x54,10);
  return 0;
}

/* ref: FUN_01071440 */
unsigned int F_01071440(void)
{
  GEN_ENTER(0x1071440u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379c64) = REFG(float, 0x131f348);
  return 0;
}

/* ref: FUN_01071460 */
unsigned int F_01071460(void)
{
  GEN_ENTER(0x1071460u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379c68) = REFG(float, 0x131f378);
  return 0;
}

/* ref: FUN_01071480 */
unsigned int F_01071480(void)
{
  GEN_ENTER(0x1071480u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379cbc) = REFG(float, 0x131f428);
  return 0;
}

/* ref: FUN_010714a0 */
unsigned int F_010714a0(void)
{
  GEN_ENTER(0x10714a0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379cc0) = REFG(float, 0x131f458);
  return 0;
}

/* ref: FUN_010714c0 */
uint F_010714c0(void)
{
  GEN_ENTER(0x10714c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379cd0) = REFG(float, 0x1302df0);
  *(undefined4 *)&REFG(undefined, 0x1379cd4) = REFG(float, 0x1302df4);
  *(undefined4 *)&REFG(undefined, 0x1379cd8) = REFG(float, 0x1302df8);
  *(undefined4 *)&REFG(undefined, 0x1379cf0) = REFG(float, 0x1302e10);
  *(undefined4 *)&REFG(undefined, 0x1379ce0) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)&REFG(undefined, 0x1379cf4) = REFG(float, 0x1302e14);
  *(undefined4 *)&REFG(undefined, 0x1379ce4) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)&REFG(undefined, 0x1379ce8) = REFG(undefined4, 0x1302e08);
  *(uint *)&REFG(undefined, 0x1379cec) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)&REFG(undefined, 0x1379cf8) = REFG(float, 0x1302e18);
  return REFG(undefined4, 0x1302e0c);
}

/* ref: FUN_01071550 */
unsigned int F_01071550(void)
{
  GEN_ENTER(0x1071550u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379d00) = REFG(float, 0x1375ac0);
  *(undefined4 *)&REFG(undefined, 0x1379d04) = REFG(float, 0x1375ac4);
  *(undefined4 *)&REFG(undefined, 0x1379d08) = REFG(float, 0x1375ac8);
  return 0;
}

/* ref: FUN_01071590 */
uint F_01071590(void)
{
  GEN_ENTER(0x1071590u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379d10) = REFG(undefined4, 0x1302cf0);
  *(undefined4 *)&REFG(undefined, 0x1379d14) = REFG(undefined4, 0x1302cf4);
  *(undefined4 *)&REFG(undefined, 0x1379d18) = REFG(undefined4, 0x1302cf8);
  *(uint *)&REFG(undefined, 0x1379d1c) = REFG(undefined4, 0x1302cfc);
  return REFG(undefined4, 0x1302cfc);
}

/* ref: FUN_010715c0 */
unsigned int F_010715c0(void)
{
  GEN_ENTER(0x10715c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379d20) = REFG(float, 0x1302c60);
  *(undefined4 *)&REFG(undefined, 0x1379d24) = REFG(float, 0x1302c64);
  *(undefined4 *)&REFG(undefined, 0x1379d28) = REFG(float, 0x1302c68);
  return 0;
}

/* ref: FUN_01071600 */
unsigned int F_01071600(void)
{
  GEN_ENTER(0x1071600u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137fab4) = REFG(float, 0x13206c8);
  return 0;
}

/* ref: FUN_01071620 */
unsigned int F_01071620(void)
{
  GEN_ENTER(0x1071620u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137fab8) = REFG(float, 0x13206f8);
  return 0;
}

/* ref: FUN_01071640 */
unsigned int F_01071640(void)
{
  GEN_ENTER(0x1071640u, 0u, 0u, 0u, 0u);
  F_00660cd0(&REFG(undefined, 0x137fb00));
  return 0;
}

/* ref: FUN_01071650 */
uint F_01071650(void)
{
  GEN_ENTER(0x1071650u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107be60)));
  return uVar1;
}

/* ref: FUN_01071660 */
uint F_01071660(void)
{
  GEN_ENTER(0x1071660u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107be70)));
  return uVar1;
}

/* ref: FUN_01071670 */
uint F_01071670(void)
{
  GEN_ENTER(0x1071670u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort * puVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar1 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x8)) + 2,(float)(float10)0);
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar2 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar2 = &(*(uint *)(gen_frame + 0x4));
  }
  (*(uint *)(gen_frame + 0x8)) = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)*puVar2) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  *(uint *)&REFG(undefined, 0x132076c) = ((uint)*puVar1 << 5 | 2) ^ uVar4;
  return uVar4;
}

/* ref: FUN_010716f0 */
uint F_010716f0(void)
{
  GEN_ENTER(0x10716f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort * puVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar1 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x8)) + 2,(float)(float10)0);
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar2 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar2 = &(*(uint *)(gen_frame + 0x4));
  }
  (*(uint *)(gen_frame + 0x8)) = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)*puVar2) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  REFG(undefined4, 0x1320770) = ((uint)*puVar1 << 5 | 7) ^ uVar4;
  return uVar4;
}

/* ref: FUN_01071770 */
unsigned int F_01071770(void)
{
  GEN_ENTER(0x1071770u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14882d8) = REFG(float, 0x1322988);
  return 0;
}

/* ref: FUN_01071790 */
unsigned int F_01071790(void)
{
  GEN_ENTER(0x1071790u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14882dc) = REFG(float, 0x13229b8);
  return 0;
}

/* ref: FUN_010717b0 */
unsigned int F_010717b0(void)
{
  GEN_ENTER(0x10717b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1488770) = REFG(float, 0x13237e0);
  return 0;
}

/* ref: FUN_010717d0 */
unsigned int F_010717d0(void)
{
  GEN_ENTER(0x10717d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1488774) = REFG(float, 0x1323810);
  return 0;
}

/* ref: FUN_010717f0 */
unsigned int F_010717f0(void)
{
  GEN_ENTER(0x10717f0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x1488778) =
       (float)((float10)*(float *)&REFG(undefined, 0x132386c) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_01071810 */
uint F_01071810(void)
{
  GEN_ENTER(0x1071810u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107be80)));
  return uVar1;
}

/* ref: FUN_01071820 */
uint F_01071820(void)
{
  GEN_ENTER(0x1071820u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bf00)));
  return uVar1;
}

/* ref: FUN_01071830 */
uint F_01071830(void)
{
  GEN_ENTER(0x1071830u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c1d0)));
  return uVar1;
}

/* ref: FUN_01071840 */
uint F_01071840(void)
{
  GEN_ENTER(0x1071840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c200)));
  return uVar1;
}

/* ref: FUN_01071850 */
uint F_01071850(void)
{
  GEN_ENTER(0x1071850u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c230)));
  return uVar1;
}

/* ref: FUN_01071860 */
uint F_01071860(void)
{
  GEN_ENTER(0x1071860u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c260)));
  return uVar1;
}

/* ref: FUN_01071870 */
uint F_01071870(void)
{
  GEN_ENTER(0x1071870u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c290)));
  return uVar1;
}

/* ref: FUN_01071880 */
uint F_01071880(void)
{
  GEN_ENTER(0x1071880u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c2c0)));
  return uVar1;
}

/* ref: FUN_01071890 */
uint F_01071890(void)
{
  GEN_ENTER(0x1071890u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c2d0)));
  return uVar1;
}

/* ref: FUN_010718a0 */
uint F_010718a0(void)
{
  GEN_ENTER(0x10718a0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x1f;
  puVar1 = &REFG(undefined4, 0x1488784);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[-1] = (*(undefined * PTR32 (*)[3])REFP(0x10b9324));
    puVar1[3] = (*(undefined * PTR32 (*)[3])REFP(0x10b9144));
    puVar1[4] = puVar1 + -1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 0x101;
    *(undefined1 *)((int)puVar1 + 0x1e) = 0;
    puVar1 = puVar1 + 9;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar2 = F_00c47de6(((code *)REFP(0x107bf30)));
  return uVar2;
}

/* ref: FUN_01071900 */
uint F_01071900(void)
{
  GEN_ENTER(0x1071900u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0x1f;
  puVar2 = &REFG(undefined4, 0x1488c04);
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[-1] = (*(undefined * PTR32 (*)[3])REFP(0x10b9334));
    puVar2[3] = (*(undefined * PTR32 (*)[3])REFP(0x10b9154));
    puVar2[4] = puVar2 + -1;
    F_0042b630(puVar2 + 5);
    *(undefined1 *)(puVar2 + 0x1b) = 0;
    puVar2 = puVar2 + 0x1d;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar1 = F_00c47de6(((code *)REFP(0x107bf50)));
  return uVar1;
}

/* ref: FUN_01071950 */
uint F_01071950(void)
{
  GEN_ENTER(0x1071950u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bf90)));
  return uVar1;
}

/* ref: FUN_01071960 */
uint F_01071960(void)
{
  GEN_ENTER(0x1071960u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfa0)));
  return uVar1;
}

/* ref: FUN_01071970 */
uint F_01071970(void)
{
  GEN_ENTER(0x1071970u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfb0)));
  return uVar1;
}

/* ref: FUN_01071980 */
uint F_01071980(void)
{
  GEN_ENTER(0x1071980u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfc0)));
  return uVar1;
}

/* ref: FUN_01071990 */
uint F_01071990(void)
{
  GEN_ENTER(0x1071990u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfd0)));
  return uVar1;
}

/* ref: FUN_010719a0 */
uint F_010719a0(void)
{
  GEN_ENTER(0x10719a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfe0)));
  return uVar1;
}

/* ref: FUN_010719b0 */
uint F_010719b0(void)
{
  GEN_ENTER(0x10719b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bff0)));
  return uVar1;
}

/* ref: FUN_010719c0 */
uint F_010719c0(void)
{
  GEN_ENTER(0x10719c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c000)));
  return uVar1;
}

/* ref: FUN_010719d0 */
uint F_010719d0(void)
{
  GEN_ENTER(0x10719d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c010)));
  return uVar1;
}

/* ref: FUN_010719e0 */
uint F_010719e0(void)
{
  GEN_ENTER(0x10719e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c020)));
  return uVar1;
}

/* ref: FUN_010719f0 */
uint F_010719f0(void)
{
  GEN_ENTER(0x10719f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c030)));
  return uVar1;
}

/* ref: FUN_01071a00 */
uint F_01071a00(void)
{
  GEN_ENTER(0x1071a00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c040)));
  return uVar1;
}

/* ref: FUN_01071a10 */
uint F_01071a10(void)
{
  GEN_ENTER(0x1071a10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c050)));
  return uVar1;
}

/* ref: FUN_01071a20 */
uint F_01071a20(void)
{
  GEN_ENTER(0x1071a20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c060)));
  return uVar1;
}

/* ref: FUN_01071a30 */
uint F_01071a30(void)
{
  GEN_ENTER(0x1071a30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c070)));
  return uVar1;
}

/* ref: FUN_01071a40 */
uint F_01071a40(void)
{
  GEN_ENTER(0x1071a40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c080)));
  return uVar1;
}

/* ref: FUN_01071a50 */
uint F_01071a50(void)
{
  GEN_ENTER(0x1071a50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c090)));
  return uVar1;
}

/* ref: FUN_01071a60 */
uint F_01071a60(void)
{
  GEN_ENTER(0x1071a60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00754160(&REFG(undefined, 0x1323c00));
  uVar1 = F_00c47de6(((code *)REFP(0x107c300)));
  return uVar1;
}

/* ref: FUN_01071a80 */
uint F_01071a80(void)
{
  GEN_ENTER(0x1071a80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0a0)));
  return uVar1;
}

/* ref: FUN_01071a90 */
uint F_01071a90(void)
{
  GEN_ENTER(0x1071a90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0b0)));
  return uVar1;
}

/* ref: FUN_01071aa0 */
uint F_01071aa0(void)
{
  GEN_ENTER(0x1071aa0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0c0)));
  return uVar1;
}

/* ref: FUN_01071ab0 */
uint F_01071ab0(void)
{
  GEN_ENTER(0x1071ab0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0d0)));
  return uVar1;
}

/* ref: FUN_01071ac0 */
uint F_01071ac0(void)
{
  GEN_ENTER(0x1071ac0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * in_ecx;
  int iVar2;
  
  in_ecx = &REFG(undefined, 0x1489a80);
  iVar2 = 7;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  uVar1 = F_00c47de6(((code *)REFP(0x107bea0)));
  return uVar1;
}

/* ref: FUN_01071af0 */
unsigned int F_01071af0(void)
{
  GEN_ENTER(0x1071af0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = 0;
  do {
    (&REFG(undefined4, 0x1489d20))[iVar1] = 0;
    (&REFG(undefined4, 0x1489d48))[iVar1] = 0;
    (&REFG(undefined4, 0x1489d70))[iVar1] = 0;
    (&REFG(undefined1, 0x1489d98))[iVar1] = 0;
    (&REFG(undefined1, 0x1489da2))[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  return 0;
}

/* ref: FUN_01071b30 */
uint F_01071b30(void)
{
  GEN_ENTER(0x1071b30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0e0)));
  return uVar1;
}

/* ref: FUN_01071b40 */
uint F_01071b40(void)
{
  GEN_ENTER(0x1071b40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x1489db0));
  uVar1 = F_00c47de6(((code *)REFP(0x107bec0)));
  return uVar1;
}

/* ref: FUN_01071b60 */
uint F_01071b60(void)
{
  GEN_ENTER(0x1071b60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0f0)));
  return uVar1;
}

/* ref: FUN_01071b70 */
uint F_01071b70(void)
{
  GEN_ENTER(0x1071b70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c100)));
  return uVar1;
}

/* ref: FUN_01071b80 */
uint F_01071b80(void)
{
  GEN_ENTER(0x1071b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c110)));
  return uVar1;
}

/* ref: FUN_01071b90 */
uint F_01071b90(void)
{
  GEN_ENTER(0x1071b90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c120)));
  return uVar1;
}

/* ref: FUN_01071ba0 */
uint F_01071ba0(void)
{
  GEN_ENTER(0x1071ba0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c130)));
  return uVar1;
}

/* ref: FUN_01071bb0 */
uint F_01071bb0(void)
{
  GEN_ENTER(0x1071bb0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c140)));
  return uVar1;
}

/* ref: FUN_01071bc0 */
uint F_01071bc0(void)
{
  GEN_ENTER(0x1071bc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c150)));
  return uVar1;
}

/* ref: FUN_01071bd0 */
uint F_01071bd0(void)
{
  GEN_ENTER(0x1071bd0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c160)));
  return uVar1;
}

/* ref: FUN_01071be0 */
uint F_01071be0(void)
{
  GEN_ENTER(0x1071be0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c170)));
  return uVar1;
}

/* ref: FUN_01071bf0 */
uint F_01071bf0(void)
{
  GEN_ENTER(0x1071bf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c180)));
  return uVar1;
}

/* ref: FUN_01071c00 */
uint F_01071c00(void)
{
  GEN_ENTER(0x1071c00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c190)));
  return uVar1;
}

/* ref: FUN_01071c10 */
uint F_01071c10(void)
{
  GEN_ENTER(0x1071c10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c1a0)));
  return uVar1;
}

/* ref: FUN_01071c20 */
uint F_01071c20(void)
{
  GEN_ENTER(0x1071c20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c1b0)));
  return uVar1;
}

/* ref: FUN_01071c30 */
uint F_01071c30(void)
{
  GEN_ENTER(0x1071c30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c1c0)));
  return uVar1;
}

/* ref: FUN_01071c40 */
uint F_01071c40(void)
{
  GEN_ENTER(0x1071c40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1489e08),&REFG(undefined, 0x10b3a76),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bed0)));
  return uVar1;
}

/* ref: FUN_01071c70 */
uint F_01071c70(void)
{
  GEN_ENTER(0x1071c70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1489e60),&REFG(undefined, 0x10b3a77),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bee0)));
  return uVar1;
}

/* ref: FUN_01071ca0 */
uint F_01071ca0(void)
{
  GEN_ENTER(0x1071ca0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x1489eb8));
  uVar1 = F_00c47de6(((code *)REFP(0x107bef0)));
  return uVar1;
}

/* ref: FUN_01071cc0 */
unsigned int F_01071cc0(void)
{
  GEN_ENTER(0x1071cc0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x148a464) = REFG(float, 0x13284b0);
  return 0;
}

/* ref: FUN_01071ce0 */
unsigned int F_01071ce0(void)
{
  GEN_ENTER(0x1071ce0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x148a468) = REFG(float, 0x13284e0);
  return 0;
}

/* ref: FUN_01071d00 */
unsigned int F_01071d00(void)
{
  GEN_ENTER(0x1071d00u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x148a46c) =
       (float)((float10)*(float *)&REFG(undefined, 0x132853c) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_01071d20 */
uint F_01071d20(void)
{
  GEN_ENTER(0x1071d20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c310)));
  return uVar1;
}

/* ref: FUN_01071d30 */
unsigned int F_01071d30(void)
{
  GEN_ENTER(0x1071d30u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = &REFG(undefined4, 0x148a470);
  iVar2 = 0xf;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0xffffffff;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return 0;
}

/* ref: FUN_01071d60 */
uint F_01071d60(void)
{
  GEN_ENTER(0x1071d60u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x148a570) = 0;
  REFG(undefined4, 0x148a574) = 0;
  REFG(undefined4, 0x148a578) = 0xffffffff;
  REFG(undefined4, 0x148a580) = 0;
  REFG(undefined4, 0x148a584) = 0;
  REFG(undefined4, 0x148a588) = 0xffffffff;
  return 0;
}

/* ref: FUN_01071d90 */
uint F_01071d90(void)
{
  GEN_ENTER(0x1071d90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00acbcc0(&REFG(undefined, 0x148a590));
  uVar1 = F_00c47de6(((code *)REFP(0x107c320)));
  return uVar1;
}

/* ref: FUN_01071db0 */
uint F_01071db0(void)
{
  GEN_ENTER(0x1071db0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * this;
  int iVar2;
  
  this = &REFG(undefined, 0x1493c28);
  iVar2 = 0x1f;
  do {
    uVar1 = F_00976f30(this);
    this = this + 0x194;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_01071de0 */
unsigned int F_01071de0(void)
{
  GEN_ENTER(0x1071de0u, 0u, 0u, 0u, 0u);
  undefined * in_ecx;
  int iVar1;
  
  in_ecx = &REFG(undefined, 0x1496ea8);
  iVar1 = 0x1f;
  do {
    F_00a1b190(in_ecx);
    in_ecx = in_ecx + 0x2c;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return 0;
}

/* ref: FUN_01071e00 */
uint F_01071e00(void)
{
  GEN_ENTER(0x1071e00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * this;
  int iVar2;
  
  this = &REFG(undefined, 0x1497428);
  iVar2 = 0x1f;
  do {
    uVar1 = F_00a1b0d0(this);
    this = this + 0x494;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_01071e30 */
unsigned int F_01071e30(void)
{
  GEN_ENTER(0x1071e30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a06ac) = REFG(float, 0x132efa8);
  return 0;
}

/* ref: FUN_01071e50 */
unsigned int F_01071e50(void)
{
  GEN_ENTER(0x1071e50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a06b0) = REFG(float, 0x132efd8);
  return 0;
}

/* ref: FUN_01071e70 */
uint F_01071e70(void)
{
  GEN_ENTER(0x1071e70u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0ac4) = ((code *)REFP(0x97b660));
  *(undefined4 *)&REFG(undefined, 0x14a0ac8) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0acc) = ((code *)REFP(0x9aa940));
  *(undefined4 *)&REFG(undefined, 0x14a0ad0) = 0;
  return 0x9aa940;
}

/* ref: FUN_01071ea0 */
uint F_01071ea0(void)
{
  GEN_ENTER(0x1071ea0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0ad4) = ((code *)REFP(0x97b6a0));
  *(gen_code32 *)&REFG(undefined, 0x14a0adc) = ((code *)REFP(0x97b700));
  *(undefined4 *)&REFG(undefined, 0x14a0ad8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0ae0) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0ae4) = ((code *)REFP(0x97b740));
  *(undefined4 *)&REFG(undefined, 0x14a0ae8) = 0;
  return 0x97b740;
}

/* ref: FUN_01071ee0 */
uint F_01071ee0(void)
{
  GEN_ENTER(0x1071ee0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0aec) = ((code *)REFP(0x97b7c0));
  *(undefined4 *)&REFG(undefined, 0x14a0af0) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0af4) = ((code *)REFP(0x9aabb0));
  *(undefined4 *)&REFG(undefined, 0x14a0af8) = 0;
  return 0x9aabb0;
}

/* ref: FUN_01071f10 */
unsigned int F_01071f10(void)
{
  GEN_ENTER(0x1071f10u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0b00) = ((code *)REFP(0x97b810));
  *(gen_code32 *)&REFG(undefined, 0x14a0b08) = ((code *)REFP(0x97b890));
  *(gen_code32 *)&REFG(undefined, 0x14a0b10) = ((code *)REFP(0x97b8d0));
  *(gen_code32 *)&REFG(undefined, 0x14a0b18) = ((code *)REFP(0x97b940));
  *(gen_code32 *)&REFG(undefined, 0x14a0b20) = ((code *)REFP(0x97b9b0));
  *(gen_code32 *)&REFG(undefined, 0x14a0b28) = ((code *)REFP(0x97b9f0));
  *(gen_code32 *)&REFG(undefined, 0x14a0b30) = ((code *)REFP(0x97ba60));
  *(gen_code32 *)&REFG(undefined, 0x14a0b38) = ((code *)REFP(0x97bad0));
  *(gen_code32 *)&REFG(undefined, 0x14a0b40) = ((code *)REFP(0x97bb10));
  *(undefined4 *)&REFG(undefined, 0x14a0b04) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b0c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b14) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b1c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b24) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b2c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b34) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b3c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b44) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0b48) = ((code *)REFP(0x97bb80));
  *(undefined4 *)&REFG(undefined, 0x14a0b4c) = 0;
  return 0;
}

/* ref: FUN_01071fe0 */
uint F_01071fe0(void)
{
  GEN_ENTER(0x1071fe0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0b50) = ((code *)REFP(0x988d30));
  *(gen_code32 *)&REFG(undefined, 0x14a0b58) = ((code *)REFP(0x97c1b0));
  *(gen_code32 *)&REFG(undefined, 0x14a0b60) = ((code *)REFP(0x988d30));
  *(undefined4 *)&REFG(undefined, 0x14a0b54) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b5c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0b64) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0b68) = ((code *)REFP(0x97c3f0));
  *(undefined4 *)&REFG(undefined, 0x14a0b6c) = 0;
  return 0x97c3f0;
}

/* ref: FUN_01072030 */
uint F_01072030(void)
{
  GEN_ENTER(0x1072030u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0b70) = ((code *)REFP(0x97bef0));
  *(undefined4 *)&REFG(undefined, 0x14a0b74) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0b78) = ((code *)REFP(0x988d10));
  *(undefined4 *)&REFG(undefined, 0x14a0b7c) = 0;
  return 0x988d10;
}

/* ref: FUN_01072060 */
uint F_01072060(void)
{
  GEN_ENTER(0x1072060u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0b80) = ((code *)REFP(0x97bf10));
  *(undefined4 *)&REFG(undefined, 0x14a0b84) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0b88) = ((code *)REFP(0x97bf30));
  *(undefined4 *)&REFG(undefined, 0x14a0b8c) = 0;
  return 0x97bf30;
}

/* ref: FUN_01072090 */
uint F_01072090(void)
{
  GEN_ENTER(0x1072090u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0b90) = ((code *)REFP(0x97bf60));
  *(undefined4 *)&REFG(undefined, 0x14a0b94) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0b98) = ((code *)REFP(0x9aafd0));
  *(undefined4 *)&REFG(undefined, 0x14a0b9c) = 0;
  return 0x9aafd0;
}

/* ref: FUN_010720c0 */
uint F_010720c0(void)
{
  GEN_ENTER(0x10720c0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0ba0) = ((code *)REFP(0x97bf70));
  *(undefined4 *)&REFG(undefined, 0x14a0ba4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0ba8) = ((code *)REFP(0x9ab0f0));
  *(undefined4 *)&REFG(undefined, 0x14a0bac) = 0;
  return 0x9ab0f0;
}

/* ref: FUN_010720f0 */
uint F_010720f0(void)
{
  GEN_ENTER(0x10720f0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0bb0) = ((code *)REFP(0x97bf80));
  *(undefined4 *)&REFG(undefined, 0x14a0bb4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0bb8) = ((code *)REFP(0x9ab220));
  *(undefined4 *)&REFG(undefined, 0x14a0bbc) = 0;
  return 0x9ab220;
}

/* ref: FUN_01072120 */
uint F_01072120(void)
{
  GEN_ENTER(0x1072120u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0bc0) = ((code *)REFP(0x97bf90));
  *(undefined4 *)&REFG(undefined, 0x14a0bc4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0bc8) = ((code *)REFP(0x9ab350));
  *(undefined4 *)&REFG(undefined, 0x14a0bcc) = 0;
  return 0x9ab350;
}

/* ref: FUN_01072150 */
uint F_01072150(void)
{
  GEN_ENTER(0x1072150u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0bd0) = ((code *)REFP(0x97bfa0));
  *(undefined4 *)&REFG(undefined, 0x14a0bd4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0bd8) = ((code *)REFP(0x97bfb0));
  *(undefined4 *)&REFG(undefined, 0x14a0bdc) = 0;
  return 0x97bfb0;
}

/* ref: FUN_01072180 */
uint F_01072180(void)
{
  GEN_ENTER(0x1072180u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0be0) = ((code *)REFP(0x97bfe0));
  *(undefined4 *)&REFG(undefined, 0x14a0be4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0be8) = ((code *)REFP(0x97bff0));
  *(undefined4 *)&REFG(undefined, 0x14a0bec) = 0;
  return 0x97bff0;
}

/* ref: FUN_010721b0 */
uint F_010721b0(void)
{
  GEN_ENTER(0x10721b0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0bf0) = ((code *)REFP(0x97c030));
  *(undefined4 *)&REFG(undefined, 0x14a0bf4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0bf8) = ((code *)REFP(0x97c040));
  *(undefined4 *)&REFG(undefined, 0x14a0bfc) = 0;
  return 0x97c040;
}

/* ref: FUN_010721e0 */
uint F_010721e0(void)
{
  GEN_ENTER(0x10721e0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0c00) = ((code *)REFP(0x97c080));
  *(undefined4 *)&REFG(undefined, 0x14a0c04) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0c08) = ((code *)REFP(0x97c090));
  *(undefined4 *)&REFG(undefined, 0x14a0c0c) = 0;
  return 0x97c090;
}

/* ref: FUN_01072210 */
uint F_01072210(void)
{
  GEN_ENTER(0x1072210u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0c10) = ((code *)REFP(0x97c0d0));
  *(gen_code32 *)&REFG(undefined, 0x14a0c18) = ((code *)REFP(0x97c0e0));
  *(gen_code32 *)&REFG(undefined, 0x14a0c20) = ((code *)REFP(0x9ab480));
  *(undefined4 *)&REFG(undefined, 0x14a0c14) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0c1c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0c24) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0c28) = ((code *)REFP(0x9ab5b0));
  *(undefined4 *)&REFG(undefined, 0x14a0c2c) = 0;
  return 0x9ab5b0;
}

/* ref: FUN_01072260 */
uint F_01072260(void)
{
  GEN_ENTER(0x1072260u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0c30) = ((code *)REFP(0x97c6b0));
  *(gen_code32 *)&REFG(undefined, 0x14a0c38) = ((code *)REFP(0x97c790));
  *(undefined4 *)&REFG(undefined, 0x14a0c34) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0c3c) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0c40) = ((code *)REFP(0x97c800));
  *(undefined4 *)&REFG(undefined, 0x14a0c44) = 0;
  return 0x97c800;
}

/* ref: FUN_010722a0 */
uint F_010722a0(void)
{
  GEN_ENTER(0x10722a0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0c48) = ((code *)REFP(0x97c850));
  *(gen_code32 *)&REFG(undefined, 0x14a0c50) = ((code *)REFP(0x97c860));
  *(undefined4 *)&REFG(undefined, 0x14a0c4c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0c54) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0c58) = ((code *)REFP(0x999080));
  *(undefined4 *)&REFG(undefined, 0x14a0c5c) = 0;
  return 0x999080;
}

/* ref: FUN_010722e0 */
uint F_010722e0(void)
{
  GEN_ENTER(0x10722e0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0c60) = ((code *)REFP(0x97c870));
  *(gen_code32 *)&REFG(undefined, 0x14a0c68) = ((code *)REFP(0x989020));
  *(undefined4 *)&REFG(undefined, 0x14a0c64) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0c6c) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0c70) = ((code *)REFP(0x9890e0));
  *(undefined4 *)&REFG(undefined, 0x14a0c74) = 0;
  return 0x9890e0;
}

/* ref: FUN_01072320 */
uint F_01072320(void)
{
  GEN_ENTER(0x1072320u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0c78) = ((code *)REFP(0x97c880));
  *(gen_code32 *)&REFG(undefined, 0x14a0c80) = ((code *)REFP(0x9891b0));
  *(undefined4 *)&REFG(undefined, 0x14a0c7c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0c84) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0c88) = ((code *)REFP(0x989260));
  *(undefined4 *)&REFG(undefined, 0x14a0c8c) = 0;
  return 0x989260;
}

/* ref: FUN_01072360 */
uint F_01072360(void)
{
  GEN_ENTER(0x1072360u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0c90) = ((code *)REFP(0x97ca10));
  *(gen_code32 *)&REFG(undefined, 0x14a0c98) = ((code *)REFP(0x97ca10));
  *(undefined4 *)&REFG(undefined, 0x14a0c94) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0c9c) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0ca0) = ((code *)REFP(0x97cac0));
  *(undefined4 *)&REFG(undefined, 0x14a0ca4) = 0;
  return 0x97cac0;
}

/* ref: FUN_010723a0 */
uint F_010723a0(void)
{
  GEN_ENTER(0x10723a0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0ca8) = ((code *)REFP(0x97cbb0));
  *(gen_code32 *)&REFG(undefined, 0x14a0cb0) = ((code *)REFP(0x97cbd0));
  *(undefined4 *)&REFG(undefined, 0x14a0cac) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0cb4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0cb8) = ((code *)REFP(0x989540));
  *(undefined4 *)&REFG(undefined, 0x14a0cbc) = 0;
  return 0x989540;
}

/* ref: FUN_010723e0 */
uint F_010723e0(void)
{
  GEN_ENTER(0x10723e0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0cc0) = ((code *)REFP(0x97cbf0));
  *(gen_code32 *)&REFG(undefined, 0x14a0cc8) = ((code *)REFP(0x97cc10));
  *(undefined4 *)&REFG(undefined, 0x14a0cc4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0ccc) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0cd0) = ((code *)REFP(0x97cc10));
  *(undefined4 *)&REFG(undefined, 0x14a0cd4) = 0;
  return 0x97cc10;
}

/* ref: FUN_01072420 */
uint F_01072420(void)
{
  GEN_ENTER(0x1072420u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0cd8) = ((code *)REFP(0x97ccd0));
  *(gen_code32 *)&REFG(undefined, 0x14a0ce0) = ((code *)REFP(0x97cd00));
  *(undefined4 *)&REFG(undefined, 0x14a0cdc) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0ce4) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0ce8) = ((code *)REFP(0x97cd00));
  *(undefined4 *)&REFG(undefined, 0x14a0cec) = 0;
  return 0x97cd00;
}

/* ref: FUN_01072460 */
uint F_01072460(void)
{
  GEN_ENTER(0x1072460u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0cf0) = ((code *)REFP(0x9bdda0));
  *(gen_code32 *)&REFG(undefined, 0x14a0cf8) = ((code *)REFP(0x97cfe0));
  *(gen_code32 *)&REFG(undefined, 0x14a0d00) = ((code *)REFP(0x9ab960));
  *(gen_code32 *)&REFG(undefined, 0x14a0d08) = ((code *)REFP(0x9aba80));
  *(undefined4 *)&REFG(undefined, 0x14a0cf4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0cfc) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0d04) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a0d0c) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0d10) = ((code *)REFP(0x97d010));
  *(undefined4 *)&REFG(undefined, 0x14a0d14) = 0;
  return 0x97d010;
}

/* ref: FUN_010724c0 */
uint F_010724c0(void)
{
  GEN_ENTER(0x10724c0u, 0u, 0u, 0u, 0u);
  *(gen_code32 *)&REFG(undefined, 0x14a0d18) = ((code *)REFP(0x97d170));
  *(undefined4 *)&REFG(undefined, 0x14a0d1c) = 0;
  *(gen_code32 *)&REFG(undefined, 0x14a0d20) = ((code *)REFP(0x97d1a0));
  *(undefined4 *)&REFG(undefined, 0x14a0d24) = 0;
  return 0x97d1a0;
}

/* ref: FUN_010724f0 */
unsigned int F_010724f0(void)
{
  GEN_ENTER(0x10724f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a0a64) = REFG(float, 0x132f4e0);
  return 0;
}

/* ref: FUN_01072510 */
unsigned int F_01072510(void)
{
  GEN_ENTER(0x1072510u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a0a68) = REFG(float, 0x132f510);
  return 0;
}

/* ref: FUN_01072530 */
uint F_01072530(void)
{
  GEN_ENTER(0x1072530u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x14a0a70) = F_004296a0(0x14,0,0xcf);
  *(uint *)REFG(undefined4, 0x14a0a70) = REFG(undefined4, 0x14a0a70);
  *(uint *)(REFG(undefined4, 0x14a0a70) + 4) = REFG(undefined4, 0x14a0a70);
  *(uint *)(REFG(undefined4, 0x14a0a70) + 8) = REFG(undefined4, 0x14a0a70);
  *(undefined1 *)(REFG(undefined4, 0x14a0a70) + 0x10) = 1;
  *(undefined1 *)(REFG(undefined4, 0x14a0a70) + 0x11) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107c370)));
  return uVar1;
}

/* ref: FUN_01072580 */
uint F_01072580(void)
{
  GEN_ENTER(0x1072580u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x14a0a80) = F_004296a0(0x14,0,0xd0);
  *(uint *)REFG(undefined4, 0x14a0a80) = REFG(undefined4, 0x14a0a80);
  *(uint *)(REFG(undefined4, 0x14a0a80) + 4) = REFG(undefined4, 0x14a0a80);
  *(uint *)(REFG(undefined4, 0x14a0a80) + 8) = REFG(undefined4, 0x14a0a80);
  *(undefined1 *)(REFG(undefined4, 0x14a0a80) + 0x10) = 1;
  *(undefined1 *)(REFG(undefined4, 0x14a0a80) + 0x11) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107c3b0)));
  return uVar1;
}

/* ref: FUN_010725d0 */
uint F_010725d0(void)
{
  GEN_ENTER(0x10725d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
  uVar1 = F_00c47de6(((code *)REFP(0x107c330)));
  return uVar1;
}

/* ref: FUN_010725f0 */
uint F_010725f0(void)
{
  GEN_ENTER(0x10725f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0aa4));
  uVar1 = F_00c47de6(((code *)REFP(0x107c340)));
  return uVar1;
}

/* ref: FUN_01072610 */
unsigned int F_01072610(void)
{
  GEN_ENTER(0x1072610u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a0abc) =
       (float)((float10)*(float *)&REFG(undefined, 0x132f56c) + (float10)*(double *)&REFG(undefined, 0x1088070));
  return 0;
}

/* ref: FUN_01072630 */
unsigned int F_01072630(void)
{
  GEN_ENTER(0x1072630u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a0ac0) =
       (float)((float10)*(float *)&REFG(undefined, 0x132f570) + (float10)*(double *)&REFG(undefined, 0x1088070));
  return 0;
}

/* ref: FUN_01072650 */
uint F_01072650(void)
{
  GEN_ENTER(0x1072650u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c3f0)));
  return uVar1;
}

/* ref: FUN_01072660 */
unsigned int F_01072660(void)
{
  GEN_ENTER(0x1072660u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2448) = REFG(float, 0x133329c);
  return 0;
}

/* ref: FUN_01072680 */
unsigned int F_01072680(void)
{
  GEN_ENTER(0x1072680u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a244c) = REFG(float, 0x13332cc);
  return 0;
}

/* ref: FUN_010726a0 */
unsigned int F_010726a0(void)
{
  GEN_ENTER(0x10726a0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2480) = REFG(float, 0x1333468);
  return 0;
}

/* ref: FUN_010726c0 */
unsigned int F_010726c0(void)
{
  GEN_ENTER(0x10726c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2484) = REFG(float, 0x1333498);
  return 0;
}

/* ref: FUN_010726e0 */
uint F_010726e0(void)
{
  GEN_ENTER(0x10726e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c400)));
  return uVar1;
}

/* ref: FUN_010726f0 */
unsigned int F_010726f0(void)
{
  GEN_ENTER(0x10726f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2678) = REFG(float, 0x1333908);
  return 0;
}

/* ref: FUN_01072710 */
unsigned int F_01072710(void)
{
  GEN_ENTER(0x1072710u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a267c) = REFG(float, 0x1333938);
  return 0;
}

/* ref: FUN_01072730 */
uint F_01072730(void)
{
  GEN_ENTER(0x1072730u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2680),&REFG(undefined, 0x10e23f8),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c420)));
  return uVar1;
}

/* ref: FUN_01072760 */
uint F_01072760(void)
{
  GEN_ENTER(0x1072760u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a26d8),&REFG(undefined, 0x10e23fc),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c430)));
  return uVar1;
}

/* ref: FUN_01072790 */
uint F_01072790(void)
{
  GEN_ENTER(0x1072790u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined4, 0x14a2730));
  uVar1 = F_00c47de6(((code *)REFP(0x107c440)));
  return uVar1;
}

/* ref: FUN_010727b0 */
uint F_010727b0(void)
{
  GEN_ENTER(0x10727b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined4, 0x14a2788));
  uVar1 = F_00c47de6(((code *)REFP(0x107c450)));
  return uVar1;
}

/* ref: FUN_010727d0 */
uint F_010727d0(void)
{
  GEN_ENTER(0x10727d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14a27e0));
  uVar1 = F_00c47de6(((code *)REFP(0x107c460)));
  return uVar1;
}

/* ref: FUN_010727f0 */
uint F_010727f0(void)
{
  GEN_ENTER(0x10727f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14a2838));
  uVar1 = F_00c47de6(((code *)REFP(0x107c470)));
  return uVar1;
}

/* ref: FUN_01072810 */
uint F_01072810(void)
{
  GEN_ENTER(0x1072810u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14a2890));
  uVar1 = F_00c47de6(((code *)REFP(0x107c480)));
  return uVar1;
}

/* ref: FUN_01072830 */
uint F_01072830(void)
{
  GEN_ENTER(0x1072830u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c490)));
  return uVar1;
}

/* ref: FUN_01072840 */
uint F_01072840(void)
{
  GEN_ENTER(0x1072840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c4a0)));
  return uVar1;
}

/* ref: FUN_01072850 */
uint F_01072850(void)
{
  GEN_ENTER(0x1072850u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c4b0)));
  return uVar1;
}

/* ref: FUN_01072860 */
unsigned int F_01072860(void)
{
  GEN_ENTER(0x1072860u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2b14) = REFG(float, 0x1333bf8);
  return 0;
}

/* ref: FUN_01072880 */
unsigned int F_01072880(void)
{
  GEN_ENTER(0x1072880u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a2b18) = REFG(float, 0x1333c28);
  return 0;
}

/* ref: FUN_010728a0 */
uint F_010728a0(void)
{
  GEN_ENTER(0x10728a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2e70),"[gteq]",REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c4d0)));
  return uVar1;
}

/* ref: FUN_010728d0 */
uint F_010728d0(void)
{
  GEN_ENTER(0x10728d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2ec8),&REFG(undefined, 0x10e38c8),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c4e0)));
  return uVar1;
}

/* ref: FUN_01072900 */
uint F_01072900(void)
{
  GEN_ENTER(0x1072900u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2f20),"[lteq]",REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c4f0)));
  return uVar1;
}

/* ref: FUN_01072930 */
uint F_01072930(void)
{
  GEN_ENTER(0x1072930u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2f78),&REFG(undefined, 0x10e38d8),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c500)));
  return uVar1;
}

/* ref: FUN_01072960 */
uint F_01072960(void)
{
  GEN_ENTER(0x1072960u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a2fd0),&REFG(undefined, 0x10e38e0),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c510)));
  return uVar1;
}

/* ref: FUN_01072990 */
uint F_01072990(void)
{
  GEN_ENTER(0x1072990u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a3028),"[neq]",REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c520)));
  return uVar1;
}

/* ref: FUN_010729c0 */
uint F_010729c0(void)
{
  GEN_ENTER(0x10729c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00a2f470(&REFG(undefined4, 0x1333cc8),"<[error]>",9);
  uVar1 = F_00c47de6(((code *)REFP(0x107c590)));
  return uVar1;
}

/* ref: FUN_010729e0 */
uint F_010729e0(void)
{
  GEN_ENTER(0x10729e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a3080),(*(undefined * PTR32 (*)[1])REFP(0x10e3de8)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c530)));
  return uVar1;
}

/* ref: FUN_01072a10 */
uint F_01072a10(void)
{
  GEN_ENTER(0x1072a10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a30d8),(*(undefined * PTR32 (*)[1])REFP(0x10e3e54)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c540)));
  return uVar1;
}

/* ref: FUN_01072a40 */
uint F_01072a40(void)
{
  GEN_ENTER(0x1072a40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a3130),(*(undefined * PTR32 (*)[1])REFP(0x10e3e58)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c550)));
  return uVar1;
}

/* ref: FUN_01072a70 */
uint F_01072a70(void)
{
  GEN_ENTER(0x1072a70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x14a3188),&REFG(undefined, 0x10e3e5c),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c560)));
  return uVar1;
}

/* ref: FUN_01072aa0 */
unsigned int F_01072aa0(void)
{
  GEN_ENTER(0x1072aa0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a4218) = REFG(float, 0x1333f14);
  return 0;
}

/* ref: FUN_01072ac0 */
unsigned int F_01072ac0(void)
{
  GEN_ENTER(0x1072ac0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a421c) = REFG(float, 0x1333f44);
  return 0;
}

/* ref: FUN_01072ae0 */
unsigned int F_01072ae0(void)
{
  GEN_ENTER(0x1072ae0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a4220) =
       (float)((float10)*(float *)&REFG(undefined, 0x1333fa0) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_01072b00 */
unsigned int F_01072b00(void)
{
  GEN_ENTER(0x1072b00u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a4228) = REFG(float, 0x1334184);
  return 0;
}

/* ref: FUN_01072b20 */
unsigned int F_01072b20(void)
{
  GEN_ENTER(0x1072b20u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a422c) = REFG(float, 0x13341b4);
  return 0;
}

/* ref: FUN_01072b40 */
uint F_01072b40(void)
{
  GEN_ENTER(0x1072b40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00a4a200(&REFG(undefined, 0x14a4230));
  uVar1 = F_00c47de6(((code *)REFP(0x107c5d0)));
  return uVar1;
}

/* ref: FUN_01072b60 */
unsigned int F_01072b60(void)
{
  GEN_ENTER(0x1072b60u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a73bc) = REFG(float, 0x13344a0);
  return 0;
}

/* ref: FUN_01072b80 */
unsigned int F_01072b80(void)
{
  GEN_ENTER(0x1072b80u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a73c0) = REFG(float, 0x13344d0);
  return 0;
}

/* ref: FUN_01072ba0 */
unsigned int F_01072ba0(void)
{
  GEN_ENTER(0x1072ba0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a73e0) = REFG(float, 0x133488c);
  return 0;
}

/* ref: FUN_01072bc0 */
unsigned int F_01072bc0(void)
{
  GEN_ENTER(0x1072bc0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a73e4) = REFG(float, 0x13348bc);
  return 0;
}

/* ref: FUN_01072be0 */
unsigned int F_01072be0(void)
{
  GEN_ENTER(0x1072be0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a73e8) =
       (float)((float10)*(float *)&REFG(undefined, 0x1334918) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_01072c00 */
uint F_01072c00(void)
{
  GEN_ENTER(0x1072c00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00a5e240(&REFG(undefined, 0x1334944),0x32);
  F_00a5e430(&REFG(undefined, 0x1334954),0x14);
  F_00a5e600(&REFG(undefined, 0x1334964),100);
  uVar1 = F_00c47de6(((code *)REFP(0x107c610)));
  return uVar1;
}

/* ref: FUN_01072c30 */
uint F_01072c30(void)
{
  GEN_ENTER(0x1072c30u, 0u, 0u, 0u, 0u);
  undefined1 gen_out[0x4];
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00edfd00(&REFG(undefined, 0x14a73f0));
  REFG(undefined4, 0x14a7404) = 0;
  REFG(undefined4, 0x14a7408) = 0;
  REFG(undefined4, 0x14a740c) = 0;
  REFG(undefined4, 0x14a7414) = 0;
  REFG(undefined4, 0x14a7418) = 0;
  REFG(undefined4, 0x14a741c) = 0;
  REFG(undefined4, 0x14a7420) = 0;
  REFG(undefined4, 0x14a7424) = 0;
  uVar2 = F_00c47de6(((code *)REFP(0x107c600)));
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return uVar2;
}

/* ref: FUN_01072ca0 */
uint F_01072ca0(void)
{
  GEN_ENTER(0x1072ca0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00f95800(&REFG(undefined, 0x14a7470));
  uVar1 = F_00c47de6(((code *)REFP(0x107c5f0)));
  return uVar1;
}

/* ref: FUN_01072cc0 */
unsigned int F_01072cc0(void)
{
  GEN_ENTER(0x1072cc0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9710) = REFG(float, 0x1334a7c);
  return 0;
}

/* ref: FUN_01072ce0 */
unsigned int F_01072ce0(void)
{
  GEN_ENTER(0x1072ce0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9714) = REFG(float, 0x1334aac);
  return 0;
}

/* ref: FUN_01072d00 */
unsigned int F_01072d00(void)
{
  GEN_ENTER(0x1072d00u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9720) = REFG(float, 0x1334ce0);
  return 0;
}

/* ref: FUN_01072d20 */
unsigned int F_01072d20(void)
{
  GEN_ENTER(0x1072d20u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9724) = REFG(float, 0x1334d10);
  return 0;
}

/* ref: FUN_01072d40 */
uint F_01072d40(void)
{
  GEN_ENTER(0x1072d40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a63a90(&REFG(undefined, 0x14a9728));
  return uVar1;
}

/* ref: FUN_01072d50 */
unsigned int F_01072d50(void)
{
  GEN_ENTER(0x1072d50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9a10) = REFG(float, 0x1334f48);
  return 0;
}

/* ref: FUN_01072d70 */
unsigned int F_01072d70(void)
{
  GEN_ENTER(0x1072d70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9a14) = REFG(float, 0x1334f78);
  return 0;
}

/* ref: FUN_01072d90 */
unsigned int F_01072d90(void)
{
  GEN_ENTER(0x1072d90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9e34) = REFG(float, 0x1335764);
  return 0;
}

/* ref: FUN_01072db0 */
unsigned int F_01072db0(void)
{
  GEN_ENTER(0x1072db0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a9e38) = REFG(float, 0x1335794);
  return 0;
}

/* ref: FUN_01072dd0 */
unsigned int F_01072dd0(void)
{
  GEN_ENTER(0x1072dd0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14a9e3c) =
       (float)((float10)*(float *)&REFG(undefined, 0x13357f0) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_01072df0 */
uint F_01072df0(void)
{
  GEN_ENTER(0x1072df0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00a9e8f0(&REFG(undefined, 0x14a9e40));
  uVar1 = F_00c47de6(((code *)REFP(0x107c680)));
  return uVar1;
}

/* ref: FUN_01072e10 */
unsigned int F_01072e10(void)
{
  GEN_ENTER(0x1072e10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14b5178) = REFG(float, 0x133604c);
  return 0;
}

/* ref: FUN_01072e30 */
unsigned int F_01072e30(void)
{
  GEN_ENTER(0x1072e30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14b517c) = REFG(float, 0x133607c);
  return 0;
}

/* ref: FUN_01072e50 */
unsigned int F_01072e50(void)
{
  GEN_ENTER(0x1072e50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bcc70) = REFG(float, 0x13363e8);
  return 0;
}

/* ref: FUN_01072e70 */
unsigned int F_01072e70(void)
{
  GEN_ENTER(0x1072e70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bcc74) = REFG(float, 0x1336418);
  return 0;
}

/* ref: FUN_01072e90 */
uint F_01072e90(void)
{
  GEN_ENTER(0x1072e90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c700)));
  return uVar1;
}

/* ref: FUN_01072ea0 */
unsigned int F_01072ea0(void)
{
  GEN_ENTER(0x1072ea0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bcf30) = REFG(float, 0x1336784);
  return 0;
}

/* ref: FUN_01072ec0 */
unsigned int F_01072ec0(void)
{
  GEN_ENTER(0x1072ec0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bcf34) = REFG(float, 0x13367b4);
  return 0;
}

/* ref: FUN_01072ee0 */
unsigned int F_01072ee0(void)
{
  GEN_ENTER(0x1072ee0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14bcf38) =
       (float)((float10)*(float *)&REFG(undefined, 0x1336810) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_01072f00 */
unsigned int F_01072f00(void)
{
  GEN_ENTER(0x1072f00u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bee58) = REFG(float, 0x13369f0);
  return 0;
}

/* ref: FUN_01072f20 */
unsigned int F_01072f20(void)
{
  GEN_ENTER(0x1072f20u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14bee5c) = REFG(float, 0x1336a20);
  return 0;
}

/* ref: FUN_01072f40 */
uint F_01072f40(void)
{
  GEN_ENTER(0x1072f40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c710)));
  return uVar1;
}

/* ref: FUN_01072f50 */
unsigned int F_01072f50(void)
{
  GEN_ENTER(0x1072f50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0868) = REFG(float, 0x1336cd4);
  return 0;
}

/* ref: FUN_01072f70 */
unsigned int F_01072f70(void)
{
  GEN_ENTER(0x1072f70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c086c) = REFG(float, 0x1336d04);
  return 0;
}

/* ref: FUN_01072f90 */
unsigned int F_01072f90(void)
{
  GEN_ENTER(0x1072f90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0870) = REFG(float, 0x1336dac);
  return 0;
}

/* ref: FUN_01072fb0 */
unsigned int F_01072fb0(void)
{
  GEN_ENTER(0x1072fb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0874) = REFG(float, 0x1336ddc);
  return 0;
}

/* ref: FUN_01072fd0 */
unsigned int F_01072fd0(void)
{
  GEN_ENTER(0x1072fd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c09d8) = REFG(float, 0x1338cb8);
  return 0;
}

/* ref: FUN_01072ff0 */
unsigned int F_01072ff0(void)
{
  GEN_ENTER(0x1072ff0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c09dc) = REFG(float, 0x1338ce8);
  return 0;
}

/* ref: FUN_01073010 */
uint F_01073010(void)
{
  GEN_ENTER(0x1073010u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14c09e0));
  uVar1 = F_00c47de6(((code *)REFP(0x107c760)));
  return uVar1;
}

/* ref: FUN_01073030 */
uint F_01073030(void)
{
  GEN_ENTER(0x1073030u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c770)));
  return uVar1;
}

/* ref: FUN_01073040 */
unsigned int F_01073040(void)
{
  GEN_ENTER(0x1073040u, 0u, 0u, 0u, 0u);
  REFG(float, 0x14c0a48) = REFG(float, 0x1339b08);
  return 0;
}

/* ref: FUN_01073060 */
unsigned int F_01073060(void)
{
  GEN_ENTER(0x1073060u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0a4c) = REFG(float, 0x1339b38);
  return 0;
}

/* ref: FUN_01073080 */
uint F_01073080(void)
{
  GEN_ENTER(0x1073080u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00affcd0(&REFG(undefined, 0x14c0a50));
  uVar1 = F_00c47de6(((code *)REFP(0x107c780)));
  return uVar1;
}

/* ref: FUN_010730a0 */
unsigned int F_010730a0(void)
{
  GEN_ENTER(0x10730a0u, 0u, 0u, 0u, 0u);
  REFG(float, 0x1339ba0) = REFG(float, 0x1339af0);
  return 0;
}

/* ref: FUN_010730c0 */
unsigned int F_010730c0(void)
{
  GEN_ENTER(0x10730c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0cf0) = REFG(float, 0x1339e00);
  return 0;
}

/* ref: FUN_010730e0 */
unsigned int F_010730e0(void)
{
  GEN_ENTER(0x10730e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0cf4) = REFG(float, 0x1339e30);
  return 0;
}

/* ref: FUN_01073100 */
unsigned int F_01073100(void)
{
  GEN_ENTER(0x1073100u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0cfc) = REFG(float, 0x133a068);
  return 0;
}

/* ref: FUN_01073120 */
unsigned int F_01073120(void)
{
  GEN_ENTER(0x1073120u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c0d00) = REFG(float, 0x133a098);
  return 0;
}

/* ref: FUN_01073140 */
unsigned int F_01073140(void)
{
  GEN_ENTER(0x1073140u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14c0d04) =
       (float)((float10)*(float *)&REFG(undefined, 0x133a0f4) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_01073160 */
uint F_01073160(void)
{
  GEN_ENTER(0x1073160u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a1b0d0(&REFG(undefined, 0x14c0d70));
  return uVar1;
}

/* ref: FUN_01073170 */
uint F_01073170(void)
{
  GEN_ENTER(0x1073170u, 0u, 0u, 0u, 0u);
  short sVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = (short)REFG(undefined4, 0x133a594) + *(short *)&REFG(undefined, 0x14c1ec0);
  sVar3 = (short)((uint)REFG(undefined4, 0x133a594) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c1ec0) = CONCAT22(sVar1,*(short *)&REFG(undefined, 0x14c1ec0));
  sVar1 = (short)REFG(undefined4, 0x133a598) + sVar3;
  sVar4 = (short)((uint)REFG(undefined4, 0x133a598) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c1ec4) = CONCAT22(sVar1,sVar3);
  sVar1 = (short)REFG(undefined4, 0x133a59c) + sVar4;
  sVar3 = (short)((uint)REFG(undefined4, 0x133a59c) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c1ec8) = CONCAT22(sVar1,sVar4);
  *(int *)&REFG(undefined, 0x14c1ecc) = CONCAT22(*(undefined2 *)&REFG(undefined, 0x14c1ece),sVar3);
  uVar2 = REFG(int, 0x133a5a0) + *(int *)&REFG(undefined, 0x14c1ecc);
  *(int *)&REFG(undefined, 0x14c1ecc) = CONCAT22((short)uVar2,sVar3);
  return uVar2;
}

/* ref: FUN_010731f0 */
uint F_010731f0(void)
{
  GEN_ENTER(0x10731f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c870)));
  return uVar1;
}

/* ref: FUN_01073200 */
uint F_01073200(void)
{
  GEN_ENTER(0x1073200u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x14c4c10));
  uVar1 = F_00c47de6(((code *)REFP(0x107c840)));
  return uVar1;
}

/* ref: FUN_01073220 */
uint F_01073220(void)
{
  GEN_ENTER(0x1073220u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined4, 0x14c4c68),&REFG(undefined, 0x10f1298),REFG(undefined4, 0x108cc50));
  REFG(undefined4, 0x14c4cbc) = 0x22;
  F_0042cc20(&REFG(undefined4, 0x14c4cc0),&REFG(undefined, 0x10f1290),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4d14) = 0x27;
  F_0042cc20(&REFG(undefined, 0x14c4d18),(*(undefined * PTR32 (*)[1])REFP(0x10f128c)),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4d6c) = 0x26;
  F_0042cc20(&REFG(undefined, 0x14c4d70),&REFG(undefined, 0x10f1288),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4dc4) = 0x3c;
  F_0042cc20(&REFG(undefined, 0x14c4dc8),&REFG(undefined, 0x10f1284),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4e1c) = 0x3e;
  F_0042cc20(&REFG(undefined, 0x14c4e20),&REFG(undefined, 0x10f1266),REFG(undefined4, 0x108cc50));
  *(undefined4 *)&REFG(undefined, 0x14c4e74) = 0;
  uVar1 = F_00c47de6(((code *)REFP(0x107c850)));
  return uVar1;
}

/* ref: FUN_010732f0 */
unsigned int F_010732f0(void)
{
  GEN_ENTER(0x10732f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e7c) = REFG(float, 0x133b2a8);
  return 0;
}

/* ref: FUN_01073310 */
unsigned int F_01073310(void)
{
  GEN_ENTER(0x1073310u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e80) = REFG(float, 0x133b2d8);
  return 0;
}

/* ref: FUN_01073330 */
unsigned int F_01073330(void)
{
  GEN_ENTER(0x1073330u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e88) = REFG(float, 0x133b3fc);
  return 0;
}

/* ref: FUN_01073350 */
unsigned int F_01073350(void)
{
  GEN_ENTER(0x1073350u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e8c) = REFG(float, 0x133b42c);
  return 0;
}

/* ref: FUN_01073370 */
unsigned int F_01073370(void)
{
  GEN_ENTER(0x1073370u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e94) = REFG(float, 0x133c2c0);
  return 0;
}

/* ref: FUN_01073390 */
unsigned int F_01073390(void)
{
  GEN_ENTER(0x1073390u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4e98) = REFG(float, 0x133c2f0);
  return 0;
}

/* ref: FUN_010733b0 */
unsigned int F_010733b0(void)
{
  GEN_ENTER(0x10733b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ea8) = REFG(float, 0x133cb74);
  return 0;
}

/* ref: FUN_010733d0 */
unsigned int F_010733d0(void)
{
  GEN_ENTER(0x10733d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4eac) = REFG(float, 0x133cba4);
  return 0;
}

/* ref: FUN_010733f0 */
unsigned int F_010733f0(void)
{
  GEN_ENTER(0x10733f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4eb0) = REFG(float, 0x133ccf8);
  return 0;
}

/* ref: FUN_01073410 */
unsigned int F_01073410(void)
{
  GEN_ENTER(0x1073410u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4eb4) = REFG(float, 0x133cd28);
  return 0;
}

/* ref: FUN_01073430 */
unsigned int F_01073430(void)
{
  GEN_ENTER(0x1073430u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4eb8) = REFG(float, 0x133cec0);
  return 0;
}

/* ref: FUN_01073450 */
unsigned int F_01073450(void)
{
  GEN_ENTER(0x1073450u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ebc) = REFG(float, 0x133cef0);
  return 0;
}

/* ref: FUN_01073470 */
unsigned int F_01073470(void)
{
  GEN_ENTER(0x1073470u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ecc) = REFG(float, 0x133cf98);
  return 0;
}

/* ref: FUN_01073490 */
unsigned int F_01073490(void)
{
  GEN_ENTER(0x1073490u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ed0) = REFG(float, 0x133cfc8);
  return 0;
}

/* ref: FUN_010734b0 */
unsigned int F_010734b0(void)
{
  GEN_ENTER(0x10734b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ed4) = REFG(float, 0x133d12c);
  return 0;
}

/* ref: FUN_010734d0 */
unsigned int F_010734d0(void)
{
  GEN_ENTER(0x10734d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ed8) = REFG(float, 0x133d15c);
  return 0;
}

/* ref: FUN_010734f0 */
unsigned int F_010734f0(void)
{
  GEN_ENTER(0x10734f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ee4) = REFG(float, 0x133d2cc);
  return 0;
}

/* ref: FUN_01073510 */
unsigned int F_01073510(void)
{
  GEN_ENTER(0x1073510u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c4ee8) = REFG(float, 0x133d2fc);
  return 0;
}

/* ref: FUN_01073530 */
unsigned int F_01073530(void)
{
  GEN_ENTER(0x1073530u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5788) = REFG(float, 0x133dedc);
  return 0;
}

/* ref: FUN_01073550 */
unsigned int F_01073550(void)
{
  GEN_ENTER(0x1073550u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c578c) = REFG(float, 0x133df0c);
  return 0;
}

/* ref: FUN_01073570 */
unsigned int F_01073570(void)
{
  GEN_ENTER(0x1073570u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14c5790) =
       (float)((float10)*(float *)&REFG(undefined, 0x133df68) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_01073590 */
unsigned int F_01073590(void)
{
  GEN_ENTER(0x1073590u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5898) = REFG(float, 0x133e038);
  return 0;
}

/* ref: FUN_010735b0 */
unsigned int F_010735b0(void)
{
  GEN_ENTER(0x10735b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c589c) = REFG(float, 0x133e068);
  return 0;
}

/* ref: FUN_010735d0 */
unsigned int F_010735d0(void)
{
  GEN_ENTER(0x10735d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c58a0) = REFG(float, 0x133e2c8);
  return 0;
}

/* ref: FUN_010735f0 */
unsigned int F_010735f0(void)
{
  GEN_ENTER(0x10735f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c58a4) = REFG(float, 0x133e2f8);
  return 0;
}

/* ref: FUN_01073610 */
unsigned int F_01073610(void)
{
  GEN_ENTER(0x1073610u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c58a8) = REFG(float, 0x133e530);
  return 0;
}

/* ref: FUN_01073630 */
unsigned int F_01073630(void)
{
  GEN_ENTER(0x1073630u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c58ac) = REFG(float, 0x133e560);
  return 0;
}

/* ref: FUN_01073650 */
uint F_01073650(void)
{
  GEN_ENTER(0x1073650u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c8c0)));
  return uVar1;
}

/* ref: FUN_01073660 */
unsigned int F_01073660(void)
{
  GEN_ENTER(0x1073660u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14c58b0) =
       (float)((float10)*(float *)&REFG(undefined, 0x133e994) * (float10)*(float *)&REFG(undefined, 0x133e994));
  return 0;
}

/* ref: FUN_01073670 */
unsigned int F_01073670(void)
{
  GEN_ENTER(0x1073670u, 0u, 0u, 0u, 0u);
  F_00a1b190(&REFG(undefined, 0x14c58c4));
  return 0;
}

/* ref: FUN_01073680 */
unsigned int F_01073680(void)
{
  GEN_ENTER(0x1073680u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c590c) = REFG(float, 0x133f064);
  return 0;
}

/* ref: FUN_010736a0 */
unsigned int F_010736a0(void)
{
  GEN_ENTER(0x10736a0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5910) = REFG(float, 0x133f094);
  return 0;
}

/* ref: FUN_010736c0 */
uint F_010736c0(void)
{
  GEN_ENTER(0x10736c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c8e0)));
  return uVar1;
}

/* ref: FUN_010736d0 */
uint F_010736d0(void)
{
  GEN_ENTER(0x10736d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c8f0)));
  return uVar1;
}

/* ref: FUN_010736e0 */
unsigned int F_010736e0(void)
{
  GEN_ENTER(0x10736e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5914) = REFG(float, 0x13403f0);
  return 0;
}

/* ref: FUN_01073700 */
unsigned int F_01073700(void)
{
  GEN_ENTER(0x1073700u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5918) = REFG(float, 0x1340420);
  return 0;
}

/* ref: FUN_01073720 */
unsigned int F_01073720(void)
{
  GEN_ENTER(0x1073720u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5920) = REFG(float, 0x1340918);
  return 0;
}

/* ref: FUN_01073740 */
unsigned int F_01073740(void)
{
  GEN_ENTER(0x1073740u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5924) = REFG(float, 0x1340948);
  return 0;
}

/* ref: FUN_01073760 */
unsigned int F_01073760(void)
{
  GEN_ENTER(0x1073760u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5928) = REFG(float, 0x1340bd0);
  return 0;
}

/* ref: FUN_01073780 */
unsigned int F_01073780(void)
{
  GEN_ENTER(0x1073780u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c592c) = REFG(float, 0x1340c00);
  return 0;
}

/* ref: FUN_010737a0 */
uint F_010737a0(void)
{
  GEN_ENTER(0x10737a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c930)));
  return uVar1;
}

/* ref: FUN_010737b0 */
unsigned int F_010737b0(void)
{
  GEN_ENTER(0x10737b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5930) = REFG(float, 0x1340ef8);
  return 0;
}

/* ref: FUN_010737d0 */
unsigned int F_010737d0(void)
{
  GEN_ENTER(0x10737d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5934) = REFG(float, 0x1340f28);
  return 0;
}

/* ref: FUN_010737f0 */
unsigned int F_010737f0(void)
{
  GEN_ENTER(0x10737f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c593c) = REFG(float, 0x1341240);
  return 0;
}

/* ref: FUN_01073810 */
unsigned int F_01073810(void)
{
  GEN_ENTER(0x1073810u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5940) = REFG(float, 0x1341270);
  return 0;
}

/* ref: FUN_01073830 */
unsigned int F_01073830(void)
{
  GEN_ENTER(0x1073830u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5944) = REFG(float, 0x1341350);
  return 0;
}

/* ref: FUN_01073850 */
unsigned int F_01073850(void)
{
  GEN_ENTER(0x1073850u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5948) = REFG(float, 0x1341380);
  return 0;
}

/* ref: FUN_01073870 */
unsigned int F_01073870(void)
{
  GEN_ENTER(0x1073870u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c594c) = REFG(float, 0x1341620);
  return 0;
}

/* ref: FUN_01073890 */
unsigned int F_01073890(void)
{
  GEN_ENTER(0x1073890u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5950) = REFG(float, 0x1341650);
  return 0;
}

/* ref: FUN_010738b0 */
unsigned int F_010738b0(void)
{
  GEN_ENTER(0x10738b0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x14c5954) =
       (float)((float10)*(float *)&REFG(undefined, 0x13416ac) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_010738d0 */
uint F_010738d0(void)
{
  GEN_ENTER(0x10738d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x14c5960) = F_004296a0(0xc,0,0x25a);
  *(uint *)REFG(undefined4, 0x14c5960) = REFG(undefined4, 0x14c5960);
  *(uint *)(REFG(undefined4, 0x14c5960) + 4) = REFG(undefined4, 0x14c5960);
  uVar1 = F_00c47de6(((code *)REFP(0x107c940)));
  return uVar1;
}

/* ref: FUN_01073900 */
unsigned int F_01073900(void)
{
  GEN_ENTER(0x1073900u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5984) = REFG(float, 0x1341c88);
  return 0;
}

/* ref: FUN_01073920 */
unsigned int F_01073920(void)
{
  GEN_ENTER(0x1073920u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5988) = REFG(float, 0x1341cb8);
  return 0;
}

/* ref: FUN_01073940 */
uint F_01073940(void)
{
  GEN_ENTER(0x1073940u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c950)));
  return uVar1;
}

/* ref: FUN_01073950 */
unsigned int F_01073950(void)
{
  GEN_ENTER(0x1073950u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59a0) = REFG(float, 0x1341e24);
  return 0;
}

/* ref: FUN_01073970 */
unsigned int F_01073970(void)
{
  GEN_ENTER(0x1073970u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59a4) = REFG(float, 0x1341e54);
  return 0;
}

/* ref: FUN_01073990 */
unsigned int F_01073990(void)
{
  GEN_ENTER(0x1073990u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59a8) = REFG(float, 0x13420bc);
  return 0;
}

/* ref: FUN_010739b0 */
unsigned int F_010739b0(void)
{
  GEN_ENTER(0x10739b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59ac) = REFG(float, 0x13420ec);
  return 0;
}

/* ref: FUN_010739d0 */
unsigned int F_010739d0(void)
{
  GEN_ENTER(0x10739d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59b0) = REFG(float, 0x1342320);
  return 0;
}

/* ref: FUN_010739f0 */
unsigned int F_010739f0(void)
{
  GEN_ENTER(0x10739f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59b4) = REFG(float, 0x1342350);
  return 0;
}

/* ref: FUN_01073a10 */
unsigned int F_01073a10(void)
{
  GEN_ENTER(0x1073a10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59b8) = REFG(float, 0x13423f8);
  return 0;
}

/* ref: FUN_01073a30 */
unsigned int F_01073a30(void)
{
  GEN_ENTER(0x1073a30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59bc) = REFG(float, 0x1342428);
  return 0;
}

/* ref: FUN_01073a50 */
unsigned int F_01073a50(void)
{
  GEN_ENTER(0x1073a50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59c0) = REFG(float, 0x1342690);
  return 0;
}

/* ref: FUN_01073a70 */
unsigned int F_01073a70(void)
{
  GEN_ENTER(0x1073a70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59c4) = REFG(float, 0x13426c0);
  return 0;
}

/* ref: FUN_01073a90 */
unsigned int F_01073a90(void)
{
  GEN_ENTER(0x1073a90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59c8) = REFG(float, 0x1342920);
  return 0;
}

/* ref: FUN_01073ab0 */
unsigned int F_01073ab0(void)
{
  GEN_ENTER(0x1073ab0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59cc) = REFG(float, 0x1342950);
  return 0;
}

/* ref: FUN_01073ad0 */
unsigned int F_01073ad0(void)
{
  GEN_ENTER(0x1073ad0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59d0) = REFG(float, 0x13429fc);
  return 0;
}

/* ref: FUN_01073af0 */
unsigned int F_01073af0(void)
{
  GEN_ENTER(0x1073af0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59d4) = REFG(float, 0x1342a2c);
  return 0;
}

/* ref: FUN_01073b10 */
unsigned int F_01073b10(void)
{
  GEN_ENTER(0x1073b10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59d8) = REFG(float, 0x1342bc8);
  return 0;
}

/* ref: FUN_01073b30 */
unsigned int F_01073b30(void)
{
  GEN_ENTER(0x1073b30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c59dc) = REFG(float, 0x1342bf8);
  return 0;
}

/* ref: FUN_01073b50 */
uint F_01073b50(void)
{
  GEN_ENTER(0x1073b50u, 0u, 0u, 0u, 0u);
  short sVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = (short)REFG(undefined4, 0x1342d68) + *(short *)&REFG(undefined, 0x14c5a14);
  sVar3 = (short)((uint)REFG(undefined4, 0x1342d68) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c5a14) = CONCAT22(sVar1,*(short *)&REFG(undefined, 0x14c5a14));
  sVar1 = (short)REFG(undefined4, 0x1342d6c) + sVar3;
  sVar4 = (short)((uint)REFG(undefined4, 0x1342d6c) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c5a18) = CONCAT22(sVar1,sVar3);
  sVar1 = (short)REFG(undefined4, 0x1342d70) + sVar4;
  sVar3 = (short)((uint)REFG(undefined4, 0x1342d70) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x14c5a1c) = CONCAT22(sVar1,sVar4);
  *(int *)&REFG(undefined, 0x14c5a20) = CONCAT22(*(undefined2 *)&REFG(undefined, 0x14c5a22),sVar3);
  uVar2 = REFG(int, 0x1342d74) + *(int *)&REFG(undefined, 0x14c5a20);
  *(int *)&REFG(undefined, 0x14c5a20) = CONCAT22((short)uVar2,sVar3);
  return uVar2;
}

/* ref: FUN_01073bd0 */
unsigned int F_01073bd0(void)
{
  GEN_ENTER(0x1073bd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a24) = REFG(float, 0x1342ec8);
  return 0;
}

/* ref: FUN_01073bf0 */
unsigned int F_01073bf0(void)
{
  GEN_ENTER(0x1073bf0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a28) = REFG(float, 0x1342ef8);
  return 0;
}

/* ref: FUN_01073c10 */
unsigned int F_01073c10(void)
{
  GEN_ENTER(0x1073c10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a2c) = REFG(float, 0x13430fc);
  return 0;
}

/* ref: FUN_01073c30 */
unsigned int F_01073c30(void)
{
  GEN_ENTER(0x1073c30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a30) = REFG(float, 0x134312c);
  return 0;
}

/* ref: FUN_01073c50 */
unsigned int F_01073c50(void)
{
  GEN_ENTER(0x1073c50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a34) = REFG(float, 0x13431dc);
  return 0;
}

/* ref: FUN_01073c70 */
unsigned int F_01073c70(void)
{
  GEN_ENTER(0x1073c70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a38) = REFG(float, 0x134320c);
  return 0;
}

/* ref: FUN_01073c90 */
unsigned int F_01073c90(void)
{
  GEN_ENTER(0x1073c90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a3c) = REFG(float, 0x134335c);
  return 0;
}

/* ref: FUN_01073cb0 */
unsigned int F_01073cb0(void)
{
  GEN_ENTER(0x1073cb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a40) = REFG(float, 0x134338c);
  return 0;
}

/* ref: FUN_01073cd0 */
unsigned int F_01073cd0(void)
{
  GEN_ENTER(0x1073cd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a44) = REFG(float, 0x1343434);
  return 0;
}

/* ref: FUN_01073cf0 */
unsigned int F_01073cf0(void)
{
  GEN_ENTER(0x1073cf0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a48) = REFG(float, 0x1343464);
  return 0;
}

/* ref: FUN_01073d10 */
unsigned int F_01073d10(void)
{
  GEN_ENTER(0x1073d10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a4c) = REFG(float, 0x134350c);
  return 0;
}

/* ref: FUN_01073d30 */
unsigned int F_01073d30(void)
{
  GEN_ENTER(0x1073d30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a50) = REFG(float, 0x134353c);
  return 0;
}

/* ref: FUN_01073d50 */
unsigned int F_01073d50(void)
{
  GEN_ENTER(0x1073d50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a54) = REFG(float, 0x13436a0);
  return 0;
}

/* ref: FUN_01073d70 */
unsigned int F_01073d70(void)
{
  GEN_ENTER(0x1073d70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a58) = REFG(float, 0x13436d0);
  return 0;
}

/* ref: FUN_01073d90 */
unsigned int F_01073d90(void)
{
  GEN_ENTER(0x1073d90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a5c) = REFG(float, 0x1343778);
  return 0;
}

/* ref: FUN_01073db0 */
unsigned int F_01073db0(void)
{
  GEN_ENTER(0x1073db0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a60) = REFG(float, 0x13437a8);
  return 0;
}

/* ref: FUN_01073dd0 */
unsigned int F_01073dd0(void)
{
  GEN_ENTER(0x1073dd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a64) = REFG(float, 0x1343850);
  return 0;
}

/* ref: FUN_01073df0 */
unsigned int F_01073df0(void)
{
  GEN_ENTER(0x1073df0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a68) = REFG(float, 0x1343880);
  return 0;
}

/* ref: FUN_01073e10 */
unsigned int F_01073e10(void)
{
  GEN_ENTER(0x1073e10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a6c) = REFG(float, 0x1343928);
  return 0;
}

/* ref: FUN_01073e30 */
unsigned int F_01073e30(void)
{
  GEN_ENTER(0x1073e30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a70) = REFG(float, 0x1343958);
  return 0;
}

/* ref: FUN_01073e50 */
unsigned int F_01073e50(void)
{
  GEN_ENTER(0x1073e50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a74) = REFG(float, 0x1343a00);
  return 0;
}

/* ref: FUN_01073e70 */
unsigned int F_01073e70(void)
{
  GEN_ENTER(0x1073e70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a78) = REFG(float, 0x1343a30);
  return 0;
}

/* ref: FUN_01073e90 */
unsigned int F_01073e90(void)
{
  GEN_ENTER(0x1073e90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a7c) = REFG(float, 0x1343ad8);
  return 0;
}

/* ref: FUN_01073eb0 */
unsigned int F_01073eb0(void)
{
  GEN_ENTER(0x1073eb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a80) = REFG(float, 0x1343b08);
  return 0;
}

/* ref: FUN_01073ed0 */
unsigned int F_01073ed0(void)
{
  GEN_ENTER(0x1073ed0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a84) = REFG(float, 0x1343bb0);
  return 0;
}

/* ref: FUN_01073ef0 */
unsigned int F_01073ef0(void)
{
  GEN_ENTER(0x1073ef0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a88) = REFG(float, 0x1343be0);
  return 0;
}

/* ref: FUN_01073f10 */
unsigned int F_01073f10(void)
{
  GEN_ENTER(0x1073f10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a8c) = REFG(float, 0x1343e1c);
  return 0;
}

/* ref: FUN_01073f30 */
unsigned int F_01073f30(void)
{
  GEN_ENTER(0x1073f30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a90) = REFG(float, 0x1343e4c);
  return 0;
}

/* ref: FUN_01073f50 */
unsigned int F_01073f50(void)
{
  GEN_ENTER(0x1073f50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a94) = REFG(float, 0x1344080);
  return 0;
}

/* ref: FUN_01073f70 */
unsigned int F_01073f70(void)
{
  GEN_ENTER(0x1073f70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a98) = REFG(float, 0x13440b0);
  return 0;
}

/* ref: FUN_01073f90 */
unsigned int F_01073f90(void)
{
  GEN_ENTER(0x1073f90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5a9c) = REFG(float, 0x1344324);
  return 0;
}

/* ref: FUN_01073fb0 */
unsigned int F_01073fb0(void)
{
  GEN_ENTER(0x1073fb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5aa0) = REFG(float, 0x1344354);
  return 0;
}

/* ref: FUN_01073fd0 */
unsigned int F_01073fd0(void)
{
  GEN_ENTER(0x1073fd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5aa4) = REFG(float, 0x134443c);
  return 0;
}

/* ref: FUN_01073ff0 */
unsigned int F_01073ff0(void)
{
  GEN_ENTER(0x1073ff0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5aa8) = REFG(float, 0x134446c);
  return 0;
}

/* ref: FUN_01074010 */
unsigned int F_01074010(void)
{
  GEN_ENTER(0x1074010u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ac0) = REFG(float, 0x1344550);
  return 0;
}

/* ref: FUN_01074030 */
unsigned int F_01074030(void)
{
  GEN_ENTER(0x1074030u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ac4) = REFG(float, 0x1344580);
  return 0;
}

/* ref: FUN_01074050 */
unsigned int F_01074050(void)
{
  GEN_ENTER(0x1074050u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ac8) = REFG(float, 0x1344664);
  return 0;
}

/* ref: FUN_01074070 */
unsigned int F_01074070(void)
{
  GEN_ENTER(0x1074070u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5acc) = REFG(float, 0x1344694);
  return 0;
}

/* ref: FUN_01074090 */
unsigned int F_01074090(void)
{
  GEN_ENTER(0x1074090u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ad0) = REFG(float, 0x1344778);
  return 0;
}

/* ref: FUN_010740b0 */
unsigned int F_010740b0(void)
{
  GEN_ENTER(0x10740b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ad4) = REFG(float, 0x13447a8);
  return 0;
}

/* ref: FUN_010740d0 */
unsigned int F_010740d0(void)
{
  GEN_ENTER(0x10740d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ad8) = REFG(float, 0x13448cc);
  return 0;
}

/* ref: FUN_010740f0 */
unsigned int F_010740f0(void)
{
  GEN_ENTER(0x10740f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5adc) = REFG(float, 0x13448fc);
  return 0;
}

/* ref: FUN_01074110 */
unsigned int F_01074110(void)
{
  GEN_ENTER(0x1074110u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ae0) = REFG(float, 0x13449e4);
  return 0;
}

/* ref: FUN_01074130 */
unsigned int F_01074130(void)
{
  GEN_ENTER(0x1074130u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ae4) = REFG(float, 0x1344a14);
  return 0;
}

/* ref: FUN_01074150 */
unsigned int F_01074150(void)
{
  GEN_ENTER(0x1074150u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5ae8) = REFG(float, 0x1344b3c);
  return 0;
}

/* ref: FUN_01074170 */
unsigned int F_01074170(void)
{
  GEN_ENTER(0x1074170u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5aec) = REFG(float, 0x1344b6c);
  return 0;
}

/* ref: FUN_01074190 */
unsigned int F_01074190(void)
{
  GEN_ENTER(0x1074190u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5af0) = REFG(float, 0x1344c58);
  return 0;
}

/* ref: FUN_010741b0 */
unsigned int F_010741b0(void)
{
  GEN_ENTER(0x10741b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5af4) = REFG(float, 0x1344c88);
  return 0;
}

/* ref: FUN_010741d0 */
unsigned int F_010741d0(void)
{
  GEN_ENTER(0x10741d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5af8) = REFG(float, 0x1344da8);
  return 0;
}

/* ref: FUN_010741f0 */
unsigned int F_010741f0(void)
{
  GEN_ENTER(0x10741f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5afc) = REFG(float, 0x1344dd8);
  return 0;
}

/* ref: FUN_01074210 */
unsigned int F_01074210(void)
{
  GEN_ENTER(0x1074210u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b00) = REFG(float, 0x1344ebc);
  return 0;
}

/* ref: FUN_01074230 */
unsigned int F_01074230(void)
{
  GEN_ENTER(0x1074230u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b04) = REFG(float, 0x1344eec);
  return 0;
}

/* ref: FUN_01074250 */
unsigned int F_01074250(void)
{
  GEN_ENTER(0x1074250u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b0c) = REFG(float, 0x1344fd0);
  return 0;
}

/* ref: FUN_01074270 */
unsigned int F_01074270(void)
{
  GEN_ENTER(0x1074270u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b10) = REFG(float, 0x1345000);
  return 0;
}

/* ref: FUN_01074290 */
unsigned int F_01074290(void)
{
  GEN_ENTER(0x1074290u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b14) = REFG(float, 0x1345290);
  return 0;
}

/* ref: FUN_010742b0 */
unsigned int F_010742b0(void)
{
  GEN_ENTER(0x10742b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b18) = REFG(float, 0x13452c0);
  return 0;
}

/* ref: FUN_010742d0 */
unsigned int F_010742d0(void)
{
  GEN_ENTER(0x10742d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b1c) = REFG(float, 0x13453b0);
  return 0;
}

/* ref: FUN_010742f0 */
unsigned int F_010742f0(void)
{
  GEN_ENTER(0x10742f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b20) = REFG(float, 0x13453e0);
  return 0;
}

/* ref: FUN_01074310 */
unsigned int F_01074310(void)
{
  GEN_ENTER(0x1074310u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b24) = REFG(float, 0x13454c4);
  return 0;
}

/* ref: FUN_01074330 */
unsigned int F_01074330(void)
{
  GEN_ENTER(0x1074330u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b28) = REFG(float, 0x13454f4);
  return 0;
}

/* ref: FUN_01074350 */
unsigned int F_01074350(void)
{
  GEN_ENTER(0x1074350u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b2c) = REFG(float, 0x13455e0);
  return 0;
}

/* ref: FUN_01074370 */
unsigned int F_01074370(void)
{
  GEN_ENTER(0x1074370u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b30) = REFG(float, 0x1345610);
  return 0;
}

/* ref: FUN_01074390 */
unsigned int F_01074390(void)
{
  GEN_ENTER(0x1074390u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b34) = REFG(float, 0x134573c);
  return 0;
}

/* ref: FUN_010743b0 */
unsigned int F_010743b0(void)
{
  GEN_ENTER(0x10743b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b38) = REFG(float, 0x134576c);
  return 0;
}

/* ref: FUN_010743d0 */
unsigned int F_010743d0(void)
{
  GEN_ENTER(0x10743d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b3c) = REFG(float, 0x1345850);
  return 0;
}

/* ref: FUN_010743f0 */
unsigned int F_010743f0(void)
{
  GEN_ENTER(0x10743f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b40) = REFG(float, 0x1345880);
  return 0;
}

/* ref: FUN_01074410 */
unsigned int F_01074410(void)
{
  GEN_ENTER(0x1074410u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b44) = REFG(float, 0x13459e0);
  return 0;
}

/* ref: FUN_01074430 */
unsigned int F_01074430(void)
{
  GEN_ENTER(0x1074430u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b48) = REFG(float, 0x1345a10);
  return 0;
}

/* ref: FUN_01074450 */
unsigned int F_01074450(void)
{
  GEN_ENTER(0x1074450u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b4c) = REFG(float, 0x1345b40);
  return 0;
}

/* ref: FUN_01074470 */
unsigned int F_01074470(void)
{
  GEN_ENTER(0x1074470u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b50) = REFG(float, 0x1345b70);
  return 0;
}

/* ref: FUN_01074490 */
unsigned int F_01074490(void)
{
  GEN_ENTER(0x1074490u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b54) = REFG(float, 0x1345c54);
  return 0;
}

/* ref: FUN_010744b0 */
unsigned int F_010744b0(void)
{
  GEN_ENTER(0x10744b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b58) = REFG(float, 0x1345c84);
  return 0;
}

/* ref: FUN_010744d0 */
unsigned int F_010744d0(void)
{
  GEN_ENTER(0x10744d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b5c) = REFG(float, 0x1345d64);
  return 0;
}

/* ref: FUN_010744f0 */
unsigned int F_010744f0(void)
{
  GEN_ENTER(0x10744f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b60) = REFG(float, 0x1345d94);
  return 0;
}

/* ref: FUN_01074510 */
unsigned int F_01074510(void)
{
  GEN_ENTER(0x1074510u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b64) = REFG(float, 0x1345e70);
  return 0;
}

/* ref: FUN_01074530 */
unsigned int F_01074530(void)
{
  GEN_ENTER(0x1074530u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b68) = REFG(float, 0x1345ea0);
  return 0;
}

/* ref: FUN_01074550 */
unsigned int F_01074550(void)
{
  GEN_ENTER(0x1074550u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b6c) = REFG(float, 0x1345f80);
  return 0;
}

/* ref: FUN_01074570 */
unsigned int F_01074570(void)
{
  GEN_ENTER(0x1074570u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b70) = REFG(float, 0x1345fb0);
  return 0;
}

/* ref: FUN_01074590 */
unsigned int F_01074590(void)
{
  GEN_ENTER(0x1074590u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b74) = REFG(float, 0x1346094);
  return 0;
}

/* ref: FUN_010745b0 */
unsigned int F_010745b0(void)
{
  GEN_ENTER(0x10745b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b78) = REFG(float, 0x13460c4);
  return 0;
}

/* ref: FUN_010745d0 */
unsigned int F_010745d0(void)
{
  GEN_ENTER(0x10745d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b7c) = REFG(float, 0x13461a8);
  return 0;
}

/* ref: FUN_010745f0 */
unsigned int F_010745f0(void)
{
  GEN_ENTER(0x10745f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b80) = REFG(float, 0x13461d8);
  return 0;
}

/* ref: FUN_01074610 */
unsigned int F_01074610(void)
{
  GEN_ENTER(0x1074610u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b84) = REFG(float, 0x13462b4);
  return 0;
}

/* ref: FUN_01074630 */
unsigned int F_01074630(void)
{
  GEN_ENTER(0x1074630u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b88) = REFG(float, 0x13462e4);
  return 0;
}

/* ref: FUN_01074650 */
unsigned int F_01074650(void)
{
  GEN_ENTER(0x1074650u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b8c) = REFG(float, 0x1346410);
  return 0;
}

/* ref: FUN_01074670 */
unsigned int F_01074670(void)
{
  GEN_ENTER(0x1074670u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b90) = REFG(float, 0x1346440);
  return 0;
}

/* ref: FUN_01074690 */
unsigned int F_01074690(void)
{
  GEN_ENTER(0x1074690u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b94) = REFG(float, 0x134659c);
  return 0;
}

/* ref: FUN_010746b0 */
unsigned int F_010746b0(void)
{
  GEN_ENTER(0x10746b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b98) = REFG(float, 0x13465cc);
  return 0;
}

/* ref: FUN_010746d0 */
unsigned int F_010746d0(void)
{
  GEN_ENTER(0x10746d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14c5b9c) = REFG(float, 0x13466ac);
  return 0;
}

