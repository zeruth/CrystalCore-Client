#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Global::UnpackDeltaBlock8 */
GEN_LIB GEN_FRAME uint F_00d88d10(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(short * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xd88d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(short * in_edi = (short *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) =
       CONCAT13(*((undefined1 *)GEN_TOP((in_eax - 0xc))),
                CONCAT12(*((undefined1 *)GEN_TOP((in_eax - 0xb))),
                         CONCAT11(*((undefined1 *)GEN_TOP((in_eax - 10))),*((undefined1 *)GEN_TOP((in_eax - 9))))));
  (*(ulonglong *)(gen_frame + 0x8)) = CONCAT17(*((undefined1 *)GEN_TOP((in_eax - 0x10))),
                      CONCAT16(*((undefined1 *)GEN_TOP((in_eax - 0xf))),
                               CONCAT15(*((undefined1 *)GEN_TOP((in_eax - 0xe))),
                                        CONCAT14(*((undefined1 *)GEN_TOP((in_eax - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x8))))));
  *(uint3 *)((undefined1 *)(gen_frame + 0x0)) =
       CONCAT12(*((undefined1 *)GEN_TOP((in_eax - 3))),
                CONCAT11(*((undefined1 *)GEN_TOP((in_eax - 2))),*((undefined1 *)GEN_TOP((in_eax - 1)))));
  *(int *)((undefined1 *)(gen_frame + 0x0)) = CONCAT13(*((undefined1 *)GEN_TOP((in_eax - 4))),*(uint3 *)((undefined1 *)(gen_frame + 0x0)));
  *(undefined8 *)((undefined1 *)(gen_frame + 0x0)) =
       CONCAT17(*((undefined1 *)GEN_TOP((in_eax - 8))),
                CONCAT16(*((undefined1 *)GEN_TOP((in_eax - 7))),
                         CONCAT15(*((undefined1 *)GEN_TOP((in_eax - 6))),
                                  CONCAT14(*((undefined1 *)GEN_TOP((in_eax - 5))),*(int *)((undefined1 *)(gen_frame + 0x0))))));
  if (REFG(char, 0x15d9a81) == '\0') {
    F_00d91330();
    uVar3 = F_00d91120(&REFG(char, 0x15d9a81));
    if (REFG(char, 0x15d9a81) == '\0') {
      return uVar3;
    }
  }
  iVar1 = (*(uint3 *)((undefined1 *)(gen_frame + 0x0)) & 0xf) + 2;
  bVar4 = 0x10 - (char)iVar1;
  *in_edi = (short)(((ushort)(*(int *)((undefined1 *)(gen_frame + 0x0)) >> 2) & 0xfffc) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f)
  ;
  uVar3 = iVar1 * 2;
  bVar5 = (byte)uVar3;
  in_edi[1] = (short)((short)((*(int *)((undefined1 *)(gen_frame + 0x0)) >> (char)(*(uint3 *)((undefined1 *)(gen_frame + 0x0)) & 0xf) + 4) * 4) <<
                     (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
  uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar3 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x8))) <<
          (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
          ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((CONCAT44((*(undefined4 *)(gen_frame + 0x4)),*(int *)((undefined1 *)(gen_frame + 0x0))) >> (ulonglong)bVar5)) : 0));
  uVar6 = (uint)uVar2;
  iVar1 = (uVar6 & 0xf) + 2;
  bVar5 = 0x10 - (char)iVar1;
  uVar7 = (*(ulonglong *)(gen_frame + 0x8)) >> (ulonglong)uVar3;
  in_edi[2] = (short)(((ushort)((int)uVar6 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  in_edi[3] = (short)((short)((int)uVar6 >> (char)(uVar6 & 0xf) + 4) * 4 << (bVar5 & 0x1f)) >>
              (bVar5 & 0x1f);
  uVar3 = iVar1 * 2;
  bVar5 = (byte)uVar3;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (uint)uVar7;
  uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar3 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x8))) <<
          (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
          ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar2 >> (ulonglong)bVar5)) : 0));
  uVar6 = (uint)uVar2;
  iVar1 = (uVar6 & 0xf) + 2;
  bVar5 = 0x10 - (char)iVar1;
  in_edi[4] = (short)(((ushort)((int)uVar6 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  in_edi[5] = (short)((short)((int)uVar6 >> (char)(uVar6 & 0xf) + 4) * 4 << (bVar5 & 0x1f)) >>
              (bVar5 & 0x1f);
  iVar1 = iVar1 * 2;
  bVar5 = (byte)iVar1;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (uint)(uVar7 >> (ulonglong)uVar3);
  uVar6 = (uint)(((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - (iVar1 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x8))) <<
                (ulonglong)(byte)(0x40 - bVar5))) : 0))) |
          (uint)(((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar2 >> (ulonglong)bVar5)) : 0)));
  uVar3 = 0x10 - ((uVar6 & 0xf) + 2);
  bVar5 = (byte)uVar3;
  in_edi[6] = (short)(((ushort)((int)uVar6 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  in_edi[7] = (short)((short)((int)uVar6 >> (char)(uVar6 & 0xf) + 4) * 4 << (bVar5 & 0x1f)) >>
              (bVar5 & 0x1f);
  return uVar3;
}

/* ref: Global::IntegrateDeltas16 */
GEN_LIB GEN_FRAME unsigned int F_00d88fd0(GEN_P(short * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xd88fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(short * in_eax = (short *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = 3;
  do {
    in_eax[1] = in_eax[1] + *in_eax;
    in_eax[2] = in_eax[2] + in_eax[1];
    in_eax[3] = in_eax[3] + in_eax[2];
    in_eax[4] = in_eax[4] + in_eax[3];
    in_eax[5] = in_eax[5] + in_eax[4];
    in_eax[6] = in_eax[6] + in_eax[5];
    in_eax[7] = in_eax[7] + in_eax[6];
    in_eax[8] = in_eax[8] + in_eax[7];
    in_eax[9] = in_eax[9] + in_eax[8];
    in_eax[10] = in_eax[10] + in_eax[9];
    in_eax[0xb] = in_eax[0xb] + in_eax[10];
    in_eax[0xc] = in_eax[0xc] + in_eax[0xb];
    in_eax[0xd] = in_eax[0xd] + in_eax[0xc];
    in_eax[0xe] = in_eax[0xe] + in_eax[0xd];
    in_eax[0xf] = in_eax[0xf] + in_eax[0xe];
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  *in_eax = *in_eax >> 2;
  in_eax[1] = in_eax[1] >> 2;
  in_eax[2] = in_eax[2] >> 2;
  in_eax[3] = in_eax[3] >> 2;
  in_eax[4] = in_eax[4] >> 2;
  in_eax[5] = in_eax[5] >> 2;
  in_eax[6] = in_eax[6] >> 2;
  in_eax[7] = in_eax[7] >> 2;
  in_eax[8] = in_eax[8] >> 2;
  in_eax[9] = in_eax[9] >> 2;
  in_eax[10] = in_eax[10] >> 2;
  in_eax[0xb] = in_eax[0xb] >> 2;
  in_eax[0xc] = in_eax[0xc] >> 2;
  in_eax[0xd] = in_eax[0xd] >> 2;
  in_eax[0xe] = in_eax[0xe] >> 2;
  in_eax[0xf] = in_eax[0xf] >> 2;
  return 0;
}

/* ref: Global::DecodeDeltaBlocks */
GEN_LIB GEN_FRAME unsigned int F_00d890c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd890c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short * psVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar3 = param_1 + 0x10;
  (*(int *)(gen_frame + 0x30)) = 0;
  psVar7 = ((short *)GEN_TOP((param_2 + 0x14)));
  do {
    bVar6 = *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + param_1)));
    uVar8 = (uint)(bVar6 >> 4);
    iVar9 = uVar8 + 1 + iVar3;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar9 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP(((uVar8 - 10) + iVar3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar9 - 10))),*((undefined1 *)GEN_TOP((iVar9 - 9))))));
    (*(ulonglong *)(gen_frame + 0x18)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar9 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar9 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar9 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar9 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x18))))));
    *(uint3 *)((undefined1 *)(gen_frame + 0x8)) =
         CONCAT12(*((undefined1 *)GEN_TOP((iVar9 - 3))),
                  CONCAT11(*((undefined1 *)GEN_TOP((iVar9 - 2))),*((undefined1 *)GEN_TOP((iVar9 - 1)))));
    *(int *)((undefined1 *)(gen_frame + 0x8)) = CONCAT13(*((undefined1 *)GEN_TOP((iVar9 - 4))),*(uint3 *)((undefined1 *)(gen_frame + 0x8)));
    *(undefined8 *)((undefined1 *)(gen_frame + 0x8)) =
         CONCAT17(*((undefined1 *)GEN_TOP((iVar9 - 8))),
                  CONCAT16(*((undefined1 *)GEN_TOP((iVar9 - 7))),
                           CONCAT15(*((undefined1 *)GEN_TOP((iVar9 - 6))),
                                    CONCAT14(*((undefined1 *)GEN_TOP((iVar9 - 5))),*(int *)((undefined1 *)(gen_frame + 0x8))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d891a4;
    }
    else {
LAB_00d891a4: ;
      iVar3 = (*(uint3 *)((undefined1 *)(gen_frame + 0x8)) & 0xf) + 2;
      cVar2 = (char)iVar3;
      bVar4 = 0x10 - cVar2;
      psVar7[-10] = (short)(((ushort)(*(int *)((undefined1 *)(gen_frame + 0x8)) >> 2) & 0xfffc) << (bVar4 & 0x1f)) >>
                    (bVar4 & 0x1f);
      uVar8 = iVar3 * 2;
      bVar5 = (byte)uVar8;
      psVar7[-9] = (short)((short)(*(int *)((undefined1 *)(gen_frame + 0x8)) >> (char)(*(uint3 *)((undefined1 *)(gen_frame + 0x8)) & 0xf) + 4) * 4
                          << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
      uVar1 = (ulonglong)(byte)(cVar2 * -2 + 0x40);
      uVar1 = ((ulonglong)((uVar1 < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar8 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x18))) <<
              uVar1)) : 0)) | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((CONCAT44((*(undefined4 *)(gen_frame + 0xc)),*(int *)((undefined1 *)(gen_frame + 0x8))) >> (ulonglong)bVar5)) : 0));
      uVar10 = (uint)uVar1;
      iVar3 = (uVar10 & 0xf) + 2;
      bVar5 = 0x10 - (char)iVar3;
      uVar11 = (*(ulonglong *)(gen_frame + 0x18)) >> (ulonglong)uVar8;
      psVar7[-8] = (short)(((ushort)((int)uVar10 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >>
                   (bVar5 & 0x1f);
      psVar7[-7] = (short)((short)((int)uVar10 >> (char)(uVar10 & 0xf) + 4) * 4 << (bVar5 & 0x1f))
                   >> (bVar5 & 0x1f);
      uVar8 = iVar3 * 2;
      bVar5 = (byte)uVar8;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = (uint)uVar11;
      uVar1 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar8 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x18))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
              ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar1 >> (ulonglong)bVar5)) : 0));
      uVar10 = (uint)uVar1;
      iVar3 = (uVar10 & 0xf) + 2;
      bVar5 = 0x10 - (char)iVar3;
      psVar7[-6] = (short)(((ushort)((int)uVar10 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >>
                   (bVar5 & 0x1f);
      psVar7[-5] = (short)((short)((int)uVar10 >> (char)(uVar10 & 0xf) + 4) * 4 << (bVar5 & 0x1f))
                   >> (bVar5 & 0x1f);
      iVar3 = iVar3 * 2;
      bVar5 = (byte)iVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = (uint)(uVar11 >> (ulonglong)uVar8);
      uVar1 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - (iVar3 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x18))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
              ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar1 >> (ulonglong)bVar5)) : 0));
      iVar3 = (int)uVar1;
      bVar5 = (byte)uVar1 & 0xf;
      bVar4 = 0x10 - (bVar5 + 2);
      psVar7[-4] = (short)(((ushort)(iVar3 >> 2) & 0xfffc) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
      psVar7[-3] = (short)((short)(iVar3 >> bVar5 + 4) * 4 << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
    }
    iVar3 = iVar9 + (bVar6 & 0xf) + 1;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar3 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP((iVar3 - 0xb))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar3 - 10))),*((undefined1 *)GEN_TOP((iVar3 - 9))))));
    (*(ulonglong *)(gen_frame + 0x10)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar3 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar3 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar3 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar3 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x10))))));
    *(uint3 *)((undefined1 *)(gen_frame + 0x0)) =
         CONCAT12(*((undefined1 *)GEN_TOP((iVar3 - 3))),
                  CONCAT11(*((undefined1 *)GEN_TOP((iVar3 - 2))),*((undefined1 *)GEN_TOP((iVar3 - 1)))));
    *(int *)((undefined1 *)(gen_frame + 0x0)) = CONCAT13(*((undefined1 *)GEN_TOP((iVar3 - 4))),*(uint3 *)((undefined1 *)(gen_frame + 0x0)));
    *(undefined8 *)((undefined1 *)(gen_frame + 0x0)) =
         CONCAT17(*((undefined1 *)GEN_TOP((iVar3 - 8))),
                  CONCAT16(*((undefined1 *)GEN_TOP((iVar3 - 7))),
                           CONCAT15(*((undefined1 *)GEN_TOP((iVar3 - 6))),
                                    CONCAT14(*((undefined1 *)GEN_TOP((iVar3 - 5))),*(int *)((undefined1 *)(gen_frame + 0x0))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d8945d;
    }
    else {
LAB_00d8945d: ;
      iVar9 = (*(uint3 *)((undefined1 *)(gen_frame + 0x0)) & 0xf) + 2;
      cVar2 = (char)iVar9;
      bVar5 = 0x10 - cVar2;
      psVar7[-2] = (short)(((ushort)(*(int *)((undefined1 *)(gen_frame + 0x0)) >> 2) & 0xfffc) << (bVar5 & 0x1f)) >>
                   (bVar5 & 0x1f);
      uVar8 = iVar9 * 2;
      bVar6 = (byte)uVar8;
      psVar7[-1] = (short)((short)(*(int *)((undefined1 *)(gen_frame + 0x0)) >> (char)(*(uint3 *)((undefined1 *)(gen_frame + 0x0)) & 0xf) + 4) * 4
                          << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
      uVar1 = (ulonglong)(byte)(cVar2 * -2 + 0x40);
      uVar1 = ((ulonglong)((uVar1 < 0x40) ? (((ulonglong)(((1 << (bVar6 & 0x1f)) - ((int)uVar8 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x10))) <<
              uVar1)) : 0)) | ((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((CONCAT44((*(undefined4 *)(gen_frame + 0x4)),*(int *)((undefined1 *)(gen_frame + 0x0))) >> (ulonglong)bVar6)) : 0));
      uVar10 = (uint)uVar1;
      iVar9 = (uVar10 & 0xf) + 2;
      bVar6 = 0x10 - (char)iVar9;
      uVar11 = (*(ulonglong *)(gen_frame + 0x10)) >> (ulonglong)uVar8;
      *psVar7 = (short)(((ushort)((int)uVar10 >> 2) & 0xfffc) << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
      psVar7[1] = (short)((short)((int)uVar10 >> (char)(uVar10 & 0xf) + 4) * 4 << (bVar6 & 0x1f)) >>
                  (bVar6 & 0x1f);
      uVar8 = iVar9 * 2;
      bVar6 = (byte)uVar8;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = (uint)uVar11;
      uVar1 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar6) < 0x40) ? (((ulonglong)(((1 << (bVar6 & 0x1f)) - ((int)uVar8 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x10))) <<
              (ulonglong)(byte)(0x40 - bVar6))) : 0)) |
              ((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((uVar1 >> (ulonglong)bVar6)) : 0));
      uVar10 = (uint)uVar1;
      iVar9 = (uVar10 & 0xf) + 2;
      bVar6 = 0x10 - (char)iVar9;
      psVar7[2] = (short)(((ushort)((int)uVar10 >> 2) & 0xfffc) << (bVar6 & 0x1f)) >> (bVar6 & 0x1f)
      ;
      psVar7[3] = (short)((short)((int)uVar10 >> (char)(uVar10 & 0xf) + 4) * 4 << (bVar6 & 0x1f)) >>
                  (bVar6 & 0x1f);
      iVar9 = iVar9 * 2;
      bVar6 = (byte)iVar9;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = (uint)(uVar11 >> (ulonglong)uVar8);
      uVar1 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar6) < 0x40) ? (((ulonglong)(((1 << (bVar6 & 0x1f)) - (iVar9 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x10))) <<
              (ulonglong)(byte)(0x40 - bVar6))) : 0)) |
              ((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((uVar1 >> (ulonglong)bVar6)) : 0));
      iVar9 = (int)uVar1;
      bVar6 = (byte)uVar1 & 0xf;
      bVar5 = 0x10 - (bVar6 + 2);
      psVar7[4] = (short)(((ushort)(iVar9 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
      psVar7[5] = (short)((short)(iVar9 >> bVar6 + 4) * 4 << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
    iVar9 = 3;
    do {
      psVar7[-9] = psVar7[-9] + psVar7[-10];
      psVar7[-8] = psVar7[-8] + psVar7[-9];
      psVar7[-7] = psVar7[-7] + psVar7[-8];
      psVar7[-6] = psVar7[-6] + psVar7[-7];
      psVar7[-5] = psVar7[-5] + psVar7[-6];
      psVar7[-4] = psVar7[-4] + psVar7[-5];
      psVar7[-3] = psVar7[-3] + psVar7[-4];
      psVar7[-2] = psVar7[-2] + psVar7[-3];
      psVar7[-1] = psVar7[-1] + psVar7[-2];
      *psVar7 = *psVar7 + psVar7[-1];
      psVar7[1] = psVar7[1] + *psVar7;
      psVar7[2] = psVar7[2] + psVar7[1];
      psVar7[3] = psVar7[3] + psVar7[2];
      psVar7[4] = psVar7[4] + psVar7[3];
      psVar7[5] = psVar7[5] + psVar7[4];
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
    psVar7[-10] = psVar7[-10] >> 2;
    psVar7[-9] = psVar7[-9] >> 2;
    psVar7[-8] = psVar7[-8] >> 2;
    psVar7[-7] = psVar7[-7] >> 2;
    psVar7[-6] = psVar7[-6] >> 2;
    psVar7[-5] = psVar7[-5] >> 2;
    psVar7[-4] = psVar7[-4] >> 2;
    psVar7[-3] = psVar7[-3] >> 2;
    psVar7[-2] = psVar7[-2] >> 2;
    psVar7[-1] = psVar7[-1] >> 2;
    *psVar7 = *psVar7 >> 2;
    psVar7[1] = psVar7[1] >> 2;
    psVar7[2] = psVar7[2] >> 2;
    psVar7[3] = psVar7[3] >> 2;
    psVar7[4] = psVar7[4] >> 2;
    psVar7[5] = psVar7[5] >> 2;
    (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
    psVar7 = psVar7 + 0x10;
    if (0xf < (*(int *)(gen_frame + 0x30))) {
      return 0;
    }
  } while( true );
}

/* ref: Global::DecodeDeltaBlocksChannel */
GEN_LIB GEN_FRAME uint F_00d89760(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(short * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd89760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x70, 0, 4);
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  uint uVar23;
  int iVar24;
  short sVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  
  (*(int *)(gen_frame + 0x64)) = param_1;
  uVar6 = param_1 + 0x10;
  (*(int *)(gen_frame + 0x68)) = 0;
  (*(short * PTR32 *)(gen_frame + 0x58)) = ((short *)(gen_frame + 0x0)) + param_2;
  do {
    uVar23 = (uint)(*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x68)) + (*(int *)(gen_frame + 0x64))))) >> 4);
    uVar1 = *((undefined1 *)GEN_TOP(((uVar23 - 10) + uVar6)));
    iVar24 = uVar23 + 1 + uVar6;
    (*(uint *)(gen_frame + 0x5c)) = (*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x68)) + (*(int *)(gen_frame + 0x64))))) & 0xf) + 1;
    (*(ulonglong *)(gen_frame + 0x50)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 0)) = *((undefined1 *)GEN_TOP((iVar24 - 9)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 1)) = *((undefined1 *)GEN_TOP((iVar24 - 10)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 2)) = uVar1;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 3)) = *((undefined1 *)GEN_TOP((iVar24 - 0xc)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar24 - 0xc))),
                  CONCAT12(uVar1,CONCAT11(*((undefined1 *)GEN_TOP((iVar24 - 10))),*((undefined1 *)GEN_TOP((iVar24 - 9)))
                                         )));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 4)) = *((undefined1 *)GEN_TOP((iVar24 - 0xd)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 5)) = *((undefined1 *)GEN_TOP((iVar24 - 0xe)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 6)) = *((undefined1 *)GEN_TOP((iVar24 - 0xf)));
    (*(ulonglong *)(gen_frame + 0x38)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 7)) = *((undefined1 *)GEN_TOP((iVar24 - 0x10)));
    (*(ulonglong *)(gen_frame + 0x50)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar24 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar24 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar24 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar24 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x50))))))
    ;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) = *((undefined1 *)GEN_TOP((iVar24 - 1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 1)) = *((undefined1 *)GEN_TOP((iVar24 - 2)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 2)) = *((undefined1 *)GEN_TOP((iVar24 - 3)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 3)) = *((undefined1 *)GEN_TOP((iVar24 - 4)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar24 - 4))),
                  CONCAT12(*((undefined1 *)GEN_TOP((iVar24 - 3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar24 - 2))),*((undefined1 *)GEN_TOP((iVar24 - 1))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = *((undefined1 *)GEN_TOP((iVar24 - 5)));
    (*(int *)(gen_frame + 0x60)) = iVar24;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 5)) = *((undefined1 *)GEN_TOP((iVar24 - 6)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 6)) = *((undefined1 *)GEN_TOP((iVar24 - 7)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 7)) = *((undefined1 *)GEN_TOP((iVar24 - 8)));
    (*(ulonglong *)(gen_frame + 0x38)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar24 - 8))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar24 - 7))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar24 - 6))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar24 - 5))),(uint)(*(ulonglong *)(gen_frame + 0x38))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d8984a;
    }
    else {
LAB_00d8984a: ;
      iVar24 = ((uint)(*(ulonglong *)(gen_frame + 0x38)) & 0xf) + 2;
      cVar4 = (char)iVar24;
      bVar8 = 0x10 - cVar4;
      uVar6 = iVar24 * 2;
      ((short *)(gen_frame + 0x0))[0] = (short)(((ushort)((int)(uint)(*(ulonglong *)(gen_frame + 0x38)) >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                    (bVar8 & 0x1f);
      bVar5 = (byte)uVar6;
      ((short *)(gen_frame + 0x0))[1] = (short)((short)(((int)(uint)(*(ulonglong *)(gen_frame + 0x38)) >> (char)((uint)(*(ulonglong *)(gen_frame + 0x38)) & 0xf) + 4) * 4)
                           << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar3 = (ulonglong)(byte)(cVar4 * -2 + 0x40);
      uVar3 = ((ulonglong)((uVar3 < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar6 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x50))) <<
              uVar3)) : 0));
      (*(undefined4 *)(gen_frame + 0x34)) = (int)(uVar3 >> 0x20);
      uVar3 = uVar3 | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? (((*(ulonglong *)(gen_frame + 0x38)) >> (ulonglong)bVar5)) : 0));
      uVar23 = (uint)uVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (int)(uVar3 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      uVar26 = (*(ulonglong *)(gen_frame + 0x50)) >> (ulonglong)uVar6;
      (*(ulonglong *)(gen_frame + 0x50)) = uVar26;
      ((short *)(gen_frame + 0x0))[2] = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                    (bVar8 & 0x1f);
      uVar6 = iVar24 * 2;
      bVar5 = (byte)uVar6;
      ((short *)(gen_frame + 0x0))[3] = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f)
                           ) >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 0)) = (uint)uVar26;
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar6 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x50))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0));
      (*(undefined4 *)(gen_frame + 0x2c)) = (int)(uVar2 >> 0x20);
      uVar2 = uVar2 | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar3 >> (ulonglong)bVar5)) : 0));
      uVar23 = (uint)uVar2;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (int)(uVar2 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      (*(ulonglong *)(gen_frame + 0x50)) = uVar26 >> (ulonglong)uVar6;
      uVar27 = (*(ulonglong *)(gen_frame + 0x50));
      (*(short *)(gen_frame + 0x8)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = iVar24 * 2;
      bVar5 = (byte)iVar24;
      (*(short *)(gen_frame + 0xa)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 0)) = (uint)(uVar26 >> (ulonglong)uVar6);
      uVar3 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - (iVar24 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x50))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
              ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar2 >> (ulonglong)bVar5)) : 0));
      uVar7 = (undefined4)(uVar3 >> 0x20);
      bVar5 = (byte)uVar3 & 0xf;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = uVar7;
      (*(ulonglong *)(gen_frame + 0x38)) = CONCAT44(uVar7,(uint)(*(ulonglong *)(gen_frame + 0x38)));
      bVar8 = 0x10 - (bVar5 + 2);
      (*(short *)(gen_frame + 0xc)) = (short)(((ushort)((int)uVar3 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      (*(short *)(gen_frame + 0xe)) = (short)((short)((int)uVar3 >> bVar5 + 4) * 4 << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = (*(int *)(gen_frame + 0x60));
      (*(ulonglong *)(gen_frame + 0x50)) = uVar27;
    }
    sVar15 = (*(short *)(gen_frame + 0xc));
    uVar6 = iVar24 + (*(uint *)(gen_frame + 0x5c));
    (*(ulonglong *)(gen_frame + 0x48)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = *((undefined1 *)GEN_TOP((uVar6 - 9)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 1)) = *((undefined1 *)GEN_TOP((uVar6 - 10)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 2)) = *((undefined1 *)GEN_TOP((uVar6 - 0xb)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 3)) = *((undefined1 *)GEN_TOP((uVar6 - 0xc)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((uVar6 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP((uVar6 - 0xb))),
                           CONCAT11(*((undefined1 *)GEN_TOP((uVar6 - 10))),*((undefined1 *)GEN_TOP((uVar6 - 9))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 4)) = *((undefined1 *)GEN_TOP((uVar6 - 0xd)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 5)) = *((undefined1 *)GEN_TOP((uVar6 - 0xe)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 6)) = *((undefined1 *)GEN_TOP((uVar6 - 0xf)));
    (*(ulonglong *)(gen_frame + 0x40)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 7)) = *((undefined1 *)GEN_TOP((uVar6 - 0x10)));
    (*(ulonglong *)(gen_frame + 0x48)) = CONCAT17(*((undefined1 *)GEN_TOP((uVar6 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((uVar6 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((uVar6 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((uVar6 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x48))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) = *((undefined1 *)GEN_TOP((uVar6 - 1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 1)) = *((undefined1 *)GEN_TOP((uVar6 - 2)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 2)) = *((undefined1 *)GEN_TOP((uVar6 - 3)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 3)) = *((undefined1 *)GEN_TOP((uVar6 - 4)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((uVar6 - 4))),
                  CONCAT12(*((undefined1 *)GEN_TOP((uVar6 - 3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((uVar6 - 2))),*((undefined1 *)GEN_TOP((uVar6 - 1))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = *((undefined1 *)GEN_TOP((uVar6 - 5)));
    (*(uint *)(gen_frame + 0x5c)) = uVar6;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 5)) = *((undefined1 *)GEN_TOP((uVar6 - 6)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 6)) = *((undefined1 *)GEN_TOP((uVar6 - 7)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 7)) = *((undefined1 *)GEN_TOP((uVar6 - 8)));
    (*(ulonglong *)(gen_frame + 0x40)) = CONCAT17(*((undefined1 *)GEN_TOP((uVar6 - 8))),
                        CONCAT16(*((undefined1 *)GEN_TOP((uVar6 - 7))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((uVar6 - 6))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((uVar6 - 5))),(uint)(*(ulonglong *)(gen_frame + 0x40))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      sVar16 = (*(short *)(gen_frame + 0x1e));
      sVar25 = (*(short *)(gen_frame + 0x1c));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d89af2;
    }
    else {
LAB_00d89af2: ;
      iVar24 = ((uint)(*(ulonglong *)(gen_frame + 0x40)) & 0xf) + 2;
      cVar4 = (char)iVar24;
      bVar8 = 0x10 - cVar4;
      uVar6 = iVar24 * 2;
      (*(short *)(gen_frame + 0x10)) = (short)(((ushort)((int)(uint)(*(ulonglong *)(gen_frame + 0x40)) >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
      bVar5 = (byte)uVar6;
      (*(short *)(gen_frame + 0x12)) = (short)((short)((int)(uint)(*(ulonglong *)(gen_frame + 0x40)) >> (char)((uint)(*(ulonglong *)(gen_frame + 0x40)) & 0xf) + 4) * 4 <<
                        (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar3 = (ulonglong)(byte)(cVar4 * -2 + 0x40);
      uVar2 = ((ulonglong)((uVar3 < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar6 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              uVar3)) : 0)) | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? (((*(ulonglong *)(gen_frame + 0x40)) >> (ulonglong)bVar5)) : 0));
      uVar23 = (uint)uVar2;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = (int)(uVar2 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      uVar27 = (*(ulonglong *)(gen_frame + 0x48)) >> (ulonglong)uVar6;
      (*(ulonglong *)(gen_frame + 0x48)) = uVar27;
      (*(short *)(gen_frame + 0x14)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar6 = iVar24 * 2;
      bVar5 = (byte)uVar6;
      (*(short *)(gen_frame + 0x16)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = (uint)uVar27;
      uVar3 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar6 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0));
      (*(undefined4 *)(gen_frame + 0x24)) = (int)(uVar3 >> 0x20);
      uVar3 = uVar3 | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar2 >> (ulonglong)bVar5)) : 0));
      uVar23 = (uint)uVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = (int)(uVar3 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      (*(ulonglong *)(gen_frame + 0x48)) = uVar27 >> (ulonglong)uVar6;
      uVar2 = (*(ulonglong *)(gen_frame + 0x48));
      (*(short *)(gen_frame + 0x18)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = iVar24 * 2;
      bVar5 = (byte)iVar24;
      (*(short *)(gen_frame + 0x1a)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = (uint)(uVar27 >> (ulonglong)uVar6);
      uVar3 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - (iVar24 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
              ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar3 >> (ulonglong)bVar5)) : 0));
      uVar7 = (undefined4)(uVar3 >> 0x20);
      bVar5 = (byte)uVar3 & 0xf;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = uVar7;
      (*(ulonglong *)(gen_frame + 0x40)) = CONCAT44(uVar7,(uint)(*(ulonglong *)(gen_frame + 0x40)));
      bVar8 = 0x10 - (bVar5 + 2);
      sVar25 = (short)(((ushort)((int)uVar3 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      sVar16 = (short)((short)((int)uVar3 >> bVar5 + 4) * 4 << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar6 = (*(uint *)(gen_frame + 0x5c));
      sVar15 = (*(short *)(gen_frame + 0xc));
      (*(ulonglong *)(gen_frame + 0x48)) = uVar2;
    }
    iVar24 = 3;
    do {
      uVar9 = ((short *)(gen_frame + 0x0))[1] + ((short *)(gen_frame + 0x0))[0];
      sVar17 = ((short *)(gen_frame + 0x0))[2] + uVar9;
      (*(uint *)(gen_frame + 0x5c)) = (uint)uVar9;
      ((short *)(gen_frame + 0x0))[1] = uVar9;
      sVar10 = ((short *)(gen_frame + 0x0))[3] + sVar17;
      ((short *)(gen_frame + 0x0))[2] = sVar17;
      sVar18 = (*(short *)(gen_frame + 0x8)) + sVar10;
      ((short *)(gen_frame + 0x0))[3] = sVar10;
      sVar11 = (*(short *)(gen_frame + 0xa)) + sVar18;
      (*(short *)(gen_frame + 0x8)) = sVar18;
      sVar15 = sVar15 + sVar11;
      sVar19 = (*(short *)(gen_frame + 0xe)) + sVar15;
      (*(short *)(gen_frame + 0xa)) = sVar11;
      sVar12 = (*(short *)(gen_frame + 0x10)) + sVar19;
      (*(short *)(gen_frame + 0xe)) = sVar19;
      sVar20 = (*(short *)(gen_frame + 0x12)) + sVar12;
      (*(short *)(gen_frame + 0x10)) = sVar12;
      sVar13 = (*(short *)(gen_frame + 0x14)) + sVar20;
      (*(short *)(gen_frame + 0x12)) = sVar20;
      sVar21 = (*(short *)(gen_frame + 0x16)) + sVar13;
      (*(short *)(gen_frame + 0x14)) = sVar13;
      sVar14 = (*(short *)(gen_frame + 0x18)) + sVar21;
      (*(short *)(gen_frame + 0x16)) = sVar21;
      sVar22 = (*(short *)(gen_frame + 0x1a)) + sVar14;
      sVar25 = sVar25 + sVar22;
      sVar16 = sVar16 + sVar25;
      iVar24 = iVar24 - 1;
      (*(short *)(gen_frame + 0x18)) = sVar14;
      (*(short *)(gen_frame + 0x1a)) = sVar22;
    } while (iVar24 != 0);
    ((short *)(gen_frame + 0x0))[0] = ((short *)(gen_frame + 0x0))[0] >> 2;
    ((short *)(gen_frame + 0x0))[1] = (short)uVar9 >> 2;
    ((short *)(gen_frame + 0x0))[2] = sVar17 >> 2;
    ((short *)(gen_frame + 0x0))[3] = sVar10 >> 2;
    (*(short *)(gen_frame + 0x8)) = sVar18 >> 2;
    (*(short *)(gen_frame + 0xa)) = sVar11 >> 2;
    (*(short *)(gen_frame + 0xe)) = sVar19 >> 2;
    (*(short *)(gen_frame + 0x10)) = sVar12 >> 2;
    (*(short *)(gen_frame + 0x12)) = sVar20 >> 2;
    (*(short *)(gen_frame + 0x14)) = sVar13 >> 2;
    (*(short *)(gen_frame + 0x16)) = sVar21 >> 2;
    (*(short *)(gen_frame + 0x18)) = sVar14 >> 2;
    (*(short *)(gen_frame + 0x1a)) = sVar22 >> 2;
    (*(short *)(gen_frame + 0xc)) = sVar15 >> 2;
    (*(short *)(gen_frame + 0x1c)) = sVar25 >> 2;
    (*(short *)(gen_frame + 0x1e)) = sVar16 >> 2;
    *param_3 = *(*(short * PTR32 *)(gen_frame + 0x58));
    param_3 = param_3 + 1;
    iVar24 = (*(int *)(gen_frame + 0x68)) + 1;
    (*(int *)(gen_frame + 0x68)) = iVar24;
    if (0xf < iVar24) {
      return uVar6;
    }
  } while( true );
}

/* ref: Global::DecodeDeltaBlocksChannelPair */
GEN_LIB GEN_FRAME uint F_00d89e10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd89e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x6c, 4, 4);
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  uint uVar23;
  int iVar24;
  short sVar25;
  ulonglong uVar26;
  
  (*(int *)(gen_frame + 0x60)) = param_1;
  uVar5 = param_1 + 0x10;
  (*(int *)(gen_frame + 0x64)) = 0;
  (*(short * PTR32 *)(gen_frame + 0x54)) = ((short *)(gen_frame + 0x0)) + param_2;
  (*(short * PTR32 *)(gen_frame + 0x50)) = ((short *)(gen_frame + 0x0)) + param_2 + 1;
  do {
    uVar23 = (uint)(*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + (*(int *)(gen_frame + 0x60))))) >> 4);
    uVar1 = *((undefined1 *)GEN_TOP(((uVar23 - 8) + uVar5)));
    iVar24 = uVar23 + 1 + uVar5;
    (*(uint *)(gen_frame + 0x58)) = (*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + (*(int *)(gen_frame + 0x60))))) & 0xf) + 1;
    (*(ulonglong *)(gen_frame + 0x48)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = uVar1;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 1)) = *((undefined1 *)GEN_TOP((iVar24 - 10)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 2)) = *((undefined1 *)GEN_TOP((iVar24 - 0xb)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 3)) = *((undefined1 *)GEN_TOP((iVar24 - 0xc)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar24 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP((iVar24 - 0xb))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar24 - 10))),uVar1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 4)) = *((undefined1 *)GEN_TOP((iVar24 - 0xd)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 5)) = *((undefined1 *)GEN_TOP((iVar24 - 0xe)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 6)) = *((undefined1 *)GEN_TOP((iVar24 - 0xf)));
    (*(ulonglong *)(gen_frame + 0x38)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 7)) = *((undefined1 *)GEN_TOP((iVar24 - 0x10)));
    (*(ulonglong *)(gen_frame + 0x48)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar24 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar24 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar24 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar24 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x48))))))
    ;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) = *((undefined1 *)GEN_TOP((iVar24 - 1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 1)) = *((undefined1 *)GEN_TOP((iVar24 - 2)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 2)) = *((undefined1 *)GEN_TOP((iVar24 - 3)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 3)) = *((undefined1 *)GEN_TOP((iVar24 - 4)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar24 - 4))),
                  CONCAT12(*((undefined1 *)GEN_TOP((iVar24 - 3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar24 - 2))),*((undefined1 *)GEN_TOP((iVar24 - 1))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = *((undefined1 *)GEN_TOP((iVar24 - 5)));
    (*(int *)(gen_frame + 0x5c)) = iVar24;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 5)) = *((undefined1 *)GEN_TOP((iVar24 - 6)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 6)) = *((undefined1 *)GEN_TOP((iVar24 - 7)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 7)) = *((undefined1 *)GEN_TOP((iVar24 - 8)));
    (*(ulonglong *)(gen_frame + 0x38)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar24 - 8))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar24 - 7))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar24 - 6))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar24 - 5))),(uint)(*(ulonglong *)(gen_frame + 0x38))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d89f07;
    }
    else {
LAB_00d89f07: ;
      iVar24 = ((uint)(*(ulonglong *)(gen_frame + 0x38)) & 0xf) + 2;
      bVar7 = 0x10 - (char)iVar24;
      ((short *)(gen_frame + 0x0))[0] = (short)(((ushort)((int)(uint)(*(ulonglong *)(gen_frame + 0x38)) >> 2) & 0xfffc) << (bVar7 & 0x1f)) >>
                    (bVar7 & 0x1f);
      ((short *)(gen_frame + 0x0))[1] = (short)((short)((int)(uint)(*(ulonglong *)(gen_frame + 0x38)) >> (char)((uint)(*(ulonglong *)(gen_frame + 0x38)) & 0xf) + 4) * 4 <<
                           (bVar7 & 0x1f)) >> (bVar7 & 0x1f);
      uVar5 = iVar24 * 2;
      bVar7 = (byte)uVar5;
      uVar3 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - ((int)uVar5 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0)) |
              ((ulonglong)(((ulonglong)bVar7 < 0x40) ? (((*(ulonglong *)(gen_frame + 0x38)) >> (ulonglong)bVar7)) : 0));
      uVar23 = (uint)uVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (int)(uVar3 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      uVar26 = (*(ulonglong *)(gen_frame + 0x48)) >> (ulonglong)uVar5;
      (*(ulonglong *)(gen_frame + 0x48)) = uVar26;
      ((short *)(gen_frame + 0x0))[2] = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                    (bVar8 & 0x1f);
      uVar5 = iVar24 * 2;
      bVar7 = (byte)uVar5;
      ((short *)(gen_frame + 0x0))[3] = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f)
                           ) >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = (uint)uVar26;
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - ((int)uVar5 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0));
      (*(undefined4 *)(gen_frame + 0x2c)) = (int)(uVar2 >> 0x20);
      uVar2 = uVar2 | ((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((uVar3 >> (ulonglong)bVar7)) : 0));
      uVar23 = (uint)uVar2;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (int)(uVar2 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      (*(ulonglong *)(gen_frame + 0x48)) = uVar26 >> (ulonglong)uVar5;
      uVar3 = (*(ulonglong *)(gen_frame + 0x48));
      (*(short *)(gen_frame + 0x8)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = iVar24 * 2;
      bVar7 = (byte)iVar24;
      (*(short *)(gen_frame + 0xa)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = (uint)(uVar26 >> (ulonglong)uVar5);
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - (iVar24 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0)) |
              ((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((uVar2 >> (ulonglong)bVar7)) : 0));
      uVar6 = (undefined4)(uVar2 >> 0x20);
      bVar7 = (byte)uVar2 & 0xf;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = uVar6;
      (*(ulonglong *)(gen_frame + 0x38)) = CONCAT44(uVar6,(uint)(*(ulonglong *)(gen_frame + 0x38)));
      bVar8 = 0x10 - (bVar7 + 2);
      (*(short *)(gen_frame + 0xc)) = (short)(((ushort)((int)uVar2 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      (*(short *)(gen_frame + 0xe)) = (short)((short)((int)uVar2 >> bVar7 + 4) * 4 << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = (*(int *)(gen_frame + 0x5c));
      (*(ulonglong *)(gen_frame + 0x48)) = uVar3;
    }
    sVar15 = (*(short *)(gen_frame + 0xc));
    uVar5 = iVar24 + (*(uint *)(gen_frame + 0x58));
    (*(ulonglong *)(gen_frame + 0x40)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) = *((undefined1 *)GEN_TOP((uVar5 - 9)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 1)) = *((undefined1 *)GEN_TOP((uVar5 - 10)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 2)) = *((undefined1 *)GEN_TOP((uVar5 - 0xb)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 3)) = *((undefined1 *)GEN_TOP((uVar5 - 0xc)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((uVar5 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP((uVar5 - 0xb))),
                           CONCAT11(*((undefined1 *)GEN_TOP((uVar5 - 10))),*((undefined1 *)GEN_TOP((uVar5 - 9))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = *((undefined1 *)GEN_TOP((uVar5 - 0xd)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 5)) = *((undefined1 *)GEN_TOP((uVar5 - 0xe)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 6)) = *((undefined1 *)GEN_TOP((uVar5 - 0xf)));
    (*(ulonglong *)(gen_frame + 0x30)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 7)) = *((undefined1 *)GEN_TOP((uVar5 - 0x10)));
    (*(ulonglong *)(gen_frame + 0x40)) = CONCAT17(*((undefined1 *)GEN_TOP((uVar5 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((uVar5 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((uVar5 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((uVar5 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x40))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 0)) = *((undefined1 *)GEN_TOP((uVar5 - 1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 1)) = *((undefined1 *)GEN_TOP((uVar5 - 2)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 2)) = *((undefined1 *)GEN_TOP((uVar5 - 3)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 3)) = *((undefined1 *)GEN_TOP((uVar5 - 4)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((uVar5 - 4))),
                  CONCAT12(*((undefined1 *)GEN_TOP((uVar5 - 3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((uVar5 - 2))),*((undefined1 *)GEN_TOP((uVar5 - 1))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 4)) = *((undefined1 *)GEN_TOP((uVar5 - 5)));
    (*(uint *)(gen_frame + 0x58)) = uVar5;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 5)) = *((undefined1 *)GEN_TOP((uVar5 - 6)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 6)) = *((undefined1 *)GEN_TOP((uVar5 - 7)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 7)) = *((undefined1 *)GEN_TOP((uVar5 - 8)));
    (*(ulonglong *)(gen_frame + 0x30)) = CONCAT17(*((undefined1 *)GEN_TOP((uVar5 - 8))),
                        CONCAT16(*((undefined1 *)GEN_TOP((uVar5 - 7))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((uVar5 - 6))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((uVar5 - 5))),(uint)(*(ulonglong *)(gen_frame + 0x30))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      sVar16 = (*(short *)(gen_frame + 0x1e));
      sVar25 = (*(short *)(gen_frame + 0x1c));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d8a1ab;
    }
    else {
LAB_00d8a1ab: ;
      iVar24 = ((uint)(*(ulonglong *)(gen_frame + 0x30)) & 0xf) + 2;
      cVar4 = (char)iVar24;
      bVar8 = 0x10 - cVar4;
      uVar5 = iVar24 * 2;
      (*(short *)(gen_frame + 0x10)) = (short)(((ushort)((int)(uint)(*(ulonglong *)(gen_frame + 0x30)) >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
      bVar7 = (byte)uVar5;
      (*(short *)(gen_frame + 0x12)) = (short)((short)((int)(uint)(*(ulonglong *)(gen_frame + 0x30)) >> (char)((uint)(*(ulonglong *)(gen_frame + 0x30)) & 0xf) + 4) * 4 <<
                        (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar2 = (ulonglong)(byte)(cVar4 * -2 + 0x40);
      uVar3 = ((ulonglong)((uVar2 < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - ((int)uVar5 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x40))) <<
              uVar2)) : 0)) | ((ulonglong)(((ulonglong)bVar7 < 0x40) ? (((*(ulonglong *)(gen_frame + 0x30)) >> (ulonglong)bVar7)) : 0));
      uVar23 = (uint)uVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 4)) = (int)(uVar3 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      uVar26 = (*(ulonglong *)(gen_frame + 0x40)) >> (ulonglong)uVar5;
      (*(ulonglong *)(gen_frame + 0x40)) = uVar26;
      (*(short *)(gen_frame + 0x14)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar5 = iVar24 * 2;
      bVar7 = (byte)uVar5;
      (*(short *)(gen_frame + 0x16)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) = (uint)uVar26;
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - ((int)uVar5 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x40))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0));
      (*(undefined4 *)(gen_frame + 0x24)) = (int)(uVar2 >> 0x20);
      uVar2 = uVar2 | ((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((uVar3 >> (ulonglong)bVar7)) : 0));
      uVar23 = (uint)uVar2;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 4)) = (int)(uVar2 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      (*(ulonglong *)(gen_frame + 0x40)) = uVar26 >> (ulonglong)uVar5;
      uVar3 = (*(ulonglong *)(gen_frame + 0x40));
      (*(short *)(gen_frame + 0x18)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = iVar24 * 2;
      bVar7 = (byte)iVar24;
      (*(short *)(gen_frame + 0x1a)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) = (uint)(uVar26 >> (ulonglong)uVar5);
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - (iVar24 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x40))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0)) |
              ((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((uVar2 >> (ulonglong)bVar7)) : 0));
      uVar6 = (undefined4)(uVar2 >> 0x20);
      bVar7 = (byte)uVar2 & 0xf;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 4)) = uVar6;
      (*(ulonglong *)(gen_frame + 0x30)) = CONCAT44(uVar6,(uint)(*(ulonglong *)(gen_frame + 0x30)));
      bVar8 = 0x10 - (bVar7 + 2);
      sVar25 = (short)(((ushort)((int)uVar2 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      sVar16 = (short)((short)((int)uVar2 >> bVar7 + 4) * 4 << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar5 = (*(uint *)(gen_frame + 0x58));
      sVar15 = (*(short *)(gen_frame + 0xc));
      (*(ulonglong *)(gen_frame + 0x40)) = uVar3;
    }
    iVar24 = 3;
    do {
      uVar9 = ((short *)(gen_frame + 0x0))[1] + ((short *)(gen_frame + 0x0))[0];
      sVar17 = ((short *)(gen_frame + 0x0))[2] + uVar9;
      (*(uint *)(gen_frame + 0x58)) = (uint)uVar9;
      ((short *)(gen_frame + 0x0))[1] = uVar9;
      sVar10 = ((short *)(gen_frame + 0x0))[3] + sVar17;
      ((short *)(gen_frame + 0x0))[2] = sVar17;
      sVar18 = (*(short *)(gen_frame + 0x8)) + sVar10;
      ((short *)(gen_frame + 0x0))[3] = sVar10;
      sVar11 = (*(short *)(gen_frame + 0xa)) + sVar18;
      (*(short *)(gen_frame + 0x8)) = sVar18;
      sVar15 = sVar15 + sVar11;
      sVar19 = (*(short *)(gen_frame + 0xe)) + sVar15;
      (*(short *)(gen_frame + 0xa)) = sVar11;
      sVar12 = (*(short *)(gen_frame + 0x10)) + sVar19;
      (*(short *)(gen_frame + 0xe)) = sVar19;
      sVar20 = (*(short *)(gen_frame + 0x12)) + sVar12;
      (*(short *)(gen_frame + 0x10)) = sVar12;
      sVar13 = (*(short *)(gen_frame + 0x14)) + sVar20;
      (*(short *)(gen_frame + 0x12)) = sVar20;
      sVar21 = (*(short *)(gen_frame + 0x16)) + sVar13;
      (*(short *)(gen_frame + 0x14)) = sVar13;
      sVar14 = (*(short *)(gen_frame + 0x18)) + sVar21;
      (*(short *)(gen_frame + 0x16)) = sVar21;
      sVar22 = (*(short *)(gen_frame + 0x1a)) + sVar14;
      sVar25 = sVar25 + sVar22;
      sVar16 = sVar16 + sVar25;
      iVar24 = iVar24 - 1;
      (*(short *)(gen_frame + 0x18)) = sVar14;
      (*(short *)(gen_frame + 0x1a)) = sVar22;
    } while (iVar24 != 0);
    ((short *)(gen_frame + 0x0))[0] = ((short *)(gen_frame + 0x0))[0] >> 2;
    ((short *)(gen_frame + 0x0))[1] = (short)uVar9 >> 2;
    ((short *)(gen_frame + 0x0))[2] = sVar17 >> 2;
    ((short *)(gen_frame + 0x0))[3] = sVar10 >> 2;
    (*(short *)(gen_frame + 0x8)) = sVar18 >> 2;
    (*(short *)(gen_frame + 0xa)) = sVar11 >> 2;
    (*(short *)(gen_frame + 0xe)) = sVar19 >> 2;
    (*(short *)(gen_frame + 0x10)) = sVar12 >> 2;
    (*(short *)(gen_frame + 0x12)) = sVar20 >> 2;
    (*(short *)(gen_frame + 0x14)) = sVar13 >> 2;
    (*(short *)(gen_frame + 0x16)) = sVar21 >> 2;
    (*(short *)(gen_frame + 0x18)) = sVar14 >> 2;
    (*(short *)(gen_frame + 0x1a)) = sVar22 >> 2;
    (*(short *)(gen_frame + 0x1e)) = sVar16 >> 2;
    (*(short *)(gen_frame + 0xc)) = sVar15 >> 2;
    (*(short *)(gen_frame + 0x1c)) = sVar25 >> 2;
    *((short *)GEN_TOP((param_3 + (*(int *)(gen_frame + 0x64)) * 2))) = *(*(short * PTR32 *)(gen_frame + 0x54));
    *((short *)GEN_TOP((param_3 + 0x20 + (*(int *)(gen_frame + 0x64)) * 2))) = *(*(short * PTR32 *)(gen_frame + 0x50));
    iVar24 = (*(int *)(gen_frame + 0x64)) + 1;
    (*(int *)(gen_frame + 0x64)) = iVar24;
    if (0xf < iVar24) {
      return uVar5;
    }
  } while( true );
}

/* ref: Global::DecodeChannelThunk */
GEN_LIB GEN_FRAME uint F_00d8a4f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8a4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d89760(param_1,param_2,param_3);
  return uVar1;
}

/* ref: Global::DecodeChannelPairThunk */
GEN_LIB GEN_FRAME uint F_00d8a500(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8a500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d89e10(param_1,param_2,param_3);
  return uVar1;
}

/* ref: Global::DecodeDeltaBlocksThunk */
GEN_LIB GEN_FRAME unsigned int F_00d8a510(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8a510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d890c0(param_1,param_2);
  return;
}

/* ref: Global::WriteBits */
GEN_LIB GEN_FRAME uint F_00d8a520(GEN_P(uint * in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8a520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *in_esi;
  uVar3 = uVar2 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  iVar4 = param_3;
  if (uVar3 != 0) {
    iVar5 = param_4;
    if ((int)(8 - uVar3) < param_4) {
      iVar5 = 8 - uVar3;
    }
    pbVar1 = ((byte *)GEN_TOP((((int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3) + param_2)));
    iVar4 = param_3 >> ((byte)iVar5 & 0x1f);
    *pbVar1 = *pbVar1 | ((('\x01' << ((byte)iVar5 & 0x1f)) - ((byte)(iVar5 >> 5) & 1)) - 1 &
                        (byte)param_3) << ((byte)uVar3 & 0x1f);
    param_4 = param_4 - iVar5;
    *in_esi = *in_esi + iVar5;
  }
  iVar5 = ((int)(param_4 + (param_4 >> 0x1f & 7U)) >> 3) * 8;
  uVar2 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
  if (0 < (int)uVar2) {
    param_4 = param_4 + uVar2 * -8;
    uVar3 = uVar2;
    do {
      uVar2 = (int)(*in_esi + ((int)*in_esi >> 0x1f & 7U)) >> 3;
      *((char *)GEN_TOP((uVar2 + param_2))) = (char)iVar4;
      *in_esi = *in_esi + 8;
      iVar4 = iVar4 >> 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (0 < param_4) {
    uVar2 = (int)(*in_esi + ((int)*in_esi >> 0x1f & 7U)) >> 3;
    *((byte *)GEN_TOP((uVar2 + param_2))) =
         (('\x01' << ((byte)param_4 & 0x1f)) - ((byte)(param_4 >> 5) & 1)) - 1 & (byte)iVar4;
    *in_esi = *in_esi + param_4;
  }
  return uVar2;
}

/* ref: Global::EncodeDeltaPairs */
GEN_LIB GEN_FRAME uint F_00d8a610(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8a610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x19, 7, 4);
  short sVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  int in_ecx;
  uint uVar5;
  
  iVar4 = 0;
  uVar2 = param_2 & 0x80000001;
  (*(undefined1 *)(gen_frame + 0x1)) = 0;
  (*(undefined8 *)(gen_frame + 0x2)) = 0;
  (*(undefined4 *)(gen_frame + 0xa)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x11)) = 0;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if (uVar2 != 0) {
    *((undefined2 *)GEN_TOP((param_1 + param_2 * 2))) = 0;
  }
  if (0 < (int)param_2) {
    do {
      sVar1 = *((short *)GEN_TOP((param_1 + iVar4 * 2)));
      in_ecx = 0;
      while ((uVar2 = F_00d88cb0((int)sVar1,in_ecx), (char)uVar2 == '\0' ||
             (uVar2 = F_00d88cb0((int)*((short *)GEN_TOP((param_1 + 2 + iVar4 * 2))),in_ecx),
             (char)uVar2 == '\0'))) {
        in_ecx = in_ecx + 1;
      }
      F_00d8a520(&(*(int *)(gen_frame + 0x11)),&(*(undefined1 *)(gen_frame + 0x1)),in_ecx,4);
      F_00d8a520(&(*(int *)(gen_frame + 0x11)),&(*(undefined1 *)(gen_frame + 0x1)),(int)*((short *)GEN_TOP((param_1 + iVar4 * 2))),in_ecx);
      F_00d8a520(&(*(int *)(gen_frame + 0x11)),&(*(undefined1 *)(gen_frame + 0x1)),(int)*((short *)GEN_TOP((param_1 + 2 + iVar4 * 2))),in_ecx);
      iVar4 = iVar4 + 2;
    } while (iVar4 < (int)param_2);
  }
  uVar2 = (int)(((*(int *)(gen_frame + 0x11)) + 7 >> 0x1f & 7U) + (*(int *)(gen_frame + 0x11)) + 7) >> 3;
  if (0 < (int)uVar2) {
    puVar3 = (gen_frame + 0x0) + uVar2;
    uVar5 = uVar2;
    do {
      *((undefined1 *)GEN_TOP(*param_3)) = *puVar3;
      *param_3 = *param_3 + 1;
      puVar3 = puVar3 - 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return uVar2;
}

/* ref: Global::EncodeDeltaBlock */
GEN_LIB GEN_FRAME byte F_00d8a710(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int * in_esi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8a710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (8 < in_eax) {
    uVar2 = F_00d8a610(param_3,8,in_esi);
    uVar3 = F_00d8a610(param_3 + 0x10,in_eax - 8,in_esi);
    bVar1 = (char)uVar3 - 1;
    *param_4 = ((char)uVar2 - 1) * '\x10' | bVar1;
    return bVar1;
  }
  uVar2 = F_00d8a610(param_3,in_eax,in_esi);
  *((undefined1 *)GEN_TOP(*in_esi)) = 0;
  *in_esi = *in_esi + 1;
  *param_4 = ((char)uVar2 - 1) * '\x10';
  return 0;
}

/* ref: FUN_00d8a780 */
GEN_LIB GEN_NOFRAME uint F_00d8a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd8a780u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  GEN_FRAME_DECL(0x230, 0);
  short * psVar1;
  undefined2 * puVar2;
  undefined * phVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  char * pcVar9;
  char * pcVar10;
  char * pcVar11;
  
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[0]);
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  (*(int *)(gen_frame + 0x214)) = (int)(*(undefined2 * PTR32 *)&gen_args[3]);
  if (0 < (*(int *)&gen_args[2])) {
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    (*(int *)(gen_frame + 0x218)) = (*(int *)&gen_args[2]);
    do {
      iVar4 = 0;
      do {
        psVar1 = ((short *)GEN_TOP(((int)puVar5 + iVar4 * 2)));
        *psVar1 = *psVar1 << 2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
      (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) = ((undefined4 *)GEN_TOP(0x3));
      do {
        psVar1 = ((short *)GEN_TOP(((int)puVar5 + 0x1a)));
        iVar4 = 3;
        do {
          psVar1[2] = psVar1[2] - psVar1[1];
          psVar1[1] = psVar1[1] - *psVar1;
          *psVar1 = *psVar1 - psVar1[-1];
          psVar1[-1] = psVar1[-1] - psVar1[-2];
          psVar1[-2] = psVar1[-2] - psVar1[-3];
          psVar1 = psVar1 - 5;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        puVar7 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x21c)) - 1)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) = puVar7;
      } while (puVar7 != ((undefined4 *)GEN_TOP(0x0)));
      iVar4 = 0;
      do {
        psVar1 = ((short *)GEN_TOP(((int)puVar5 + iVar4 * 2)));
        *psVar1 = *psVar1 >> 2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
      puVar5 = puVar5 + 8;
      iVar4 = (*(int *)(gen_frame + 0x218)) - 1;
      (*(int *)(gen_frame + 0x218)) = iVar4;
    } while (iVar4 != 0);
  }
  puVar2 = ((undefined2 *)GEN_TOP(((int)(*(undefined2 * PTR32 *)&gen_args[3]) + 0x10)));
  iVar8 = 0;
  (*(int *)(gen_frame + 0x218)) = (int)(*(undefined2 * PTR32 *)&gen_args[3]);
  iVar4 = (int)(*(undefined2 * PTR32 *)&gen_args[3]);
  if (0 < (*(int *)&gen_args[2])) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) = ((undefined4 *)(gen_frame + 0x0));
    (*(undefined2 * PTR32 *)&gen_args[3]) = puVar2;
    do {
      F_00d8a710((*(int *)&gen_args[1]),&(*(undefined2 * PTR32 *)&gen_args[3]),(*(undefined4 * PTR32 *)(gen_frame + 0x21c)),(*(int *)(gen_frame + 0x218)) + iVar8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) + 8;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (*(int *)&gen_args[2]));
    puVar2 = (*(undefined2 * PTR32 *)&gen_args[3]);
    iVar4 = (*(int *)(gen_frame + 0x218));
    if (0xf < iVar8) goto LAB_00d8a897;
  }
  do {
    *((undefined1 *)GEN_TOP((iVar8 + iVar4))) = 0;
    *puVar2 = 0;
    iVar8 = iVar8 + 1;
    puVar2 = puVar2 + 1;
    (*(undefined2 * PTR32 *)&gen_args[3]) = puVar2;
  } while (iVar8 < 0x10);
LAB_00d8a897: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0x9832bf32,((char *)REFP(0x113857c)));
  F_00da0a80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0)),0x200);
  iVar6 = (int)(*(undefined2 * PTR32 *)&gen_args[3]) - (*(int *)(gen_frame + 0x214));
  iVar8 = (*(int *)&gen_args[1]) * (*(int *)&gen_args[2]);
  iVar4 = (iVar6 * 100) / (iVar8 * 2);
  pcVar11 = ((char *)REFP(0x113856c));
  pcVar10 = ((char *)REFP(0x1138560));
  pcVar9 = ((char *)REFP(0x1138544));
  phVar3 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,((char *)REFP(0x113853c)))));
  phVar3 = ((undefined *)GEN_TOP(F_00d9ff40(phVar3 GEN_EDX_ARG,iVar8)));
  phVar3 = ((undefined *)GEN_TOP(F_00d9fe80(phVar3 GEN_EDX_ARG,pcVar9)));
  phVar3 = ((undefined *)GEN_TOP(F_00d9ff40(phVar3 GEN_EDX_ARG,iVar6)));
  phVar3 = ((undefined *)GEN_TOP(F_00d9fe80(phVar3 GEN_EDX_ARG,pcVar10)));
  phVar3 = ((undefined *)GEN_TOP(F_00d9ff40(phVar3 GEN_EDX_ARG,iVar4)));
  F_00d9fe80(phVar3 GEN_EDX_ARG,pcVar11);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined4 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1138500)),0x135);
  F_00d9fda0(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG);
  return (uint)(*(undefined2 * PTR32 *)&gen_args[3]);
}

/* ref: FUN_00d8a970 */
GEN_LIB GEN_FRAME uint F_00d8a970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8a970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00d8a780(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00d8a980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8a980(GEN_P(char * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8a980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = (*param_1 != '\0') == (bool)param_3;
  return param_2;
}

/* ref: FUN_00d8aa50 */
GEN_LIB GEN_FRAME float F_00d8aa50(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd8aa50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return SQRT(param_1);
}

/* ref: FUN_00d8aa60 */
GEN_LIB GEN_NOFRAME float10 F_00d8aa60(GEN_P(double in_xmm0, double gen_a0))
{
  GEN_ENTER(0xd8aa60u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(double in_xmm0 = (double)gen_a0;)
  double dVar2;
  
  dVar2 = (GEN_X87MATH((((double)GEN_TOD(gen_bits2f((uint)(ulonglong)gen_d2bits(in_xmm0))))),0xe));
  return (float10)dVar2;
}

/* ref: FUN_00d8aa80 */
GEN_LIB GEN_FRAME uint F_00d8aa80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd8aa80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x375f00;
  ((uint *)(gen_frame + 0x0))[0] = 1;
  ((uint *)(gen_frame + 0x0))[1] = 1;
  ((uint *)(gen_frame + 0x0))[2] = 2;
  ((uint *)(gen_frame + 0x0))[3] = 6;
  ((uint *)(gen_frame + 0x0))[4] = 0x18;
  ((uint *)(gen_frame + 0x0))[5] = 0x78;
  ((uint *)(gen_frame + 0x0))[6] = 0x2d0;
  ((uint *)(gen_frame + 0x0))[7] = 0x13b0;
  ((uint *)(gen_frame + 0x0))[8] = 0x9d80;
  ((uint *)(gen_frame + 0x0))[9] = 0x58980;
  ((uint *)(gen_frame + 0x0))[10] = 0x375f00;
  if (param_1 < 1) {
    return 1;
  }
  if (10 < param_1) {
    iVar2 = 0xb;
    if (10 < param_1) {
      do {
        uVar1 = uVar1 * iVar2;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= param_1);
    }
    return uVar1;
  }
  return ((uint *)(gen_frame + 0x0))[(int)(param_1)];
}

/* ref: FUN_00d8ab10 */
GEN_LIB GEN_FRAME uint F_00d8ab10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8ab10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00d8aa80(param_1 - param_2);
  uVar2 = F_00d8aa80(param_2);
  uVar3 = F_00d8aa80(param_1);
  return (int)uVar3 / (int)(uVar1 * uVar2);
}

/* ref: FUN_00d8ab50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ab50(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd8ab50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_00d8ab80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ab80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8ab80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00d8abb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8abb0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8abb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = param_2[1] + in_ecx[1];
  in_ecx[2] = param_2[2] + in_ecx[2];
  in_ecx[3] = param_2[3] + in_ecx[3];
  return (uint)in_ecx;
}

/* ref: FUN_00d8ac00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ac00(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8ac00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = *in_ecx - *param_2;
  in_ecx[1] = in_ecx[1] - param_2[1];
  in_ecx[2] = in_ecx[2] - param_2[2];
  in_ecx[3] = in_ecx[3] - param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00d8ac50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ac50(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd8ac50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *in_ecx = *in_ecx * param_2;
  in_ecx[1] = in_ecx[1] * param_2;
  in_ecx[2] = in_ecx[2] * param_2;
  in_ecx[3] = in_ecx[3] * param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d8aca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8aca0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd8aca0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  
  fVar1 = REFG(float, 0x1087f04) / param_2;
  *in_ecx = *in_ecx * fVar1;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar1 * in_ecx[2];
  in_ecx[3] = fVar1 * in_ecx[3];
  return (uint)in_ecx;
}

/* ref: FUN_00d8acf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8acf0(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8acf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined8 * puVar1;
  
  (*(undefined8 *)(gen_frame + 0x0)) = *in_ecx;
  (*(undefined8 *)(gen_frame + 0x8)) = in_ecx[1];
  puVar1 = ((undefined8 *)GEN_TOP(F_00d8abb0(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_3)));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return (uint)param_2;
}

/* ref: FUN_00d8ad40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ad40(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8ad40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined8 * puVar1;
  
  (*(undefined8 *)(gen_frame + 0x0)) = *in_ecx;
  (*(undefined8 *)(gen_frame + 0x8)) = in_ecx[1];
  puVar1 = ((undefined8 *)GEN_TOP(F_00d8ac00(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_3)));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return (uint)param_2;
}

/* ref: FUN_00d8ad90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ad90(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd8ad90u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined8 * puVar1;
  
  (*(undefined8 *)(gen_frame + 0x0)) = *in_ecx;
  (*(undefined8 *)(gen_frame + 0x8)) = in_ecx[1];
  puVar1 = ((undefined8 *)GEN_TOP(F_00d8ac50(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_3)));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return (uint)param_2;
}

/* ref: FUN_00d8ade0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ade0(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd8ade0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined8 * puVar1;
  
  (*(undefined8 *)(gen_frame + 0x0)) = *in_ecx;
  (*(undefined8 *)(gen_frame + 0x8)) = in_ecx[1];
  puVar1 = ((undefined8 *)GEN_TOP(F_00d8aca0(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_3)));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return (uint)param_2;
}

/* ref: FUN_00d8ae30 */
GEN_LIB GEN_FRAME uint F_00d8ae30(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8ae30u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00d8ad90(param_3 GEN_EDX_ARG,param_1,param_2);
  return param_1;
}

/* ref: FUN_00d8ae50 */
GEN_LIB GEN_FRAME uint F_00d8ae50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8ae50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00d8ade0(param_3 GEN_EDX_ARG,param_1,param_2);
  return param_1;
}

/* ref: FUN_00d8b0a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8b0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd8b0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (GEN_X87MATH(((double)*((float *)GEN_TOP(((int)this + 0xc)))),0xe));
  dVar3 = (GEN_X87MATH(((double)*((float *)GEN_TOP(((int)this + 8)))),0xe));
  dVar4 = (GEN_X87MATH(((double)*((float *)GEN_TOP(((int)this + 4)))),0xe));
  dVar5 = (GEN_X87MATH(((double)*(float *)this),0xe));
  F_00d8ab50(param_1 GEN_EDX_FWD,(float)dVar5,(float)dVar4,(float)dVar3,(float)dVar2);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00d8b140 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d8b140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8b140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + param_2 * 4)));
}

/* ref: FUN_00d8b150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8b150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8b150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d8b160 */
GEN_LIB GEN_FRAME double F_00d8b160(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8b160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  return GEN_X87(((double)GEN_TOD(((float10)param_2[3] * (float10)param_1[3] +
                 ((float10)param_2[2] * (float10)param_1[2] +
                 ((float10)*param_2 * (float10)*param_1 + (float10)param_2[1] * (float10)param_1[1])
                 )))));
}

/* ref: FUN_00d8b1d0 */
GEN_LIB GEN_FRAME uint F_00d8b1d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8b1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float * pfVar2;
  
  F_00d8ab50(param_1 GEN_EDX_ARG,0.0,0.0,0.0,0.0);
  pfVar2 = param_3;
  if ((float10)*param_3 < (float10)*param_2) {
    pfVar2 = param_2;
  }
  fVar1 = *pfVar2;
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,0)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_3[1] < (float10)param_2[1]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[1];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,1)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_3[2] < (float10)param_2[2]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[2];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,2)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_3[3] < (float10)param_2[3]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[3];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,3)));
  *pfVar2 = fVar1;
  return param_1;
}

/* ref: FUN_00d8b2f0 */
GEN_LIB GEN_FRAME uint F_00d8b2f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8b2f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float * pfVar2;
  
  F_00d8ab50(param_1 GEN_EDX_ARG,0.0,0.0,0.0,0.0);
  pfVar2 = param_3;
  if ((float10)*param_2 < (float10)*param_3) {
    pfVar2 = param_2;
  }
  fVar1 = *pfVar2;
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,0)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_2[1] < (float10)param_3[1]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[1];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,1)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_2[2] < (float10)param_3[2]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[2];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,2)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_2[3] < (float10)param_3[3]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[3];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,3)));
  *pfVar2 = fVar1;
  return param_1;
}

/* ref: FUN_00d8b440 */
GEN_LIB GEN_FRAME uint F_00d8b440(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8b440u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  float * pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  iVar3 = *param_4;
  pfVar1 = ((float *)GEN_TOP((iVar3 + 4 + param_1 * 4)));
  bVar8 = GEN_ISNAN(param_3) || GEN_ISNAN(*pfVar1);
  if (bVar8 != (bVar8 || param_3 == *pfVar1)) {
    return param_1;
  }
  iVar4 = param_2 + param_1 + 1;
  uVar6 = param_1 + 1;
  uVar7 = param_2;
  do {
    while( true ) {
      uVar5 = iVar4 / 2;
      fVar2 = *((float *)GEN_TOP((iVar3 + uVar5 * 4)));
      if (!(param_3 < fVar2)) break;
LAB_00d8b485: ;
      iVar4 = uVar5 + uVar7;
      uVar6 = uVar5;
    }
    if (!(*((float *)GEN_TOP((iVar3 + 4 + uVar5 * 4))) <= param_3)) {
      return uVar5;
    }
    if (param_3 < fVar2) goto LAB_00d8b485;
    iVar4 = uVar6 + uVar5;
    uVar7 = uVar5;
  } while( true );
}

/* ref: FUN_00d8b4a0 */
GEN_LIB GEN_FRAME unsigned int F_00d8b4a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd8b4a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar5 = 1;
  *param_5 = GEN_FLT_TO(*param_5, REFG(float, 0x1087f04));
  if (0 < param_3) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((*param_4 + param_1 * 4)));
    (*(float * PTR32 *)(gen_frame + 0x2c)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 1;
    do {
      pfVar2 = (*(float * PTR32 *)(gen_frame + 0x2c));
      ((float *)(gen_frame + 0x0))[(int)(iVar5)] = param_2 - *(*(float * PTR32 *)(gen_frame + 0x28));
      iVar4 = 0;
      (&(*(float *)(gen_frame + 0x10)))[iVar5] = *pfVar2 - param_2;
      fVar9 = 0.0;
      if (3 < iVar5) {
        (*(int *)(gen_frame + 0x24)) = (int)&(*(float *)(gen_frame + 0x10)) - (int)param_5;
        (*(int *)(gen_frame + 0x20)) = (int)((float *)(gen_frame + 0x14)) - (int)param_5;
        pfVar2 = (float *)(param_5 + 2);
        pfVar3 = ((float *)(gen_frame + 0x14)) + iVar5 - 7;
        do {
          fVar1 = pfVar3[2];
          fVar7 = pfVar2[-2] / (((float *)(gen_frame + 0x14))[(int)(iVar4)] + fVar1);
          pfVar2[-2] = ((float *)(gen_frame + 0x14))[(int)(iVar4)] * fVar7 + fVar9;
          fVar9 = *((float *)GEN_TOP((((int)&(*(float *)(gen_frame + 0x10)) - (int)param_5) + (int)pfVar2)));
          fVar11 = pfVar3[1];
          fVar10 = pfVar2[-1] / (fVar9 + fVar11);
          fVar8 = *pfVar3;
          pfVar2[-1] = fVar9 * fVar10 + fVar1 * fVar7;
          fVar9 = *((float *)GEN_TOP((((int)((float *)(gen_frame + 0x14)) - (int)param_5) + (int)pfVar2)));
          fVar7 = *pfVar2 / (fVar9 + fVar8);
          *pfVar2 = fVar9 * fVar7 + fVar11 * fVar10;
          fVar1 = *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x14)) + (4 - (int)param_5) + (int)pfVar2)));
          fVar11 = pfVar2[1] / (fVar1 + pfVar3[-1]);
          fVar9 = fVar11 * pfVar3[-1];
          pfVar2[1] = fVar1 * fVar11 + fVar8 * fVar7;
          iVar4 = iVar4 + 4;
          pfVar2 = pfVar2 + 4;
          pfVar3 = pfVar3 - 4;
        } while (iVar4 < iVar5 - 3);
      }
      if (iVar4 < iVar5) {
        iVar6 = iVar5 - iVar4;
        pfVar2 = (float *)(param_5 + iVar4);
        pfVar3 = ((float *)(gen_frame + 0x0)) + iVar6;
        do {
          fVar1 = *((float *)GEN_TOP(((int)pfVar2 + ((int)((float *)(gen_frame + 0x14)) - (int)param_5))));
          fVar11 = *pfVar3;
          fVar8 = *pfVar2 / (fVar1 + fVar11);
          *pfVar2 = fVar1 * fVar8 + fVar9;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 - 1;
          iVar6 = iVar6 - 1;
          fVar9 = fVar11 * fVar8;
        } while (iVar6 != 0);
      }
      (*(float * PTR32 *)(gen_frame + 0x2c)) = (*(float * PTR32 *)(gen_frame + 0x2c)) + 1;
      param_5[iVar5] = (undefined4)gen_fl2bits(fVar9);
      iVar5 = iVar5 + 1;
      (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) - 1;
    } while (iVar5 <= param_3);
  }
  return;
}

/* ref: FUN_00d8b670 */
GEN_LIB GEN_FRAME uint F_00d8b670(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd8b670u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_FRAME_DECL_TOP(0xac, 4, 4);
  float * pfVar1;
  float fVar2;
  float * in_EAX = 0;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float * pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float * pfVar10;
  float * pfVar11;
  float fVar12;
  float * pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar16 = REFG(float, 0x1087f04);
  iVar7 = 1;
  ((float *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[0], REFG(float, 0x1087f04));
  if (0 < param_3) {
    pfVar13 = ((float *)(gen_frame + 0x10)) + 1;
    (*(float * PTR32 *)(gen_frame + 0x94)) = pfVar13;
    in_EAX = ((float *)GEN_TOP((*param_5 + param_1 * 4)));
    (*(float * PTR32 *)(gen_frame + 0x9c)) = pfVar13;
    (*(float * PTR32 *)(gen_frame + 0xa4)) = in_EAX + 1;
    (*(float * PTR32 *)(gen_frame + 0x98)) = in_EAX;
    do {
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0xa4));
      (*(float * PTR32 *)(gen_frame + 0x98)) = in_EAX;
      (*(float * PTR32 *)(gen_frame + 0x9c)) = pfVar13;
      ((float *)(gen_frame + 0x3c))[(int)(iVar7 + 5)] = param_2 - *in_EAX;
      iVar3 = 0;
      ((float *)(gen_frame + 0x3c))[(int)(iVar7 + 9)] = *pfVar5 - param_2;
      fVar20 = 0.0;
      if (3 < iVar7) {
        pfVar6 = ((float *)(gen_frame + 0x0)) + iVar7;
        pfVar5 = ((float *)(gen_frame + 0x3c)) + iVar7 + 3;
        do {
          fVar12 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 10)];
          fVar15 = pfVar5[2];
          fVar17 = fVar12 + fVar15;
          pfVar13[-1] = fVar17;
          fVar17 = pfVar6[-1] / fVar17;
          fVar19 = pfVar5[1];
          *pfVar6 = fVar12 * fVar17 + fVar20;
          fVar20 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 0xb)];
          fVar18 = fVar19 + fVar20;
          *pfVar13 = fVar18;
          fVar18 = pfVar6[3] / fVar18;
          fVar12 = *pfVar5;
          pfVar6[4] = fVar20 * fVar18 + fVar15 * fVar17;
          fVar15 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 0xc)];
          fVar17 = fVar15 + fVar12;
          pfVar13[1] = fVar17;
          fVar17 = pfVar6[7] / fVar17;
          fVar20 = pfVar5[-1];
          pfVar6[8] = fVar15 * fVar17 + fVar19 * fVar18;
          fVar15 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 0xd)];
          fVar19 = fVar15 + fVar20;
          pfVar13[2] = fVar19;
          fVar19 = pfVar6[0xb] / fVar19;
          pfVar6[0xc] = fVar15 * fVar19 + fVar12 * fVar17;
          iVar3 = iVar3 + 4;
          pfVar6 = pfVar6 + 0x10;
          pfVar13 = pfVar13 + 4;
          pfVar5 = pfVar5 - 4;
          fVar20 = fVar20 * fVar19;
        } while (iVar3 < iVar7 - 3);
      }
      if (iVar3 < iVar7) {
        pfVar13 = ((float *)(gen_frame + 0x3c)) + (iVar7 - iVar3) + 5;
        pfVar5 = ((float *)(gen_frame + 0x0)) + iVar3 + iVar7 * 4;
        pfVar6 = ((float *)(gen_frame + 0x0)) + iVar7 + iVar3 * 4;
        do {
          fVar12 = *pfVar13;
          fVar15 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 10)];
          fVar19 = fVar12 + fVar15;
          *pfVar5 = fVar19;
          fVar19 = pfVar6[-1] / fVar19;
          *pfVar6 = fVar15 * fVar19 + fVar20;
          iVar3 = iVar3 + 1;
          pfVar6 = pfVar6 + 4;
          pfVar5 = pfVar5 + 1;
          pfVar13 = pfVar13 - 1;
          fVar20 = fVar12 * fVar19;
        } while (iVar3 < iVar7);
      }
      (*(float * PTR32 *)(gen_frame + 0xa4)) = (*(float * PTR32 *)(gen_frame + 0xa4)) + 1;
      *(*(float * PTR32 *)(gen_frame + 0x94)) = fVar20;
      iVar7 = iVar7 + 1;
      in_EAX = (*(float * PTR32 *)(gen_frame + 0x98)) - 1;
      pfVar13 = (*(float * PTR32 *)(gen_frame + 0x9c)) + 4;
      (*(float * PTR32 *)(gen_frame + 0x98)) = in_EAX;
      (*(float * PTR32 *)(gen_frame + 0x9c)) = pfVar13;
      (*(float * PTR32 *)(gen_frame + 0x94)) = (*(float * PTR32 *)(gen_frame + 0x94)) + 5;
    } while (iVar7 <= param_3);
  }
  iVar7 = 0;
  if (-1 < param_3) {
    in_EAX = ((float *)GEN_TOP((param_3 + 1)));
    if (3 < (int)in_EAX) {
      uVar9 = param_3 + 1U >> 2;
      iVar7 = uVar9 * 4;
      pfVar13 = ((float *)(gen_frame + 0x10)) + param_3;
      pfVar5 = ((float *)GEN_TOP((param_6 + 8)));
      do {
        in_EAX = pfVar13 + 0x10;
        pfVar5[-2] = pfVar13[-4];
        uVar9 = uVar9 - 1;
        pfVar5[-1] = *pfVar13;
        *pfVar5 = pfVar13[4];
        pfVar5[1] = pfVar13[8];
        pfVar13 = in_EAX;
        pfVar5 = pfVar5 + 4;
      } while (uVar9 != 0);
    }
    if (iVar7 <= param_3) {
      in_EAX = ((float *)(gen_frame + 0x0)) + param_3 + iVar7 * 4;
      do {
        iVar7 = iVar7 + 1;
        *((float *)GEN_TOP((param_6 - 4 + iVar7 * 4))) = *in_EAX;
        in_EAX = in_EAX + 4;
      } while (iVar7 <= param_3);
    }
    fVar20 = REFG(float, 0x1090708);
    if (-1 < param_3) {
      (*(int *)(gen_frame + 0x7c)) = -param_3;
      fVar12 = gen_bits2f(1 - param_3);
      (*(int *)(gen_frame + 0x80)) = param_3;
      (*(float * PTR32 *)(gen_frame + 0xa4)) = ((float *)GEN_TOP(0xfffffffc));
      ((float *)(gen_frame + 0x64))[3] = fVar12;
      do {
        in_EAX = ((float *)GEN_TOP(0x0));
        (*(float * PTR32 *)(gen_frame + 0x88)) = ((float *)GEN_TOP(0x0));
        (*(float * PTR32 *)(gen_frame + 0x84)) = ((float *)GEN_TOP(0x1));
        ((float *)(gen_frame + 0x3c))[1] = fVar16;
        (*(int *)(gen_frame + 0x8c)) = 1;
        if (0 < param_4) {
          (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP(((int)gen_fl2bits(fVar12) + (*(int *)(gen_frame + 0x80)))));
          (*(float * PTR32 *)(gen_frame + 0x9c)) = (*(float * PTR32 *)(gen_frame + 0xa4));
          iVar7 = param_3 - 1;
          (*(int *)(gen_frame + 0x78)) = iVar7;
          (*(float * PTR32 *)(gen_frame + 0x90)) = ((float *)GEN_TOP((param_6 + 0x14 + (int)(*(float * PTR32 *)(gen_frame + 0xa4)))));
          do {
            fVar12 = 0.0;
            (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x7c)) + param_3;
            if ((*(int *)(gen_frame + 0x8c)) <= (*(int *)(gen_frame + 0x7c)) + param_3) {
              fVar12 = ((float *)(gen_frame + 0x3c))[(int)((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x88))) * 4 + 1)];
              fVar15 = ((float *)(gen_frame + 0x10))[(int)((*(int *)(gen_frame + 0x7c)) + iVar7 * 5)];
              ((float *)(gen_frame + 0x3c))[(int)((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x84))) * 4 + 1)] = fVar12 / fVar15;
              fVar12 = ((float *)(gen_frame + 0x0))[(int)((int)(*(float * PTR32 *)(gen_frame + 0x9c)) + iVar7)] * (fVar12 / fVar15);
            }
            iVar3 = (*(int *)(gen_frame + 0x7c)) + iVar7;
            (*(float * PTR32 *)(gen_frame + 0x94)) = ((float *)GEN_TOP(iVar3));
            pfVar13 = ((float *)GEN_TOP(0x1));
            if (iVar3 < -1) {
              pfVar13 = (*(float * PTR32 *)(gen_frame + 0x98));
            }
            if (iVar7 < (*(int *)(gen_frame + 0x7c)) + param_3 - 1) {
              (*(float * PTR32 *)(gen_frame + 0xa0)) = ((float *)GEN_TOP((*(int *)(gen_frame + 0x80))));
              pfVar5 = ((float *)GEN_TOP((*(int *)(gen_frame + 0x80))));
            }
            else {
              pfVar5 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x8c)) - 1)));
              (*(float * PTR32 *)(gen_frame + 0xa0)) = pfVar5;
            }
            in_EAX = (*(float * PTR32 *)(gen_frame + 0x88));
            pfVar6 = (*(float * PTR32 *)(gen_frame + 0x84));
            if ((int)pfVar13 <= (int)pfVar5) {
              if (3 < ((int)pfVar5 - (int)pfVar13) + 1) {
                iVar8 = (((int)pfVar5 - (int)pfVar13) - 3U >> 2) + 1;
                pfVar6 = ((float *)(gen_frame + 0x3c)) + (int)pfVar13 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x84))) * 4 + 1;
                pfVar10 = ((float *)(gen_frame + 0x10)) + iVar3 + iVar7 * 4 + (int)pfVar13 + 1;
                pfVar4 = ((float *)(gen_frame + 0x3c)) + (int)pfVar13 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x88))) * 4 + 1;
                pfVar11 = ((float *)(gen_frame + 0x10)) + iVar7 + (iVar3 + (int)pfVar13) * 4;
                pfVar13 = ((float *)GEN_TOP(((int)pfVar13 + iVar8 * 4)));
                (*(int *)(gen_frame + 0x78)) = iVar7;
                (*(float * PTR32 *)(gen_frame + 0xa0)) = pfVar5;
                do {
                  fVar15 = pfVar11[-4];
                  *pfVar6 = (*pfVar4 - pfVar4[-1]) / pfVar10[-1];
                  fVar19 = *pfVar6;
                  pfVar6[1] = (pfVar4[1] - *pfVar4) / *pfVar10;
                  fVar17 = *pfVar11;
                  pfVar5 = pfVar6 + 1;
                  fVar18 = pfVar11[4];
                  pfVar6[2] = (pfVar4[2] - pfVar4[1]) / pfVar10[1];
                  pfVar1 = pfVar6 + 2;
                  fVar14 = (pfVar4[3] - pfVar4[2]) / pfVar10[2];
                  fVar2 = pfVar11[8];
                  pfVar6[3] = fVar14;
                  pfVar11 = pfVar11 + 0x10;
                  pfVar4 = pfVar4 + 4;
                  pfVar10 = pfVar10 + 4;
                  pfVar6 = pfVar6 + 4;
                  iVar8 = iVar8 - 1;
                  fVar12 = fVar2 * fVar14 +
                           (((fVar15 * fVar19 + fVar12) + fVar17 * *pfVar5) + fVar18 * *pfVar1);
                  pfVar5 = (*(float * PTR32 *)(gen_frame + 0xa0));
                  iVar7 = (*(int *)(gen_frame + 0x78));
                } while (iVar8 != 0);
              }
              in_EAX = (*(float * PTR32 *)(gen_frame + 0x88));
              pfVar6 = (*(float * PTR32 *)(gen_frame + 0x84));
              if ((int)pfVar13 <= (int)pfVar5) {
                (*(float * PTR32 *)(gen_frame + 0xa0)) = ((float *)(gen_frame + 0x3c)) + (int)pfVar13 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x84))) * 4 + 1;
                pfVar10 = ((float *)(gen_frame + 0x10)) + (int)(*(float * PTR32 *)(gen_frame + 0x94)) + iVar7 * 4 + (int)pfVar13;
                pfVar4 = ((float *)(gen_frame + 0x3c)) + (int)pfVar13 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x88))) * 4 + 1;
                pfVar11 = ((float *)(gen_frame + 0x0)) + iVar7 + ((int)(*(float * PTR32 *)(gen_frame + 0x94)) + (int)pfVar13) * 4;
                iVar3 = ((int)pfVar5 - (int)pfVar13) + 1;
                do {
                  fVar19 = (*pfVar4 - pfVar4[-1]) / *pfVar10;
                  *(*(float * PTR32 *)(gen_frame + 0xa0)) = fVar19;
                  fVar15 = *pfVar11;
                  pfVar11 = pfVar11 + 4;
                  pfVar4 = pfVar4 + 1;
                  pfVar10 = pfVar10 + 1;
                  iVar3 = iVar3 - 1;
                  fVar12 = fVar12 + fVar19 * fVar15;
                  (*(float * PTR32 *)(gen_frame + 0xa0)) = (*(float * PTR32 *)(gen_frame + 0xa0)) + 1;
                  in_EAX = (*(float * PTR32 *)(gen_frame + 0x88));
                  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x84));
                } while (iVar3 != 0);
              }
            }
            if ((*(int *)(gen_frame + 0x74)) <= iVar7) {
              fVar15 = (fVar20 / ((float *)(gen_frame + 0x10))[(int)((*(int *)(gen_frame + 0x74)) + iVar7 * 4)]) *
                       ((float *)(gen_frame + 0x3c))[(int)((*(int *)(gen_frame + 0x8c)) + (int)((int)(uintptr_t)in_EAX) * 4)];
              ((float *)(gen_frame + 0x3c))[(int)((*(int *)(gen_frame + 0x8c)) + (int)((int)(uintptr_t)pfVar6) * 4 + 1)] = fVar15;
              fVar12 = fVar12 + ((float *)(gen_frame + 0x10))[(int)((int)(*(float * PTR32 *)(gen_frame + 0xa4)) + iVar7)] * fVar15;
            }
            (*(float * PTR32 *)(gen_frame + 0x9c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x9c)) - 4)));
            (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x98)) + 1)));
            iVar3 = (*(int *)(gen_frame + 0x8c)) + 1;
            *(*(float * PTR32 *)(gen_frame + 0x90)) = fVar12;
            iVar7 = iVar7 - 1;
            (*(float * PTR32 *)(gen_frame + 0x88)) = pfVar6;
            (*(float * PTR32 *)(gen_frame + 0x84)) = in_EAX;
            (*(int *)(gen_frame + 0x8c)) = iVar3;
            (*(int *)(gen_frame + 0x78)) = iVar7;
            (*(float * PTR32 *)(gen_frame + 0x90)) = (*(float * PTR32 *)(gen_frame + 0x90)) + 4;
            fVar12 = ((float *)(gen_frame + 0x64))[3];
          } while (iVar3 <= param_4);
        }
        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) - 1;
        (*(float * PTR32 *)(gen_frame + 0xa4)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xa4)) + 4)));
        (*(int *)(gen_frame + 0x7c)) = (*(int *)(gen_frame + 0x7c)) + 1;
      } while ((*(int *)(gen_frame + 0x7c)) + param_3 <= param_3);
    }
  }
  iVar7 = 1;
  if (0 < param_4) {
    (*(float * PTR32 *)(gen_frame + 0x90)) = ((float *)GEN_TOP((param_3 - 1)));
    in_EAX = ((float *)GEN_TOP((param_6 + 0x10)));
    iVar3 = param_3;
    do {
      iVar8 = 0;
      if (-1 < param_3) {
        if (3 < param_3 + 1) {
          uVar9 = param_3 + 1U >> 2;
          fVar16 = (float)iVar3;
          iVar8 = uVar9 * 4;
          pfVar13 = in_EAX;
          do {
            *pfVar13 = *pfVar13 * fVar16;
            pfVar13[1] = pfVar13[1] * fVar16;
            pfVar13[2] = pfVar13[2] * fVar16;
            pfVar13[3] = pfVar13[3] * fVar16;
            pfVar13 = pfVar13 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (iVar8 <= param_3) {
          pfVar13 = ((float *)GEN_TOP((param_6 + (iVar8 + iVar7 * 4) * 4)));
          iVar8 = (param_3 - iVar8) + 1;
          do {
            *pfVar13 = (float)iVar3 * *pfVar13;
            pfVar13 = pfVar13 + 1;
            iVar8 = iVar8 - 1;
          } while (iVar8 != 0);
        }
      }
      iVar3 = iVar3 * (int)(*(float * PTR32 *)(gen_frame + 0x90));
      iVar7 = iVar7 + 1;
      in_EAX = in_EAX + 4;
      (*(float * PTR32 *)(gen_frame + 0x90)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x90)) - 1)));
    } while (iVar7 <= param_4);
  }
  return (uint)in_EAX;
}

/* ref: FUN_00d8bc90 */
GEN_LIB GEN_FRAME float10 F_00d8bc90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd8bc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float * pfVar11;
  float fVar12;
  
  if (((param_4 != 0) ||
      (bVar8 = GEN_ISNAN(param_5) || GEN_ISNAN(*((float *)GEN_TOP(*param_3))),
      bVar8 == (bVar8 || param_5 == *((float *)GEN_TOP(*param_3))))) &&
     ((param_4 != (param_2 - param_1) - 1 ||
      (pfVar11 = ((float *)GEN_TOP((*param_3 + param_2 * 4))), bVar8 = GEN_ISNAN(param_5) || GEN_ISNAN(*pfVar11),
      bVar8 == (bVar8 || param_5 == *pfVar11))))) {
    iVar6 = *param_3;
    pfVar11 = ((float *)GEN_TOP((iVar6 + param_4 * 4)));
    (*(int *)(gen_frame + 0x20)) = iVar6;
    ((float * PTR32 *)(gen_frame + 0xc))[2] = pfVar11;
    if ((!(param_5 < *((float *)GEN_TOP((iVar6 + param_4 * 4))))) &&
       (!(*((float *)GEN_TOP((iVar6 + 4 + (param_1 + param_4) * 4))) <= param_5))) {
      iVar2 = 0;
      pfVar5 = pfVar11;
      if (-1 < param_1) {
        do {
          if ((*pfVar5 <= param_5) && (param_5 < pfVar5[1])) {
            ((float *)(gen_frame + 0x0))[(int)(iVar2)] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[(int)(iVar2)], REFG(float, 0x1087f04));
          }
          else {
            ((float *)(gen_frame + 0x0))[(int)(iVar2)] = 0.0;
          }
          iVar2 = iVar2 + 1;
          pfVar5 = pfVar5 + 1;
        } while (iVar2 <= param_1);
      }
      (*(int *)(gen_frame + 0x1c)) = 1;
      if (0 < param_1) {
        pfVar5 = ((float *)GEN_TOP((iVar6 + 8 + param_4 * 4)));
        (*(int *)(gen_frame + 0x18)) = param_1;
        ((float * PTR32 *)(gen_frame + 0xc))[1] = pfVar5;
        iVar6 = param_1;
        do {
          if (GEN_ISNAN(((float *)(gen_frame + 0x0))[0]) == (GEN_ISNAN(((float *)(gen_frame + 0x0))[0]) || ((float *)(gen_frame + 0x0))[0] == 0.0)) {
            fVar9 = ((param_5 - *pfVar11) * ((float *)(gen_frame + 0x0))[0]) / (pfVar5[-1] - *pfVar11);
          }
          else {
            fVar9 = 0.0;
          }
          iVar2 = 0;
          pfVar11 = pfVar5;
          if (3 < iVar6) {
            pfVar4 = pfVar5 + 2;
            pfVar3 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0xc + param_4 * 4)));
            pfVar7 = ((float * PTR32 *)(gen_frame + 0xc))[2] + 1;
            ((float * PTR32 *)(gen_frame + 0xc))[1] = pfVar5;
            (*(int *)(gen_frame + 0x18)) = iVar6;
            do {
              fVar10 = ((float *)(gen_frame + 0x0))[(int)(iVar2 + 1)];
              fVar12 = *pfVar7;
              if (GEN_ISNAN(fVar10) == (GEN_ISNAN(fVar10) || fVar10 == 0.0)) {
                fVar10 = fVar10 / (*pfVar5 - fVar12);
                ((float *)(gen_frame + 0x0))[(int)(iVar2)] = (*pfVar5 - param_5) * fVar10 + fVar9;
                fVar10 = (param_5 - fVar12) * fVar10;
              }
              else {
                ((float *)(gen_frame + 0x0))[(int)(iVar2)] = fVar9;
                fVar10 = 0.0;
              }
              fVar9 = ((float *)(gen_frame + 0x0))[(int)(iVar2 + 2)];
              fVar12 = pfVar3[-1];
              if (GEN_ISNAN(fVar9) == (GEN_ISNAN(fVar9) || fVar9 == 0.0)) {
                fVar9 = fVar9 / (pfVar4[-1] - fVar12);
                ((float *)(gen_frame + 0x0))[(int)(iVar2 + 1)] = (pfVar4[-1] - param_5) * fVar9 + fVar10;
                fVar9 = (param_5 - fVar12) * fVar9;
              }
              else {
                ((float *)(gen_frame + 0x0))[(int)(iVar2 + 1)] = fVar10;
                fVar9 = 0.0;
              }
              pfVar11 = ((float * PTR32 *)(gen_frame + 0xc))[(int)(iVar2)];
              fVar10 = *pfVar3;
              if (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)))) == (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)))) || ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))) == 0.0)) {
                fVar12 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))) / (*pfVar4 - fVar10);
                ((float *)(gen_frame + 0x0))[(int)(iVar2 + 2)] = (*pfVar4 - param_5) * fVar12 + fVar9;
                pfVar11 = ((float *)GEN_TOP(((param_5 - fVar10) * fVar12)));
              }
              else {
                ((float *)(gen_frame + 0x0))[(int)(iVar2 + 2)] = fVar9;
                pfVar11 = ((float *)GEN_TOP(0x0));
              }
              pfVar1 = ((float * PTR32 *)(gen_frame + 0xc))[(int)(iVar2 + 1)];
              fVar10 = pfVar3[1];
              if (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)))) == (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)))) || ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1))) == 0.0)) {
                fVar9 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1))) / (pfVar4[1] - fVar10);
                ((float * PTR32 *)(gen_frame + 0xc))[(int)(iVar2)] = ((float *)GEN_TOP(((pfVar4[1] - param_5) * fVar9 + ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))))));
                fVar9 = (param_5 - fVar10) * fVar9;
              }
              else {
                ((float * PTR32 *)(gen_frame + 0xc))[(int)(iVar2)] = pfVar11;
                fVar9 = 0.0;
              }
              iVar2 = iVar2 + 4;
              pfVar7 = pfVar7 + 4;
              pfVar5 = pfVar5 + 4;
              pfVar3 = pfVar3 + 4;
              pfVar4 = pfVar4 + 4;
              iVar6 = (*(int *)(gen_frame + 0x18));
              pfVar11 = ((float * PTR32 *)(gen_frame + 0xc))[1];
            } while (iVar2 < (*(int *)(gen_frame + 0x18)) - 3);
          }
          if (iVar2 < iVar6) {
            pfVar5 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 4 + ((*(int *)(gen_frame + 0x1c)) + iVar2 + param_4) * 4)));
            pfVar4 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 4 + (param_4 + iVar2) * 4)));
            do {
              fVar10 = ((float *)(gen_frame + 0x0))[(int)(iVar2 + 1)];
              fVar12 = *pfVar4;
              if (GEN_ISNAN(fVar10) == (GEN_ISNAN(fVar10) || fVar10 == 0.0)) {
                fVar10 = fVar10 / (*pfVar5 - fVar12);
                ((float *)(gen_frame + 0x0))[(int)(iVar2)] = (*pfVar5 - param_5) * fVar10 + fVar9;
                fVar9 = (param_5 - fVar12) * fVar10;
              }
              else {
                ((float *)(gen_frame + 0x0))[(int)(iVar2)] = fVar9;
                fVar9 = 0.0;
              }
              iVar2 = iVar2 + 1;
              pfVar4 = pfVar4 + 1;
              pfVar5 = pfVar5 + 1;
            } while (iVar2 < iVar6);
          }
          iVar2 = (*(int *)(gen_frame + 0x1c)) + 1;
          pfVar5 = pfVar11 + 1;
          iVar6 = iVar6 - 1;
          (*(int *)(gen_frame + 0x1c)) = iVar2;
          ((float * PTR32 *)(gen_frame + 0xc))[1] = pfVar5;
          (*(int *)(gen_frame + 0x18)) = iVar6;
          pfVar11 = ((float * PTR32 *)(gen_frame + 0xc))[2];
        } while (iVar2 <= param_1);
      }
      return (float10)((float *)(gen_frame + 0x0))[0];
    }
    return (float10)0;
  }
  return (float10)1;
}

/* ref: FUN_00d8bfb0 */
GEN_LIB GEN_FRAME uint F_00d8bfb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd8bfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_FRAME_DECL_TOP(0x70, 0, 4);
  uint uVar1;
  uint uVar2;
  int in_ecx;
  int iVar3;
  int iVar4;
  float * pfVar5;
  undefined1 * puVar6;
  float fVar7;
  
  iVar3 = param_6;
  if (param_2 <= param_6) {
    param_6 = param_2;
  }
  fVar7 = 0.0;
  iVar4 = param_2 + 1;
  if (iVar4 <= iVar3) {
    in_ecx = iVar4 * 0x10 + param_7;
    iVar3 = (iVar3 - iVar4) + 1;
    do {
      uVar1 = F_00d8ab50(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,fVar7,fVar7,fVar7,fVar7);
      F_00d8ab80(in_ecx GEN_EDX_ARG,uVar1);
      in_ecx = in_ecx + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  uVar1 = F_00d8b440(param_1,param_2,param_5,param_3);
  (*(uint *)(gen_frame + 0x64)) = uVar1;
  uVar2 = F_00d8b670(uVar1,param_5,param_2,param_6,param_3,((undefined1 *)(gen_frame + 0x0)));
  if (-1 < param_6) {
    fVar7 = 0.0;
    puVar6 = ((undefined1 *)(gen_frame + 0x0)) - param_7;
    (*(undefined1 * PTR32 *)(gen_frame + 0x60)) = puVar6;
    (*(int *)(gen_frame + 0x68)) = param_6 + 1;
    iVar3 = param_7;
    do {
      uVar2 = F_00d8ab50(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,fVar7,fVar7,fVar7,fVar7);
      uVar2 = F_00d8ab80(iVar3 GEN_EDX_ARG,uVar2);
      if (-1 < param_2) {
        pfVar5 = (float *)(puVar6 + iVar3);
        iVar4 = (uVar1 - param_2) * 0x10;
        param_6 = param_2 + 1;
        do {
          uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0x40)),*pfVar5,*param_4 + iVar4);
          uVar2 = F_00d8abb0(iVar3 GEN_EDX_ARG,uVar1);
          iVar4 = iVar4 + 0x10;
          pfVar5 = pfVar5 + 1;
          param_6 = param_6 - 1;
          uVar1 = (*(uint *)(gen_frame + 0x64));
          puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x60));
        } while (param_6 != 0);
      }
      iVar3 = iVar3 + 0x10;
      iVar4 = (*(int *)(gen_frame + 0x68)) - 1;
      (*(int *)(gen_frame + 0x68)) = iVar4;
    } while (iVar4 != 0);
  }
  return uVar2;
}

/* ref: FUN_00d8c100 */
GEN_LIB GEN_FRAME uint F_00d8c100(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xd8c100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d8b440(param_2,param_3,param_6,param_4);
  F_00d8b4a0(uVar1,param_6,param_3,param_4,((float *)(gen_frame + 0x10)));
  iVar2 = (uVar1 - param_3) * 0x10;
  F_00d8ae30(param_1,((float *)(gen_frame + 0x10))[0],*param_5 + iVar2);
  iVar3 = 1;
  if (0 < param_3) {
    do {
      iVar2 = iVar2 + 0x10;
      uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0x10))[(int)(iVar3)],*param_5 + iVar2);
      F_00d8abb0(param_1 GEN_EDX_ARG,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= param_3);
  }
  return param_1;
}

/* ref: FUN_00d8c1b0 */
GEN_LIB GEN_FRAME unsigned int F_00d8c1b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd8c1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (-1 < param_5) {
    iVar3 = 0;
    do {
      uVar1 = F_00d8c100(((undefined1 *)(gen_frame + 0x0)),param_1,param_2,param_3,param_4,GEN_ARGF(*((float *)GEN_TOP((*param_6 + iVar2 * 4)))));
      F_00d8ab80(*param_7 + iVar3 GEN_EDX_ARG,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 <= param_5);
  }
  return;
}

/* ref: FUN_00d8c210 */
GEN_LIB GEN_FRAME uint F_00d8c210(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8c210u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pfVar2 = ((float *)GEN_TOP(*param_2));
  uVar5 = 0;
  uVar3 = (int)param_3 / 2;
  pfVar1 = pfVar2 + param_3;
  if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(*pfVar1)) && (!(param_1 < *pfVar1) && param_1 != *pfVar1)) {
    return param_3 + 1;
  }
  if (!(param_1 <= *pfVar2)) {
    uVar4 = param_3;
    if (uVar3 != 0) {
      do {
        uVar6 = uVar3;
        if (param_1 <= pfVar2[uVar3]) {
          uVar4 = uVar3;
          uVar6 = uVar5;
        }
        uVar3 = (int)(uVar4 + uVar6) / 2;
        uVar5 = uVar6;
      } while (uVar6 != uVar3);
    }
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00d8c280 */
GEN_LIB GEN_FRAME uint F_00d8c280(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8c280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  float fVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (param_1 <= param_2) {
    fVar1 = *((float *)GEN_TOP((*param_3 + param_1 * 4)));
    pfVar3 = ((float *)GEN_TOP((*param_3 + param_1 * 4)));
    iVar2 = param_1;
    do {
      bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(*pfVar3);
      if (bVar6 == (bVar6 || fVar1 == *pfVar3)) break;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar2 <= param_2);
  }
  iVar2 = param_1 - 1;
  iVar4 = 1;
  if (-1 < iVar2) {
    fVar1 = *((float *)GEN_TOP((*param_3 + param_1 * 4)));
    do {
      pfVar3 = ((float *)GEN_TOP((*param_3 + iVar2 * 4)));
      bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(*pfVar3);
      if (bVar6 == (bVar6 || fVar1 == *pfVar3)) break;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return iVar4 - 1 + iVar5;
}

/* ref: FUN_00d8c2f0 */
GEN_LIB GEN_FRAME uint F_00d8c2f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float fVar1;
  float fVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  iVar5 = 0;
  if (3 < param_2) {
    pfVar3 = ((float *)GEN_TOP((*param_1 + 8)));
    iVar4 = (param_2 - 4U >> 2) + 1;
    iVar5 = iVar4 * 4;
    do {
      fVar1 = pfVar3[-1];
      bVar7 = GEN_ISNAN(pfVar3[-2]) || GEN_ISNAN(fVar1);
      if (bVar7 == (bVar7 || pfVar3[-2] == fVar1)) {
        iVar6 = iVar6 + 1;
      }
      fVar2 = *pfVar3;
      if ((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar2)) == ((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar2)) || fVar1 == fVar2)) {
        iVar6 = iVar6 + 1;
      }
      fVar1 = pfVar3[1];
      if ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) == ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) || fVar2 == fVar1)) {
        iVar6 = iVar6 + 1;
      }
      bVar7 = GEN_ISNAN(fVar1) || GEN_ISNAN(pfVar3[2]);
      if (bVar7 == (bVar7 || fVar1 == pfVar3[2])) {
        iVar6 = iVar6 + 1;
      }
      pfVar3 = pfVar3 + 4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  if (iVar5 < param_2) {
    pfVar3 = ((float *)GEN_TOP((*param_1 + iVar5 * 4)));
    iVar5 = param_2 - iVar5;
    do {
      bVar7 = GEN_ISNAN(*pfVar3) || GEN_ISNAN(pfVar3[1]);
      if (bVar7 == (bVar7 || *pfVar3 == pfVar3[1])) {
        iVar6 = iVar6 + 1;
      }
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  return iVar6 + 1;
}

/* ref: FUN_00d8c390 */
GEN_LIB GEN_FRAME uint F_00d8c390(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8c390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  float * pfVar1;
  float fVar2;
  bool bVar3;
  
  if ((param_2 != param_4) &&
     (fVar2 = *((float *)GEN_TOP((*param_3 + param_2 * 4))), pfVar1 = ((float *)GEN_TOP((*param_3 + 4 + param_2 * 4))),
     bVar3 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1), bVar3 != (bVar3 || fVar2 == *pfVar1))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d8c3d0 */
GEN_LIB GEN_FRAME uint F_00d8c3d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  
  if (0 < param_2) {
    pfVar4 = ((float *)GEN_TOP(*param_1));
    fVar5 = *pfVar4;
    uVar1 = 0;
    uVar2 = 1;
    if (1 < param_2) {
      if (3 < param_2 - 1) {
        pfVar3 = pfVar4 + 3;
        do {
          if (pfVar3[-2] < fVar5) {
            uVar1 = uVar2;
            fVar5 = pfVar3[-2];
          }
          if (pfVar3[-1] < fVar5) {
            uVar1 = uVar2 + 1;
            fVar5 = pfVar3[-1];
          }
          if (*pfVar3 < fVar5) {
            uVar1 = uVar2 + 2;
            fVar5 = *pfVar3;
          }
          if (pfVar3[1] < fVar5) {
            uVar1 = uVar2 + 3;
            fVar5 = pfVar3[1];
          }
          uVar2 = uVar2 + 4;
          pfVar3 = pfVar3 + 4;
        } while ((int)uVar2 < param_2 - 3);
      }
      if ((int)uVar2 < param_2) {
        pfVar4 = pfVar4 + uVar2;
        do {
          if (*pfVar4 < fVar5) {
            uVar1 = uVar2;
            fVar5 = *pfVar4;
          }
          uVar2 = uVar2 + 1;
          pfVar4 = pfVar4 + 1;
        } while ((int)uVar2 < param_2);
      }
    }
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00d8c470 */
GEN_LIB GEN_FRAME uint F_00d8c470(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  
  if (0 < param_2) {
    pfVar4 = ((float *)GEN_TOP(*param_1));
    fVar5 = *pfVar4;
    uVar1 = 0;
    uVar2 = 1;
    if (1 < param_2) {
      if (3 < param_2 - 1) {
        pfVar3 = pfVar4 + 3;
        do {
          if (fVar5 < pfVar3[-2]) {
            uVar1 = uVar2;
            fVar5 = pfVar3[-2];
          }
          if (fVar5 < pfVar3[-1]) {
            uVar1 = uVar2 + 1;
            fVar5 = pfVar3[-1];
          }
          if (fVar5 < *pfVar3) {
            uVar1 = uVar2 + 2;
            fVar5 = *pfVar3;
          }
          if (fVar5 < pfVar3[1]) {
            uVar1 = uVar2 + 3;
            fVar5 = pfVar3[1];
          }
          uVar2 = uVar2 + 4;
          pfVar3 = pfVar3 + 4;
        } while ((int)uVar2 < param_2 - 3);
      }
      if ((int)uVar2 < param_2) {
        pfVar4 = pfVar4 + uVar2;
        do {
          if (fVar5 < *pfVar4) {
            uVar1 = uVar2;
            fVar5 = *pfVar4;
          }
          uVar2 = uVar2 + 1;
          pfVar4 = pfVar4 + 1;
        } while ((int)uVar2 < param_2);
      }
    }
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00d8c510 */
GEN_LIB GEN_NOFRAME double GEN_THISCALL F_00d8c510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd8c510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return ((double)GEN_TOD(((((float10)*((float *)GEN_TOP(((int)this + 4))) * (float10)*((float *)GEN_TOP(((int)this + 4))) +
                   (float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this) +
                  (float10)*((float *)GEN_TOP(((int)this + 8))) * (float10)*((float *)GEN_TOP(((int)this + 8)))) +
                 (float10)*((float *)GEN_TOP(((int)this + 0xc))) * (float10)*((float *)GEN_TOP(((int)this + 0xc))))));
}

/* ref: FUN_00d8c520 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d8c520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd8c520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return ((float)GEN_TOF(GEN_X87(SQRT((((float10)*((float *)GEN_TOP(((int)this + 4))) * (float10)*((float *)GEN_TOP(((int)this + 4))) +
                      (float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this) +
                     (float10)*((float *)GEN_TOP(((int)this + 8))) * (float10)*((float *)GEN_TOP(((int)this + 8)))) +
                     (float10)*((float *)GEN_TOP(((int)this + 0xc))) * (float10)*((float *)GEN_TOP(((int)this + 0xc)))))));
}

/* ref: FUN_00d8c530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8c530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00d8ade0(this GEN_EDX_FWD,param_1,
               ((float)GEN_TOF(SQRT((((float10)*((float *)GEN_TOP(((int)this + 4))) * (float10)*((float *)GEN_TOP(((int)this + 4)))
                            + (float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this) +
                           (float10)*((float *)GEN_TOP(((int)this + 8))) * (float10)*((float *)GEN_TOP(((int)this + 8))))
                           + (float10)*((float *)GEN_TOP(((int)this + 0xc))) *
                             (float10)*((float *)GEN_TOP(((int)this + 0xc)))))));
  return param_1;
}

/* ref: FUN_00d8c560 */
GEN_LIB GEN_FRAME float F_00d8c560(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float * pfVar1;
  
  pfVar1 = ((float *)GEN_TOP(F_00d8ad40(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2)));
  return ((float)GEN_TOF(SQRT((((float10)pfVar1[1] * (float10)pfVar1[1] + (float10)*pfVar1 * (float10)*pfVar1
                      ) + (float10)pfVar1[2] * (float10)pfVar1[2]) +
                     (float10)pfVar1[3] * (float10)pfVar1[3])));
}

/* ref: FUN_00d8c590 */
GEN_LIB GEN_FRAME double F_00d8c590(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  return GEN_X87(((double)GEN_TOD((((((float10)param_1[1] * (float10)param_2[1] +
                    (float10)*param_1 * (float10)*param_2) +
                   (float10)param_1[2] * (float10)param_2[2]) +
                  (float10)param_1[3] * (float10)param_2[3]) /
                 (GEN_X87(SQRT((((float10)param_2[1] * (float10)param_2[1] +
                        (float10)*param_2 * (float10)*param_2) +
                       (float10)param_2[2] * (float10)param_2[2]) +
                       (float10)param_2[3] * (float10)param_2[3])) *
                 GEN_X87(SQRT((((float10)param_1[1] * (float10)param_1[1] +
                       (float10)*param_1 * (float10)*param_1) +
                      (float10)param_1[2] * (float10)param_1[2]) +
                      (float10)param_1[3] * (float10)param_1[3])))))));
}

/* ref: FUN_00d8c5c0 */
GEN_LIB GEN_FRAME double F_00d8c5c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float * pfVar1;
  
  pfVar1 = ((float *)GEN_TOP(F_00d8ad40(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1)));
  return ((double)GEN_TOD(SQRT((((float10)pfVar1[1] * (float10)pfVar1[1] +
                       (float10)*pfVar1 * (float10)*pfVar1) +
                      (float10)pfVar1[2] * (float10)pfVar1[2]) +
                      (float10)pfVar1[3] * (float10)pfVar1[3])));
}

/* ref: FUN_00d8c5f0 */
GEN_LIB GEN_FRAME uint F_00d8c5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd8c5f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char * pcVar4;
  uint uVar5;
  
  uVar3 = (*(undefined4 *)&gen_args[2]);
  uVar2 = (*(undefined4 *)&gen_args[1]);
  uVar5 = (*(uint *)&gen_args[0]);
  pcVar4 = ((char *)GEN_TOP(F_00d8c390((int)&(*(uint *)&gen_args[0]) + 3,(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))));
  cVar1 = *pcVar4;
  while (cVar1 == '\0') {
    uVar5 = uVar5 + 1;
    pcVar4 = ((char *)GEN_TOP(F_00d8c390((int)&(*(uint *)&gen_args[0]) + 3,uVar5,uVar2,uVar3)));
    cVar1 = *pcVar4;
  }
  return uVar5;
}

/* ref: FUN_00d8c630 */
GEN_LIB GEN_FRAME unsigned int F_00d8c630(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8c630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  param_2[1] = param_2[1] - 1;
  iVar1 = (param_2[1] - param_1) * 4;
  puVar2 = ((undefined4 *)GEN_TOP((*param_2 + param_1 * 4)));
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d8c670 */
GEN_LIB GEN_FRAME unsigned int F_00d8c670(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8c670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  param_2[1] = param_2[1] - 1;
  iVar2 = (param_2[1] - param_1) * 4;
  puVar4 = ((undefined4 *)GEN_TOP((*param_2 + param_1 * 4)));
  iVar3 = param_1;
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar4 = puVar4[1];
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  for (; iVar3 < param_3; iVar3 = iVar3 + 1) {
    piVar1 = ((int *)GEN_TOP((*param_2 + iVar3 * 4)));
    *piVar1 = *piVar1 - 1;
  }
  return 0;
}

/* ref: FUN_00d8c6d0 */
GEN_LIB GEN_NOFRAME float10 F_00d8c6d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8))
{
  GEN_ENTER(0xd8c6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_FRAME_DECL(0x80, 0);
  bool bVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = param_1 + 1 + param_2;
  pfVar2 = ((float *)GEN_TOP(*param_3));
  (*(float *)(gen_frame + 0x54)) = *pfVar2;
  (*(float *)(gen_frame + 0x68)) = *pfVar2;
  iVar3 = 0;
  (*(int *)(gen_frame + 0x4c)) = iVar4;
  (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar2;
  (*(float *)(gen_frame + 0x64)) = REFG(float, 0x11386a0);
  if (-1 < param_6) {
    (*(float *)(gen_frame + 0x60)) = *pfVar2;
    (*(float *)(gen_frame + 0x5c)) = pfVar2[iVar4] - *pfVar2;
    do {
      fVar6 = ((float)iVar3 / (float)param_6) * (*(float *)(gen_frame + 0x5c)) + (*(float *)(gen_frame + 0x60));
      F_00d8c100(((float *)(gen_frame + 0x30)),param_1,param_2,param_3,param_4,fVar6);
      fVar7 = F_00d8c560(((float *)(gen_frame + 0x30)),param_5);
      (*(float *)(gen_frame + 0x58)) = fVar7;
      if ((float10)fVar7 < (float10)(*(float *)(gen_frame + 0x64))) {
        (*(float *)(gen_frame + 0x64)) = fVar7;
        (*(float *)(gen_frame + 0x68)) = fVar6;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= param_6);
  }
  iVar4 = 0;
  if (0 < param_7) {
    while( true ) {
      fVar6 = 0.0;
      pfVar2 = &(*(float *)(gen_frame + 0x0));
      iVar3 = 2;
      do {
        F_00d8ab50(pfVar2 GEN_EDX_ARG,fVar6,fVar6,fVar6,fVar6);
        pfVar2 = ((float *)GEN_TOP((((int)(uint)(pfVar2)) + 0x10)));
        iVar3 = iVar3 - 1;
      } while (-1 < iVar3);
      F_00d8bfb0(param_1,param_2,param_3,param_4,(*(float *)(gen_frame + 0x68)),2,&(*(float *)(gen_frame + 0x0)));
      F_00d8ac00(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,param_5);
      fVar6 = (*(float *)(gen_frame + 0x68));
      (*(bool *)(gen_frame + 0x6f)) = true;
      bVar1 = !(GEN_X87(SQRT((((float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0))) + (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8))) + (float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0xc)))) <= (float10)param_8);
      if (bVar1) {
        (*(bool *)(gen_frame + 0x6f)) = false;
      }
      (*(bool *)(gen_frame + 0x6f)) = !bVar1;
      (*(bool *)(gen_frame + 0x6e)) = true;
      bVar1 = !(((((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x0))) + (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x8))) + (float10)(*(float *)(gen_frame + 0x1c)) * (float10)(*(float *)(gen_frame + 0xc))) / (GEN_X87(SQRT((((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10))) + (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18))) + (float10)(*(float *)(gen_frame + 0x1c)) * (float10)(*(float *)(gen_frame + 0x1c)))) * GEN_X87(SQRT((((float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0))) + (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8))) + (float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0xc))))) <= (float10)param_9);
      if (bVar1) {
        (*(bool *)(gen_frame + 0x6e)) = false;
      }
      (*(bool *)(gen_frame + 0x6e)) = !bVar1;
      if (((*(bool *)(gen_frame + 0x6f))) && ((*(bool *)(gen_frame + 0x6e)))) break;
      fVar5 = GEN_X87((float10)(*(float *)(gen_frame + 0x68)) - ((((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x0))) + (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x8))) + (float10)(*(float *)(gen_frame + 0x1c)) * (float10)(*(float *)(gen_frame + 0xc))) / (((((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10))) + (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18))) + (float10)(*(float *)(gen_frame + 0x1c)) * (float10)(*(float *)(gen_frame + 0x1c))) + ((((float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x0))) + (float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x8))) + (float10)(*(float *)(gen_frame + 0x2c)) * (float10)(*(float *)(gen_frame + 0xc)))));
      (*(float *)(gen_frame + 0x68)) = (float)fVar5;
      if (!((*(float *)(gen_frame + 0x54)) < (*(float *)(gen_frame + 0x68)))) {
        (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x54));
        fVar5 = (float10)(*(float *)(gen_frame + 0x54));
      }
      fVar7 = (*(float * PTR32 *)(gen_frame + 0x50))[(*(int *)(gen_frame + 0x4c))];
      if (!((*(float *)(gen_frame + 0x68)) < fVar7)) {
        (*(float *)(gen_frame + 0x68)) = fVar7;
        fVar5 = (float10)fVar7;
      }
      ((float *)(gen_frame + 0x30))[0] = ABS((*(float *)(gen_frame + 0x68)) - fVar6);
      ((float *)(gen_frame + 0x30))[1] = 0.0;
      ((float *)(gen_frame + 0x30))[2] = 0.0;
      ((float *)(gen_frame + 0x30))[3] = 0.0;
      if ((*(bool *)(gen_frame + 0x6f))) {
        return fVar5;
      }
      if ((*(bool *)(gen_frame + 0x6e))) {
        return fVar5;
      }
      if (GEN_X87(SQRT((((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10))) + (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18))) + (float10)(*(float *)(gen_frame + 0x1c)) * (float10)(*(float *)(gen_frame + 0x1c)))) * ((float10)GEN_TOD(ABS((*(float *)(gen_frame + 0x68)) - fVar6))) <= (float10)param_8) {
        return fVar5;
      }
      iVar4 = iVar4 + 1;
      if (param_7 <= iVar4) {
        return fVar5;
      }
    }
  }
  return (float10)(*(float *)(gen_frame + 0x68));
}

/* ref: FUN_00d8c950 */
GEN_LIB GEN_FRAME uint F_00d8c950(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(float param_11, float gen_a10), GEN_P(float param_12, float gen_a11), GEN_P(char param_13, unsigned int gen_a12))
{
  GEN_ENTER(0xd8c950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(float param_11 = (float)gen_a10;)
  GEN_PIN(float param_12 = (float)gen_a11;)
  GEN_PIN(char param_13 = (char)gen_a12;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint in_EAX = 0;
  float * pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  
  iVar2 = 0;
  if (-1 < (int)param_1) {
    iVar3 = 0;
    do {
      if (param_13 == '\0') {
        fVar5 = *((float *)GEN_TOP((*param_8 + iVar2 * 4)));
      }
      else {
        fVar4 = F_00d8c6d0(param_3,param_4,param_5,param_6,*param_2 + iVar3,param_9,param_10,
                             param_11,param_12);
        fVar5 = (float)fVar4;
      }
      F_00d8c100(((undefined1 *)(gen_frame + 0x10)),param_3,param_4,param_5,param_6,fVar5);
      *((float *)GEN_TOP((*param_8 + iVar2 * 4))) = fVar5;
      pfVar1 = ((float *)GEN_TOP(F_00d8ad40(*param_2 + iVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)))));
      in_EAX = 3;
      *((float *)GEN_TOP((*param_7 + iVar2 * 4))) =
           ((float)GEN_TOF(SQRT((((float10)pfVar1[1] * (float10)pfVar1[1] +
                        (float10)*pfVar1 * (float10)*pfVar1) +
                       (float10)pfVar1[2] * (float10)pfVar1[2]) +
                       (float10)pfVar1[3] * (float10)pfVar1[3])));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 <= (int)param_1);
  }
  return in_EAX;
}

/* ref: FUN_00d8cb90 */
GEN_LIB GEN_FRAME uint F_00d8cb90(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xd8cb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  undefined8 * puVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  (*(int *)(gen_frame + 0x24)) = 0;
  if (-1 < param_6) {
    (*(int *)(gen_frame + 0x28)) = 0;
    do {
      puVar1 = ((undefined8 *)GEN_TOP((*param_7 + (*(int *)(gen_frame + 0x28)))));
      (*(undefined8 *)(gen_frame + 0x10)) = *puVar1;
      (*(undefined8 *)(gen_frame + 0x18)) = puVar1[1];
      fVar3 = F_00d8c6d0(param_2,param_3,param_5,param_4,puVar1,100,10,REFG(float, 0x10abe98),REFG(float, 0x10abe98));
      (*(float *)(gen_frame + 0x20)) = (float)fVar3;
      F_00d8c100(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_5,param_4,(float)fVar3);
      fVar4 = F_00d8c560(&(*(undefined8 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x0)));
      if ((!GEN_ISNAN((float10)fVar4) && !GEN_ISNAN((float10)param_8)) && !((float10)fVar4 <= (float10)param_8))
      {
        *param_1 = 0;
        return (uint)param_1;
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x10;
      iVar2 = (*(int *)(gen_frame + 0x24)) + 1;
      (*(int *)(gen_frame + 0x24)) = iVar2;
    } while (iVar2 <= param_6);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d8cc60 */
GEN_LIB GEN_FRAME float10 F_00d8cc60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined1 * param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd8cc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_FRAME_DECL_TOP(0xf0, 0, 4);
  uint uVar1;
  uint in_ecx;
  undefined1 * puVar2;
  int iVar3;
  int iVar4;
  int in_ecx_00;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 * puVar11;
  
  fVar7 = 0.0;
  puVar2 = ((undefined1 *)(gen_frame + 0x30));
  iVar3 = 6;
  do {
    F_00d8ab50(puVar2 GEN_EDX_ARG,fVar7,fVar7,fVar7,fVar7);
    puVar2 = ((undefined1 *)GEN_TOP((((int)(uint)(puVar2)) + 0x10)));
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar4 = (int)gen_fl2bits(*param_4);
  iVar5 = (int)param_6 - param_2;
  param_7 = (int)param_6 - param_7;
  (*(int *)(gen_frame + 0xd4)) = iVar4;
  F_00d8ab80(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,(iVar5 - 1) * 0x10 + iVar4);
  iVar4 = param_7 * 0x10 + iVar4;
  iVar3 = param_7 - (iVar5 - 1);
  F_00d8ab80(((undefined1 *)(gen_frame + 0x40)) + iVar3 * 0x10 GEN_EDX_ARG,iVar4 + 0x10);
  (*(int *)(gen_frame + 0xe0)) = 1;
  (*(int *)(gen_frame + 0xd8)) = iVar3;
  fVar7 = param_5;
  fVar9 = REFG(float, 0x1087f04);
  if (param_7 != iVar5 && -1 < param_7 - iVar5) {
    param_6 = ((undefined1 *)(gen_frame + 0x30)) + iVar3 * 0x10;
    (*(float * PTR32 *)(gen_frame + 0xe8)) = ((float *)GEN_TOP((*param_3 + param_7 * 4)));
    (*(float * PTR32 *)(gen_frame + 0xe4)) = ((float *)GEN_TOP((*param_3 + iVar5 * 4)));
    (*(float * PTR32 *)(gen_frame + 0xdc)) = ((float *)GEN_TOP((*param_3 + (param_7 + 1 + param_2) * 4)));
    in_ecx_00 = iVar5 * 0x10 + (*(int *)(gen_frame + 0xd4));
    param_4 = ((float *)GEN_TOP((*param_3 + (iVar5 + 1 + param_2) * 4)));
    (*(int *)(gen_frame + 0xd0)) = iVar4;
    puVar2 = ((undefined1 *)(gen_frame + 0x40));
    do {
      fVar6 = (fVar7 - *(*(float * PTR32 *)(gen_frame + 0xe4))) / (*param_4 - *(*(float * PTR32 *)(gen_frame + 0xe4)));
      puVar11 = ((undefined1 *)(gen_frame + 0x0));
      fVar8 = (fVar7 - *(*(float * PTR32 *)(gen_frame + 0xe8))) / (*(*(float * PTR32 *)(gen_frame + 0xdc)) - *(*(float * PTR32 *)(gen_frame + 0xe8)));
      uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0x10)),fVar9 - fVar6,puVar2 - 0x10);
      uVar1 = F_00d8ad40(in_ecx_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),uVar1);
      uVar1 = F_00d8ade0(uVar1 GEN_EDX_ARG,puVar11,fVar6);
      F_00d8ab80(puVar2 GEN_EDX_ARG,uVar1);
      fVar6 = fVar9 - fVar8;
      puVar11 = ((undefined1 *)(gen_frame + 0xc0));
      uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0xb0)),fVar8,param_6 + 0x10);
      iVar4 = (*(int *)(gen_frame + 0xd0));
      uVar1 = F_00d8ad40((*(int *)(gen_frame + 0xd0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa0)),uVar1);
      uVar1 = F_00d8ade0(uVar1 GEN_EDX_ARG,puVar11,fVar6);
      F_00d8ab80(param_6 GEN_EDX_ARG,uVar1);
      (*(int *)(gen_frame + 0xe0)) = (*(int *)(gen_frame + 0xe0)) + 1;
      (*(float * PTR32 *)(gen_frame + 0xdc)) = (*(float * PTR32 *)(gen_frame + 0xdc)) - 1;
      (*(float * PTR32 *)(gen_frame + 0xe8)) = (*(float * PTR32 *)(gen_frame + 0xe8)) - 1;
      iVar3 = (*(int *)(gen_frame + 0xd8)) - 1;
      (*(int *)(gen_frame + 0xd8)) = iVar3;
      param_6 = param_6 - 0x10;
      param_4 = param_4 + 1;
      (*(float * PTR32 *)(gen_frame + 0xe4)) = (*(float * PTR32 *)(gen_frame + 0xe4)) + 1;
      param_7 = param_7 - 1;
      iVar5 = iVar5 + 1;
      in_ecx_00 = in_ecx_00 + 0x10;
      puVar2 = puVar2 + 0x10;
      (*(int *)(gen_frame + 0xd0)) = iVar4 - 0x10;
    } while (param_7 != iVar5 && -1 < param_7 - iVar5);
  }
  (*(int *)(gen_frame + 0xd8)) = iVar3;
  if (-1 < param_7 - iVar5) {
    iVar3 = *param_3;
    iVar4 = (*(int *)(gen_frame + 0xe0)) * 0x10;
    fVar7 = (fVar7 - *((float *)GEN_TOP((iVar3 + iVar5 * 4)))) / (*((float *)GEN_TOP((iVar3 + (iVar5 + 1 + param_2) * 4))) - *((float *)GEN_TOP((iVar3 + iVar5 * 4))));
    uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0xa0)),fVar9 - fVar7,((undefined1 *)(gen_frame + 0x20)) + iVar4);
    puVar2 = ((undefined1 *)(gen_frame + 0xb0));
    in_ecx = F_00d8ae30(((undefined1 *)(gen_frame + 0xc0)),fVar7,((undefined1 *)(gen_frame + 0x40)) + iVar4);
    uVar1 = F_00d8acf0(in_ecx GEN_EDX_ARG,puVar2,uVar1);
    dVar10 = F_00d8c5c0(iVar5 * 0x10 + (*(int *)(gen_frame + 0xd4)),uVar1);
    return (float10)dVar10;
  }
  dVar10 = F_00d8c5c0(((undefined1 *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0xe0)) * 0x10,((undefined1 *)(gen_frame + 0x40)) + iVar3 * 0x10);
  return (float10)dVar10;
}

/* ref: FUN_00d8cf30 */
GEN_LIB GEN_FRAME uint F_00d8cf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd8cf30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  int iVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  char * extraout_EAX = 0;
  undefined4 * puVar5;
  int iVar6;
  float10 fVar7;
  
  pcVar2 = (*(char * PTR32 *)&gen_args[0]);
  if ((*(int *)&gen_args[5]) <= (*(int *)&gen_args[6])) {
    pcVar2 = ((char *)GEN_TOP((((*(int *)&gen_args[6]) - (*(int *)&gen_args[5])) + 1)));
    iVar6 = (*(int *)&gen_args[5]);
    if (3 < (int)pcVar2) {
      iVar3 = (((*(int *)&gen_args[6]) - (*(int *)&gen_args[5])) - 3U >> 2) + 1;
      puVar5 = ((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 8 + (*(int *)&gen_args[5]) * 4)));
      iVar6 = (*(int *)&gen_args[5]) + iVar3 * 4;
      do {
        puVar5[-2] = GEN_FLT_TO(puVar5[-2], REFG(float, 0x11386a0));
        puVar5[-1] = GEN_FLT_TO(puVar5[-1], REFG(float, 0x11386a0));
        *puVar5 = GEN_FLT_TO(*puVar5, REFG(float, 0x11386a0));
        puVar5[1] = GEN_FLT_TO(puVar5[1], REFG(float, 0x11386a0));
        puVar5 = puVar5 + 4;
        iVar3 = iVar3 - 1;
        pcVar2 = ((char *)GEN_TOP(0x0));
      } while (iVar3 != 0);
    }
    if (iVar6 <= (*(int *)&gen_args[6])) {
      pcVar2 = ((char *)GEN_TOP(0x7f7fffee));
      puVar5 = ((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + iVar6 * 4)));
      for (iVar3 = ((*(int *)&gen_args[6]) - iVar6) + 1; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar5 = 0x7f7fffee;
        puVar5 = puVar5 + 1;
      }
    }
    iVar6 = (*(int *)&gen_args[6]);
    iVar3 = (*(int *)&gen_args[5]);
    if ((*(int *)&gen_args[5]) <= (*(int *)&gen_args[6])) {
      do {
        pcVar2 = ((char *)GEN_TOP(F_00d8c390((int)&(*(int *)&gen_args[5]) + 3,iVar3,(*(int * PTR32 *)&gen_args[2]),(*(char * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) + 1)));
        if (*pcVar2 != '\0') {
          iVar6 = *(*(int * PTR32 *)&gen_args[4]);
          iVar1 = *(*(int * PTR32 *)&gen_args[2]);
          uVar4 = F_00d8c280(iVar3,(*(char * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) + 1,(*(int * PTR32 *)&gen_args[2]));
          fVar7 = F_00d8cc60((*(char * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),GEN_ARGF(*((float *)GEN_TOP((iVar1 + iVar3 * 4)))),iVar3,
                               uVar4);
          *((float *)GEN_TOP((iVar6 + iVar3 * 4))) = (float)fVar7;
          pcVar2 = extraout_EAX;
          iVar6 = (*(int *)&gen_args[6]);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar6);
    }
  }
  return (uint)pcVar2;
}

/* ref: FUN_00d8d050 */
GEN_LIB GEN_FRAME uint F_00d8d050(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(float param_9, float gen_a8))
{
  GEN_ENTER(0xd8d050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_FRAME_DECL_TOP(0x150, 0, 4);
  float * pfVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint in_ecx;
  int iVar5;
  undefined1 * puVar6;
  int iVar7;
  undefined1 * in_ecx_00;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  
  fVar13 = 0.0;
  (*(int *)(gen_frame + 0x114)) = param_2 + 1;
  iVar3 = param_6 * 2 - param_2;
  (*(int *)(gen_frame + 0x118)) = param_1 + 1 + param_2;
  iVar7 = param_6 - (int)param_7;
  param_2 = param_6 - param_2;
  (*(int *)(gen_frame + 0x104)) = (iVar3 - (int)param_7) / 2;
  (*(int *)(gen_frame + 0x10c)) = iVar7;
  puVar6 = ((undefined1 *)(gen_frame + 0x90));
  iVar3 = 6;
  do {
    F_00d8ab50(puVar6 GEN_EDX_ARG,fVar13,fVar13,fVar13,fVar13);
    puVar6 = ((undefined1 *)GEN_TOP((((int)(uint)(puVar6)) + 0x10)));
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  uVar8 = 0;
  if (0 < param_8) {
    (*(int *)(gen_frame + 0x128)) = param_2 - 1;
    (*(int *)(gen_frame + 0x134)) = iVar7 * 0x10;
    (*(int *)(gen_frame + 0x140)) = param_2 * 0x10;
    (*(int *)(gen_frame + 0x120)) = (((*(int *)(gen_frame + 0x114)) - (int)param_7) + param_6) * 4;
    fVar11 = param_5;
    fVar12 = REFG(float, 0x1087f04);
    do {
      pfVar1 = ((float *)GEN_TOP(*param_4));
      (*(float * PTR32 *)(gen_frame + 0x138)) = pfVar1;
      F_00d8ab80(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG,(int)pfVar1 + (*(int *)(gen_frame + 0x140)) - 0x10);
      param_7 = ((float *)GEN_TOP((iVar7 + uVar8)));
      puVar6 = ((undefined1 *)GEN_TOP(((int)param_7 - (*(int *)(gen_frame + 0x128)))));
      (*(int *)(gen_frame + 0x148)) = (*(int *)(gen_frame + 0x134)) + (int)pfVar1;
      (*(float * PTR32 *)(gen_frame + 0x13c)) = param_7;
      (*(int *)(gen_frame + 0x108)) = (int)((int)(uintptr_t)puVar6) * 0x10;
      F_00d8ab80(((undefined1 *)(gen_frame + 0xa0)) + (int)((int)(uintptr_t)puVar6) * 0x10 GEN_EDX_ARG,(*(int *)(gen_frame + 0x134)) + (int)pfVar1 + 0x10);
      (*(int *)(gen_frame + 0x130)) = 1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x144)) = puVar6;
      (*(int *)(gen_frame + 0x100)) = (int)param_7 - param_2;
      iVar7 = param_2;
      if ((int)uVar8 < (int)param_7 - param_2) {
        iVar3 = *param_3;
        (*(undefined1 * PTR32 *)(gen_frame + 0x12c)) = ((undefined1 *)(gen_frame + 0x90)) + (int)((int)(uintptr_t)puVar6) * 0x10;
        (*(int *)(gen_frame + 0x11c)) = (int)(*(float * PTR32 *)(gen_frame + 0x138)) + (*(int *)(gen_frame + 0x140));
        (*(float * PTR32 *)(gen_frame + 0x124)) = ((float *)GEN_TOP((iVar3 + param_2 * 4)));
        (*(float * PTR32 *)(gen_frame + 0x138)) = ((float *)GEN_TOP((iVar3 + ((int)(*(float * PTR32 *)(gen_frame + 0x13c)) - uVar8) * 4)));
        (*(float * PTR32 *)(gen_frame + 0x13c)) = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x120)) + iVar3)));
        in_ecx_00 = ((undefined1 *)(gen_frame + 0xa0));
        (*(float * PTR32 *)(gen_frame + 0x110)) = ((float *)GEN_TOP((iVar3 + (param_2 + uVar8 + (*(int *)(gen_frame + 0x114))) * 4)));
        do {
          fVar9 = (fVar11 - *(*(float * PTR32 *)(gen_frame + 0x124))) / (*(*(float * PTR32 *)(gen_frame + 0x110)) - *(*(float * PTR32 *)(gen_frame + 0x124)));
          puVar6 = ((undefined1 *)(gen_frame + 0x50));
          fVar10 = (fVar11 - *(*(float * PTR32 *)(gen_frame + 0x138))) / (*(*(float * PTR32 *)(gen_frame + 0x13c)) - *(*(float * PTR32 *)(gen_frame + 0x138)));
          uVar4 = F_00d8ae30(((undefined1 *)(gen_frame + 0x0)),fVar12 - fVar9,in_ecx_00 - 0x10);
          uVar4 = F_00d8ad40((*(int *)(gen_frame + 0x11c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),uVar4);
          uVar4 = F_00d8ade0(uVar4 GEN_EDX_ARG,puVar6,fVar9);
          F_00d8ab80(in_ecx_00 GEN_EDX_ARG,uVar4);
          fVar9 = fVar12 - fVar10;
          puVar6 = ((undefined1 *)(gen_frame + 0x80));
          uVar4 = F_00d8ae30(((undefined1 *)(gen_frame + 0x10)),fVar10,(*(undefined1 * PTR32 *)(gen_frame + 0x12c)) + 0x10);
          iVar3 = (*(int *)(gen_frame + 0x148));
          uVar4 = F_00d8ad40((*(int *)(gen_frame + 0x148)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x70)),uVar4);
          uVar4 = F_00d8ade0(uVar4 GEN_EDX_ARG,puVar6,fVar9);
          F_00d8ab80((*(undefined1 * PTR32 *)(gen_frame + 0x12c)) GEN_EDX_ARG,uVar4);
          (*(int *)(gen_frame + 0x11c)) = (*(int *)(gen_frame + 0x11c)) + 0x10;
          (*(int *)(gen_frame + 0x130)) = (*(int *)(gen_frame + 0x130)) + 1;
          (*(float * PTR32 *)(gen_frame + 0x13c)) = (*(float * PTR32 *)(gen_frame + 0x13c)) - 1;
          (*(float * PTR32 *)(gen_frame + 0x138)) = (*(float * PTR32 *)(gen_frame + 0x138)) - 1;
          puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x144)) - 1;
          (*(undefined1 * PTR32 *)(gen_frame + 0x144)) = puVar6;
          (*(undefined1 * PTR32 *)(gen_frame + 0x12c)) = (*(undefined1 * PTR32 *)(gen_frame + 0x12c)) - 0x10;
          (*(float * PTR32 *)(gen_frame + 0x110)) = (*(float * PTR32 *)(gen_frame + 0x110)) + 1;
          (*(float * PTR32 *)(gen_frame + 0x124)) = (*(float * PTR32 *)(gen_frame + 0x124)) + 1;
          param_7 = ((float *)GEN_TOP(((int)param_7 - 1)));
          iVar7 = iVar7 + 1;
          in_ecx_00 = in_ecx_00 + 0x10;
          (*(int *)(gen_frame + 0x148)) = iVar3 - 0x10;
        } while ((int)uVar8 < (int)param_7 - iVar7);
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0x144)) = puVar6;
      if ((int)param_7 - iVar7 < (int)uVar8) {
        dVar14 = F_00d8c5c0(((undefined1 *)(gen_frame + 0x80)) + (*(int *)(gen_frame + 0x130)) * 0x10,((undefined1 *)(gen_frame + 0xa0)) + (int)((int)(uintptr_t)puVar6) * 0x10);
        bVar2 = dVar14 <= (double)param_9;
        iVar7 = (*(int *)(gen_frame + 0x134));
        iVar3 = (*(int *)(gen_frame + 0x140));
      }
      else {
        iVar3 = *param_3;
        fVar9 = (fVar11 - *((float *)GEN_TOP((iVar3 + iVar7 * 4)))) / (*((float *)GEN_TOP((iVar3 + (iVar7 + uVar8 + (*(int *)(gen_frame + 0x114))) * 4))) - *((float *)GEN_TOP((iVar3 + iVar7 * 4)))) ;
        uVar4 = F_00d8ae30(((undefined1 *)(gen_frame + 0x60)),fVar12 - fVar9,((undefined1 *)(gen_frame + 0x80)) + (*(int *)(gen_frame + 0x130)) * 0x10);
        puVar6 = ((undefined1 *)(gen_frame + 0x40));
        in_ecx = F_00d8ae30(((undefined1 *)(gen_frame + 0x20)),fVar9,((undefined1 *)(gen_frame + 0xa0)) + ((*(int *)(gen_frame + 0x130)) + uVar8) * 0x10);
        uVar4 = F_00d8acf0(in_ecx GEN_EDX_ARG,puVar6,uVar4);
        dVar14 = F_00d8c5c0(iVar7 * 0x10 + *param_4,uVar4);
        bVar2 = dVar14 <= (double)param_9;
        iVar7 = (*(int *)(gen_frame + 0x134));
        iVar3 = (*(int *)(gen_frame + 0x140));
      }
      (*(int *)(gen_frame + 0x134)) = iVar7;
      (*(int *)(gen_frame + 0x140)) = iVar3;
      if (!bVar2) break;
      param_7 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x10c)) + uVar8)));
      (*(int *)(gen_frame + 0x148)) = param_2;
      if ((int)uVar8 < (*(int *)(gen_frame + 0x100))) {
        (*(undefined1 * PTR32 *)(gen_frame + 0x144)) = ((undefined1 *)(gen_frame + 0x90)) + (*(int *)(gen_frame + 0x108));
        puVar6 = ((undefined1 *)(gen_frame + 0x90)) + (param_2 - (*(int *)(gen_frame + 0x128))) * 0x10;
        do {
          F_00d8ab80(*param_4 + iVar3 GEN_EDX_ARG,puVar6);
          F_00d8ab80(*param_4 + iVar7 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x144)));
          param_7 = ((float *)GEN_TOP(((int)param_7 - 1)));
          (*(undefined1 * PTR32 *)(gen_frame + 0x144)) = (*(undefined1 * PTR32 *)(gen_frame + 0x144)) - 0x10;
          iVar5 = (*(int *)(gen_frame + 0x148)) + 1;
          iVar3 = iVar3 + 0x10;
          puVar6 = puVar6 + 0x10;
          iVar7 = iVar7 - 0x10;
          (*(int *)(gen_frame + 0x148)) = iVar5;
        } while ((int)uVar8 < (int)param_7 - iVar5);
      }
      (*(int *)(gen_frame + 0x120)) = (*(int *)(gen_frame + 0x120)) + 4;
      param_2 = param_2 - 1;
      (*(int *)(gen_frame + 0x128)) = (*(int *)(gen_frame + 0x128)) - 1;
      (*(int *)(gen_frame + 0x140)) = (*(int *)(gen_frame + 0x140)) - 0x10;
      (*(int *)(gen_frame + 0x134)) = (*(int *)(gen_frame + 0x134)) + 0x10;
      uVar8 = uVar8 + 1;
      iVar7 = (*(int *)(gen_frame + 0x10c));
    } while ((int)uVar8 < param_8);
    if (uVar8 != 0) {
      iVar7 = param_6 + 1;
      if (iVar7 <= (*(int *)(gen_frame + 0x118))) {
        if (3 < ((*(int *)(gen_frame + 0x118)) - iVar7) + 1) {
          iVar3 = (iVar7 - uVar8) * 4;
          do {
            iVar5 = iVar7 * 4;
            iVar7 = iVar7 + 4;
            *((undefined4 *)GEN_TOP((iVar3 + *param_3))) = *((undefined4 *)GEN_TOP((*param_3 + iVar5)));
            *((undefined4 *)GEN_TOP((iVar3 + 4 + *param_3))) = *((undefined4 *)GEN_TOP((*param_3 - 0xc + iVar7 * 4)));
            *((undefined4 *)GEN_TOP((iVar3 + 8 + *param_3))) = *((undefined4 *)GEN_TOP((*param_3 - 8 + iVar7 * 4)));
            *((undefined4 *)GEN_TOP((iVar3 + 0xc + *param_3))) = *((undefined4 *)GEN_TOP((*param_3 - 4 + iVar7 * 4)));
            iVar3 = iVar3 + 0x10;
          } while (iVar7 <= (*(int *)(gen_frame + 0x118)) - 3);
        }
        if (iVar7 <= (*(int *)(gen_frame + 0x118))) {
          iVar3 = (iVar7 - uVar8) * 4;
          do {
            iVar5 = iVar7 * 4;
            iVar7 = iVar7 + 1;
            *((undefined4 *)GEN_TOP((iVar3 + *param_3))) = *((undefined4 *)GEN_TOP((*param_3 + iVar5)));
            iVar3 = iVar3 + 4;
          } while (iVar7 <= (*(int *)(gen_frame + 0x118)));
        }
      }
      uVar4 = 1;
      param_7 = ((float *)GEN_TOP((*(int *)(gen_frame + 0x104))));
      iVar7 = (*(int *)(gen_frame + 0x104));
      if (1 < (int)uVar8) {
        do {
          if ((uVar4 & 1) == 0) {
            param_7 = ((float *)GEN_TOP(((int)param_7 - 1)));
          }
          else {
            iVar7 = iVar7 + 1;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)uVar8);
      }
      iVar3 = iVar7 + 1;
      if (iVar3 <= param_1) {
        iVar5 = iVar3 * 0x10;
        iVar7 = ((iVar3 - iVar7) - 1 + (int)param_7) * 0x10;
        param_7 = ((float *)GEN_TOP(((param_1 - iVar3) + 1)));
        do {
          F_00d8ab80(*param_4 + iVar7 GEN_EDX_ARG,*param_4 + iVar5);
          iVar5 = iVar5 + 0x10;
          iVar7 = iVar7 + 0x10;
          param_7 = ((float *)GEN_TOP(((int)param_7 - 1)));
        } while (param_7 != ((float *)GEN_TOP(0x0)));
      }
      iVar7 = param_4[1] - param_8;
      if ((int)(param_4[2] & 0x3fffffffU) < iVar7) {
        iVar3 = (param_4[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar7) {
          iVar3 = iVar7;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,iVar3,0x10);
        fVar13 = 0.0;
      }
      param_7 = ((float *)GEN_TOP((iVar7 - param_4[1])));
      iVar3 = param_4[1] * 0x10 + *param_4;
      if (0 < (int)param_7) {
        do {
          if (iVar3 != 0) {
            F_00d8ab50(iVar3 GEN_EDX_ARG,fVar13,fVar13,fVar13,fVar13);
          }
          iVar3 = iVar3 + 0x10;
          param_7 = ((float *)GEN_TOP(((int)param_7 - 1)));
        } while (param_7 != ((float *)GEN_TOP(0x0)));
      }
      param_4[1] = iVar7;
      iVar7 = param_3[1] - param_8;
      if ((int)(param_3[2] & 0x3fffffffU) < iVar7) {
        iVar3 = (param_3[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar7) {
          iVar3 = iVar7;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_3,iVar3,4);
      }
      param_3[1] = iVar7;
      return uVar8;
    }
  }
  return 0;
}

/* ref: FUN_00d8d5d0 */
GEN_LIB GEN_FRAME uint F_00d8d5d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd8d5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x284, 12, 4);
  float * pfVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float * pfVar5;
  undefined1 * puVar6;
  float * pfVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  float * pfVar11;
  float * pfVar12;
  int iVar13;
  float * pfVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 * puVar20;
  undefined1 * puVar21;
  
  iVar13 = *param_1;
  iVar3 = iVar13 + 1 + (int)param_2;
  (*(int *)(gen_frame + 0x240)) = iVar3;
  if (param_5 == 0) {
    return (uint)param_1;
  }
  pfVar5 = ((float *)(gen_frame + 0x180));
  iVar8 = 3;
  do {
    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(0x0));
    F_00d8ab50(pfVar5 GEN_EDX_ARG,0.0,0.0,0.0,0.0);
    pfVar5 = ((float *)GEN_TOP((((int)(uint)(pfVar5)) + 0x10)));
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  puVar6 = ((undefined1 *)(gen_frame + 0x60));
  iVar8 = 3;
  do {
    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(0x0));
    F_00d8ab50(puVar6 GEN_EDX_ARG,0.0,0.0,0.0,0.0);
    puVar6 = ((undefined1 *)GEN_TOP((((int)(uint)(puVar6)) + 0x10)));
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  puVar6 = ((undefined1 *)(gen_frame + 0x10));
  iVar8 = 3;
  do {
    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(0x0));
    F_00d8ab50(puVar6 GEN_EDX_ARG,0.0,0.0,0.0,0.0);
    puVar6 = ((undefined1 *)GEN_TOP((((int)(uint)(puVar6)) + 0x10)));
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(iVar3));
  uVar2 = F_00d8c2f0(param_3,iVar3);
  iVar13 = (uVar2 - 1) * param_5 + iVar13;
  iVar3 = (int)param_2 + param_5 + iVar13 + 2;
  (*(int *)(gen_frame + 0x22c)) = iVar13;
  if (iVar3 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x250)) = ((float *)GEN_TOP(0x0));
LAB_00d8d6f7: ;
    uVar2 = 0x80000000;
  }
  else {
    (*(float * PTR32 *)(gen_frame + 0x274)) = ((float *)GEN_TOP((iVar3 * 4)));
    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = &(*(float * PTR32 *)(gen_frame + 0x274));
    pfVar5 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(float * PTR32 *)(gen_frame + 0x274)))));
    uVar2 = (int)((int)(*(float * PTR32 *)(gen_frame + 0x274)) + ((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x274))) >> 0x1f & 3U)) >> 2;
    (*(float * PTR32 *)(gen_frame + 0x250)) = pfVar5;
    if (uVar2 == 0) goto LAB_00d8d6f7;
  }
  (*(uint *)(gen_frame + 0x228)) = uVar2;
  iVar13 = iVar13 + 1;
  (*(float * PTR32 *)(gen_frame + 0x220)) = (*(float * PTR32 *)(gen_frame + 0x250));
  (*(int *)(gen_frame + 0x224)) = iVar3;
  if (iVar13 == 0) {
    (*(uint *)(gen_frame + 0x244)) = 0;
  }
  else {
    (*(float * PTR32 *)(gen_frame + 0x274)) = ((float *)GEN_TOP((iVar13 * 0x10)));
    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = &(*(float * PTR32 *)(gen_frame + 0x274));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(float * PTR32 *)(gen_frame + 0x274)));
    iVar3 = (int)((int)(*(float * PTR32 *)(gen_frame + 0x274)) + ((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x274))) >> 0x1f & 0xfU)) >> 4;
    (*(uint *)(gen_frame + 0x244)) = uVar2;
    if (iVar3 != 0) goto LAB_00d8d746;
  }
  iVar3 = ((int)0x80000000);
LAB_00d8d746: ;
  (*(uint *)(gen_frame + 0x210)) = (*(uint *)(gen_frame + 0x244));
  (*(int *)(gen_frame + 0x214)) = iVar13;
  (*(int *)(gen_frame + 0x218)) = iVar3;
  uVar2 = (*(uint *)(gen_frame + 0x244));
  if (0 < iVar13) {
    do {
      iVar3 = 0;
      if (uVar2 != 0) {
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(0x0));
        F_00d8ab50(uVar2 GEN_EDX_ARG,0.0,0.0,0.0,0.0);
        iVar3 = ((int)(uint)(uVar2));
      }
      uVar2 = iVar3 + 0x10;
      iVar13 = iVar13 - 1;
    } while (iVar13 != 0);
  }
  iVar13 = (int)param_2 + param_5;
  (*(int *)(gen_frame + 0x260)) = iVar13;
  ((float *)(gen_frame + 0x1b8))[(int)((int)(param_2 + iVar13) + 2)] = GEN_FLT_TO(((float *)(gen_frame + 0x1b8))[(int)((int)(param_2 + iVar13) + 2)], REFG(float, 0x1087f04));
  (*(int *)(gen_frame + 0x248)) = iVar13 / 2;
  ((float *)(gen_frame + 0x1b8))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x1b8))[2], REFG(float, 0x1087f04));
  (*(float * PTR32 *)(gen_frame + 0x278)) = ((float *)GEN_TOP(0x1));
  fVar19 = REFG(float, 0x1087f04);
  if (0 < iVar13 / 2) {
    (*(float * PTR32 *)(gen_frame + 0x26c)) = ((float *)GEN_TOP((1 - param_5)));
    do {
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0x278));
      (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)(*(float * PTR32 *)(gen_frame + 0x278));
      uVar2 = F_00d8ab10((*(int *)(gen_frame + 0x260)),(*(float * PTR32 *)(gen_frame + 0x278)));
      fVar16 = fVar19 / (float)(int)uVar2;
      if ((int)param_2 < (int)pfVar5) {
        (*(float * PTR32 *)(gen_frame + 0x274)) = param_2;
        pfVar5 = param_2;
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x274)) = pfVar5;
      }
      uVar2 = ((int)(*(float * PTR32 *)(gen_frame + 0x26c)) < 0) - 1 & (uint)(*(float * PTR32 *)(gen_frame + 0x26c));
      (*(float * PTR32 *)(gen_frame + 0x274)) = pfVar5;
      if ((int)uVar2 <= (int)pfVar5) {
        iVar13 = (int)(*(float * PTR32 *)(gen_frame + 0x278)) - uVar2;
        pfVar5 = ((float *)(gen_frame + 0x1b8)) + uVar2 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x278))) * 4 + 2;
        do {
          (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
          uVar4 = F_00d8ab10(param_2,uVar2);
          fVar17 = (float)(int)uVar4 * fVar16;
          uVar4 = F_00d8ab10(param_5,iVar13);
          *pfVar5 = fVar17 * (float)(int)uVar4;
          uVar2 = uVar2 + 1;
          pfVar5 = pfVar5 + 1;
          iVar13 = iVar13 - 1;
        } while ((int)uVar2 <= (int)(*(float * PTR32 *)(gen_frame + 0x274)));
      }
      (*(float * PTR32 *)(gen_frame + 0x26c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x26c)) + 1)));
      pfVar5 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x278)) + 1)));
      (*(float * PTR32 *)(gen_frame + 0x278)) = pfVar5;
    } while ((int)pfVar5 <= (*(int *)(gen_frame + 0x248)));
  }
  pfVar5 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x248)) + 1)));
  if ((int)pfVar5 <= (*(int *)(gen_frame + 0x260)) - 1) {
    (*(float * PTR32 *)(gen_frame + 0x26c)) = ((float *)GEN_TOP(((int)pfVar5 - param_5)));
    (*(float * PTR32 *)(gen_frame + 0x278)) = ((float *)GEN_TOP((((*(int *)(gen_frame + 0x260)) - (int)pfVar5) * 4)));
    do {
      pfVar14 = param_2;
      if ((int)pfVar5 <= (int)param_2) {
        pfVar14 = pfVar5;
      }
      uVar2 = (uint)(*(float * PTR32 *)(gen_frame + 0x26c)) & ((int)(*(float * PTR32 *)(gen_frame + 0x26c)) < 0) - 1;
      if ((int)uVar2 <= (int)pfVar14) {
        if (3 < (int)((int)pfVar14 + (1 - uVar2))) {
          iVar8 = (int)(*(float * PTR32 *)(gen_frame + 0x278)) - uVar2;
          iVar13 = uVar2 + (int)((int)(uintptr_t)pfVar5) * 4;
          iVar3 = ((int)pfVar14 + (-3 - uVar2) >> 2) + 1;
          uVar2 = uVar2 + iVar3 * 4;
          pfVar9 = ((float *)(gen_frame + 0x1b8)) + iVar13 + 3;
          pfVar11 = ((float *)(gen_frame + 0x1b8)) + iVar8 + (int)param_2;
          do {
            pfVar9[-1] = pfVar11[2];
            iVar3 = iVar3 - 1;
            *pfVar9 = pfVar11[1];
            pfVar9[1] = *pfVar11;
            pfVar9[2] = pfVar11[-1];
            pfVar9 = pfVar9 + 4;
            pfVar11 = pfVar11 - 4;
          } while (iVar3 != 0);
        }
        if ((int)uVar2 <= (int)pfVar14) {
          pfVar9 = ((float *)(gen_frame + 0x1b8)) + (int)param_2 + (int)(*(float * PTR32 *)(gen_frame + 0x278)) + (2 - uVar2);
          iVar13 = (int)pfVar14 + (1 - uVar2);
          pfVar14 = ((float *)(gen_frame + 0x1b8)) + uVar2 + (int)((int)(uintptr_t)pfVar5) * 4 + 2;
          do {
            *pfVar14 = *pfVar9;
            pfVar9 = pfVar9 - 1;
            iVar13 = iVar13 - 1;
            pfVar14 = pfVar14 + 1;
          } while (iVar13 != 0);
        }
      }
      (*(float * PTR32 *)(gen_frame + 0x26c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x26c)) + 1)));
      (*(float * PTR32 *)(gen_frame + 0x278)) = (*(float * PTR32 *)(gen_frame + 0x278)) - 1;
      pfVar5 = ((float *)GEN_TOP(((int)pfVar5 + 1)));
    } while ((int)pfVar5 <= (*(int *)(gen_frame + 0x260)) - 1);
  }
  iVar8 = (*(int *)(gen_frame + 0x260));
  pfVar14 = *((float * PTR32 *)GEN_TOP(*param_3));
  iVar3 = *param_4;
  (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(iVar3));
  iVar13 = (*(int *)(gen_frame + 0x260)) + 1;
  pfVar5 = ((float *)GEN_TOP(((int)param_2 + 1)));
  (*(int *)(gen_frame + 0x24c)) = iVar13;
  (*(float * PTR32 *)(gen_frame + 0x23c)) = ((float *)GEN_TOP(0xffffffff));
  (*(float * PTR32 *)(gen_frame + 0x26c)) = param_2;
  (*(float * PTR32 *)(gen_frame + 0x268)) = pfVar5;
  (*(int *)(gen_frame + 0x248)) = 1;
  (*(float * PTR32 *)(gen_frame + 0x274)) = pfVar14;
  F_00d8ab80((*(uint *)(gen_frame + 0x244)) GEN_EDX_ARG,iVar3);
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x250));
  if (-1 < iVar8) {
    for (; pfVar5 = (*(float * PTR32 *)(gen_frame + 0x268)), iVar13 != 0; iVar13 = iVar13 - 1) {
      *pfVar9 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x274)))));
      pfVar9 = pfVar9 + 1;
    }
  }
  if (-1 < (int)param_2) {
    pfVar9 = ((float *)(gen_frame + 0x180));
    iVar13 = *param_4 - (int)pfVar9;
    pfVar11 = pfVar5;
    do {
      iVar3 = (int)pfVar9 + iVar13;
      (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(iVar3));
      F_00d8ab80(pfVar9 GEN_EDX_ARG,iVar3);
      pfVar9 = pfVar9 + 4;
      pfVar11 = ((float *)GEN_TOP(((int)pfVar11 - 1)));
    } while (pfVar11 != ((float *)GEN_TOP(0x0)));
  }
  if ((int)pfVar5 < (*(int *)(gen_frame + 0x240))) {
    do {
      pfVar9 = (*(float * PTR32 *)(gen_frame + 0x268));
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0x23c));
      if ((int)(*(float * PTR32 *)(gen_frame + 0x268)) < (*(int *)(gen_frame + 0x240))) {
        if (3 < (*(int *)(gen_frame + 0x240)) - (int)(*(float * PTR32 *)(gen_frame + 0x268))) {
          pfVar11 = ((float *)GEN_TOP((*param_3 + 8 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x268))) * 4)));
          pfVar7 = (*(float * PTR32 *)(gen_frame + 0x268));
          do {
            fVar16 = pfVar11[-1];
            bVar15 = GEN_ISNAN(pfVar11[-2]) || GEN_ISNAN(fVar16);
            if (bVar15 == (bVar15 || pfVar11[-2] == fVar16)) goto LAB_00d8da77;
            fVar17 = *pfVar11;
            if ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar17)) == ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar17)) || fVar16 == fVar17)) {
              pfVar7 = ((float *)GEN_TOP(((int)pfVar7 + 1)));
              goto LAB_00d8da77;
            }
            fVar16 = pfVar11[1];
            if ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16)) == ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16)) || fVar17 == fVar16)) {
              pfVar7 = ((float *)GEN_TOP(((int)pfVar7 + 2)));
              goto LAB_00d8da77;
            }
            bVar15 = GEN_ISNAN(fVar16) || GEN_ISNAN(pfVar11[2]);
            if (bVar15 == (bVar15 || fVar16 == pfVar11[2])) {
              pfVar7 = ((float *)GEN_TOP(((int)pfVar7 + 3)));
              goto LAB_00d8da77;
            }
            pfVar7 = pfVar7 + 1;
            pfVar11 = pfVar11 + 4;
          } while ((int)pfVar7 < (*(int *)(gen_frame + 0x240)) - 3);
          (*(float * PTR32 *)(gen_frame + 0x268)) = pfVar7;
        }
        if ((int)(*(float * PTR32 *)(gen_frame + 0x268)) < (*(int *)(gen_frame + 0x240))) {
          pfVar11 = ((float *)GEN_TOP((*param_3 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x268))) * 4)));
          pfVar7 = (*(float * PTR32 *)(gen_frame + 0x268));
          do {
            bVar15 = GEN_ISNAN(*pfVar11) || GEN_ISNAN(pfVar11[1]);
            if (bVar15 == (bVar15 || *pfVar11 == pfVar11[1])) break;
            pfVar7 = ((float *)GEN_TOP(((int)pfVar7 + 1)));
            pfVar11 = pfVar11 + 1;
          } while ((int)pfVar7 < (*(int *)(gen_frame + 0x240)));
LAB_00d8da77: ;
          (*(float * PTR32 *)(gen_frame + 0x268)) = pfVar7;
        }
      }
      pfVar1 = (*(float * PTR32 *)(gen_frame + 0x268));
      puVar6 = ((undefined1 *)GEN_TOP(*param_3));
      pfVar7 = *(float * PTR32 *)(puVar6 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x268))) * 4);
      iVar13 = (int)(*(float * PTR32 *)(gen_frame + 0x268)) + (1 - (int)pfVar9);
      pfVar11 = ((float *)GEN_TOP(((int)param_2 - iVar13)));
      (*(undefined1 * PTR32 *)(gen_frame + 0x258)) = puVar6;
      (*(float * PTR32 *)(gen_frame + 0x21c)) = pfVar7;
      (*(float * PTR32 *)(gen_frame + 0x278)) = (*(float * PTR32 *)(gen_frame + 0x23c));
      (*(float * PTR32 *)(gen_frame + 0x254)) = pfVar11;
      (*(float * PTR32 *)(gen_frame + 0x23c)) = pfVar11;
      if ((int)pfVar5 < 1) {
        (*(float * PTR32 *)(gen_frame + 0x238)) = ((float *)GEN_TOP(0x1));
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x238)) = ((float *)GEN_TOP((((int)pfVar5 + 2) / 2)));
      }
      iVar3 = (*(int *)(gen_frame + 0x260));
      if (0 < (int)pfVar11) {
        iVar3 = (*(int *)(gen_frame + 0x260)) - ((int)pfVar11 + 1) / 2;
      }
      (*(int *)(gen_frame + 0x230)) = iVar3;
      if (0 < (int)pfVar11) {
        fVar16 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar7))) - ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14)));
        if (iVar13 < (int)param_2) {
          pfVar5 = param_2;
          if (3 < (int)pfVar11) {
            pfVar10 = ((float *)GEN_TOP((puVar6 + ((int)(*(float * PTR32 *)(gen_frame + 0x26c)) + (int)param_2) * 4 - 8)));
            pfVar12 = ((float *)GEN_TOP((puVar6 + ((int)(*(float * PTR32 *)(gen_frame + 0x26c)) + (int)param_2) * 4 - 4)));
            (*(float * PTR32 *)(gen_frame + 0x264)) = pfVar12;
            iVar3 = ((uint)((int)param_2 + (-4 - iVar13)) >> 2) + 1;
            pfVar5 = param_2 - iVar3;
            pfVar11 = ((float *)(gen_frame + 0x1f8)) + (int)pfVar11;
            do {
              fVar17 = *pfVar12;
              pfVar11[1] = fVar16 / (pfVar10[2] - ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))));
              fVar18 = *pfVar10;
              *pfVar11 = fVar16 / (fVar17 - ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))));
              fVar17 = pfVar10[-1];
              pfVar11[-1] = fVar16 / (fVar18 - ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))));
              pfVar11[-2] = fVar16 / (fVar17 - ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))));
              pfVar12 = pfVar12 - 4;
              pfVar10 = pfVar10 - 4;
              pfVar11 = pfVar11 - 4;
              iVar3 = iVar3 - 1;
            } while (iVar3 != 0);
          }
          pfVar11 = (*(float * PTR32 *)(gen_frame + 0x254));
          if (iVar13 < (int)pfVar5) {
            iVar13 = (int)pfVar5 - iVar13;
            pfVar5 = ((float *)GEN_TOP(((*(undefined1 * PTR32 *)(gen_frame + 0x258)) + ((int)pfVar5 + (int)(*(float * PTR32 *)(gen_frame + 0x26c))) * 4)));
            pfVar10 = ((float *)(gen_frame + 0x1f8)) + iVar13 + 1;
            do {
              *pfVar10 = fVar16 / (*pfVar5 - ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))));
              pfVar5 = pfVar5 - 1;
              pfVar10 = pfVar10 - 1;
              iVar13 = iVar13 - 1;
            } while (iVar13 != 0);
          }
        }
        if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x23c))) {
          (*(float * PTR32 *)(gen_frame + 0x264)) = ((float *)(gen_frame + 0x180)) + (int)((int)(uintptr_t)param_2) * 4;
          (*(float * PTR32 *)(gen_frame + 0x27c)) = ((float *)GEN_TOP(((int)pfVar1 + (2 - (int)pfVar9))));
          (*(undefined1 * PTR32 *)(gen_frame + 0x258)) = ((undefined1 *)(gen_frame + 0x10)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x23c))) * 0x10 - 0x10;
          (*(float * PTR32 *)(gen_frame + 0x25c)) = ((float *)(gen_frame + 0x1f8)) + (int)pfVar11 + 1;
          (*(float * PTR32 *)(gen_frame + 0x254)) = (*(float * PTR32 *)(gen_frame + 0x23c));
          do {
            if ((int)(*(float * PTR32 *)(gen_frame + 0x27c)) <= (int)param_2) {
              (*(float * PTR32 *)(gen_frame + 0x270)) = (*(float * PTR32 *)(gen_frame + 0x25c));
              iVar13 = (int)param_2 + (1 - (int)(*(float * PTR32 *)(gen_frame + 0x27c)));
              pfVar5 = (*(float * PTR32 *)(gen_frame + 0x264));
              do {
                fVar16 = *(*(float * PTR32 *)(gen_frame + 0x270));
                pfVar9 = pfVar5 - 4;
                (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)pfVar9;
                uVar2 = F_00d8ae30(((undefined1 *)(gen_frame + 0xc0)),fVar19 - fVar16,pfVar9);
                (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
                puVar6 = ((undefined1 *)(gen_frame + 0xd0));
                uVar2 = F_00d8ae30(((undefined1 *)(gen_frame + 0xb0)),fVar16,pfVar5);
                uVar2 = F_00d8acf0(uVar2 GEN_EDX_ARG,puVar6,(*(float * PTR32 * PTR32 *)(gen_frame + 0x0)));
                (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
                F_00d8ab80(pfVar5 GEN_EDX_ARG,uVar2);
                (*(float * PTR32 *)(gen_frame + 0x270)) = (*(float * PTR32 *)(gen_frame + 0x270)) - 1;
                iVar13 = iVar13 - 1;
                pfVar5 = pfVar9;
              } while (iVar13 != 0);
            }
            puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x258));
            (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)(*(float * PTR32 *)(gen_frame + 0x264));
            F_00d8ab80((*(undefined1 * PTR32 *)(gen_frame + 0x258)) GEN_EDX_ARG,(*(float * PTR32 *)(gen_frame + 0x264)));
            (*(float * PTR32 *)(gen_frame + 0x25c)) = (*(float * PTR32 *)(gen_frame + 0x25c)) - 1;
            (*(float * PTR32 *)(gen_frame + 0x27c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x27c)) + 1)));
            pfVar5 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x254)) - 1)));
            (*(float * PTR32 *)(gen_frame + 0x254)) = pfVar5;
            (*(undefined1 * PTR32 *)(gen_frame + 0x258)) = puVar6 - 0x10;
          } while (pfVar5 != ((float *)GEN_TOP(0x0)));
        }
      }
      (*(float * PTR32 *)(gen_frame + 0x27c)) = (*(float * PTR32 *)(gen_frame + 0x238));
      if ((int)(*(float * PTR32 *)(gen_frame + 0x238)) <= (*(int *)(gen_frame + 0x260))) {
        (*(float * PTR32 *)(gen_frame + 0x270)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x238)) - param_5)));
        puVar6 = ((undefined1 *)(gen_frame + 0x60)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x238))) * 0x10;
        do {
          (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(0x0));
          uVar2 = F_00d8ab50(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG,0.0,0.0,0.0,0.0);
          (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
          F_00d8ab80(puVar6 GEN_EDX_ARG,uVar2);
          pfVar5 = (*(float * PTR32 *)(gen_frame + 0x27c));
          if ((int)param_2 < (int)(*(float * PTR32 *)(gen_frame + 0x27c))) {
            pfVar5 = param_2;
          }
          uVar2 = ((int)(*(float * PTR32 *)(gen_frame + 0x270)) < 0) - 1 & (uint)(*(float * PTR32 *)(gen_frame + 0x270));
          if ((int)uVar2 <= (int)pfVar5) {
            pfVar9 = ((float *)(gen_frame + 0x180)) + uVar2 * 4;
            pfVar11 = ((float *)(gen_frame + 0x1b8)) + uVar2 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x27c))) * 4 + 2;
            (*(float * PTR32 *)(gen_frame + 0x264)) = ((float *)GEN_TOP(((int)pfVar5 + (1 - uVar2))));
            do {
              (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)pfVar9;
              uVar2 = F_00d8ae30(((undefined1 *)(gen_frame + 0x140)),*pfVar11,pfVar9);
              (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
              uVar2 = F_00d8acf0(puVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa0)),uVar2);
              (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
              F_00d8ab80(puVar6 GEN_EDX_ARG,uVar2);
              pfVar11 = pfVar11 + 1;
              pfVar9 = pfVar9 + 4;
              pfVar5 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x264)) - 1)));
              (*(float * PTR32 *)(gen_frame + 0x264)) = pfVar5;
            } while (pfVar5 != ((float *)GEN_TOP(0x0)));
          }
          (*(float * PTR32 *)(gen_frame + 0x270)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x270)) + 1)));
          pfVar5 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x27c)) + 1)));
          puVar6 = puVar6 + 0x10;
          (*(float * PTR32 *)(gen_frame + 0x27c)) = pfVar5;
        } while ((int)pfVar5 <= (*(int *)(gen_frame + 0x260)));
      }
      if (1 < (int)(*(float * PTR32 *)(gen_frame + 0x278))) {
        fVar17 = fVar19 / (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar7))) - ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))));
        (*(float * PTR32 *)(gen_frame + 0x25c)) = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x24c)) - 2)));
        fVar16 = (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar7))) - (*(float * PTR32 *)(gen_frame + 0x250))[(*(int *)(gen_frame + 0x24c)) - 1]) * fVar17;
        (*(float * PTR32 *)(gen_frame + 0x270)) = ((float *)GEN_TOP(0x1));
        if (1 < (int)(*(float * PTR32 *)(gen_frame + 0x278))) {
          (*(undefined1 * PTR32 *)(gen_frame + 0x258)) = ((undefined1 *)GEN_TOP((((*(int *)(gen_frame + 0x24c)) - 2) * 0x10 + (*(uint *)(gen_frame + 0x244)))));
          (*(float * PTR32 *)(gen_frame + 0x264)) = ((float *)(gen_frame + 0x70));
          do {
            iVar13 = (*(int *)(gen_frame + 0x24c)) - 1 + (int)(*(float * PTR32 *)(gen_frame + 0x270));
            if ((int)(*(float * PTR32 *)(gen_frame + 0x270)) < iVar13 - (int)(*(float * PTR32 *)(gen_frame + 0x25c))) {
              (*(float * PTR32 *)(gen_frame + 0x27c)) = (*(float * PTR32 *)(gen_frame + 0x264));
              (*(float * PTR32 *)(gen_frame + 0x254)) = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x24c)) - 1)));
              (*(float * PTR32 *)(gen_frame + 0x234)) = (*(float * PTR32 *)(gen_frame + 0x250)) + (*(int *)(gen_frame + 0x24c)) - 1;
              puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x258));
              pfVar5 = (*(float * PTR32 *)(gen_frame + 0x25c));
              do {
                if ((int)pfVar5 < (*(int *)(gen_frame + 0x248))) {
                  (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)(puVar6 - 0x10);
                  fVar18 = (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar7))) - (*(float * PTR32 *)(gen_frame + 0x250))[(int)pfVar5]) / (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))) - (*(float * PTR32 *)(gen_frame + 0x250))[(int)pfVar5]);
                  uVar2 = F_00d8ae30(((undefined1 *)(gen_frame + 0x120)),fVar19 - fVar18,puVar6 - 0x10);
                  (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
                  puVar21 = ((undefined1 *)(gen_frame + 0x170));
                  uVar2 = F_00d8ae30(((undefined1 *)(gen_frame + 0x100)),fVar18,puVar6);
                  uVar2 = F_00d8acf0(uVar2 GEN_EDX_ARG,puVar21,(*(float * PTR32 * PTR32 *)(gen_frame + 0x0)));
                  (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
                  F_00d8ab80(puVar6 GEN_EDX_ARG,uVar2);
                }
                if ((int)(*(float * PTR32 *)(gen_frame + 0x238)) <= iVar13) {
                  if ((int)(*(float * PTR32 *)(gen_frame + 0x278)) + ((*(int *)(gen_frame + 0x24c)) - (*(int *)(gen_frame + 0x260))) < (int)(*(float * PTR32 *)(gen_frame + 0x254))) {
                    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)((*(float * PTR32 *)(gen_frame + 0x27c)) + 4);
                    uVar2 = F_00d8ae30(((undefined1 *)(gen_frame + 0x130)),fVar19 - fVar16,(*(float * PTR32 *)(gen_frame + 0x27c)) + 4);
                    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
                    puVar21 = ((undefined1 *)(gen_frame + 0x110));
                    puVar20 = ((undefined1 *)(gen_frame + 0xf0));
                    fVar18 = fVar16;
                  }
                  else {
                    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)((*(float * PTR32 *)(gen_frame + 0x27c)) + 4);
                    fVar18 = (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar7))) - *(*(float * PTR32 *)(gen_frame + 0x234))) * fVar17;
                    uVar2 = F_00d8ae30(((undefined1 *)(gen_frame + 0x50)),fVar19 - fVar18,(*(float * PTR32 *)(gen_frame + 0x27c)) + 4);
                    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
                    puVar21 = ((undefined1 *)(gen_frame + 0x160));
                    puVar20 = ((undefined1 *)(gen_frame + 0x150));
                  }
                  uVar2 = F_00d8ae30(puVar20,fVar18,(*(float * PTR32 *)(gen_frame + 0x27c)));
                  uVar2 = F_00d8acf0(uVar2 GEN_EDX_ARG,puVar21,(*(float * PTR32 * PTR32 *)(gen_frame + 0x0)));
                  (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(uVar2));
                  F_00d8ab80((*(float * PTR32 *)(gen_frame + 0x27c)) GEN_EDX_ARG,uVar2);
                }
                (*(float * PTR32 *)(gen_frame + 0x234)) = (*(float * PTR32 *)(gen_frame + 0x234)) - 1;
                (*(float * PTR32 *)(gen_frame + 0x27c)) = (*(float * PTR32 *)(gen_frame + 0x27c)) - 4;
                (*(float * PTR32 *)(gen_frame + 0x254)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x254)) - 1)));
                iVar13 = iVar13 - 1;
                pfVar5 = ((float *)GEN_TOP(((int)pfVar5 + 1)));
                puVar6 = puVar6 + 0x10;
              } while ((int)(*(float * PTR32 *)(gen_frame + 0x270)) < iVar13 - (int)pfVar5);
            }
            (*(float * PTR32 *)(gen_frame + 0x25c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x25c)) - 1)));
            (*(undefined1 * PTR32 *)(gen_frame + 0x258)) = (*(undefined1 * PTR32 *)(gen_frame + 0x258)) - 0x10;
            (*(float * PTR32 *)(gen_frame + 0x264)) = (*(float * PTR32 *)(gen_frame + 0x264)) + 4;
            pfVar5 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x270)) + 1)));
            (*(float * PTR32 *)(gen_frame + 0x270)) = pfVar5;
          } while ((int)pfVar5 < (int)(*(float * PTR32 *)(gen_frame + 0x278)));
        }
      }
      if (((*(float * PTR32 *)(gen_frame + 0x26c)) != param_2) && (iVar13 = (*(int *)(gen_frame + 0x260)) - (int)(*(float * PTR32 *)(gen_frame + 0x278)), 0 < iVar13)) {
        iVar3 = (*(int *)(gen_frame + 0x24c)) + iVar13;
        pfVar5 = (*(float * PTR32 *)(gen_frame + 0x250)) + (*(int *)(gen_frame + 0x24c));
        for (; iVar13 != 0; iVar13 = iVar13 - 1) {
          *pfVar5 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x274)))));
          pfVar5 = pfVar5 + 1;
        }
        (*(int *)(gen_frame + 0x24c)) = iVar3;
      }
      if ((int)(*(float * PTR32 *)(gen_frame + 0x238)) <= (*(int *)(gen_frame + 0x230))) {
        iVar3 = (*(int *)(gen_frame + 0x248)) * 0x10 + (*(uint *)(gen_frame + 0x244));
        iVar13 = ((*(int *)(gen_frame + 0x230)) - (int)(*(float * PTR32 *)(gen_frame + 0x238))) + 1;
        puVar6 = ((undefined1 *)(gen_frame + 0x60)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x238))) * 0x10;
        (*(int *)(gen_frame + 0x248)) = (*(int *)(gen_frame + 0x248)) + iVar13;
        do {
          (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)puVar6;
          F_00d8ab80(iVar3 GEN_EDX_ARG,puVar6);
          iVar3 = iVar3 + 0x10;
          puVar6 = puVar6 + 0x10;
          iVar13 = iVar13 - 1;
        } while (iVar13 != 0);
      }
      pfVar9 = (*(float * PTR32 *)(gen_frame + 0x268));
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0x23c));
      if ((int)(*(float * PTR32 *)(gen_frame + 0x268)) < (*(int *)(gen_frame + 0x240))) {
        if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x23c))) {
          iVar13 = 0;
          pfVar14 = (*(float * PTR32 *)(gen_frame + 0x23c));
          do {
            (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)(((undefined1 *)(gen_frame + 0x10)) + iVar13);
            F_00d8ab80((int)((float *)(gen_frame + 0x180)) + iVar13 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)) + iVar13);
            iVar13 = iVar13 + 0x10;
            pfVar14 = ((float *)GEN_TOP(((int)pfVar14 - 1)));
          } while (pfVar14 != ((float *)GEN_TOP(0x0)));
        }
        if ((int)pfVar5 <= (int)param_2) {
          pfVar14 = ((float *)(gen_frame + 0x180)) + (int)((int)(uintptr_t)pfVar5) * 4;
          iVar13 = (((int)pfVar9 - (int)param_2) + (int)pfVar5) * 0x10 + *param_4;
          iVar3 = (int)param_2 + (1 - (int)pfVar5);
          do {
            (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(iVar13));
            F_00d8ab80(pfVar14 GEN_EDX_ARG,iVar13);
            iVar13 = iVar13 + 0x10;
            pfVar14 = pfVar14 + 4;
            iVar3 = iVar3 - 1;
            pfVar9 = (*(float * PTR32 *)(gen_frame + 0x268));
          } while (iVar3 != 0);
        }
        (*(float * PTR32 *)(gen_frame + 0x26c)) = pfVar9;
        (*(float * PTR32 *)(gen_frame + 0x268)) = ((float *)GEN_TOP(((int)pfVar9 + 1)));
        (*(float * PTR32 *)(gen_frame + 0x274)) = pfVar7;
        pfVar14 = pfVar7;
      }
      else if (-1 < (*(int *)(gen_frame + 0x260))) {
        pfVar5 = (*(float * PTR32 *)(gen_frame + 0x250)) + (*(int *)(gen_frame + 0x24c));
        for (iVar13 = (*(int *)(gen_frame + 0x260)) + 1; iVar13 != 0; iVar13 = iVar13 - 1) {
          *pfVar5 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x21c)))));
          pfVar5 = pfVar5 + 1;
        }
      }
    } while ((int)(*(float * PTR32 *)(gen_frame + 0x268)) < (*(int *)(gen_frame + 0x240)));
  }
  (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)&(*(uint *)(gen_frame + 0x210));
  F_00d8fd80(param_4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x210)));
  (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 *)param_3;
  F_00d8fdb0(&(*(float * PTR32 *)(gen_frame + 0x220)) GEN_EDX_ARG,param_3);
  *param_1 = (*(int *)(gen_frame + 0x22c));
  if (-1 < (*(int *)(gen_frame + 0x218))) {
    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x218)) << 4)));
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x210)),(*(int *)(gen_frame + 0x218)) << 4);
  }
  uVar2 = (*(uint *)(gen_frame + 0x228));
  if (-1 < (int)(*(uint *)(gen_frame + 0x228))) {
    (*(float * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x228)) * 4)));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x220)),(*(uint *)(gen_frame + 0x228)) * 4);
  }
  return uVar2;
}

/* ref: FUN_00d8e100 */
GEN_LIB GEN_FRAME unsigned int F_00d8e100(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8e100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  int * piVar2;
  int iVar3;
  float * pfVar4;
  int iVar5;
  
  piVar2 = param_3;
  iVar1 = param_1;
  iVar5 = param_1 + 1;
  if ((int)(param_3[2] & 0x3fffffffU) < iVar5) {
    iVar3 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_3,iVar3,4);
  }
  param_3[1] = iVar5;
  *((undefined4 *)GEN_TOP(*param_3)) = 0;
  if (0 < param_1) {
    iVar5 = 1;
    do {
      (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)GEN_TOP((*piVar2 + iVar5 * 4)));
      pfVar4 = ((float *)GEN_TOP(F_00d8ad40(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_3)));
      iVar5 = iVar5 + 1;
      *(*(float * PTR32 *)(gen_frame + 0x10)) = ((float)GEN_TOF((GEN_X87(SQRT((((float10)pfVar4[1] * (float10)pfVar4[1] +
                               (float10)*pfVar4 * (float10)*pfVar4) +
                              (float10)pfVar4[2] * (float10)pfVar4[2]) +
                              (float10)pfVar4[3] * (float10)pfVar4[3])) + (float10)(*(float * PTR32 *)(gen_frame + 0x10))[-1])));
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 4;
    } while (iVar5 <= iVar1);
  }
  iVar5 = 1;
  if (1 < iVar1) {
    if (3 < iVar1 - 1) {
      do {
        iVar3 = *piVar2;
        *((float *)GEN_TOP((iVar3 + iVar5 * 4))) =
             *((float *)GEN_TOP((iVar3 + iVar5 * 4))) / *((float *)GEN_TOP((iVar3 + iVar1 * 4)));
        iVar3 = *piVar2;
        *((float *)GEN_TOP((iVar3 + 4 + iVar5 * 4))) =
             *((float *)GEN_TOP((iVar3 + 4 + iVar5 * 4))) / *((float *)GEN_TOP((iVar3 + iVar1 * 4)));
        iVar3 = *piVar2;
        *((float *)GEN_TOP((iVar3 + 8 + iVar5 * 4))) =
             *((float *)GEN_TOP((iVar3 + 8 + iVar5 * 4))) / *((float *)GEN_TOP((iVar3 + iVar1 * 4)));
        iVar3 = *piVar2;
        *((float *)GEN_TOP((iVar3 + 0xc + iVar5 * 4))) =
             *((float *)GEN_TOP((iVar3 + 0xc + iVar5 * 4))) / *((float *)GEN_TOP((iVar3 + iVar1 * 4)));
        iVar5 = iVar5 + 4;
      } while (iVar5 < iVar1 - 3);
    }
    for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
      iVar3 = *piVar2;
      *((float *)GEN_TOP((iVar3 + iVar5 * 4))) = *((float *)GEN_TOP((iVar3 + iVar5 * 4))) / *((float *)GEN_TOP((iVar3 + iVar1 * 4)));
    }
  }
  *((undefined4 *)GEN_TOP((*piVar2 + iVar1 * 4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*piVar2 + iVar1 * 4))), REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_00d8e240 */
GEN_LIB GEN_FRAME uint F_00d8e240(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xd8e240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_FRAME_DECL_TOP(0x78, 8, 4);
  undefined4 uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  int iVar8;
  float * pfVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  
  iVar8 = (int)gen_fl2bits(*param_1) + 1 + param_2;
  (*(int *)(gen_frame + 0x70)) = iVar8;
  iVar8 = iVar8 + 1;
  (*(float *)(gen_frame + 0x18)) = *param_1;
  if (iVar8 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x5c)) = ((float *)GEN_TOP(0x0));
LAB_00d8e294: ;
    iVar3 = ((int)0x80000000);
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP((iVar8 * 4)));
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)(gen_frame + 0x58)))));
    iVar3 = (int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x58))) >> 0x1f & 3U)) >> 2;
    (*(float * PTR32 *)(gen_frame + 0x5c)) = (float *)puVar2;
    if (iVar3 == 0) goto LAB_00d8e294;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)(*(float * PTR32 *)(gen_frame + 0x5c));
  (*(int *)(gen_frame + 0x10)) = iVar8;
  (*(int *)(gen_frame + 0x14)) = iVar3;
  iVar3 = iVar8;
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x5c));
  if (0 < iVar8) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *pfVar9 = 3.40282e+38;
      pfVar9 = pfVar9 + 1;
    }
  }
  iVar3 = param_5 + 1;
  if (iVar3 == 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
LAB_00d8e2ef: ;
    (*(int *)(gen_frame + 0x28)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x54)) = iVar3 * 4;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x54)))));
    iVar4 = (int)((*(int *)(gen_frame + 0x54)) + ((*(int *)(gen_frame + 0x54)) >> 0x1f & 3U)) >> 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar2;
    (*(int *)(gen_frame + 0x28)) = iVar4;
    if (iVar4 == 0) goto LAB_00d8e2ef;
  }
  iVar4 = iVar3;
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
  if (0 < iVar3) {
    for (; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if (iVar3 == 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = ((undefined4 *)GEN_TOP(0x0));
LAB_00d8e33e: ;
    (*(int *)(gen_frame + 0x2c)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x50)) = iVar3 * 4;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x50)))));
    iVar4 = (int)((*(int *)(gen_frame + 0x50)) + ((*(int *)(gen_frame + 0x50)) >> 0x1f & 3U)) >> 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = puVar2;
    (*(int *)(gen_frame + 0x2c)) = iVar4;
    if (iVar4 == 0) goto LAB_00d8e33e;
  }
  iVar4 = iVar3;
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x6c));
  if (0 < iVar3) {
    for (; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if (iVar3 == 0) {
    (*(uint *)(gen_frame + 0x30)) = 0;
LAB_00d8e38a: ;
    (*(int *)(gen_frame + 0x34)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x4c)) = iVar3 * 4;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x4c)));
    (*(uint *)(gen_frame + 0x30)) = uVar5;
    iVar4 = (int)((*(int *)(gen_frame + 0x4c)) + ((*(int *)(gen_frame + 0x4c)) >> 0x1f & 3U)) >> 2;
    (*(int *)(gen_frame + 0x34)) = iVar4;
    if (iVar4 == 0) goto LAB_00d8e38a;
  }
  if (iVar3 == 0) {
    (*(uint *)(gen_frame + 0x38)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x48)) = iVar3 * 4;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x48)));
    (*(uint *)(gen_frame + 0x38)) = uVar5;
    iVar3 = (int)((*(int *)(gen_frame + 0x48)) + ((*(int *)(gen_frame + 0x48)) >> 0x1f & 3U)) >> 2;
    (*(int *)(gen_frame + 0x3c)) = iVar3;
    if (iVar3 != 0) goto LAB_00d8e3d4;
  }
  (*(int *)(gen_frame + 0x3c)) = ((int)0x80000000);
LAB_00d8e3d4: ;
  F_00d8cf30((undefined4)gen_fl2bits(*param_1),param_2,param_3,param_4,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),param_2 + 1,
               ((*(int *)(gen_frame + 0x70)) - param_2) - 1);
  uVar5 = F_00d8c3d0(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),iVar8);
  (*(uint *)(gen_frame + 0x40)) = uVar5;
  uVar6 = F_00d8c280(uVar5,(*(int *)(gen_frame + 0x70)),param_3);
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x5c)) + uVar5;
  (*(uint *)(gen_frame + 0x60)) = uVar6;
  bVar10 = GEN_ISNAN(*pfVar9) || GEN_ISNAN(REFG(float, 0x11386a0));
  (*(float * PTR32 *)(gen_frame + 0x5c)) = (*(float * PTR32 *)(gen_frame + 0x5c)) + uVar5;
  if (bVar10 == (bVar10 || *pfVar9 == REFG(float, 0x11386a0))) {
    do {
      uVar6 = (*(uint *)(gen_frame + 0x60)) + param_2 & 0x80000001;
      bVar10 = uVar6 == 0;
      if ((int)uVar6 < 0) {
        bVar10 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar10) {
        fVar12 = 0.0;
        iVar8 = uVar5 - (int)((*(uint *)(gen_frame + 0x60)) + param_2) / 2;
      }
      else {
        iVar3 = *param_3;
        iVar8 = uVar5 - (int)(param_2 + 1 + (*(uint *)(gen_frame + 0x60))) / 2;
        fVar12 = *((float *)GEN_TOP((iVar3 + 4 + iVar8 * 4)));
        fVar12 = (*((float *)GEN_TOP((iVar3 + uVar5 * 4))) - fVar12) /
                 (*((float *)GEN_TOP((iVar3 + 8 + (iVar8 + param_2) * 4))) - fVar12);
        iVar8 = iVar8 + 1;
      }
      iVar3 = *param_3;
      uVar6 = F_00d8c210(GEN_ARGF(*((float *)GEN_TOP((iVar3 + iVar8 * 4)))),param_6,param_5);
      (*(uint *)(gen_frame + 0x68)) = uVar6;
      uVar6 = F_00d8c210(GEN_ARGF(*((float *)GEN_TOP((iVar3 + 4 + (iVar8 + param_2) * 4)))),param_6,param_5);
      fVar13 = 0.0;
      (*(int *)(gen_frame + 0x64)) = uVar6 - 1;
      if ((int)(*(uint *)(gen_frame + 0x68)) <= (int)(uVar6 - 1)) {
        (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1087f04) - fVar12;
        (*(int *)(gen_frame + 0x20)) = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c));
        uVar6 = (*(uint *)(gen_frame + 0x68));
        do {
          fVar11 = F_00d8bc90(param_2,(*(int *)(gen_frame + 0x70)),param_3,iVar8,GEN_ARGF(*((float *)GEN_TOP((*param_6 + uVar6 * 4)))));
          fVar11 = GEN_X87(((float10)*(*(float * PTR32 *)(gen_frame + 0x5c)) * (float10)(*(float *)(gen_frame + 0x24))) * fVar11);
          fVar12 = (float)fVar11;
          (*(float *)(gen_frame + 0x1c)) = fVar12;
          *((float *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + (int)((*(undefined4 * PTR32 *)(gen_frame + 0x6c)) + uVar6)))) = (float)fVar11;
          fVar12 = *((float *)GEN_TOP((*param_7 + uVar6 * 4))) + fVar12;
          (*(undefined4 * PTR32 *)(gen_frame + 0x6c))[uVar6] = (undefined4)gen_fl2bits(fVar12);
          if (!(fVar12 < fVar13)) {
            fVar13 = fVar12;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 <= (*(int *)(gen_frame + 0x64)));
      }
      if (fVar13 <= param_8) {
        (*(uint *)(gen_frame + 0x0)) = 0;
        (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
        if (0 < param_7[1]) {
          (*(int *)(gen_frame + 0x44)) = param_7[1] * 4;
          (*(uint *)(gen_frame + 0x0)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x44)));
          (*(int *)(gen_frame + 0x8)) = (int)((*(int *)(gen_frame + 0x44)) + ((*(int *)(gen_frame + 0x44)) >> 0x1f & 3U)) >> 2;
        }
        iVar3 = param_7[1];
        pfVar9 = ((float *)GEN_TOP(*param_7));
        iVar8 = 0;
        (*(float * PTR32 *)(gen_frame + 0x5c)) = pfVar9;
        if (3 < iVar3) {
          (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)pfVar9 - (*(uint *)(gen_frame + 0x0)));
          iVar4 = (iVar3 - 4U >> 2) + 1;
          iVar8 = iVar4 * 4;
          (*(int *)(gen_frame + 0x20)) = iVar8;
          puVar2 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 4)));
          pfVar7 = pfVar9 + 3;
          do {
            puVar2[-1] = (undefined4)gen_fl2bits(pfVar7[-3]);
            iVar4 = iVar4 - 1;
            *puVar2 = *((undefined4 *)GEN_TOP((((int)pfVar9 - (*(uint *)(gen_frame + 0x0))) - 0x10 + (int)(puVar2 + 4))));
            puVar2[1] = (undefined4)gen_fl2bits(pfVar7[-1]);
            puVar2[2] = (undefined4)gen_fl2bits(*pfVar7);
            puVar2 = puVar2 + 4;
            pfVar7 = pfVar7 + 4;
          } while (iVar4 != 0);
        }
        if (iVar8 < iVar3) {
          iVar3 = iVar3 - iVar8;
          puVar2 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + iVar8 * 4)));
          do {
            iVar3 = iVar3 - 1;
            *puVar2 = *((undefined4 *)GEN_TOP(((int)puVar2 + ((int)pfVar9 - (*(uint *)(gen_frame + 0x0))))));
            puVar2 = puVar2 + 1;
          } while (iVar3 != 0);
        }
        if ((int)(*(uint *)(gen_frame + 0x68)) <= (*(int *)(gen_frame + 0x64))) {
          uVar6 = (*(uint *)(gen_frame + 0x68));
          if (3 < (int)(((*(int *)(gen_frame + 0x64)) - (*(uint *)(gen_frame + 0x68))) + 1)) {
            (*(int *)(gen_frame + 0x20)) = 4 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c));
            fVar12 = gen_bits2f(-8 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c)));
            iVar8 = (*(uint *)(gen_frame + 0x68)) * 4 + 8;
            iVar3 = (((*(int *)(gen_frame + 0x64)) - (*(uint *)(gen_frame + 0x68))) - 3 >> 2) + 1;
            puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) + (*(uint *)(gen_frame + 0x68)) + 2;
            (*(float *)(gen_frame + 0x1c)) = fVar12;
            uVar6 = (*(uint *)(gen_frame + 0x68)) + iVar3 * 4;
            do {
              *((undefined4 *)GEN_TOP(((int)puVar2 + *param_7 + (int)gen_fl2bits(fVar12)))) = puVar2[-2];
              *((undefined4 *)GEN_TOP(((int)puVar2 + *param_7 + 4 + (int)gen_fl2bits(fVar12)))) = puVar2[-1];
              *((undefined4 *)GEN_TOP((iVar8 + *param_7))) = *puVar2;
              iVar8 = iVar8 + 0x10;
              *((undefined4 *)GEN_TOP((*param_7 + (4 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c))) + (int)puVar2))) = puVar2[1];
              puVar2 = puVar2 + 4;
              iVar3 = iVar3 - 1;
              uVar5 = (*(uint *)(gen_frame + 0x40));
            } while (iVar3 != 0);
          }
          for (; (int)uVar6 <= (*(int *)(gen_frame + 0x64)); uVar6 = uVar6 + 1) {
            uVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x6c))[uVar6];
            iVar8 = *param_7;
            *((undefined4 *)GEN_TOP((iVar8 + uVar6 * 4))) = uVar1;
          }
        }
        F_00d8d050((undefined4)gen_fl2bits(*param_1),param_2,param_3,param_4,GEN_ARGF(*((float *)GEN_TOP((*param_3 + uVar5 * 4)))),uVar5,(*(uint *)(gen_frame + 0x60)),1,REFG(float, 0x11386a0));
        iVar8 = (*(int *)(gen_frame + 0x70));
        *param_1 = gen_bits2f((int)gen_fl2bits(*param_1) - 1);
        (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) - 1;
        if (iVar8 <= param_2 * 2 + 2) {
          if (-1 < (*(int *)(gen_frame + 0x8))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
          }
          break;
        }
        F_00d8c630(uVar5,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),iVar8);
        iVar8 = (*(int *)(gen_frame + 0x70));
        (*(float * PTR32 *)(gen_frame + 0x5c)) = ((float *)GEN_TOP((uVar5 - param_2)));
        if ((int)(uVar5 - param_2) <= param_2 + 1) {
          (*(float * PTR32 *)(gen_frame + 0x5c)) = ((float *)GEN_TOP((param_2 + 1)));
        }
        fVar12 = *param_1;
        fVar13 = gen_bits2f((uVar5 - (*(uint *)(gen_frame + 0x60))) + param_2);
        (*(float *)(gen_frame + 0x1c)) = fVar12;
        if ((int)gen_fl2bits(fVar13) < (int)gen_fl2bits(fVar12)) {
          fVar12 = fVar13;
        }
        uVar5 = F_00d8c5f0((undefined4)gen_fl2bits(fVar12),param_3,(*(int *)(gen_frame + 0x70)));
        uVar6 = F_00d8c5f0((*(float * PTR32 *)(gen_frame + 0x5c)),param_3,iVar8);
        F_00d8cf30((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))),param_2,param_3,param_4,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),uVar6,uVar5
                    );
        if (-1 < (*(int *)(gen_frame + 0x8))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
        }
      }
      else {
        *(*(float * PTR32 *)(gen_frame + 0x5c)) = GEN_FLT_TO(*(*(float * PTR32 *)(gen_frame + 0x5c)), REFG(float, 0x11386a0));
      }
      iVar8 = (*(int *)(gen_frame + 0x70));
      uVar5 = F_00d8c3d0(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x70)) + 1);
      (*(uint *)(gen_frame + 0x40)) = uVar5;
      uVar6 = F_00d8c280(uVar5,iVar8,param_3);
      (*(uint *)(gen_frame + 0x60)) = uVar6;
      bVar10 = GEN_ISNAN(gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0xc))[uVar5])) || GEN_ISNAN(REFG(float, 0x11386a0));
      (*(float * PTR32 *)(gen_frame + 0x5c)) = (float *)((*(undefined4 * PTR32 *)(gen_frame + 0xc)) + uVar5);
    } while (bVar10 == (bVar10 || gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0xc))[uVar5]) == REFG(float, 0x11386a0)));
  }
  iVar8 = (*(int *)(gen_frame + 0x14));
  uVar5 = (int)gen_fl2bits((*(float *)(gen_frame + 0x18))) - (int)gen_fl2bits(*param_1);
  if (-1 < (*(int *)(gen_frame + 0x3c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x3c)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x34))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x34)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x2c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),(*(int *)(gen_frame + 0x2c)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x28))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x28)) * 4);
  }
  if (-1 < iVar8) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)(gen_frame + 0xc)),iVar8 * 4);
  }
  return uVar5;
}

/* ref: FUN_00d8e940 */
GEN_LIB GEN_FRAME uint F_00d8e940(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8e940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float * pfVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar3 = F_00d8c2f0(param_1,param_2);
  iVar5 = uVar3 + param_2;
  iVar8 = iVar5 + 1;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar8) {
    iVar7 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar7 <= iVar8) {
      iVar7 = iVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar7,4);
  }
  param_1[1] = iVar8;
  iVar8 = param_2;
  if (3 < param_2) {
    iVar4 = (param_2 - 4U >> 2) + 1;
    iVar7 = param_2 * 4 - 8;
    iVar8 = param_2 + iVar4 * -4;
    param_2 = iVar4;
    do {
      iVar4 = *param_1;
      fVar2 = *((float *)GEN_TOP((iVar7 + 8 + iVar4)));
      pfVar1 = ((float *)GEN_TOP((iVar7 + 4 + iVar4)));
      bVar9 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1);
      if (bVar9 == (bVar9 || fVar2 == *pfVar1)) {
        *((float *)GEN_TOP((iVar4 + iVar5 * 4))) = fVar2;
        iVar5 = iVar5 - 1;
      }
      iVar6 = iVar5 - 1;
      *((undefined4 *)GEN_TOP((*param_1 + 4 + iVar6 * 4))) = *((undefined4 *)GEN_TOP((iVar7 + 8 + *param_1)));
      iVar4 = *param_1;
      fVar2 = *((float *)GEN_TOP((iVar7 + 4 + iVar4)));
      bVar9 = GEN_ISNAN(fVar2) || GEN_ISNAN(*((float *)GEN_TOP((iVar7 + iVar4))));
      if (bVar9 == (bVar9 || fVar2 == *((float *)GEN_TOP((iVar7 + iVar4))))) {
        *((float *)GEN_TOP((iVar4 + iVar6 * 4))) = fVar2;
        iVar6 = iVar5 - 2;
      }
      iVar4 = iVar6 - 1;
      *((undefined4 *)GEN_TOP((*param_1 + 4 + iVar4 * 4))) = *((undefined4 *)GEN_TOP((iVar7 + 4 + *param_1)));
      iVar5 = *param_1;
      fVar2 = *((float *)GEN_TOP((iVar7 + iVar5)));
      pfVar1 = ((float *)GEN_TOP((iVar7 - 4 + iVar5)));
      bVar9 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1);
      if (bVar9 == (bVar9 || fVar2 == *pfVar1)) {
        *((float *)GEN_TOP((iVar5 + iVar4 * 4))) = fVar2;
        iVar4 = iVar6 - 2;
      }
      iVar5 = iVar4 - 1;
      *((undefined4 *)GEN_TOP((*param_1 + 4 + iVar5 * 4))) = *((undefined4 *)GEN_TOP((iVar7 + *param_1)));
      iVar6 = *param_1;
      fVar2 = *((float *)GEN_TOP((iVar7 - 4 + iVar6)));
      pfVar1 = ((float *)GEN_TOP((iVar7 - 8 + iVar6)));
      bVar9 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1);
      if (bVar9 == (bVar9 || fVar2 == *pfVar1)) {
        *((float *)GEN_TOP((iVar6 + iVar5 * 4))) = fVar2;
        iVar5 = iVar4 - 2;
      }
      iVar5 = iVar5 - 1;
      *((undefined4 *)GEN_TOP((*param_1 + 4 + iVar5 * 4))) = *((undefined4 *)GEN_TOP((iVar7 - 4 + *param_1)));
      iVar7 = iVar7 - 0x10;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  if (0 < iVar8) {
    iVar5 = iVar5 * 4;
    do {
      iVar7 = *param_1;
      fVar2 = *((float *)GEN_TOP((iVar7 + iVar8 * 4)));
      pfVar1 = ((float *)GEN_TOP((iVar7 - 4 + iVar8 * 4)));
      bVar9 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1);
      if (bVar9 == (bVar9 || fVar2 == *pfVar1)) {
        *((float *)GEN_TOP((iVar5 + iVar7))) = fVar2;
        iVar5 = iVar5 - 4;
      }
      iVar7 = iVar8 * 4;
      iVar8 = iVar8 - 1;
      *((undefined4 *)GEN_TOP((iVar5 + *param_1))) = *((undefined4 *)GEN_TOP((*param_1 + iVar7)));
      iVar5 = iVar5 - 4;
    } while (0 < iVar8);
  }
  return uVar3 - 2;
}

/* ref: FUN_00d8ea90 */
GEN_LIB GEN_FRAME uint F_00d8ea90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8ea90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float * pfVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  piVar4 = param_1;
  iVar7 = 0;
  iVar6 = 0;
  if (3 < param_2) {
    param_1 = ((int *)GEN_TOP(((param_2 - 4U >> 2) + 1)));
    iVar5 = 8;
    iVar6 = (int)((int)(uintptr_t)param_1) * 4;
    do {
      iVar3 = *piVar4;
      fVar2 = *((float *)GEN_TOP((iVar5 - 8 + iVar3)));
      pfVar1 = ((float *)GEN_TOP((iVar5 - 4 + iVar3)));
      bVar8 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1);
      if (bVar8 != (bVar8 || fVar2 == *pfVar1)) {
        *((float *)GEN_TOP((iVar3 + iVar7 * 4))) = fVar2;
        iVar7 = iVar7 + 1;
      }
      iVar3 = *piVar4;
      fVar2 = *((float *)GEN_TOP((iVar5 - 4 + iVar3)));
      bVar8 = GEN_ISNAN(fVar2) || GEN_ISNAN(*((float *)GEN_TOP((iVar5 + iVar3))));
      if (bVar8 != (bVar8 || fVar2 == *((float *)GEN_TOP((iVar5 + iVar3))))) {
        *((float *)GEN_TOP((iVar3 + iVar7 * 4))) = fVar2;
        iVar7 = iVar7 + 1;
      }
      iVar3 = *piVar4;
      fVar2 = *((float *)GEN_TOP((iVar5 + iVar3)));
      pfVar1 = ((float *)GEN_TOP((iVar5 + 4 + iVar3)));
      bVar8 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1);
      if (bVar8 != (bVar8 || fVar2 == *pfVar1)) {
        *((float *)GEN_TOP((iVar3 + iVar7 * 4))) = fVar2;
        iVar7 = iVar7 + 1;
      }
      iVar3 = *piVar4;
      fVar2 = *((float *)GEN_TOP((iVar5 + 4 + iVar3)));
      pfVar1 = ((float *)GEN_TOP((iVar5 + 8 + iVar3)));
      bVar8 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1);
      if (bVar8 != (bVar8 || fVar2 == *pfVar1)) {
        *((float *)GEN_TOP((iVar3 + iVar7 * 4))) = fVar2;
        iVar7 = iVar7 + 1;
      }
      iVar5 = iVar5 + 0x10;
      param_1 = ((int *)GEN_TOP(((int)param_1 - 1)));
    } while (param_1 != ((int *)GEN_TOP(0x0)));
  }
  for (; iVar6 < param_2; iVar6 = iVar6 + 1) {
    iVar5 = *piVar4;
    fVar2 = *((float *)GEN_TOP((iVar5 + iVar6 * 4)));
    pfVar1 = ((float *)GEN_TOP((iVar5 + 4 + iVar6 * 4)));
    bVar8 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1);
    if (bVar8 != (bVar8 || fVar2 == *pfVar1)) {
      *((float *)GEN_TOP((iVar5 + iVar7 * 4))) = fVar2;
      iVar7 = iVar7 + 1;
    }
  }
  iVar6 = iVar7 + 1;
  *((undefined4 *)GEN_TOP((*piVar4 + iVar7 * 4))) = *((undefined4 *)GEN_TOP((*piVar4 + param_2 * 4)));
  if ((int)(piVar4[2] & 0x3fffffffU) < iVar6) {
    iVar5 = (piVar4[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar4,iVar5,4);
  }
  piVar4[1] = iVar6;
  return (param_2 - iVar7) - 1;
}

/* ref: FUN_00d8eb90 */
GEN_LIB GEN_FRAME uint F_00d8eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xd8eb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  code * pcVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  uint uVar6;
  gen_size32 _Size;
  int iVar7;
  char * pcVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = (int)(*(char * PTR32 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) + 1 + (int)(*(char * PTR32 *)&gen_args[2]);
  _Size = (*(int *)&gen_args[1]) + 1;
  if (_Size == 0) {
    (*(char * PTR32 *)&gen_args[2]) = ((char *)GEN_TOP(0x0));
  }
  else {
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    (*(uint *)(gen_frame + 0x8)) = _Size;
    (*(char * PTR32 *)&gen_args[2]) = ((char *)GEN_TOP((*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)))));
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x8));
    if ((*(uint *)(gen_frame + 0x8)) != 0) goto LAB_00d8ebd8;
  }
  (*(uint *)(gen_frame + 0xc)) = 0x80000000;
LAB_00d8ebd8: ;
  if (0 < (int)_Size) {
    F_00c48350((*(char * PTR32 *)&gen_args[2]),0,_Size);
  }
  iVar7 = 0;
  fVar10 = (*(float *)&gen_args[6]);
  if (-1 < (*(int *)&gen_args[4])) {
    do {
      fVar9 = *((float *)GEN_TOP((*(*(int * PTR32 *)&gen_args[5]) + iVar7 * 4)));
      uVar4 = F_00d8b440((*(int *)&gen_args[1]),iVar3,fVar9,(*(int * PTR32 *)&gen_args[3]));
      uVar6 = uVar1;
      if (uVar4 != uVar1) {
        uVar6 = uVar4 + 1;
      }
      if ((*((float *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + uVar4 * 4))) + fVar10 <= fVar9) &&
         (fVar9 <= *((float *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + uVar6 * 4))) - fVar10)) {
        (*(char * PTR32 *)&gen_args[2])[uVar4 - iVar3] = '\x01';
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= (*(int *)&gen_args[4]));
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  if (-1 < (*(int *)&gen_args[1])) {
    pcVar8 = (*(char * PTR32 *)&gen_args[2]);
    do {
      pcVar5 = ((char *)GEN_TOP(F_00d8c390((int)&(*(int *)&gen_args[4]) + 3,pcVar8 + (iVar3 - (int)(*(char * PTR32 *)&gen_args[2])),(*(int * PTR32 *)&gen_args[3]),uVar1)))
      ;
      if ((*pcVar5 != '\0') && (*pcVar8 == '\0')) {
        *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
        goto joined_r0x00d8ecda;
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      pcVar8 = pcVar8 + 1;
    } while ((*(int *)(gen_frame + 0x0)) <= (*(int *)&gen_args[1]));
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = 1;
joined_r0x00d8ecda: ;
  if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),(*(char * PTR32 *)&gen_args[2]),(*(uint *)(gen_frame + 0xc)) & 0x3fffffff);
  }
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d8ecf0 */
GEN_LIB GEN_FRAME uint F_00d8ecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0xd8ecf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[10];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  memcpy(&gen_args[9], &gen_a9, sizeof gen_a9);
  GEN_FRAME_DECL(0xc4, 12);
  code * pcVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  char * pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float * pfVar10;
  int iVar11;
  float10 fVar12;
  float fVar13;
  undefined1 * puVar14;
  
  if ((int)(*(uint *)&gen_args[5]) < (*(int *)&gen_args[1])) {
    *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
    return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
  }
  F_00d90850(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(uint *)&gen_args[5]) - 1,(*(int *)&gen_args[1]) - 1);
  iVar8 = 1;
  if (1 < (int)(*(uint *)&gen_args[5])) {
    do {
      iVar9 = 1;
      if (1 < (*(int *)&gen_args[1])) {
        do {
          fVar12 = F_00d8bc90((*(int *)&gen_args[2]),(*(int *)&gen_args[1]) + 1 + (*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[4]),iVar9,GEN_ARGF(*((float *)GEN_TOP((*(*(int * PTR32 *)&gen_args[7]) + iVar8 * 4)))));
          F_00d90930(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,iVar8 - 1,iVar9 - 1,(float)fVar12);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (*(int *)&gen_args[1]));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(*(uint *)&gen_args[5]));
  }
  F_00d909f0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,(*(int *)&gen_args[1]) - 1,4,0.0);
  iVar8 = (*(uint *)&gen_args[5]) + 1;
  (*(int *)(gen_frame + 0x9c)) = iVar8;
  if (iVar8 == 0) {
    (*(uint *)(gen_frame + 0xb4)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x98)) = iVar8 * 0x10;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x98)));
    iVar8 = (int)((*(int *)(gen_frame + 0x98)) + ((*(int *)(gen_frame + 0x98)) >> 0x1f & 0xfU)) >> 4;
    (*(uint *)(gen_frame + 0xb4)) = uVar2;
    if (iVar8 != 0) {
      (*(int *)(gen_frame + 0xa4)) = iVar8;
      goto LAB_00d8edf5;
    }
  }
  (*(int *)(gen_frame + 0xa4)) = ((int)0x80000000);
LAB_00d8edf5: ;
  uVar2 = (*(uint *)(gen_frame + 0xb4));
  iVar8 = (*(int *)(gen_frame + 0xa4));
  fVar13 = 0.0;
  uVar6 = (*(uint *)(gen_frame + 0xb4));
  iVar9 = (*(int *)(gen_frame + 0x9c));
  if (0 < (*(int *)(gen_frame + 0x9c))) {
    do {
      iVar11 = 0;
      if (uVar6 != 0) {
        F_00d8ab50(uVar6 GEN_EDX_ARG,fVar13,fVar13,fVar13,fVar13);
        iVar11 = ((int)(uint)(uVar6));
      }
      uVar6 = iVar11 + 0x10;
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
  }
  (*(int *)(gen_frame + 0x9c)) = (*(uint *)&gen_args[5]) * 0x10;
  uVar6 = F_00d8ab50(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,fVar13,fVar13,fVar13,fVar13);
  uVar6 = F_00d8ab80(uVar2 + (*(uint *)&gen_args[5]) * 0x10 GEN_EDX_ARG,uVar6);
  F_00d8ab80(uVar2 GEN_EDX_ARG,uVar6);
  iVar9 = 1;
  if (1 < (int)(*(uint *)&gen_args[5])) {
    (*(int *)(gen_frame + 0xa0)) = (*(int *)&gen_args[1]) + 1 + (*(int *)&gen_args[2]);
    iVar11 = 0x10;
    do {
      iVar7 = *(*(int * PTR32 *)&gen_args[6]);
      iVar8 = iVar7 + (*(int *)(gen_frame + 0x9c));
      (*(float * PTR32 *)(gen_frame + 0xb8)) = ((float *)GEN_TOP((*(*(int * PTR32 *)&gen_args[7]) + iVar9 * 4)));
      fVar12 = F_00d8bc90((*(int *)&gen_args[2]),(*(int *)(gen_frame + 0xa0)),(*(undefined4 *)&gen_args[4]),(*(int *)&gen_args[1]),GEN_ARGF(*((float *)GEN_TOP((*(*(int * PTR32 *)&gen_args[7]) + iVar9 * 4)))));
      uVar2 = F_00d8ae30(((undefined1 *)(gen_frame + 0x5c)),(float)fVar12,iVar8);
      puVar14 = ((undefined1 *)(gen_frame + 0x10));
      iVar8 = iVar7;
      fVar12 = F_00d8bc90((*(int *)&gen_args[2]),(*(int *)(gen_frame + 0xa0)),(*(undefined4 *)&gen_args[4]),0,*(*(float * PTR32 *)(gen_frame + 0xb8)));
      uVar6 = F_00d8ae30(((undefined1 *)(gen_frame + 0x0)),(float)fVar12,iVar8);
      uVar6 = F_00d8ad40(iVar11 + iVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),uVar6);
      uVar2 = F_00d8ad40(uVar6 GEN_EDX_ARG,puVar14,uVar2);
      F_00d8ab80(iVar11 + (*(uint *)(gen_frame + 0xb4)) GEN_EDX_ARG,uVar2);
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + 0x10;
      iVar8 = (*(int *)(gen_frame + 0xa4));
    } while (iVar9 < (int)(*(uint *)&gen_args[5]));
  }
  (*(float * PTR32 *)(gen_frame + 0xb8)) = ((float *)GEN_TOP(0x1));
  if (1 < (*(int *)&gen_args[1])) {
    while( true ) {
      F_00d8ab50(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,fVar13,fVar13,fVar13,fVar13);
      if (1 < (int)(*(uint *)&gen_args[5])) {
        pfVar10 = ((float *)GEN_TOP(*(*(int * PTR32 *)&gen_args[7])));
        (*(int *)(gen_frame + 0xa0)) = (*(int *)&gen_args[1]) + 1 + (*(int *)&gen_args[2]);
        iVar8 = (*(uint *)&gen_args[5]) - 1;
        uVar2 = (*(uint *)(gen_frame + 0xb4));
        do {
          pfVar10 = pfVar10 + 1;
          uVar2 = uVar2 + 0x10;
          uVar6 = uVar2;
          fVar12 = F_00d8bc90((*(int *)&gen_args[2]),(*(int *)(gen_frame + 0xa0)),(*(undefined4 *)&gen_args[4]),(*(float * PTR32 *)(gen_frame + 0xb8)),*pfVar10);
          uVar6 = F_00d8ae30(((undefined1 *)(gen_frame + 0x20)),(float)fVar12,uVar6);
          F_00d8abb0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,uVar6);
          iVar8 = iVar8 - 1;
        } while (iVar8 != 0);
      }
      iVar8 = 0;
      do {
        puVar3 = ((undefined4 *)GEN_TOP(F_00d8b150(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,iVar8)));
        puVar4 = ((undefined4 *)GEN_TOP(F_00d8fde0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,(int)(*(float * PTR32 *)(gen_frame + 0xb8)) - 1,iVar8)));
        iVar8 = iVar8 + 1;
        *puVar4 = *puVar3;
      } while (iVar8 < 4);
      iVar9 = (int)(*(float * PTR32 *)(gen_frame + 0xb8)) + 1;
      (*(float * PTR32 *)(gen_frame + 0xb8)) = ((float *)GEN_TOP(iVar9));
      iVar8 = (*(int *)(gen_frame + 0xa4));
      if ((*(int *)&gen_args[1]) <= iVar9) break;
      fVar13 = 0.0;
    }
  }
  pcVar5 = ((char *)GEN_TOP(F_00d8eb90(&(*(char *)(gen_frame + 0xbf)),(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[4]),(*(int * PTR32 *)&gen_args[7])[1] - 1,(*(int * PTR32 *)&gen_args[7]),(*(float *)&gen_args[8]))));
  if (*pcVar5 == '\0') {
    *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
  }
  else {
    uVar2 = F_00d8fe10(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
    uVar6 = F_00d8fe00(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
    F_00d90aa0(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG,uVar6,uVar2);
    iVar9 = 0;
    uVar2 = F_00d8fe00(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
    if (0 < (int)uVar2) {
      uVar2 = F_00d8fe10(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
      (*(float * PTR32 *)(gen_frame + 0xb8)) = ((float *)GEN_TOP(0x0));
      do {
        iVar8 = 0;
        if (0 < (int)uVar2) {
          (*(int *)(gen_frame + 0xa0)) = *(*(int * PTR32 *)&gen_args[6]) + 0x10 + (int)(*(float * PTR32 *)(gen_frame + 0xb8));
          do {
            (*(undefined4 *)(gen_frame + 0x80)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xa0)) + iVar8 * 4)));
            puVar3 = ((undefined4 *)GEN_TOP(F_00d8fde0(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG,iVar9,iVar8)));
            *puVar3 = (*(undefined4 *)(gen_frame + 0x80));
            iVar8 = iVar8 + 1;
            uVar2 = F_00d8fe10(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
          } while (iVar8 < (int)uVar2);
        }
        (*(float * PTR32 *)(gen_frame + 0xb8)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xb8)) + 0x10)));
        iVar9 = iVar9 + 1;
        uVar6 = F_00d8fe00(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
        iVar8 = (*(int *)(gen_frame + 0xa4));
      } while (iVar9 < (int)uVar6);
    }
    F_00d90e50(&(*(char *)(gen_frame + 0xbf)),((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x84)),((undefined1 *)(gen_frame + 0x6c)),0x32,(*(float *)&gen_args[8]));
    if ((*(char *)(gen_frame + 0xbf)) == '\0') {
      *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
      F_00d90b00(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
    }
    else {
      uVar2 = (*(int *)&gen_args[1]) + 1;
      (*(int *)(gen_frame + 0xa8)) = 0;
      (*(uint *)(gen_frame + 0xac)) = 0;
      (*(int *)(gen_frame + 0xb0)) = ((int)0x80000000);
      if (0 < (int)uVar2) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xa8)),((int)uVar2 < 0) - 1 & uVar2,0x10);
      }
      iVar11 = uVar2 - (*(uint *)(gen_frame + 0xac));
      iVar9 = (*(uint *)(gen_frame + 0xac)) * 0x10 + (*(int *)(gen_frame + 0xa8));
      if (0 < iVar11) {
        fVar13 = 0.0;
        do {
          iVar7 = 0;
          if (iVar9 != 0) {
            F_00d8ab50(iVar9 GEN_EDX_ARG,fVar13,fVar13,fVar13,fVar13);
            iVar7 = ((int)(uint)(iVar9));
          }
          iVar9 = iVar7 + 0x10;
          iVar11 = iVar11 - 1;
        } while (iVar11 != 0);
      }
      (*(uint *)(gen_frame + 0xac)) = uVar2;
      F_00d8ab80((*(int *)(gen_frame + 0xa8)) GEN_EDX_ARG,*(*(int * PTR32 *)&gen_args[6]));
      F_00d8ab80((*(int *)&gen_args[1]) * 0x10 + (*(int *)(gen_frame + 0xa8)) GEN_EDX_ARG,*(*(int * PTR32 *)&gen_args[6]) + (*(int *)(gen_frame + 0x9c)));
      iVar9 = 1;
      if (1 < (*(int *)&gen_args[1])) {
        iVar11 = 0x10;
        do {
          iVar8 = 0;
          do {
            puVar3 = ((undefined4 *)GEN_TOP(F_00d8fde0(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG,iVar9 - 1,iVar8)));
            puVar4 = ((undefined4 *)GEN_TOP(F_00d8b150(iVar11 + (*(int *)(gen_frame + 0xa8)) GEN_EDX_ARG,iVar8)));
            iVar8 = iVar8 + 1;
            *puVar4 = *puVar3;
          } while (iVar8 < 4);
          iVar9 = iVar9 + 1;
          iVar11 = iVar11 + 0x10;
          iVar8 = (*(int *)(gen_frame + 0xa4));
        } while (iVar9 < (*(int *)&gen_args[1]));
      }
      pcVar5 = ((char *)GEN_TOP(F_00d8ca30((int)&(*(int *)&gen_args[1]) + 3,(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),&(*(int *)(gen_frame + 0xa8)),(*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[5]), (*(int * PTR32 *)&gen_args[6]),(*(int * PTR32 *)&gen_args[7]),(*(float *)&gen_args[9]))));
      if (*pcVar5 == '\0') {
        *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
        (*(uint *)(gen_frame + 0xac)) = 0;
        if (-1 < (*(int *)(gen_frame + 0xb0))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa8)),(*(int *)(gen_frame + 0xb0)) << 4);
        }
        (*(int *)(gen_frame + 0xa8)) = 0;
        (*(int *)(gen_frame + 0xb0)) = 0x80000000;
        F_00d90b00(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
        if (-1 < iVar8) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0xb4)),iVar8 << 4);
        }
        F_00d90b00(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
        F_00d90890(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
      }
      F_00d8fd80((*(undefined * PTR32 *)&gen_args[3]) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xa8)));
      *(*(undefined1 * PTR32 *)&gen_args[0]) = 1;
      (*(uint *)(gen_frame + 0xac)) = 0;
      if (-1 < (*(int *)(gen_frame + 0xb0))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa8)),(*(int *)(gen_frame + 0xb0)) << 4);
      }
      (*(int *)(gen_frame + 0xa8)) = 0;
      (*(int *)(gen_frame + 0xb0)) = 0x80000000;
      F_00d90b00(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
    }
  }
  if (-1 < iVar8) {
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0xb4)),iVar8 << 4);
  }
  F_00d90b00(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
  F_00d90890(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d8f370 */
GEN_LIB GEN_FRAME uint F_00d8f370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd8f370u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  code * pcVar1;
  int * piVar2;
  uint * puVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 * puVar11;
  float fVar12;
  
  puVar3 = (*(uint * PTR32 *)&gen_args[6]);
  *(*(uint * PTR32 *)&gen_args[6]) = (*(uint *)&gen_args[0]);
  iVar10 = (*(uint *)&gen_args[0]) + 3;
  if ((int)((*(int * PTR32 *)&gen_args[7])[2] & 0x3fffffffU) < iVar10) {
    iVar5 = ((*(int * PTR32 *)&gen_args[7])[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar10) {
      iVar5 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[7]),iVar5,4);
  }
  piVar4 = (*(int * PTR32 *)&gen_args[8]);
  (*(int * PTR32 *)&gen_args[7])[1] = iVar10;
  iVar10 = *puVar3 + 1;
  if ((int)((*(int * PTR32 *)&gen_args[8])[2] & 0x3fffffffU) < iVar10) {
    iVar5 = ((*(int * PTR32 *)&gen_args[8])[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar10) {
      iVar5 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[8]),iVar5,0x10);
  }
  fVar12 = 0.0;
  iVar9 = iVar10 - piVar4[1];
  iVar5 = piVar4[1] * 0x10 + *piVar4;
  if (0 < iVar9) {
    do {
      iVar8 = 0;
      if (iVar5 != 0) {
        F_00d8ab50(iVar5 GEN_EDX_ARG,fVar12,fVar12,fVar12,fVar12);
        iVar8 = ((int)(uint)(iVar5));
      }
      iVar5 = iVar8 + 0x10;
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
  }
  piVar4[1] = iVar10;
  puVar7 = ((undefined4 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2])));
  *((undefined4 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[7]))) = *puVar7;
  *((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[7]) + 8 + (*(uint *)&gen_args[0]) * 4))) = puVar7[(*(uint *)&gen_args[0])];
  iVar10 = 0;
  if (-1 < (int)(*(uint *)&gen_args[0])) {
    iVar5 = 0;
    do {
      *((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[7]) + 4 + iVar10 * 4))) = *((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + iVar10 * 4)));
      F_00d8ab80(*piVar4 + iVar5 GEN_EDX_ARG,*(*(int * PTR32 *)&gen_args[1]) + iVar5);
      iVar10 = iVar10 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar10 <= (int)(*(uint *)&gen_args[0]));
  }
  iVar10 = (*(uint *)&gen_args[0]) + 1;
  if (iVar10 == 0) {
    (*(int * PTR32 *)&gen_args[8]) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(uint * PTR32 *)&gen_args[6]) = ((uint *)GEN_TOP((iVar10 * 4)));
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    (*(int * PTR32 *)&gen_args[8]) = ((int *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(uint * PTR32 *)&gen_args[6]))));
    uVar6 = (int)((int)(*(uint * PTR32 *)&gen_args[6]) + ((int)(*(uint * PTR32 *)&gen_args[6]) >> 0x1f & 3U)) >> 2;
    if (uVar6 != 0) {
      (*(uint *)(gen_frame + 0x1c)) = uVar6;
      goto LAB_00d8f4c5;
    }
  }
  (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
LAB_00d8f4c5: ;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (*(int * PTR32 *)&gen_args[8]);
  (*(int *)(gen_frame + 0x4)) = iVar10;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x1c));
  puVar7 = (*(int * PTR32 *)&gen_args[8]);
  if (0 < iVar10) {
    puVar7 = ((undefined4 *)GEN_TOP(0x0));
    puVar11 = (*(int * PTR32 *)&gen_args[8]);
    for (; iVar10 != 0; iVar10 = iVar10 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  }
  iVar10 = 1;
  if (0 < (*(int *)&gen_args[4])) {
    do {
      puVar7 = ((undefined4 *)GEN_TOP(F_00d8e240(puVar3,iVar10,(*(int * PTR32 *)&gen_args[7]),piVar4,(*(uint *)&gen_args[0]),(*(int * PTR32 *)&gen_args[2]),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),(*(float *)&gen_args[5]),(*(int * PTR32 *)&gen_args[1]))));
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar7;
      if (iVar10 == (*(int *)&gen_args[4])) break;
      uVar6 = F_00d8e940((*(int * PTR32 *)&gen_args[7]),*puVar3 + 1 + iVar10);
      *puVar3 = *puVar3 + uVar6 + 1;
      iVar5 = *puVar3 + 1;
      (*(int *)(gen_frame + 0x14)) = iVar5;
      if ((int)(piVar4[2] & 0x3fffffffU) < iVar5) {
        iVar9 = (piVar4[2] & 0x3fffffffU) * 2;
        if (iVar5 < iVar9) {
          iVar5 = iVar9;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar4,iVar5,0x10);
      }
      iVar5 = (*(int *)(gen_frame + 0x14));
      iVar8 = (*(int *)(gen_frame + 0x14)) - piVar4[1];
      iVar9 = piVar4[1] * 0x10 + *piVar4;
      if (0 < iVar8) {
        fVar12 = 0.0;
        (*(int *)(gen_frame + 0x18)) = iVar9;
        (*(int *)(gen_frame + 0x14)) = iVar8;
        do {
          if (iVar9 != 0) {
            (*(int *)(gen_frame + 0x18)) = iVar9;
            F_00d8ab50(iVar9 GEN_EDX_ARG,fVar12,fVar12,fVar12,fVar12);
            iVar9 = (*(int *)(gen_frame + 0x18));
          }
          iVar9 = iVar9 + 0x10;
          iVar8 = (*(int *)(gen_frame + 0x14)) - 1;
          (*(int *)(gen_frame + 0x14)) = iVar8;
          (*(int *)(gen_frame + 0x18)) = iVar9;
        } while (iVar8 != 0);
      }
      fVar12 = REFG(float, 0x10addd0);
      piVar4[1] = iVar5;
      (*(int *)(gen_frame + 0x10)) = iVar10 + 1;
      F_00d8ecf0((int)&(*(uint * PTR32 *)&gen_args[6]) + 3,*puVar3,iVar10 + 1,piVar4,(*(int * PTR32 *)&gen_args[7]),(*(uint *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]), fVar12,(*(float *)&gen_args[5]));
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[6]) + 3)))) == '\0') {
        uVar6 = F_00d8ea90((*(int * PTR32 *)&gen_args[7]),*puVar3 + 1 + iVar10);
        *puVar3 = *puVar3 + (-1 - uVar6);
        iVar5 = *puVar3 + 1;
        (*(int *)(gen_frame + 0x14)) = iVar5;
        if ((int)(piVar4[2] & 0x3fffffffU) < iVar5) {
          iVar9 = (piVar4[2] & 0x3fffffffU) * 2;
          if (iVar5 < iVar9) {
            iVar5 = iVar9;
          }
          F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar4,iVar5,0x10);
        }
        iVar5 = (*(int *)(gen_frame + 0x14));
        iVar8 = (*(int *)(gen_frame + 0x14)) - piVar4[1];
        iVar9 = piVar4[1] * 0x10 + *piVar4;
        if (0 < iVar8) {
          fVar12 = 0.0;
          (*(int *)(gen_frame + 0x14)) = iVar9;
          (*(int *)(gen_frame + 0x18)) = iVar8;
          do {
            if (iVar9 != 0) {
              (*(int *)(gen_frame + 0x14)) = iVar9;
              F_00d8ab50(iVar9 GEN_EDX_ARG,fVar12,fVar12,fVar12,fVar12);
              iVar9 = (*(int *)(gen_frame + 0x14));
            }
            iVar9 = iVar9 + 0x10;
            iVar8 = (*(int *)(gen_frame + 0x18)) - 1;
            (*(int *)(gen_frame + 0x18)) = iVar8;
            (*(int *)(gen_frame + 0x14)) = iVar9;
          } while (iVar8 != 0);
        }
        piVar4[1] = iVar5;
        F_00d8d5d0(puVar3,iVar10,(*(int * PTR32 *)&gen_args[7]),piVar4,1);
      }
      iVar10 = (*(int *)(gen_frame + 0x10));
      puVar7 = ((undefined4 *)GEN_TOP(F_00d8c950((*(uint *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),*puVar3,(*(int *)(gen_frame + 0x10)),(*(int * PTR32 *)&gen_args[7]),piVar4,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),(*(int * PTR32 *)&gen_args[2]),100,10 ,REFG(float, 0x1094778),REFG(float, 0x1094778),(char)(*(undefined4 *)&gen_args[3]))));
    } while (iVar10 <= (*(int *)&gen_args[4]));
    piVar2 = (*(int * PTR32 *)&gen_args[2]);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != ((undefined4 *)GEN_TOP(0x0))) {
      F_00d8ecf0((int)&(*(int * PTR32 *)&gen_args[2]) + 3,*puVar3,(*(int *)&gen_args[4]),piVar4,(*(int * PTR32 *)&gen_args[7]),(*(uint *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]), REFG(float, 0x10addd0),(*(float *)&gen_args[5]));
      F_00d8c950((*(uint *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),*puVar3,(*(int *)&gen_args[4]),(*(int * PTR32 *)&gen_args[7]),piVar4,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),piVar2,100,10, REFG(float, 0x1094778),REFG(float, 0x1094778),(char)(*(undefined4 *)&gen_args[3]));
      F_00d8e240(puVar3,(*(int *)&gen_args[4]),(*(int * PTR32 *)&gen_args[7]),piVar4,(*(uint *)&gen_args[0]),piVar2,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),(*(float *)&gen_args[5]),(*(int * PTR32 *)&gen_args[1]));
      if ((int)(*(uint *)(gen_frame + 0x1c)) < 0) {
        return (*(uint *)(gen_frame + 0x1c));
      }
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[8]),(*(uint *)(gen_frame + 0x1c)) * 4);
      return uVar6;
    }
  }
  if ((int)(*(uint *)(gen_frame + 0x1c)) < 0) {
    return (uint)puVar7;
  }
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[8]),(*(uint *)(gen_frame + 0x1c)) * 4);
  return uVar6;
}

/* ref: FUN_00d8f810 */
GEN_LIB GEN_FRAME uint F_00d8f810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd8f810u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  code * pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = (*(int *)&gen_args[0]);
  iVar1 = (*(int *)&gen_args[0]) + 1;
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    (*(int *)&gen_args[0]) = iVar1 * 4;
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar5 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    uVar6 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (uVar6 != 0) goto LAB_00d8f86f;
  }
  uVar6 = 0x80000000;
LAB_00d8f86f: ;
  uVar4 = (*(undefined4 *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x0)) = uVar5;
  (*(int *)(gen_frame + 0x4)) = iVar1;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  F_00d8e100(iVar3,(*(undefined4 *)&gen_args[1]),&(*(uint *)(gen_frame + 0x0)));
  F_00d8f370(iVar3,uVar4,&(*(uint *)(gen_frame + 0x0)),CONCAT31((int3)((uint)(*(undefined4 *)&gen_args[4]) >> 8),1),(*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),
               (*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]));
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar5 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar5;
}

/* ref: FUN_00d8f8f0 */
GEN_LIB GEN_FRAME uint F_00d8f8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd8f8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  code * pcVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  iVar7 = (*(int * PTR32 *)&gen_args[2])[1];
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  if (0 < iVar7) {
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP((iVar7 * 4)));
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar4 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[2]));
    (*(uint *)(gen_frame + 0x0)) = uVar4;
    (*(uint *)(gen_frame + 0x8)) = (int)((int)(*(int * PTR32 *)&gen_args[2]) + ((int)(*(int * PTR32 *)&gen_args[2]) >> 0x1f & 3U)) >> 2;
  }
  uVar4 = (*(uint *)(gen_frame + 0x0));
  iVar10 = piVar3[1];
  iVar2 = *piVar3;
  iVar7 = 0;
  (*(int *)(gen_frame + 0x4)) = iVar10;
  (*(int *)(gen_frame + 0x10)) = iVar2;
  if (3 < iVar10) {
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP((iVar2 - (*(uint *)(gen_frame + 0x0)))));
    iVar9 = (iVar10 - 4U >> 2) + 1;
    iVar7 = iVar9 * 4;
    (*(int *)(gen_frame + 0xc)) = iVar7;
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 4)));
    puVar8 = ((undefined4 *)GEN_TOP((iVar2 + 0xc)));
    do {
      puVar5[-1] = puVar8[-3];
      iVar9 = iVar9 - 1;
      *puVar5 = *((undefined4 *)GEN_TOP(((int)((*(int * PTR32 *)&gen_args[2]) - 4) + (int)(puVar5 + 4))));
      puVar5[1] = puVar8[-1];
      puVar5[2] = *puVar8;
      puVar5 = puVar5 + 4;
      puVar8 = puVar8 + 4;
    } while (iVar9 != 0);
  }
  if (iVar7 < iVar10) {
    iVar10 = iVar10 - iVar7;
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + iVar7 * 4)));
    do {
      iVar10 = iVar10 - 1;
      *puVar5 = *((undefined4 *)GEN_TOP(((int)puVar5 + (iVar2 - (*(uint *)(gen_frame + 0x0))))));
      puVar5 = puVar5 + 1;
    } while (iVar10 != 0);
  }
  F_00d8f370((*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(uint *)(gen_frame + 0x0)),(*(uint *)&gen_args[3]) & 0xffffff00,(*(uint *)&gen_args[3]),(*(float *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),
               (*(undefined4 *)&gen_args[7]));
  uVar6 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),uVar4,(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar6;
}

/* ref: FUN_00d8fa10 */
GEN_LIB GEN_FRAME uint F_00d8fa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd8fa10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  float fVar11;
  
  iVar10 = (*(uint *)&gen_args[0]);
  if ((*(uint *)&gen_args[0]) == 0) {
    (*(uint *)&gen_args[0]) = 0;
LAB_00d8fa5a: ;
    (*(uint *)(gen_frame + 0x34)) = 0x80000000;
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = ((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) << 4)));
    (*(uint *)&gen_args[0]) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)(gen_frame + 0x38)));
    uVar3 = (int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x38)) + ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x38))) >> 0x1f & 0xfU)) >> 4;
    (*(uint *)(gen_frame + 0x34)) = uVar3;
    if (uVar3 == 0) goto LAB_00d8fa5a;
  }
  (*(uint *)(gen_frame + 0x0)) = (*(uint *)&gen_args[0]);
  (*(int *)(gen_frame + 0x4)) = iVar10;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x34));
  if (0 < iVar10) {
    fVar11 = 0.0;
    uVar3 = (*(uint *)&gen_args[0]);
    iVar8 = iVar10;
    do {
      iVar7 = 0;
      if (uVar3 != 0) {
        F_00d8ab50(uVar3 GEN_EDX_ARG,fVar11,fVar11,fVar11,fVar11);
        iVar7 = ((int)(uint)(uVar3));
      }
      uVar3 = iVar7 + 0x10;
      iVar8 = iVar8 - 1;
    } while (iVar8 != 0);
  }
  if (iVar10 == 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = ((undefined4 *)GEN_TOP((iVar10 * 4)));
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)(gen_frame + 0x38))))) ;
    uVar3 = (int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x38)) + ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x38))) >> 0x1f & 3U)) >> 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = puVar4;
    (*(uint *)(gen_frame + 0x3c)) = uVar3;
    if (uVar3 != 0) goto LAB_00d8fae4;
  }
  (*(uint *)(gen_frame + 0x3c)) = 0x80000000;
LAB_00d8fae4: ;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
  (*(int *)(gen_frame + 0x10)) = iVar10;
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x3c));
  if (0 < iVar10) {
    puVar9 = ((undefined4 *)GEN_TOP(((*(int *)&gen_args[2]) + 8)));
    iVar8 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x38));
    ((int *)(gen_frame + 0x18))[6] = iVar10;
    uVar3 = (*(uint *)&gen_args[0]);
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    do {
      *puVar4 = *((undefined4 *)GEN_TOP(((int)puVar4 + iVar8)));
      puVar5 = ((undefined4 *)GEN_TOP(F_00d8b150(uVar3 GEN_EDX_ARG,0)));
      *puVar5 = puVar9[-2];
      puVar5 = ((undefined4 *)GEN_TOP(F_00d8b150(((undefined4)(uint)(uVar3)) GEN_EDX_ARG,1)));
      *puVar5 = puVar9[-1];
      puVar5 = ((undefined4 *)GEN_TOP(F_00d8b150(((undefined4)(uint)((uVar3))) GEN_EDX_ARG,2)));
      *puVar5 = *puVar9;
      puVar6 = ((undefined4 *)GEN_TOP(F_00d8b150(((undefined4)(uint)(((uVar3)))) GEN_EDX_ARG,3)));
      puVar5 = puVar9 + 1;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 4;
      *puVar6 = *puVar5;
      uVar3 = ((int)(uint)(((undefined4)(uint)(((uVar3)))))) + 0x10;
      iVar7 = ((int *)(gen_frame + 0x18))[6] - 1;
      ((int *)(gen_frame + 0x18))[6] = iVar7;
    } while (iVar7 != 0);
  }
  iVar8 = (*(int *)&gen_args[3]);
  ((int *)(gen_frame + 0x18))[5] = 0x80000000;
  ((int *)(gen_frame + 0x18))[2] = 0x80000000;
  ((int *)(gen_frame + 0x18))[3] = 0;
  ((int *)(gen_frame + 0x18))[4] = 0;
  ((int *)(gen_frame + 0x18))[0] = 0;
  ((int *)(gen_frame + 0x18))[1] = 0;
  F_00d8f8f0(iVar10 - 1,&(*(uint *)(gen_frame + 0x0)),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(int *)&gen_args[3]),(*(float *)&gen_args[4]),&(*(int *)&gen_args[3]),((int *)(gen_frame + 0x18)),((int *)(gen_frame + 0x18)) + 3);
  piVar2 = (*(int * PTR32 *)&gen_args[7]);
  piVar1 = (*(int * PTR32 *)&gen_args[5]);
  *(*(int * PTR32 *)&gen_args[7]) = (*(int *)&gen_args[3]) + 1;
  iVar10 = 0;
  *(*(int * PTR32 *)&gen_args[5]) = (*(int *)&gen_args[3]) + 2 + iVar8;
  if (0 < *(*(int * PTR32 *)&gen_args[7])) {
    puVar4 = ((undefined4 *)GEN_TOP(((*(int *)&gen_args[8]) + 8)));
    iVar8 = ((int *)(gen_frame + 0x18))[3];
    do {
      puVar9 = ((undefined4 *)GEN_TOP(F_00d8b150(iVar8 GEN_EDX_ARG,0)));
      puVar4[-2] = *puVar9;
      puVar9 = ((undefined4 *)GEN_TOP(F_00d8b150(((undefined4)(uint)(iVar8)) GEN_EDX_ARG,1)));
      puVar4[-1] = *puVar9;
      puVar9 = ((undefined4 *)GEN_TOP(F_00d8b150(((undefined4)(uint)((iVar8))) GEN_EDX_ARG,2)));
      *puVar4 = *puVar9;
      puVar9 = ((undefined4 *)GEN_TOP(F_00d8b150(((undefined4)(uint)(((iVar8)))) GEN_EDX_ARG,3)));
      puVar4[1] = *puVar9;
      iVar10 = iVar10 + 1;
      iVar8 = ((int)(uint)(((undefined4)(uint)(((iVar8)))))) + 0x10;
      puVar4 = puVar4 + 4;
    } while (iVar10 < *piVar2);
  }
  iVar10 = 0;
  if (0 < *piVar1) {
    puVar4 = (*(undefined4 * PTR32 *)&gen_args[6]);
    do {
      iVar10 = iVar10 + 1;
      *puVar4 = *((undefined4 *)GEN_TOP(((((int *)(gen_frame + 0x18))[0] - (int)(*(undefined4 * PTR32 *)&gen_args[6])) + (int)puVar4)));
      puVar4 = puVar4 + 1;
    } while (iVar10 < *piVar1);
  }
  ((int *)(gen_frame + 0x18))[1] = 0;
  if ((((int *)(gen_frame + 0x18))[2] & 0x80000000U) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x18))[0],((int *)(gen_frame + 0x18))[2] * 4);
  }
  ((int *)(gen_frame + 0x18))[0] = 0;
  ((int *)(gen_frame + 0x18))[2] = 0x80000000;
  ((int *)(gen_frame + 0x18))[4] = 0;
  if ((((int *)(gen_frame + 0x18))[5] & 0x80000000U) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x18))[3],((int *)(gen_frame + 0x18))[5] << 4);
  }
  ((int *)(gen_frame + 0x18))[3] = 0;
  ((int *)(gen_frame + 0x18))[5] = 0x80000000;
  if (((*(uint *)(gen_frame + 0x3c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)) * 4);
  }
  uVar3 = (*(uint *)(gen_frame + 0x34));
  if (((*(uint *)(gen_frame + 0x34)) & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)&gen_args[0]),(*(uint *)(gen_frame + 0x34)) << 4);
  }
  return uVar3;
}

/* ref: FUN_00d8fce0 */
GEN_LIB GEN_FRAME uint F_00d8fce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xd8fce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = F_00d8fa10(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return uVar1;
}

/* ref: FUN_00d8fd50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8fd50(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8fd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d8fd60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8fd60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8fd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d8fd80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8fd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd8fd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d8fdb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8fdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd8fdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d8fde0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8fde0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8fde0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return *in_ecx + (in_ecx[4] * param_2 + param_3) * 4;
}

/* ref: FUN_00d8fe00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d8fe00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd8fe00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: FUN_00d8fe10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d8fe10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd8fe10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00d8fe20 */
GEN_LIB GEN_FRAME unsigned int F_00d8fe20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8fe20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = (param_3 - 1U >> 2) + 1;
    puVar1 = param_1;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d8fe50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8fe50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd8fe50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d8fe80 */
GEN_LIB GEN_FRAME unsigned int F_00d8fe80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8fe80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int in_ecx;
  int iVar2;
  float fVar3;
  int iVar1;
  
  if (0 < param_2) {
    fVar3 = 0.0;
    in_ecx = param_1;
    iVar2 = param_2;
    do {
      iVar1 = 0;
      if (in_ecx != 0) {
        F_00d8ab50(in_ecx GEN_EDX_ARG,fVar3,fVar3,fVar3,fVar3);
        iVar1 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar1 + 0x10;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d8fec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8fec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd8fec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00d8ff00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ff00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd8ff00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d8ff20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ff20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd8ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = (*pcVar1)(this,&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00d8ff50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ff50(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8ff50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d8ff60 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d8ff60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8ff60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return (float10)*((float *)GEN_TOP((*in_ecx + (in_ecx[4] * param_2 + param_3) * 4)));
}

/* ref: FUN_00d8ffa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ffa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd8ffa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d8ffc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d8ffc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd8ffc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: FUN_00d8ffd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d8ffd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd8ffd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc))) * *((int *)GEN_TOP(((int)this + 0x10)))) {
    iVar1 = *param_1;
    do {
      *((float *)GEN_TOP((*(int *)this + iVar2 * 4))) =
           *((float *)GEN_TOP((*(int *)this + iVar2 * 4))) - *((float *)GEN_TOP((iVar1 + iVar2 * 4)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0xc))) * *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return 0;
}

/* ref: FUN_00d90020 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d90020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd90020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10))) * *((int *)GEN_TOP(((int)this + 0xc)));
  iVar1 = 0;
  if (3 < iVar2) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)this + iVar1 * 4))) = *param_1;
      iVar1 = iVar1 + 4;
      *((undefined4 *)GEN_TOP((*(int *)this - 0xc + iVar1 * 4))) = *param_1;
      *((undefined4 *)GEN_TOP((*(int *)this - 8 + iVar1 * 4))) = *param_1;
      *((undefined4 *)GEN_TOP((*(int *)this - 4 + iVar1 * 4))) = *param_1;
    } while (iVar1 < iVar2 - 3);
  }
  for (; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    *((undefined4 *)GEN_TOP((*(int *)this + iVar1 * 4))) = *param_1;
  }
  return 0;
}

/* ref: FUN_00d90090 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d90090(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd90090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((*in_ecx + param_2 * 4)));
}

/* ref: FUN_00d900a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d900a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd900a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x10))) * *((int *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: FUN_00d90100 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d90100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd90100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 4;
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 4)));
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d90140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd90140u, gen_a0, gen_a1, 0u, 0u);
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
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    iVar4 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar4 != 0) goto LAB_00d90196;
  }
  iVar4 = ((int)0x80000000);
LAB_00d90196: ;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  *(uint *)this = uVar3;
  return (uint)this;
}

/* ref: FUN_00d901b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d901b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd901b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  uint in_ecx;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    in_ecx = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) << 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    in_ecx = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    iVar2 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
    if (iVar2 != 0) goto LAB_00d90205;
  }
  iVar2 = ((int)0x80000000);
LAB_00d90205: ;
  *(uint *)this = in_ecx;
  *((int *)GEN_TOP(((int)this + 4))) = iVar3;
  *((int *)GEN_TOP(((int)this + 8))) = iVar2;
  if (0 < iVar3) {
    fVar4 = 0.0;
    do {
      iVar2 = 0;
      if (in_ecx != 0) {
        F_00d8ab50(in_ecx GEN_EDX_FWD,fVar4,fVar4,fVar4,fVar4);
        iVar2 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar2 + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d90250 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d90250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd90250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 4;
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 4)));
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d90290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd90290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    iVar3 = (*(int *)&gen_args[0]);
    if ((*(int *)&gen_args[0]) != 0) goto LAB_00d902d5;
  }
  iVar3 = ((int)0x80000000);
LAB_00d902d5: ;
  *((int *)GEN_TOP(((int)this + 8))) = iVar3;
  iVar3 = 0;
  *(uint *)this = uVar2;
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  if (0 < iVar1) {
    do {
      *((undefined1 *)GEN_TOP((iVar3 + uVar2))) = *(*(undefined1 * PTR32 *)&gen_args[1]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return (uint)this;
}

/* ref: FUN_00d90300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd90300u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d90340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd90340u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d90380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd90380u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d903c0 */
GEN_LIB GEN_FRAME float F_00d903c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd903c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float local_8;
  
  uVar3 = F_00d900a0(param_1 GEN_EDX_ARG);
  iVar4 = 0;
  local_8 = 0.0;
  if (0 < (int)uVar3) {
    do {
      iVar1 = iVar4 * 4;
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      fVar5 = GEN_X87((float10)*((float *)GEN_TOP((*param_2 + iVar2))) * (float10)*((float *)GEN_TOP((*param_1 + iVar1))) +
              (float10)local_8);
      local_8 = (float)fVar5;
    } while (iVar4 < (int)uVar3);
    return (float)fVar5;
  }
  return 0.0;
}

/* ref: FUN_00d90420 */
GEN_LIB GEN_FRAME uint F_00d90420(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd90420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  uint uVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = F_00d900a0(param_2 GEN_EDX_ARG);
  iVar6 = 0;
  uVar5 = uVar3;
  if (0 < (int)uVar3) {
    do {
      pfVar4 = ((float *)GEN_TOP(F_00d8ff50(param_1 GEN_EDX_ARG,iVar6)));
      iVar1 = iVar6 * 4;
      uVar5 = *param_2;
      iVar2 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *pfVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar5 + iVar2))) +
                       (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*param_4 + iVar1))) * (float10)*param_3))))));
    } while (iVar6 < (int)uVar3);
  }
  return uVar5;
}

/* ref: FUN_00d90470 */
GEN_LIB GEN_FRAME uint F_00d90470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd90470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  
  pfVar2 = ((float *)GEN_TOP(F_00d900a0(param_1 GEN_EDX_ARG)));
  iVar4 = 0;
  pfVar3 = pfVar2;
  if (0 < (int)pfVar2) {
    do {
      pfVar3 = ((float *)GEN_TOP(F_00d8ff50(param_1 GEN_EDX_ARG,iVar4)));
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *pfVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*param_3 + iVar1))) * (float10)*param_2 + (float10)*pfVar3
                       )));
      pfVar3 = param_2;
    } while (iVar4 < (int)pfVar2);
  }
  return (uint)pfVar3;
}

/* ref: FUN_00d904b0 */
GEN_LIB GEN_FRAME uint F_00d904b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd904b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  float * pfVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = F_00d900a0(param_1 GEN_EDX_ARG);
  iVar5 = 0;
  uVar4 = uVar2;
  if (0 < (int)uVar2) {
    do {
      pfVar3 = ((float *)GEN_TOP(F_00d8ff50(param_1 GEN_EDX_ARG,iVar5)));
      uVar4 = *param_2;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *pfVar3 = ((float)GEN_TOF(-(float10)*((float *)GEN_TOP((uVar4 + iVar1)))));
    } while (iVar5 < (int)uVar2);
  }
  return uVar4;
}

/* ref: FUN_00d904f0 */
GEN_LIB GEN_FRAME uint F_00d904f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd904f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint * puVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  
  puVar1 = ((uint *)GEN_TOP(F_00d900a0(param_1 GEN_EDX_ARG)));
  iVar4 = 0;
  puVar3 = puVar1;
  if (0 < (int)puVar1) {
    do {
      puVar2 = ((uint *)GEN_TOP(F_00d8ff50(param_1 GEN_EDX_ARG,iVar4)));
      puVar3 = ((uint *)GEN_TOP(F_00d8ff50(param_1 GEN_EDX_ARG,iVar4)));
      iVar4 = iVar4 + 1;
      *puVar3 = *puVar2 ^ REFG(uint, 0x10920d0);
    } while (iVar4 < (int)puVar1);
  }
  return (uint)puVar3;
}

/* ref: FUN_00d90540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd90540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  undefined * pvVar6;
  float10 fVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  F_00d90020(param_3 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  uVar1 = F_00d8fe10(param_1 GEN_EDX_ARG);
  if (0 < (int)uVar1) {
    iVar4 = *((int *)GEN_TOP(((int)this + 4)));
    do {
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          pfVar2 = ((float *)GEN_TOP(F_00d8fde0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar5 * 4))),(*(undefined * PTR32 *)(gen_frame + 0x0)))));
          fVar7 = F_00d8ff60(param_2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + iVar5 * 4))),
                               (*(undefined * PTR32 *)(gen_frame + 0x0)));
          iVar4 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          *pfVar2 = ((float)GEN_TOF((fVar7 * (float10)*((float *)GEN_TOP((*(int *)this + iVar4))) + (float10)*pfVar2)));
          iVar4 = *((int *)GEN_TOP(((int)this + 4)));
        } while (iVar5 < iVar4);
      }
      pvVar6 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 1)));
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar6;
      uVar1 = F_00d8fe10(param_1 GEN_EDX_ARG);
    } while ((int)pvVar6 < (int)uVar1);
  }
  param_2 = 0;
  uVar1 = F_00d8fe10(param_1 GEN_EDX_ARG);
  if (0 < (int)uVar1) {
    iVar4 = *((int *)GEN_TOP(((int)this + 4)));
    do {
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          pfVar2 = ((float *)GEN_TOP(F_00d8fde0(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + iVar5 * 4))),param_2)));
          pfVar3 = ((float *)GEN_TOP(F_00d8fde0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar5 * 4))),param_2)));
          *pfVar2 = *((float *)GEN_TOP((*(int *)this + iVar5 * 4))) * *pfVar3 + *pfVar2;
          iVar4 = *((int *)GEN_TOP(((int)this + 4)));
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
      param_2 = param_2 + 1;
      uVar1 = F_00d8fe10(param_1 GEN_EDX_ARG);
    } while (param_2 < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00d90650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd90650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint in_ecx;
  int iVar3;
  float fVar4;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x10);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this;
  if (0 < iVar3) {
    fVar4 = 0.0;
    in_ecx = uVar1;
    do {
      iVar2 = 0;
      if (in_ecx != 0) {
        uVar1 = F_00d8ab50(in_ecx GEN_EDX_ARG,fVar4,fVar4,fVar4,fVar4);
        iVar2 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar2 + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar1;
}

/* ref: FUN_00d906d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d906d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd906d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d90710 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d90710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd90710u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d90750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd90750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  F_00d90020(param_1 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  uVar1 = F_00d90540(this GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00d90790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd90790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint in_ecx;
  int iVar3;
  float fVar4;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
  }
  iVar3 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this;
  if (0 < iVar3) {
    fVar4 = 0.0;
    in_ecx = uVar1;
    do {
      iVar2 = 0;
      if (in_ecx != 0) {
        uVar1 = F_00d8ab50(in_ecx GEN_EDX_ARG,fVar4,fVar4,fVar4,fVar4);
        iVar2 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar2 + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar1;
}

/* ref: FUN_00d90810 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d90810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd90810u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d90850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd90850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_2;
  return (uint)this;
}

/* ref: FUN_00d90890 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d90890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd90890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00d90930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90930(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd90930u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  undefined4 in_EAX = 0;
  float * pfVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = GEN_ISNAN(param_4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar3 = bVar2 || param_4 == *(float *)&REFG(undefined, 0x1088114);
  pfVar1 = ((float *)GEN_TOP(CONCAT22((short)((uint)in_EAX >> 0x10),
                             CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U |
                                      !(*(float *)&REFG(undefined, 0x1088114) <= param_4),(char)in_EAX))));
  if (bVar2 == bVar3) {
    if (param_1[4] == (param_1[5] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1 + 3,4);
    }
    *((undefined4 *)GEN_TOP((param_1[3] + param_1[4] * 4))) = param_2;
    param_1[4] = param_1[4] + 1;
    if (param_1[7] == (param_1[8] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1 + 6,4);
    }
    *((undefined4 *)GEN_TOP((param_1[6] + param_1[7] * 4))) = param_3;
    param_1[7] = param_1[7] + 1;
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
    }
    pfVar1 = ((float *)GEN_TOP((*param_1 + param_1[1] * 4)));
    *pfVar1 = param_4;
    param_1[1] = param_1[1] + 1;
  }
  return (uint)pfVar1;
}

/* ref: FUN_00d909f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d909f0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd909f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int iVar1;
  uint uVar2;
  
  param_1[3] = param_2;
  uVar2 = param_2 * param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = ((int)0x80000000);
  param_1[4] = param_3;
  if (0 < (int)uVar2) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,((int)uVar2 < 0) - 1 & uVar2,4);
  }
  iVar1 = 0;
  param_1[1] = uVar2;
  if (3 < (int)uVar2) {
    do {
      *((float *)GEN_TOP((*param_1 + iVar1 * 4))) = param_4;
      *((float *)GEN_TOP((*param_1 + 4 + iVar1 * 4))) = param_4;
      *((float *)GEN_TOP((*param_1 + 8 + iVar1 * 4))) = param_4;
      *((float *)GEN_TOP((*param_1 + 0xc + iVar1 * 4))) = param_4;
      iVar1 = iVar1 + 4;
    } while (iVar1 < (int)(uVar2 - 3));
  }
  for (; iVar1 < (int)uVar2; iVar1 = iVar1 + 1) {
    *((float *)GEN_TOP((*param_1 + iVar1 * 4))) = param_4;
  }
  return (uint)param_1;
}

/* ref: FUN_00d90aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd90aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
  uVar1 = param_1 * param_2;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (0 < (int)uVar1) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,((int)uVar1 < 0) - 1 & uVar1,4);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d90b00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d90b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd90b00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d90b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd90b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((int *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  uVar1 = F_00d900a0(this GEN_EDX_FWD);
  if (0 < (int)uVar1) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,((int)uVar1 < 0) - 1 & uVar1,4);
  }
  iVar2 = 0;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10))) * *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)this + iVar2 * 4))) = *((undefined4 *)GEN_TOP((*param_1 + iVar2 * 4)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x10))) * *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return (uint)this;
}

/* ref: FUN_00d90bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd90bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00d90b40(param_1 GEN_EDX_FWD,this);
  F_00d8ffd0(param_1 GEN_EDX_ARG,param_2);
  return (uint)param_1;
}

/* ref: FUN_00d90c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d90c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd90c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = 0.0;
  uVar1 = F_00d8fe10(param_2 GEN_EDX_FWD);
  uVar2 = F_00d8fe00(param_2 GEN_EDX_ARG);
  F_00d909f0(param_1 GEN_EDX_ARG,uVar2,uVar1,fVar3);
  fVar3 = 0.0;
  uVar1 = F_00d8fe10(param_2 GEN_EDX_ARG);
  uVar2 = F_00d8ffc0(this GEN_EDX_ARG);
  F_00d909f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2,uVar1,fVar3);
  F_00d90540(this GEN_EDX_ARG,param_1,param_2,((undefined1 *)(gen_frame + 0x0)));
  F_00d90b00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return param_1;
}

/* ref: FUN_00d90c80 */
GEN_LIB GEN_FRAME uint F_00d90c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xd90c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  GEN_FRAME_DECL_TOP(0x7c, 4, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar1 = F_00d8fe00((*(undefined4 *)&gen_args[2]) GEN_EDX_ARG);
  uVar2 = F_00d90c00((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[2]));
  F_00d90bd0((*(undefined * PTR32 *)&gen_args[3]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x50)),uVar2);
  F_00d90b00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00d90b40(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x50)));
  F_00d90aa0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,uVar1,1);
  uVar5 = 1;
  uVar1 = F_00d8ffc0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  F_00d90aa0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar1,uVar5);
  fVar4 = F_00d903c0(((undefined1 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x74)) = fVar4;
  iVar3 = 0;
  (*(float *)(gen_frame + 0x70)) = (*(float *)&gen_args[5]) * (*(float *)&gen_args[5]);
  if (0 < (*(int *)&gen_args[4])) {
    do {
      if ((*(float *)(gen_frame + 0x74)) < (*(float *)(gen_frame + 0x70))) {
        *(*(undefined1 * PTR32 *)&gen_args[0]) = 1;
        goto LAB_00d90d0f;
      }
      F_00d90750((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x14)));
      fVar4 = F_00d903c0(((undefined1 *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x28)));
      (*(float *)&gen_args[5]) = (float)((float10)(*(float *)(gen_frame + 0x74)) / (float10)fVar4);
      F_00d90470((*(undefined4 *)&gen_args[2]),&(*(float *)&gen_args[5]),((undefined1 *)(gen_frame + 0x3c)));
      iVar3 = iVar3 + 1;
      if (iVar3 == (iVar3 / 0x32) * 0x32) {
        F_00d904b0(((undefined1 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)&gen_args[3]));
        F_00d90540((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x50)),(*(undefined4 *)&gen_args[2]),((undefined1 *)(gen_frame + 0x14)));
        F_00d904f0(((undefined1 *)(gen_frame + 0x50)));
      }
      else {
        (*(uint *)(gen_frame + 0x6c)) = (uint)gen_fl2bits((*(float *)&gen_args[5])) ^ REFG(uint, 0x10920d0);
        F_00d90470(((undefined1 *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x6c)),((undefined1 *)(gen_frame + 0x28)));
      }
      (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x74));
      fVar4 = F_00d903c0(((undefined1 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0x50)));
      (*(float *)(gen_frame + 0x74)) = fVar4;
      (*(float *)(gen_frame + 0x64)) = fVar4 / (*(float *)(gen_frame + 0x68));
      F_00d90420(((undefined1 *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x3c)));
    } while (iVar3 < (*(int *)&gen_args[4]));
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
LAB_00d90d0f: ;
  F_00d90b00(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00d90b00(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
  F_00d90b00(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
  F_00d90b00(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG);
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d90e50 */
GEN_LIB GEN_FRAME uint F_00d90e50(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xd90e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL(0x38, 8);
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  float * pfVar4;
  char * pcVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uVar9;
  
  uVar9 = 1;
  uVar1 = F_00d8fe00(param_3 GEN_EDX_ARG);
  F_00d90aa0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar1,uVar9);
  uVar9 = 1;
  uVar1 = F_00d8fe00(param_4 GEN_EDX_ARG);
  F_00d90aa0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,uVar9);
  iVar6 = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_00d8fe10(param_3 GEN_EDX_ARG);
  if (0 < (int)uVar1) {
    do {
      iVar7 = 0;
      uVar1 = F_00d8fe00(param_3 GEN_EDX_ARG);
      if (0 < (int)uVar1) {
        do {
          puVar2 = ((undefined4 *)GEN_TOP(F_00d8fde0(param_3 GEN_EDX_ARG,iVar7,iVar6)));
          puVar3 = ((undefined4 *)GEN_TOP(F_00d8ff50(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,iVar7)));
          iVar6 = (*(int *)(gen_frame + 0x2c));
          *puVar3 = *puVar2;
          fVar8 = F_00d8ff60(param_4 GEN_EDX_ARG,iVar7,(*(int *)(gen_frame + 0x2c)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)fVar8)));
          pfVar4 = ((float *)GEN_TOP(F_00d8ff50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar7)));
          *pfVar4 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x28)))));
          iVar7 = iVar7 + 1;
          uVar1 = F_00d8fe00(param_3 GEN_EDX_ARG);
        } while (iVar7 < (int)uVar1);
      }
      pcVar5 = ((char *)GEN_TOP(F_00d90c80(&(*(undefined1 *)(gen_frame + 0x33)),param_2,((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x0)),param_5,param_6)));
      if (*pcVar5 == '\0') {
        *param_1 = 0;
        goto LAB_00d90f64;
      }
      iVar7 = 0;
      uVar1 = F_00d8fe00(param_3 GEN_EDX_ARG);
      if (0 < (int)uVar1) {
        do {
          puVar2 = ((undefined4 *)GEN_TOP(F_00d8ff50(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,iVar7)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar2;
          puVar2 = ((undefined4 *)GEN_TOP(F_00d8fde0(param_3 GEN_EDX_ARG,iVar7,iVar6)));
          *puVar2 = *(*(undefined4 * PTR32 *)(gen_frame + 0x28));
          iVar7 = iVar7 + 1;
          uVar1 = F_00d8fe00(param_3 GEN_EDX_ARG);
          iVar6 = (*(int *)(gen_frame + 0x2c));
        } while (iVar7 < (int)uVar1);
      }
      iVar6 = iVar6 + 1;
      (*(int *)(gen_frame + 0x2c)) = iVar6;
      uVar1 = F_00d8fe10(param_3 GEN_EDX_ARG);
    } while (iVar6 < (int)uVar1);
  }
  *param_1 = 1;
LAB_00d90f64: ;
  F_00d90b00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00d90b00(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00d90f90 */
GEN_LIB GEN_FRAME unsigned int F_00d90f90(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd90f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  char * pcVar1;
  
  for (pcVar1 = param_1; ((pcVar1 != ((char *)GEN_TOP(0x0)) && (*pcVar1 != '\0')) && (*pcVar1 != param_2));
      pcVar1 = pcVar1 + 1) {
  }
  return 0;
}

/* ref: Global::HexDigitValue */
GEN_LIB GEN_FRAME uint F_00d90fb0(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd90fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  if ((byte)(param_1 - 0x30U) < 10) {
    return (int)param_1 - 0x30;
  }
  if ((byte)(param_1 + 0xbfU) < 6) {
    return (int)param_1 - 0x37;
  }
  if ((byte)(param_1 + 0x9fU) < 6) {
    return (int)param_1 - 0x57;
  }
  return 0xffffffff;
}

/* ref: Global::ParseKeyCodeHexPair */
GEN_LIB GEN_FRAME unsigned int F_00d90ff0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd90ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  char cVar1;
  int iVar2;
  char * pcVar3;
  
  *param_3 = -1;
  *param_2 = -1;
  if (param_1 != 0) {
    cVar1 = *((char *)GEN_TOP((param_1 + 2)));
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar2 = cVar1 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar2 = cVar1 - 0x37;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar2 = cVar1 - 0x57;
    }
    else {
      iVar2 = -1;
    }
    pcVar3 = ((char *)GEN_TOP((param_1 + 3)));
    while (-1 < iVar2) {
      *param_2 = *param_2 * 0x10 + iVar2;
      cVar1 = *pcVar3;
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar2 = cVar1 - 0x30;
      }
      else if ((byte)(cVar1 + 0xbfU) < 6) {
        iVar2 = cVar1 - 0x37;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        iVar2 = cVar1 - 0x57;
      }
      else {
        iVar2 = -1;
      }
      pcVar3 = pcVar3 + 1;
    }
    cVar1 = pcVar3[2];
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar2 = cVar1 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar2 = cVar1 - 0x37;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar2 = cVar1 - 0x57;
    }
    else {
      iVar2 = -1;
    }
    pcVar3 = pcVar3 + 3;
    while (-1 < iVar2) {
      *param_3 = *param_3 * 0x10 + iVar2;
      cVar1 = *pcVar3;
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar2 = cVar1 - 0x30;
      }
      else if ((byte)(cVar1 + 0xbfU) < 6) {
        iVar2 = cVar1 - 0x37;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        iVar2 = cVar1 - 0x57;
      }
      else {
        iVar2 = -1;
      }
      pcVar3 = pcVar3 + 1;
    }
  }
  return;
}

/* ref: Global::CheckAnimationKeyCode */
GEN_LIB GEN_FRAME uint F_00d91120(GEN_P(undefined1 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd91120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  *param_1 = 0;
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  if ((byte)(((char *)REFP(0x10e0bc8))[2] - 0x30U) < 10) {
    iVar2 = ((char *)REFP(0x10e0bc8))[2] - 0x30;
  }
  else if ((byte)(((char *)REFP(0x10e0bc8))[2] + 0xbfU) < 6) {
    iVar2 = ((char *)REFP(0x10e0bc8))[2] - 0x37;
  }
  else if ((byte)(((char *)REFP(0x10e0bc8))[2] + 0x9fU) < 6) {
    iVar2 = ((char *)REFP(0x10e0bc8))[2] - 0x57;
  }
  else {
    iVar2 = -1;
  }
  pcVar3 = ((char *)REFP(0x10e0bcb));
  while (-1 < iVar2) {
    uVar4 = uVar4 * 0x10 + iVar2;
    cVar1 = *pcVar3;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar2 = cVar1 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar2 = cVar1 - 0x37;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar2 = cVar1 - 0x57;
    }
    else {
      iVar2 = -1;
    }
    pcVar3 = pcVar3 + 1;
  }
  cVar1 = pcVar3[2];
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar2 = cVar1 - 0x30;
  }
  else if ((byte)(cVar1 + 0xbfU) < 6) {
    iVar2 = cVar1 - 0x37;
  }
  else if ((byte)(cVar1 + 0x9fU) < 6) {
    iVar2 = cVar1 - 0x57;
  }
  else {
    iVar2 = -1;
  }
  pcVar3 = pcVar3 + 3;
  while (-1 < iVar2) {
    uVar5 = uVar5 * 0x10 + iVar2;
    cVar1 = *pcVar3;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar2 = cVar1 - 0x30;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar2 = cVar1 - 0x37;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar2 = cVar1 - 0x57;
    }
    else {
      iVar2 = -1;
    }
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = ((char *)REFP(0x10e0bc8));
  do {
    if ((*pcVar3 == '\0') || (*pcVar3 == '.')) {
      if (pcVar3 != ((char *)GEN_TOP(0x0))) goto joined_r0x00d9127e;
      break;
    }
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != ((char *)GEN_TOP(0x0)));
  goto LAB_00d91264;
  while ((*pcVar3 != '\0' && (*pcVar3 != '.'))) {
joined_r0x00d9127e: ;
    pcVar3 = pcVar3 + 1;
    if (pcVar3 == ((char *)GEN_TOP(0x0))) goto LAB_00d91264;
  }
  if (pcVar3 != ((char *)GEN_TOP(0x0))) {
    pcVar3 = pcVar3 + 1;
    if ((int)uVar4 < 0) {
      uVar5 = (uVar4 ^ 0xc54853e5) & 0x7fffffff;
      uVar4 = F_00ddd100();
      iVar2 = uVar5 - ((int)uVar4 >> 8);
      if (((int)uVar5 < (int)uVar4 >> 8) || (0x96c99 < iVar2)) {
        F_00da0bc0(
                    ((char *)REFP(0x11387d0))
                    );
        return 2;
      }
      if (iVar2 < 0xd2f) {
        *param_1 = 1;
        return 3;
      }
    }
    else {
      uVar4 = 0;
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
        uVar4 = uVar4 * 0x17 + (int)cVar1;
      }
      if (uVar5 != ((uVar4 ^ 0xc54853e5) & 0x7fffffff)) goto LAB_00d91264;
    }
    *param_1 = 1;
    return 0;
  }
LAB_00d91264: ;
  F_00da0bc0(
              ((char *)REFP(0x1138860))
              );
  return 1;
}

/* ref: FUN_00d91330 */
GEN_LIB GEN_NOFRAME unsigned int F_00d91330(void)
{
  GEN_ENTER(0xd91330u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkStringPtr::hkStringPtr */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d91340(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd91340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00d91350 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d91350(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd91350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return in_ecx;
}

/* ref: hkStringPtr::GetLength */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d91360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd91360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)this & 0xfffffffe) != 0) {
    uVar1 = F_00da0e60(*(uint *)this & 0xfffffffe);
    return uVar1;
  }
  return 0;
}

/* ref: hkString::StrDup */
GEN_LIB GEN_NOFRAME uint F_00d91380(GEN_P(undefined4 in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xd91380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a0;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = F_00da0e60(in_edi);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar1 + 1);
  F_00da0e20(uVar1,in_edi);
  return uVar1;
}

/* ref: hkString::StrNDup */
GEN_LIB GEN_FRAME uint F_00d913c0(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd913c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar1 = F_00da0e60(param_2);
  if ((int)in_eax < (int)uVar1) {
    uVar1 = in_eax;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar1 + 1);
  F_00da0e40(uVar3,param_2,uVar1);
  *((undefined1 *)GEN_TOP((uVar3 + uVar1))) = 0;
  return uVar3;
}

/* ref: hkStringPtr::AssignInternal */
GEN_LIB GEN_FRAME uint F_00d91410(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd91410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  LPVOID pvVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if ((uVar2 & 0xfffffffe) != in_eax) {
    if ((uVar2 & 1) != 0) {
      pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar2 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),uVar2 - 1);
    }
    if (in_eax != 0) {
      if (param_3 == -1) {
        uVar2 = F_00d91380(in_eax);
        *param_2 = uVar2 + 1;
        return uVar2 + 1;
      }
      uVar2 = F_00d913c0(param_3,in_eax);
      *param_2 = uVar2 + 1;
      return uVar2 + 1;
    }
    *param_2 = 0;
  }
  return uVar2;
}

/* ref: hkStringPtr::hkStringPtr_00d91480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d91480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd91480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 0;
  F_00d91410(param_1,this,0xffffffff);
  return (uint)this;
}

/* ref: hkStringPtr::hkStringPtrWithLength */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d914b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd914b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0;
  F_00d91410(param_1,this,param_2);
  return (uint)this;
}

/* ref: hkStringPtr::hkStringPtrCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d914e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd914e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  F_00d91410(*param_1 & 0xfffffffe,this,0xffffffff);
  return (uint)this;
}

/* ref: hkStringPtr::~hkStringPtr */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d91510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd91510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91410(0,this,0xffffffff);
  return uVar1;
}

/* ref: hkStringPtr::AssignCString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d91520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd91520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d91410(param_1,this,0xffffffff);
  return (uint)this;
}

/* ref: hkStringPtr::AssignCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d91540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd91540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  F_00d91410(*param_1 & 0xfffffffe,this,0xffffffff);
  return (uint)this;
}

/* ref: hkStringPtr::Set */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d91560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd91560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d91410(param_1,this,param_2);
  return uVar1;
}

/* ref: hkStringPtr::SetPointerAligned */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d91580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd91580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)this & 0xfffffffe;
  if (uVar1 != param_1) {
    uVar1 = F_00d91410(0,this,0xffffffff);
    *(uint *)this = param_1;
  }
  return uVar1;
}

/* ref: hkStringPtr::Printf */
GEN_LIB GEN_FRAME uint F_00d915b0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd915b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  GEN_FRAME_DECL_TOP(0x110, 0, 4);
  uint uVar1;
  uint uVar2;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x800000ff;
LAB_00d915e0: ;
  do {
    uVar2 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
    uVar1 = F_00da0cd0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,param_2,((undefined *)&gen_args[2]));
    if ((int)uVar1 < 0) goto LAB_00d91642;
    if ((int)uVar1 < (int)uVar2) {
      F_00d91520(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
      F_00d91520(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      uVar1 = (*(uint *)(gen_frame + 0x8));
      if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
      }
      return uVar1;
    }
  } while ((int)uVar1 <= (int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff));
  uVar2 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
  if ((int)uVar1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  goto LAB_00d9162d;
LAB_00d91642: ;
  uVar1 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
  if (uVar1 < uVar1 * 2) {
    uVar1 = uVar1 * 2;
LAB_00d9162d: ;
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar1,1);
  }
  goto LAB_00d915e0;
}

/* ref: hkArray::InitExternalBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d916c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd916c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: hkArray::Reserve */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d916e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd916e0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d91720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d91720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd91720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: hkMemoryRouter::ThreadHeapAlloc */
GEN_LIB GEN_FRAME uint F_00d91740(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd91740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: hkMemoryRouter::ThreadHeapFree */
GEN_LIB GEN_FRAME uint F_00d91770(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd91770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: hkInplaceArray::InitInplace256 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d917a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd917a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x800000ff;
  return (uint)this;
}

/* ref: hkArray::ClearAndDeallocate */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d917c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd917c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d91800 */
GEN_LIB GEN_NOFRAME unsigned int F_00d91800(void)
{
  GEN_ENTER(0xd91800u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d91810 */
GEN_LIB GEN_NOFRAME unsigned int F_00d91810(void)
{
  GEN_ENTER(0xd91810u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkReferencedObject::vf2 */
GEN_LIB GEN_NOFRAME uint F_00d91820(void)
{
  GEN_ENTER(0xd91820u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkReferencedObject::AddReferenceUnlocked */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d91830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd91830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((short *)GEN_TOP((in_ecx + 4))) != 0) {
    *((short *)GEN_TOP((in_ecx + 6))) = *((short *)GEN_TOP((in_ecx + 6))) + 1;
  }
  return;
}

/* ref: hkReferencedObject::RemoveReference */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d91840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd91840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * phVar1;
  uint in_EAX = 0;
  
  if (*(short *)(this + 4) != 0) {
    phVar1 = this + 6;
    *(short *)phVar1 = *(short *)phVar1 - 1;
    if (*(short *)phVar1 == 0) {
      in_EAX = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
    }
  }
  return in_EAX;
}

/* ref: FUN_00d91860 */
GEN_LIB GEN_NOFRAME uint F_00d91860(void)
{
  GEN_ENTER(0xd91860u, 0u, 0u, 0u, 0u);
  return 0x1099440;
}

/* ref: FUN_00d91870 */
GEN_LIB GEN_NOFRAME uint F_00d91870(void)
{
  GEN_ENTER(0xd91870u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x34)));
  puVar2[1] = 0x10034;
  *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x11388dc));
  puVar2[4] = 0xfffffff1;
  *(undefined2 *)(puVar2 + 6) = 0x8000;
  F_00da5ee0(puVar2 + 7 GEN_EDX_ARG,4000);
  puVar2[2] = 1;
  F_00da5c70(puVar2 + 4 GEN_EDX_ARG);
  puVar2[3] = 0;
  return (uint)puVar2;
}

/* ref: hkReferencedObject::SetLockMode */
GEN_LIB GEN_FRAME uint F_00d918e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd918e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *((uint *)GEN_TOP((REFG(int, 0x15d9a84) + 8))) = param_1;
  return param_1;
}

/* ref: hkReferencedObject::CreateLockAndSetMode */
GEN_LIB GEN_FRAME uint F_00d91900(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd91900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * phVar1;
  LPVOID pvVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  
  phVar1 = REFG(undefined4, 0x15d9a84);
  if (REFG(undefined4, 0x15d9a84) == ((undefined *)GEN_TOP(0x0))) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x34)));
    *((undefined2 *)GEN_TOP(((int)this + 4))) = 0x34;
    uVar3 = F_00d91e20(this GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP((uVar3 + 8))) = param_1;
    uVar4 = uVar3;
    if (REFG(undefined4, 0x15d9a84) != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_00d91840(REFG(undefined4, 0x15d9a84) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15d9a84) = ((undefined *)GEN_TOP(uVar3));
    return uVar4;
  }
  *((undefined4 *)GEN_TOP((REFG(undefined4, 0x15d9a84) + 8))) = param_1;
  return (uint)phVar1;
}

/* ref: hkReferencedObject::AddReference */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d919e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd919e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  LPVOID in_EAX = 0;
  LPVOID pvVar2;
  uint extraout_EAX = 0;
  
  iVar1 = REFG(int, 0x15d9a84);
  if (*(short *)(this + 4) != 0) {
    in_EAX = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    if ((*((int *)GEN_TOP((iVar1 + 8))) == 1) && (*((int *)GEN_TOP(((int)in_EAX + 0x3c))) != 0x23df4554)) {
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if (*((int *)GEN_TOP(((int)pvVar2 + 0x3c))) == 0x23df4554) {
        *((int *)GEN_TOP((iVar1 + 0xc))) = *((int *)GEN_TOP((iVar1 + 0xc))) + 1;
      }
      else {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x1c));
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 1;
        *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x3c))) = 0x23df4554;
      }
      *(short *)(this + 6) = *(short *)(this + 6) + 1;
      in_EAX = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      *((int *)GEN_TOP((iVar1 + 0xc))) = *((int *)GEN_TOP((iVar1 + 0xc))) - 1;
      if (*((int *)GEN_TOP((iVar1 + 0xc))) < 1) {
        *((undefined4 *)GEN_TOP(((int)in_EAX + 0x3c))) = 0;
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x1c));
        return extraout_EAX;
      }
    }
    else {
      *(short *)(this + 6) = *(short *)(this + 6) + 1;
    }
  }
  return (uint)in_EAX;
}

/* ref: hkReferencedObject::RemoveReference_00d91a80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d91a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd91a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  LPVOID in_EAX = 0;
  uint uVar2;
  LPVOID pvVar3;
  LPVOID extraout_EAX = 0;
  int iVar4;
  
  iVar1 = REFG(int, 0x15d9a84);
  if (*(short *)(this + 4) != 0) {
    if (*(short *)(this + 6) == 1) {
      *(undefined2 *)(this + 6) = 0;
      uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
      return uVar2;
    }
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    if ((*((int *)GEN_TOP((iVar1 + 8))) == 1) && (*((int *)GEN_TOP(((int)pvVar3 + 0x3c))) != 0x23df4554)) {
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x3c))) == 0x23df4554) {
        *((int *)GEN_TOP((iVar1 + 0xc))) = *((int *)GEN_TOP((iVar1 + 0xc))) + 1;
      }
      else {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x1c));
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 1;
        *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x3c))) = 0x23df4554;
      }
      iVar4 = (int)*(short *)(this + 6);
      *(short *)(this + 6) = *(short *)(this + 6) - 1;
      in_EAX = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      *((int *)GEN_TOP((iVar1 + 0xc))) = *((int *)GEN_TOP((iVar1 + 0xc))) - 1;
      if (*((int *)GEN_TOP((iVar1 + 0xc))) < 1) {
        *((undefined4 *)GEN_TOP(((int)in_EAX + 0x3c))) = 0;
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x1c));
        in_EAX = extraout_EAX;
      }
    }
    else {
      iVar4 = (int)*(short *)(this + 6);
      in_EAX = (LPVOID)(iVar4 - 1);
      *(short *)(this + 6) = (short)in_EAX;
    }
    if (iVar4 == 1) {
      in_EAX = (LPVOID)(*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
    }
  }
  return (uint)in_EAX;
}

/* ref: hkReferencedObject::RemoveReferences */
GEN_LIB GEN_FRAME unsigned int F_00d91b50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd91b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  LPVOID pvVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = REFG(int, 0x15d9a84);
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((*((int *)GEN_TOP((iVar4 + 8))) == 0) || (*((int *)GEN_TOP(((int)pvVar1 + 0x3c))) == 0x23df4554)) {
    puVar2 = param_1;
    iVar4 = param_2;
    if (0 < param_2) {
      do {
        F_00d91830(*puVar2 GEN_EDX_ARG);
        puVar2 = ((undefined4 *)GEN_TOP(((int)puVar2 + param_3)));
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
  }
  else {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x3c))) == 0x23df4554) {
      *((int *)GEN_TOP((iVar4 + 0xc))) = *((int *)GEN_TOP((iVar4 + 0xc))) + 1;
    }
    else {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
      *((undefined4 *)GEN_TOP((iVar4 + 0xc))) = 1;
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x3c))) = 0x23df4554;
    }
    puVar2 = param_1;
    iVar3 = param_2;
    if (0 < param_2) {
      do {
        F_00d91830(*puVar2 GEN_EDX_ARG);
        puVar2 = ((undefined4 *)GEN_TOP(((int)puVar2 + param_3)));
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    *((int *)GEN_TOP((iVar4 + 0xc))) = *((int *)GEN_TOP((iVar4 + 0xc))) - 1;
    if (*((int *)GEN_TOP((iVar4 + 0xc))) < 1) {
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x3c))) = 0;
      return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c)));
    }
  }
  return 0;
}

/* ref: hkReferencedObject::RemoveReferences_00d91c10 */
GEN_LIB GEN_FRAME uint F_00d91c10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd91c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  LPVOID pvVar1;
  uint extraout_EAX = 0;
  int iVar2;
  code * pcVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar5 = REFG(int, 0x15d9a84);
  pcVar3 = (((code *)GEN_TOP(gen_imp_TlsGetValue)));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((*((int *)GEN_TOP((iVar5 + 8))) == 0) || (*((int *)GEN_TOP(((int)pvVar1 + 0x3c))) == 0x23df4554)) {
    puVar4 = param_1;
    iVar5 = param_2;
    if (0 < param_2) {
      do {
        pvVar1 = (LPVOID)F_00d91840(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG);
        puVar4 = ((undefined4 *)GEN_TOP(((int)puVar4 + param_3)));
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  else {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x3c))) == 0x23df4554) {
      *((int *)GEN_TOP((iVar5 + 0xc))) = *((int *)GEN_TOP((iVar5 + 0xc))) + 1;
    }
    else {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x1c));
      *((undefined4 *)GEN_TOP((iVar5 + 0xc))) = 1;
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x3c))) = 0x23df4554;
    }
    iVar2 = param_2;
    puVar4 = param_1;
    if (0 < param_2) {
      do {
        F_00d91840(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG);
        puVar4 = ((undefined4 *)GEN_TOP(((int)puVar4 + param_3)));
        iVar2 = iVar2 - 1;
        pcVar3 = (((code *)GEN_TOP(gen_imp_TlsGetValue)));
      } while (iVar2 != 0);
    }
    pvVar1 = (*pcVar3)(REFG(undefined4, 0x15d9a88));
    *((int *)GEN_TOP((iVar5 + 0xc))) = *((int *)GEN_TOP((iVar5 + 0xc))) - 1;
    if (*((int *)GEN_TOP((iVar5 + 0xc))) < 1) {
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x3c))) = 0;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x1c));
      return extraout_EAX;
    }
  }
  return (uint)pvVar1;
}

/* ref: hkSingletonInitNode::hkSingletonInitNode */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d91d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd91d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_3;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = REFG(void * PTR32, 0x15dff80);
  REFG(void * PTR32, 0x15dff80) = this;
  return (uint)this;
}

/* ref: hkReferencedObject::ReplaceLockInstance */
GEN_LIB GEN_FRAME unsigned int F_00d91da0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd91da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(undefined4, 0x15d9a84) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91840(REFG(undefined4, 0x15d9a84) GEN_EDX_ARG);
    REFG(undefined4, 0x15d9a84) = ((undefined *)GEN_TOP(param_1));
    return;
  }
  REFG(undefined4, 0x15d9a84) = ((undefined *)GEN_TOP(param_1));
  return;
}

/* ref: FUN_00d91de0 */
GEN_LIB GEN_FRAME uint F_00d91de0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd91de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: hkReferencedObject::AllocObject */
GEN_LIB GEN_FRAME uint F_00d91df0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd91df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d91e20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d91e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd91e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11388dc));
  *((undefined2 *)GEN_TOP(((int)this + 0x18))) = 0x8000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xfffffff1;
  F_00da5ee0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,4000);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  F_00da5c70(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)this;
}

/* ref: FUN_00d91e70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d91e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd91e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_00d91e90 */
GEN_LIB GEN_FRAME uint F_00d91e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd91e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkReferencedObjectLock::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d91f30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd91f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00d91ff0 */
GEN_LIB GEN_FRAME unsigned int F_00d91ff0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd91ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d92020 */
GEN_LIB GEN_FRAME unsigned int F_00d92020(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd92020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d92050 */
GEN_LIB GEN_FRAME unsigned int F_00d92050(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd92050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkContainerTempAllocator::Allocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerTempAllocator::Allocator::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d920a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd920a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerTempAllocator::Allocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d920c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd920c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) + 0xc))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerTempAllocator::Allocator::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d920e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd920e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerTempAllocator::Allocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) + 0x14))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerTempAllocator::Allocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) + 0x20))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerTempAllocator::Allocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) + 0x24))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerDebugAllocator::Allocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerDebugAllocator::Allocator::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerDebugAllocator::Allocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d921a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd921a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 0xc))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerDebugAllocator::Allocator::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d921c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd921c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerDebugAllocator::Allocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d921e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd921e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 0x14))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerDebugAllocator::Allocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 0x20))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerDebugAllocator::Allocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 0x24))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerHeapAllocator::Allocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerHeapAllocator::Allocator::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerHeapAllocator::Allocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 0xc))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerHeapAllocator::Allocator::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d922a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd922a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerHeapAllocator::Allocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d922c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd922c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 0x14))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerHeapAllocator::Allocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d922e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd922e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 0x20))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerHeapAllocator::Allocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd92300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 0x24))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar2;
}

/* ref: hkContainerTempAllocator::Allocator::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92320(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd92320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9b7c0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return param_1;
}

/* ref: hkContainerDebugAllocator::Allocator::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92360(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd92360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9b7c0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return param_1;
}

/* ref: hkContainerHeapAllocator::Allocator::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d923a0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd923a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9b7c0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return param_1;
}

/* ref: hkMemoryRouter::AlignedAlloc */
GEN_LIB GEN_FRAME uint F_00d923f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd923f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,param_2 + param_3 + 0x10);
  uVar2 = uVar1 + 0xf + param_3 & ~(param_3 - 1U);
  *((int *)GEN_TOP((uVar2 - 0xc))) = param_2 + param_3;
  *((int * PTR32 *)GEN_TOP((uVar2 - 0x10))) = param_1;
  *((uint *)GEN_TOP((uVar2 - 8))) = uVar2 - uVar1;
  return uVar2;
}

/* ref: hkMemoryRouter::AlignedFree */
GEN_LIB GEN_FRAME uint F_00d92430(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd92430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    *((undefined4 *)GEN_TOP((param_2 - 0x10))) = 0;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,param_2 - *((int *)GEN_TOP((param_2 - 8))),*((int *)GEN_TOP((param_2 - 0xc))) + 0x10);
  }
  return uVar1;
}

/* ref: hkMemoryRouter::EasyAlloc */
GEN_LIB GEN_FRAME uint F_00d92460(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd92460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,param_2 + 0x10)));
  puVar1[1] = param_2;
  *puVar1 = param_1;
  return (uint)(puVar1 + 4);
}

/* ref: hkMemoryRouter::GetEasyAllocSize */
GEN_LIB GEN_FRAME uint F_00d92490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd92490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((param_2 - 0xc)));
}

/* ref: hkMemoryRouter::GetEasyAllocStart */
GEN_LIB GEN_FRAME uint F_00d924a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd924a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 - 0x10;
}

/* ref: hkMemoryRouter::EasyFree */
GEN_LIB GEN_FRAME uint F_00d924b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd924b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    *((undefined4 *)GEN_TOP((param_2 - 0x10))) = 0;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,((undefined4 *)GEN_TOP((param_2 - 0x10))),*((int *)GEN_TOP((param_2 - 0xc))) + 0x10);
  }
  return uVar1;
}

/* ref: FUN_00d924e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d924e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd924e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x28))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: hkMemoryRouter::SetMemoryRouterInstance */
GEN_LIB GEN_FRAME unsigned int F_00d92510(GEN_P(LPVOID param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd92510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LPVOID param_1 = (LPVOID)gen_a0;)
  return (uint)(gen_imp_TlsSetValue(REFG(undefined4, 0x15d9a88),param_1));
}

/* ref: FUN_00d92530 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d92530(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd92530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00d940d0(in_ecx GEN_EDX_FWD,0x4000);
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x34))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x3c))) = 0;
  return in_ecx;
}

/* ref: hkThreadLocalData::hkThreadLocalData */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d92560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd92560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  DWORD DVar1;
  
  DVar1 = gen_imp_TlsAlloc();
  *(DWORD *)this = DVar1;
  return (uint)this;
}

/* ref: hkThreadLocalData::SetValue */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d92580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPVOID param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPVOID param_1 = (LPVOID)gen_a1;)
  return (uint)(gen_imp_TlsSetValue(*(DWORD *)this,param_1));
}

/* ref: hkCustomAttributes::GetAttribute */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d925c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd925c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    iVar2 = 0;
    do {
      uVar1 = F_00da0d20(*((undefined4 *)GEN_TOP((iVar2 + *(int *)this))),param_1);
      if (uVar1 == 0) {
        return *(int *)this + 4 + iVar3 * 0xc;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 4))));
  }
  return 0;
}

/* ref: FUN_00d92610 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d92610(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd92610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  return *in_ecx;
}

/* ref: FUN_00d92620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d92620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd92620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00d92630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d92630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd92630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: hkClass::IsSuperClass */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd92650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint in_ecx;
  
  in_ecx = param_2;
  while( true ) {
    if (in_ecx == 0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    uVar1 = F_00d92610(this GEN_EDX_FWD);
    uVar2 = F_00d92610(in_ecx GEN_EDX_ARG);
    uVar1 = F_00da0d20(uVar2,uVar1);
    if (uVar1 == 0) break;
    in_ecx = F_00d92620(in_ecx GEN_EDX_ARG);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkClass::GetNumInterfaces */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d926b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd926b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0xc)));
  for (iVar1 = *((int *)GEN_TOP(((int)this + 4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 4)))) {
    uVar2 = uVar2 + *((int *)GEN_TOP((iVar1 + 0xc)));
  }
  return uVar2;
}

/* ref: FUN_00d926f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d926f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd926f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: hkClass::GetNumEnums */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d92700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd92700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  for (iVar1 = *((int *)GEN_TOP(((int)this + 4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 4)))) {
    uVar2 = uVar2 + *((int *)GEN_TOP((iVar1 + 0x14)));
  }
  return uVar2;
}

/* ref: hkClass::GetEnum */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = F_00d92700(this GEN_EDX_FWD);
  iVar3 = param_1 - uVar2;
  pvVar1 = (((undefined *)GEN_TOP((uint)(this))));
  while( true ) {
    if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
      return *((uint *)GEN_TOP(((int)(((undefined *)GEN_TOP((uint)(this)))) + 0x10)));
    }
    iVar3 = iVar3 + *((int *)GEN_TOP(((int)this + 0x14)));
    if (-1 < iVar3) break;
    this = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    pvVar1 = this;
  }
  return *((int *)GEN_TOP(((int)this + 0x10))) + iVar3 * 0x14;
}

/* ref: hkClass::GetEnumByName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = F_00d92700(this GEN_EDX_FWD);
  if (0 < (int)uVar1) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_00d92720(this GEN_EDX_ARG,iVar3)));
      uVar1 = F_00da0d20(*puVar2,param_1);
      if (uVar1 == 0) {
        return (uint)puVar2;
      }
      iVar3 = iVar3 + 1;
      uVar1 = F_00d92700(this GEN_EDX_ARG);
    } while (iVar3 < (int)uVar1);
  }
  return 0;
}

/* ref: hkClass::GetDeclaredEnum */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d927b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd927b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x10))) + param_2 * 0x14;
}

/* ref: FUN_00d927d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d927d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd927d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: hkClass::GetNumMembers */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d927e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd927e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  for (iVar1 = *((int *)GEN_TOP(((int)this + 4))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 4)))) {
    uVar2 = uVar2 + *((int *)GEN_TOP((iVar1 + 0x1c)));
  }
  return uVar2;
}

/* ref: hkClass::GetMember */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = F_00d927e0(this GEN_EDX_FWD);
  iVar3 = param_1 - uVar2;
  pvVar1 = (((undefined *)GEN_TOP((uint)(this))));
  while( true ) {
    if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
      return *((uint *)GEN_TOP(((int)(((undefined *)GEN_TOP((uint)(this)))) + 0x18)));
    }
    iVar3 = iVar3 + *((int *)GEN_TOP(((int)this + 0x1c)));
    if (-1 < iVar3) break;
    this = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    pvVar1 = this;
  }
  return *((int *)GEN_TOP(((int)this + 0x18))) + iVar3 * 0x18;
}

/* ref: hkClass::GetMemberNonConst */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d92800(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00d92850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d92850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd92850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: hkClass::GetDeclaredMember */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92860(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd92860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x18))) + param_2 * 0x18;
}

/* ref: hkClass::GetDeclaredMemberByName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = F_00d92850(this GEN_EDX_FWD);
  if (0 < (int)uVar1) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_00d92860(this GEN_EDX_ARG,iVar3)));
      uVar1 = F_00da0d20(*puVar2,param_1);
      if (uVar1 == 0) {
        return (uint)puVar2;
      }
      iVar3 = iVar3 + 1;
      uVar1 = F_00d92850(this GEN_EDX_ARG);
    } while (iVar3 < (int)uVar1);
  }
  return 0;
}

/* ref: hkClass::GetMemberByName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d928d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd928d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = F_00d927e0(this GEN_EDX_FWD);
  if (0 < (int)uVar1) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_00d92800(this GEN_EDX_ARG,iVar3)));
      uVar1 = F_00da0d20(*puVar2,param_1);
      if (uVar1 == 0) {
        return (uint)puVar2;
      }
      iVar3 = iVar3 + 1;
      uVar1 = F_00d927e0(this GEN_EDX_ARG);
    } while (iVar3 < (int)uVar1);
  }
  return 0;
}

/* ref: hkClass::GetMemberIndexByName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = F_00d927e0(this GEN_EDX_FWD);
  if (0 < (int)uVar1) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_00d92800(this GEN_EDX_ARG,uVar3)));
      uVar1 = F_00da0d20(*puVar2,param_1);
      if (uVar1 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar1 = F_00d927e0(this GEN_EDX_ARG);
    } while ((int)uVar3 < (int)uVar1);
  }
  return 0xffffffff;
}

/* ref: hkClass::GetDeclaredMemberIndexByName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = F_00d92850(this GEN_EDX_FWD);
  if (0 < (int)uVar1) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_00d92860(this GEN_EDX_ARG,uVar3)));
      uVar1 = F_00da0d20(*puVar2,param_1);
      if (uVar1 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar1 = F_00d92850(this GEN_EDX_ARG);
    } while ((int)uVar3 < (int)uVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00d929c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d929c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd929c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: hkClass::SetObjectSize */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d929d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd929d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: hkClass::HasVtable */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d929e0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd929e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  uint in_ecx_00;
  int extraout_ECX_00;
  
  in_ecx_00 = F_00d92620(in_ecx GEN_EDX_FWD);
  iVar1 = ((int)(uint)(in_ecx));
  while (in_ecx_00 != 0) {
    extraout_ECX_00 = ((int)(uint)(in_ecx_00));
    in_ecx_00 = F_00d92620(in_ecx_00 GEN_EDX_ARG);
    iVar1 = extraout_ECX_00;
  }
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((iVar1 + 0xc))) != 0;
  return param_2;
}

/* ref: FUN_00d92a10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d92a10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd92a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x2c)));
}

/* ref: hkClass::GetDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd92a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * PTR32 * ppuVar5;
  int iVar6;
  
  uVar4 = F_00d927e0(this GEN_EDX_FWD);
  iVar6 = param_1 - uVar4;
  iVar1 = ((int)(uint)(this));
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar6 = iVar6 + *((int *)GEN_TOP((iVar1 + 0x1c)));
    if (-1 < iVar6) break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 4)));
  }
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x20)));
  if (iVar2 != 0) {
    iVar3 = *((int *)GEN_TOP((iVar2 + iVar6 * 4)));
    if (iVar3 < 0) {
      if (iVar3 != -2) {
        return 1;
      }
      ppuVar5 = &REFG(undefined * PTR32, 0x11389b0);
    }
    else if (iVar3 == -2) {
      ppuVar5 = &REFG(undefined * PTR32, 0x11389b0);
    }
    else {
      ppuVar5 = ((undefined * PTR32 *)GEN_TOP((iVar3 + iVar2)));
    }
    *param_2 = ppuVar5;
    *param_3 = *((int *)GEN_TOP((iVar1 + 0x18))) + iVar6 * 0x18;
    return 0;
  }
  return 1;
}

/* ref: hkClass::HasDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd92a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00d92a20(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  return (uint)(uVar1 == 0);
}

/* ref: hkClass::HasDeclaredDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd92ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x20))) != 0) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x20))) + param_2 * 4))), -1 < iVar1 || (iVar1 == -2)))) {
    return 1;
  }
  return 0;
}

/* ref: hkClass::GetDefaultPointer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd92ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  uVar1 = F_00d92a20(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  return ~-(uint)(uVar1 != 0) & (uint)(*(undefined * PTR32 *)(gen_frame + 0x0));
}

/* ref: hkClass::WriteDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd92b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  uVar2 = F_00d92a20(this GEN_EDX_FWD,param_1,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x4)));
  if (uVar2 == 0) {
    iVar1 = *param_2;
    uVar3 = F_00da6030((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x10))))(param_2,(*(undefined4 *)(gen_frame + 0x0)),uVar3);
  }
  return uVar2;
}

/* ref: hkClass::WriteDeclaredDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd92b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * PTR32 * ppuVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (iVar1 == 0) {
    return 1;
  }
  iVar2 = *((int *)GEN_TOP((iVar1 + param_1 * 4)));
  if (iVar2 < 0) {
    if (iVar2 != -2) {
      return 1;
    }
  }
  else if (iVar2 != -2) {
    ppuVar4 = ((undefined * PTR32 *)GEN_TOP((iVar1 + iVar2)));
    goto LAB_00d92b95;
  }
  ppuVar4 = &REFG(undefined * PTR32, 0x11389b0);
LAB_00d92b95: ;
  iVar1 = *param_2;
  uVar3 = F_00da6030(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + param_1 * 0x18))) GEN_EDX_FWD);
  ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x10))))(param_2,ppuVar4,uVar3);
  return 0;
}

/* ref: hkClass::GetDeclaredDefaultPointer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd92bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x20)));
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *((int *)GEN_TOP((iVar1 + param_2 * 4)));
  if (iVar2 < 0) {
    if (iVar2 != -2) {
      return 0;
    }
  }
  else if (iVar2 != -2) {
    return iVar1 + iVar2;
  }
  return 0x11389b0;
}

/* ref: hkClass::GetAttribute */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d925c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00d92c20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d92c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd92c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x28;
}

/* ref: hkClass::hkClass */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d92c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9), GEN_P(undefined4 param_10, unsigned int gen_a10), GEN_P(undefined4 param_11, unsigned int gen_a11), GEN_P(undefined4 param_12, unsigned int gen_a12), GEN_P(undefined4 param_13, unsigned int gen_a13))
{
  GEN_ENTER(0xd92c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a12;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a13;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_8;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_9;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_10;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_11;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_12;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_13;
  return 0;
}

/* ref: hkClass::GetDeclaredEnumByName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = F_00d927d0(this GEN_EDX_FWD);
  if (0 < (int)uVar1) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_00d927b0(this GEN_EDX_ARG,iVar3)));
      uVar1 = F_00da0d20(*puVar2,param_1);
      if (uVar1 == 0) {
        return (uint)puVar2;
      }
      iVar3 = iVar3 + 1;
      uVar1 = F_00d927d0(this GEN_EDX_ARG);
    } while (iVar3 < (int)uVar1);
  }
  return 0;
}

/* ref: hkClass::GetDefaultTypedUnion */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd92ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  uVar2 = F_00d92a20(this GEN_EDX_FWD,param_1,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if (uVar2 == 0) {
    bVar1 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0xc)));
    if (bVar1 == 0x14) {
      uVar2 = F_00da5fd0((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      param_2[5] = uVar2;
      *param_2 = 0x14;
      param_2[4] = (*(undefined4 *)(gen_frame + 0x4));
      return 0;
    }
    if (bVar1 == 0x18) {
      uVar2 = F_00da5fe0((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar3 = F_00da6230(this_00 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
      param_2[5] = uVar2;
      param_2[4] = uVar3;
      *param_2 = 0x18;
      return 0;
    }
    uVar2 = F_00d93170(param_2 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),(uint)bVar1);
  }
  return uVar2;
}

/* ref: hkClass::GetDeclaredDefaultTypedUnion */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd92d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined * this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined * PTR32 * ppuVar6;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (iVar2 != 0) {
    iVar3 = *((int *)GEN_TOP((iVar2 + param_1 * 4)));
    if ((-1 < iVar3) || (iVar3 == -2)) {
      if (iVar3 == -2) {
        ppuVar6 = &REFG(undefined * PTR32, 0x11389b0);
      }
      else {
        ppuVar6 = ((undefined * PTR32 *)GEN_TOP((iVar2 + iVar3)));
      }
      this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + param_1 * 0x18)));
      bVar1 = *((byte *)GEN_TOP(((int)this_00 + 0xc)));
      if (bVar1 == 0x14) {
        uVar4 = F_00da5fd0(this_00 GEN_EDX_FWD);
        param_2[4] = *ppuVar6;
        param_2[5] = uVar4;
        *param_2 = 0x14;
        return 0;
      }
      if ((bVar1 != 0x18) && (bVar1 != 0x1f)) {
        uVar4 = F_00d93170(param_2 GEN_EDX_ARG,ppuVar6,(uint)bVar1);
        return uVar4;
      }
      uVar4 = F_00da5fe0(this_00 GEN_EDX_ARG);
      uVar5 = F_00da6230(this_00 GEN_EDX_ARG,ppuVar6);
      param_2[5] = uVar4;
      param_2[4] = uVar5;
      *param_2 = 0x18;
      return 0;
    }
  }
  return 1;
}

/* ref: hkClass::GetSignature */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d92e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd92e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  undefined8 * in_ecx;
  undefined4 uVar7;
  
  F_00da68d0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_FWD,param_1,0);
  F_00da6c50(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    iVar6 = 0;
    do {
      F_00da7030(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar6))) GEN_EDX_ARG,param_1);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 0x14))));
  }
  F_00da6c50(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  (*(int *)(gen_frame + 0x28)) = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x1c)))) {
    (*(int *)(gen_frame + 0x30)) = 0;
    do {
      in_ecx = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + (*(int *)(gen_frame + 0x30)))));
      uVar1 = *in_ecx;
      uVar2 = in_ecx[1];
      (*(int *)(gen_frame + 0x8)) = (int)uVar2;
      (*(byte *)(gen_frame + 0xc)) = (byte)((ulonglong)uVar2 >> 0x20);
      (*(byte *)(gen_frame + 0xd)) = (byte)((ulonglong)uVar2 >> 0x28);
      (*(undefined2 *)(gen_frame + 0xe)) = (undefined2)((ulonglong)uVar2 >> 0x30);
      (*(ushort *)(gen_frame + 0x10)) = (ushort)in_ecx[2];
      (*(undefined2 *)(gen_frame + 0x12)) = (undefined2)((ulonglong)in_ecx[2] >> 0x10);
      if (((*(byte *)(gen_frame + 0xc)) == 0x18) || ((*(byte *)(gen_frame + 0xc)) == 0x1f)) {
        uVar3 = F_00da5f30((uint)((ulonglong)uVar2 >> 0x28) & 0xff)
        ;
        (*(ushort *)(gen_frame + 0x10)) = (*(ushort *)(gen_frame + 0x10)) ^ *((short *)GEN_TOP((uVar3 + 8))) * 8;
        (*(byte *)(gen_frame + 0xd)) = 0;
      }
      (*(uint *)(gen_frame + 0x2c)) = 0;
      if (((*(ushort *)(gen_frame + 0x10)) & 0x400) != 0) {
        (*(ushort *)(gen_frame + 0x10)) = (*(ushort *)(gen_frame + 0x10)) ^ 0x400;
        if ((*(byte *)(gen_frame + 0xd)) != 0) {
          (*(uint *)(gen_frame + 0x2c)) = (uint)(*(byte *)(gen_frame + 0xd));
        }
        (*(byte *)(gen_frame + 0xd)) = (*(byte *)(gen_frame + 0xc));
        (*(byte *)(gen_frame + 0xc)) = 0x13;
      }
      (*(int *)(gen_frame + 0x4)) = (int)((ulonglong)uVar1 >> 0x20);
      if ((((*(int *)(gen_frame + 0x4)) != 0) && (*((char *)GEN_TOP(((int)in_ecx + 0xc))) != '\x14')) &&
         (*((char *)GEN_TOP(((int)in_ecx + 0xd))) != '\x14')) {
        for (pvVar4 = ((undefined *)GEN_TOP(F_00da5fd0(in_ecx GEN_EDX_ARG))); pvVar4 != ((undefined *)GEN_TOP(0x0));
            pvVar4 = ((undefined *)GEN_TOP(F_00d92620(pvVar4 GEN_EDX_ARG)))) {
          F_00d92e40(pvVar4 GEN_EDX_ARG,param_1);
        }
      }
      if ((*(int *)(gen_frame + 0x8)) != 0) {
        uVar7 = param_1;
        pvVar4 = ((undefined *)GEN_TOP(F_00da5fe0(in_ecx GEN_EDX_ARG)));
        F_00da7030(pvVar4 GEN_EDX_ARG,uVar7);
      }
      (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)uVar1;
      uVar3 = F_00da0e60((*(undefined4 *)(gen_frame + 0x0)));
      F_00da6ae0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),uVar3);
      F_00da6c10(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0xc)));
      F_00da6c10(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0xd)));
      if ((short)(*(uint *)(gen_frame + 0x2c)) != 0) {
        F_00da6c10(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x2c)));
      }
      F_00da6c10(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,CONCAT22((*(ushort *)(gen_frame + 0x10)),(*(undefined2 *)(gen_frame + 0xe))));
      F_00da6c10(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,CONCAT22((*(undefined2 *)(gen_frame + 0x12)),(*(ushort *)(gen_frame + 0x10))));
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 0x18;
      iVar5 = (*(int *)(gen_frame + 0x28)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar5;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 0x1c))));
  }
  F_00da6c50(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
  uVar3 = F_00da6900(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00d93010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93010(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined2 *)(gen_frame + 0x6)) = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[9])REFP(0x1138a44));
  while ((param_1 != ((undefined *)GEN_TOP(0x0)) && (F_00d92e40(param_1 GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0))), (~param_2 & 1) != 0))
        ) {
    param_1 = ((undefined *)GEN_TOP(F_00d92620(param_1 GEN_EDX_ARG)));
  }
  uVar1 = F_00d930a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d93080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93080(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d93090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93090(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d930a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d930a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd930a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return ~*((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00d930f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d930f0(void)
{
  GEN_ENTER(0xd930f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkTypedUnion::SetObject */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0x14;
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  return param_1;
}

/* ref: hkTypedUnion::SetEnum */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0x18;
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  return param_1;
}

/* ref: hkTypedUnion::SetSimple */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da5f30(param_2);
  if (*((ushort *)GEN_TOP((uVar1 + 8))) < 0x41) {
    *(undefined4 *)this = param_2;
    F_00da1010((int)this + 0x10,param_1,(int)*((short *)GEN_TOP((uVar1 + 8))));
    return 0;
  }
  return 1;
}

/* ref: hkCrcStreamWriter::hkCrcStreamWriter */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d931c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd931c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1138a1c));
  *((uint *)GEN_TOP(((int)this + 8))) = ~param_1;
  return (uint)this;
}

/* ref: hkCrcStreamWriter_I_ONLIIDCA::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d931e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd931e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d931f0 */
GEN_LIB GEN_FRAME uint F_00d931f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd931f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  if ((param_1 & 1) == 0) {
    uVar1 = param_1 >> 1;
  }
  else {
    uVar1 = param_1 >> 1 ^ 0xedb88320;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1;
  }
  else {
    uVar1 = uVar1 >> 1 ^ 0xedb88320;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1;
  }
  else {
    uVar1 = uVar1 >> 1 ^ 0xedb88320;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1;
  }
  else {
    uVar1 = uVar1 >> 1 ^ 0xedb88320;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1;
  }
  else {
    uVar1 = uVar1 >> 1 ^ 0xedb88320;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1;
  }
  else {
    uVar1 = uVar1 >> 1 ^ 0xedb88320;
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1;
  }
  else {
    uVar1 = uVar1 >> 1 ^ 0xedb88320;
  }
  if ((uVar1 & 1) != 0) {
    return uVar1 >> 1 ^ 0xedb88320;
  }
  return uVar1 >> 1;
}

/* ref: hkCrcStreamWriter_I_ONLIIDCA::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d93270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  iVar4 = 0;
  if (0 < param_2) {
    do {
      uVar1 = *((byte *)GEN_TOP((iVar4 + param_1))) ^ uVar3;
      uVar2 = uVar1 & 0xff;
      if ((uVar1 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 >> 8 ^ uVar2;
    } while (iVar4 < param_2);
  }
  *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
  return 0;
}

/* ref: FUN_00d93340 */
GEN_LIB GEN_FRAME uint F_00d93340(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd93340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d93370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93370(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93370u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d933b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d933b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd933b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((uint *)GEN_TOP(((int)this + 8))) = ~param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1138a44));
  return (uint)this;
}

/* ref: FUN_00d933d0 */
GEN_LIB GEN_FRAME uint F_00d933d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd933d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkCrc32StreamWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93400(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93400u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkCrcStreamWriter_I_ONLIIDCA::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93440(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93440u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkMemoryStreamReader::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d93480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = *((undefined4 *)GEN_TOP((in_ecx + 0xc)));
  return 0;
}

/* ref: hkMemoryStreamReader::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d93490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd93490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (-1 < *((int *)GEN_TOP((in_ecx + 0x14)))) {
    *((int *)GEN_TOP((in_ecx + 0xc))) = *((int *)GEN_TOP((in_ecx + 0x14)));
    return 0;
  }
  return 1;
}

/* ref: hkMemoryStreamReader::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d934b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd934b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar1 = *(int *)(this + 0xc) + param_1;
    }
    else {
      iVar1 = -1;
      if (param_2 == 2) {
        iVar1 = *(int *)(this + 0x10) - param_1;
      }
    }
  }
  if (-1 < iVar1) {
    if (iVar1 <= *(int *)(this + 0x10)) {
      *(int *)(this + 0xc) = iVar1;
      return 0;
    }
    *(int *)(this + 0xc) = *(int *)(this + 0x10);
    return 1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  return 1;
}

/* ref: hkMemoryStreamReader::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d93510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd93510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: hkMemoryStreamReader::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)));
  if (*pcVar1 != '\0') {
    uVar2 = *(int *)(this + 0x10) - *(int *)(this + 0xc);
    uVar3 = param_2;
    if ((int)uVar2 <= (int)param_2) {
      uVar3 = uVar2;
    }
    F_00da1010(param_1,*(int *)(this + 8) + *(int *)(this + 0xc),uVar3);
    *(uint *)(this + 0xc) = *(int *)(this + 0xc) + uVar3;
    if ((uVar3 == 0) && (param_2 != 0)) {
      *(int *)(this + 0xc) = *(int *)(this + 0x10) + 1;
    }
    return uVar3;
  }
  return 0;
}

/* ref: hkMemoryStreamReader::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd93590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char * pcVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)));
  if (*pcVar1 != '\0') {
    uVar2 = *(int *)(this + 0x10) - *(int *)(this + 0xc);
    if ((int)param_1 < (int)uVar2) {
      uVar2 = param_1;
    }
    *(uint *)(this + 0xc) = *(int *)(this + 0xc) + uVar2;
    if ((uVar2 == 0) && (param_1 != 0)) {
      *(int *)(this + 0xc) = *(int *)(this + 0x10) + 1;
    }
    return uVar2;
  }
  return 0;
}

/* ref: hkMemoryStreamReader::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d935e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd935e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0xc))) != *((int *)GEN_TOP((in_ecx + 0x10))) + 1;
  return param_2;
}

/* ref: hkMemoryStreamReader::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0x10))) != 0;
  return param_2;
}

/* ref: hkMemoryStreamReader::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd93620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d93630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd93630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  LPVOID pvVar1;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x1138aa0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
  *((int *)GEN_TOP(((int)this + 0x18))) = param_3;
  if (param_3 == 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_2);
    *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
    F_00da1010(uVar2,param_1,param_2);
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00d936b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d936b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd936b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x1138aa0));
  if ((uVar3 == 0) || (uVar3 == 1)) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar3 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00d93720 */
GEN_LIB GEN_FRAME uint F_00d93720(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd93720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d93750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93750(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93750u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d93790 */
GEN_LIB GEN_FRAME uint F_00d93790(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd93790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkMemoryStreamReader::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d937c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd937c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d936b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkQsTransform::SetFromTransformNoScale */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd93860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = F_00d991c0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1);
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x38)));
  uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x3c)));
  *(undefined4 *)this = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar3;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *(undefined4 *)&REFG(undefined, 0x1138af0);
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar3;
  return uVar4;
}

/* ref: hkQsTransform::CopyToTransformNoScale */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d93890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  F_00da7350(param_2 GEN_EDX_FWD,in_ecx + 4);
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *((undefined4 *)GEN_TOP((param_2 + 0x30))) = *in_ecx;
  *((undefined4 *)GEN_TOP((param_2 + 0x34))) = uVar1;
  *((undefined4 *)GEN_TOP((param_2 + 0x38))) = uVar2;
  *((undefined4 *)GEN_TOP((param_2 + 0x3c))) = uVar3;
  return;
}

/* ref: hkQsTransform::SetFromQTransform */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d938c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd938c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ecx[4] = *param_2;
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *in_ecx = param_2[4];
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  in_ecx[8] = *(undefined4 *)&REFG(undefined, 0x1138af0);
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  return (uint)param_2;
}

/* ref: hkQsTransform::IsOk */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d938f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd938f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
  uint uVar11;
  undefined4 extraout_ECX = 0;
  uint uVar12;
  undefined4 in_EDX = 0;
  
  fVar1 = *(float *)this;
  fVar2 = *((float *)GEN_TOP(((int)this + 4)));
  fVar3 = *((float *)GEN_TOP(((int)this + 8)));
  fVar4 = *((float *)GEN_TOP(((int)this + 0xc)));
  fVar5 = *((float *)GEN_TOP(((int)this + 0x20)));
  fVar6 = *((float *)GEN_TOP(((int)this + 0x24)));
  fVar7 = *((float *)GEN_TOP(((int)this + 0x28)));
  fVar8 = *((float *)GEN_TOP(((int)this + 0x2c)));
  uVar11 = F_00d98fb0((int)this + 0x10 GEN_EDX_FWD);
  (*(undefined4 *)((char *)&auVar10 + 4)) = -(uint)GEN_ISNAN(fVar2);
  (*(undefined4 *)((char *)&auVar10 + 0)) = -(uint)GEN_ISNAN(fVar1);
  (*(undefined4 *)((char *)&auVar10 + 8)) = -(uint)GEN_ISNAN(fVar3);
  (*(undefined4 *)((char *)&auVar10 + 12)) = -(uint)GEN_ISNAN(fVar4);
  uVar12 = gen_movmskps(&(auVar10));
  if ((((uVar12 & 7) == 0) && ((*(undefined4 *)((char *)&auVar9 + 4)) = -(uint)GEN_ISNAN(fVar6), (*(undefined4 *)((char *)&auVar9 + 0)) = -(uint)GEN_ISNAN(fVar5), (*(undefined4 *)((char *)&auVar9 + 8)) = -(uint)GEN_ISNAN(fVar7), (*(undefined4 *)((char *)&auVar9 + 12)) = -(uint)GEN_ISNAN(fVar8), uVar12 = gen_movmskps(&(auVar9)), (uVar12 & 7) == 0)) && (uVar11 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d93970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d93970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd93970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xe0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  F_00da7350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,(int)this + 0x10);
  fVar1 = *((float *)GEN_TOP(((int)this + 0x20)));
  fVar2 = *((float *)GEN_TOP(((int)this + 0x24)));
  fVar3 = *((float *)GEN_TOP(((int)this + 0x28)));
  fVar4 = *((float *)GEN_TOP(((int)this + 0x2c)));
  (*(float *)(gen_frame + 0x70)) = fVar1 * (float)REFG(float, 0x1138c70);
  (*(float *)(gen_frame + 0x74)) = fVar2 * (*(float *)((char *)&REFG(float, 0x1138c70) + 4));
  (*(float *)(gen_frame + 0x78)) = fVar3 * (float)REFG(undefined8, 0x1138c78);
  (*(float *)(gen_frame + 0x7c)) = fVar4 * (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4));
  (*(float *)(gen_frame + 0x80)) = fVar1 * (float)REFG(float, 0x1138c80);
  (*(float *)(gen_frame + 0x84)) = fVar2 * (*(float *)((char *)&REFG(float, 0x1138c80) + 4));
  (*(float *)(gen_frame + 0x88)) = fVar3 * (float)REFG(undefined8, 0x1138c88);
  (*(float *)(gen_frame + 0x8c)) = fVar4 * (*(float *)((char *)&REFG(undefined8, 0x1138c88) + 4));
  (*(float *)(gen_frame + 0x90)) = fVar1 * (float)REFG(float, 0x1138c90);
  (*(float *)(gen_frame + 0x94)) = fVar2 * (*(float *)((char *)&REFG(float, 0x1138c90) + 4));
  (*(float *)(gen_frame + 0x98)) = fVar3 * (float)REFG(undefined8, 0x1138c98);
  (*(float *)(gen_frame + 0x9c)) = fVar4 * (*(float *)((char *)&REFG(undefined8, 0x1138c98) + 4));
  F_00da1ca0(&(*(undefined4 *)(gen_frame + 0xa0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x70)));
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0xa0));
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0xa4));
  (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0xa8));
  (*(undefined4 *)(gen_frame + 0x3c)) = (*(undefined4 *)(gen_frame + 0xac));
  (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0xb0));
  (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0xb4));
  (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0xb8));
  (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0xbc));
  (*(undefined4 *)(gen_frame + 0x50)) = (*(undefined4 *)(gen_frame + 0xc0));
  (*(undefined4 *)(gen_frame + 0x54)) = (*(undefined4 *)(gen_frame + 0xc4));
  (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0xc8));
  (*(undefined4 *)(gen_frame + 0x5c)) = (*(undefined4 *)(gen_frame + 0xcc));
  (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)this;
  (*(undefined4 *)(gen_frame + 0x64)) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  (*(undefined4 *)(gen_frame + 0x68)) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 *)(gen_frame + 0x6c)) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar5 = F_00da8220(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,param_1);
  return uVar5;
}

/* ref: FUN_00d93a20 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d93a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd93a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x100, 0);
  
  F_00da8830(param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)this = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = (*(undefined4 *)(gen_frame + 0x8));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = (*(undefined4 *)(gen_frame + 0xc));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = (*(undefined4 *)(gen_frame + 0x10));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = (*(undefined4 *)(gen_frame + 0x14));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = (*(undefined4 *)(gen_frame + 0x18));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined4 *)(gen_frame + 0x1c));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = (*(undefined4 *)(gen_frame + 0x20));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = (*(undefined4 *)(gen_frame + 0x24));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = (*(undefined4 *)(gen_frame + 0x28));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined4 *)(gen_frame + 0x2c));
  return (*(char *)(gen_frame + 0x31)) == '\0';
}

/* ref: FUN_00d93a90 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d93a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd93a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00d93a20(this GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_00d93aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd93aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d93970(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkQsTransform::FastRenormalizeBatch */
GEN_LIB GEN_FRAME unsigned int F_00d93ba0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd93ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  uint uVar6;
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
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM3 [16] = {0};
  
  fVar17 = *(float *)&REFG(undefined, 0x1138d9c);
  fVar14 = *(float *)&REFG(undefined, 0x1138d98);
  fVar11 = *(float *)&REFG(undefined, 0x1138d94);
  fVar8 = *(float *)&REFG(undefined, 0x1138d90);
  uVar6 = 0;
  pfVar5 = param_1;
  if (param_3 != 0) {
    do {
      fVar7 = *((float *)GEN_TOP((param_2 + uVar6 * 4)));
      (*(undefined4 *)((char *)&auVar19 + 4)) = (undefined4)gen_fl2bits(fVar7);
      (*(undefined4 *)((char *)&auVar19 + 0)) = (undefined4)gen_fl2bits(fVar7);
      (*(undefined4 *)((char *)&auVar19 + 8)) = (undefined4)gen_fl2bits(fVar7);
      (*(undefined4 *)((char *)&auVar19 + 12)) = (undefined4)gen_fl2bits(fVar7);
      gen_rcpps(&(auVar19), &(in_XMM1), &(auVar19));
      (*(float *)((char *)&in_XMM3 + 0)) = (*(float *)((char *)&auVar19 + 0)) * fVar7;
      (*(float *)((char *)&in_XMM3 + 4)) = (*(float *)((char *)&auVar19 + 4)) * fVar7;
      (*(float *)((char *)&in_XMM3 + 8)) = (*(float *)((char *)&auVar19 + 8)) * fVar7;
      (*(float *)((char *)&in_XMM3 + 12)) = (*(float *)((char *)&auVar19 + 12)) * fVar7;
      fVar7 = (fVar8 - (*(float *)((char *)&in_XMM3 + 0))) * (*(float *)((char *)&auVar19 + 0));
      fVar10 = (fVar11 - (*(float *)((char *)&in_XMM3 + 4))) * (*(float *)((char *)&auVar19 + 4));
      fVar13 = (fVar14 - (*(float *)((char *)&in_XMM3 + 8))) * (*(float *)((char *)&auVar19 + 8));
      fVar16 = (fVar17 - (*(float *)((char *)&in_XMM3 + 12))) * (*(float *)((char *)&auVar19 + 12));
      *pfVar5 = *pfVar5 * fVar7;
      pfVar5[1] = pfVar5[1] * fVar10;
      pfVar5[2] = pfVar5[2] * fVar13;
      pfVar5[3] = pfVar5[3] * fVar16;
      (*(float *)((char *)&in_XMM1 + 0)) = pfVar5[8] * fVar7;
      (*(float *)((char *)&in_XMM1 + 4)) = pfVar5[9] * fVar10;
      (*(float *)((char *)&in_XMM1 + 8)) = pfVar5[10] * fVar13;
      (*(float *)((char *)&in_XMM1 + 12)) = pfVar5[0xb] * fVar16;
      memcpy(&(*(gen_v16 *)(pfVar5 + 8)), &(in_XMM1), sizeof(in_XMM1) < sizeof(*(gen_v16 *)(pfVar5 + 8)) ? sizeof(in_XMM1) : sizeof(*(gen_v16 *)(pfVar5 + 8)));
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 0xc;
    } while (uVar6 < param_3);
  }
  fVar4 = *(float *)&REFG(undefined, 0x1138dac);
  fVar3 = *(float *)&REFG(undefined, 0x1138da8);
  fVar2 = *(float *)&REFG(undefined, 0x1138da4);
  fVar1 = *(float *)&REFG(undefined, 0x1138da0);
  pfVar5 = param_1;
  fVar8 = *(float *)&REFG(undefined, 0x1138da0);
  fVar11 = *(float *)&REFG(undefined, 0x1138da4);
  fVar14 = *(float *)&REFG(undefined, 0x1138da8);
  fVar17 = *(float *)&REFG(undefined, 0x1138dac);
  fVar7 = *(float *)&REFG(undefined, 0x1138db0);
  fVar10 = *(float *)&REFG(undefined, 0x1138db4);
  fVar13 = *(float *)&REFG(undefined, 0x1138db8);
  fVar16 = *(float *)&REFG(undefined, 0x1138dbc);
  for (uVar6 = param_3 >> 2; *(float *)&REFG(undefined, 0x1138da0) = fVar8, *(float *)&REFG(undefined, 0x1138da4) = fVar11,
      *(float *)&REFG(undefined, 0x1138da8) = fVar14, *(float *)&REFG(undefined, 0x1138dac) = fVar17,
      *(float *)&REFG(undefined, 0x1138db0) = fVar7, *(float *)&REFG(undefined, 0x1138db4) = fVar10,
      *(float *)&REFG(undefined, 0x1138db8) = fVar13, *(float *)&REFG(undefined, 0x1138dbc) = fVar16, uVar6 != 0;
      uVar6 = uVar6 - 1) {
    (*(float *)((char *)&auVar21 + 0)) = pfVar5[5] * pfVar5[5] + pfVar5[4] * pfVar5[4];
    (*(float *)((char *)&auVar21 + 4)) = pfVar5[0x11] * pfVar5[0x11] + pfVar5[0x10] * pfVar5[0x10];
    (*(float *)((char *)&auVar21 + 8)) = pfVar5[0x1d] * pfVar5[0x1d] + pfVar5[0x1c] * pfVar5[0x1c];
    (*(float *)((char *)&auVar21 + 12)) = pfVar5[0x29] * pfVar5[0x29] + pfVar5[0x28] * pfVar5[0x28];
    (*(float *)((char *)&auVar20 + 0)) = (pfVar5[7] * pfVar5[7] + pfVar5[6] * pfVar5[6]) + (*(float *)((char *)&auVar21 + 0));
    (*(float *)((char *)&auVar20 + 4)) = (pfVar5[0x13] * pfVar5[0x13] + pfVar5[0x12] * pfVar5[0x12]) + (*(float *)((char *)&auVar21 + 4));
    (*(float *)((char *)&auVar20 + 8)) = (pfVar5[0x1f] * pfVar5[0x1f] + pfVar5[0x1e] * pfVar5[0x1e]) + (*(float *)((char *)&auVar21 + 8));
    (*(float *)((char *)&auVar20 + 12)) = (pfVar5[0x2b] * pfVar5[0x2b] + pfVar5[0x2a] * pfVar5[0x2a]) + (*(float *)((char *)&auVar21 + 12));
    gen_rsqrtps(&(auVar19), &(auVar21), &(auVar20));
    fVar8 = (*(float *)((char *)&auVar19 + 0));
    fVar11 = (*(float *)((char *)&auVar19 + 4));
    fVar14 = (*(float *)((char *)&auVar19 + 8));
    fVar17 = (*(float *)((char *)&auVar19 + 12));
    (*(float *)((char *)&in_XMM3 + 0)) = fVar7 * fVar8;
    (*(float *)((char *)&in_XMM3 + 4)) = fVar10 * fVar11;
    (*(float *)((char *)&in_XMM3 + 8)) = fVar13 * fVar14;
    (*(float *)((char *)&in_XMM3 + 12)) = fVar16 * fVar17;
    fVar8 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar20 + 0)) <= 0.0) &
                       (uint)gen_fl2bits((fVar1 - (fVar8 * (*(float *)((char *)&auVar20 + 0))) * fVar8) * (*(float *)((char *)&in_XMM3 + 0))
                                        ));
    fVar11 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar20 + 4)) <= 0.0) &
                        (uint)gen_fl2bits((fVar2 - (fVar11 * (*(float *)((char *)&auVar20 + 4))) * fVar11) *
                                          (*(float *)((char *)&in_XMM3 + 4))));
    fVar14 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar20 + 8)) <= 0.0) &
                        (uint)gen_fl2bits((fVar3 - (fVar14 * (*(float *)((char *)&auVar20 + 8))) * fVar14) *
                                          (*(float *)((char *)&in_XMM3 + 8))));
    fVar17 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar20 + 12)) <= 0.0) &
                        (uint)gen_fl2bits((fVar4 - (fVar17 * (*(float *)((char *)&auVar20 + 12))) * fVar17) *
                                          (*(float *)((char *)&in_XMM3 + 12))));
    pfVar5[4] = fVar8 * pfVar5[4];
    pfVar5[5] = fVar8 * pfVar5[5];
    pfVar5[6] = fVar8 * pfVar5[6];
    pfVar5[7] = fVar8 * pfVar5[7];
    pfVar5[0x10] = fVar11 * pfVar5[0x10];
    pfVar5[0x11] = fVar11 * pfVar5[0x11];
    pfVar5[0x12] = fVar11 * pfVar5[0x12];
    pfVar5[0x13] = fVar11 * pfVar5[0x13];
    pfVar5[0x1c] = fVar14 * pfVar5[0x1c];
    pfVar5[0x1d] = fVar14 * pfVar5[0x1d];
    pfVar5[0x1e] = fVar14 * pfVar5[0x1e];
    pfVar5[0x1f] = fVar14 * pfVar5[0x1f];
    pfVar5[0x28] = fVar17 * pfVar5[0x28];
    pfVar5[0x29] = fVar17 * pfVar5[0x29];
    pfVar5[0x2a] = fVar17 * pfVar5[0x2a];
    pfVar5[0x2b] = fVar17 * pfVar5[0x2b];
    pfVar5 = pfVar5 + 0x30;
    fVar8 = *(float *)&REFG(undefined, 0x1138da0);
    fVar11 = *(float *)&REFG(undefined, 0x1138da4);
    fVar14 = *(float *)&REFG(undefined, 0x1138da8);
    fVar17 = *(float *)&REFG(undefined, 0x1138dac);
    fVar7 = *(float *)&REFG(undefined, 0x1138db0);
    fVar10 = *(float *)&REFG(undefined, 0x1138db4);
    fVar13 = *(float *)&REFG(undefined, 0x1138db8);
    fVar16 = *(float *)&REFG(undefined, 0x1138dbc);
  }
  uVar6 = param_3 & 3;
  if (uVar6 != 0) {
    pfVar5 = pfVar5 + 4;
    do {
      fVar1 = *pfVar5;
      fVar2 = pfVar5[1];
      fVar3 = pfVar5[2];
      fVar4 = pfVar5[3];
      fVar9 = fVar3 * fVar3 + fVar1 * fVar1;
      fVar12 = fVar4 * fVar4 + fVar2 * fVar2;
      fVar15 = fVar1 * fVar1 + fVar3 * fVar3;
      fVar18 = fVar2 * fVar2 + fVar4 * fVar4;
      (*(float *)((char *)&auVar22 + 0)) = fVar12 + fVar9;
      (*(float *)((char *)&auVar22 + 4)) = fVar9 + fVar12;
      (*(float *)((char *)&auVar22 + 8)) = fVar18 + fVar15;
      (*(float *)((char *)&auVar22 + 12)) = fVar15 + fVar18;
      gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar22));
      fVar9 = (*(float *)((char *)&in_XMM3 + 0));
      fVar12 = (*(float *)((char *)&in_XMM3 + 4));
      fVar15 = (*(float *)((char *)&in_XMM3 + 8));
      fVar18 = (*(float *)((char *)&in_XMM3 + 12));
      *pfVar5 = fVar1 * ((fVar8 - (fVar9 * (*(float *)((char *)&auVar22 + 0))) * fVar9) * (fVar7 * fVar9));
      pfVar5[1] = fVar2 * ((fVar11 - (fVar12 * (*(float *)((char *)&auVar22 + 4))) * fVar12) * (fVar10 * fVar12));
      pfVar5[2] = fVar3 * ((fVar14 - (fVar15 * (*(float *)((char *)&auVar22 + 8))) * fVar15) * (fVar13 * fVar15));
      pfVar5[3] = fVar4 * ((fVar17 - (fVar18 * (*(float *)((char *)&auVar22 + 12))) * fVar18) * (fVar16 * fVar18));
      pfVar5 = pfVar5 + 0xc;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return 0;
}

/* ref: hkMatrix3::GetColumn */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_00d93d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + in_ecx;
}

/* ref: hkMatrix3::GetElement */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return (uint)((undefined *)GEN_TOP(((int)this + (param_1 + param_2 * 4) * 4)));
}

/* ref: FUN_00d93d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return (uint)((undefined *)GEN_TOP(((int)this + (param_1 + param_2 * 4) * 4)));
}

/* ref: FUN_00d93dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return (uint)((undefined *)GEN_TOP(((int)this + (param_1 + param_2 * 4) * 4)));
}

/* ref: FUN_00d93de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return (uint)((undefined *)GEN_TOP(((int)this + (param_1 + param_2 * 4) * 4)));
}

/* ref: hkTransform::SetQuaternionTranslation */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d93e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd93e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  F_00da7350(in_ecx GEN_EDX_FWD,param_2);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = *param_3;
  *((undefined4 *)GEN_TOP((in_ecx + 0x34))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x38))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x3c))) = uVar3;
  return;
}

/* ref: hkQsTransform::Set */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd93e30u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: hkVector4::CompareLessThan */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93ec0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd93ec0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkVector4::AllEqual3 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d93ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  undefined4 in_EDX = 0;
  undefined4 uVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 4))) - param_1[1]) < param_2[1]);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)this - *param_1) < *param_2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 8))) - param_1[2]) < param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0xc))) - param_1[3]) < param_2[3]);
  uVar2 = gen_movmskps(&(auVar1));
  return ((byte)uVar2 & 7) == 7;
}

/* ref: hkVector4::AllEqual4 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d93f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd93f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  undefined4 in_EDX = 0;
  int iVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 4))) - param_1[1]) < param_2[1]);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)this - *param_1) < *param_2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 8))) - param_1[2]) < param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0xc))) - param_1[3]) < param_2[3]);
  iVar2 = gen_movmskps(&(auVar1));
  return iVar2 == 0xf;
}

/* ref: hkMatrix3::CopyFrom */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93f50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93f50u, gen_a0, gen_a1, 0u, 0u);
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
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  return (uint)param_2;
}

/* ref: hkMatrix3::SetDiagonal */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93f70(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1] * (*(float *)((char *)&REFG(float, 0x1138c70) + 4));
  fVar2 = param_2[2] * (float)REFG(undefined8, 0x1138c78);
  fVar3 = param_2[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4));
  *in_ecx = *param_2 * (float)REFG(float, 0x1138c70);
  in_ecx[1] = fVar1;
  in_ecx[2] = fVar2;
  in_ecx[3] = fVar3;
  fVar1 = param_2[1] * (*(float *)((char *)&REFG(float, 0x1138c80) + 4));
  fVar2 = param_2[2] * (float)REFG(undefined8, 0x1138c88);
  fVar3 = param_2[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c88) + 4));
  in_ecx[4] = *param_2 * (float)REFG(float, 0x1138c80);
  in_ecx[5] = fVar1;
  in_ecx[6] = fVar2;
  in_ecx[7] = fVar3;
  fVar1 = param_2[1] * (*(float *)((char *)&REFG(float, 0x1138c90) + 4));
  fVar2 = param_2[2] * (float)REFG(undefined8, 0x1138c98);
  fVar3 = param_2[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c98) + 4));
  in_ecx[8] = *param_2 * (float)REFG(float, 0x1138c90);
  in_ecx[9] = fVar1;
  in_ecx[10] = fVar2;
  in_ecx[0xb] = fVar3;
  return (uint)param_2;
}

/* ref: hkMatrix3::Assign */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93fb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd93fb0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  return (uint)in_ecx;
}

/* ref: hkTransform::SetRotationTranslation */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d93fe0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd93fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  in_ecx[0xc] = *param_3;
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar3;
  return (uint)param_3;
}

/* ref: Global::SetSqrtInverse */
GEN_LIB GEN_FRAME uint F_00d94010(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd94010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
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
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar1));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1138da4) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar6 = *(float *)&REFG(undefined, 0x1138da8) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar7 = *(float *)&REFG(undefined, 0x1138dac) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1138db4) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1138db8) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1138dbc) * fVar4;
  *param_1 = ~-(uint)((*(float *)((char *)&auVar1 + 0)) <= 0.0) &
             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1138da0) - ((*(float *)((char *)&auVar1 + 0)) * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1138db0) * fVar8));
  param_1[1] = ~-(uint)((*(float *)((char *)&auVar1 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar5 * fVar2);
  param_1[2] = ~-(uint)((*(float *)((char *)&auVar1 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar3);
  param_1[3] = ~-(uint)((*(float *)((char *)&auVar1 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar4);
  return (uint)param_2;
}

/* ref: hkVector4::SetSqrtInverse */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94050(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd94050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
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
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar1));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1138da4) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar6 = *(float *)&REFG(undefined, 0x1138da8) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar7 = *(float *)&REFG(undefined, 0x1138dac) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1138db4) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1138db8) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1138dbc) * fVar4;
  *in_ecx = ~-(uint)((*(float *)((char *)&auVar1 + 0)) <= 0.0) &
            (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1138da0) - ((*(float *)((char *)&auVar1 + 0)) * fVar8) * fVar8) *
                              (*(float *)&REFG(undefined, 0x1138db0) * fVar8));
  in_ecx[1] = ~-(uint)((*(float *)((char *)&auVar1 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar5 * fVar2);
  in_ecx[2] = ~-(uint)((*(float *)((char *)&auVar1 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar3);
  in_ecx[3] = ~-(uint)((*(float *)((char *)&auVar1 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar4);
  return (uint)param_2;
}

/* ref: FUN_00d94090 */
GEN_LIB GEN_FRAME uint F_00d94090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd94090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d940d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d940d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd940d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x1138dc4));
  in_ecx[1] = 0;
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d940f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d940f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd940f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 4))))(param_3 GEN_EDX_FWD,0x1c)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x80000000;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0x80000000;
    puVar1[6] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = param_3;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_2;
  return param_1;
}

/* ref: hkLifoAllocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd94150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_3 + 0xf & 0xfffffff0;
  uVar3 = param_2 + 0xfU & 0xfffffff0;
  *param_3 = uVar1;
  if ((uVar3 + param_1 == *(int *)(this + 0xc)) && (uVar1 + param_1 <= *(uint *)(this + 0x10))) {
    *(uint *)(this + 0xc) = uVar1 + param_1;
    return param_1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,uVar1);
  uVar1 = *param_3;
  if ((int)uVar3 < (int)*param_3) {
    uVar1 = uVar3;
  }
  F_00da3710(uVar2,param_1,uVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,param_1,uVar3);
  return uVar2;
}

/* ref: hkLifoAllocator::PopNonLifoFrees */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d941f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd941f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *((int *)GEN_TOP((*(int *)(this + 4) + 4))) - 1;
  iVar4 = *(int *)(this + 0xc);
  if (-1 < iVar5) {
    iVar6 = iVar5 * 0xc;
    do {
      iVar1 = **(int * PTR32 *)(this + 4);
      if (*((int *)GEN_TOP((iVar1 + 4 + iVar6))) != iVar4) break;
      iVar4 = *((int *)GEN_TOP((iVar1 + iVar6)));
      piVar2 = *(int * PTR32 *)(this + 4) + 1;
      *piVar2 = *piVar2 - 1;
      iVar6 = iVar6 - 0xc;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  iVar5 = *((int *)GEN_TOP((*(int *)(this + 4) + 0x10)));
  while (1 < iVar5) {
    iVar5 = *((int *)GEN_TOP((*(int *)(this + 4) + 0x10)));
    iVar6 = *((int *)GEN_TOP((*(int *)(this + 4) + 0xc)));
    if ((iVar4 != *((int *)GEN_TOP((iVar6 - 4 + iVar5 * 4)))) &&
       ((uint)(iVar4 - *((int *)GEN_TOP((iVar6 - 4 + iVar5 * 4)))) <= *(uint *)(this + 8))) break;
    if (*(int *)(this + 0x18) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 8))))
                (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,*(int *)(this + 0x18),*(undefined4 *)(this + 8));
      *((int *)GEN_TOP((*(int *)(this + 4) + 0x18))) = *((int *)GEN_TOP((*(int *)(this + 4) + 0x18))) - 1;
    }
    iVar5 = *(int *)(this + 4);
    *(undefined4 *)(this + 0x18) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 0xc))) - 4 + *((int *)GEN_TOP((iVar5 + 0x10))) * 4)));
    *((int *)GEN_TOP((iVar5 + 0x10))) = *((int *)GEN_TOP((iVar5 + 0x10))) - 1;
    iVar5 = *((int *)GEN_TOP((*(int *)(this + 4) + 0x10)));
  }
  piVar2 = *(int * PTR32 *)(this + 4);
  *(int *)(this + 0xc) = iVar4;
  if (piVar2[4] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *((int *)GEN_TOP((piVar2[3] - 4 + piVar2[4] * 4))) + *(int *)(this + 8);
  }
  *(int *)(this + 0x10) = iVar4;
  if (piVar2[1] == 0) {
    *(undefined4 *)(this + 0x14) = 0;
    return 0;
  }
  uVar3 = *((uint *)GEN_TOP((*piVar2 - 8 + piVar2[1] * 0xc)));
  *(uint *)(this + 0x14) = uVar3;
  return uVar3;
}

/* ref: hkLifoAllocator::Quit */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d942d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd942d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)(this + 0xc) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 8))))
              (*(int * PTR32 *)(this + 0x24) GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0xc))),
               *(undefined4 *)(this + 8));
  }
  if (*(int *)(this + 0x18) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 8))))
              (*(int * PTR32 *)(this + 0x24) GEN_EDX_ARG,*(int *)(this + 0x18),*(undefined4 *)(this + 8));
  }
  iVar1 = *(int *)(this + 4);
  piVar2 = *(int * PTR32 *)(this + 0x24);
  *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
  if (-1 < *((int *)GEN_TOP((iVar1 + 0x14)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0xc))),*((int *)GEN_TOP((iVar1 + 0x14))) * 4);
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x14))) = 0x80000000;
  puVar3 = *(undefined4 * PTR32 *)(this + 4);
  piVar2 = *(int * PTR32 *)(this + 0x24);
  puVar3[1] = 0;
  if (-1 < (int)puVar3[2]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*puVar3,(puVar3[2] & 0x3fffffff) * 0xc);
  }
  *puVar3 = 0;
  puVar3[2] = 0x80000000;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 8))))
                    (*(int * PTR32 *)(this + 0x24) GEN_EDX_ARG,*(undefined4 *)(this + 4),0x1c);
  *(undefined4 *)(this + 4) = 0;
  return uVar4;
}

/* ref: hkLifoAllocator::SlowBlockAllocate */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd94390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 <= *(int *)(this + 8)) {
    uVar4 = *(uint *)(this + 0x18);
    if (uVar4 == 0) {
      if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x10))) < 2) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 4))))
                          (*(int * PTR32 *)(this + 0x24) GEN_EDX_ARG,*(int *)(this + 8));
      }
      else {
        piVar2 = ((int *)GEN_TOP((*(int *)(this + 4) + 0x18)));
        *piVar2 = *piVar2 + 1;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 4))))
                          (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,*(undefined4 *)(this + 8));
      }
    }
    else {
      *(undefined4 *)(this + 0x18) = 0;
    }
    piVar2 = *(int * PTR32 *)(this + 4);
    if (piVar2[4] != 0) {
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        F_00d95710(*(undefined4 *)(this + 0x24),piVar2,0xc);
      }
      iVar3 = piVar2[1];
      piVar2[1] = iVar3 + 1;
      puVar1 = ((undefined4 *)GEN_TOP((*piVar2 + iVar3 * 0xc)));
      puVar1[1] = uVar4;
      *puVar1 = *(undefined4 *)(this + 0xc);
      puVar1[2] = *((int *)GEN_TOP((*(int *)(this + 4) + 0x10))) - 1;
      *(uint *)(this + 0x14) = uVar4;
    }
    iVar3 = *(int *)(this + 4);
    *(uint *)(this + 0x10) = *(int *)(this + 8) + uVar4;
    *(uint *)(this + 0xc) = uVar4 + param_1;
    if (*((uint *)GEN_TOP((iVar3 + 0x10))) == (*((uint *)GEN_TOP((iVar3 + 0x14))) & 0x3fffffff)) {
      F_00d95710(*(undefined4 *)(this + 0x24),((int *)GEN_TOP((iVar3 + 0xc))),4);
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0xc))) + *((int *)GEN_TOP((iVar3 + 0x10))) * 4))) = uVar4;
    *((int *)GEN_TOP((iVar3 + 0x10))) = *((int *)GEN_TOP((iVar3 + 0x10))) + 1;
    return uVar4;
  }
  *((int *)GEN_TOP((*(int *)(this + 4) + 0x18))) = *((int *)GEN_TOP((*(int *)(this + 4) + 0x18))) + 1;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20) + 4))))(*(int * PTR32 *)(this + 0x20) GEN_EDX_ARG,param_1);
  return uVar4;
}

/* ref: hkLifoAllocator::InsertNonLifoFree */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd94490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  uint * puVar8;
  int iVar9;
  uint local_8;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  uVar3 = piVar1[4] - 1;
  local_8 = 0xffffffff;
  uVar6 = local_8;
  if (-1 < (int)uVar3) {
    piVar7 = ((int *)GEN_TOP((piVar1[3] + uVar3 * 4)));
    do {
      uVar6 = uVar3;
      if (param_1 - *piVar7 < *(uint *)(this + 8)) break;
      piVar7 = piVar7 - 1;
      uVar3 = uVar3 - 1;
      uVar6 = local_8;
    } while (-1 < (int)uVar3);
  }
  local_8 = uVar6;
  uVar6 = param_1 + param_2;
  iVar9 = 0;
  iVar4 = piVar1[1] - 1;
  if (-1 < iVar4) {
    puVar8 = ((uint *)GEN_TOP((*piVar1 + iVar4 * 0xc)));
    do {
      if (puVar8[2] == local_8) {
        if (param_1 == puVar8[1]) {
          puVar8[1] = uVar6;
          goto LAB_00d9458f;
        }
        if (uVar6 == *puVar8) {
          *puVar8 = param_1;
          goto LAB_00d9458f;
        }
        if (*puVar8 < param_1) goto LAB_00d9451c;
      }
      else if ((int)puVar8[2] < (int)local_8) {
LAB_00d9451c: ;
        iVar9 = iVar4 + 1;
        break;
      }
      puVar8 = puVar8 - 3;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  iVar2 = piVar1[1];
  iVar4 = iVar2 + 1;
  if ((int)(piVar1[2] & 0x3fffffffU) < iVar4) {
    iVar5 = (piVar1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    F_00d95690(*(undefined4 *)(this + 0x24),piVar1,iVar5,0xc);
  }
  iVar5 = iVar9 * 0xc;
  F_00da38f0(*piVar1 + iVar5 + 0xc,*piVar1 + iVar5,(iVar2 - iVar9) * 0xc);
  iVar9 = *piVar1;
  piVar1[1] = iVar4;
  *((uint *)GEN_TOP((iVar9 + iVar5))) = param_1;
  *((uint *)GEN_TOP((iVar9 + 4 + iVar5))) = uVar6;
  *((uint *)GEN_TOP((iVar9 + 8 + iVar5))) = local_8;
LAB_00d9458f: ;
  piVar1 = *(int * PTR32 *)(this + 4);
  if (piVar1[1] == 0) {
    *(undefined4 *)(this + 0x14) = 0;
    return 0;
  }
  uVar6 = *((uint *)GEN_TOP((*piVar1 - 8 + piVar1[1] * 0xc)));
  *(uint *)(this + 0x14) = uVar6;
  return uVar6;
}

/* ref: hkLifoAllocator::SlowBlockFree */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d945c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd945c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (param_1 != 0) {
    if (param_2 <= *(int *)(this + 8)) {
      uVar1 = param_2 + 0xfU & 0xfffffff0;
      if (uVar1 + param_1 == *(int *)(this + 0xc)) {
        *(int *)(this + 0xc) = param_1;
        uVar1 = F_00d941f0(this GEN_EDX_FWD);
        return uVar1;
      }
      uVar1 = F_00d94490(this GEN_EDX_ARG,param_1,uVar1);
      return uVar1;
    }
    *((int *)GEN_TOP((*(int *)(this + 4) + 0x18))) = *((int *)GEN_TOP((*(int *)(this + 4) + 0x18))) - 1;
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20) + 8))))(*(int * PTR32 *)(this + 0x20) GEN_EDX_ARG,param_1,param_2);
  }
  return in_EAX;
}

/* ref: hkLifoAllocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd94620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(this + 0xc);
  uVar3 = param_1 + 0xfU & 0xfffffff0;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)(this + 8)) && (uVar2 <= *(uint *)(this + 0x10))) {
    *(uint *)(this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_FWD,uVar3);
  return uVar2;
}

/* ref: hkLifoAllocator::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd94650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  if (((param_2 <= *(int *)(this + 8)) && (uVar1 + param_1 == *(int *)(this + 0xc))) &&
     (*(int *)(this + 0x14) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    return uVar1;
  }
  uVar1 = F_00d945c0(this GEN_EDX_FWD,param_1,uVar1);
  return uVar1;
}

/* ref: hkLifoAllocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd94690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1 + 0xf & 0xfffffff0;
  *param_1 = uVar2;
  uVar1 = *(uint *)(this + 0xc);
  uVar3 = uVar1 + uVar2;
  if (((int)uVar2 <= *(int *)(this + 8)) && (uVar3 <= *(uint *)(this + 0x10))) {
    *(uint *)(this + 0xc) = uVar3;
    return uVar1;
  }
  uVar3 = F_00d94390(this GEN_EDX_FWD,uVar2);
  return uVar3;
}

/* ref: hkLifoAllocator::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d946d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd946d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  if (((param_2 <= *(int *)(this + 8)) && (uVar1 + param_1 == *(int *)(this + 0xc))) &&
     (*(int *)(this + 0x14) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    return uVar1;
  }
  uVar1 = F_00d945c0(this GEN_EDX_FWD,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d94740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94740(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd94740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d947b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d947b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd947b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d947e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d947e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd947e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 4))) == 0;
  return param_2;
}

/* ref: FUN_00d94800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd94800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00d94830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd94830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2 * 0x1c);
  return uVar1;
}

/* ref: FUN_00d94870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd94870u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d948b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d948b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd948b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d948f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d948f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd948f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d94920 */
GEN_LIB GEN_FRAME unsigned int F_00d94920(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd94920u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkLifoAllocator::vf8 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d94980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd94980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkLifoAllocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd94990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  return param_2;
}

/* ref: hkLifoAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d949a0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd949a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d9b7c0(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00d949c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d949c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd949c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00d949d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d949d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd949d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: hkArrayBase::PushBack */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d949e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd949e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkArrayBase::ClearAndDeallocate12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd94a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArrayBase::ExpandOne12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd94aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: hkArrayBase::ExpandAt12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd94ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_3;
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(param_1,this,iVar3,0xc);
  }
  F_00da38f0(*(int *)this + (param_3 + param_2) * 0xc,*(int *)this + param_2 * 0xc,
                     (iVar2 - param_2) * 0xc);
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return *(int *)this + param_2 * 0xc;
}

/* ref: hkArrayBase::ClearAndDeallocate4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd94b60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkVector4::SetRotatedDir */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94bc0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd94bc0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkVector4::SetTransformedPos4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d94cc0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd94cc0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar13;
  float fVar14;
  float fVar15;
  
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
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  fVar15 = param_2[0xf];
  *in_ecx = ((fVar2 * param_2[4] + fVar1 * *param_2) + fVar3 * param_2[8]) + param_2[0xc];
  in_ecx[1] = ((fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10) + fVar13;
  in_ecx[2] = ((fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11) + fVar14;
  in_ecx[3] = ((fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12) + fVar15;
  return (uint)param_2;
}

/* ref: hkVector4::SetTransformedInversePos */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d94d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd94d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar1 = *param_2 - *(float *)(param_1 + 6);
  fVar2 = param_2[1] - *((float *)GEN_TOP(((int)param_1 + 0x34)));
  fVar3 = param_2[2] - *(float *)(param_1 + 7);
  local_20 = gen_bits2f((uint)*param_1);
  fStack_1c = gen_bits2f((uint)((ulonglong)*param_1 >> 0x20));
  fStack_18 = gen_bits2f((uint)param_1[1]);
  local_30 = gen_bits2f((uint)param_1[2]);
  fStack_2c = gen_bits2f((uint)((ulonglong)param_1[2] >> 0x20));
  fStack_28 = gen_bits2f((uint)param_1[3]);
  local_40 = gen_bits2f((uint)param_1[4]);
  fStack_3c = gen_bits2f((uint)((ulonglong)param_1[4] >> 0x20));
  fStack_38 = gen_bits2f((uint)param_1[5]);
  fStack_34 = gen_bits2f((uint)((ulonglong)param_1[5] >> 0x20));
  *(float *)this = (fVar2 * fStack_1c + fVar1 * local_20) + fStack_18 * fVar3;
  *((float *)GEN_TOP(((int)this + 4))) = (fVar2 * fStack_2c + fVar1 * local_30) + fStack_28 * fVar3;
  *((float *)GEN_TOP(((int)this + 8))) = (fVar2 * fStack_3c + fVar1 * local_40) + fStack_38 * fVar3;
  *((float *)GEN_TOP(((int)this + 0xc))) = (fVar2 * fStack_34 + fVar1 * fStack_3c) + fStack_34 * fVar3;
  return 0;
}

/* ref: hkVector4::SetTransformedPosQs */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d94dc0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd94dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar13 = param_2[7];
  local_20 = gen_bits2f((uint)*param_3);
  fStack_1c = gen_bits2f((uint)((ulonglong)*param_3 >> 0x20));
  fStack_18 = gen_bits2f((uint)param_3[1]);
  fStack_14 = gen_bits2f((uint)((ulonglong)param_3[1] >> 0x20));
  fVar4 = param_2[8] * local_20;
  fVar5 = param_2[9] * fStack_1c;
  fVar6 = param_2[10] * fStack_18;
  fVar7 = param_2[0xb] * fStack_14;
  fVar8 = fVar1 * fVar4;
  fVar9 = fVar2 * fVar5;
  fVar10 = fVar3 * fVar6;
  fVar11 = (((fVar9 + fVar8) + fVar10) * fVar1 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar13 * fVar13) * fVar4)
           + (fVar2 * fVar6 - fVar3 * fVar5) * fVar13;
  fVar12 = (((fVar9 + fVar8) + fVar10) * fVar2 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar13 * fVar13) * fVar5)
           + (fVar3 * fVar4 - fVar1 * fVar6) * fVar13;
  fVar4 = (((fVar9 + fVar8) + fVar10) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar13 * fVar13) * fVar6) +
          (fVar1 * fVar5 - fVar2 * fVar4) * fVar13;
  fVar13 = (((fVar9 + fVar8) + fVar10) * fVar13 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar13 * fVar13) * fVar7)
           + (fVar13 * fVar7 - fVar13 * fVar7) * fVar13;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = (fVar11 + fVar11) + *param_2;
  in_ecx[1] = (fVar12 + fVar12) + fVar1;
  in_ecx[2] = (fVar4 + fVar4) + fVar2;
  in_ecx[3] = (fVar13 + fVar13) + fVar3;
  return 0;
}

/* ref: hkVector4::SetTransformedInversePosQs */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d94e80(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd94e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
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
  undefined1 auVar13 [16];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar2 = param_2[4];
  fVar3 = param_2[5];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  local_20 = gen_bits2f((uint)*param_3);
  fStack_1c = gen_bits2f((uint)((ulonglong)*param_3 >> 0x20));
  fStack_18 = gen_bits2f((uint)param_3[1]);
  fStack_14 = gen_bits2f((uint)((ulonglong)param_3[1] >> 0x20));
  fVar6 = local_20 - *param_2;
  fVar7 = fStack_1c - param_2[1];
  fVar8 = fStack_18 - param_2[2];
  fVar9 = fStack_14 - param_2[3];
  fVar10 = fVar2 * fVar6;
  fVar11 = fVar3 * fVar7;
  fVar12 = fVar4 * fVar8;
  memcpy(&(auVar1), &(*(gen_v16 *)(param_2 + 8)), sizeof(*(gen_v16 *)(param_2 + 8)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(param_2 + 8)) : sizeof(auVar1));
  (*(float *)((char *)&auVar13 + 0)) = (fVar4 * fVar7 - fVar3 * fVar8) * fVar5;
  (*(float *)((char *)&auVar13 + 4)) = (fVar2 * fVar8 - fVar4 * fVar6) * fVar5;
  (*(float *)((char *)&auVar13 + 8)) = (fVar3 * fVar6 - fVar2 * fVar7) * fVar5;
  (*(float *)((char *)&auVar13 + 12)) = (fVar5 * fVar9 - fVar5 * fVar9) * fVar5;
  fVar2 = (((fVar11 + fVar10) + fVar12) * fVar2 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar5 * fVar5) * fVar6) +
          (*(float *)((char *)&auVar13 + 0));
  fVar3 = (((fVar11 + fVar10) + fVar12) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar5 * fVar5) * fVar7) +
          (*(float *)((char *)&auVar13 + 4));
  fVar4 = (((fVar11 + fVar10) + fVar12) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar5 * fVar5) * fVar8) +
          (*(float *)((char *)&auVar13 + 8));
  fVar5 = (((fVar11 + fVar10) + fVar12) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar5 * fVar5) * fVar9) +
          (*(float *)((char *)&auVar13 + 12));
  gen_rcpps(&(auVar13), &(auVar13), &(auVar1));
  fVar6 = *(float *)&REFG(undefined, 0x1138df4) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar13 + 4));
  fVar7 = *(float *)&REFG(undefined, 0x1138df8) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar13 + 8));
  fVar8 = *(float *)&REFG(undefined, 0x1138dfc) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar13 + 12));
  *in_ecx = ((*(float *)&REFG(undefined, 0x1138df0) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar13 + 0))) * (*(float *)((char *)&auVar13 + 0))) *
            (fVar2 + fVar2);
  in_ecx[1] = (fVar6 * (*(float *)((char *)&auVar13 + 4))) * (fVar3 + fVar3);
  in_ecx[2] = (fVar7 * (*(float *)((char *)&auVar13 + 8))) * (fVar4 + fVar4);
  in_ecx[3] = (fVar8 * (*(float *)((char *)&auVar13 + 12))) * (fVar5 + fVar5);
  return 0;
}

/* ref: hkVector4::SetRotatedDir_00d950d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d950d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd950d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
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
  
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar1 * fVar4 - fVar10 * fVar5) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar9 * fVar5 - fVar1 * fVar3) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar10 * fVar3 - fVar9 * fVar4) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  *(float *)this = fVar7 + fVar7;
  *((float *)GEN_TOP(((int)this + 4))) = fVar8 + fVar8;
  *((float *)GEN_TOP(((int)this + 8))) = fVar9 + fVar9;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar10 + fVar10;
  return (uint)param_1;
}

/* ref: hkVector4::SetRotatedInverseDir */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d95160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd95160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
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
  
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar10 * fVar5 - fVar1 * fVar4) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar1 * fVar3 - fVar9 * fVar5) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar9 * fVar4 - fVar10 * fVar3) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  *(float *)this = fVar7 + fVar7;
  *((float *)GEN_TOP(((int)this + 4))) = fVar8 + fVar8;
  *((float *)GEN_TOP(((int)this + 8))) = fVar9 + fVar9;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar10 + fVar10;
  return 0;
}

/* ref: hkVector4::TransformPosition */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d952b0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd952b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar13;
  float fVar14;
  float fVar15;
  
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
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  fVar15 = param_2[0xf];
  *in_ecx = ((fVar2 * param_2[4] + fVar1 * *param_2) + fVar3 * param_2[8]) + param_2[0xc];
  in_ecx[1] = ((fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10) + fVar13;
  in_ecx[2] = ((fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11) + fVar14;
  in_ecx[3] = ((fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12) + fVar15;
  return (uint)param_2;
}

/* ref: hkVector4::SetRotatedDirQuaternion */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d953b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd953b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
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
  
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar10 * fVar5 - fVar1 * fVar4) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar1 * fVar3 - fVar9 * fVar5) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar9 * fVar4 - fVar10 * fVar3) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  *(float *)this = fVar7 + fVar7;
  *((float *)GEN_TOP(((int)this + 4))) = fVar8 + fVar8;
  *((float *)GEN_TOP(((int)this + 8))) = fVar9 + fVar9;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar10 + fVar10;
  return 0;
}

/* ref: hkArrayUtil::Reserve */
GEN_LIB GEN_FRAME byte F_00d95690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd95690u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  code * pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (*(int *)&gen_args[3]);
  (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) * (*(int *)&gen_args[3]);
  uVar4 = (*(uint * PTR32 *)&gen_args[1])[2];
  if ((int)uVar4 < 0) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
    uVar4 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[2]));
    if (uVar4 != 0) {
      F_00c46aa0(uVar4,*(*(uint * PTR32 *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[1])[1] * iVar3);
    }
  }
  else {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14)));
    uVar2 = *(*(uint * PTR32 *)&gen_args[1]);
    uVar4 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),uVar2,(uVar4 & 0x3fffffff) * (*(int *)&gen_args[3]),&(*(int *)&gen_args[2]));
  }
  *(*(uint * PTR32 *)&gen_args[1]) = uVar4;
  (*(uint * PTR32 *)&gen_args[1])[2] = (*(int *)&gen_args[2]) / iVar3;
  return uVar4 == 0;
}

/* ref: hkArrayUtil::ReserveMore */
GEN_LIB GEN_FRAME uint F_00d95710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd95710u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  code * pcVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = (*(int *)&gen_args[2]);
  puVar3 = (*(uint * PTR32 *)&gen_args[1]);
  if ((*(uint * PTR32 *)&gen_args[1])[1] == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = (*(uint * PTR32 *)&gen_args[1])[1] * 2;
  }
  uVar6 = (*(uint * PTR32 *)&gen_args[1])[2];
  if (-1 < (int)uVar6) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14)));
    uVar2 = *(*(uint * PTR32 *)&gen_args[1]);
    (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP((iVar5 * (*(int *)&gen_args[2]))));
    uVar6 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),uVar2,(uVar6 & 0x3fffffff) * (*(int *)&gen_args[2]),&(*(uint * PTR32 *)&gen_args[1]));
    *puVar3 = uVar6;
    puVar3[2] = (int)(*(uint * PTR32 *)&gen_args[1]) / iVar4;
    return (int)(*(uint * PTR32 *)&gen_args[1]) / iVar4;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
  (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP((iVar5 * (*(int *)&gen_args[2]))));
  uVar6 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[1]));
  F_00c46aa0(uVar6,*puVar3,puVar3[1] * iVar4);
  *puVar3 = uVar6;
  puVar3[2] = (int)(*(uint * PTR32 *)&gen_args[1]) / iVar4;
  return (int)(*(uint * PTR32 *)&gen_args[1]) / iVar4;
}

/* ref: hkArrayUtil::Reduce */
GEN_LIB GEN_FRAME uint F_00d957a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd957a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (*(uint *)&gen_args[4]);
  uVar4 = (*(uint *)&gen_args[3]);
  if (((*(uint *)&gen_args[3]) != 0) && ((int)(*(uint * PTR32 *)&gen_args[1])[1] < (int)(*(uint *)&gen_args[4]))) {
    F_00c46aa0((*(uint *)&gen_args[3]),*(*(uint * PTR32 *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[1])[1] * (*(int *)&gen_args[2]));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(*(uint * PTR32 *)&gen_args[1]),((*(uint * PTR32 *)&gen_args[1])[2] & 0x3fffffff) * (*(int *)&gen_args[2]));
    (*(uint * PTR32 *)&gen_args[1])[2] = uVar2 | 0x80000000;
    *(*(uint * PTR32 *)&gen_args[1]) = uVar4;
    return uVar3;
  }
  (*(uint *)&gen_args[3]) = (*(int *)&gen_args[2]) * (*(uint *)&gen_args[4]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14)));
  uVar4 = (*(uint * PTR32 *)&gen_args[1])[2];
  uVar2 = *(*(uint * PTR32 *)&gen_args[1]);
  uVar4 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),uVar2,uVar4 * (*(int *)&gen_args[2]),&(*(uint *)&gen_args[3]));
  *(*(uint * PTR32 *)&gen_args[1]) = uVar4;
  (*(uint * PTR32 *)&gen_args[1])[2] = (int)(*(uint *)&gen_args[3]) / (*(int *)&gen_args[2]);
  return (int)(*(uint *)&gen_args[3]) / (*(int *)&gen_args[2]);
}

/* ref: FUN_00d95830 */
GEN_LIB GEN_NOFRAME uint F_00d95830(void)
{
  GEN_ENTER(0xd95830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d95840 */
GEN_LIB GEN_NOFRAME uint F_00d95840(void)
{
  GEN_ENTER(0xd95840u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkJobQueue::SetExternalProfiler */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d95860(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd95860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x288))) = param_2;
  return param_2;
}

/* ref: hkJobQueue::LockQueue */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d95870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd95870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection(this);
  return *((uint *)GEN_TOP(((int)this + 0x18)));
}

/* ref: hkJobQueue::UnlockQueue */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00d95890(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd95890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPCRITICAL_SECTION in_ECX = 0;
  
  return (uint)(gen_imp_LeaveCriticalSection(in_ECX));
}

/* ref: hkJobQueue::RegisterJobHandler */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d95950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd95950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined8 * puVar1;
  
  puVar1 = ((undefined8 *)GEN_TOP((in_ecx + 0x128 + param_2 * 0x10)));
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  return (uint)puVar1;
}

/* ref: hkJobQueue::ReleaseWaitingThreads */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d95980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd95980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x8c)))) {
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x78)));
    puVar1 = ((ushort *)GEN_TOP((param_1 + 0x36)));
    do {
      uVar2 = (uint)*puVar1;
      *puVar1 = 0;
      if (uVar2 != 0) {
        do {
          F_00da36f0(*puVar3,1);
          uVar2 = uVar2 - 1;
        } while (0 < (int)uVar2);
      }
      local_8 = local_8 + 1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (local_8 < *((int *)GEN_TOP(((int)this + 0x8c))));
  }
  return;
}

/* ref: hkJobQueue::DefaultPopJobFunc */
GEN_LIB GEN_FRAME uint F_00d95a10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd95a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + (*((byte *)GEN_TOP((param_3 + 1))) + 0x13) * 0x10))))
                    (param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: hkJobQueue::DefaultFinishJobFunc */
GEN_LIB GEN_FRAME uint F_00d95a40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd95a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x134 + (uint)*((byte *)GEN_TOP((param_3 + 1))) * 0x10))))
                    (param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: hkJobQueue::GetQueueIndexForJob */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d95a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd95a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x48)))) {
    pcVar1 = ((char *)GEN_TOP(((int)this + 0x3c)));
    do {
      if ((param_1[1] == pcVar1[-4]) && (*param_1 == *pcVar1)) {
        return (uint)*((byte *)GEN_TOP(((int)this + iVar2 * 8 + 0x3d)));
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 8;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x48))));
  }
  return (uint)(byte)param_1[1] + *((int *)GEN_TOP(((int)this + 0x30)));
}

/* ref: hkJobQueue::ReleaseOneWaitingThread */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d95ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd95ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  bool bVar1;
  int iVar2;
  int * piVar3;
  short * psVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x4c)));
  bVar1 = false;
  if (iVar2 < *((int *)GEN_TOP(((int)this + 0x50)))) {
    psVar4 = ((short *)GEN_TOP((param_1 + 0x36 + iVar2 * 2)));
    piVar3 = ((int *)GEN_TOP((param_1 + (iVar2 * 5 + 0x14) * 4)));
    bVar1 = false;
    do {
      if ((*piVar3 != 0) && (bVar1 = true, *psVar4 != 0)) goto LAB_00d95b4c;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
      psVar4 = psVar4 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x50))));
  }
  if (iVar2 < *((int *)GEN_TOP(((int)this + 0x34)))) {
    piVar3 = ((int *)GEN_TOP((param_1 + (iVar2 * 5 + 0x14) * 4)));
    do {
      if (*piVar3 != 0) goto LAB_00d95b21;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x34))));
  }
  if (bVar1) {
LAB_00d95b21: ;
    iVar2 = *((int *)GEN_TOP(((int)this + 0x4c)));
    if (iVar2 < *((int *)GEN_TOP(((int)this + 0x8c)))) {
      psVar4 = ((short *)GEN_TOP((param_1 + 0x36 + iVar2 * 2)));
      while (*psVar4 == 0) {
        iVar2 = iVar2 + 1;
        psVar4 = psVar4 + 1;
        if (*((int *)GEN_TOP(((int)this + 0x8c))) <= iVar2) {
          return;
        }
      }
LAB_00d95b4c: ;
      psVar4 = ((short *)GEN_TOP((param_1 + 0x36 + iVar2 * 2)));
      *psVar4 = *psVar4 - 1;
      F_00da36f0(*((undefined4 *)GEN_TOP(((int)this + iVar2 * 4 + 0x78))),1);
    }
  }
  return;
}

/* ref: hkJobQueue::CheckQueueAndReleaseOneWaitingThread */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d95b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd95b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  short sVar1;
  
  if ((param_1 < *((int *)GEN_TOP(((int)this + 0x8c)))) &&
     (sVar1 = *((short *)GEN_TOP((param_2 + 0x36 + param_1 * 2))), sVar1 != 0)) {
    *((short *)GEN_TOP((param_2 + 0x36 + param_1 * 2))) = sVar1 - 1;
    F_00da36f0(*((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x78))),1);
    return;
  }
  F_00d95ac0(this GEN_EDX_ARG,param_2);
  return;
}

/* ref: hkJobQueue::UpdateJobQueryRules */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d95c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd95c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  byte bVar2;
  char * pcVar3;
  undefined4 * puVar4;
  LPVOID pvVar5;
  undefined * pvVar6;
  int iVar7;
  char * pcVar8;
  int iVar9;
  int iVar10;
  byte * pbVar11;
  int local_c;
  undefined4 * local_8;
  
  local_8 = ((undefined4 *)GEN_TOP(0x1));
  if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
    local_8 = ((undefined4 *)GEN_TOP(*((int *)GEN_TOP(((int)this + 0x6c)))));
  }
  *((int *)GEN_TOP(((int)this + 0x48))) = *((int *)GEN_TOP(((int)this + 0x280)));
  if (*((char *)GEN_TOP(((int)this + 0x5c))) == '\0') {
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  iVar10 = *((int *)GEN_TOP(((int)this + 0x28)));
  iVar9 = iVar10 + (int)local_8;
  iVar7 = *((int *)GEN_TOP(((int)this + 0x280))) + iVar9;
  *((int *)GEN_TOP(((int)this + 0x2c))) = iVar9;
  *((int *)GEN_TOP(((int)this + 0x30))) = iVar7;
  *((int *)GEN_TOP(((int)this + 0x34))) = *((int *)GEN_TOP(((int)this + 0x24))) + iVar7;
  if (iVar10 < iVar9) {
    iVar9 = iVar10 * 0x14;
    do {
      F_00d976d0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x40 + iVar9))) GEN_EDX_FWD,0x80);
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x14;
    } while (iVar10 < *((int *)GEN_TOP(((int)this + 0x2c))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  iVar9 = *((int *)GEN_TOP(((int)this + 0x6c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  if (0 < iVar9) {
    iVar9 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 100)))) {
      do {
        *((undefined1 *)GEN_TOP(((int)this + iVar9 + 0x11c))) = 0xff;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *((int *)GEN_TOP(((int)this + 100))));
    }
    iVar9 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0x6c)))) {
      iVar10 = 0;
      do {
        iVar7 = 0;
        if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x68))) + 4 + iVar10)))) {
          do {
            *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x68))) + iVar10))) + iVar7 * 4))) + 0x11c +
                     (int)this))) = *((char *)GEN_TOP(((int)this + 0x28))) + (char)iVar9;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x68))) + 4 + iVar10))));
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar9 < *((int *)GEN_TOP(((int)this + 0x6c))));
    }
    iVar9 = *((int *)GEN_TOP(((int)this + 0x6c)));
  }
  if ((iVar9 == 0) && (iVar9 = 0, 0 < *((int *)GEN_TOP(((int)this + 100))))) {
    do {
      *((undefined1 *)GEN_TOP(((int)this + iVar9 + 0x11c))) = *((undefined1 *)GEN_TOP(((int)this + 0x28)));
      iVar9 = iVar9 + 1;
    } while (iVar9 < *((int *)GEN_TOP(((int)this + 100))));
  }
  iVar9 = 0;
  if (0 < (int)local_8) {
    do {
      pcVar3 = ((char *)GEN_TOP(((int)this + (*((int *)GEN_TOP(((int)this + 0x28))) + iVar9) * 0x1c + 0x90)));
      *pcVar3 = *((char *)GEN_TOP(((int)this + 0x28))) + (char)iVar9;
      iVar10 = 0;
      pcVar3 = pcVar3 + 1;
      if (0 < *((int *)GEN_TOP(((int)this + 0x6c)))) {
        do {
          if (iVar9 != iVar10) {
            *pcVar3 = *((char *)GEN_TOP(((int)this + 0x28))) + (char)iVar10;
            pcVar3 = pcVar3 + 1;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *((int *)GEN_TOP(((int)this + 0x6c))));
      }
      if (0 < *((int *)GEN_TOP(((int)this + 0x24)))) {
        iVar10 = 0;
        do {
          *pcVar3 = *((char *)GEN_TOP(((int)this + 0x30))) + (char)iVar10;
          iVar10 = iVar10 + 1;
          pcVar3 = pcVar3 + 1;
        } while (iVar10 < *((int *)GEN_TOP(((int)this + 0x24))));
      }
      if ((*((int *)GEN_TOP(((int)this + 0x58))) == 0) && (iVar10 = 0, 0 < *((int *)GEN_TOP(((int)this + 0x24))))) {
        do {
          *pcVar3 = (char)iVar10;
          iVar10 = iVar10 + 1;
          pcVar3 = pcVar3 + 1;
        } while (iVar10 < *((int *)GEN_TOP(((int)this + 0x24))));
      }
      iVar10 = 0;
      if (0 < *((int *)GEN_TOP(((int)this + 0x48)))) {
        do {
          *pcVar3 = *((char *)GEN_TOP(((int)this + 0x2c))) + (char)iVar10;
          iVar10 = iVar10 + 1;
          pcVar3 = pcVar3 + 1;
        } while (iVar10 < *((int *)GEN_TOP(((int)this + 0x48))));
      }
      iVar9 = iVar9 + 1;
      *pcVar3 = -1;
    } while (iVar9 < (int)local_8);
  }
  iVar9 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x48)))) {
    local_c = 0;
    pbVar11 = ((byte *)GEN_TOP(((int)this + 0x3d)));
    do {
      *(undefined4 *)(pbVar11 - 5) = *((undefined4 *)GEN_TOP((local_c + *((int *)GEN_TOP(((int)this + 0x27c))))));
      pbVar11[-1] = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x27c))) + 4 + local_c)));
      bVar2 = *((char *)GEN_TOP(((int)this + 0x2c))) + (char)iVar9;
      *pbVar11 = bVar2;
      iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x27c))) + 8 + local_c)));
      cVar1 = *((char *)GEN_TOP((iVar10 + 0x11c + (int)this)));
      *((byte *)GEN_TOP((iVar10 + 0x11c + (int)this))) = bVar2;
      pcVar3 = ((char *)GEN_TOP(((int)this + (*((int *)GEN_TOP(((int)this + 0x2c))) + iVar9) * 0x1c + 0x90)));
      *pcVar3 = *((char *)GEN_TOP(((int)this + 0x2c))) + (char)iVar9;
      pcVar8 = ((char *)GEN_TOP(((int)this + cVar1 * 0x1c + 0x90)));
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar8;
      while (cVar1 != -1) {
        if ((int)*pcVar8 != (uint)*pbVar11) {
          *pcVar3 = *pcVar8;
          pcVar3 = pcVar3 + 1;
        }
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
      iVar9 = iVar9 + 1;
      local_c = local_c + 0xc;
      *pcVar3 = -1;
      pbVar11 = pbVar11 + 8;
    } while (iVar9 < *((int *)GEN_TOP(((int)this + 0x48))));
  }
  local_c = *((int *)GEN_TOP(((int)this + 0x30)));
  *((int *)GEN_TOP(((int)this + 0x54))) = (int)*((char *)GEN_TOP(((int)this + 0x11c)));
  puVar4 = ((undefined4 *)GEN_TOP(0x1));
  if (1 < *((int *)GEN_TOP(((int)this + 100)))) {
    do {
      if (*((char *)GEN_TOP(((int)this + 0x11c + (int)puVar4))) == *((char *)GEN_TOP(((int)this + 0x11c)))) {
        *((char *)GEN_TOP(((int)this + 0x11c))) = (char)local_c;
        local_c = local_c + 1;
        break;
      }
      puVar4 = ((undefined4 *)GEN_TOP(((int)puVar4 + 1)));
    } while ((int)puVar4 < *((int *)GEN_TOP(((int)this + 100))));
  }
  if ((*((char *)GEN_TOP(((int)this + 0x74))) != '\0') &&
     (iVar9 = *((int *)GEN_TOP(((int)this + 0x28))), iVar9 < *((int *)GEN_TOP(((int)this + 0x8c))))) {
    local_8 = ((undefined4 *)GEN_TOP(((int)this + iVar9 * 4 + 0x78)));
    do {
      pvVar6 = ((undefined *)GEN_TOP(*local_8));
      puVar4 = local_8;
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        F_00da36a0(pvVar6 GEN_EDX_ARG);
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) + 8))))
                           (*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) GEN_EDX_ARG,pvVar6,4)));
      }
      local_8 = local_8 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *((int *)GEN_TOP(((int)this + 0x8c))));
  }
  iVar9 = 0;
  *((int *)GEN_TOP(((int)this + 0x8c))) = local_c;
  if (0 < local_c) {
    local_8 = ((undefined4 *)GEN_TOP(((int)this + 0x78)));
    iVar10 = 0x36;
    do {
      puVar4 = ((undefined4 *)GEN_TOP(0x0));
      *((undefined2 *)GEN_TOP((iVar10 + *((int *)GEN_TOP(((int)this + 0x18)))))) = 0;
      if (*((int *)GEN_TOP(((int)this + 0x28))) <= iVar9) {
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) + 4))))
                                   (*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) GEN_EDX_ARG,4)));
        if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
          puVar4 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          puVar4 = ((undefined4 *)GEN_TOP(F_00da3670(pvVar6 GEN_EDX_ARG,0,1000)));
        }
        *local_8 = puVar4;
      }
      local_8 = local_8 + 1;
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 2;
    } while (iVar9 < *((int *)GEN_TOP(((int)this + 0x8c))));
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x74))) = 1;
  return (uint)puVar4;
}

/* ref: hkJobQueue::RegisterCustomJobRule */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d96150(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd96150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)param_1 + 0x280)));
  if ((0 < iVar1) && (iVar4 = 0, 0 < iVar1)) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x27c)));
    do {
      if (((*piVar2 == param_2) && ((char)piVar2[1] == param_3)) && (piVar2[2] == param_4)) {
        return (uint)piVar2;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar4 < iVar1);
  }
  if (*((uint *)GEN_TOP(((int)param_1 + 0x280))) == (*((uint *)GEN_TOP(((int)param_1 + 0x284))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)param_1 + 0x27c))),0xc);
  }
  piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x27c))) + *((int *)GEN_TOP(((int)param_1 + 0x280))) * 0xc)));
  *((int *)GEN_TOP(((int)param_1 + 0x280))) = *((int *)GEN_TOP(((int)param_1 + 0x280))) + 1;
  *piVar2 = param_2;
  *(char *)(piVar2 + 1) = param_3;
  piVar2[2] = param_4;
  uVar3 = F_00d95c20(param_1 GEN_EDX_ARG);
  return uVar3;
}

/* ref: hkJobQueue::AddJobQueueLocked */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d961e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd961e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  
  uVar1 = F_00d95a70(this GEN_EDX_FWD,param_2);
  this_00 = ((int *)GEN_TOP((param_1 + 0x40 + uVar1 * 0x14)));
  iVar4 = this_00[1];
  if (param_3 == 0) {
    if (iVar4 <= this_00[4]) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 * 2;
      }
      F_00d976d0(this_00 GEN_EDX_ARG,iVar4);
    }
    if (this_00[2] == 0) {
      this_00[2] = this_00[1];
    }
    this_00[2] = this_00[2] - 1;
    puVar2 = param_2;
    puVar3 = ((undefined4 *)GEN_TOP((this_00[2] * 0x80 + *this_00)));
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    this_00[4] = this_00[4] + 1;
  }
  else {
    if (iVar4 <= this_00[4]) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 * 2;
      }
      F_00d976d0(this_00 GEN_EDX_ARG,iVar4);
    }
    if (this_00[3] == this_00[1]) {
      this_00[3] = 0;
    }
    puVar2 = param_2;
    puVar3 = ((undefined4 *)GEN_TOP((this_00[3] * 0x80 + *this_00)));
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    this_00[3] = this_00[3] + 1;
    this_00[4] = this_00[4] + 1;
  }
  F_00d95b70(this GEN_EDX_ARG,uVar1,param_1);
  return;
}

/* ref: hkJobQueue::AddJobBatch */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d96350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd96350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x300, 0);
  int * this_00;
  undefined8 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2e8)) = this;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar2 + 4)));
  if (puVar6 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar2 + 0xc)))) {
    *puVar6 = ((char *)REFP(0x1138e00));
    uVar1 = rdtsc();
    (*(uint *)(gen_frame + 0x2ec)) = (int)uVar1;
    puVar6[1] = (int)uVar1;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar2 + 4))) = puVar6 + 3;
  }
  uVar3 = F_00d95870(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  (*(uint *)(gen_frame + 0x2ec)) = uVar3;
  (*(int *)(gen_frame + 0x2dc)) = 0;
  if (0 < param_1[1]) {
    do {
      uVar3 = (*(uint *)(gen_frame + 0x2ec));
      iVar8 = *((int *)GEN_TOP((*param_1 + (*(int *)(gen_frame + 0x2dc)) * 4)));
      F_00da1010(((undefined4 *)(gen_frame + 0x250)),iVar8,(uint)*((ushort *)GEN_TOP((iVar8 + 4))));
      uVar4 = F_00d95a70(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x250)));
      iVar8 = *((int *)GEN_TOP((uVar3 + 0x44 + uVar4 * 0x14)));
      this_00 = ((int *)GEN_TOP((uVar3 + 0x40 + uVar4 * 0x14)));
      (*(uint *)(gen_frame + 0x2e0)) = uVar4;
      (*(int * PTR32 *)(gen_frame + 0x2e4)) = this_00;
      if (param_2 == 0) {
        if (iVar8 <= this_00[4]) {
          if (iVar8 == 0) {
            iVar8 = 8;
          }
          else {
            iVar8 = iVar8 * 2;
          }
          F_00d976d0(this_00 GEN_EDX_ARG,iVar8);
        }
        if ((*(int * PTR32 *)(gen_frame + 0x2e4))[2] == 0) {
          (*(int * PTR32 *)(gen_frame + 0x2e4))[2] = (*(int * PTR32 *)(gen_frame + 0x2e4))[1];
        }
        (*(int * PTR32 *)(gen_frame + 0x2e4))[2] = (*(int * PTR32 *)(gen_frame + 0x2e4))[2] - 1;
        puVar6 = ((undefined4 *)(gen_frame + 0x250));
        puVar7 = ((undefined4 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x2e4))[2] * 0x80 + *(*(int * PTR32 *)(gen_frame + 0x2e4)))));
        for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        (*(int * PTR32 *)(gen_frame + 0x2e4))[4] = (*(int * PTR32 *)(gen_frame + 0x2e4))[4] + 1;
      }
      else {
        if (iVar8 <= this_00[4]) {
          if (iVar8 == 0) {
            iVar8 = 8;
          }
          else {
            iVar8 = iVar8 * 2;
          }
          F_00d976d0(this_00 GEN_EDX_ARG,iVar8);
        }
        if ((*(int * PTR32 *)(gen_frame + 0x2e4))[3] == (*(int * PTR32 *)(gen_frame + 0x2e4))[1]) {
          (*(int * PTR32 *)(gen_frame + 0x2e4))[3] = 0;
        }
        puVar6 = ((undefined4 *)(gen_frame + 0x250));
        puVar7 = ((undefined4 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x2e4))[3] * 0x80 + *(*(int * PTR32 *)(gen_frame + 0x2e4)))));
        for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        (*(int * PTR32 *)(gen_frame + 0x2e4))[3] = (*(int * PTR32 *)(gen_frame + 0x2e4))[3] + 1;
        (*(int * PTR32 *)(gen_frame + 0x2e4))[4] = (*(int * PTR32 *)(gen_frame + 0x2e4))[4] + 1;
      }
      F_00d95b70((*(undefined * PTR32 *)(gen_frame + 0x2e8)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x2e0)),(*(uint *)(gen_frame + 0x2ec)));
      iVar8 = (*(int *)(gen_frame + 0x2dc)) + 1;
      (*(int *)(gen_frame + 0x2dc)) = iVar8;
      this = (*(undefined * PTR32 *)(gen_frame + 0x2e8));
    } while (iVar8 < param_1[1]);
  }
  F_00d95890((*(uint *)(gen_frame + 0x2ec)));
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4)));
  pvVar2 = pvVar5;
  if (puVar6 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0xc)))) {
    *puVar6 = &REFG(undefined, 0x1136cb0);
    uVar1 = rdtsc();
    pvVar2 = (LPVOID)uVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x2e8)) = pvVar2;
    puVar6[1] = pvVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))) = puVar6 + 3;
  }
  return (uint)pvVar2;
}

/* ref: hkJobQueue::FinishJobAndGetNextJob */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d96630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd96630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x300, 0);
  short * psVar1;
  int * this_00;
  undefined8 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2e4)) = this;
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
  if (puVar6 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
    *puVar6 = ((char *)REFP(0x1138e30));
    uVar2 = rdtsc();
    (*(int * PTR32 *)(gen_frame + 0x2ec)) = ((int *)GEN_TOP((uint)uVar2));
    puVar6[1] = ((int *)GEN_TOP((uint)uVar2));
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar6 + 3;
  }
  do {
    uVar4 = F_00d95870(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x2e0)) = uVar4;
    (*(uint *)(gen_frame + 0x2e8)) = 0xffffffff;
    if (param_1 != 0) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x20))))(this,uVar4,param_1,((int *)(gen_frame + 0x250)));
      if (uVar5 == 0) {
        uVar5 = F_00d95a70(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x260)));
        (*(uint *)(gen_frame + 0x2e8)) = uVar5;
        this_00 = ((int *)GEN_TOP((uVar4 + 0x40 + uVar5 * 0x14)));
        iVar8 = this_00[1];
        (*(int * PTR32 *)(gen_frame + 0x2ec)) = this_00;
        if (((int *)(gen_frame + 0x250))[0] == 0) {
          if (iVar8 <= this_00[4]) {
            if (iVar8 == 0) {
              iVar8 = 8;
            }
            else {
              iVar8 = iVar8 * 2;
            }
            F_00d976d0(this_00 GEN_EDX_ARG,iVar8);
          }
          if ((*(int * PTR32 *)(gen_frame + 0x2ec))[2] == 0) {
            (*(int * PTR32 *)(gen_frame + 0x2ec))[2] = (*(int * PTR32 *)(gen_frame + 0x2ec))[1];
          }
          (*(int * PTR32 *)(gen_frame + 0x2ec))[2] = (*(int * PTR32 *)(gen_frame + 0x2ec))[2] - 1;
          puVar6 = ((undefined4 *)(gen_frame + 0x260));
          puVar7 = ((undefined4 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x2ec))[2] * 0x80 + *(*(int * PTR32 *)(gen_frame + 0x2ec)))));
          for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          (*(int * PTR32 *)(gen_frame + 0x2ec))[4] = (*(int * PTR32 *)(gen_frame + 0x2ec))[4] + 1;
          uVar4 = (*(uint *)(gen_frame + 0x2e0));
          this = (*(undefined * PTR32 *)(gen_frame + 0x2e4));
        }
        else {
          if (iVar8 <= this_00[4]) {
            if (iVar8 == 0) {
              iVar8 = 8;
            }
            else {
              iVar8 = iVar8 * 2;
            }
            F_00d976d0(this_00 GEN_EDX_ARG,iVar8);
          }
          if ((*(int * PTR32 *)(gen_frame + 0x2ec))[3] == (*(int * PTR32 *)(gen_frame + 0x2ec))[1]) {
            (*(int * PTR32 *)(gen_frame + 0x2ec))[3] = 0;
          }
          puVar6 = ((undefined4 *)(gen_frame + 0x260));
          puVar7 = ((undefined4 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x2ec))[3] * 0x80 + *(*(int * PTR32 *)(gen_frame + 0x2ec)))));
          for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          (*(int * PTR32 *)(gen_frame + 0x2ec))[3] = (*(int * PTR32 *)(gen_frame + 0x2ec))[3] + 1;
          (*(int * PTR32 *)(gen_frame + 0x2ec))[4] = (*(int * PTR32 *)(gen_frame + 0x2ec))[4] + 1;
          uVar4 = (*(uint *)(gen_frame + 0x2e0));
          this = (*(undefined * PTR32 *)(gen_frame + 0x2e4));
        }
      }
      psVar1 = ((short *)GEN_TOP((uVar4 + (uint)*((byte *)GEN_TOP((param_1 + 1))) * 2)));
      *psVar1 = *psVar1 - 1;
      param_1 = 0;
    }
    uVar4 = F_00d97bd0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x2e8)),uVar4,param_3,param_2);
  } while (uVar4 == 0xffffffff);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
  if (puVar6 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)))) {
    *puVar6 = &REFG(undefined, 0x1136cb0);
    uVar2 = rdtsc();
    (*(uint *)(gen_frame + 0x2e8)) = (int)uVar2;
    puVar6[1] = (int)uVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = puVar6 + 3;
  }
  return uVar4;
}

/* ref: hkJobQueue::GetNextJob */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d96980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd96980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d96630(this GEN_EDX_FWD,0,param_1,param_2);
  return uVar1;
}

/* ref: hkJobQueue::ProcessAllJobs */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d969a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd969a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL(0xa0, 0);
  undefined4 * puVar1;
  undefined8 uVar2;
  undefined * pvVar3;
  uint uVar4;
  LPVOID pvVar5;
  char * pcVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x84)) = param_1;
  uVar4 = F_00d96980(param_1 GEN_EDX_FWD,&(*(byte *)(gen_frame + 0x0)),0);
  while (uVar4 == 0) {
    switch((unsigned int)(uintptr_t)((*(byte *)(gen_frame + 0x1)))) {
    case 0: ;
    case 1: ;
    case 0x11: ;
      pcVar6 = ((char *)REFP(0x1138f60));
      break;
    case 2: ;
      pcVar6 = ((char *)REFP(0x1138f4c));
      break;
    case 3: ;
      pcVar6 = ((char *)REFP(0x1138f3c));
      break;
    case 4: ;
      pcVar6 = ((char *)REFP(0x1138f1c));
      break;
    case 5: ;
      pcVar6 = ((char *)REFP(0x1138efc));
      break;
    case 6: ;
      pcVar6 = ((char *)REFP(0x1138ee8));
      break;
    case 7: ;
      pcVar6 = ((char *)REFP(0x1138edc));
      break;
    case 8: ;
      pcVar6 = ((char *)REFP(0x1138ed4));
      break;
    case 9: ;
      pcVar6 = ((char *)REFP(0x1138ec0));
      break;
    case 10: ;
      pcVar6 = ((char *)REFP(0x1138eac));
      break;
    case 0xb: ;
      pcVar6 = ((char *)REFP(0x1138e94));
      break;
    case 0xc: ;
      pcVar6 = ((char *)REFP(0x1138e84));
      break;
    case 0xd: ;
      pcVar6 = ((char *)REFP(0x1138e74));
      break;
    default: ;
      pcVar6 = ((char *)REFP(0x1138e40));
      break;
    case 0xf: ;
      pcVar6 = ((char *)REFP(0x1138e60));
      break;
    case 0x10: ;
      pcVar6 = ((char *)REFP(0x1138e54));
      break;
    case 0x14: ;
      pcVar6 = ((char *)REFP(0x1138e48));
    }
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x84));
    if ((param_2 != '\0') &&
       (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))), puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0xc))))) {
      *puVar1 = pcVar6;
      uVar2 = rdtsc();
      (*(undefined4 *)(gen_frame + 0x8c)) = (int)uVar2;
      puVar1[1] = (int)uVar2;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))) = puVar1 + 3;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x84)) + 0x288))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x84)) + 0x288))) + 4))))
                (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x84)) + 0x288))) GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0x1)),(uint)(*(byte *)(gen_frame + 0x0)));
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + (uint)(*(byte *)(gen_frame + 0x1)) * 0x10 + 0x128))) + (uint)(*(byte *)(gen_frame + 0x0)) * 4)))
            )(pvVar3,&(*(byte *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x80)) = uVar4;
    if (*((int *)GEN_TOP(((int)pvVar3 + 0x288))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x288))) + 8))))
                (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x288))) GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0x1)));
    }
    uVar4 = (*(uint *)(gen_frame + 0x80));
    if ((param_2 != '\0') &&
       (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))), puVar1 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0xc))))) {
      *puVar1 = &REFG(undefined, 0x1136cb0);
      uVar2 = rdtsc();
      (*(undefined4 *)(gen_frame + 0x88)) = (int)uVar2;
      puVar1[1] = (int)uVar2;
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 4))) = puVar1 + 3;
    }
  }
  return uVar4;
}

/* ref: FUN_00d96ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d96ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd96ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *(undefined4 *)this = 1;
  F_00d9baa0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = 1;
  return (uint)this;
}

/* ref: hkJobQueue::hkJobQueue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d96bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd96bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  byte bVar5;
  int iVar6;
  int local_8;
  
  F_00da5ee0(this GEN_EDX_FWD,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  F_00d96ba0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x27c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x280))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x284))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x288))) = 0;
  gen_imp_TlsSetValue(REFG(undefined4, 0x15d9a8c),(LPVOID)0x0);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x250);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    iVar6 = uVar3 + 0x40;
    local_8 = 0x19;
    do {
      F_00d96f70(iVar6 GEN_EDX_ARG);
      iVar6 = iVar6 + 0x14;
      local_8 = local_8 - 1;
    } while (-1 < local_8);
  }
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar3;
  *((undefined1 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x30))) = 0;
  F_00d983b0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x2c))) = 0;
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x24)))) {
    puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x128)));
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[2] = ((code *)REFP(0xd95830));
      puVar4[3] = ((code *)REFP(0xd95840));
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + iVar6 * 2))) = 0;
      bVar5 = (byte)iVar6;
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 4;
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x2c)));
      *puVar1 = *puVar1 | 1 << GEN_SHC(bVar5, bVar5);
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 0x24))));
  }
  *((gen_code32 *)GEN_TOP(((int)this + 0x1c))) = ((code *)REFP(0xd95a10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x20))) = ((code *)REFP(0xd95a40));
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x278))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  F_00d95c20(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: hkJobQueue::~hkJobQueue */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d96d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd96d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined * pvVar4;
  undefined4 * local_8;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x18)));
  if (iVar3 != 0) {
    pvVar4 = ((undefined *)GEN_TOP((iVar3 + 0x248)));
    local_8 = ((undefined4 *)GEN_TOP(0x19));
    do {
      pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 0x14)));
      F_00d976a0(pvVar4 GEN_EDX_FWD);
      local_8 = ((undefined4 *)GEN_TOP(((int)local_8 - 1)));
    } while (-1 < (int)local_8);
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,iVar3,0x250);
  }
  if ((*((char *)GEN_TOP(((int)this + 0x74))) != '\0') && (iVar3 = 0, 0 < *((int *)GEN_TOP(((int)this + 0x8c))))) {
    local_8 = ((undefined4 *)GEN_TOP(((int)this + 0x78)));
    do {
      pvVar4 = ((undefined *)GEN_TOP(*local_8));
      if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
        F_00da36a0(pvVar4 GEN_EDX_ARG);
        pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,pvVar4,4);
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x8c))));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x284)));
  *((undefined4 *)GEN_TOP(((int)this + 0x280))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x27c))),(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x27c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x284))) = 0x80000000;
  F_00a00ae0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG);
  return (uint)(gen_imp_DeleteCriticalSection(this));
}

/* ref: FUN_00d96e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d96e40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd96e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (int)*((char *)GEN_TOP((param_2 + 0x11c + in_ecx)));
}

/* ref: hkThreadLocalPointer::hkThreadLocalPointer */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d96e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd96e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  DWORD DVar1;
  
  DVar1 = gen_imp_TlsAlloc();
  *(DWORD *)this = DVar1;
  return (uint)this;
}

/* ref: hkThreadLocalPointer::SetValue */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d96e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPVOID param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd96e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPVOID param_1 = (LPVOID)gen_a1;)
  return (uint)(gen_imp_TlsSetValue(*(DWORD *)this,param_1));
}

/* ref: FUN_00d96ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d96ed0(GEN_P(char * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd96ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * in_ecx = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == param_3;
  return param_2;
}

/* ref: Array12::At */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d96f40(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd96f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: JobQueue::JobQueue */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d96f70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd96f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  return (uint)in_ecx;
}

/* ref: JobQueue::PopFront */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d96f90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd96f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = ((undefined4 *)GEN_TOP((in_ecx[2] * 0x80 + *in_ecx)));
  puVar3 = param_2;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ecx[2] = in_ecx[2] + 1;
  in_ecx[4] = in_ecx[4] - 1;
  if (in_ecx[2] == in_ecx[1]) {
    in_ecx[2] = 0;
  }
  return (uint)in_ecx;
}

/* ref: JobQueue::IsEmpty */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d96fd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd96fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0x10))) == 0;
  return param_2;
}

/* ref: Array12::At_00d97030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97030(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd97030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: IntArray::At */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97070(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd97070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Array12::Reserve */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d970a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd970a0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Allocator::FreeArray12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d970e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd970e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: Global::CopyDwords_00d97110 */
GEN_LIB GEN_FRAME unsigned int F_00d97110(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd97110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::CopyDwordsN */
GEN_LIB GEN_FRAME unsigned int F_00d97140(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd97140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::ThreadAlloc */
GEN_LIB GEN_FRAME uint F_00d97170(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd97170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::ThreadFree4 */
GEN_LIB GEN_FRAME unsigned int F_00d97190(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd97190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::ThreadAlloc2 */
GEN_LIB GEN_FRAME uint F_00d971e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd971e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::FreeJobQueueSet */
GEN_LIB GEN_FRAME unsigned int F_00d97200(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd97200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::ScalarDeletingDestructor_00d97230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d97230(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd97230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00da36a0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: Array12::PushBackUninit */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d972c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd972c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: Global::AllocJobs */
GEN_LIB GEN_FRAME uint F_00d97300(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd97300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1 << 7);
  return uVar2;
}

/* ref: Global::FreeJobs */
GEN_LIB GEN_FRAME uint F_00d97330(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd97330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,param_2 << 7);
  return uVar2;
}

