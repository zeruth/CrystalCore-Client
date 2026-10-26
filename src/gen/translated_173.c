#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00dc6f70 */
uint F_00dc6f70(unsigned int gen_a0)
{
  GEN_ENTER(0xdc6f70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00dc6e40(param_1,"annotationTracks");
  return uVar1;
}

/* ref: FUN_00dc6f90 */
uint F_00dc6f90(unsigned int gen_a0)
{
  GEN_ENTER(0xdc6f90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x14)),"old_intArrayOffsets");
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)))));
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),"intArrayOffsets");
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,0);
  ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,0,uVar4);
  ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,1,0);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,1);
  ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,2,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,2);
  ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,3,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,3);
  ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,4,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,4);
  ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,5,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,5);
  ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,6,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,6);
  ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,7,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,7);
  ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,8,uVar4);
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))
            ((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x4)),"firstFloatBlockScaleAndOffsetIndex");
  uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),0xffffffff);
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar4 = ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    uVar4 = ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
  }
  return uVar4;
}

/* ref: FUN_00dc7120 */
uint F_00dc7120(unsigned int gen_a0)
{
  GEN_ENTER(0xdc7120u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e0dd0) = "hkaSkeletonMapperData";
    *(char * PTR32 *)&REFG(undefined, 0x15e0dd4) = "hkaSkeletonMapperData";
    *(undefined4 *)&REFG(undefined, 0x15e0dd8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0ddc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0de0) = &REFG(undefined, 0x1140594);
    *(undefined4 *)&REFG(undefined, 0x15e0de4) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0dd0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 2;
    *(char * PTR32 *)&REFG(undefined, 0x15e0db8) = "hkaSkeleton";
    *(char * PTR32 *)&REFG(undefined, 0x15e0dbc) = "hkaSkeleton";
    *(undefined4 *)&REFG(undefined, 0x15e0dc0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0dc4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0dc8) = &REFG(undefined, 0x1140564);
    *(undefined4 *)&REFG(undefined, 0x15e0dcc) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0db8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e0da0) = "hkaSkeleton";
    *(char * PTR32 *)&REFG(undefined, 0x15e0da4) = "hkaSkeleton";
    *(undefined4 *)&REFG(undefined, 0x15e0da8) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e0dac) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0db0) = &REFG(undefined, 0x1140554);
    *(undefined4 *)&REFG(undefined, 0x15e0db4) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0da0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 8;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d88) = "hkaAnimationBinding";
    *(char * PTR32 *)&REFG(undefined, 0x15e0d8c) = "hkaAnimationBinding";
    *(undefined4 *)&REFG(undefined, 0x15e0d90) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d94) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d98) = &REFG(undefined, 0x1140544);
    *(undefined4 *)&REFG(undefined, 0x15e0d9c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0d88));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x10;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d70) = "hkaBoneAttachment";
    *(char * PTR32 *)&REFG(undefined, 0x15e0d74) = "hkaBoneAttachment";
    *(undefined4 *)&REFG(undefined, 0x15e0d78) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d7c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d80) = &REFG(undefined, 0x1140534);
    *(undefined4 *)&REFG(undefined, 0x15e0d84) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0d70));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x20;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d58) = "hkaMeshBinding";
    *(char * PTR32 *)&REFG(undefined, 0x15e0d5c) = "hkaMeshBinding";
    *(undefined4 *)&REFG(undefined, 0x15e0d60) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d64) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d68) = &REFG(undefined, 0x1140524);
    *(undefined4 *)&REFG(undefined, 0x15e0d6c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0d58));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x40;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d40) = "hkaAnimation";
    *(char * PTR32 *)&REFG(undefined, 0x15e0d44) = "hkaAnimation";
    *(undefined4 *)&REFG(undefined, 0x15e0d48) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d4c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d50) = &REFG(undefined, 0x11404f4);
    *(undefined4 *)&REFG(undefined, 0x15e0d54) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0d40));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x80;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d28) = "hkaAnimationContainer";
    *(char * PTR32 *)&REFG(undefined, 0x15e0d2c) = "hkaAnimationContainer";
    *(undefined4 *)&REFG(undefined, 0x15e0d30) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d34) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d38) = &REFG(undefined, 0x11404e4);
    *(undefined4 *)&REFG(undefined, 0x15e0d3c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0d28));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e0d10) = "hkaAnimationPreviewColorContainer";
    *(char * PTR32 *)&REFG(undefined, 0x15e0d14) = "hkaAnimationPreviewColorContainer";
    *(undefined4 *)&REFG(undefined, 0x15e0d18) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d1c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d20) = &REFG(undefined, 0x11404bc);
    *(undefined4 *)&REFG(undefined, 0x15e0d24) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0d10));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x200;
    *(char * PTR32 *)&REFG(undefined, 0x15e0cf8) = "hkaAnimationPreviewColor";
    *(undefined4 *)&REFG(undefined, 0x15e0cfc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d00) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0d04) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0d08) = &REFG(undefined, 0x1140490);
    *(undefined4 *)&REFG(undefined, 0x15e0d0c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0cf8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x400;
    *(char * PTR32 *)&REFG(undefined, 0x15e0ce0) = "hkaFootstepAnalysisInfo";
    *(char * PTR32 *)&REFG(undefined, 0x15e0ce4) = "hkaFootstepAnalysisInfo";
    *(undefined4 *)&REFG(undefined, 0x15e0ce8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0cec) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0cf0) = &REFG(undefined, 0x1140480);
    *(undefined4 *)&REFG(undefined, 0x15e0cf4) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0ce0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x800;
    *(char * PTR32 *)&REFG(undefined, 0x15e0cc8) = "hkaFootstepAnalysisInfoContainer";
    *(char * PTR32 *)&REFG(undefined, 0x15e0ccc) = "hkaFootstepAnalysisInfoContainer";
    *(undefined4 *)&REFG(undefined, 0x15e0cd0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0cd4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0cd8) = &REFG(undefined, 0x1140470);
    *(undefined4 *)&REFG(undefined, 0x15e0cdc) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0cc8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x1000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0cb0) = "hkaSkeleton";
    *(char * PTR32 *)&REFG(undefined, 0x15e0cb4) = "hkaSkeleton";
    *(undefined4 *)&REFG(undefined, 0x15e0cb8) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e0cbc) = 3;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0cc0) = &REFG(undefined, 0x1140458);
    *(undefined4 *)&REFG(undefined, 0x15e0cc4) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0cb0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e0c98) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c9c) = "hkaQuantizedAnimationTrackCompressionParams";
    *(undefined4 *)&REFG(undefined, 0x15e0ca0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ca4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ca8) = &REFG(undefined, 0x1140430);
    *(undefined4 *)&REFG(undefined, 0x15e0cac) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0c98));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e0c80) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c84) = "hkaQuantizedAnimation";
    *(undefined4 *)&REFG(undefined, 0x15e0c88) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0c8c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c90) = &REFG(undefined, 0x11403f8);
    *(undefined4 *)&REFG(undefined, 0x15e0c94) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0c80));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x8000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c68) = "hkaMeshBinding";
    *(char * PTR32 *)&REFG(undefined, 0x15e0c6c) = "hkaMeshBinding";
    *(undefined4 *)&REFG(undefined, 0x15e0c70) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e0c74) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c78) = &REFG(undefined, 0x11403e8);
    *(undefined4 *)&REFG(undefined, 0x15e0c7c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0c68));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x10000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c50) = "hkaWaveletCompressedAnimationCompressionParams";
    *(undefined4 *)&REFG(undefined, 0x15e0c54) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c58) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c5c) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c60) = &REFG(undefined, 0x1140360);
    *(undefined4 *)&REFG(undefined, 0x15e0c64) = 10;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0c50));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x20000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c38) = "hkaDeltaCompressedAnimationQuantizationFormat";
    *(undefined4 *)&REFG(undefined, 0x15e0c3c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c40) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c44) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c48) = &REFG(undefined, 0x11402f4);
    *(undefined4 *)&REFG(undefined, 0x15e0c4c) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0c38));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x40000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c20) = "hkaWaveletCompressedAnimationQuantizationFormat";
    *(undefined4 *)&REFG(undefined, 0x15e0c24) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c28) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c2c) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c30) = &REFG(undefined, 0x114028c);
    *(undefined4 *)&REFG(undefined, 0x15e0c34) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0c20));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x80000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0c08) = "hkaDeltaCompressedAnimation";
    *(undefined4 *)&REFG(undefined, 0x15e0c0c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c10) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0c14) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c18) = &REFG(undefined, 0x11401d0);
    *(undefined4 *)&REFG(undefined, 0x15e0c1c) = 0x13;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0c08));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x100000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0bf0) = "hkaWaveletCompressedAnimation";
    *(undefined4 *)&REFG(undefined, 0x15e0bf4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0bf8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0bfc) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0c00) = &REFG(undefined, 0x1140120);
    *(undefined4 *)&REFG(undefined, 0x15e0c04) = 0x11;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0bf0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x200000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0bd8) = "hkaAnimation";
    *(char * PTR32 *)&REFG(undefined, 0x15e0bdc) = "hkaAnimation";
    *(undefined4 *)&REFG(undefined, 0x15e0be0) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e0be4) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0be8) = &REFG(undefined, 0x1140110);
    *(undefined4 *)&REFG(undefined, 0x15e0bec) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0bd8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x400000;
    *(undefined4 *)&REFG(undefined, 0x15e0bc0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0bc4) = "hkaPredictiveCompressedAnimationTrackCompressionParams";
    *(undefined4 *)&REFG(undefined, 0x15e0bc8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0bcc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0bd0) = &REFG(undefined, 0x11400c8);
    *(undefined4 *)&REFG(undefined, 0x15e0bd4) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0bc0));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x800000;
    *(undefined4 *)&REFG(undefined, 0x15e0ba8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0bac) = "hkaPredictiveCompressedAnimation";
    *(undefined4 *)&REFG(undefined, 0x15e0bb0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0bb4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0bb8) = &REFG(undefined, 0x1140060);
    *(undefined4 *)&REFG(undefined, 0x15e0bbc) = 0xc;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0ba8));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x1000000;
    *(undefined4 *)&REFG(undefined, 0x15e0b98) = 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e0b90) = "hkaBoneAttachment";
    *(char * PTR32 *)&REFG(undefined, 0x15e0b94) = "hkaBoneAttachment";
    *(undefined4 *)&REFG(undefined, 0x15e0b9c) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ba0) = &REFG(undefined, 0x1140038);
    *(undefined4 *)&REFG(undefined, 0x15e0ba4) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0b90));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0b78) = "hkaMeshBinding";
    *(char * PTR32 *)&REFG(undefined, 0x15e0b7c) = "hkaMeshBinding";
    *(undefined4 *)&REFG(undefined, 0x15e0b80) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e0b84) = 3;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0b88) = &REFG(undefined, 0x1140010);
    *(undefined4 *)&REFG(undefined, 0x15e0b8c) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0b78));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0b60) = "hkaAnimation";
    *(char * PTR32 *)&REFG(undefined, 0x15e0b64) = "hkaAnimation";
    *(undefined4 *)&REFG(undefined, 0x15e0b68) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e0b6c) = 3;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0b70) = &REFG(undefined, 0x113ffe8);
    *(undefined4 *)&REFG(undefined, 0x15e0b74) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0b60));
  if ((*(uint *)&REFG(undefined, 0x15e0de8) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e0de8) = *(uint *)&REFG(undefined, 0x15e0de8) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0b48) = "hkaPredictiveCompressedAnimation";
    *(char * PTR32 *)&REFG(undefined, 0x15e0b4c) = "hkaPredictiveCompressedAnimation";
    *(undefined4 *)&REFG(undefined, 0x15e0b50) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0b54) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0b58) = &REFG(undefined, 0x113ffb8);
    *(undefined4 *)&REFG(undefined, 0x15e0b5c) = 5;
  }
  uVar1 = F_00ded650(param_1,&REFG(undefined, 0x15e0b48));
  return uVar1;
}

/* ref: FUN_00dc79e0 */
uint F_00dc79e0(void)
{
  GEN_ENTER(0xdc79e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00dc7120(REFG(undefined4, 0x15e3734));
  return uVar1;
}

/* ref: FUN_00dc79f0 */
uint F_00dc79f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdc79f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4));
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *(short *)(uVar1 + 6) = *(short *)(uVar1 + 6) + 1;
    *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dc7a60 */
uint F_00dc7a60(unsigned int gen_a0)
{
  GEN_ENTER(0xdc7a60u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 1;
    *(undefined4 *)&REFG(undefined, 0x15e1378) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e137c) = "hkcdDynamicTreeCodec18";
    *(undefined4 *)&REFG(undefined, 0x15e1380) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1384) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1388) = &REFG(undefined, 0x11418c0);
    *(undefined4 *)&REFG(undefined, 0x15e138c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1378));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e1360) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1364) = "hkcdDynamicTreeCodec32";
    *(undefined4 *)&REFG(undefined, 0x15e1368) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e136c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1370) = &REFG(undefined, 0x11418a8);
    *(undefined4 *)&REFG(undefined, 0x15e1374) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1360));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 4;
    *(undefined4 *)&REFG(undefined, 0x15e1348) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e134c) = "hkcdDynamicTreeCodecRawunsignedlong";
    *(undefined4 *)&REFG(undefined, 0x15e1350) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1354) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1358) = &REFG(undefined, 0x1141880);
    *(undefined4 *)&REFG(undefined, 0x15e135c) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1348));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e1330) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1334) = "hkcdDynamicTreeCodecRawunsignedint";
    *(undefined4 *)&REFG(undefined, 0x15e1338) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e133c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1340) = &REFG(undefined, 0x1141858);
    *(undefined4 *)&REFG(undefined, 0x15e1344) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1330));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e1318) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e131c) = "hkcdDynamicTreeCodecRawUint";
    *(undefined4 *)&REFG(undefined, 0x15e1320) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1324) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1328) = &REFG(undefined, 0x1141840);
    *(undefined4 *)&REFG(undefined, 0x15e132c) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1318));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e1300) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1304) = "hkcdDynamicTreeCodecRawUlong";
    *(undefined4 *)&REFG(undefined, 0x15e1308) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e130c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1310) = &REFG(undefined, 0x1141828);
    *(undefined4 *)&REFG(undefined, 0x15e1314) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1300));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e12e8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e12ec) = "hkcdDynamicTreeCentroidMetric";
    *(undefined4 *)&REFG(undefined, 0x15e12f0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e12f4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e12f8) = &REFG(undefined, 0x1141820);
    *(undefined4 *)&REFG(undefined, 0x15e12fc) = 0;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e12e8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x80;
    *(undefined4 *)&REFG(undefined, 0x15e12d0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e12d4) = "hkcdDynamicTreeAnisotropicMetric";
    *(undefined4 *)&REFG(undefined, 0x15e12d8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e12dc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e12e0) = &REFG(undefined, 0x1141818);
    *(undefined4 *)&REFG(undefined, 0x15e12e4) = 0;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e12d0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x100;
    *(undefined4 *)&REFG(undefined, 0x15e12b8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e12bc) = "hkcdDynamicTreeBalanceMetric";
    *(undefined4 *)&REFG(undefined, 0x15e12c0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e12c4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e12c8) = &REFG(undefined, 0x1141810);
    *(undefined4 *)&REFG(undefined, 0x15e12cc) = 0;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e12b8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x200;
    *(undefined4 *)&REFG(undefined, 0x15e12a0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e12a4) =
         "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodec32";
    *(undefined4 *)&REFG(undefined, 0x15e12a8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e12ac) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e12b0) = &REFG(undefined, 0x11417e0);
    *(undefined4 *)&REFG(undefined, 0x15e12b4) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e12a0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x400;
    *(undefined4 *)&REFG(undefined, 0x15e1288) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e128c) = "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodec32";
    *(undefined4 *)&REFG(undefined, 0x15e1290) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1294) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1298) = &REFG(undefined, 0x11417c0);
    *(undefined4 *)&REFG(undefined, 0x15e129c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1288));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e1270) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1274) =
         "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUint"
    ;
    *(undefined4 *)&REFG(undefined, 0x15e1278) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e127c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1280) = &REFG(undefined, 0x1141788);
    *(undefined4 *)&REFG(undefined, 0x15e1284) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1270));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e1258) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e125c) = "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUint";
    *(undefined4 *)&REFG(undefined, 0x15e1260) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1264) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1268) = &REFG(undefined, 0x1141768);
    *(undefined4 *)&REFG(undefined, 0x15e126c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1258));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e1240) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1244) =
         "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUlong"
    ;
    *(undefined4 *)&REFG(undefined, 0x15e1248) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e124c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1250) = &REFG(undefined, 0x1141730);
    *(undefined4 *)&REFG(undefined, 0x15e1254) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1240));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e1228) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e122c) = "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUlong";
    *(undefined4 *)&REFG(undefined, 0x15e1230) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1234) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1238) = &REFG(undefined, 0x1141710);
    *(undefined4 *)&REFG(undefined, 0x15e123c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1228));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x8000;
    *(undefined4 *)&REFG(undefined, 0x15e1210) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1214) = "hkcdDynamicTreeDynamicStorage16";
    *(undefined4 *)&REFG(undefined, 0x15e1218) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e121c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1220) = &REFG(undefined, 0x11416e8);
    *(undefined4 *)&REFG(undefined, 0x15e1224) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1210));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x10000;
    *(undefined4 *)&REFG(undefined, 0x15e11f8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e11fc) = "hkcdDynamicTreeDynamicStoragePtr";
    *(undefined4 *)&REFG(undefined, 0x15e1200) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1204) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1208) = &REFG(undefined, 0x11416c0);
    *(undefined4 *)&REFG(undefined, 0x15e120c) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e11f8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x20000;
    *(undefined4 *)&REFG(undefined, 0x15e11e0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e11e4) = "hkcdDynamicTreeDynamicStorage32";
    *(undefined4 *)&REFG(undefined, 0x15e11e8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e11ec) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e11f0) = &REFG(undefined, 0x1141698);
    *(undefined4 *)&REFG(undefined, 0x15e11f4) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e11e0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x40000;
    *(undefined4 *)&REFG(undefined, 0x15e11c8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e11cc) = "hkcdStaticTreeCodec3Axis";
    *(undefined4 *)&REFG(undefined, 0x15e11d0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e11d4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e11d8) = &REFG(undefined, 0x1141688);
    *(undefined4 *)&REFG(undefined, 0x15e11dc) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e11c8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e11b0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e11b4) = "hkcdStaticTreeCodec3Axis4";
    *(undefined4 *)&REFG(undefined, 0x15e11b8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e11bc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e11c0) = &REFG(undefined, 0x1141668);
    *(undefined4 *)&REFG(undefined, 0x15e11c4) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e11b0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x100000;
    *(undefined4 *)&REFG(undefined, 0x15e1198) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e119c) = "hkcdStaticTreeCodec3Axis5";
    *(undefined4 *)&REFG(undefined, 0x15e11a0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e11a4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e11a8) = &REFG(undefined, 0x1141640);
    *(undefined4 *)&REFG(undefined, 0x15e11ac) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1198));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e1180) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1184) = "hkcdStaticTreeCodec3Axis6";
    *(undefined4 *)&REFG(undefined, 0x15e1188) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e118c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1190) = &REFG(undefined, 0x1141618);
    *(undefined4 *)&REFG(undefined, 0x15e1194) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1180));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x400000;
    *(undefined4 *)&REFG(undefined, 0x15e1168) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e116c) = "hkcdStaticTreeCodecRaw";
    *(undefined4 *)&REFG(undefined, 0x15e1170) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1174) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1178) = &REFG(undefined, 0x1141600);
    *(undefined4 *)&REFG(undefined, 0x15e117c) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1168));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x800000;
    *(undefined4 *)&REFG(undefined, 0x15e1150) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1154) = "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis4";
    *(undefined4 *)&REFG(undefined, 0x15e1158) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e115c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1160) = &REFG(undefined, 0x11415e0);
    *(undefined4 *)&REFG(undefined, 0x15e1164) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1150));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x1000000;
    *(undefined4 *)&REFG(undefined, 0x15e1138) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e113c) = "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis5";
    *(undefined4 *)&REFG(undefined, 0x15e1140) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1144) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1148) = &REFG(undefined, 0x11415c0);
    *(undefined4 *)&REFG(undefined, 0x15e114c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1138));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x2000000;
    *(undefined4 *)&REFG(undefined, 0x15e1120) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1124) = "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis6";
    *(undefined4 *)&REFG(undefined, 0x15e1128) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e112c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1130) = &REFG(undefined, 0x11415a0);
    *(undefined4 *)&REFG(undefined, 0x15e1134) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1120));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x4000000;
    *(undefined4 *)&REFG(undefined, 0x15e1108) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e110c) = "hkcdStaticTreeDynamicStorage4";
    *(undefined4 *)&REFG(undefined, 0x15e1110) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1114) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1118) = &REFG(undefined, 0x1141588);
    *(undefined4 *)&REFG(undefined, 0x15e111c) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1108));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x8000000;
    *(undefined4 *)&REFG(undefined, 0x15e10f0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e10f4) = "hkcdStaticTreeDynamicStorage5";
    *(undefined4 *)&REFG(undefined, 0x15e10f8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e10fc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1100) = &REFG(undefined, 0x1141570);
    *(undefined4 *)&REFG(undefined, 0x15e1104) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e10f0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x10000000;
    *(undefined4 *)&REFG(undefined, 0x15e10d8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e10dc) = "hkcdStaticTreeDynamicStorage6";
    *(undefined4 *)&REFG(undefined, 0x15e10e0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e10e4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e10e8) = &REFG(undefined, 0x1141558);
    *(undefined4 *)&REFG(undefined, 0x15e10ec) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e10d8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x20000000;
    *(undefined4 *)&REFG(undefined, 0x15e10c0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e10c4) = "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRaw";
    *(undefined4 *)&REFG(undefined, 0x15e10c8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e10cc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e10d0) = &REFG(undefined, 0x1141540);
    *(undefined4 *)&REFG(undefined, 0x15e10d4) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e10c0));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x40000000;
    *(undefined4 *)&REFG(undefined, 0x15e10a8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e10ac) = "hkcdStaticTreeDynamicStorage32";
    *(undefined4 *)&REFG(undefined, 0x15e10b0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e10b4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e10b8) = &REFG(undefined, 0x1141528);
    *(undefined4 *)&REFG(undefined, 0x15e10bc) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e10a8));
  if ((*(uint *)&REFG(undefined, 0x15e1390) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1390) = *(uint *)&REFG(undefined, 0x15e1390) | 0x80000000;
    *(undefined4 *)&REFG(undefined, 0x15e1090) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1094) = "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtr";
    *(undefined4 *)&REFG(undefined, 0x15e1098) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e109c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e10a0) = &REFG(undefined, 0x11414e0);
    *(undefined4 *)&REFG(undefined, 0x15e10a4) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1090));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 1;
    *(undefined4 *)&REFG(undefined, 0x15e1074) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1078) = "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage16";
    *(undefined4 *)&REFG(undefined, 0x15e107c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1080) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1084) = &REFG(undefined, 0x1141498);
    *(undefined4 *)&REFG(undefined, 0x15e1088) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1074));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e105c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1060) = "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage32";
    *(undefined4 *)&REFG(undefined, 0x15e1064) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1068) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e106c) = &REFG(undefined, 0x1141450);
    *(undefined4 *)&REFG(undefined, 0x15e1070) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e105c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 4;
    *(undefined4 *)&REFG(undefined, 0x15e1044) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1048) = "hkcdDynamicTreeDefaultTreePtrStorage";
    *(undefined4 *)&REFG(undefined, 0x15e104c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1050) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1054) = &REFG(undefined, 0x1141418);
    *(undefined4 *)&REFG(undefined, 0x15e1058) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1044));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e102c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1030) = "hkcdDynamicTreeDefaultTree32Storage";
    *(undefined4 *)&REFG(undefined, 0x15e1034) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1038) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e103c) = &REFG(undefined, 0x11413e0);
    *(undefined4 *)&REFG(undefined, 0x15e1040) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e102c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e1014) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1018) = "hkcdDynamicTreeDefaultTree48Storage";
    *(undefined4 *)&REFG(undefined, 0x15e101c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1020) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1024) = &REFG(undefined, 0x11413a8);
    *(undefined4 *)&REFG(undefined, 0x15e1028) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1014));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e0ffc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1000) = "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage4";
    *(undefined4 *)&REFG(undefined, 0x15e1004) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1008) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e100c) = &REFG(undefined, 0x1141378);
    *(undefined4 *)&REFG(undefined, 0x15e1010) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0ffc));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e0fe4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0fe8) = "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage5";
    *(undefined4 *)&REFG(undefined, 0x15e0fec) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ff0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ff4) = &REFG(undefined, 0x1141348);
    *(undefined4 *)&REFG(undefined, 0x15e0ff8) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0fe4));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x80;
    *(undefined4 *)&REFG(undefined, 0x15e0fcc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0fd0) = "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6";
    *(undefined4 *)&REFG(undefined, 0x15e0fd4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0fd8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0fdc) = &REFG(undefined, 0x1141318);
    *(undefined4 *)&REFG(undefined, 0x15e0fe0) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0fcc));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x100;
    *(undefined4 *)&REFG(undefined, 0x15e0fb4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0fb8) = "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage32";
    *(undefined4 *)&REFG(undefined, 0x15e0fbc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0fc0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0fc4) = &REFG(undefined, 0x11412e8);
    *(undefined4 *)&REFG(undefined, 0x15e0fc8) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0fb4));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x200;
    *(undefined4 *)&REFG(undefined, 0x15e0f9c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0fa0) = "hkcdStaticTreeDefaultTreeStorage32";
    *(undefined4 *)&REFG(undefined, 0x15e0fa4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0fa8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0fac) = &REFG(undefined, 0x11412c0);
    *(undefined4 *)&REFG(undefined, 0x15e0fb0) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0f9c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x400;
    *(undefined4 *)&REFG(undefined, 0x15e0f84) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f88) = "hkcdStaticTreeDefaultTreeStorage4";
    *(undefined4 *)&REFG(undefined, 0x15e0f8c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f90) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f94) = &REFG(undefined, 0x1141298);
    *(undefined4 *)&REFG(undefined, 0x15e0f98) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0f84));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e0f6c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f70) = "hkcdStaticTreeDefaultTreeStorage5";
    *(undefined4 *)&REFG(undefined, 0x15e0f74) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f78) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f7c) = &REFG(undefined, 0x1141270);
    *(undefined4 *)&REFG(undefined, 0x15e0f80) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0f6c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e0f54) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f58) = "hkcdStaticTreeDefaultTreeStorage6";
    *(undefined4 *)&REFG(undefined, 0x15e0f5c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f60) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f64) = &REFG(undefined, 0x1141248);
    *(undefined4 *)&REFG(undefined, 0x15e0f68) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0f54));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e0f3c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f40) = "hkcdStaticMeshTreeBaseSectionDataRuns";
    *(undefined4 *)&REFG(undefined, 0x15e0f44) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f48) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f4c) = &REFG(undefined, 0x1141238);
    *(undefined4 *)&REFG(undefined, 0x15e0f50) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0f3c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e0f24) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f28) = "hkcdStaticMeshTreeBaseSectionSharedVertices";
    *(undefined4 *)&REFG(undefined, 0x15e0f2c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f30) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f34) = &REFG(undefined, 0x1141228);
    *(undefined4 *)&REFG(undefined, 0x15e0f38) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0f24));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x8000;
    *(undefined4 *)&REFG(undefined, 0x15e0f0c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0f10) = "hkcdStaticMeshTreeBaseSectionPrimitives";
    *(undefined4 *)&REFG(undefined, 0x15e0f14) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f18) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f1c) = &REFG(undefined, 0x1141218);
    *(undefined4 *)&REFG(undefined, 0x15e0f20) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0f0c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x10000;
    *(undefined4 *)&REFG(undefined, 0x15e0ef4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0ef8) = "hkcdStaticMeshTreeBase";
    *(undefined4 *)&REFG(undefined, 0x15e0efc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0f00) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0f04) = &REFG(undefined, 0x1141198);
    *(undefined4 *)&REFG(undefined, 0x15e0f08) = 0xf;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0ef4));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x20000;
    *(undefined4 *)&REFG(undefined, 0x15e0edc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0ee0) = "hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedint";
    *(undefined4 *)&REFG(undefined, 0x15e0ee4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ee8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0eec) = &REFG(undefined, 0x1141140);
    *(undefined4 *)&REFG(undefined, 0x15e0ef0) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0edc));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x40000;
    *(undefined4 *)&REFG(undefined, 0x15e0ec4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0ec8) = "hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedshort";
    *(undefined4 *)&REFG(undefined, 0x15e0ecc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ed0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ed4) = &REFG(undefined, 0x1141120);
    *(undefined4 *)&REFG(undefined, 0x15e0ed8) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0ec4));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e0eac) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0eb0) = "hkcdStaticMeshTreeDefaultDataRun";
    *(undefined4 *)&REFG(undefined, 0x15e0eb4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0eb8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ebc) = &REFG(undefined, 0x1141108);
    *(undefined4 *)&REFG(undefined, 0x15e0ec0) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0eac));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x100000;
    *(undefined4 *)&REFG(undefined, 0x15e0e94) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e98) = "hkcdStaticMeshTreeBaseSection";
    *(undefined4 *)&REFG(undefined, 0x15e0e9c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0ea0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0ea4) = &REFG(undefined, 0x1141080);
    *(undefined4 *)&REFG(undefined, 0x15e0ea8) = 0x10;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0e94));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e0e7c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e80) = "hkcdStaticMeshTreeBasePrimitive";
    *(undefined4 *)&REFG(undefined, 0x15e0e84) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e88) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e8c) = &REFG(undefined, 0x1141070);
    *(undefined4 *)&REFG(undefined, 0x15e0e90) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0e7c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x400000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e64) = "hkcdStaticMeshTreeBaseSection";
    *(char * PTR32 *)&REFG(undefined, 0x15e0e68) = "hkcdStaticMeshTreeBaseSection";
    *(undefined4 *)&REFG(undefined, 0x15e0e6c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e0e70) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e74) = &REFG(undefined, 0x1141060);
    *(undefined4 *)&REFG(undefined, 0x15e0e78) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0e64));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x800000;
    *(undefined4 *)&REFG(undefined, 0x15e0e4c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e50) = "hkcdShapeDispatchType";
    *(undefined4 *)&REFG(undefined, 0x15e0e54) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e58) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e5c) = &REFG(undefined, 0x1141058);
    *(undefined4 *)&REFG(undefined, 0x15e0e60) = 0;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0e4c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x1000000;
    *(undefined4 *)&REFG(undefined, 0x15e0e34) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e38) = "hkcdShapeInfoCodecType";
    *(undefined4 *)&REFG(undefined, 0x15e0e3c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e40) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e44) = &REFG(undefined, 0x1141050);
    *(undefined4 *)&REFG(undefined, 0x15e0e48) = 0;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0e34));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x2000000;
    *(undefined4 *)&REFG(undefined, 0x15e0e1c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e20) = "hkcdShapeType";
    *(undefined4 *)&REFG(undefined, 0x15e0e24) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e28) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e2c) = &REFG(undefined, 0x1141048);
    *(undefined4 *)&REFG(undefined, 0x15e0e30) = 0;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0e1c));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x4000000;
    *(undefined4 *)&REFG(undefined, 0x15e0e04) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e0e08) = "hkcdShape";
    *(undefined4 *)&REFG(undefined, 0x15e0e0c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e0e10) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0e14) = &REFG(undefined, 0x1140ff8);
    *(undefined4 *)&REFG(undefined, 0x15e0e18) = 9;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e0e04));
  if ((*(uint *)&REFG(undefined, 0x15e108c) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e108c) = *(uint *)&REFG(undefined, 0x15e108c) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e0dec) = "hkcdStaticMeshTreeBaseSection";
    *(char * PTR32 *)&REFG(undefined, 0x15e0df0) = "hkcdStaticMeshTreeBaseSection";
    *(undefined4 *)&REFG(undefined, 0x15e0df4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e0df8) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e0dfc) = &REFG(undefined, 0x1140fd8);
    *(undefined4 *)&REFG(undefined, 0x15e0e00) = 3;
  }
  uVar1 = F_00ded650(param_1,&REFG(undefined, 0x15e0dec));
  return uVar1;
}

/* ref: FUN_00dc8d30 */
uint F_00dc8d30(void)
{
  GEN_ENTER(0xdc8d30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00dc7a60(REFG(undefined4, 0x15e3734));
  return uVar1;
}

/* ref: FUN_00dc8d40 */
uint F_00dc8d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdc8d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined2 *)this = *(undefined2 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00dc8d70 */
uint F_00dc8d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdc8d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dc8da0 */
uint F_00dc8da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdc8da0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x2c))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dc8db0 */
uint F_00dc8db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdc8db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 8))))(*(int * PTR32 *)this);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dc8df0 */
uint F_00dc8df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdc8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x34))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4));
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *(short *)(uVar1 + 6) = *(short *)(uVar1 + 6) + 1;
    *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dc8e20 */
uint F_00dc8e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdc8e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))
                    (*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),*param_1);
  return uVar1;
}

/* ref: FUN_00dc8e40 */
uint F_00dc8e40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xdc8e40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x50))(param_1[1],(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00dc8e70 */
uint F_00dc8e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdc8e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))(*(int * PTR32 *)this);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dc8ec0 */
uint F_00dc8ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdc8ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x30))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dc8ee0 */
uint F_00dc8ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdc8ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dc8f00 */
uint F_00dc8f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdc8f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))(*(int * PTR32 *)this,param_2);
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *(short *)(uVar1 + 6) = *(short *)(uVar1 + 6) + 1;
    *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dc8f30 */
uint F_00dc8f30(unsigned int gen_a0)
{
  GEN_ENTER(0xdc8f30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x14)),"old_extraData");
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)))));
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),"extraData");
  uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x5c))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc8fb0 */
uint F_00dc8fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdc8fb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x14)),"old_variant");
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)))));
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),"variant");
  uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x5c))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc9030 */
uint F_00dc9030(unsigned int gen_a0)
{
  GEN_ENTER(0xdc9030u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x14)),"old_texture");
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)))));
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),"texture");
  uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x5c))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc90b0 */
uint F_00dc90b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdc90b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x14)),"old_variant");
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)))));
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),"variant");
  uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x5c))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc9130 */
uint F_00dc9130(unsigned int gen_a0)
{
  GEN_ENTER(0xdc9130u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x14)),"old_value");
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)))));
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),"value");
  uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x5c))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc91b0 */
uint F_00dc91b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdc91b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x14)),"old_object");
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)))));
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
    puVar2[2] = puVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),"object");
  uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x5c))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00dc9230 */
uint F_00dc9230(unsigned int gen_a0)
{
  GEN_ENTER(0xdc9230u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x4)),"timeFactor");
  uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x50))((*(undefined4 *)(gen_frame + 0x8)),REFG(float, 0x1087f04));
  return uVar1;
}

/* ref: FUN_00dc9270 */
uint F_00dc9270(unsigned int gen_a0)
{
  GEN_ENTER(0xdc9270u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x84)),&REFG(undefined, 0x1134e40));
  uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x84)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)));
  uVar1 = uVar1 & 0xffff;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x34)),&REFG(undefined, 0x1134e40));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),0);
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x2c)),"numElements");
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),0);
    return uVar1;
  case 1: ;
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x14)),&REFG(undefined, 0x1134e40));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),1);
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),"numElements");
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x44))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),4);
    break;
  case 2: ;
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x44)),&REFG(undefined, 0x1134e40));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),2);
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x3c)),"numElements");
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),2);
    return uVar1;
  case 3: ;
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x24)),&REFG(undefined, 0x1134e40));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),3);
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x1c)),"numElements");
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),1);
    return uVar1;
  case 4: ;
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x84)),&REFG(undefined, 0x1134e40));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x84)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),4);
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x7c)),"numElements");
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),1);
    return uVar1;
  case 5: ;
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x74)),&REFG(undefined, 0x1134e40));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x74)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),4);
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x6c)),"numElements");
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x6c)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x6c)),(*(undefined4 *)(gen_frame + 0x70)),2);
    return uVar1;
  case 6: ;
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x64)),&REFG(undefined, 0x1134e40));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x64)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),4);
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x5c)),"numElements");
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x5c)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),3);
    return uVar1;
  case 7: ;
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x54)),&REFG(undefined, 0x1134e40));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x54)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),4);
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x4c)),"numElements");
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4c)) + 0x44))((*(int * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),4);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00dc9520 */
uint F_00dc9520(unsigned int gen_a0)
{
  GEN_ENTER(0xdc9520u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x14)),"old_strings");
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)))));
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),"strings");
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,uVar4);
  param_1 = (undefined4 *)0x0;
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  if (0 < (int)uVar4) {
    do {
      piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,param_1)));
      if (piVar5 != (int *)0x0) {
        *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
        piVar5[2] = piVar5[2] + 1;
      }
      ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,&(*(int * PTR32 *)(gen_frame + 0x4)),"string");
      uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x2c))((*(int * PTR32 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3,param_1,uVar4);
      *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
      piVar1 = piVar5 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*piVar5)(piVar5,1);
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
    } while ((int)param_1 < (int)uVar4);
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar5 = piVar3 + 2;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    uVar4 = ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    uVar4 = ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
  }
  return uVar4;
}

/* ref: FUN_00dc9660 */
uint F_00dc9660(unsigned int gen_a0)
{
  GEN_ENTER(0xdc9660u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x10)),"old_userChannels");
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)))));
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x8)),"userChannels");
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,uVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < (int)uVar4) {
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,param_1)));
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,param_1,puVar6);
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = (undefined4 *)uVar5;
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
  }
  return uVar5;
}

/* ref: FUN_00dca470 */
uint F_00dca470(unsigned int gen_a0)
{
  GEN_ENTER(0xdca470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x10)),"mapping");
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)))));
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x8)),"nodeNames");
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,uVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < (int)uVar4) {
    do {
      piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,param_1)));
      if (piVar6 != (int *)0x0) {
        *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
        piVar6[2] = piVar6[2] + 1;
        ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6,&(*(int * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x1135940));
        uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x2c))((*(int * PTR32 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
        ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3,param_1,uVar4);
        *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
        piVar1 = piVar6 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*piVar6)(piVar6,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = (undefined4 *)uVar5;
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar6 = piVar3 + 2;
  *piVar6 = *piVar6 + -1;
  if (*piVar6 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
  }
  return uVar5;
}

/* ref: FUN_00dca5a0 */
uint F_00dca5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdca5a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x10)),"old_attributeGroups");
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)))));
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x8)),"attributeGroups");
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,uVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < (int)uVar4) {
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,param_1)));
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,param_1,puVar6);
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = (undefined4 *)uVar5;
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
  }
  return uVar5;
}

/* ref: FUN_00dca6c0 */
uint F_00dca6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdca6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x10)),"old_indexMappings");
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)))));
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x8)),"indexMappings");
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,uVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < (int)uVar4) {
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,param_1)));
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,param_1,puVar6);
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = (undefined4 *)uVar5;
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
  }
  return uVar5;
}

/* ref: FUN_00dca7e0 */
uint F_00dca7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdca7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x10)),"old_declaredEnums");
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)))));
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x8)),"declaredEnums");
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)))));
  if (piVar3 != (int *)0x0) {
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
    piVar3[2] = piVar3[2] + 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,uVar4);
  param_1 = (undefined4 *)0x0;
  if (0 < (int)uVar4) {
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,param_1)));
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,param_1,puVar6);
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
        }
      }
      uVar5 = (int)param_1 + 1;
      param_1 = (undefined4 *)uVar5;
    } while ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
  piVar1 = piVar3 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar3 = piVar2 + 2;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    uVar5 = ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
  }
  return uVar5;
}

/* ref: FUN_00dca9d0 */
uint F_00dca9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdca9d0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((REFG(undefined4, 0x15e2320) & 1) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x13532e0) = &REFG(undefined, 0x1138ca0);
  }
  if ((REFG(undefined4, 0x15e2320) & 2) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e2308) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e230c) = "hkLocalFrameGroup";
    *(undefined4 *)&REFG(undefined, 0x15e2310) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2314) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2318) = &REFG(undefined, 0x1144a34);
    *(undefined4 *)&REFG(undefined, 0x15e231c) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2308));
  if ((REFG(undefined4, 0x15e2320) & 4) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 4;
    *(undefined4 *)&REFG(undefined, 0x15e22f0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e22f4) = "hkSemanticsAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e22f8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e22fc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2300) = &REFG(undefined, 0x1144a24);
    *(undefined4 *)&REFG(undefined, 0x15e2304) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e22f0));
  if ((REFG(undefined4, 0x15e2320) & 8) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e22d8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e22dc) = "hkRangeInt32Attribute";
    *(undefined4 *)&REFG(undefined, 0x15e22e0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e22e4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e22e8) = &REFG(undefined, 0x11449fc);
    *(undefined4 *)&REFG(undefined, 0x15e22ec) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e22d8));
  if ((REFG(undefined4, 0x15e2320) & 0x10) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e22c0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e22c4) = "hkMeshVertexBuffer";
    *(undefined4 *)&REFG(undefined, 0x15e22c8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e22cc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e22d0) = &REFG(undefined, 0x11449c8);
    *(undefined4 *)&REFG(undefined, 0x15e22d4) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e22c0));
  if ((REFG(undefined4, 0x15e2320) & 0x20) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e22a8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e22ac) = "hkArrayTypeAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e22b0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e22b4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e22b8) = &REFG(undefined, 0x11449b8);
    *(undefined4 *)&REFG(undefined, 0x15e22bc) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e22a8));
  if ((REFG(undefined4, 0x15e2320) & 0x40) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e2290) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2294) = "hkRangeRealAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e2298) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e229c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e22a0) = &REFG(undefined, 0x1144990);
    *(undefined4 *)&REFG(undefined, 0x15e22a4) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2290));
  if ((REFG(undefined4, 0x15e2320) & 0x80) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x80;
    *(undefined4 *)&REFG(undefined, 0x15e2278) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e227c) = "hkDataObjectTypeAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e2280) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2284) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2288) = &REFG(undefined, 0x1144980);
    *(undefined4 *)&REFG(undefined, 0x15e228c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2278));
  if ((REFG(undefined4, 0x15e2320) & 0x100) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x100;
    *(undefined4 *)&REFG(undefined, 0x15e2260) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2264) = "hkLinkAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e2268) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e226c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2270) = &REFG(undefined, 0x1144970);
    *(undefined4 *)&REFG(undefined, 0x15e2274) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2260));
  if ((REFG(undefined4, 0x15e2320) & 0x200) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x200;
    *(undefined4 *)&REFG(undefined, 0x15e2248) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e224c) = "hkDescriptionAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e2250) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2254) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2258) = &REFG(undefined, 0x1144960);
    *(undefined4 *)&REFG(undefined, 0x15e225c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2248));
  if ((REFG(undefined4, 0x15e2320) & 0x400) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x400;
    *(undefined4 *)&REFG(undefined, 0x15e2230) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2234) = "hkMeshShape";
    *(undefined4 *)&REFG(undefined, 0x15e2238) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e223c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2240) = &REFG(undefined, 0x1144934);
    *(undefined4 *)&REFG(undefined, 0x15e2244) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2230));
  if ((REFG(undefined4, 0x15e2320) & 0x800) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e2218) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e221c) = "hkGizmoAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e2220) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2224) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2228) = &REFG(undefined, 0x1144914);
    *(undefined4 *)&REFG(undefined, 0x15e222c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2218));
  if ((REFG(undefined4, 0x15e2320) & 0x1000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e2200) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2204) = "hkMeshSectionCinfo";
    *(undefined4 *)&REFG(undefined, 0x15e2208) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e220c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2210) = &REFG(undefined, 0x1144898);
    *(undefined4 *)&REFG(undefined, 0x15e2214) = 0xc;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2200));
  if ((REFG(undefined4, 0x15e2320) & 0x2000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e21e8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e21ec) = "hkUiAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e21f0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e21f4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e21f8) = &REFG(undefined, 0x114485c);
    *(undefined4 *)&REFG(undefined, 0x15e21fc) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e21e8));
  if ((REFG(undefined4, 0x15e2320) & 0x4000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e21d0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e21d4) = "hkDocumentationAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e21d8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e21dc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e21e0) = &REFG(undefined, 0x114484c);
    *(undefined4 *)&REFG(undefined, 0x15e21e4) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e21d0));
  if ((REFG(undefined4, 0x15e2320) & 0x8000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x8000;
    *(undefined4 *)&REFG(undefined, 0x15e21b8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e21bc) = "hkMemoryMeshShape";
    *(undefined4 *)&REFG(undefined, 0x15e21c0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e21c4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e21c8) = &REFG(undefined, 0x11447e8);
    *(undefined4 *)&REFG(undefined, 0x15e21cc) = 9;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e21b8));
  if ((REFG(undefined4, 0x15e2320) & 0x10000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x10000;
    *(undefined4 *)&REFG(undefined, 0x15e21a0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e21a4) = "hkMeshMaterial";
    *(undefined4 *)&REFG(undefined, 0x15e21a8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e21ac) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e21b0) = &REFG(undefined, 0x11447b8);
    *(undefined4 *)&REFG(undefined, 0x15e21b4) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e21a0));
  if ((REFG(undefined4, 0x15e2320) & 0x20000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x20000;
    *(undefined4 *)&REFG(undefined, 0x15e2188) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e218c) = "hkMeshSection";
    *(undefined4 *)&REFG(undefined, 0x15e2190) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2194) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2198) = &REFG(undefined, 0x1144730);
    *(undefined4 *)&REFG(undefined, 0x15e219c) = 0xe;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2188));
  if ((REFG(undefined4, 0x15e2320) & 0x40000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x40000;
    *(undefined4 *)&REFG(undefined, 0x15e2170) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e2174) = "hkModelerNodeTypeAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e2178) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e217c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2180) = &REFG(undefined, 0x114471c);
    *(undefined4 *)&REFG(undefined, 0x15e2184) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2170));
  if ((REFG(undefined4, 0x15e2320) & 0x80000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e2158) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e215c) = "hkHalf";
    *(undefined4 *)&REFG(undefined, 0x15e2160) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2164) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2168) = &REFG(undefined, 0x114470c);
    *(undefined4 *)&REFG(undefined, 0x15e216c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2158));
  if ((REFG(undefined4, 0x15e2320) & 0x100000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x100000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2140) = "hkSimpleLocalFrame";
    *(char * PTR32 *)&REFG(undefined, 0x15e2144) = "hkSimpleLocalFrame";
    *(undefined4 *)&REFG(undefined, 0x15e2148) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e214c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2150) = &REFG(undefined, 0x11446f4);
    *(undefined4 *)&REFG(undefined, 0x15e2154) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2140));
  if ((REFG(undefined4, 0x15e2320) & 0x200000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e2128) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e212c) = "hkAlignSceneToNodeOptions";
    *(undefined4 *)&REFG(undefined, 0x15e2130) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e2134) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2138) = &REFG(undefined, 0x1144688);
    *(undefined4 *)&REFG(undefined, 0x15e213c) = 9;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2128));
  if ((REFG(undefined4, 0x15e2320) & 0x400000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x400000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2110) = "hkxVertexP4N4C1T10";
    *(char * PTR32 *)&REFG(undefined, 0x15e2114) = "hkxVertexP4N4C1T10";
    *(undefined4 *)&REFG(undefined, 0x15e2118) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e211c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2120) = &REFG(undefined, 0x1144654);
    *(undefined4 *)&REFG(undefined, 0x15e2124) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2110));
  if ((REFG(undefined4, 0x15e2320) & 0x800000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x800000;
    *(char * PTR32 *)&REFG(undefined, 0x15e20f8) = "hkxVertexP4N4T4B4W4I4C1T12";
    *(char * PTR32 *)&REFG(undefined, 0x15e20fc) = "hkxVertexP4N4T4B4W4I4C1T12";
    *(undefined4 *)&REFG(undefined, 0x15e2100) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2104) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2108) = &REFG(undefined, 0x1144618);
    *(undefined4 *)&REFG(undefined, 0x15e210c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e20f8));
  if ((REFG(undefined4, 0x15e2320) & 0x1000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e20e0) = "hkxVertexP4N4C1T2";
    *(char * PTR32 *)&REFG(undefined, 0x15e20e4) = "hkxVertexP4N4C1T2";
    *(undefined4 *)&REFG(undefined, 0x15e20e8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e20ec) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e20f0) = &REFG(undefined, 0x11445e4);
    *(undefined4 *)&REFG(undefined, 0x15e20f4) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e20e0));
  if ((REFG(undefined4, 0x15e2320) & 0x2000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e20c8) = "hkxVertexP4N4C1T6";
    *(char * PTR32 *)&REFG(undefined, 0x15e20cc) = "hkxVertexP4N4C1T6";
    *(undefined4 *)&REFG(undefined, 0x15e20d0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e20d4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e20d8) = &REFG(undefined, 0x11445b0);
    *(undefined4 *)&REFG(undefined, 0x15e20dc) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e20c8));
  if ((REFG(undefined4, 0x15e2320) & 0x4000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e20b0) = "hkxVertexP4N4T4B4C1T2";
    *(char * PTR32 *)&REFG(undefined, 0x15e20b4) = "hkxVertexP4N4T4B4C1T2";
    *(undefined4 *)&REFG(undefined, 0x15e20b8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e20bc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e20c0) = &REFG(undefined, 0x1144578);
    *(undefined4 *)&REFG(undefined, 0x15e20c4) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e20b0));
  if ((REFG(undefined4, 0x15e2320) & 0x8000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2098) = "hkxVertexP4N4T4B4C1T6";
    *(char * PTR32 *)&REFG(undefined, 0x15e209c) = "hkxVertexP4N4T4B4C1T6";
    *(undefined4 *)&REFG(undefined, 0x15e20a0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e20a4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e20a8) = &REFG(undefined, 0x1144540);
    *(undefined4 *)&REFG(undefined, 0x15e20ac) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2098));
  if ((REFG(undefined4, 0x15e2320) & 0x10000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x10000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2080) = "hkxVertexP4N4T4B4C1T10";
    *(char * PTR32 *)&REFG(undefined, 0x15e2084) = "hkxVertexP4N4T4B4C1T10";
    *(undefined4 *)&REFG(undefined, 0x15e2088) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e208c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2090) = &REFG(undefined, 0x1144508);
    *(undefined4 *)&REFG(undefined, 0x15e2094) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2080));
  if ((REFG(undefined4, 0x15e2320) & 0x20000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x20000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2068) = "hkxVertexP4N4T4B4W4I4C1T4";
    *(char * PTR32 *)&REFG(undefined, 0x15e206c) = "hkxVertexP4N4T4B4W4I4C1T4";
    *(undefined4 *)&REFG(undefined, 0x15e2070) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2074) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2078) = &REFG(undefined, 0x11444cc);
    *(undefined4 *)&REFG(undefined, 0x15e207c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2068));
  if ((REFG(undefined4, 0x15e2320) & 0x40000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x40000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2050) = "hkxVertexP4N4T4B4W4I4C1T8";
    *(char * PTR32 *)&REFG(undefined, 0x15e2054) = "hkxVertexP4N4T4B4W4I4C1T8";
    *(undefined4 *)&REFG(undefined, 0x15e2058) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e205c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2060) = &REFG(undefined, 0x1144490);
    *(undefined4 *)&REFG(undefined, 0x15e2064) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2050));
  if ((REFG(undefined4, 0x15e2320) & 0x80000000) == 0) {
    REFG(undefined4, 0x15e2320) = REFG(undefined4, 0x15e2320) | 0x80000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e2038) = "hkxVertexP4N4W4I4C1T4";
    *(char * PTR32 *)&REFG(undefined, 0x15e203c) = "hkxVertexP4N4W4I4C1T4";
    *(undefined4 *)&REFG(undefined, 0x15e2040) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2044) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2048) = &REFG(undefined, 0x1144458);
    *(undefined4 *)&REFG(undefined, 0x15e204c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2038));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e201c) = "hkxVertexP4N4W4I4C1T8";
    *(char * PTR32 *)&REFG(undefined, 0x15e2020) = "hkxVertexP4N4W4I4C1T8";
    *(undefined4 *)&REFG(undefined, 0x15e2024) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2028) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e202c) = &REFG(undefined, 0x1144420);
    *(undefined4 *)&REFG(undefined, 0x15e2030) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e201c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 2;
    *(char * PTR32 *)&REFG(undefined, 0x15e2004) = "hkxVertexP4N4W4I4C1T12";
    *(char * PTR32 *)&REFG(undefined, 0x15e2008) = "hkxVertexP4N4W4I4C1T12";
    *(undefined4 *)&REFG(undefined, 0x15e200c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e2010) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e2014) = &REFG(undefined, 0x11443e8);
    *(undefined4 *)&REFG(undefined, 0x15e2018) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e2004));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e1fec) = "hkUiAttribute";
    *(char * PTR32 *)&REFG(undefined, 0x15e1ff0) = "hkUiAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e1ff4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ff8) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ffc) = &REFG(undefined, 0x11443d8);
    *(undefined4 *)&REFG(undefined, 0x15e2000) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1fec));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 8;
    *(char * PTR32 *)&REFG(undefined, 0x15e1fd4) = "hkHalf";
    *(undefined4 *)&REFG(undefined, 0x15e1fd8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1fdc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1fe0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1fe4) = &REFG(undefined, 0x11443c8);
    *(undefined4 *)&REFG(undefined, 0x15e1fe8) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1fd4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x10;
    *(char * PTR32 *)&REFG(undefined, 0x15e1fbc) = "hkUiAttribute";
    *(char * PTR32 *)&REFG(undefined, 0x15e1fc0) = "hkUiAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e1fc4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1fc8) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1fcc) = &REFG(undefined, 0x11443b8);
    *(undefined4 *)&REFG(undefined, 0x15e1fd0) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1fbc));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e1fa4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1fa8) = "hkGeometry";
    *(undefined4 *)&REFG(undefined, 0x15e1fac) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1fb0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1fb4) = &REFG(undefined, 0x1144398);
    *(undefined4 *)&REFG(undefined, 0x15e1fb8) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1fa4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e1f8c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f90) = "hkGeometryTriangle";
    *(undefined4 *)&REFG(undefined, 0x15e1f94) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1f98) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f9c) = &REFG(undefined, 0x1144370);
    *(undefined4 *)&REFG(undefined, 0x15e1fa0) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1f8c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x80;
    *(undefined4 *)&REFG(undefined, 0x15e1f74) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f78) = "hkxVertexBufferVertexData";
    *(undefined4 *)&REFG(undefined, 0x15e1f7c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1f80) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f84) = &REFG(undefined, 0x1144310);
    *(undefined4 *)&REFG(undefined, 0x15e1f88) = 0xb;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1f74));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f5c) = "hkxVertexDescriptionElementDecl";
    *(char * PTR32 *)&REFG(undefined, 0x15e1f60) = "hkxVertexDescriptionElementDecl";
    *(undefined4 *)&REFG(undefined, 0x15e1f64) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1f68) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f6c) = &REFG(undefined, 0x11442e0);
    *(undefined4 *)&REFG(undefined, 0x15e1f70) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1f5c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x200;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f44) = "hkxVertexBuffer";
    *(char * PTR32 *)&REFG(undefined, 0x15e1f48) = "hkxVertexBuffer";
    *(undefined4 *)&REFG(undefined, 0x15e1f4c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1f50) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f54) = &REFG(undefined, 0x1144288);
    *(undefined4 *)&REFG(undefined, 0x15e1f58) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1f44));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x400;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f2c) = "hkxVertexDescription";
    *(char * PTR32 *)&REFG(undefined, 0x15e1f30) = "hkxVertexDescription";
    *(undefined4 *)&REFG(undefined, 0x15e1f34) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1f38) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f3c) = &REFG(undefined, 0x1144274);
    *(undefined4 *)&REFG(undefined, 0x15e1f40) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1f2c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e1f14) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f18) = "hkxEnum";
    *(undefined4 *)&REFG(undefined, 0x15e1f1c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1f20) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f24) = &REFG(undefined, 0x114423c);
    *(undefined4 *)&REFG(undefined, 0x15e1f28) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1f14));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e1efc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1f00) = "hkxEnumItem";
    *(undefined4 *)&REFG(undefined, 0x15e1f04) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1f08) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1f0c) = &REFG(undefined, 0x1144218);
    *(undefined4 *)&REFG(undefined, 0x15e1f10) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1efc));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x2000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ee4) = "hkxVertexP4N4C1T10";
    *(undefined4 *)&REFG(undefined, 0x15e1ee8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1eec) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1ef0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ef4) = &REFG(undefined, 0x11441a0);
    *(undefined4 *)&REFG(undefined, 0x15e1ef8) = 0xe;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1ee4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x4000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ecc) = "hkxVertexP4N4T4";
    *(undefined4 *)&REFG(undefined, 0x15e1ed0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ed4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ed8) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1edc) = &REFG(undefined, 0x1144158);
    *(undefined4 *)&REFG(undefined, 0x15e1ee0) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1ecc));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x8000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1eb4) = "hkxVertexP4N4T4B4W4I4C1T12";
    *(undefined4 *)&REFG(undefined, 0x15e1eb8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ebc) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1ec0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ec4) = &REFG(undefined, 0x1144080);
    *(undefined4 *)&REFG(undefined, 0x15e1ec8) = 0x1a;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1eb4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x10000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e9c) = "hkxVertexP4N4C1T2";
    *(undefined4 *)&REFG(undefined, 0x15e1ea0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ea4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1ea8) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1eac) = &REFG(undefined, 0x1144048);
    *(undefined4 *)&REFG(undefined, 0x15e1eb0) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1e9c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x20000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e84) = "hkxVertexP4N4C1T6";
    *(undefined4 *)&REFG(undefined, 0x15e1e88) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e8c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1e90) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e94) = &REFG(undefined, 0x1143ff0);
    *(undefined4 *)&REFG(undefined, 0x15e1e98) = 10;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1e84));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x40000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e6c) = "hkxVertexP4N4T4B4C1T2";
    *(undefined4 *)&REFG(undefined, 0x15e1e70) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e74) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1e78) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e7c) = &REFG(undefined, 0x1143fa8);
    *(undefined4 *)&REFG(undefined, 0x15e1e80) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1e6c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x80000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e54) = "hkxVertexP4N4T4B4C1T6";
    *(undefined4 *)&REFG(undefined, 0x15e1e58) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e5c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1e60) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e64) = &REFG(undefined, 0x1143f40);
    *(undefined4 *)&REFG(undefined, 0x15e1e68) = 0xc;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1e54));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x100000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e3c) = "hkxVertexP4N4T4B4W4I4Q4";
    *(undefined4 *)&REFG(undefined, 0x15e1e40) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e44) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e48) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e4c) = &REFG(undefined, 0x1143ee0);
    *(undefined4 *)&REFG(undefined, 0x15e1e50) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1e3c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x200000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e24) = "hkxVertexP4N4T4B4W4I4T6";
    *(undefined4 *)&REFG(undefined, 0x15e1e28) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e2c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e30) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e34) = &REFG(undefined, 0x1143e30);
    *(undefined4 *)&REFG(undefined, 0x15e1e38) = 0x12;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1e24));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x400000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1e0c) = "hkxVertexP4N4T4B4C1T10";
    *(undefined4 *)&REFG(undefined, 0x15e1e10) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e14) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1e18) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e1c) = &REFG(undefined, 0x1143da8);
    *(undefined4 *)&REFG(undefined, 0x15e1e20) = 0x10;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1e0c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x800000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1df4) = "hkxVertexP4N4T4B4W4I4C1Q2";
    *(undefined4 *)&REFG(undefined, 0x15e1df8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1dfc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1e00) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1e04) = &REFG(undefined, 0x1143d38);
    *(undefined4 *)&REFG(undefined, 0x15e1e08) = 9;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1df4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ddc) = "hkxVertexP4N4T4B4W4I4C1T4";
    *(undefined4 *)&REFG(undefined, 0x15e1de0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1de4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1de8) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1dec) = &REFG(undefined, 0x1143ca0);
    *(undefined4 *)&REFG(undefined, 0x15e1df0) = 0x12;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1ddc));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1dc4) = "hkxVertexP4N4T4B4W4I4C1T8";
    *(undefined4 *)&REFG(undefined, 0x15e1dc8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1dcc) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1dd0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1dd4) = &REFG(undefined, 0x1143be8);
    *(undefined4 *)&REFG(undefined, 0x15e1dd8) = 0x16;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1dc4));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1dac) = "hkxVertexP4N4W4I4C1Q2";
    *(undefined4 *)&REFG(undefined, 0x15e1db0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1db4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1db8) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1dbc) = &REFG(undefined, 0x1143b90);
    *(undefined4 *)&REFG(undefined, 0x15e1dc0) = 7;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1dac));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d94) = "hkxVertexP4N4W4I4C1T4";
    *(undefined4 *)&REFG(undefined, 0x15e1d98) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d9c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1da0) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1da4) = &REFG(undefined, 0x1143b08);
    *(undefined4 *)&REFG(undefined, 0x15e1da8) = 0x10;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1d94));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x10000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d7c) = "hkxVertexP4N4W4I4C1T8";
    *(undefined4 *)&REFG(undefined, 0x15e1d80) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d84) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1d88) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d8c) = &REFG(undefined, 0x1143a60);
    *(undefined4 *)&REFG(undefined, 0x15e1d90) = 0x14;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1d7c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x20000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d64) = "hkxVertexP4N4T4B4T4";
    *(undefined4 *)&REFG(undefined, 0x15e1d68) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d6c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d70) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d74) = &REFG(undefined, 0x1143a00);
    *(undefined4 *)&REFG(undefined, 0x15e1d78) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1d64));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x40000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d4c) = "hkxVertexP4N4W4I4C1T12";
    *(undefined4 *)&REFG(undefined, 0x15e1d50) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d54) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1d58) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d5c) = &REFG(undefined, 0x1143938);
    *(undefined4 *)&REFG(undefined, 0x15e1d60) = 0x18;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1d4c));
  if ((*(uint *)&REFG(undefined, 0x15e2034) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e2034) = *(uint *)&REFG(undefined, 0x15e2034) | 0x80000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d34) = "hkxSparselyAnimatedString";
    *(char * PTR32 *)&REFG(undefined, 0x15e1d38) = "hkxSparselyAnimatedString";
    *(undefined4 *)&REFG(undefined, 0x15e1d3c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d40) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d44) = &REFG(undefined, 0x11438f0);
    *(undefined4 *)&REFG(undefined, 0x15e1d48) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1d34));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d18) = "hkxSparselyAnimatedStringStringType";
    *(undefined4 *)&REFG(undefined, 0x15e1d1c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d20) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d24) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d28) = &REFG(undefined, 0x11438bc);
    *(undefined4 *)&REFG(undefined, 0x15e1d2c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1d18));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 2;
    *(char * PTR32 *)&REFG(undefined, 0x15e1d00) = "hkxVertexP4N4W4I4T2";
    *(undefined4 *)&REFG(undefined, 0x15e1d04) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d08) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1d0c) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1d10) = &REFG(undefined, 0x1143840);
    *(undefined4 *)&REFG(undefined, 0x15e1d14) = 0xc;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1d00));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ce8) = "hkxVertexP4N4W4I4T6";
    *(undefined4 *)&REFG(undefined, 0x15e1cec) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cf0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cf4) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1cf8) = &REFG(undefined, 0x11437a0);
    *(undefined4 *)&REFG(undefined, 0x15e1cfc) = 0x10;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1ce8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 8;
    *(char * PTR32 *)&REFG(undefined, 0x15e1cd0) = "hkxTextureInplace";
    *(char * PTR32 *)&REFG(undefined, 0x15e1cd4) = "hkxTextureInplace";
    *(undefined4 *)&REFG(undefined, 0x15e1cd8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cdc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ce0) = &REFG(undefined, 0x114377c);
    *(undefined4 *)&REFG(undefined, 0x15e1ce4) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1cd0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x10;
    *(char * PTR32 *)&REFG(undefined, 0x15e1cb8) = "hkxIndexBuffer";
    *(char * PTR32 *)&REFG(undefined, 0x15e1cbc) = "hkxIndexBuffer";
    *(undefined4 *)&REFG(undefined, 0x15e1cc0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cc4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1cc8) = &REFG(undefined, 0x114375c);
    *(undefined4 *)&REFG(undefined, 0x15e1ccc) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1cb8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x20;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ca0) = "hkxVertexIntDataChannel";
    *(char * PTR32 *)&REFG(undefined, 0x15e1ca4) = "hkxVertexIntDataChannel";
    *(undefined4 *)&REFG(undefined, 0x15e1ca8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1cac) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1cb0) = &REFG(undefined, 0x1143734);
    *(undefined4 *)&REFG(undefined, 0x15e1cb4) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1ca0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x40;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c88) = "hkxMaterialEffect";
    *(char * PTR32 *)&REFG(undefined, 0x15e1c8c) = "hkxMaterialEffect";
    *(undefined4 *)&REFG(undefined, 0x15e1c90) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c94) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c98) = &REFG(undefined, 0x1143710);
    *(undefined4 *)&REFG(undefined, 0x15e1c9c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1c88));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x80;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c70) = "hkxMeshSection";
    *(char * PTR32 *)&REFG(undefined, 0x15e1c74) = "hkxMeshSection";
    *(undefined4 *)&REFG(undefined, 0x15e1c78) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c7c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c80) = &REFG(undefined, 0x11436f0);
    *(undefined4 *)&REFG(undefined, 0x15e1c84) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1c70));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c58) = "hkxEdgeSelectionChannel";
    *(char * PTR32 *)&REFG(undefined, 0x15e1c5c) = "hkxEdgeSelectionChannel";
    *(undefined4 *)&REFG(undefined, 0x15e1c60) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c64) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c68) = &REFG(undefined, 0x11436c8);
    *(undefined4 *)&REFG(undefined, 0x15e1c6c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1c58));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x200;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c40) = "hkxScene";
    *(char * PTR32 *)&REFG(undefined, 0x15e1c44) = "hkxScene";
    *(undefined4 *)&REFG(undefined, 0x15e1c48) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c4c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c50) = &REFG(undefined, 0x11436ac);
    *(undefined4 *)&REFG(undefined, 0x15e1c54) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1c40));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x400;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c28) = "hkxSparselyAnimatedString";
    *(char * PTR32 *)&REFG(undefined, 0x15e1c2c) = "hkxSparselyAnimatedString";
    *(undefined4 *)&REFG(undefined, 0x15e1c30) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1c34) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c38) = &REFG(undefined, 0x114369c);
    *(undefined4 *)&REFG(undefined, 0x15e1c3c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1c28));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x800;
    *(char * PTR32 *)&REFG(undefined, 0x15e1c10) = "hkxSparselyAnimatedBool";
    *(char * PTR32 *)&REFG(undefined, 0x15e1c14) = "hkxSparselyAnimatedBool";
    *(undefined4 *)&REFG(undefined, 0x15e1c18) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c1c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c20) = &REFG(undefined, 0x1143674);
    *(undefined4 *)&REFG(undefined, 0x15e1c24) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1c10));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x1000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1bf8) = "hkxSparselyAnimatedInt";
    *(char * PTR32 *)&REFG(undefined, 0x15e1bfc) = "hkxSparselyAnimatedInt";
    *(undefined4 *)&REFG(undefined, 0x15e1c00) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1c04) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1c08) = &REFG(undefined, 0x114364c);
    *(undefined4 *)&REFG(undefined, 0x15e1c0c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1bf8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x2000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1be0) = "hkxMesh";
    *(char * PTR32 *)&REFG(undefined, 0x15e1be4) = "hkxMesh";
    *(undefined4 *)&REFG(undefined, 0x15e1be8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1bec) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1bf0) = &REFG(undefined, 0x1143634);
    *(undefined4 *)&REFG(undefined, 0x15e1bf4) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1be0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x4000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1bc8) = "hkxAnimatedFloat";
    *(char * PTR32 *)&REFG(undefined, 0x15e1bcc) = "hkxAnimatedFloat";
    *(undefined4 *)&REFG(undefined, 0x15e1bd0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1bd4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1bd8) = &REFG(undefined, 0x1143610);
    *(undefined4 *)&REFG(undefined, 0x15e1bdc) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1bc8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x8000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1bb0) = "hkxTriangleSelectionChannel";
    *(char * PTR32 *)&REFG(undefined, 0x15e1bb4) = "hkxTriangleSelectionChannel";
    *(undefined4 *)&REFG(undefined, 0x15e1bb8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1bbc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1bc0) = &REFG(undefined, 0x11435e4);
    *(undefined4 *)&REFG(undefined, 0x15e1bc4) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1bb0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x10000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b98) = "hkxSparselyAnimatedEnum";
    *(char * PTR32 *)&REFG(undefined, 0x15e1b9c) = "hkxSparselyAnimatedEnum";
    *(undefined4 *)&REFG(undefined, 0x15e1ba0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ba4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ba8) = &REFG(undefined, 0x11435a4);
    *(undefined4 *)&REFG(undefined, 0x15e1bac) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1b98));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x20000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b80) = "hkxMaterialShaderSet";
    *(char * PTR32 *)&REFG(undefined, 0x15e1b84) = "hkxMaterialShaderSet";
    *(undefined4 *)&REFG(undefined, 0x15e1b88) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b8c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b90) = &REFG(undefined, 0x114357c);
    *(undefined4 *)&REFG(undefined, 0x15e1b94) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1b80));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x40000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b68) = "hkxVertexSelectionChannel";
    *(char * PTR32 *)&REFG(undefined, 0x15e1b6c) = "hkxVertexSelectionChannel";
    *(undefined4 *)&REFG(undefined, 0x15e1b70) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b74) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b78) = &REFG(undefined, 0x1143550);
    *(undefined4 *)&REFG(undefined, 0x15e1b7c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1b68));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x80000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b50) = "hkxAnimatedQuaternion";
    *(char * PTR32 *)&REFG(undefined, 0x15e1b54) = "hkxAnimatedQuaternion";
    *(undefined4 *)&REFG(undefined, 0x15e1b58) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b5c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b60) = &REFG(undefined, 0x1143528);
    *(undefined4 *)&REFG(undefined, 0x15e1b64) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1b50));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x100000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b38) = "hkxVertexFloatDataChannel";
    *(char * PTR32 *)&REFG(undefined, 0x15e1b3c) = "hkxVertexFloatDataChannel";
    *(undefined4 *)&REFG(undefined, 0x15e1b40) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b44) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b48) = &REFG(undefined, 0x11434fc);
    *(undefined4 *)&REFG(undefined, 0x15e1b4c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1b38));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x200000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b20) = "hkxTextureFile";
    *(char * PTR32 *)&REFG(undefined, 0x15e1b24) = "hkxTextureFile";
    *(undefined4 *)&REFG(undefined, 0x15e1b28) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b2c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b30) = &REFG(undefined, 0x11434dc);
    *(undefined4 *)&REFG(undefined, 0x15e1b34) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1b20));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x400000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1b08) = "hkxLight";
    *(char * PTR32 *)&REFG(undefined, 0x15e1b0c) = "hkxLight";
    *(undefined4 *)&REFG(undefined, 0x15e1b10) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1b14) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b18) = &REFG(undefined, 0x11434c0);
    *(undefined4 *)&REFG(undefined, 0x15e1b1c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1b08));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x800000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1af0) = "hkxAnimatedMatrix";
    *(char * PTR32 *)&REFG(undefined, 0x15e1af4) = "hkxAnimatedMatrix";
    *(undefined4 *)&REFG(undefined, 0x15e1af8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1afc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1b00) = &REFG(undefined, 0x114349c);
    *(undefined4 *)&REFG(undefined, 0x15e1b04) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1af0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ad8) = "hkxAttributeHolder";
    *(char * PTR32 *)&REFG(undefined, 0x15e1adc) = "hkxAttributeHolder";
    *(undefined4 *)&REFG(undefined, 0x15e1ae0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ae4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ae8) = &REFG(undefined, 0x1143478);
    *(undefined4 *)&REFG(undefined, 0x15e1aec) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1ad8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1ac0) = "hkAlignSceneToNodeOptions";
    *(char * PTR32 *)&REFG(undefined, 0x15e1ac4) = "hkAlignSceneToNodeOptions";
    *(undefined4 *)&REFG(undefined, 0x15e1ac8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1acc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ad0) = &REFG(undefined, 0x1143460);
    *(undefined4 *)&REFG(undefined, 0x15e1ad4) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1ac0));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1aa8) = "hkxMaterialShader";
    *(char * PTR32 *)&REFG(undefined, 0x15e1aac) = "hkxMaterialShader";
    *(undefined4 *)&REFG(undefined, 0x15e1ab0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1ab4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1ab8) = &REFG(undefined, 0x114343c);
    *(undefined4 *)&REFG(undefined, 0x15e1abc) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1aa8));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x8000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a90) = "hkxSkinBinding";
    *(char * PTR32 *)&REFG(undefined, 0x15e1a94) = "hkxSkinBinding";
    *(undefined4 *)&REFG(undefined, 0x15e1a98) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a9c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1aa0) = &REFG(undefined, 0x114341c);
    *(undefined4 *)&REFG(undefined, 0x15e1aa4) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1a90));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x10000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a78) = "hkxCamera";
    *(char * PTR32 *)&REFG(undefined, 0x15e1a7c) = "hkxCamera";
    *(undefined4 *)&REFG(undefined, 0x15e1a80) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a84) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a88) = &REFG(undefined, 0x1143400);
    *(undefined4 *)&REFG(undefined, 0x15e1a8c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1a78));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x20000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a60) = "hkxVertexVectorDataChannel";
    *(char * PTR32 *)&REFG(undefined, 0x15e1a64) = "hkxVertexVectorDataChannel";
    *(undefined4 *)&REFG(undefined, 0x15e1a68) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a6c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a70) = &REFG(undefined, 0x11433d4);
    *(undefined4 *)&REFG(undefined, 0x15e1a74) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1a60));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x40000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a48) = "hkxAnimatedVector";
    *(char * PTR32 *)&REFG(undefined, 0x15e1a4c) = "hkxAnimatedVector";
    *(undefined4 *)&REFG(undefined, 0x15e1a50) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a54) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a58) = &REFG(undefined, 0x11433b0);
    *(undefined4 *)&REFG(undefined, 0x15e1a5c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1a48));
  if ((*(uint *)&REFG(undefined, 0x15e1d30) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1d30) = *(uint *)&REFG(undefined, 0x15e1d30) | 0x80000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a30) = "hkMemoryResourceHandleExternalLink";
    *(char * PTR32 *)&REFG(undefined, 0x15e1a34) = "hkMemoryResourceHandleExternalLink";
    *(undefined4 *)&REFG(undefined, 0x15e1a38) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a3c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a40) = &REFG(undefined, 0x1143374);
    *(undefined4 *)&REFG(undefined, 0x15e1a44) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1a30));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e1a14) = "hkMemoryResourceHandle";
    *(char * PTR32 *)&REFG(undefined, 0x15e1a18) = "hkMemoryResourceHandle";
    *(undefined4 *)&REFG(undefined, 0x15e1a1c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a20) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a24) = &REFG(undefined, 0x114334c);
    *(undefined4 *)&REFG(undefined, 0x15e1a28) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1a14));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 2;
    *(char * PTR32 *)&REFG(undefined, 0x15e19fc) = "hkMemoryResourceContainer";
    *(char * PTR32 *)&REFG(undefined, 0x15e1a00) = "hkMemoryResourceContainer";
    *(undefined4 *)&REFG(undefined, 0x15e1a04) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1a08) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1a0c) = &REFG(undefined, 0x1143320);
    *(undefined4 *)&REFG(undefined, 0x15e1a10) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e19fc));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e19e4) = "hkMeshSectionCinfo";
    *(char * PTR32 *)&REFG(undefined, 0x15e19e8) = "hkMeshSectionCinfo";
    *(undefined4 *)&REFG(undefined, 0x15e19ec) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e19f0) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e19f4) = &REFG(undefined, 0x1143310);
    *(undefined4 *)&REFG(undefined, 0x15e19f8) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e19e4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 8;
    *(char * PTR32 *)&REFG(undefined, 0x15e19cc) = "hkMeshSection";
    *(char * PTR32 *)&REFG(undefined, 0x15e19d0) = "hkMeshSection";
    *(undefined4 *)&REFG(undefined, 0x15e19d4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e19d8) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e19dc) = &REFG(undefined, 0x1143300);
    *(undefined4 *)&REFG(undefined, 0x15e19e0) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e19cc));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x10;
    *(char * PTR32 *)&REFG(undefined, 0x15e19b4) = "hkxEnvironment";
    *(char * PTR32 *)&REFG(undefined, 0x15e19b8) = "hkxEnvironment";
    *(undefined4 *)&REFG(undefined, 0x15e19bc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e19c0) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e19c4) = &REFG(undefined, 0x11432e0);
    *(undefined4 *)&REFG(undefined, 0x15e19c8) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e19b4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x20;
    *(char * PTR32 *)&REFG(undefined, 0x15e199c) = "hkMemoryResourceHandle";
    *(char * PTR32 *)&REFG(undefined, 0x15e19a0) = "hkMemoryResourceHandle";
    *(undefined4 *)&REFG(undefined, 0x15e19a4) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e19a8) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e19ac) = &REFG(undefined, 0x11432d0);
    *(undefined4 *)&REFG(undefined, 0x15e19b0) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e199c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x40;
    *(char * PTR32 *)&REFG(undefined, 0x15e1984) = "hkAlignSceneToNodeOptions";
    *(char * PTR32 *)&REFG(undefined, 0x15e1988) = "hkAlignSceneToNodeOptions";
    *(undefined4 *)&REFG(undefined, 0x15e198c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1990) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1994) = &REFG(undefined, 0x11432c0);
    *(undefined4 *)&REFG(undefined, 0x15e1998) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1984));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x80;
    *(char * PTR32 *)&REFG(undefined, 0x15e196c) = "hkxNode";
    *(char * PTR32 *)&REFG(undefined, 0x15e1970) = "hkxNode";
    *(undefined4 *)&REFG(undefined, 0x15e1974) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1978) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e197c) = &REFG(undefined, 0x11432b0);
    *(undefined4 *)&REFG(undefined, 0x15e1980) = 0;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e196c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e1954) = "hkxSkinBinding";
    *(char * PTR32 *)&REFG(undefined, 0x15e1958) = "hkxSkinBinding";
    *(undefined4 *)&REFG(undefined, 0x15e195c) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1960) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1964) = &REFG(undefined, 0x1143288);
    *(undefined4 *)&REFG(undefined, 0x15e1968) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1954));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x200;
    *(undefined4 *)&REFG(undefined, 0x15e193c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1940) = "hkMemoryMeshMaterial";
    *(undefined4 *)&REFG(undefined, 0x15e1944) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1948) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e194c) = &REFG(undefined, 0x1143230);
    *(undefined4 *)&REFG(undefined, 0x15e1950) = 7;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e193c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x400;
    *(undefined4 *)&REFG(undefined, 0x15e1924) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1928) = "hkMemoryMeshVertexBuffer";
    *(undefined4 *)&REFG(undefined, 0x15e192c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1930) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1934) = &REFG(undefined, 0x11431a8);
    *(undefined4 *)&REFG(undefined, 0x15e1938) = 0xc;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1924));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x800;
    *(undefined4 *)&REFG(undefined, 0x15e190c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1910) = "hkVertexFormatElement";
    *(undefined4 *)&REFG(undefined, 0x15e1914) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1918) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e191c) = &REFG(undefined, 0x1143154);
    *(undefined4 *)&REFG(undefined, 0x15e1920) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e190c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x1000;
    *(undefined4 *)&REFG(undefined, 0x15e18f4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e18f8) = "hkMultipleVertexBufferElementInfo";
    *(undefined4 *)&REFG(undefined, 0x15e18fc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1900) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1904) = &REFG(undefined, 0x1143118);
    *(undefined4 *)&REFG(undefined, 0x15e1908) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e18f4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x2000;
    *(undefined4 *)&REFG(undefined, 0x15e18dc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e18e0) = "hkMultipleVertexBuffer";
    *(undefined4 *)&REFG(undefined, 0x15e18e4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e18e8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e18ec) = &REFG(undefined, 0x1143058);
    *(undefined4 *)&REFG(undefined, 0x15e18f0) = 0x14;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e18dc));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x4000;
    *(undefined4 *)&REFG(undefined, 0x15e18c4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e18c8) = "hkIndexedTransformSet";
    *(undefined4 *)&REFG(undefined, 0x15e18cc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e18d0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e18d4) = &REFG(undefined, 0x1142ff8);
    *(undefined4 *)&REFG(undefined, 0x15e18d8) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e18c4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x8000;
    *(undefined4 *)&REFG(undefined, 0x15e18ac) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e18b0) = "hkMeshBody";
    *(undefined4 *)&REFG(undefined, 0x15e18b4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e18b8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e18bc) = &REFG(undefined, 0x1142fcc);
    *(undefined4 *)&REFG(undefined, 0x15e18c0) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e18ac));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x10000;
    *(undefined4 *)&REFG(undefined, 0x15e1894) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1898) = "hkMemoryMeshTexture";
    *(undefined4 *)&REFG(undefined, 0x15e189c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e18a0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e18a4) = &REFG(undefined, 0x1142f70);
    *(undefined4 *)&REFG(undefined, 0x15e18a8) = 8;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1894));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x20000;
    *(undefined4 *)&REFG(undefined, 0x15e187c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1880) = "hkMemoryMeshBody";
    *(undefined4 *)&REFG(undefined, 0x15e1884) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1888) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e188c) = &REFG(undefined, 0x1142ef0);
    *(undefined4 *)&REFG(undefined, 0x15e1890) = 0xc;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e187c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x40000;
    *(undefined4 *)&REFG(undefined, 0x15e1864) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1868) = "hkMeshTexture";
    *(undefined4 *)&REFG(undefined, 0x15e186c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1870) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1874) = &REFG(undefined, 0x1142ebc);
    *(undefined4 *)&REFG(undefined, 0x15e1878) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1864));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e184c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1850) = "hkMultipleVertexBufferVertexBufferInfo";
    *(undefined4 *)&REFG(undefined, 0x15e1854) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1858) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e185c) = &REFG(undefined, 0x1142e64);
    *(undefined4 *)&REFG(undefined, 0x15e1860) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e184c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x100000;
    *(undefined4 *)&REFG(undefined, 0x15e1834) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1838) = "hkMultipleVertexBufferLockedElement";
    *(undefined4 *)&REFG(undefined, 0x15e183c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1840) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1844) = &REFG(undefined, 0x1142e00);
    *(undefined4 *)&REFG(undefined, 0x15e1848) = 7;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1834));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e181c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1820) = "hkVertexFormat";
    *(undefined4 *)&REFG(undefined, 0x15e1824) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1828) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e182c) = &REFG(undefined, 0x1142dcc);
    *(undefined4 *)&REFG(undefined, 0x15e1830) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e181c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x400000;
    *(undefined4 *)&REFG(undefined, 0x15e1804) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1808) = "hkMeshBoneIndexMapping";
    *(undefined4 *)&REFG(undefined, 0x15e180c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1810) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1814) = &REFG(undefined, 0x1142da4);
    *(undefined4 *)&REFG(undefined, 0x15e1818) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1804));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x800000;
    *(char * PTR32 *)&REFG(undefined, 0x15e17ec) = "hkIndexedTransformSet";
    *(char * PTR32 *)&REFG(undefined, 0x15e17f0) = "hkIndexedTransformSet";
    *(undefined4 *)&REFG(undefined, 0x15e17f4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e17f8) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e17fc) = &REFG(undefined, 0x1142d8c);
    *(undefined4 *)&REFG(undefined, 0x15e1800) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e17ec));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e17d4) = "hkMemoryMeshTexture";
    *(char * PTR32 *)&REFG(undefined, 0x15e17d8) = "hkMemoryMeshTexture";
    *(undefined4 *)&REFG(undefined, 0x15e17dc) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e17e0) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e17e4) = &REFG(undefined, 0x1142d7c);
    *(undefined4 *)&REFG(undefined, 0x15e17e8) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e17d4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x2000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e17bc) = "hkPackfileHeader";
    *(char * PTR32 *)&REFG(undefined, 0x15e17c0) = "hkPackfileHeader";
    *(undefined4 *)&REFG(undefined, 0x15e17c4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e17c8) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e17cc) = &REFG(undefined, 0x1142d48);
    *(undefined4 *)&REFG(undefined, 0x15e17d0) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e17bc));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x4000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e17a4) = "hkMemoryMeshTexture";
    *(char * PTR32 *)&REFG(undefined, 0x15e17a8) = "hkMemoryMeshTexture";
    *(undefined4 *)&REFG(undefined, 0x15e17ac) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e17b0) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e17b4) = &REFG(undefined, 0x1142d30);
    *(undefined4 *)&REFG(undefined, 0x15e17b8) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e17a4));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x8000000;
    *(undefined4 *)&REFG(undefined, 0x15e178c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1790) = "hkxMaterialProperty";
    *(undefined4 *)&REFG(undefined, 0x15e1794) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1798) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e179c) = &REFG(undefined, 0x1142d04);
    *(undefined4 *)&REFG(undefined, 0x15e17a0) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e178c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x10000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1774) = "hkxMaterial";
    *(char * PTR32 *)&REFG(undefined, 0x15e1778) = "hkxMaterial";
    *(undefined4 *)&REFG(undefined, 0x15e177c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1780) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1784) = &REFG(undefined, 0x1142ce0);
    *(undefined4 *)&REFG(undefined, 0x15e1788) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1774));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x20000000;
    *(undefined4 *)&REFG(undefined, 0x15e175c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1760) = "hkHalf8";
    *(undefined4 *)&REFG(undefined, 0x15e1764) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1768) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e176c) = &REFG(undefined, 0x1142cc8);
    *(undefined4 *)&REFG(undefined, 0x15e1770) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e175c));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x40000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1744) = "hkMemoryMeshVertexBuffer";
    *(char * PTR32 *)&REFG(undefined, 0x15e1748) = "hkMemoryMeshVertexBuffer";
    *(undefined4 *)&REFG(undefined, 0x15e174c) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1750) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1754) = &REFG(undefined, 0x1142cb8);
    *(undefined4 *)&REFG(undefined, 0x15e1758) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1744));
  if ((*(uint *)&REFG(undefined, 0x15e1a2c) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1a2c) = *(uint *)&REFG(undefined, 0x15e1a2c) | 0x80000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e172c) = "hkMotionState";
    *(char * PTR32 *)&REFG(undefined, 0x15e1730) = "hkMotionState";
    *(undefined4 *)&REFG(undefined, 0x15e1734) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1738) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e173c) = &REFG(undefined, 0x1142ca0);
    *(undefined4 *)&REFG(undefined, 0x15e1740) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e172c));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 1;
    *(char * PTR32 *)&REFG(undefined, 0x15e1710) = "hkHalf8";
    *(char * PTR32 *)&REFG(undefined, 0x15e1714) = "hkHalf8";
    *(undefined4 *)&REFG(undefined, 0x15e1718) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e171c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1720) = &REFG(undefined, 0x1142c90);
    *(undefined4 *)&REFG(undefined, 0x15e1724) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1710));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e16f8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e16fc) = "hkAabbHalf";
    *(undefined4 *)&REFG(undefined, 0x15e1700) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1704) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1708) = &REFG(undefined, 0x1142c78);
    *(undefined4 *)&REFG(undefined, 0x15e170c) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e16f8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 4;
    *(char * PTR32 *)&REFG(undefined, 0x15e16e0) = "hkxVertexDescriptionElementDecl";
    *(char * PTR32 *)&REFG(undefined, 0x15e16e4) = "hkxVertexDescriptionElementDecl";
    *(undefined4 *)&REFG(undefined, 0x15e16e8) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e16ec) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e16f0) = &REFG(undefined, 0x1142c60);
    *(undefined4 *)&REFG(undefined, 0x15e16f4) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e16e0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e16c8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e16cc) = "hkPackedVector3";
    *(undefined4 *)&REFG(undefined, 0x15e16d0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e16d4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e16d8) = &REFG(undefined, 0x1142c50);
    *(undefined4 *)&REFG(undefined, 0x15e16dc) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e16c8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e16b0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e16b4) = "hkQTransform";
    *(undefined4 *)&REFG(undefined, 0x15e16b8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e16bc) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e16c0) = &REFG(undefined, 0x1142c38);
    *(undefined4 *)&REFG(undefined, 0x15e16c4) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e16b0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e1698) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e169c) = "hkPostFinishAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e16a0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e16a4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e16a8) = &REFG(undefined, 0x1142c30);
    *(undefined4 *)&REFG(undefined, 0x15e16ac) = 0;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1698));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x40;
    *(undefined4 *)&REFG(undefined, 0x15e1680) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1684) = "hkFourTransposedPoints";
    *(undefined4 *)&REFG(undefined, 0x15e1688) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e168c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1690) = &REFG(undefined, 0x1142c20);
    *(undefined4 *)&REFG(undefined, 0x15e1694) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1680));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x80;
    *(char * PTR32 *)&REFG(undefined, 0x15e1668) = "hkHalf8";
    *(char * PTR32 *)&REFG(undefined, 0x15e166c) = "hkHalf8";
    *(undefined4 *)&REFG(undefined, 0x15e1670) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1674) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1678) = &REFG(undefined, 0x1142c00);
    *(undefined4 *)&REFG(undefined, 0x15e167c) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1668));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x100;
    *(char * PTR32 *)&REFG(undefined, 0x15e1650) = "hkxMaterial";
    *(char * PTR32 *)&REFG(undefined, 0x15e1654) = "hkxMaterial";
    *(undefined4 *)&REFG(undefined, 0x15e1658) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e165c) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1660) = &REFG(undefined, 0x1142bd8);
    *(undefined4 *)&REFG(undefined, 0x15e1664) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1650));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x200) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x200;
    *(char * PTR32 *)&REFG(undefined, 0x15e1638) = "hkMemoryResourceHandle";
    *(char * PTR32 *)&REFG(undefined, 0x15e163c) = "hkMemoryResourceHandle";
    *(undefined4 *)&REFG(undefined, 0x15e1640) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e1644) = 3;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1648) = &REFG(undefined, 0x1142bb0);
    *(undefined4 *)&REFG(undefined, 0x15e164c) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1638));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x400) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x400;
    *(char * PTR32 *)&REFG(undefined, 0x15e1620) = "hkxMaterialTextureStage";
    *(char * PTR32 *)&REFG(undefined, 0x15e1624) = "hkxMaterialTextureStage";
    *(undefined4 *)&REFG(undefined, 0x15e1628) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e162c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1630) = &REFG(undefined, 0x1142b70);
    *(undefined4 *)&REFG(undefined, 0x15e1634) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1620));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x800) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x800;
    *(char * PTR32 *)&REFG(undefined, 0x15e1608) = "hkxMeshSection";
    *(char * PTR32 *)&REFG(undefined, 0x15e160c) = "hkxMeshSection";
    *(undefined4 *)&REFG(undefined, 0x15e1610) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e1614) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1618) = &REFG(undefined, 0x1142b48);
    *(undefined4 *)&REFG(undefined, 0x15e161c) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1608));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x1000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x1000;
    *(char * PTR32 *)&REFG(undefined, 0x15e15f0) = "hkRootLevelContainerNamedVariant";
    *(char * PTR32 *)&REFG(undefined, 0x15e15f4) = "hkRootLevelContainerNamedVariant";
    *(undefined4 *)&REFG(undefined, 0x15e15f8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e15fc) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1600) = &REFG(undefined, 0x1142afc);
    *(undefined4 *)&REFG(undefined, 0x15e1604) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e15f0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x2000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x2000;
    *(char * PTR32 *)&REFG(undefined, 0x15e15d8) = "hkxAttribute";
    *(char * PTR32 *)&REFG(undefined, 0x15e15dc) = "hkxAttribute";
    *(undefined4 *)&REFG(undefined, 0x15e15e0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e15e4) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e15e8) = &REFG(undefined, 0x1142ac4);
    *(undefined4 *)&REFG(undefined, 0x15e15ec) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e15d8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x4000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x4000;
    *(char * PTR32 *)&REFG(undefined, 0x15e15c0) = "hkxNode";
    *(char * PTR32 *)&REFG(undefined, 0x15e15c4) = "hkxNode";
    *(undefined4 *)&REFG(undefined, 0x15e15c8) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e15cc) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e15d0) = &REFG(undefined, 0x1142a9c);
    *(undefined4 *)&REFG(undefined, 0x15e15d4) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e15c0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x8000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x8000;
    *(char * PTR32 *)&REFG(undefined, 0x15e15a8) = "hkxAttributeHolder";
    *(char * PTR32 *)&REFG(undefined, 0x15e15ac) = "hkxAttributeHolder";
    *(undefined4 *)&REFG(undefined, 0x15e15b0) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e15b4) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e15b8) = &REFG(undefined, 0x1142a74);
    *(undefined4 *)&REFG(undefined, 0x15e15bc) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e15a8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x10000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x10000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1590) = "hkIndexedTransformSet";
    *(char * PTR32 *)&REFG(undefined, 0x15e1594) = "hkIndexedTransformSet";
    *(undefined4 *)&REFG(undefined, 0x15e1598) = 1;
    *(undefined4 *)&REFG(undefined, 0x15e159c) = 2;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e15a0) = &REFG(undefined, 0x1142a4c);
    *(undefined4 *)&REFG(undefined, 0x15e15a4) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1590));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x20000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x20000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1578) = "hkClass";
    *(char * PTR32 *)&REFG(undefined, 0x15e157c) = "hkClass";
    *(undefined4 *)&REFG(undefined, 0x15e1580) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e1584) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1588) = &REFG(undefined, 0x1142a24);
    *(undefined4 *)&REFG(undefined, 0x15e158c) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1578));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x40000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x40000;
    *(char * PTR32 *)&REFG(undefined, 0x15e1560) = "hkMemoryMeshMaterial";
    *(char * PTR32 *)&REFG(undefined, 0x15e1564) = "hkMemoryMeshMaterial";
    *(undefined4 *)&REFG(undefined, 0x15e1568) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e156c) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1570) = &REFG(undefined, 0x11429fc);
    *(undefined4 *)&REFG(undefined, 0x15e1574) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1560));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x80000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x80000;
    *(undefined4 *)&REFG(undefined, 0x15e1548) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e154c) = "hkDemoReplayUtilityFrame";
    *(undefined4 *)&REFG(undefined, 0x15e1550) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1554) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1558) = &REFG(undefined, 0x1142988);
    *(undefined4 *)&REFG(undefined, 0x15e155c) = 10;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1548));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x100000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x100000;
    *(undefined4 *)&REFG(undefined, 0x15e1530) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1534) = "hkDemoReplayUtilityMouseCallbacks";
    *(undefined4 *)&REFG(undefined, 0x15e1538) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e153c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1540) = &REFG(undefined, 0x1142944);
    *(undefined4 *)&REFG(undefined, 0x15e1544) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1530));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x200000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x200000;
    *(undefined4 *)&REFG(undefined, 0x15e1518) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e151c) = "hkDemoReplayUtility";
    *(undefined4 *)&REFG(undefined, 0x15e1520) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1524) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1528) = &REFG(undefined, 0x11428f8);
    *(undefined4 *)&REFG(undefined, 0x15e152c) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1518));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x400000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x400000;
    *(undefined4 *)&REFG(undefined, 0x15e1500) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1504) = "hkDemoReplayUtilityReplayData";
    *(undefined4 *)&REFG(undefined, 0x15e1508) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e150c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1510) = &REFG(undefined, 0x1142898);
    *(undefined4 *)&REFG(undefined, 0x15e1514) = 7;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1500));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x800000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x800000;
    *(undefined4 *)&REFG(undefined, 0x15e14e8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e14ec) = "hkDemoReplayUtilityCamera";
    *(undefined4 *)&REFG(undefined, 0x15e14f0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e14f4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e14f8) = &REFG(undefined, 0x1142858);
    *(undefined4 *)&REFG(undefined, 0x15e14fc) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e14e8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x1000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x1000000;
    *(char * PTR32 *)&REFG(undefined, 0x15e14d0) = "hkHalf8";
    *(undefined4 *)&REFG(undefined, 0x15e14d4) = 0;
    *(undefined4 *)&REFG(undefined, 0x15e14d8) = 2;
    *(undefined4 *)&REFG(undefined, 0x15e14dc) = 0xffffffff;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e14e0) = &REFG(undefined, 0x1142848);
    *(undefined4 *)&REFG(undefined, 0x15e14e4) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e14d0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x2000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x2000000;
    *(undefined4 *)&REFG(undefined, 0x15e14b8) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e14bc) = "hkRefCountedPropertiesEntry";
    *(undefined4 *)&REFG(undefined, 0x15e14c0) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e14c4) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e14c8) = &REFG(undefined, 0x1142818);
    *(undefined4 *)&REFG(undefined, 0x15e14cc) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e14b8));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x4000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x4000000;
    *(undefined4 *)&REFG(undefined, 0x15e14a0) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e14a4) = "hkRefCountedProperties";
    *(undefined4 *)&REFG(undefined, 0x15e14a8) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e14ac) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e14b0) = &REFG(undefined, 0x11427e8);
    *(undefined4 *)&REFG(undefined, 0x15e14b4) = 5;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e14a0));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x8000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x8000000;
    *(undefined4 *)&REFG(undefined, 0x15e1488) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e148c) = "hkFloat16";
    *(undefined4 *)&REFG(undefined, 0x15e1490) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1494) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1498) = &REFG(undefined, 0x11427d8);
    *(undefined4 *)&REFG(undefined, 0x15e149c) = 1;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1488));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x10000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x10000000;
    *(undefined4 *)&REFG(undefined, 0x15e1470) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1474) = "hkFloat16Transform";
    *(undefined4 *)&REFG(undefined, 0x15e1478) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e147c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1480) = &REFG(undefined, 0x11427c0);
    *(undefined4 *)&REFG(undefined, 0x15e1484) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1470));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x20000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x20000000;
    *(undefined4 *)&REFG(undefined, 0x15e1458) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e145c) = "hkSetunsignedinthkContainerHeapAllocatorhkMapOperationsunsignedint";
    *(undefined4 *)&REFG(undefined, 0x15e1460) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1464) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1468) = &REFG(undefined, 0x11427a8);
    *(undefined4 *)&REFG(undefined, 0x15e146c) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1458));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x40000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x40000000;
    *(undefined4 *)&REFG(undefined, 0x15e1440) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1444) = "hkSetUint32";
    *(undefined4 *)&REFG(undefined, 0x15e1448) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e144c) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1450) = &REFG(undefined, 0x1142790);
    *(undefined4 *)&REFG(undefined, 0x15e1454) = 2;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1440));
  if ((*(uint *)&REFG(undefined, 0x15e1728) & 0x80000000) == 0) {
    *(uint *)&REFG(undefined, 0x15e1728) = *(uint *)&REFG(undefined, 0x15e1728) | 0x80000000;
    *(undefined4 *)&REFG(undefined, 0x15e1428) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e142c) = "hkxBlob";
    *(undefined4 *)&REFG(undefined, 0x15e1430) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1434) = 1;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1438) = &REFG(undefined, 0x1142760);
    *(undefined4 *)&REFG(undefined, 0x15e143c) = 4;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e1428));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 1;
    *(undefined4 *)&REFG(undefined, 0x15e140c) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1410) = "hkSkinnedMeshShapePart";
    *(undefined4 *)&REFG(undefined, 0x15e1414) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1418) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e141c) = &REFG(undefined, 0x1142708);
    *(undefined4 *)&REFG(undefined, 0x15e1420) = 7;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e140c));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 2;
    *(undefined4 *)&REFG(undefined, 0x15e13f4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e13f8) = "hkSkinnedMeshShapeBoneSection";
    *(undefined4 *)&REFG(undefined, 0x15e13fc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e1400) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e1404) = &REFG(undefined, 0x11426ac);
    *(undefined4 *)&REFG(undefined, 0x15e1408) = 6;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e13f4));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 4;
    *(undefined4 *)&REFG(undefined, 0x15e13dc) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e13e0) = "hkSkinnedMeshShape";
    *(undefined4 *)&REFG(undefined, 0x15e13e4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e13e8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e13ec) = &REFG(undefined, 0x1142678);
    *(undefined4 *)&REFG(undefined, 0x15e13f0) = 3;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e13dc));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 8;
    *(undefined4 *)&REFG(undefined, 0x15e13c4) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e13c8) = "hkSkinnedRefMeshShape";
    *(undefined4 *)&REFG(undefined, 0x15e13cc) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e13d0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e13d4) = &REFG(undefined, 0x1142608);
    *(undefined4 *)&REFG(undefined, 0x15e13d8) = 10;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e13c4));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 0x10;
    *(undefined4 *)&REFG(undefined, 0x15e13ac) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e13b0) = "hkStorageSkinnedMeshShape";
    *(undefined4 *)&REFG(undefined, 0x15e13b4) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e13b8) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e13bc) = &REFG(undefined, 0x1142598);
    *(undefined4 *)&REFG(undefined, 0x15e13c0) = 9;
  }
  F_00ded650(param_1,&REFG(undefined, 0x15e13ac));
  if ((*(uint *)&REFG(undefined, 0x15e1424) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e1424) = *(uint *)&REFG(undefined, 0x15e1424) | 0x20;
    *(undefined4 *)&REFG(undefined, 0x15e1394) = 0;
    *(char * PTR32 *)&REFG(undefined, 0x15e1398) = "hkxBlobMeshShape";
    *(undefined4 *)&REFG(undefined, 0x15e139c) = 0xffffffff;
    *(undefined4 *)&REFG(undefined, 0x15e13a0) = 0;
    *(undefined * PTR32 *)&REFG(undefined, 0x15e13a4) = &REFG(undefined, 0x1142540);
    *(undefined4 *)&REFG(undefined, 0x15e13a8) = 7;
  }
  uVar1 = F_00ded650(param_1,&REFG(undefined, 0x15e1394));
  return uVar1;
}

/* ref: FUN_00dcde20 */
uint F_00dcde20(void)
{
  GEN_ENTER(0xdcde20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00dca9d0(REFG(undefined4, 0x15e3734));
  return uVar1;
}

/* ref: FUN_00dcde30 */
uint F_00dcde30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcde30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x30))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dcde60 */
uint F_00dcde60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcde60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dcde70 */
uint F_00dcde70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcde70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dcde90 */
unsigned int F_00dcde90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcde90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00dceba0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00dcdec0 */
unsigned int F_00dcdec0(void)
{
  GEN_ENTER(0xdcdec0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dcdef0 */
unsigned int F_00dcdef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcdef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00dcf540(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00dcdf10 */
uint F_00dcdf10(unsigned int gen_a0)
{
  GEN_ENTER(0xdcdf10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dcdf20 */
uint F_00dcdf20(void)
{
  GEN_ENTER(0xdcdf20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00dcf540(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dcdf50 */
unsigned int F_00dcdf50(unsigned int gen_a0)
{
  GEN_ENTER(0xdcdf50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_1);
  }
  *param_1 = 0;
  return 0;
}

/* ref: FUN_00dcdf70 */
unsigned int F_00dcdf70(unsigned int gen_a0)
{
  GEN_ENTER(0xdcdf70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dcdf90 */
unsigned int F_00dcdf90(unsigned int gen_a0)
{
  GEN_ENTER(0xdcdf90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00dcdfc0 */
unsigned int F_00dcdfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdcdfc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dcdff0 */
uint F_00dcdff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcdff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00dce030 */
uint F_00dce030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce060 */
unsigned int F_00dce060(void)
{
  GEN_ENTER(0xdce060u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce090 */
unsigned int F_00dce090(void)
{
  GEN_ENTER(0xdce090u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce0a0 */
unsigned int F_00dce0a0(void)
{
  GEN_ENTER(0xdce0a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce0e0 */
unsigned int F_00dce0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdce0e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x104);
  }
  return 0;
}

/* ref: FUN_00dce120 */
uint F_00dce120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x104);
  }
  return (uint)this;
}

/* ref: FUN_00dce1a0 */
unsigned int F_00dce1a0(void)
{
  GEN_ENTER(0xdce1a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce1c0 */
unsigned int F_00dce1c0(void)
{
  GEN_ENTER(0xdce1c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce1f0 */
uint F_00dce1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce220 */
unsigned int F_00dce220(void)
{
  GEN_ENTER(0xdce220u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce230 */
unsigned int F_00dce230(void)
{
  GEN_ENTER(0xdce230u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce240 */
uint F_00dce240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce250 */
uint F_00dce250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce280 */
unsigned int F_00dce280(void)
{
  GEN_ENTER(0xdce280u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce2a0 */
unsigned int F_00dce2a0(void)
{
  GEN_ENTER(0xdce2a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce2c0 */
unsigned int F_00dce2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00dd0a20(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00dce2e0 */
uint F_00dce2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdce2e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dce2f0 */
uint F_00dce2f0(void)
{
  GEN_ENTER(0xdce2f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x160];
  
  F_00dd0a20(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dce330 */
unsigned int F_00dce330(void)
{
  GEN_ENTER(0xdce330u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce340 */
unsigned int F_00dce340(unsigned int gen_a0)
{
  GEN_ENTER(0xdce340u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_1);
  }
  *param_1 = 0;
  return 0;
}

/* ref: FUN_00dce370 */
unsigned int F_00dce370(unsigned int gen_a0)
{
  GEN_ENTER(0xdce370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dce390 */
unsigned int F_00dce390(unsigned int gen_a0)
{
  GEN_ENTER(0xdce390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dce3d0 */
unsigned int F_00dce3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdce3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dce3f0 */
uint F_00dce3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00dce430 */
uint F_00dce430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce440 */
uint F_00dce440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce440u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce470 */
unsigned int F_00dce470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce470u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00dd3140(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00dce490 */
uint F_00dce490(unsigned int gen_a0)
{
  GEN_ENTER(0xdce490u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dce4a0 */
uint F_00dce4a0(void)
{
  GEN_ENTER(0xdce4a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  F_00dd3140(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dce4d0 */
unsigned int F_00dce4d0(void)
{
  GEN_ENTER(0xdce4d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dce4e0 */
uint F_00dce4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdce4e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
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

/* ref: FUN_00dce520 */
unsigned int F_00dce520(unsigned int gen_a0)
{
  GEN_ENTER(0xdce520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dce560 */
uint F_00dce560(unsigned int gen_a0)
{
  GEN_ENTER(0xdce560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dce5a0 */
uint F_00dce5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00dce610 */
uint F_00dce610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce630 */
unsigned int F_00dce630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce630u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00dd4270(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00dce650 */
uint F_00dce650(unsigned int gen_a0)
{
  GEN_ENTER(0xdce650u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dce660 */
uint F_00dce660(void)
{
  GEN_ENTER(0xdce660u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00dd4270(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dce690 */
uint F_00dce690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce6b0 */
unsigned int F_00dce6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00dd5100(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00dce6d0 */
uint F_00dce6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdce6d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dce6e0 */
uint F_00dce6e0(void)
{
  GEN_ENTER(0xdce6e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  
  F_00dd5100(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dce740 */
uint F_00dce740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce760 */
uint F_00dce760(unsigned int gen_a0)
{
  GEN_ENTER(0xdce760u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dce770 */
uint F_00dce770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x1148efc));
    uVar1 = F_00d91350(param_1 + 2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dce790 */
uint F_00dce790(void)
{
  GEN_ENTER(0xdce790u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  return 0x1148efc;
}

/* ref: FUN_00dce800 */
uint F_00dce800(unsigned int gen_a0)
{
  GEN_ENTER(0xdce800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dce830 */
uint F_00dce830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dce870 */
uint F_00dce870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[15])REFP(0x1148efc));
  F_00d91350(in_ecx + 2,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dce890 */
uint F_00dce890(unsigned int gen_a0)
{
  GEN_ENTER(0xdce890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dce8c0 */
uint F_00dce8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdce8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkMemoryMeshTexture::vf0 */
uint F_00dce910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)(this + 0x14);
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0xc),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  F_00d91510(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dce990 */
uint F_00dce990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dce9b0 */
unsigned int F_00dce9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdce9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00dd5980(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00dce9d0 */
uint F_00dce9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdce9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dce9e0 */
uint F_00dce9e0(void)
{
  GEN_ENTER(0xdce9e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00dd5980(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dcea10 */
uint F_00dcea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcea10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dcea30 */
unsigned int F_00dcea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcea30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00dd6260(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00dcea50 */
uint F_00dcea50(unsigned int gen_a0)
{
  GEN_ENTER(0xdcea50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dcea60 */
uint F_00dcea60(void)
{
  GEN_ENTER(0xdcea60u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x70];
  
  F_00dd6260(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dcea90 */
uint F_00dcea90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcea90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dceab0 */
unsigned int F_00dceab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdceab0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00dd6f60(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00dcead0 */
uint F_00dcead0(unsigned int gen_a0)
{
  GEN_ENTER(0xdcead0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dceae0 */
uint F_00dceae0(void)
{
  GEN_ENTER(0xdceae0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x80];
  
  F_00dd6f60(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00dceb30 */
uint F_00dceb30(unsigned int gen_a0)
{
  GEN_ENTER(0xdceb30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[13])REFP(0x1149100));
  return (uint)in_ecx;
}

/* ref: FUN_00dceb50 */
uint F_00dceb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdceb50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[13])REFP(0x1149100));
  return (uint)in_ecx;
}

/* ref: FUN_00dceb60 */
unsigned int F_00dceb60(unsigned int gen_a0)
{
  GEN_ENTER(0xdceb60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: hkStorageSkinnedMeshShape::vf2 */
uint F_00dceb70(void)
{
  GEN_ENTER(0xdceb70u, 0u, 0u, 0u, 0u);
  return 0x15e23b4;
}

/* ref: hkStorageSkinnedMeshShape::vf9 */
uint F_00dceb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdceb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0x20,param_1);
  return uVar1;
}

/* ref: FUN_00dceb90 */
uint F_00dceb90(unsigned int gen_a0)
{
  GEN_ENTER(0xdceb90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00dceba0 */
uint F_00dceba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdceba0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx;
}

/* ref: hkStorageSkinnedMeshShape::vf3 */
uint F_00dcebb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdcebb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: hkStorageSkinnedMeshShape::vf5 */
uint F_00dcebc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdcebc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: hkStorageSkinnedMeshShape::vf8 */
uint F_00dcebd0(unsigned int gen_a0)
{
  GEN_ENTER(0xdcebd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20) & 0xfffffffe;
}

/* ref: hkStorageSkinnedMeshShape::vf4 */
ushort F_00dcebe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdcebe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  ushort uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 8) + param_1 * 8)));
  if ((undefined *)*puVar1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*puVar1);
  }
  if ((undefined *)*param_2 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_2);
  }
  *param_2 = *puVar1;
  uVar2 = *(ushort *)(puVar1 + 1);
  *(ushort *)(param_2 + 1) = uVar2;
  *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)((int)puVar1 + 6);
  return uVar2;
}

/* ref: hkStorageSkinnedMeshShape::vf6 */
uint F_00dcec30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdcec30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  puVar4 = ((undefined4 *)GEN_TOP((param_1 * 0x30 + *(int *)(this + 0x14))));
  *param_2 = *puVar4;
  param_2[1] = puVar4[1];
  param_2[2] = puVar4[2];
  param_2[3] = puVar4[3];
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(puVar4 + 4);
  *(undefined2 *)((int)param_2 + 0x12) = *(undefined2 *)((int)puVar4 + 0x12);
  uVar1 = puVar4[9];
  uVar2 = puVar4[10];
  uVar3 = puVar4[0xb];
  param_2[8] = puVar4[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  return (uint)puVar4;
}

/* ref: hkStorageSkinnedMeshShape::vf12 */
unsigned int F_00dcec80(unsigned int gen_a0)
{
  GEN_ENTER(0xdcec80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_14;
  
  iVar8 = *(int *)(this + 0x18);
  do {
    iVar8 = iVar8 + -1;
    bVar7 = false;
    if (iVar8 < 1) {
      return 0;
    }
    iVar10 = 0;
    local_14 = iVar8;
    do {
      iVar6 = *(int *)(this + 0x14);
      if (*(ushort *)(iVar6 + 0x40 + iVar10) < *(ushort *)(iVar6 + 0x10 + iVar10)) {
        uVar1 = *(undefined8 *)(iVar6 + iVar10);
        puVar9 = (undefined4 *)(iVar6 + iVar10);
        uVar2 = *(undefined8 *)(puVar9 + 2);
        uVar3 = *(undefined8 *)(puVar9 + 4);
        uVar4 = *(undefined8 *)(puVar9 + 8);
        uVar5 = *(undefined8 *)(puVar9 + 10);
        *puVar9 = *(undefined4 *)(iVar6 + 0x30 + iVar10);
        puVar9[1] = puVar9[0xd];
        puVar9[2] = puVar9[0xe];
        puVar9[3] = puVar9[0xf];
        *(undefined2 *)(puVar9 + 4) = *(undefined2 *)(puVar9 + 0x10);
        *(undefined2 *)((int)puVar9 + 0x12) = *(undefined2 *)((int)puVar9 + 0x42);
        local_50 = (undefined4)uVar1;
        puVar9[8] = puVar9[0x14];
        puVar9[9] = puVar9[0x15];
        puVar9[10] = puVar9[0x16];
        puVar9[0xb] = puVar9[0x17];
        local_30 = (undefined4)uVar4;
        uStack_2c = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_28 = (undefined4)uVar5;
        uStack_24 = (undefined4)((ulonglong)uVar5 >> 0x20);
        puVar9[0xc] = local_50;
        uStack_4c = (undefined4)((ulonglong)uVar1 >> 0x20);
        puVar9[0xd] = uStack_4c;
        local_48 = (undefined4)uVar2;
        puVar9[0xe] = local_48;
        uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
        puVar9[0xf] = uStack_44;
        local_40 = (undefined2)uVar3;
        *(undefined2 *)(puVar9 + 0x10) = local_40;
        *(short *)((int)puVar9 + 0x42) = (short)((ulonglong)uVar3 >> 0x10);
        puVar9[0x14] = local_30;
        puVar9[0x15] = uStack_2c;
        puVar9[0x16] = uStack_28;
        puVar9[0x17] = uStack_24;
        bVar7 = true;
      }
      iVar10 = iVar10 + 0x30;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  } while (bVar7);
  return 0;
}

/* ref: hkStorageSkinnedMeshShape::vf10 */
ushort F_00dceda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdceda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * phVar1;
  int in_ecx;
  undefined4 * puVar2;
  
  phVar1 = this + 8;
  if (*(uint *)(this + 0xc) == (*(uint *)(this + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),phVar1,8);
  }
  in_ecx = *(int *)phVar1 + *(int *)(this + 0xc) * 8;
  if (in_ecx != 0) {
    F_00dceb90(in_ecx);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)phVar1 + *(int *)(this + 0xc) * 8)));
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    F_00d91a80((undefined *)*puVar2);
  }
  *puVar2 = param_1;
  *(undefined2 *)(puVar2 + 1) = (undefined2)param_2;
  *(ushort *)((int)puVar2 + 6) = (ushort)param_3;
  return (ushort)param_3;
}

/* ref: hkStorageSkinnedMeshShape::vf11 */
uint F_00dcee20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcee20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)(this + 0x18) == (*(uint *)(this + 0x1c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x14,0x30);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)(this + 0x18) * 0x30 + *(int *)(this + 0x14))));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar1[4] = param_1[4];
    puVar1[5] = param_1[5];
  }
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return (uint)puVar1;
}

/* ref: hkSkinnedMeshShape::vf7 */
uint F_00dceea0(unsigned int gen_a0)
{
  GEN_ENTER(0xdceea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x7b0];
  undefined8 uVar1;
  undefined8 uVar2;
  code * pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar7 = *(int *)this;
  (*(undefined1 * PTR32 *)(gen_frame + 0x618)) = ((undefined1 *)(gen_frame + 0x624));
  pcVar3 = *(gen_code32 *)(iVar7 + 0xc);
  (*(undefined * PTR32 *)(gen_frame + 0x778)) = this;
  (*(uint *)(gen_frame + 0x620)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x61c)) = 1;
  ((undefined1 *)(gen_frame + 0x624))[0] = 0;
  uVar4 = (*pcVar3)(this);
  (*(uint *)(gen_frame + 0x76c)) = uVar4;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  (*(uint *)(gen_frame + 0x780)) = uVar5;
  F_00da0a80(&(*(int *)(gen_frame + 0x794)),((undefined1 *)(gen_frame + 0x418)),0x200);
  F_00d9fe80(&(*(int *)(gen_frame + 0x794)),"---------------------------------------------------");
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x418)),"Mesh\\Skin\\hkSkinnedMeshShape.cpp",0x3d);
  F_00d9fda0(&(*(int *)(gen_frame + 0x794)));
  F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x618)),"Num bone sections: %d. Num parts: %d.",uVar4,(*(uint *)(gen_frame + 0x780)));
  F_00da0a80(&(*(int *)(gen_frame + 0x794)),((undefined1 *)(gen_frame + 0x418)),0x200);
  F_00da0470(&(*(int *)(gen_frame + 0x794)),&(*(undefined1 * PTR32 *)(gen_frame + 0x618)));
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x418)),"Mesh\\Skin\\hkSkinnedMeshShape.cpp",0x3f);
  F_00d9fda0(&(*(int *)(gen_frame + 0x794)));
  (*(int *)(gen_frame + 0x790)) = 0;
  if (0 < (int)uVar4) {
    do {
      F_00dceb90(&(*(int * PTR32 *)(gen_frame + 0x784)));
      ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,(*(int *)(gen_frame + 0x790)),&(*(int * PTR32 *)(gen_frame + 0x784)));
      piVar8 = (*(int * PTR32 *)(gen_frame + 0x784));
      (*(int *)(gen_frame + 0x794)) = 0;
      (*(int *)(gen_frame + 0x798)) = 0;
      (*(uint *)(gen_frame + 0x79c)) = 0x80000000;
      (*(int * PTR32 *)(gen_frame + 0x77c)) = (*(int * PTR32 *)(gen_frame + 0x784));
      uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x784)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x784)));
      F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x618)),"Bone section %d. Start bone %d, numBones %d. Num sections %d",
                   (*(int *)(gen_frame + 0x790)),(int)(*(short *)(gen_frame + 0x788)),(int)(*(short *)(gen_frame + 0x78a)),uVar4);
      F_00da0a80(((undefined1 *)(gen_frame + 0x6e0)),((undefined1 *)(gen_frame + 0x418)),0x200);
      F_00da0470(((undefined1 *)(gen_frame + 0x6e0)),&(*(undefined1 * PTR32 *)(gen_frame + 0x618)));
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x418)),"Mesh\\Skin\\hkSkinnedMeshShape.cpp",0x4a);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x6e0)));
      (*(int *)(gen_frame + 0x78c)) = 0;
      if (0 < (int)(*(uint *)(gen_frame + 0x780))) {
        do {
          ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,(*(int *)(gen_frame + 0x78c)),&(*(int *)(gen_frame + 0x730)));
          if (((int)(*(short *)(gen_frame + 0x788)) <= (int)(uint)(*(ushort *)(gen_frame + 0x740))) &&
             ((int)(uint)(*(ushort *)(gen_frame + 0x740)) < (int)(*(short *)(gen_frame + 0x78a)) + (int)(*(short *)(gen_frame + 0x788)))) {
            ((code *)*(gen_code32 *)(*piVar8 + 0x10))(piVar8,(uint)(*(ushort *)(gen_frame + 0x742)),3,((undefined1 *)(gen_frame + 0x6ac)));
            F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x618)),
                         "Part %d. Bone %d. Sub-mesh %d. Start vertex %d. NumVerts %d. Start Index %d. NumIndices %d."
                         ,(*(int *)(gen_frame + 0x78c)),(uint)(*(ushort *)(gen_frame + 0x740)),(uint)(*(ushort *)(gen_frame + 0x742)),(*(int *)(gen_frame + 0x730)),(*(int *)(gen_frame + 0x734)),(*(int *)(gen_frame + 0x738)),(*(int *)(gen_frame + 0x73c))
                        );
            F_00da0a80(((undefined1 *)(gen_frame + 0x704)),((undefined1 *)(gen_frame + 0x418)),0x200);
            F_00da0470(((undefined1 *)(gen_frame + 0x704)),&(*(undefined1 * PTR32 *)(gen_frame + 0x618)));
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x418)),"Mesh\\Skin\\hkSkinnedMeshShape.cpp",0x59
                      );
            F_00d9fda0(((undefined1 *)(gen_frame + 0x704)));
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x6c8));
            (*(int *)(gen_frame + 0x724)) = (*(int *)(gen_frame + 0x734));
            (*(int *)(gen_frame + 0x720)) = (*(int *)(gen_frame + 0x730));
            (*(undefined2 *)(gen_frame + 0x728)) = 0;
            (*(undefined4 *)(gen_frame + 0x72c)) = 1;
            (*(int * PTR32 *)(gen_frame + 0x774)) = (*(int * PTR32 *)(gen_frame + 0x6c8));
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x6c8)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x6c8)),&(*(int *)(gen_frame + 0x720)),((undefined1 *)(gen_frame + 0x8)));
            F_00dd7940(((undefined1 *)(gen_frame + 0x510)));
            ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8,((undefined1 *)(gen_frame + 0x510)));
            uVar4 = F_00dd7a40(((undefined1 *)(gen_frame + 0x510)),1,0);
            (*(int *)(gen_frame + 0x770)) = (*(int *)(gen_frame + 0x734));
            if ((int)((*(uint *)(gen_frame + 0x79c)) & 0x3fffffff) < (*(int *)(gen_frame + 0x734))) {
              iVar7 = ((*(uint *)(gen_frame + 0x79c)) & 0x3fffffff) * 2;
              if (iVar7 <= (*(int *)(gen_frame + 0x734))) {
                iVar7 = (*(int *)(gen_frame + 0x734));
              }
              F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x794)),iVar7,0x10);
            }
            (*(int *)(gen_frame + 0x798)) = (*(int *)(gen_frame + 0x770));
            ((code *)*(gen_code32 *)(*piVar8 + 0x24))(piVar8,((undefined1 *)(gen_frame + 0x8)),uVar4,(*(int *)(gen_frame + 0x794)));
            iVar7 = 0;
            if (0 < (*(int *)(gen_frame + 0x734))) {
              iVar9 = 0;
              do {
                uVar1 = *(undefined8 *)((*(int *)(gen_frame + 0x794)) + iVar9);
                (*(undefined8 *)(gen_frame + 0x710)) = uVar1;
                uVar1 = (*(undefined8 *)(gen_frame + 0x710));
                uVar2 = *(undefined8 *)((*(int *)(gen_frame + 0x794)) + 8 + iVar9);
                (*(undefined8 *)(gen_frame + 0x718)) = uVar2;
                uVar2 = (*(undefined8 *)(gen_frame + 0x718));
                (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x718)) + 0)) = gen_bits2f((uint)uVar2);
                dVar10 = (double)(*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x718)) + 0));
                (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x710)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
                dVar11 = (double)(*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x710)) + 4));
                (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x710)) + 0)) = gen_bits2f((uint)uVar1);
                dVar12 = (double)(*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x710)) + 0));
                (*(undefined8 *)(gen_frame + 0x710)) = uVar1;
                (*(undefined8 *)(gen_frame + 0x718)) = uVar2;
                F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x618)),"Vtx %d.\t(%f, %f, %f)",iVar7 + (*(int *)(gen_frame + 0x730)),
                             (int)(ulonglong)gen_d2bits(dVar12),
                             (int)((ulonglong)gen_d2bits(dVar12) >> 0x20),
                             (int)(ulonglong)gen_d2bits(dVar11),
                             (int)((ulonglong)gen_d2bits(dVar11) >> 0x20),
                             (int)(ulonglong)gen_d2bits(dVar10),
                             (int)((ulonglong)gen_d2bits(dVar10) >> 0x20));
                F_00da0a80(((undefined1 *)(gen_frame + 0x6d4)),((undefined1 *)(gen_frame + 0x218)),0x200);
                F_00da0470(((undefined1 *)(gen_frame + 0x6d4)),&(*(undefined1 * PTR32 *)(gen_frame + 0x618)));
                ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x218)),"Mesh\\Skin\\hkSkinnedMeshShape.cpp",
                           0x70);
                F_00d9fda0(((undefined1 *)(gen_frame + 0x6d4)));
                iVar7 = iVar7 + 1;
                iVar9 = iVar9 + 0x10;
                piVar8 = (*(int * PTR32 *)(gen_frame + 0x774));
              } while (iVar7 < (*(int *)(gen_frame + 0x734)));
            }
            ((code *)*(gen_code32 *)(*piVar8 + 0x34))(piVar8,((undefined1 *)(gen_frame + 0x8)));
            iVar7 = (*(int *)(gen_frame + 0x6c4));
            if ((*(char *)(gen_frame + 0x6c0)) == '\x01') {
              iVar9 = 0;
              if (0 < (*(int *)(gen_frame + 0x73c))) {
                do {
                  iVar6 = (*(int *)(gen_frame + 0x738)) + iVar9;
                  F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x618)),"Tri (%d, %d, %d).",(int)*(short *)(iVar7 + iVar6 * 2),
                               (int)*(short *)(iVar7 + 2 + iVar6 * 2),
                               (int)*(short *)(iVar7 + 4 + iVar6 * 2));
                  F_00da0a80(((undefined1 *)(gen_frame + 0x6f8)),((undefined1 *)(gen_frame + 0x218)),0x200);
                  F_00da0470(((undefined1 *)(gen_frame + 0x6f8)),&(*(undefined1 * PTR32 *)(gen_frame + 0x618)));
                  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x218)),
                             "Mesh\\Skin\\hkSkinnedMeshShape.cpp",0x82);
                  F_00d9fda0(((undefined1 *)(gen_frame + 0x6f8)));
                  iVar9 = iVar9 + 3;
                } while (iVar9 < (*(int *)(gen_frame + 0x73c)));
              }
            }
            else if (((*(char *)(gen_frame + 0x6c0)) == '\x02') && (iVar9 = 0, 0 < (*(int *)(gen_frame + 0x73c)))) {
              do {
                iVar6 = (*(int *)(gen_frame + 0x738)) + iVar9;
                F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x618)),"Tri (%d, %d, %d).",*(undefined4 *)(iVar7 + iVar6 * 4),
                             *(undefined4 *)(iVar7 + 4 + iVar6 * 4),
                             *(undefined4 *)(iVar7 + 8 + iVar6 * 4));
                F_00da0a80(((undefined1 *)(gen_frame + 0x6ec)),((undefined1 *)(gen_frame + 0x218)),0x200);
                F_00da0470(((undefined1 *)(gen_frame + 0x6ec)),&(*(undefined1 * PTR32 *)(gen_frame + 0x618)));
                ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x218)),"Mesh\\Skin\\hkSkinnedMeshShape.cpp",
                           0x8e);
                F_00d9fda0(((undefined1 *)(gen_frame + 0x6ec)));
                iVar9 = iVar9 + 3;
              } while (iVar9 < (*(int *)(gen_frame + 0x73c)));
            }
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x77c)) + 0x14))((*(int * PTR32 *)(gen_frame + 0x77c)),((undefined1 *)(gen_frame + 0x6ac)));
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x77c));
            this = (*(undefined * PTR32 *)(gen_frame + 0x778));
          }
          iVar7 = (*(int *)(gen_frame + 0x78c)) + 1;
          (*(int *)(gen_frame + 0x78c)) = iVar7;
        } while (iVar7 < (int)(*(uint *)(gen_frame + 0x780)));
      }
      (*(int *)(gen_frame + 0x798)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x79c))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x794)),(*(uint *)(gen_frame + 0x79c)) << 4);
      }
      (*(int *)(gen_frame + 0x794)) = 0;
      (*(uint *)(gen_frame + 0x79c)) = 0x80000000;
      if ((*(int * PTR32 *)(gen_frame + 0x784)) != (int *)0x0) {
        F_00d91a80((*(int * PTR32 *)(gen_frame + 0x784)));
      }
      iVar7 = (*(int *)(gen_frame + 0x790)) + 1;
      (*(int * PTR32 *)(gen_frame + 0x784)) = (int *)0x0;
      (*(int *)(gen_frame + 0x790)) = iVar7;
    } while (iVar7 < (int)(*(uint *)(gen_frame + 0x76c)));
  }
  (*(undefined4 *)(gen_frame + 0x61c)) = 0;
  uVar4 = (*(uint *)(gen_frame + 0x620));
  if (-1 < (int)(*(uint *)(gen_frame + 0x620))) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x618)),(*(uint *)(gen_frame + 0x620)) & 0x3fffffff);
  }
  return uVar4;
}

/* ref: FUN_00dcf500 */
uint F_00dcf500(unsigned int gen_a0)
{
  GEN_ENTER(0xdcf500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00dceb30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x1149280));
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00d91480((undefined *)((int)this + 0x20),0);
  return (uint)this;
}

/* ref: FUN_00dcf540 */
uint F_00dcf540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dceb50(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x1149280));
  F_00d91350((int)this + 0x20,param_1);
  return (uint)this;
}

/* ref: hkSkinnedMeshShape::vf8 */
uint F_00dcf570(void)
{
  GEN_ENTER(0xdcf570u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkSkinnedMeshShape::vf9 */
unsigned int F_00dcf580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkSkinnedMeshShape::vf10 */
unsigned int F_00dcf590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdcf590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: hkSkinnedMeshShape::vf11 */
unsigned int F_00dcf5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkSkinnedMeshShape::vf12 */
unsigned int F_00dcf5b0(void)
{
  GEN_ENTER(0xdcf5b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dcf5e0 */
uint F_00dcf5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdcf5e0u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (char)param_3;
  return param_2;
}

/* ref: FUN_00dcf620 */
uint F_00dcf620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00dcf650 */
unsigned int F_00dcf650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00dcf680 */
unsigned int F_00dcf680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
    *(undefined4 *)this = *param_1;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  return 0;
}

/* ref: FUN_00dcf6f0 */
uint F_00dcf6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf6f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00dcf740 */
uint F_00dcf740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf740u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_00dcf760 */
uint F_00dcf760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf760u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_00dcf7c0 */
uint F_00dcf7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdcf7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dcf7e0 */
uint F_00dcf7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdcf7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: FUN_00dcf800 */
uint F_00dcf800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf800u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dcf840 */
uint F_00dcf840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  *(undefined2 *)((int)this + 6) = *(undefined2 *)((int)param_1 + 6);
  return (uint)this;
}

/* ref: FUN_00dcf880 */
uint F_00dcf880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)((int)this + 0x12) = *(undefined2 *)((int)param_1 + 0x12);
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  return (uint)this;
}

/* ref: FUN_00dcf9f0 */
unsigned int F_00dcf9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcf9f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00dceb90(in_ecx);
      }
      in_ecx = in_ecx + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dcfa20 */
unsigned int F_00dcfa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdcfa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
        puVar1[3] = param_3[3];
        puVar1[4] = param_3[4];
        puVar1[5] = param_3[5];
      }
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dcfa90 */
uint F_00dcfa90(unsigned int gen_a0)
{
  GEN_ENTER(0xdcfa90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSkinnedMeshShape::vf0 */
uint F_00dcfac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dceb60(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dcfb10 */
uint F_00dcfb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  if (iVar1 != 0) {
    F_00dceb90(iVar1);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dcfb60 */
uint F_00dcfb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdcfb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x30);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dcfbe0 */
uint F_00dcfbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dcfc20 */
unsigned int F_00dcfc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfc20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 8);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 8 + iVar1 * 8) = 0;
  }
  return 0;
}

/* ref: FUN_00dcfc50 */
uint F_00dcfc50(unsigned int gen_a0)
{
  GEN_ENTER(0xdcfc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  if (iVar1 != 0) {
    F_00dceb90(iVar1);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dcfc90 */
uint F_00dcfc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x30);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar1[4] = param_1[4];
    puVar1[5] = param_1[5];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dcfd10 */
uint F_00dcfd10(unsigned int gen_a0)
{
  GEN_ENTER(0xdcfd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dcfd90 */
uint F_00dcfd90(unsigned int gen_a0)
{
  GEN_ENTER(0xdcfd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dcfdd0 */
uint F_00dcfdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdcfdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dcfe40 */
uint F_00dcfe40(unsigned int gen_a0)
{
  GEN_ENTER(0xdcfe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dcfeb0 */
uint F_00dcfeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdcfeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dcff20 */
uint F_00dcff20(unsigned int gen_a0)
{
  GEN_ENTER(0xdcff20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dcff50 */
uint F_00dcff50(unsigned int gen_a0)
{
  GEN_ENTER(0xdcff50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  F_00d91510((undefined *)((int)this + 0x20));
  uVar2 = *(uint *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),(uVar2 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  iVar3 = *(int *)((int)this + 0xc) + -1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  F_00dceb60(this);
  return uVar2;
}

/* ref: hkStorageSkinnedMeshShape::vf0 */
uint F_00dd0000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dcff50(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd0050 */
uint F_00dd0050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0050u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  bool bVar1;
  
  bVar1 = *param_1 < *param_2;
  if (*param_1 == *param_2) {
    bVar1 = param_1[1] < param_2[1];
  }
  return (uint)bVar1;
}

/* ref: hkMultipleVertexBuffer::vf9 */
uint F_00dd0080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd0080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dda130(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf10 */
uint F_00dd00a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd00a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dda160(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf11 */
uint F_00dd00c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd00c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dd8890(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf12 */
uint F_00dd00e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd00e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dd8a80(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dd0100 */
unsigned int F_00dd0100(unsigned int gen_a0)
{
  GEN_ENTER(0xdd0100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined1 *)((int)this + 0x141) = 1;
  if (*(int *)((int)this + 300) < 1) {
    *(undefined1 *)((int)this + 0x142) = 1;
    return 0;
  }
  iVar3 = 0;
  do {
    piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x128))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 == '\0') {
      *(undefined2 *)((int)this + 0x141) = 0x100;
      return 0;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0xc;
  } while (iVar4 < *(int *)((int)this + 300));
  *(undefined1 *)((int)this + 0x142) = 1;
  return 0;
}

/* ref: FUN_00dd0170 */
unsigned int F_00dd0170(unsigned int gen_a0)
{
  GEN_ENTER(0xdd0170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 300);
  if (0 < local_c) {
    local_8 = 0;
    do {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + local_8)));
      if (*(char *)(puVar3 + 2) != '\0') {
        ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x34))((int *)*puVar3,puVar3[1]);
        *(undefined1 *)(puVar3 + 2) = 0;
      }
      iVar1 = puVar3[1];
      if (iVar1 != 0) {
        pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),iVar1,0x20c)
        ;
        puVar3[1] = 0;
      }
      local_8 = local_8 + 0xc;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return 0;
}

/* ref: hkMultipleVertexBuffer::vf13 */
unsigned int F_00dd01f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd01f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * phVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  
  if (this[0x138] != (undefined1)0x0) {
    piVar3 = *(int * PTR32 *)(this + 0x118);
    if (piVar3 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
      (*(uint *)(gen_frame + 0x14)) = uVar4;
      if (0 < *(int *)(this + 0x110)) {
        iVar5 = 0;
        (*(int *)(gen_frame + 0x18)) = *(int *)(this + 0x110);
        do {
          pbVar6 = ((byte *)GEN_TOP((*(int *)(this + 0x10c) + iVar5)));
          if (((pbVar6[4] & 2) != 0) && (-1 < (char)pbVar6[6])) {
            F_00dd4fa0(*(undefined * PTR32 *)(this + 0x118),(int)(char)pbVar6[6],((undefined1 *)(gen_frame + 0x4)));
            F_00dda4c0(((undefined1 *)(gen_frame + 0x4)),(uint)pbVar6[2] * 0x10 +
                                  *((int *)GEN_TOP((*(int *)(this + 0x128) + 4 + (uint)*pbVar6 * 0xc))),(*(uint *)(gen_frame + 0x14))
                        );
          }
          iVar5 = iVar5 + 7;
          iVar2 = (*(int *)(gen_frame + 0x18)) + -1;
          (*(int *)(gen_frame + 0x18)) = iVar2;
        } while (iVar2 != 0);
      }
      if (*(undefined * PTR32 *)(this + 0x118) != (undefined *)0x0) {
        F_00d91a80(*(undefined * PTR32 *)(this + 0x118));
      }
      *(undefined4 *)(this + 0x118) = 0;
    }
    F_00dd0170(this);
    if (this[0x140] != (undefined1)0x0) {
      phVar1 = this + 0x13c;
      *(int *)phVar1 = *(int *)phVar1 + 1;
      if (*(int *)phVar1 == 0) {
        *(undefined4 *)(this + 0x13c) = 1;
      }
    }
    this[0x138] = (undefined1)0x0;
  }
  return 0;
}

/* ref: FUN_00dd02e0 */
uint F_00dd02e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd02e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  char cVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined8 * puVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  byte * pbVar9;
  byte * pbVar10;
  int iVar11;
  undefined8 * puVar12;
  
  iVar8 = 0;
  if (0 < *(int *)((int)this + 300)) {
    iVar11 = 0;
    do {
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20c)
      ;
      *((uint *)GEN_TOP((iVar11 + 4 + *(int *)((int)this + 0x128)))) = uVar3;
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 0xc;
    } while (iVar8 < *(int *)((int)this + 300));
  }
  iVar8 = param_1[1];
  uVar3 = *(uint *)((int)this + 0x110);
  (*(uint *)(gen_frame + 0x1b8)) = uVar3;
  if (iVar8 < 0) {
    iVar8 = *(int *)((int)this + 0x134) - *param_1;
    (*(int *)(gen_frame + 0x1bc)) = iVar8;
  }
  else {
    (*(int *)(gen_frame + 0x1bc)) = iVar8;
  }
  (*(int *)(gen_frame + 0x1bc)) = iVar8;
  if (1 < (int)uVar3) {
    F_00dd1080(*(undefined4 *)((int)this + 0x10c),0,uVar3 - 1,((code *)REFP(0xdd0050)));
  }
  pbVar10 = *(byte * PTR32 *)((int)this + 0x10c);
  (*(byte * PTR32 *)(gen_frame + 0x1c8)) = pbVar10;
  (*(byte * PTR32 *)(gen_frame + 0x1c0)) = pbVar10 + *(int *)((int)this + 0x110) * 7;
  if (pbVar10 < pbVar10 + *(int *)((int)this + 0x110) * 7) {
    do {
      pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x1c8));
      do {
        pbVar10 = pbVar10 + 7;
        if ((*(byte * PTR32 *)(gen_frame + 0x1c0)) <= pbVar10) break;
      } while ((uint)*pbVar10 == (uint)*(*(byte * PTR32 *)(gen_frame + 0x1c8)));
      iVar8 = ((int)pbVar10 - (int)(*(byte * PTR32 *)(gen_frame + 0x1c8))) / 7;
      iVar11 = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + (uint)*(*(byte * PTR32 *)(gen_frame + 0x1c8)) * 0xc)));
      (*(int *)(gen_frame + 0x104)) = iVar8;
      if (0 < iVar8) {
        pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x1c8)) + 4;
        do {
          ((uint *)(gen_frame + 0x108))[(int)(iVar11)] = (uint)pbVar9[-3];
          pbVar9[-2] = (byte)iVar11;
          ((byte *)(gen_frame + 0x188))[(int)(iVar11)] = *pbVar9;
          iVar11 = iVar11 + 1;
          pbVar9 = pbVar9 + 7;
        } while (iVar11 < iVar8);
      }
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c4));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x1c4))[1] == 0) {
        pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                          (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20c);
        puVar7[1] = uVar3;
      }
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*puVar7 + 0x20))((int *)*puVar7,param_1,&(*(int *)(gen_frame + 0x104)),puVar7[1]);
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = (undefined4 *)uVar3;
      if (uVar3 != 1) {
        F_00dd0170(this);
        return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x1c4));
      }
      *(undefined1 *)(puVar7 + 2) = 1;
      (*(byte * PTR32 *)(gen_frame + 0x1c8)) = pbVar10;
      iVar8 = (*(int *)(gen_frame + 0x1bc));
      uVar3 = (*(uint *)(gen_frame + 0x1b8));
    } while (pbVar10 < (*(byte * PTR32 *)(gen_frame + 0x1c0)));
  }
  *(uint *)(param_2 + 0x200) = uVar3;
  *(int *)(param_2 + 0x204) = iVar8;
  *(undefined1 *)(param_2 + 0x208) = 0;
  F_00dd7940(((byte *)(gen_frame + 0x0)));
  if (0 < (int)uVar3) {
    (*(byte * PTR32 *)(gen_frame + 0x1c0)) = (byte *)0x0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = (undefined4 *)uVar3;
    do {
      pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x1c0)) + *(int *)((int)this + 0x10c);
      puVar4 = ((undefined8 *)GEN_TOP(((uint)pbVar9[2] * 0x10 +
               *((int *)GEN_TOP((*(int *)((int)this + 0x128) + 4 + (uint)*pbVar9 * 0xc))))));
      cVar1 = *(char *)((int)this + (uint)pbVar9[3] * 8 + 8);
      pbVar10 = (byte *)((int)this + (uint)pbVar9[3] * 8 + 8);
      puVar12 = (undefined8 *)((uint)pbVar9[5] * 0x10 + param_2);
      (*(byte * PTR32 *)(gen_frame + 0x1c8)) = pbVar10;
      if ((cVar1 == *(char *)(puVar4 + 1)) && (pbVar10[1] == *(byte *)((int)puVar4 + 9))) {
        *puVar12 = *puVar4;
        puVar12[1] = puVar4[1];
        pbVar9[6] = 0xff;
      }
      else if ((*(char *)(puVar4 + 1) == '\v') &&
              (((*(char *)((int)puVar4 + 9) == '\x01' && (cVar1 == '\n')) && (pbVar10[1] < 5)))) {
        *puVar12 = *puVar4;
        puVar12[1] = puVar4[1];
        *(byte *)(puVar12 + 1) = *pbVar10;
        *(byte *)((int)puVar12 + 9) = pbVar10[1];
        pbVar9[6] = 0xff;
      }
      else {
        F_00dd7b40(((byte *)(gen_frame + 0x0)),pbVar10);
        pbVar9[6] = 0;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(*(byte * PTR32 *)(gen_frame + 0x1c8));
        *(undefined4 *)((int)puVar12 + 0xc) = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x1c8)) + 4);
      }
      (*(byte * PTR32 *)(gen_frame + 0x1c0)) = (*(byte * PTR32 *)(gen_frame + 0x1c0)) + 7;
      uVar6 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) - 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = (undefined4 *)uVar6;
      iVar8 = (*(int *)(gen_frame + 0x1bc));
      uVar3 = (*(uint *)(gen_frame + 0x1b8));
    } while (uVar6 != 0);
  }
  if (0 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 256))) {
    F_00dd7c00(((byte *)(gen_frame + 0x0)));
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x1a8)));
    *(undefined2 *)((int)pvVar5 + 4) = 0x1a8;
    pvVar5 = (undefined *)F_00dd5230(pvVar5,((byte *)(gen_frame + 0x0)),iVar8);
    if (pvVar5 != (undefined *)0x0) {
      F_00d919e0(pvVar5);
    }
    if (*(undefined * PTR32 *)((int)this + 0x118) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x118));
    }
    *(undefined * PTR32 *)((int)this + 0x118) = pvVar5;
    F_00d91a80(pvVar5);
    if (0 < (int)uVar3) {
      param_1 = (int *)0x0;
      do {
        pbVar10 = ((byte *)GEN_TOP((*(int *)((int)this + 0x10c) + (int)param_1)));
        if (-1 < (char)pbVar10[6]) {
          uVar6 = F_00dd7a40(((byte *)(gen_frame + 0x0)),(uint)*(byte *)((int)this + (uint)pbVar10[3] * 8 + 10),
                               (uint)*(byte *)((int)this + (uint)pbVar10[3] * 8 + 0xb));
          pbVar10[6] = (byte)uVar6;
          F_00dd4fa0(*(undefined * PTR32 *)((int)this + 0x118),(int)(char)(byte)uVar6,&(*(undefined4 *)(gen_frame + 0x1a8)));
          if ((pbVar10[4] & 4) == 0) {
            F_00dda4c0((uint)pbVar10[2] * 0x10 +
                         *((int *)GEN_TOP((*(int *)((int)this + 0x128) + 4 + (uint)*pbVar10 * 0xc))),&(*(undefined4 *)(gen_frame + 0x1a8)),
                         (*(int *)(gen_frame + 0x1bc)));
          }
          puVar7 = (undefined4 *)((uint)pbVar10[5] * 0x10 + param_2);
          *puVar7 = (*(undefined4 *)(gen_frame + 0x1a8));
          puVar7[1] = (*(undefined4 *)(gen_frame + 0x1ac));
        }
        param_1 = (int *)((int)param_1 + 7);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *(undefined1 *)((int)this + 0x138) = 1;
  return 1;
}

/* ref: FUN_00dd06e0 */
byte F_00dd06e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd06e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 0x120) == (*(uint *)((int)this + 0x124) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x11c),2);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 0x11c) + *(int *)((int)this + 0x120) * 2)));
  *(int *)((int)this + 0x120) = *(int *)((int)this + 0x120) + 1;
  *puVar1 = (undefined1)param_1;
  puVar1[1] = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMultipleVertexBuffer::vf7 */
uint F_00dd0730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd0730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 * puVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  iVar6 = 0;
  if (this[0x138] == (undefined1)0x0) {
    this[0x140] = (undefined1)((byte)(*(uint *)(param_1 + 0xc) >> 1) & 1);
    iVar2 = *(int *)(this + 0x108);
    iVar3 = 0;
    if (iVar2 != *(int *)(this + 0x110) && -1 < iVar2 - *(int *)(this + 0x110)) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2 - *(int *)(this + 0x110));
    }
    *(int *)(this + 0x110) = iVar2;
    if (0 < iVar2) {
      local_8 = 0;
      do {
        iVar3 = *(int *)(this + 0x11c);
        puVar4 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + local_8)));
        local_8 = local_8 + 7;
        *puVar4 = *(undefined1 *)(iVar3 + iVar6 * 2);
        puVar4[1] = *(undefined1 *)(iVar3 + iVar6 * 2 + 1);
        uVar1 = *(undefined1 *)(param_1 + 0xc);
        puVar4[5] = (char)iVar6;
        puVar4[3] = (char)iVar6;
        iVar6 = iVar6 + 1;
        puVar4[4] = uVar1;
      } while (iVar6 < iVar2);
    }
    uVar5 = F_00dd02e0(this,param_1,param_2);
    return uVar5;
  }
  return 0;
}

/* ref: hkMultipleVertexBuffer::vf8 */
uint F_00dd07e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd07e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 * puVar1;
  byte bVar2;
  int iVar3;
  undefined1 * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int local_8;
  
  iVar7 = 0;
  if (this[0x138] != (undefined1)0x0) {
    return 0;
  }
  iVar3 = *param_2;
  iVar5 = 0;
  if (iVar3 != *(int *)(this + 0x110) && -1 < iVar3 - *(int *)(this + 0x110)) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3 - *(int *)(this + 0x110));
  }
  uVar6 = 0;
  *(int *)(this + 0x110) = iVar3;
  if (0 < iVar3) {
    local_8 = 0;
    piVar8 = param_2;
    do {
      piVar8 = piVar8 + 1;
      puVar4 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x10c) + local_8)));
      local_8 = local_8 + 7;
      puVar1 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x11c) + *piVar8 * 2)));
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      bVar2 = *(byte *)((int)param_2 + iVar7 + 0x84);
      puVar4[5] = (char)iVar7;
      puVar4[4] = bVar2;
      iVar7 = iVar7 + 1;
      uVar6 = uVar6 | bVar2;
      puVar4[3] = (char)*piVar8;
    } while (iVar7 < iVar3);
  }
  this[0x140] = (undefined1)((byte)(uVar6 >> 1) & 1);
  uVar6 = F_00dd02e0(this,param_1,param_3);
  return uVar6;
}

/* ref: FUN_00dd08b0 */
uint F_00dd08b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd08b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  
  piVar1 = (int *)((int)this + 0x128);
  if (*(uint *)((int)this + 300) == (*(uint *)((int)this + 0x130) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,0xc);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 300) * 0xc)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
  }
  iVar3 = *(int *)((int)this + 300);
  uVar4 = iVar3 + 1;
  *(uint *)((int)this + 300) = uVar4;
  puVar2 = (undefined4 *)(*piVar1 + iVar3 * 0xc);
  if (param_1 != (undefined *)0x0) {
    uVar4 = F_00d919e0(param_1);
  }
  this_00 = (undefined *)*puVar2;
  if (this_00 != (undefined *)0x0) {
    uVar4 = F_00d91a80(this_00);
  }
  *puVar2 = param_1;
  return uVar4;
}

/* ref: FUN_00dd0930 */
uint F_00dd0930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd0930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x11492f4));
  F_00dd7940((int)this + 8);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0x80000000;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x124) = 0x80000000;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x130) = 0x80000000;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  F_00dd7970((undefined *)((int)this + 8),param_1);
  *(undefined4 *)((int)this + 0x134) = param_2;
  *(undefined1 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 1;
  *(undefined1 *)((int)this + 0x142) = 0;
  iVar1 = *(int *)(param_1 + 0x100);
  uVar2 = *(uint *)((int)this + 0x114) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10c,iVar3,7);
  }
  iVar3 = 0;
  if (iVar1 != *(int *)((int)this + 0x110) && -1 < iVar1 - *(int *)((int)this + 0x110)) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1 - *(int *)((int)this + 0x110));
  }
  *(int *)((int)this + 0x110) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd0a20 */
uint F_00dd0a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x11492f4));
  return (uint)in_ecx;
}

/* ref: FUN_00dd0a30 */
uint F_00dd0a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined2 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  undefined4 * puVar8;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x11492f4));
  F_00dd7940((int)this + 8);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0x80000000;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0x80000000;
  piVar1 = (int *)((int)this + 0x11c);
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0x80000000;
  *(undefined1 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(param_1 + 0x134);
  F_00dd7970((undefined *)((int)this + 8),param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x120);
  local_8 = *(int *)((int)this + 0x120);
  if (iVar7 <= *(int *)((int)this + 0x120)) {
    local_8 = iVar7;
  }
  uVar2 = *(uint *)((int)this + 0x124) & 0x3fffffff;
  if ((int)uVar2 < iVar7) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar7) {
      iVar3 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar3,2);
  }
  puVar4 = (undefined2 *)*piVar1;
  if (0 < local_8) {
    iVar3 = *(int *)(param_1 + 0x11c) - (int)puVar4;
    local_c = local_8;
    do {
      *puVar4 = *(undefined2 *)(iVar3 + (int)puVar4);
      puVar4 = puVar4 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  puVar4 = (undefined2 *)(*piVar1 + local_8 * 2);
  iVar3 = iVar7 - local_8;
  if (0 < iVar3) {
    iVar6 = (*(int *)(param_1 + 0x11c) + local_8 * 2) - (int)puVar4;
    do {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *(undefined2 *)(iVar6 + (int)puVar4);
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 0x120) = iVar7;
  iVar7 = *(int *)((int)this + 300);
  iVar3 = *(int *)(param_1 + 300);
  local_8 = iVar7;
  if (iVar3 <= iVar7) {
    local_8 = iVar3;
  }
  uVar2 = *(uint *)((int)this + 0x130) & 0x3fffffff;
  if ((int)uVar2 < iVar3) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x128,iVar6,0xc);
  }
  iVar7 = (iVar7 - iVar3) + -1;
  if (-1 < iVar7) {
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + iVar3 * 0xc + iVar7 * 0xc)));
    do {
      if ((undefined *)*puVar5 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar5);
      }
      *puVar5 = 0;
      puVar5 = puVar5 + -3;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x128);
  if (0 < local_8) {
    iVar7 = *(int *)(param_1 + 0x128) - (int)puVar5;
    local_10 = local_8;
    do {
      if (*(undefined * PTR32 *)(iVar7 + (int)puVar5) != (undefined *)0x0) {
        F_00d919e0(*(undefined * PTR32 *)(iVar7 + (int)puVar5));
      }
      if ((undefined *)*puVar5 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar5);
      }
      *puVar5 = *(undefined4 *)(iVar7 + (int)puVar5);
      puVar5[1] = *(undefined4 *)(iVar7 + 4 + (int)puVar5);
      *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(iVar7 + 8 + (int)puVar5);
      puVar5 = puVar5 + 3;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x128) + local_8 * 0xc)));
  iVar7 = *(int *)((int)this + 0x128) + local_8 * 0xc;
  param_1 = iVar3 - local_8;
  if (0 < param_1) {
    iVar6 = (int)puVar5 - iVar7;
    puVar8 = (undefined4 *)(iVar7 + 4);
    do {
      if (puVar8 != (undefined4 *)&REFG(undefined, 0x4)) {
        if ((undefined *)*puVar5 != (undefined *)0x0) {
          F_00d919e0((undefined *)*puVar5);
        }
        puVar8[-1] = *puVar5;
        *puVar8 = *(undefined4 *)(iVar6 + (int)puVar8);
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar5 + 2);
      }
      puVar8 = puVar8 + 3;
      puVar5 = puVar5 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *(int *)((int)this + 300) = iVar3;
  if (0 < iVar3) {
    iVar7 = 0;
    param_1 = iVar3;
    do {
      iVar3 = *(int *)((int)this + 0x128);
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + iVar7) + 0xc))))(*(int * PTR32 *)(iVar3 + iVar7))));
      if (this_00 != (undefined *)0x0) {
        F_00d919e0(this_00);
      }
      if (*(undefined * PTR32 *)(iVar3 + iVar7) != (undefined *)0x0) {
        F_00d91a80(*(undefined * PTR32 *)(iVar3 + iVar7));
      }
      *(undefined * PTR32 *)(iVar3 + iVar7) = this_00;
      F_00d91a80(this_00);
      iVar7 = iVar7 + 0xc;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  iVar7 = *(int *)((int)this + 0x108);
  uVar2 = *(uint *)((int)this + 0x114) & 0x3fffffff;
  if ((int)uVar2 < iVar7) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar7) {
      iVar3 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10c,iVar3,7);
  }
  iVar3 = 0;
  if (iVar7 != *(int *)((int)this + 0x110) && -1 < iVar7 - *(int *)((int)this + 0x110)) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar7 - *(int *)((int)this + 0x110));
  }
  *(int *)((int)this + 0x110) = iVar7;
  *(undefined1 *)((int)this + 0x142) = 0;
  return (uint)this;
}

/* ref: hkMultipleVertexBuffer::vf3 */
uint F_00dd0d50(unsigned int gen_a0)
{
  GEN_ENTER(0xdd0d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPVOID pvVar1;
  undefined * pvVar2;
  
  if (this[0x141] == (undefined1)0x0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x144)));
    *(undefined2 *)((int)pvVar2 + 4) = 0x144;
    pvVar2 = (undefined *)F_00dd0a30(pvVar2,this);
    F_00dd0100(pvVar2);
    return (uint)pvVar2;
  }
  F_00d919e0(this);
  return (uint)this;
}

/* ref: FUN_00dd0db0 */
uint F_00dd0db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd0db0u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (char)param_3;
  return param_2;
}

/* ref: FUN_00dd0dd0 */
uint F_00dd0dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd0dd0u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (char)param_3;
  return param_2;
}

/* ref: FUN_00dd0e40 */
unsigned int F_00dd0e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00dd0eb0 */
uint F_00dd0eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 * 7 + *(int *)this;
}

/* ref: FUN_00dd0f20 */
unsigned int F_00dd0f20(unsigned int gen_a0)
{
  GEN_ENTER(0xdd0f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dd0f40 */
unsigned int F_00dd0f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00dd0fb0 */
uint F_00dd0fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0fb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00dd0ff0 */
uint F_00dd0ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd0ff0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00dd1080 */
unsigned int F_00dd1080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd1080u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  
  do {
    puVar5 = ((undefined4 *)GEN_TOP(((param_2 + param_3 >> 1) * 7 + param_1)));
    (*(int *)(gen_frame + 0x1c)) = param_2;
    uVar2 = *(undefined2 *)(puVar5 + 1);
    uVar1 = *(undefined1 *)((int)puVar5 + 6);
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar5;
    (*(undefined2 *)(gen_frame + 0x4)) = uVar2;
    (*(undefined1 *)(gen_frame + 0x6)) = uVar1;
    iVar8 = param_2;
    iVar10 = param_3;
    do {
      iVar6 = iVar8 * 7 + param_1;
      (*(int *)(gen_frame + 0x18)) = iVar6;
      (*(int *)(gen_frame + 0x1c)) = iVar8;
      uVar7 = (*param_4)(iVar6,&(*(undefined4 *)(gen_frame + 0x0)));
      iVar6 = (*(int *)(gen_frame + 0x18));
      if ((char)uVar7 != '\0') {
        do {
          iVar8 = iVar8 + 1;
          (*(int *)(gen_frame + 0x18)) = iVar6 + 7;
          uVar7 = (*param_4)(iVar6 + 7,&(*(undefined4 *)(gen_frame + 0x0)));
          iVar6 = (*(int *)(gen_frame + 0x18));
        } while ((char)uVar7 != '\0');
        (*(int *)(gen_frame + 0x1c)) = iVar8;
      }
      iVar6 = iVar10 * 7 + param_1;
      (*(int *)(gen_frame + 0x18)) = iVar6;
      uVar7 = (*param_4)(&(*(undefined4 *)(gen_frame + 0x0)),iVar6);
      cVar4 = (char)uVar7;
      while (cVar4 != '\0') {
        iVar6 = (*(int *)(gen_frame + 0x18)) + -7;
        (*(int *)(gen_frame + 0x18)) = iVar6;
        iVar10 = iVar10 + -1;
        uVar7 = (*param_4)(&(*(undefined4 *)(gen_frame + 0x0)),iVar6);
        cVar4 = (char)uVar7;
      }
      if (iVar10 < iVar8) break;
      if (iVar10 != iVar8) {
        puVar5 = (undefined4 *)(iVar10 * 7 + param_1);
        uVar2 = *(undefined2 *)(puVar5 + 1);
        uVar3 = *puVar5;
        uVar1 = *(undefined1 *)((int)puVar5 + 6);
        puVar9 = ((undefined4 *)GEN_TOP(((iVar8 * 8 - (*(int *)(gen_frame + 0x1c))) + param_1)));
        *puVar5 = *puVar9;
        *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar9 + 1);
        *(undefined1 *)((int)puVar5 + 6) = *(undefined1 *)((int)puVar9 + 6);
        *puVar9 = uVar3;
        *(undefined2 *)(puVar9 + 1) = uVar2;
        *(undefined1 *)((int)puVar9 + 6) = uVar1;
        iVar8 = (*(int *)(gen_frame + 0x1c));
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + -1;
      (*(int *)(gen_frame + 0x1c)) = iVar8;
    } while (iVar8 <= iVar10);
    if (param_2 < iVar10) {
      F_00dd1080(param_1,param_2,iVar10,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00dd1200 */
uint F_00dd1200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 7);
  return uVar1;
}

/* ref: FUN_00dd1240 */
uint F_00dd1240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd1280 */
unsigned int F_00dd1280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dd12b0 */
uint F_00dd12b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd12b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00dd12e0 */
unsigned int F_00dd12e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd12e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dd1310 */
uint F_00dd1310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd1350 */
uint F_00dd1350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00dd1370 */
uint F_00dd1370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00dd13a0 */
unsigned int F_00dd13a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd13a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
    *(undefined4 *)this = *param_1;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  return 0;
}

/* ref: FUN_00dd14c0 */
uint F_00dd14c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd14c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00dd14e0 */
uint F_00dd14e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd14e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,2);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 2;
}

/* ref: FUN_00dd1520 */
unsigned int F_00dd1520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < param_2) {
    F_00dd1080(param_1,0,param_2 + -1,param_3);
  }
  return 0;
}

/* ref: FUN_00dd1550 */
uint F_00dd1550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1,*(undefined4 *)this,uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd15a0 */
uint F_00dd15a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd15a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,7);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd15e0 */
uint F_00dd15e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd15e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(param_1,this,iVar5,2);
  }
  puVar4 = *(undefined2 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_2 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined2 *)(iVar3 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined2 *)(*(int *)this + iVar6 * 2);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_2 + iVar6 * 2) - (int)puVar4;
    do {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *(undefined2 *)(iVar6 + (int)puVar4);
      }
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd1680 */
unsigned int F_00dd1680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 2) = 0;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dd16c0 */
uint F_00dd16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00dd1700 */
uint F_00dd1700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00dd1730 */
uint F_00dd1730(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd1760 */
uint F_00dd1760(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1760u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dd1780 */
unsigned int F_00dd1780(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x20c);
  }
  return 0;
}

/* ref: FUN_00dd17b0 */
uint F_00dd17b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd17b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd17f0 */
uint F_00dd17f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd17f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00dd1820 */
uint F_00dd1820(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1820u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00dd1850 */
uint F_00dd1850(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,2);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 2;
}

/* ref: FUN_00dd1880 */
uint F_00dd1880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,7);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd18c0 */
uint F_00dd18c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd18c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,2);
  }
  puVar4 = *(undefined2 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_1 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined2 *)(iVar3 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined2 *)(*(int *)this + iVar6 * 2);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_1 + iVar6 * 2) - (int)puVar4;
    do {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *(undefined2 *)(iVar6 + (int)puVar4);
      }
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd1960 */
uint F_00dd1960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 0xc;
}

/* ref: FUN_00dd19b0 */
uint F_00dd19b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd19b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1a00 */
uint F_00dd1a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1a40 */
unsigned int F_00dd1a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if (0 < param_3) {
    iVar3 = param_2 - (int)param_1;
    iVar1 = param_3;
    puVar2 = param_1;
    do {
      if (*(undefined * PTR32 *)(iVar3 + (int)puVar2) != (undefined *)0x0) {
        F_00d919e0(*(undefined * PTR32 *)(iVar3 + (int)puVar2));
      }
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
      puVar2[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(iVar3 + 8 + (int)puVar2);
      puVar2 = puVar2 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dd1a90 */
unsigned int F_00dd1a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd1a90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 4);
    puVar2 = param_3;
    do {
      if (puVar1 != (undefined4 *)&REFG(undefined, 0x4)) {
        if ((undefined *)*puVar2 != (undefined *)0x0) {
          F_00d919e0((undefined *)*puVar2);
        }
        puVar1[-1] = *puVar2;
        *puVar1 = *((undefined4 *)GEN_TOP((((int)param_3 - param_1) + (int)puVar1)));
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 2);
      }
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00dd1af0 */
uint F_00dd1af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,7);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd1b30 */
uint F_00dd1b30(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 0xc;
}

/* ref: FUN_00dd1b80 */
uint F_00dd1b80(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1bd0 */
uint F_00dd1bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1c10 */
unsigned int F_00dd1c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1c10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(param_1 + iVar1 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00dd1c40 */
uint F_00dd1c40(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1c80 */
uint F_00dd1c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd1c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  int local_8;
  
  iVar1 = param_2[1];
  iVar5 = *(int *)((int)this + 4);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(param_1,this,iVar3,0xc);
  }
  iVar5 = (iVar5 - iVar1) + -1;
  if (-1 < iVar5) {
    puVar4 = (undefined4 *)(*(int *)this + iVar1 * 0xc + iVar5 * 0xc);
    do {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4);
      }
      *puVar4 = 0;
      puVar4 = puVar4 + -3;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < local_8) {
    iVar5 = *param_2 - (int)puVar4;
    param_1 = local_8;
    do {
      if (*(undefined * PTR32 *)(iVar5 + (int)puVar4) != (undefined *)0x0) {
        F_00d919e0(*(undefined * PTR32 *)(iVar5 + (int)puVar4));
      }
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4);
      }
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(iVar5 + 8 + (int)puVar4);
      puVar4 = puVar4 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  puVar4 = (undefined4 *)(*param_2 + local_8 * 0xc);
  iVar5 = *(int *)this + local_8 * 0xc;
  param_2 = (int *)(iVar1 - local_8);
  if ((int)param_2 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  puVar6 = (undefined4 *)(iVar5 + 4);
  iVar5 = (int)puVar4 - iVar5;
  do {
    if (puVar6 != (undefined4 *)&REFG(undefined, 0x4)) {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d919e0((undefined *)*puVar4);
      }
      puVar6[-1] = *puVar4;
      *puVar6 = *(undefined4 *)(iVar5 + (int)puVar6);
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 2);
    }
    puVar6 = puVar6 + 3;
    puVar4 = puVar4 + 3;
    param_2 = (int *)((int)param_2 + -1);
  } while (param_2 != (int *)0x0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd1dc0 */
uint F_00dd1dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    puVar3 = (undefined4 *)(uVar1 + iVar2 * 0xc);
    do {
      if ((undefined *)*puVar3 != (undefined *)0x0) {
        uVar1 = F_00d91a80((undefined *)*puVar3);
      }
      *puVar3 = 0;
      puVar3 = puVar3 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00dd1e00 */
uint F_00dd1e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  int local_10;
  int local_8;
  
  iVar1 = param_1[1];
  iVar5 = *(int *)((int)this + 4);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
  }
  iVar5 = (iVar5 - iVar1) + -1;
  if (-1 < iVar5) {
    puVar4 = (undefined4 *)(*(int *)this + iVar1 * 0xc + iVar5 * 0xc);
    do {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4);
      }
      *puVar4 = 0;
      puVar4 = puVar4 + -3;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < local_8) {
    iVar5 = *param_1 - (int)puVar4;
    local_10 = local_8;
    do {
      if (*(undefined * PTR32 *)(iVar5 + (int)puVar4) != (undefined *)0x0) {
        F_00d919e0(*(undefined * PTR32 *)(iVar5 + (int)puVar4));
      }
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4);
      }
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(iVar5 + 8 + (int)puVar4);
      puVar4 = puVar4 + 3;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  puVar4 = (undefined4 *)(*param_1 + local_8 * 0xc);
  iVar5 = *(int *)this + local_8 * 0xc;
  param_1 = (int *)(iVar1 - local_8);
  if ((int)param_1 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  puVar6 = (undefined4 *)(iVar5 + 4);
  iVar5 = (int)puVar4 - iVar5;
  do {
    if (puVar6 != (undefined4 *)&REFG(undefined, 0x4)) {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d919e0((undefined *)*puVar4);
      }
      puVar6[-1] = *puVar4;
      *puVar6 = *(undefined4 *)(iVar5 + (int)puVar6);
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 2);
    }
    puVar6 = puVar6 + 3;
    puVar4 = puVar4 + 3;
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00dd1f40 */
uint F_00dd1f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd1f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd1fb0 */
uint F_00dd1fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd1fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd2020 */
uint F_00dd2020(unsigned int gen_a0)
{
  GEN_ENTER(0xdd2020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf4 */
byte F_00dd2090(unsigned int gen_a0)
{
  GEN_ENTER(0xdd2090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x141) != '\0';
}

/* ref: hkMultipleVertexBuffer::vf5 */
unsigned int F_00dd20a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd20a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00dd7970(param_1,this + 8);
  return 0;
}

/* ref: hkMultipleVertexBuffer::vf6 */
uint F_00dd20c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd20c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x134);
}

/* ref: hkMultipleVertexBuffer::vf2 */
uint F_00dd20d0(void)
{
  GEN_ENTER(0xdd20d0u, 0u, 0u, 0u, 0u);
  return 0x15e266c;
}

/* ref: FUN_00dd20e0 */
uint F_00dd20e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd20e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd2110 */
uint F_00dd2110(unsigned int gen_a0)
{
  GEN_ENTER(0xdd2110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 300) + -1;
  if (-1 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + iVar3 * 0xc)));
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 0x130);
  *(undefined4 *)((int)this + 300) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x128),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x130) = 0x80000000;
  *(undefined4 *)((int)this + 0x120) = 0;
  if ((*(uint *)((int)this + 0x124) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x11c),
               (*(uint *)((int)this + 0x124) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x124) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x118) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x118));
  }
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  uVar1 = *(uint *)((int)this + 0x114);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10c),
                       uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  *(undefined4 *)((int)this + 0x114) = 0x80000000;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkMultipleVertexBuffer::vf0 */
uint F_00dd2240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd2240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd2110(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd22b0 */
unsigned int F_00dd22b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd22b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (0 < param_3) {
    puVar4 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + *(int *)((int)this + 8))));
    param_3 = param_3 * 4;
    if (0 < param_3) {
      puVar5 = (undefined4 *)(param_2 + 8);
      do {
        uVar1 = puVar5[-1];
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        *puVar4 = puVar5[-2];
        puVar4[1] = uVar1;
        puVar4[2] = uVar2;
        puVar4[3] = uVar3;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00dd2300 */
unsigned int F_00dd2300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd2300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (0 < param_3) {
    puVar4 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + *(int *)((int)this + 8))));
    param_3 = param_3 * 4;
    if (0 < param_3) {
      puVar5 = (undefined4 *)(param_2 + 8);
      do {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        puVar5[-2] = *puVar4;
        puVar5[-1] = uVar1;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar5 + 4;
        puVar4 = puVar4 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00dd2880 */
unsigned int F_00dd2880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd2880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (*(int *)((int)this + 0x18) < 1) {
    if (0 < param_3) {
      puVar4 = (undefined4 *)(param_2 + 0x20);
      iVar6 = param_3;
      do {
        uVar3 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c78) + 4));
        uVar2 = (undefined4)REFG(undefined8, 0x1138c78);
        uVar1 = (*(undefined4 *)((char *)&REFG(float, 0x1138c70) + 4));
        puVar4[-8] = (undefined4)REFG(float, 0x1138c70);
        puVar4[-7] = uVar1;
        puVar4[-6] = uVar2;
        puVar4[-5] = uVar3;
        uVar3 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c88) + 4));
        uVar2 = (undefined4)REFG(undefined8, 0x1138c88);
        uVar1 = (*(undefined4 *)((char *)&REFG(float, 0x1138c80) + 4));
        puVar4[-4] = (undefined4)REFG(float, 0x1138c80);
        puVar4[-3] = uVar1;
        puVar4[-2] = uVar2;
        puVar4[-1] = uVar3;
        uVar3 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c98) + 4));
        uVar2 = (undefined4)REFG(undefined8, 0x1138c98);
        uVar1 = (*(undefined4 *)((char *)&REFG(float, 0x1138c90) + 4));
        *puVar4 = (undefined4)REFG(float, 0x1138c90);
        puVar4[1] = uVar1;
        puVar4[2] = uVar2;
        puVar4[3] = uVar3;
        uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
        uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
        uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
        puVar4[4] = *(undefined4 *)&REFG(undefined, 0x1138ca0);
        puVar4[5] = uVar1;
        puVar4[6] = uVar2;
        puVar4[7] = uVar3;
        puVar4 = puVar4 + 0x10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (0 < param_3) {
    puVar4 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + *(int *)((int)this + 0x14))));
    param_3 = param_3 * 4;
    if (0 < param_3) {
      puVar5 = (undefined4 *)(param_2 + 8);
      do {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        puVar5[-2] = *puVar4;
        puVar5[-1] = uVar1;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar5 + 4;
        puVar4 = puVar4 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00dd3140 */
uint F_00dd3140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1149344));
  return (uint)in_ecx;
}

/* ref: FUN_00dd3150 */
uint F_00dd3150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  undefined * this_00;
  uint * puVar10;
  undefined4 * puVar11;
  uint uVar12;
  uint local_c;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149344));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  uVar2 = param_1[4];
  if ((int)(*(uint *)((int)this + 0x10) & 0x3fffffff) < (int)uVar2) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,uVar2,0x40);
  }
  *(uint *)((int)this + 0xc) = uVar2;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 == (undefined4 *)0x0) {
    if (0 < (int)uVar2) {
      iVar9 = 0;
      local_c = uVar2;
      do {
        uVar5 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c78) + 4));
        uVar4 = (undefined4)REFG(undefined8, 0x1138c78);
        uVar3 = (*(undefined4 *)((char *)&REFG(float, 0x1138c70) + 4));
        puVar7 = (undefined4 *)(*piVar1 + iVar9);
        *puVar7 = (undefined4)REFG(float, 0x1138c70);
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        uVar5 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c88) + 4));
        uVar4 = (undefined4)REFG(undefined8, 0x1138c88);
        uVar3 = (*(undefined4 *)((char *)&REFG(float, 0x1138c80) + 4));
        puVar7[4] = (undefined4)REFG(float, 0x1138c80);
        puVar7[5] = uVar3;
        puVar7[6] = uVar4;
        puVar7[7] = uVar5;
        uVar5 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138c98) + 4));
        uVar4 = (undefined4)REFG(undefined8, 0x1138c98);
        uVar3 = (*(undefined4 *)((char *)&REFG(float, 0x1138c90) + 4));
        puVar7[8] = (undefined4)REFG(float, 0x1138c90);
        puVar7[9] = uVar3;
        puVar7[10] = uVar4;
        puVar7[0xb] = uVar5;
        uVar5 = *(undefined4 *)&REFG(undefined, 0x1138cac);
        uVar4 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
        uVar3 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
        iVar9 = iVar9 + 0x40;
        local_c = local_c - 1;
        puVar7[0xc] = *(undefined4 *)&REFG(undefined, 0x1138ca0);
        puVar7[0xd] = uVar3;
        puVar7[0xe] = uVar4;
        puVar7[0xf] = uVar5;
      } while (local_c != 0);
    }
  }
  else {
    puVar11 = (undefined4 *)*piVar1;
    uVar12 = (uVar2 & 0x3ffffff) << 2;
    uVar6 = uVar2 & 0x3ffffff;
    while (uVar6 != 0) {
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar11 = *puVar7;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11 = puVar11 + 4;
      puVar7 = puVar7 + 4;
      uVar12 = uVar12 - 1;
      uVar6 = uVar12;
    }
  }
  if (*param_1 != 0) {
    if ((int)(*(uint *)((int)this + 0x1c) & 0x3fffffff) < (int)uVar2) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(undefined4 *)((int)this + 0x14),uVar2,0x40);
    }
    uVar12 = (uVar2 & 0x3ffffff) << 2;
    *(uint *)((int)this + 0x18) = uVar2;
    puVar7 = (undefined4 *)*param_1;
    puVar11 = *(undefined4 * PTR32 *)((int)this + 0x14);
    uVar6 = uVar2 & 0x3ffffff;
    while (uVar6 != 0) {
      uVar3 = puVar7[2];
      uVar4 = puVar7[1];
      uVar5 = puVar7[3];
      *puVar11 = *puVar7;
      puVar11[2] = uVar3;
      puVar11[1] = uVar4;
      puVar11[3] = uVar5;
      puVar11 = puVar11 + 4;
      puVar7 = puVar7 + 4;
      uVar12 = uVar12 - 1;
      uVar6 = uVar12;
    }
  }
  *(char *)((int)this + 0x44) = (char)param_1[5];
  if (param_1[2] != 0) {
    if ((int)(*(uint *)((int)this + 0x28) & 0x3fffffff) < (int)uVar2) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x20,uVar2,2);
    }
    *(uint *)((int)this + 0x24) = uVar2;
    F_00da1010(*(undefined4 *)((int)this + 0x20),param_1[2],uVar2 * 2);
  }
  if (param_1[3] != 0) {
    if ((int)(*(uint *)((int)this + 0x34) & 0x3fffffff) < (int)uVar2) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x2c,uVar2,4);
    }
    iVar9 = (*(int *)((int)this + 0x30) - uVar2) + -1;
    if (-1 < iVar9) {
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + uVar2 * 4 + iVar9 * 4)));
      do {
        F_00d91510(this_00);
        this_00 = (undefined *)((int)this_00 + -4);
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    iVar8 = uVar2 - *(int *)((int)this + 0x30);
    iVar9 = *(int *)((int)this + 0x2c) + *(int *)((int)this + 0x30) * 4;
    if (0 < iVar8) {
      do {
        if (iVar9 != 0) {
          F_00d91340(iVar9);
        }
        iVar9 = iVar9 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar9 = 0;
    *(uint *)((int)this + 0x30) = uVar2;
    if (0 < (int)uVar2) {
      do {
        F_00d91540(((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + iVar9 * 4))),param_1[3] + iVar9 * 4);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar2);
    }
  }
  if (param_1[6] != 0) {
    if ((int)(*(uint *)((int)this + 0x40) & 0x3fffffff) < param_1[7]) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x38,param_1[7],0xc);
    }
    iVar9 = param_1[7];
    iVar8 = (*(int *)((int)this + 0x3c) - iVar9) + -1;
    if (-1 < iVar8) {
      puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x38) + iVar9 * 0xc + 8 + iVar8 * 0xc)));
      do {
        uVar2 = *puVar10;
        puVar10[-1] = 0;
        if (-1 < (int)uVar2) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),puVar10[-2],(uVar2 & 0x3fffffff) * 2);
        }
        puVar10[-2] = 0;
        *puVar10 = 0x80000000;
        puVar10 = puVar10 + -3;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    iVar8 = iVar9 - *(int *)((int)this + 0x3c);
    puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x38) + *(int *)((int)this + 0x3c) * 0xc)));
    if (0 < iVar8) {
      do {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0x80000000;
        }
        puVar7 = puVar7 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = 0;
    *(int *)((int)this + 0x3c) = iVar9;
    if (0 < param_1[7]) {
      iVar9 = 0;
      do {
        F_00dd3a70(((undefined *)GEN_TOP((*(int *)((int)this + 0x38) + iVar9))),param_1[6] + iVar9);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar8 < param_1[7]);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00dd3540 */
uint F_00dd3540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3540u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + *in_ecx;
}

/* ref: FUN_00dd35a0 */
uint F_00dd35a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd35a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dd35e0 */
uint F_00dd35e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd35e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00dd3610 */
uint F_00dd3610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd3610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x40);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3670 */
unsigned int F_00dd3670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3670u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00d91340(in_ecx);
      }
      in_ecx = in_ecx + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dd36c0 */
uint F_00dd36c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd36c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 6);
  return uVar1;
}

/* ref: FUN_00dd36e0 */
uint F_00dd36e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd36e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00dd37a0 */
uint F_00dd37a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd37a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd37d0 */
uint F_00dd37d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd37d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00dd37e0 */
uint F_00dd37e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd37e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,0x40);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3810 */
uint F_00dd3810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd3810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x40);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd3850 */
uint F_00dd3850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00dd3860 */
uint F_00dd3860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd3860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3890 */
uint F_00dd3890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd3890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd38c0 */
uint F_00dd38c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd38c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd3930 */
uint F_00dd3930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3960 */
uint F_00dd3960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,0x40);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3990 */
uint F_00dd3990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x40);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd39d0 */
uint F_00dd39d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd39d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3a00 */
uint F_00dd3a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd3a30 */
uint F_00dd3a30(unsigned int gen_a0)
{
  GEN_ENTER(0xdd3a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd3a70 */
uint F_00dd3a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3a70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined2 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar2 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 * 2);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar1[1] * 2);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)(*(int * PTR32 *)&gen_args[1]) / 2;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined2 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined2 *)(iVar4 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00dd3b00 */
uint F_00dd3b00(unsigned int gen_a0)
{
  GEN_ENTER(0xdd3b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd3b60 */
uint F_00dd3b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar2 = (*(int *)((int)this + 4) - param_1) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + param_1 * 4 + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = param_1 - *(int *)((int)this + 4);
  iVar2 = *(int *)this + *(int *)((int)this + 4) * 4;
  uVar3 = uVar1;
  if (0 < (int)uVar1) {
    do {
      if (iVar2 != 0) {
        uVar1 = F_00d91340(iVar2);
      }
      iVar2 = iVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar1;
}

/* ref: FUN_00dd3bc0 */
unsigned int F_00dd3bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dd3bf0 */
unsigned int F_00dd3bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3bf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(param_1 + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar3);
  }
  return 0;
}

/* ref: FUN_00dd3c50 */
unsigned int F_00dd3c50(unsigned int gen_a0)
{
  GEN_ENTER(0xdd3c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar3);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00dd3cc0 */
unsigned int F_00dd3cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  int iVar4;
  
  iVar4 = (*(int *)((int)this + 4) - param_1) + -1;
  if (-1 < iVar4) {
    puVar3 = (uint *)(*(int *)this + param_1 * 0xc + 8 + iVar4 * 0xc);
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + -3;
    } while (-1 < iVar4);
  }
  iVar4 = param_1 - *(int *)((int)this + 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (iVar4 < 1) {
    *(int *)((int)this + 4) = param_1;
    return 0;
  }
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0x80000000;
    }
    puVar2 = puVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00dd3d70 */
uint F_00dd3d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd3d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd3f30 */
uint F_00dd3f30(unsigned int gen_a0)
{
  GEN_ENTER(0xdd3f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd3f60 */
uint F_00dd3f60(unsigned int gen_a0)
{
  GEN_ENTER(0xdd3f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  uint * puVar3;
  
  iVar2 = *(int *)((int)this + 0x3c) + -1;
  if (-1 < iVar2) {
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 0x38) + 8 + iVar2 * 0xc)));
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -3;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x3c) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x38),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x30) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + iVar2 * 4)));
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = *(int *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x30) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x2c),iVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar2 << 6);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkIndexedTransformSet::vf0 */
uint F_00dd40e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd40e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd3f60(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkSkinnedRefMeshShape::vf3 */
uint F_00dd4120(void)
{
  GEN_ENTER(0xdd4120u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkSkinnedRefMeshShape::vf4 */
unsigned int F_00dd4130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: hkSkinnedRefMeshShape::vf5 */
unsigned int F_00dd4140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkSkinnedRefMeshShape::vf7 */
uint F_00dd4150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0x24,param_1);
  return uVar1;
}

/* ref: hkSkinnedRefMeshShape::vf2 */
uint F_00dd4160(void)
{
  GEN_ENTER(0xdd4160u, 0u, 0u, 0u, 0u);
  return 0x15e272c;
}

/* ref: hkSkinnedRefMeshShape::vf6 */
uint F_00dd4170(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24) & 0xfffffffe;
}

/* ref: FUN_00dd4180 */
uint F_00dd4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd4180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1149378));
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  F_00d91480((undefined *)((int)this + 0x24),0);
  F_00dd4770((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac),param_2,param_4);
  F_00dd4980((undefined *)((int)this + 0x18),&REFG(undefined * PTR32, 0x13516ac),param_3,param_4);
  return (uint)this;
}

/* ref: FUN_00dd4210 */
uint F_00dd4210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1149378));
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  F_00d91480((undefined *)((int)this + 0x24),0);
  return (uint)this;
}

/* ref: FUN_00dd4270 */
uint F_00dd4270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x1149378));
  F_00d91350(in_ecx + 9,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dd4290 */
uint F_00dd4290(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1149378));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),(uVar2 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  F_00d91510((undefined *)((int)this + 0x24));
  iVar1 = *(int *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),iVar1 << 5);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
                       (uVar2 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar2 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00dd4360 */
uint F_00dd4360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4360u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  undefined * puVar2;
  LPVOID pvVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  iVar8 = 0;
  local_8 = 0;
  if (0 < param_3) {
    do {
      piVar1 = *(int * PTR32 *)(param_1 + local_8 * 4);
      puVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
      if ((puVar2 != &REFG(undefined, 0x15e272c)) || ((iVar8 != 0 && (iVar8 != piVar1[2])))) {
        return 0;
      }
      iVar6 = iVar6 + piVar1[4];
      iVar8 = piVar1[2];
      local_8 = local_8 + 1;
    } while (local_8 < param_3);
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar3 + 0x2c),0x28)));
  *(undefined2 *)((int)this + 4) = 0x28;
  uVar4 = F_00dd4210(this,iVar8);
  uVar5 = *(uint *)(uVar4 + 0x14) & 0x3fffffff;
  if ((int)uVar5 < iVar6) {
    iVar8 = uVar5 * 2;
    if (iVar8 <= iVar6) {
      iVar8 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),uVar4 + 0xc,iVar8,2);
  }
  *(int *)(uVar4 + 0x10) = iVar6;
  uVar5 = *(uint *)(uVar4 + 0x20) & 0x3fffffff;
  if ((int)uVar5 < iVar6) {
    iVar8 = uVar5 * 2;
    if (iVar8 <= iVar6) {
      iVar8 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),uVar4 + 0x18,iVar8,0x20);
  }
  *(int *)(uVar4 + 0x1c) = iVar6;
  local_18 = 0;
  local_8 = 0;
  if (0 < param_3) {
    local_10 = param_2;
    do {
      iVar8 = *(int *)(param_1 + local_18 * 4);
      iVar6 = *(int *)(iVar8 + 0x10);
      iVar7 = 0;
      if (0 < iVar6) {
        iVar9 = local_8 << 5;
        local_c = 0;
        do {
          *((undefined2 *)GEN_TOP((*(int *)(uVar4 + 0xc) + local_8 * 2))) =
               *((undefined2 *)GEN_TOP((*(int *)(iVar8 + 0xc) + iVar7 * 2)));
          F_010578d0(((undefined *)GEN_TOP((*(int *)(uVar4 + 0x18) + iVar9))),local_10,
                       *(int *)(iVar8 + 0x18) + local_c);
          local_c = local_c + 0x20;
          local_8 = local_8 + 1;
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x20;
        } while (iVar7 < iVar6);
      }
      local_10 = local_10 + 0x20;
      local_18 = local_18 + 1;
    } while (local_18 < param_3);
  }
  return uVar4;
}

/* ref: FUN_00dd44e0 */
uint F_00dd44e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd44e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00dd4510 */
unsigned int F_00dd4510(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dd4530 */
unsigned int F_00dd4530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00dd4590 */
uint F_00dd4590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4590u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00dd45a0 */
uint F_00dd45a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd45a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00dd45c0 */
unsigned int F_00dd45c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd45c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dd4600 */
uint F_00dd4600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x20);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd4660 */
uint F_00dd4660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00dd4690 */
uint F_00dd4690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4690u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00dd46f0 */
uint F_00dd46f0(void)
{
  GEN_ENTER(0xdd46f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd4700 */
unsigned int F_00dd4700(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4700u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00dd4770 */
unsigned int F_00dd4770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined2 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 4) + param_3;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,2);
  }
  puVar2 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *(undefined2 *)(iVar3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00dd47e0 */
uint F_00dd47e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd47e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd4830 */
unsigned int F_00dd4830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_3 - (int)param_1;
    puVar1 = param_1;
    iVar3 = param_2;
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(undefined8 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined8 *)(iVar2 + 8 + (int)puVar1);
        puVar1[2] = *(undefined8 *)(iVar2 + 0x10 + (int)puVar1);
        puVar1[3] = *(undefined8 *)(iVar2 + 0x18 + (int)puVar1);
      }
      puVar1 = puVar1 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00dd4880 */
uint F_00dd4880(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd48b0 */
uint F_00dd48b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd48b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd48f0 */
uint F_00dd48f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd48f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00dd4920 */
unsigned int F_00dd4920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dd4770(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return 0;
}

/* ref: FUN_00dd4940 */
uint F_00dd4940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x20);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd4980 */
unsigned int F_00dd4980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 4) + param_3;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,0x20);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *(undefined8 *)(iVar3 + (int)puVar2);
        puVar2[1] = *(undefined8 *)(iVar3 + 8 + (int)puVar2);
        puVar2[2] = *(undefined8 *)(iVar3 + 0x10 + (int)puVar2);
        puVar2[3] = *(undefined8 *)(iVar3 + 0x18 + (int)puVar2);
      }
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00dd4a10 */
uint F_00dd4a10(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd4a50 */
uint F_00dd4a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x20);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd4a90 */
unsigned int F_00dd4a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dd4980(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return 0;
}

/* ref: FUN_00dd4ab0 */
uint F_00dd4ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd4af0 */
uint F_00dd4af0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4af0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSkinnedRefMeshShape::vf0 */
uint F_00dd4b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd4290(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkMemoryMeshVertexBuffer::vf13 */
unsigned int F_00dd4b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x19c) = 0;
  return 0;
}

/* ref: hkMemoryMeshVertexBuffer::vf9 */
uint F_00dd4b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dda130(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMemoryMeshVertexBuffer::vf10 */
uint F_00dd4b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dda160(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMemoryMeshVertexBuffer::vf11 */
uint F_00dd4bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dd8890(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkMemoryMeshVertexBuffer::vf12 */
uint F_00dd4bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dd8a80(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dd4bf0 */
unsigned int F_00dd4bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd4bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte * pbVar6;
  int local_14;
  int local_c;
  int * local_8;
  
  iVar3 = *(int *)((int)this + 0x18c);
  local_14 = 0;
  if (0 < *(int *)((int)this + 0x1a0)) {
    do {
      local_c = 0;
      if (0 < *(int *)((int)this + 0x108)) {
        local_8 = (int *)((int)this + 0x10c);
        pbVar6 = (byte *)((int)this + 9);
        do {
          iVar4 = 0;
          puVar2 = (undefined1 *)(*local_8 + iVar3);
          if (*pbVar6 != 0) {
            do {
              switch((unsigned int)(uintptr_t)(pbVar6[-1])) {
              case 3: ;
              case 4: ;
              case 9: ;
                uVar1 = *puVar2;
                *puVar2 = puVar2[1];
                puVar2[1] = uVar1;
                puVar2 = puVar2 + 2;
                break;
              case 5: ;
              case 6: ;
              case 7: ;
              case 8: ;
              case 10: ;
                uVar1 = *puVar2;
                *puVar2 = puVar2[3];
                puVar2[3] = uVar1;
                uVar1 = puVar2[1];
                puVar2[1] = puVar2[2];
                puVar2[2] = uVar1;
                puVar2 = puVar2 + 4;
                break;
              case 0xb: ;
                iVar5 = 4;
                do {
                  uVar1 = *puVar2;
                  *puVar2 = puVar2[3];
                  puVar2[3] = uVar1;
                  uVar1 = puVar2[1];
                  puVar2[1] = puVar2[2];
                  puVar2[2] = uVar1;
                  puVar2 = puVar2 + 4;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)(uint)*pbVar6);
          }
          local_8 = local_8 + 1;
          local_c = local_c + 1;
          pbVar6 = pbVar6 + 8;
        } while (local_c < *(int *)((int)this + 0x108));
      }
      iVar3 = iVar3 + *(int *)((int)this + 0x198);
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)((int)this + 0x1a0));
  }
  return 0;
}

/* ref: FUN_00dd4d30 */
uint F_00dd4d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4d30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x100);
  uVar4 = 0;
  iVar5 = 4;
  iVar3 = 0;
  param_1 = 4;
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + iVar3 * 8) == '\v') {
        *(uint *)(param_2 + iVar3 * 4) = uVar4;
        uVar4 = uVar4 + (uint)*(byte *)(iVar2 + 1 + iVar3 * 8) * 0x10;
        iVar5 = 0x10;
      }
      iVar3 = iVar3 + 1;
      param_1 = iVar5;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + iVar3 * 8) != '\v') {
        *(uint *)(param_2 + iVar3 * 4) = uVar4;
        uVar4 = (uint)(byte)(&REFG(undefined, 0x114962c))[*(byte *)(iVar2 + iVar3 * 8)] *
                (uint)*(byte *)(iVar2 + 1 + iVar3 * 8) + 3 + uVar4 & 0xfffffffc;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return param_1 + -1 + uVar4 & ~(param_1 - 1U);
}

/* ref: FUN_00dd4dc0 */
uint F_00dd4dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4dc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x100);
  uVar4 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    pbVar2 = (byte *)(param_1 + 3);
    do {
      if ((pbVar2[-1] == (byte)param_2) && (*pbVar2 == param_3)) {
        return uVar4;
      }
      if (pbVar2[-3] == 0xb) {
        uVar4 = uVar4 + (uint)pbVar2[-2] * 0x10;
      }
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 8;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    pbVar2 = (byte *)(param_1 + 3);
    do {
      if ((pbVar2[-1] == (byte)param_2) && (*pbVar2 == param_3)) {
        return uVar4;
      }
      if (pbVar2[-3] != 0xb) {
        uVar4 = (uint)(byte)(&REFG(undefined, 0x114962c))[pbVar2[-3]] * (uint)pbVar2[-2] + 3 + uVar4 & 0xfffffffc;
      }
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 8;
    } while (iVar3 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00dd4e60 */
unsigned int F_00dd4e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  int * piVar6;
  
  iVar5 = param_2;
  if (param_2 < 0) {
    iVar5 = *(int *)((int)this + 0x1a0) - param_1;
  }
  iVar1 = *(int *)((int)this + 0x198);
  iVar2 = *(int *)((int)this + 0x18c);
  *(undefined1 *)(param_3 + 0x208) = 1;
  *(int *)(param_3 + 0x204) = iVar5;
  param_2 = *(int *)((int)this + 0x108);
  *(int *)(param_3 + 0x200) = param_2;
  if (0 < param_2) {
    puVar4 = (undefined4 *)(param_3 + 8);
    piVar6 = (int *)((int)this + 0x10c);
    puVar3 = this;
    do {
      puVar4[-2] = *piVar6 + iVar1 * param_1 + iVar2;
      puVar4[-1] = *(undefined4 *)((int)this + 0x198);
      *puVar4 = puVar3[2];
      puVar4[1] = puVar3[3];
      piVar6 = piVar6 + 1;
      puVar4 = puVar4 + 4;
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 2;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: hkMemoryMeshVertexBuffer::vf8 */
uint F_00dd4ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd4ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  if (this[0x19c] != (undefined1)0x0) {
    return 0;
  }
  iVar4 = param_1[1];
  if (iVar4 < 0) {
    iVar4 = *(int *)(this + 0x1a0) - *param_1;
  }
  iVar1 = *(int *)(this + 0x198);
  iVar2 = *param_1;
  iVar3 = *(int *)(this + 0x18c);
  *(undefined1 *)(param_3 + 0x208) = 1;
  *(int *)(param_3 + 0x204) = iVar4;
  param_1 = (int *)*param_2;
  *(int * PTR32 *)(param_3 + 0x200) = param_1;
  if (0 < (int)param_1) {
    puVar5 = (undefined4 *)(param_3 + 8);
    piVar6 = param_2;
    do {
      piVar6 = piVar6 + 1;
      iVar4 = *piVar6;
      puVar5[-2] = *(int *)(this + iVar4 * 4 + 0x10c) + iVar1 * iVar2 + iVar3;
      puVar5[-1] = *(undefined4 *)(this + 0x198);
      *puVar5 = *(undefined4 *)(this + iVar4 * 8 + 8);
      puVar5[1] = *(undefined4 *)(this + iVar4 * 8 + 0xc);
      puVar5 = puVar5 + 4;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  this[0x19c] = (undefined1)0x1;
  return 1;
}

/* ref: FUN_00dd4fa0 */
uint F_00dd4fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd4fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  *param_2 = *(int *)((int)this + param_1 * 4 + 0x10c) + *(int *)((int)this + 0x18c);
  param_2[1] = *(int *)((int)this + 0x198);
  param_2[2] = *(int *)((int)this + param_1 * 8 + 8);
  param_2[3] = *(int *)((int)this + param_1 * 8 + 0xc);
  return (uint)param_2;
}

/* ref: FUN_00dd4fe0 */
uint F_00dd4fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd4fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00dd7970((undefined *)((int)this + 8),param_1);
  *(undefined4 *)((int)this + 0x1a0) = 0;
  uVar1 = F_00dd4d30(param_1,(int)this + 0x10c);
  *(uint *)((int)this + 0x198) = uVar1;
  uVar1 = F_00dd7b90(param_1);
  *(bool *)((int)this + 0x1a5) = uVar1 == 0;
  return uVar1;
}

/* ref: hkMemoryMeshVertexBuffer::vf7 */
uint F_00dd5030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  
  if (this[0x19c] != (undefined1)0x0) {
    return 0;
  }
  F_00dd4e60(this,*param_1,param_1[1],param_2);
  *(undefined1 *)(((int)(uint)(this)) + 0x19c) = 1;
  return 1;
}

/* ref: FUN_00dd5070 */
uint F_00dd5070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd5070u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  *(undefined4 *)(in_ecx + 0x18c) = param_2;
  *(uint *)(in_ecx + 400) = param_4;
  *(uint *)(in_ecx + 0x194) = param_4 | 0x80000000;
  return param_4 | 0x80000000;
}

/* ref: FUN_00dd50a0 */
uint F_00dd50a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd50a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114939c));
  F_00dd7940(in_ecx + 2);
  in_ecx[99] = 0;
  in_ecx[100] = 0;
  in_ecx[0x65] = 0x80000000;
  *(undefined1 *)(in_ecx + 0x67) = 0;
  in_ecx[0x68] = 0;
  *(undefined1 *)((int)in_ecx + 0x1a5) = 1;
  in_ecx[0x66] = 0;
  *(undefined1 *)(in_ecx + 0x69) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00dd5100 */
uint F_00dd5100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114939c));
  if ((param_1 != 0) && (*(char *)((int)this + 0x1a4) != '\0')) {
    F_00dd4bf0(this);
  }
  return (uint)this;
}

/* ref: FUN_00dd5130 */
uint F_00dd5130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)((int)this + 0x198) * param_1;
  uVar4 = iVar3 + 0xfU & 0xfffffff0;
  uVar1 = *(uint *)((int)this + 0x194) & 0x3fffffff;
  if ((int)uVar1 < (int)uVar4) {
    uVar1 = uVar1 * 2;
    if ((int)uVar1 <= (int)uVar4) {
      uVar1 = uVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(undefined4 *)((int)this + 0x18c),uVar1,1);
  }
  *(uint *)((int)this + 400) = uVar4;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18c);
  iVar5 = ((int)(iVar3 + 0xfU) >> 4) + -1;
  if (-1 < iVar5) {
    do {
      iVar5 = iVar5 + -1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
    } while (-1 < iVar5);
    *(int *)((int)this + 400) = iVar3;
    *(uint *)((int)this + 0x1a0) = param_1;
    return param_1;
  }
  *(int *)((int)this + 400) = iVar3;
  *(uint *)((int)this + 0x1a0) = param_1;
  return (uint)puVar2;
}

/* ref: FUN_00dd51d0 */
uint F_00dd51d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd51d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114939c));
  uVar1 = *(uint *)((int)this + 0x194);
  *(undefined4 *)((int)this + 400) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18c),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00dd5230 */
uint F_00dd5230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114939c));
  F_00dd7940((int)this + 8);
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0x80000000;
  *(undefined1 *)((int)this + 0x19c) = 0;
  F_00dd4fe0(this,param_1);
  F_00dd5130(this,param_2);
  *(undefined1 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: hkMemoryMeshVertexBuffer::vf3 */
uint F_00dd5290(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined * this_00;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  int local_8;
  
  if (this[0x1a5] == (undefined1)0x0) {
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 4))))
                                (*(int * PTR32 *)((int)pvVar6 + 0x2c),0x1a8)));
    *(undefined2 *)((int)this_00 + 4) = 0x1a8;
    uVar7 = F_00dd5230(this_00,this + 8,*(undefined4 *)(this + 0x1a0));
    iVar1 = *(int *)(this + 0x198);
    iVar2 = *(int *)(this + 0x1a0);
    puVar9 = *(undefined4 * PTR32 *)(this + 0x18c);
    puVar8 = *(undefined4 * PTR32 *)(uVar7 + 0x18c);
    local_8 = iVar1 * iVar2 + 0xf >> 4;
    if (0 < local_8) {
      do {
        uVar3 = puVar9[3];
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        *puVar8 = *puVar9;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar3;
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *(int *)(uVar7 + 400) = iVar1 * iVar2;
    return uVar7;
  }
  F_00d919e0(this);
  return (uint)this;
}

/* ref: FUN_00dd5350 */
uint F_00dd5350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5350u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (char)param_3;
  return param_2;
}

/* ref: FUN_00dd5370 */
unsigned int F_00dd5370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5370u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 uVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  
  puVar4 = param_1 + param_2 + -1;
  iVar2 = param_2 / 2;
  puVar3 = param_1;
  if (0 < iVar2) {
    do {
      uVar1 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: hkMemoryMeshVertexBuffer::vf5 */
unsigned int F_00dd53b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd53b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00dd7970(param_1,this + 8);
  return 0;
}

/* ref: hkMemoryMeshVertexBuffer::vf6 */
uint F_00dd53d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd53d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1a0);
}

/* ref: hkMemoryMeshVertexBuffer::vf4 */
byte F_00dd53e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd53e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x1a5) != '\0';
}

/* ref: FUN_00dd53f0 */
uint F_00dd53f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd53f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkMemoryMeshVertexBuffer::vf0 */
uint F_00dd5420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd51d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkMemoryMeshTexture::vf6 */
uint F_00dd5460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 8,param_1);
  return uVar1;
}

/* ref: hkMemoryMeshTexture::vf13 */
uint F_00dd5470(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: hkMemoryMeshTexture::vf14 */
uint F_00dd5480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: hkMemoryMeshTexture::vf3 */
uint F_00dd5490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd5490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined1 hVar1;
  
  *param_1 = *(undefined4 *)(this + 0xc);
  *param_2 = *(undefined4 *)(this + 0x10);
  hVar1 = this[0x18];
  *param_3 = (int)(char)hVar1;
  return (int)(char)hVar1;
}

/* ref: hkMemoryMeshTexture::vf5 */
uint F_00dd54b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd54b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) & 0xfffffffe;
}

/* ref: hkMemoryMeshTexture::vf7 */
byte F_00dd54c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd54c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x19) != '\0';
}

/* ref: hkMemoryMeshTexture::vf8 */
byte F_00dd54d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd54d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x19) = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMemoryMeshTexture::vf9 */
uint F_00dd54e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd54e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1a);
}

/* ref: hkMemoryMeshTexture::vf10 */
byte F_00dd54f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd54f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMemoryMeshTexture::vf11 */
uint F_00dd5500(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x1b);
}

/* ref: hkMemoryMeshTexture::vf12 */
byte F_00dd5510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMemoryMeshTexture::vf4 */
uint F_00dd5520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd5520u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined4 *)&gen_args[1]);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(uint *)&gen_args[2]);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(uint *)&gen_args[2]) | 0x80000000;
  (*(undefined * PTR32 *)&gen_args[0])[0x18] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 0));
  return (*(uint *)&gen_args[2]) | 0x80000000;
}

/* ref: FUN_00dd5550 */
uint F_00dd5550(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5550u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[15])REFP(0x1148efc));
  F_00d91340(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0x80000000;
  *(undefined2 *)(in_ecx + 6) = 0;
  *(undefined2 *)((int)in_ecx + 0x1a) = 2;
  in_ecx[7] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_00dd5590 */
uint F_00dd5590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5590u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dd55b0 */
byte F_00dd55b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd55b0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00dd55c0 */
uint F_00dd55c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd55c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dd55e0 */
byte F_00dd55e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd55e0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00dd55f0 */
uint F_00dd55f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd55f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dd5610 */
byte F_00dd5610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5610u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: hkMemoryMeshShape::vf5 */
unsigned int F_00dd5640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkMemoryMeshShape::vf3 */
uint F_00dd5650(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: hkMemoryMeshShape::vf4 */
uint F_00dd5660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd5660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP((param_1 * 0x20 + *(int *)(this + 8))));
  *param_3 = *(undefined1 *)(puVar3 + 2);
  *(undefined4 *)(param_3 + 4) = puVar3[3];
  uVar1 = F_00ddbd90((uint)*(byte *)(puVar3 + 2),puVar3[3]);
  *(uint *)(param_3 + 8) = uVar1;
  uVar2 = puVar3[6];
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  uVar1 = CONCAT31((int3)((uint)uVar2 >> 8),(byte)param_2);
  param_3[0x14] = *(undefined1 *)(puVar3 + 4);
  *(undefined4 *)(param_3 + 0x10) = puVar3[7];
  if (((byte)param_2 & 2) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar3;
  }
  *(undefined4 *)(param_3 + 0x1c) = uVar2;
  *(undefined4 *)(param_3 + 0x18) = 0;
  if ((((byte)param_2 & 1) != 0) && (*(char *)(puVar3 + 4) != '\0')) {
    uVar1 = puVar3[5];
    *(uint *)(param_3 + 0x18) = uVar1;
  }
  uVar2 = puVar3[1];
  *(int *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  return uVar1;
}

/* ref: FUN_00dd56e0 */
uint F_00dd56e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd56e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  undefined4 * puVar8;
  byte * pbVar9;
  int local_14;
  int local_10;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x11493d8));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  piVar1 = (int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00d91340((int)this + 0x2c);
  F_00d91520((undefined *)((int)this + 0x2c),0);
  iVar6 = 0;
  local_10 = 0;
  local_8 = 0;
  if (0 < param_2) {
    puVar8 = (undefined4 *)(param_1 + 0xc);
    local_14 = param_2;
    do {
      uVar2 = F_00ddbd90((uint)*(byte *)(puVar8 + -1),*puVar8);
      if (*(char *)(puVar8 + 1) == '\x01') {
        local_10 = local_10 + uVar2;
      }
      else if (*(char *)(puVar8 + 1) == '\x02') {
        local_8 = local_8 + uVar2;
      }
      puVar8 = puVar8 + 8;
      local_14 = local_14 + -1;
      iVar6 = local_10;
    } while (local_14 != 0);
  }
  uVar2 = *(uint *)((int)this + 0x1c) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar5 = uVar2 * 2;
    if (iVar6 < iVar5) {
      iVar6 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar6,2);
  }
  uVar2 = *(uint *)((int)this + 0x28) & 0x3fffffff;
  if ((int)uVar2 < local_8) {
    iVar6 = uVar2 * 2;
    iVar5 = local_8;
    if (local_8 < iVar6) {
      iVar5 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x20,iVar5,4);
  }
  uVar2 = *(uint *)((int)this + 0x10) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar6 = uVar2 * 2;
    iVar5 = param_2;
    if (param_2 < iVar6) {
      iVar5 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 8,iVar5,0x20);
  }
  *(int *)((int)this + 0xc) = param_2;
  if (param_2 < 1) {
    return (uint)this;
  }
  pbVar7 = (byte *)(param_1 + 8);
  local_14 = param_2;
  do {
    pbVar9 = pbVar7 + *(int *)((int)this + 8) + (-8 - param_1);
    *(undefined8 *)pbVar9 = *(undefined8 *)(pbVar7 + -8);
    *(undefined8 *)(pbVar9 + 8) = *(undefined8 *)pbVar7;
    *(undefined8 *)(pbVar9 + 0x10) = *(undefined8 *)(pbVar7 + 8);
    *(undefined8 *)(pbVar9 + 0x18) = *(undefined8 *)(pbVar7 + 0x10);
    F_00d919e0(*(undefined * PTR32 *)pbVar9);
    if (*(undefined * PTR32 *)(pbVar9 + 4) != (undefined *)0x0) {
      F_00d919e0(*(undefined * PTR32 *)(pbVar9 + 4));
    }
    if (pbVar7[8] == 1) {
      uVar2 = F_00ddbd90((uint)*pbVar7,*(undefined4 *)(pbVar7 + 4));
      iVar5 = *(int *)((int)this + 0x18);
      iVar6 = iVar5 + uVar2;
      uVar3 = *(uint *)((int)this + 0x1c) & 0x3fffffff;
      if ((int)uVar3 < iVar6) {
        iVar4 = uVar3 * 2;
        if (iVar4 <= iVar6) {
          iVar4 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar4,2);
      }
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + uVar2;
      iVar6 = *piVar1 + iVar5 * 2;
LAB_00dd593d: ;
      F_00da1010(iVar6,*(undefined4 *)(pbVar7 + 0xc),uVar2 * 2);
      *(int *)(pbVar9 + 0x14) = iVar6;
    }
    else if (pbVar7[8] == 2) {
      uVar2 = F_00ddbd90((uint)*pbVar7,*(undefined4 *)(pbVar7 + 4));
      iVar5 = *(int *)((int)this + 0x24);
      iVar6 = iVar5 + uVar2;
      uVar3 = *(uint *)((int)this + 0x28) & 0x3fffffff;
      if ((int)uVar3 < iVar6) {
        iVar4 = uVar3 * 2;
        if (iVar4 <= iVar6) {
          iVar4 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x20,iVar4,4);
      }
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar2;
      iVar6 = *(int *)((int)this + 0x20) + iVar5 * 4;
      uVar2 = uVar2 * 2;
      goto LAB_00dd593d;
    }
    pbVar7 = pbVar7 + 0x20;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_00dd5980 */
uint F_00dd5980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x11493d8));
  F_00d91350((int)this + 0x2c,param_1);
  iVar5 = 0;
  if (param_1 != 0) {
    local_8 = *(int *)((int)this + 0x20);
    iVar4 = *(int *)((int)this + 0x14);
    local_c = 0;
    if (0 < *(int *)((int)this + 0xc)) {
      do {
        cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 8) + 0x10 + iVar5)));
        iVar2 = *(int *)((int)this + 8) + iVar5;
        if (cVar1 == '\x01') {
          uVar3 = F_00ddbd90((uint)*(byte *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
          *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x14 + iVar5))) = iVar4;
          iVar4 = iVar4 + uVar3 * 2;
        }
        else if (cVar1 == '\x02') {
          uVar3 = F_00ddbd90((uint)*(byte *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
          *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x14 + iVar5))) = local_8;
          local_8 = local_8 + uVar3 * 4;
        }
        local_c = local_c + 1;
        iVar5 = iVar5 + 0x20;
      } while (local_c < *(int *)((int)this + 0xc));
    }
    return (uint)this;
  }
  return (uint)this;
}

/* ref: FUN_00dd5a30 */
uint F_00dd5a30(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 0xc);
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x11493d8));
  if (0 < local_8) {
    do {
      iVar1 = *(int *)((int)this + 8);
      F_00d91a80(*(undefined * PTR32 *)(iVar1 + iVar3));
      this_00 = *(undefined * PTR32 *)(iVar1 + 4 + iVar3);
      if (this_00 != (undefined *)0x0) {
        F_00d91a80(this_00);
      }
      iVar3 = iVar3 + 0x20;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  F_00d91510((undefined *)((int)this + 0x2c));
  uVar2 = *(uint *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),(uVar2 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 << 5);
  }
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00dd5b40 */
uint F_00dd5b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5b40u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (char)param_3;
  return param_2;
}

/* ref: FUN_00dd5ba0 */
uint F_00dd5ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5ba0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00dd5bb0 */
uint F_00dd5bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5bb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00dd5c30 */
uint F_00dd5c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00dd5c80 */
uint F_00dd5c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dd5cd0 */
uint F_00dd5cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd5d10 */
uint F_00dd5d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x20);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd5d50 */
uint F_00dd5d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd5d90 */
uint F_00dd5d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dd5dd0 */
uint F_00dd5dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dd5e20 */
uint F_00dd5e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x20);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd5e60 */
uint F_00dd5e60(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dd5ea0 */
uint F_00dd5ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x20);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd5ee0 */
uint F_00dd5ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkMemoryMeshShape::vf2 */
uint F_00dd5f20(void)
{
  GEN_ENTER(0xdd5f20u, 0u, 0u, 0u, 0u);
  return 0x15e2804;
}

/* ref: hkMemoryMeshShape::vf7 */
uint F_00dd5f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0x2c,param_1);
  return uVar1;
}

/* ref: hkMemoryMeshShape::vf6 */
uint F_00dd5f40(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c) & 0xfffffffe;
}

/* ref: FUN_00dd5f50 */
uint F_00dd5f50(unsigned int gen_a0)
{
  GEN_ENTER(0xdd5f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkMemoryMeshShape::vf0 */
uint F_00dd5f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd5a30(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkMemoryMeshMaterial::vf3 */
uint F_00dd5fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd5fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  F_00dd7970(param_2,param_1);
  return 0;
}

/* ref: hkMemoryMeshMaterial::vf4 */
uint F_00dd5fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd5fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00d919e0(param_1);
  return (uint)param_1;
}

/* ref: hkMemoryMeshMaterial::vf5 */
byte F_00dd6000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 8))(param_1)));
  return puVar1 == &REFG(undefined, 0x15e2774);
}

/* ref: hkMemoryMeshMaterial::vf7 */
uint F_00dd6020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 8,param_1);
  return uVar1;
}

/* ref: hkMemoryMeshMaterial::vf8 */
uint F_00dd6030(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8) & 0xfffffffe;
}

/* ref: hkMemoryMeshMaterial::vf9 */
uint F_00dd6040(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: hkMemoryMeshMaterial::vf12 */
uint F_00dd6050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd6050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(this + 0x24);
  uVar2 = *(undefined4 *)(this + 0x28);
  uVar3 = *(undefined4 *)(this + 0x2c);
  *param_1 = *(undefined4 *)(this + 0x20);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = *(undefined4 *)(this + 0x34);
  uVar2 = *(undefined4 *)(this + 0x38);
  uVar3 = *(undefined4 *)(this + 0x3c);
  *param_2 = *(undefined4 *)(this + 0x30);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(this + 0x44);
  uVar2 = *(undefined4 *)(this + 0x48);
  uVar3 = *(undefined4 *)(this + 0x4c);
  *param_3 = *(undefined4 *)(this + 0x40);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x58);
  uVar3 = *(undefined4 *)(this + 0x5c);
  *param_4 = *(undefined4 *)(this + 0x50);
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_3;
}

/* ref: hkMemoryMeshMaterial::vf13 */
uint F_00dd6080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd6080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(this + 0x30) = *param_2;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x3c) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(this + 0x40) = *param_3;
  *(undefined4 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar2;
  *(undefined4 *)(this + 0x4c) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(this + 0x50) = *param_4;
  *(undefined4 *)(this + 0x54) = uVar1;
  *(undefined4 *)(this + 0x58) = uVar2;
  *(undefined4 *)(this + 0x5c) = uVar3;
  return (uint)param_3;
}

/* ref: hkMemoryMeshMaterial::vf10 */
uint F_00dd60b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd60b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: hkMemoryMeshMaterial::vf6 */
byte F_00dd60c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd60c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined * puVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 8))(param_1)));
  if (puVar2 == &REFG(undefined, 0x15e284c)) {
    uVar3 = param_1[2] & 0xfffffffe;
    if ((*(uint *)(this + 8) & 0xfffffffe) == 0) {
      uVar3 = -(uint)(uVar3 != 0);
    }
    else {
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = F_00da0d20(*(uint *)(this + 8) & 0xfffffffe,uVar3);
    }
    if ((uVar3 == 0) && (*(int *)(this + 0x10) == param_1[4])) {
      iVar4 = *(int *)(this + 0x10) + -1;
      if (-1 < iVar4) {
        piVar5 = ((int *)GEN_TOP((*(int *)(this + 0xc) + iVar4 * 4)));
        do {
          if (*piVar5 != *((int *)GEN_TOP(((param_1[3] - *(int *)(this + 0xc)) + (int)piVar5)))) {
            return 0;
          }
          piVar5 = piVar5 + -1;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)((gen_bits2f(param_1[0xd]) == *(float *)(this + 0x34) &&
                             gen_bits2f(param_1[9]) == *(float *)(this + 0x24)) &&
                            (gen_bits2f(param_1[0x15]) == *(float *)(this + 0x54) &&
                            gen_bits2f(param_1[0x11]) == *(float *)(this + 0x44)));
      (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)((gen_bits2f(param_1[0xc]) == *(float *)(this + 0x30) &&
                             gen_bits2f(param_1[8]) == *(float *)(this + 0x20)) &&
                            (gen_bits2f(param_1[0x14]) == *(float *)(this + 0x50) &&
                            gen_bits2f(param_1[0x10]) == *(float *)(this + 0x40)));
      (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)((gen_bits2f(param_1[0xe]) == *(float *)(this + 0x38) &&
                             gen_bits2f(param_1[10]) == *(float *)(this + 0x28)) &&
                            (gen_bits2f(param_1[0x16]) == *(float *)(this + 0x58) &&
                            gen_bits2f(param_1[0x12]) == *(float *)(this + 0x48)));
      (*(undefined4 *)((char *)&auVar1 + 12)) =
           -(uint)((gen_bits2f(param_1[0xf]) == *(float *)(this + 0x3c) &&
                   gen_bits2f(param_1[0xb]) == *(float *)(this + 0x2c)) &&
                  (gen_bits2f(param_1[0x17]) == *(float *)(this + 0x5c) &&
                  gen_bits2f(param_1[0x13]) == *(float *)(this + 0x4c)));
      iVar4 = gen_movmskps(&(auVar1));
      return iVar4 == 0xf;
    }
  }
  return 0;
}

/* ref: hkMemoryMeshMaterial::vf11 */
uint F_00dd6180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  uVar2 = *(uint *)(this + 0x14) & 0x3fffffff;
  if (*(uint *)(this + 0x10) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0xc,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + *(int *)(this + 0x10) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 != (undefined *)0x0) {
      uVar2 = F_00d919e0(param_1);
    }
    *puVar1 = param_1;
  }
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  if (param_1 != (undefined *)0x0) {
    uVar2 = F_00d91a80(param_1);
  }
  return uVar2;
}

/* ref: FUN_00dd61f0 */
uint F_00dd61f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd61f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x1149474));
  F_00d91340((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  F_00d91520((undefined *)((int)this + 8),param_1);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x114944c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1149448);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1149444);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)&REFG(undefined, 0x1149440);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  uVar4 = *(undefined4 *)&REFG(undefined, 0x114945c);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1149458);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1149454);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1149450);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)&REFG(undefined, 0x1149450);
  *(undefined4 *)((int)this + 0x34) = uVar2;
  *(undefined4 *)((int)this + 0x38) = uVar3;
  *(undefined4 *)((int)this + 0x3c) = uVar4;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar2;
  *(undefined4 *)((int)this + 0x48) = uVar3;
  *(undefined4 *)((int)this + 0x4c) = uVar4;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x114946c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1149468);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1149464);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)&REFG(undefined, 0x1149460);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = uVar2;
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  return (uint)this;
}

/* ref: FUN_00dd6260 */
uint F_00dd6260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x1149474));
  F_00d91350(in_ecx + 2,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dd62c0 */
uint F_00dd62c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd62c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

